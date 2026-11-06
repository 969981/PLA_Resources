"""ROM-free coverage reconciliation tests."""
import csv
import json
from pathlib import Path
import sys
import tempfile
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "scripts"))
from audit_pla_gfpak_coverage import audit


class TestCoverage(unittest.TestCase):
    def test_covered_missing_and_duplicates(self):
        prefix = "b38cd4c18831237d85312886f3a377b5_NCA/1/"
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            csv_file = root / "inventory.csv"
            with csv_file.open("w", encoding="utf-8", newline="") as stream:
                writer = csv.DictWriter(stream, ["RelativePath"])
                writer.writeheader()
                for name in ["bin/archive/a.gfpak", "bin/archive/b.gfpak"]:
                    writer.writerow({"RelativePath": prefix + name})
            one = root / "one.jsonl"
            two = root / "two.jsonl"
            one.write_text(json.dumps({"source_relative_path": "bin/archive/a.gfpak",
                                       "state": "VERIFIED"}) + "\n", encoding="utf-8")
            two.write_text(json.dumps({"source_relative_path": "bin/archive/b.gfpak",
                                       "state": "SKIPPED_UNCHANGED"}) + "\n", encoding="utf-8")
            self.assertTrue(audit(csv_file, [one, two], 2)["complete"])
            self.assertEqual(len(audit(csv_file, [one], 2)["missing"]), 1)
            self.assertFalse(audit(csv_file, [one, one], 2)["complete"])
            one.write_text(json.dumps({"source_relative_path": "bin/archive/a.gfpak",
                                       "state": "PARTIAL"}) + "\n", encoding="utf-8")
            self.assertEqual(len(audit(csv_file, [one, two], 2)["unverified"]), 1)


if __name__ == "__main__":
    unittest.main()
