"""ROM-free tests for the PLA GFPak batch engine."""
import hashlib
import json
from pathlib import Path
import sys
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "scripts"))
from extract_pla_gfpak import (SAMPLES, fingerprint, process_one, safe_member_path,
                              shard, verify_manifest)


class TestGFPakBatch(unittest.TestCase):
    def test_sample_families(self):
        self.assertEqual(len(SAMPLES), 3)
        self.assertTrue(any("/pokemon/" in p for p in SAMPLES))
        self.assertTrue(any("/appli/" in p for p in SAMPLES))
        self.assertTrue(any("/field/" in p for p in SAMPLES))

    def test_stable_nonoverlapping_shards(self):
        names = [f"bin/archive/pokemon/pm{i:04}.gfpak" for i in range(100)]
        bins = [set(n for n in names if shard(n, 5) == i) for i in range(5)]
        self.assertEqual(set.union(*bins), set(names))
        self.assertEqual(sum(map(len, bins)), len(names))

    def test_path_safety(self):
        for p in ("../escape", "/root", "foo/../bad", "C:/bad", r"bad\name", ""):
            self.assertFalse(safe_member_path(p), p)
        self.assertTrue(safe_member_path("entry_00000_0123456789ABCDEF.nested/entry_00001.bin"))

    def test_verification_and_resume(self):
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            source = root / "source" / "bin/archive/field/one.gfpak"
            source.parent.mkdir(parents=True)
            source.write_bytes(b"real-synthetic-input")
            hsource = hashlib.sha256(source.read_bytes()).hexdigest()
            dest = root / "out"
            extracted = dest / "bin/archive/field/one.gfpak/extracted"
            extracted.mkdir(parents=True)
            member = extracted / "entry_00000_ABC.bin"
            member.write_bytes(b"decoded")
            mhash = hashlib.sha256(member.read_bytes()).hexdigest()
            (extracted / "_manifest.json").write_text(json.dumps({
                "schema_version": 1, "source_sha256": hsource,
                "parser": "pkNX.Containers.GFPack", "extracted_count": 1,
                "members": [{"path": member.name, "sha256": mhash, "decoded_size": 7}]
            }))
            (extracted / "_receipt.json").write_text(json.dumps({
                "fingerprint": fingerprint(hsource, 2)
            }))
            self.assertEqual(verify_manifest(extracted, hsource, 2), (1, 7))
            job = ("bin/archive/field/one.gfpak", str(root / "source"), str(dest),
                   str(root / "no-cli"), "dotnet", None, 2, 2, 10, 0, True, False)
            self.assertEqual(process_one(job)["state"], "SKIPPED_UNCHANGED")
            member.write_bytes(b"tampered")
            with self.assertRaises(ValueError):
                verify_manifest(extracted, hsource, 2)
            # A tampered checkpoint must never be accepted as a successful resume.
            self.assertEqual(process_one(job)["state"], "FAILED")

    def test_planned_and_missing(self):
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            rel = "bin/archive/appli/one.gfpak"
            job = (rel, str(root), str(root / "out"), "missing-cli", "dotnet",
                   None, 2, 1, 10, 0, False, True)
            self.assertEqual(process_one(job)["state"], "SOURCE_MISSING")
            file = root / rel
            file.parent.mkdir(parents=True)
            file.write_bytes(b"test")
            self.assertEqual(process_one(job)["state"], "PLANNED")


if __name__ == "__main__":
    unittest.main()
