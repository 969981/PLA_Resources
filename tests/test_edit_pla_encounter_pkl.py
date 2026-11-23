"""Synthetic only: exact copy edit, search, index and provenance safeguards."""
import contextlib
import io
import json
import sys
import tempfile
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "scripts"))
from pla_encounter_pkl import decode_pkl, encode_pkl
from edit_pla_encounter_pkl import (
    find_matches, main, parse_updates, patch_area, patch_slot, read_areas,
    save_edited, sha256,
)

FIXTURE = [
    {"locations": [9, 56, 60], "type": 0,
     "slots": [
         {"species": 550, "form": 2, "alpha": 0, "level_min": 41,
          "level_max": 44, "gender": 0, "flawless_ivs": 0},
         {"species": 550, "form": 2, "alpha": 1, "level_min": 56,
          "level_max": 59, "gender": 0, "flawless_ivs": 3},
     ]},
    {"locations": [7], "type": 4,
     "slots": [{"species": 25, "form": 0, "alpha": 0,
                "level_min": 20, "level_max": 30, "gender": 2,
                "flawless_ivs": 0}]},
]


class TestPLAEncounterPKLEdit(unittest.TestCase):
    def test_find_by_species_form_location_type_and_alpha(self):
        result = find_matches(FIXTURE, species=550, form=2, location=56,
                              area_type=0, alpha=1)
        self.assertEqual(len(result), 1)
        self.assertEqual((result[0]["area_index"], result[0]["slot_index"]), (0, 1))
        self.assertEqual(find_matches(FIXTURE, species=550, location=7), [])

    def test_slot_edit_and_roundtrip(self):
        changed, before, after = patch_slot(FIXTURE, 0, 1, {"gender": 2})
        self.assertEqual(before["gender"], 0)
        self.assertEqual(after["gender"], 2)
        self.assertEqual(FIXTURE[0]["slots"][1]["gender"], 0)
        self.assertEqual(decode_pkl(encode_pkl(changed)), changed)

    def test_area_edit_and_roundtrip(self):
        changed, before, after = patch_area(FIXTURE, 0, locations=[9, 10], area_type=3)
        self.assertEqual(before, {"locations": [9, 56, 60], "type": 0})
        self.assertEqual(after, {"locations": [9, 10], "type": 3})
        self.assertEqual(decode_pkl(encode_pkl(changed)), changed)
        self.assertEqual(FIXTURE[0]["locations"], [9, 56, 60])

    def test_invalid_edits_rejected(self):
        for updates in ({"gender": 3}, {"level_min": 100},
                        {"species": 1026}, {"nope": 1}, {}):
            with self.subTest(updates=updates), self.assertRaises(ValueError):
                patch_slot(FIXTURE, 0, 0, updates)
        for index in (-1, 2):
            with self.subTest(index=index), self.assertRaises(ValueError):
                patch_slot(FIXTURE, index, 0, {"gender": 2})
        with self.assertRaises(ValueError):
            patch_area(FIXTURE, 0, locations=[256])
        with self.assertRaises(ValueError):
            patch_slot(FIXTURE, 0, 0, {"gender": 0})

    def test_parse_assignment(self):
        self.assertEqual(parse_updates(["gender=2", "species=0x226"]),
                         {"gender": 2, "species": 550})
        for values in (["gender"], ["field=1"], ["gender=a"],
                       ["gender=2", "gender=1"], []):
            with self.subTest(assignments=values), self.assertRaises(ValueError):
                parse_updates(values)

    def test_safe_write_audit_and_no_source_mutation(self):
        with tempfile.TemporaryDirectory() as root:
            inp, out = Path(root)/"original.pkl", Path(root)/"user-modified.pkl"
            original = encode_pkl(FIXTURE)
            inp.write_bytes(original)
            changed, before, after = patch_slot(FIXTURE, 0, 0, {"gender": 2})
            op = {"kind": "slot", "area_index": 0, "slot_index": 0,
                  "before": before, "after": after, "reason": "synthetic test"}
            receipt = save_edited(inp, out, original, changed, op)
            self.assertEqual(inp.read_bytes(), original)
            self.assertEqual(receipt["status"], "USER_MODIFIED_NOT_NATIVE")
            self.assertEqual(decode_pkl(out.read_bytes()), changed)
            self.assertEqual(receipt["source_sha256"], sha256(original))
            self.assertEqual(json.loads(Path(str(out)+".audit.json").read_text())["output_sha256"],
                             sha256(out.read_bytes()))
            with self.assertRaises(FileExistsError):
                save_edited(inp, out, original, changed, op)
            with self.assertRaises(ValueError):
                save_edited(inp, inp, original, changed, op)

    def test_expected_hash_protects_input(self):
        with tempfile.TemporaryDirectory() as root:
            inp=Path(root)/"original.pkl"
            inp.write_bytes(encode_pkl(FIXTURE))
            self.assertEqual(read_areas(inp, sha256(inp.read_bytes()))[1], FIXTURE)
            with self.assertRaisesRegex(ValueError, "SHA-256 mismatch"):
                read_areas(inp, "0" * 64)

    def test_cli_show_find_and_edit(self):
        with tempfile.TemporaryDirectory() as root:
            inp, out = Path(root)/"input.pkl", Path(root)/"changed.pkl"
            inp.write_bytes(encode_pkl(FIXTURE))
            stream = io.StringIO()
            with contextlib.redirect_stdout(stream):
                main(["find", str(inp), "--species", "550", "--location", "9", "--limit", "1"])
            self.assertEqual(json.loads(stream.getvalue())["total_matches"], 2)
            stream = io.StringIO()
            with contextlib.redirect_stdout(stream):
                main(["show", str(inp), "--area", "0"])
            self.assertEqual(json.loads(stream.getvalue())["slots"][1]["gender"], 0)
            stream = io.StringIO()
            with contextlib.redirect_stdout(stream):
                main(["set-slot", str(inp), "--area", "0", "--slot", "0",
                      "--set", "gender=2", "--reason", "test change",
                      "--expect-sha256", sha256(inp.read_bytes()),
                      "--output", str(out)])
            self.assertEqual(decode_pkl(out.read_bytes())[0]["slots"][0]["gender"], 2)
            self.assertEqual(json.loads(stream.getvalue())["operation"]["reason"], "test change")


if __name__ == "__main__":
    unittest.main()
