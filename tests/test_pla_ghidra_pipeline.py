"""Synthetic no-ROM tests for the PLA Ghidra exporter and lossless publisher."""
from __future__ import annotations

import gzip
import hashlib
import importlib.util
import json
from pathlib import Path
import sqlite3
import tempfile
import unittest
import zipfile


ROOT = Path(__file__).resolve().parents[1]
TOOLS = ROOT / "tools" / "ghidra"


def load(name: str):
    spec = importlib.util.spec_from_file_location(name, TOOLS / (name + ".py"))
    module = importlib.util.module_from_spec(spec)
    assert spec.loader
    spec.loader.exec_module(module)
    return module


class GhidraPipelineTests(unittest.TestCase):
    def setUp(self):
        self.tmp = tempfile.TemporaryDirectory()
        self.addCleanup(self.tmp.cleanup)
        self.root = Path(self.tmp.name)
        self.events = self.root / "events.ndjson.gz"
        self.payload = [
            {"type": "meta", "program": "PLA111", "decompile_requested": True,
             "image_base": "00000000"},
            {"type": "function", "entry": "00100000", "name": "FUN_00100000",
             "body_bytes": 4, "body_sha256": "ignored"},
            {"type": "decompile", "entry": "00100000", "status": "OK",
             "c": "int FUN_00100000(void) { return 42; }"},
            {"type": "function", "entry": "00101000", "name": "FUN_00101000",
             "body_bytes": 4, "body_sha256": "ignored"},
            {"type": "decompile", "entry": "00101000", "status": "ERROR",
             "error": "synthetic decompiler failure"},
            {"type": "instruction", "address": "00100000", "length": 4,
             "bytes_hex": "c0035fd6", "mnemonic": "ret"},
            {"type": "summary", "functions": 2, "instructions": 1,
             "references": 0, "symbols": 0, "defined_data": 0,
             "decompiled_ok": 1, "decompiled_failed": 1, "complete": True},
        ]
        with gzip.open(self.events, "wt", encoding="utf-8") as out:
            for entry in self.payload:
                out.write(json.dumps(entry, ensure_ascii=False) + "\n")

    def test_c_export_includes_every_function_status(self):
        exporter = load("pla_extract_c")
        zip_path = self.root / "all_c.zip"
        index = self.root / "index.csv"
        report = self.root / "c_manifest.json"
        meta = exporter.run(self.events, zip_path, index, report, "test-hash")
        self.assertEqual(meta["functions"], 2)
        self.assertEqual(meta["c_success"], 1)
        self.assertEqual(meta["c_fail_or_empty"], 1)
        self.assertIn("synthetic decompiler failure", index.read_text())
        with zipfile.ZipFile(zip_path) as z:
            self.assertIn("decompiled/00100000.c", z.namelist())
            self.assertIn("int FUN_00100000(void)", z.read("decompiled/00100000.c").decode())
            self.assertNotIn("decompiled/00101000.c", z.namelist())

    def test_sqlite_records_round_trip_and_hash(self):
        builder = load("pla_build_sqlite")
        fake_elf = self.root / "fake-elf-test-only"
        fake_elf.write_bytes(b"synthetic fixture not a game executable")
        digest = hashlib.sha256(fake_elf.read_bytes()).hexdigest()
        builder.EXPECTED_ELF_SHA256["pla"] = digest
        dest = self.root / "pla.sqlite"
        meta = builder.build(fake_elf, self.events, dest, "pla")
        self.assertEqual(meta["status"], "COMPLETE")
        with sqlite3.connect(dest) as db:
            self.assertEqual(db.execute("PRAGMA integrity_check").fetchone()[0], "ok")
            self.assertEqual(db.execute("SELECT COUNT(*) FROM functions").fetchone()[0], 2)
            self.assertEqual(db.execute("SELECT COUNT(*) FROM decompilation").fetchone()[0], 2)
            self.assertEqual(db.execute(
                "SELECT value FROM metadata WHERE key='original_elf_sha256'"
            ).fetchone()[0], digest)

    def test_sqlite_contains_reconstructable_original_elf_bytes(self):
        builder = load("pla_build_sqlite")
        embed = load("pla_embed_elf")
        elf = self.root / "synthetic-input"
        elf.write_bytes(bytes(range(256)) * 15)
        digest = hashlib.sha256(elf.read_bytes()).hexdigest()
        builder.EXPECTED_ELF_SHA256["pla"] = digest
        embed.EXPECTED_SHA = digest
        db_file = self.root / "with-elf.sqlite"
        builder.build(elf, self.events, db_file, "pla")
        proof = embed.add_chunks(db_file, elf, 512)
        self.assertEqual(proof["status"], "BYTE_EXACT_ELF_RECOVERABLE")
        self.assertEqual(proof["original_file_sha256"], digest)
        self.assertGreater(proof["chunk_count"], 1)
        self.assertEqual(embed.verify_chunks(db_file)["original_file_size"], elf.stat().st_size)
        with sqlite3.connect(db_file) as db:
            db.execute("UPDATE original_elf_chunks SET raw_bytes=? WHERE chunk_index=0",
                       (b"corrupted",))
        with self.assertRaises(ValueError):
            embed.verify_chunks(db_file)

    def test_lossless_byte_shards_and_whole_ndjson_rows(self):
        pub = load("pla_publish_split")
        restore = load("pla_restore_split")
        pub.LIMIT = 90
        original = self.root / "original.bin"
        original.write_bytes(bytes(range(256)) * 2)
        spec = pub.chunk_binary(original, self.root / "parts", "example")
        self.assertGreater(len(spec["parts"]), 1)
        restored = self.root / "restored.bin"
        restore.combine(self.root / "parts", spec, restored)
        self.assertEqual(restored.read_bytes(), original.read_bytes())
        first = self.root / "parts" / spec["parts"][0]["path"]
        first.write_bytes(b"x" + first.read_bytes()[1:])
        with self.assertRaises(ValueError):
            restore.combine(self.root / "parts", spec, self.root / "should-fail.bin")

        # NDJSON rows must never be split, and the result must be actual uncompressed JSON.
        pub.LIMIT = 220
        ndjson = pub.chunk_ndjson(self.events, self.root / "ndjson")
        self.assertGreater(len(ndjson["parts"]), 1)
        source_lines = gzip.open(self.events, "rb").read().splitlines(keepends=True)
        assembled_lines = []
        for part in ndjson["parts"]:
            lines = (self.root / "ndjson" / part["path"]).read_bytes().splitlines(keepends=True)
            self.assertTrue(all(x.endswith(b"\n") for x in lines))
            assembled_lines.extend(lines)
        self.assertEqual(source_lines, assembled_lines)


if __name__ == "__main__":
    unittest.main()
