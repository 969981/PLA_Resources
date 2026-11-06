"""Synthetic 7z multivolume restoration test; no game data."""
import csv
import hashlib
import os
from pathlib import Path
import shutil
import subprocess
import sys
import tempfile
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "scripts"))
from restore_pla_gfpak_volumes import restore, NCA


class TestVolumeRestore(unittest.TestCase):
    def test_restores_and_validates_split_archive(self):
        sevenzip = shutil.which("7z") or shutil.which("7za")
        if not sevenzip and os.name == "nt":
            candidate = Path(os.environ.get("ProgramFiles", "C:/Program Files")) / "7-Zip/7z.exe"
            sevenzip = str(candidate) if candidate.exists() else None
        if not sevenzip:
            self.skipTest("7zip not installed")
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            romfs = root / "romfs"
            folder = romfs / "bin/archive/field/model/pack"
            folder.mkdir(parents=True)
            original = folder / "test.gfpak"
            data = os.urandom(8192)
            original.write_bytes(data)
            digest = hashlib.sha256(data).hexdigest()
            manifest = root / "inventory.csv"
            with manifest.open("w", newline="", encoding="utf-8") as stream:
                writer = csv.DictWriter(stream, ["RelativePath", "SizeBytes", "SHA256"])
                writer.writeheader()
                writer.writerow({"RelativePath": NCA + "/1/bin/archive/field/model/pack/test.gfpak",
                                 "SizeBytes": str(len(data)), "SHA256": digest})
            subprocess.run([sevenzip, "a", "-t7z", "-mx=0", "-v2k",
                            "test.gfpak.7z", "test.gfpak"], cwd=folder,
                           capture_output=True, text=True, check=True)
            self.assertTrue((folder / "test.gfpak.7z.001").exists())
            original.unlink()
            receipt = restore(romfs, manifest, sevenzip)
            self.assertEqual(len(receipt), 1)
            self.assertEqual(receipt[0]["state"], "RESTORED_VERIFIED")
            self.assertEqual(original.read_bytes(), data)
            self.assertEqual(len(restore(romfs, manifest, sevenzip)), 1)


if __name__ == "__main__":
    unittest.main()
