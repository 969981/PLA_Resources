#!/usr/bin/env python3
"""Add and verify byte-exact original ELF chunks in an existing PLA Ghidra SQLite.

Input is the verified, already published PLA main.elf. Never rewrites the source.
The underlying Ghidra analysis tables and event provenance stay unchanged.
"""
from __future__ import annotations

import argparse
import hashlib
import json
from pathlib import Path
import sqlite3

EXPECTED_SHA = "260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794"
DEFAULT_CHUNK = 4 * 1024 * 1024


def file_sha256(file: Path) -> str:
    digest = hashlib.sha256()
    with file.open("rb") as src:
        for block in iter(lambda: src.read(4 * 1024 * 1024), b""):
            digest.update(block)
    return digest.hexdigest()


def add_chunks(db_path: Path, elf: Path, chunk_size: int = DEFAULT_CHUNK) -> dict:
    if chunk_size < 1 or chunk_size > 16 * 1024 * 1024:
        raise ValueError("Chunk size must be 1..16777216 bytes")
    if not db_path.is_file() or not elf.is_file():
        raise FileNotFoundError("ELF and existing Ghidra SQLite must both exist")
    actual_sha = file_sha256(elf)
    if actual_sha != EXPECTED_SHA:
        raise ValueError("Original ELF SHA256 mismatch")
    total_size = elf.stat().st_size

    with sqlite3.connect(db_path) as db:
        row = db.execute(
            "SELECT value FROM metadata WHERE key='original_elf_sha256'"
        ).fetchone()
        if not row or row[0] != actual_sha:
            raise ValueError("SQLite analysis ELF identity mismatch")
        if db.execute("PRAGMA integrity_check").fetchone()[0] != "ok":
            raise ValueError("Input SQLite integrity check failed")
        if db.execute(
            "SELECT name FROM sqlite_master WHERE type='table' AND name='original_elf_chunks'"
        ).fetchone():
            raise ValueError("ELF bytes already embedded; refusing duplicate rewrite")
        db.execute("""
            CREATE TABLE original_elf_chunks (
                chunk_index INTEGER PRIMARY KEY,
                byte_offset INTEGER NOT NULL UNIQUE,
                byte_length INTEGER NOT NULL,
                chunk_sha256 TEXT NOT NULL,
                raw_bytes BLOB NOT NULL
            )
        """)
        db.execute("""
            CREATE TABLE original_elf_manifest (
                id INTEGER PRIMARY KEY CHECK(id=1),
                original_file_size INTEGER NOT NULL,
                original_file_sha256 TEXT NOT NULL,
                chunk_size INTEGER NOT NULL,
                chunk_count INTEGER NOT NULL
            )
        """)
        n = 0
        with elf.open("rb") as src:
            while block := src.read(chunk_size):
                db.execute(
                    "INSERT INTO original_elf_chunks VALUES (?,?,?,?,?)",
                    (n, n * chunk_size, len(block),
                     hashlib.sha256(block).hexdigest(), block),
                )
                n += 1
        db.execute(
            "INSERT INTO original_elf_manifest VALUES(1,?,?,?,?)",
            (total_size, actual_sha, chunk_size, n),
        )
        db.commit()
        db.execute("PRAGMA wal_checkpoint(TRUNCATE)")
        db.execute("PRAGMA journal_mode=DELETE")
        if db.execute("PRAGMA integrity_check").fetchone()[0] != "ok":
            raise ValueError("Augmented SQLite integrity check failed")
    proof = verify_chunks(db_path)
    if proof["original_file_sha256"] != actual_sha or proof["original_file_size"] != total_size:
        raise ValueError("ELF chunk proof mismatch")
    return proof


def verify_chunks(db_path: Path) -> dict:
    with sqlite3.connect(db_path) as db:
        row = db.execute("""
            SELECT original_file_size,original_file_sha256,chunk_size,chunk_count
            FROM original_elf_manifest WHERE id=1
        """).fetchone()
        if not row:
            raise ValueError("Missing source ELF manifest")
        total, expected, unit, expected_count = row
        digest = hashlib.sha256()
        pos = 0
        n = 0
        for index, offset, length, chunk_sha, raw in db.execute("""
            SELECT chunk_index,byte_offset,byte_length,chunk_sha256,raw_bytes
            FROM original_elf_chunks ORDER BY chunk_index
        """):
            if index != n or offset != pos or length != len(raw):
                raise ValueError("ELF byte sequence/offset/length mismatch")
            if length < 1 or length > unit:
                raise ValueError("Invalid ELF byte chunk length")
            if hashlib.sha256(raw).hexdigest() != chunk_sha:
                raise ValueError("ELF chunk SHA256 mismatch")
            digest.update(raw)
            pos += length
            n += 1
        if pos != total or n != expected_count or digest.hexdigest() != expected:
            raise ValueError("Cannot reconstruct SHA256-matching original ELF")
        if db.execute("PRAGMA integrity_check").fetchone()[0] != "ok":
            raise ValueError("SQLite integrity check failed")
        return {
            "status": "BYTE_EXACT_ELF_RECOVERABLE",
            "original_file_size": total,
            "original_file_sha256": expected,
            "chunk_size": unit,
            "chunk_count": n,
            "sqlite_integrity": "ok",
        }


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--db", type=Path, required=True)
    parser.add_argument("--elf", type=Path, required=True)
    parser.add_argument("--chunk-size", type=int, default=DEFAULT_CHUNK)
    parser.add_argument("--report", type=Path, required=True)
    args = parser.parse_args()
    result = add_chunks(args.db, args.elf, args.chunk_size)
    args.report.parent.mkdir(parents=True, exist_ok=True)
    args.report.write_text(json.dumps(result, indent=2) + "\n", encoding="utf-8")
    print(json.dumps(result, indent=2))


if __name__ == "__main__":
    main()
