#!/usr/bin/env python3
"""Reassemble verified PLA Ghidra project, raw SQLite and plain NDJSON."""
from __future__ import annotations

import argparse
import hashlib
import json
import shutil
import sqlite3
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from pla_embed_elf import verify_chunks


def checksum(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as f:
        for chunk in iter(lambda: f.read(4 << 20), b""):
            h.update(chunk)
    return h.hexdigest()


def combine(source: Path, spec: dict, dest: Path, relative_parts: bool = True) -> None:
    dest.parent.mkdir(parents=True, exist_ok=True)
    tmp = dest.with_name(dest.name + ".tmp")
    total = 0
    try:
        with tmp.open("wb") as output:
            for part in spec["parts"]:
                sub = Path(part["path"])
                if sub.is_absolute() or ".." in sub.parts:
                    raise ValueError("Unsafe part filename")
                path = source / sub
                if path.stat().st_size != part["size"] or checksum(path) != part["sha256"]:
                    raise ValueError("Corrupted/missing shard: " + str(path))
                with path.open("rb") as inp:
                    shutil.copyfileobj(inp, output, 4 << 20)
                total += part["size"]
        if total != spec["size"] or checksum(tmp) != spec["sha256"]:
            raise ValueError("Assembled SHA256 or length mismatch: " + str(dest))
        tmp.replace(dest)
    finally:
        if tmp.exists():
            tmp.unlink()


def extract_elf(db_path: Path, out: Path, sha_expected: str) -> dict:
    """Rebuild original unmodified ELF from byte-verified SQLite chunks."""
    target = out / "main.elf"
    if target.exists():
        raise ValueError("ELF output already exists")
    digest = hashlib.sha256()
    size = 0
    try:
        with sqlite3.connect(db_path) as db, target.open("xb") as writer:
            for (raw,) in db.execute(
                    "SELECT raw_bytes FROM original_elf_chunks ORDER BY chunk_index"):
                writer.write(raw)
                digest.update(raw)
                size += len(raw)
        if digest.hexdigest() != sha_expected:
            raise ValueError("Extracted original ELF SHA256 mismatch")
        return {"filename": target.name, "size": size, "sha256": digest.hexdigest()}
    except Exception:
        if target.exists():
            target.unlink()
        raise


def restore(source: Path, out: Path, no_project: bool = False, extract_original: bool = False) -> dict:
    info = json.loads((source / "parts_manifest.json").read_text(encoding="utf-8"))
    game = info["game"]
    if game != "pla" or info.get("status") != "UNCOMPRESSED_SPLIT_VERIFIED":
        raise ValueError("Not a verified PLA Ghidra split publication")
    if source.resolve() == out.resolve() or source.resolve() in out.resolve().parents:
        raise ValueError("Restore outside original tracked tree")
    if out.exists() and any(out.iterdir()):
        raise ValueError("Restore directory must be empty")
    out.mkdir(parents=True, exist_ok=True)
    db_path = out / (game + ".sqlite")
    json_path = out / (game + "_events.ndjson")
    combine(source / "database", info["sqlite"], db_path)
    combine(source / "ndjson", info["ndjson"], json_path)
    if not no_project:
        shutil.copytree(source / "project", out / "project")
        for path, details in info["project"]["split_files"].items():
            rel = Path(path)
            if rel.is_absolute() or ".." in rel.parts:
                raise ValueError("Invalid native project path")
            combine(source / "project_parts", details, out / "project" / rel)
        stem = "PLA111"
        if not (out / "project" / (stem + ".gpr")).is_file() or not (out / "project" / (stem + ".rep")).is_dir():
            raise ValueError("Invalid native Ghidra project reconstruction")
    with sqlite3.connect(db_path) as db:
        integrity = db.execute("PRAGMA integrity_check").fetchone()[0]
        counts = {table: db.execute("SELECT COUNT(*) FROM " + table).fetchone()[0]
                  for table in ("functions", "instructions", "references_full", "decompilation")}
        if integrity != "ok" or counts != info["sqlite_counts"]:
            raise ValueError("Reassembled SQLite has invalid content")
    elf_proof = verify_chunks(db_path)
    if elf_proof["original_file_sha256"] != info["original_elf_sha256"]:
        raise ValueError("Embedded original ELF identity differs from publication metadata")
    with json_path.open("rb") as data:
        number_of_lines = sum(1 for _ in data)
    if number_of_lines != info["ndjson"]["lines"]:
        raise ValueError("Reassembled NDJSON record count mismatch")
    original_elf_file = extract_elf(db_path, out, elf_proof["original_file_sha256"]) if extract_original else None
    result = {"game": game, "status": "REASSEMBLED_AND_SHA256_VERIFIED",
              "sqlite_sha256": checksum(db_path), "ndjson_sha256": checksum(json_path),
              "sqlite_integrity": integrity, "sqlite_counts": counts,
              "ndjson_lines": number_of_lines, "native_project": not no_project, "original_elf_chunks": elf_proof, "extracted_elf": original_elf_file}
    (out / "restore_report.json").write_text(json.dumps(result, indent=2) + "\n", encoding="utf-8")
    return result


def main() -> None:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--source", type=Path, required=True, help="PLA publication subdirectory")
    p.add_argument("--out", type=Path, required=True)
    p.add_argument("--no-project", action="store_true")
    p.add_argument("--extract-elf", action="store_true", help="Also reconstruct original main.elf from SQLite BLOBs")
    args = p.parse_args()
    print(json.dumps(restore(args.source, args.out, args.no_project, args.extract_elf), indent=2))


if __name__ == "__main__":
    main()
