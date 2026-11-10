#!/usr/bin/env python3
"""Publish two *real* Ghidra 12.2 exports as Git-safe, lossless loose files.

SQLite is split byte-for-byte.  NDJSON is split only at whole JSON lines.
Decompiled functions remain individual C files; native .gpr/.rep are materialized
with any oversized internal files split separately.  No generated binary is
confused with original game source.
"""
from __future__ import annotations

import argparse
import csv
import gzip
import hashlib
import json
import shutil
import sqlite3
import subprocess
import tarfile
import zipfile
from pathlib import Path, PurePosixPath

LIMIT = 45 * 1024 * 1024
EXPECTED_SHA = {
    "pla": "260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794",
}
TABLES = ("functions", "instructions", "references_full", "decompilation")


def sha256(p: Path) -> str:
    h = hashlib.sha256()
    with p.open("rb") as f:
        for data in iter(lambda: f.read(4 << 20), b""):
            h.update(data)
    return h.hexdigest()


def find_artifact(root: Path, game: str, kind: str, name: str) -> Path:
    directory = root / ("PLA-" + game + "-" + kind)
    matches = [p for p in directory.rglob(name) if p.is_file()]
    if len(matches) != 1:
        raise ValueError(f"Expected one {name} under {directory}; got {len(matches)}")
    return matches[0]


def chunk_binary(source: Path, target: Path, basename: str) -> dict:
    target.mkdir(parents=True, exist_ok=True)
    parts = []
    with source.open("rb") as input_file:
        for i, data in enumerate(iter(lambda: input_file.read(LIMIT), b"")):
            file = target / f"{basename}.part{i:04d}.bin"
            file.write_bytes(data)
            parts.append({"path": file.name, "size": len(data), "sha256": sha256(file)})
    if not parts:
        raise ValueError(f"Refusing empty binary: {source}")
    return {"size": source.stat().st_size, "sha256": sha256(source), "parts": parts}


def chunk_ndjson(source_gz: Path, target: Path) -> dict:
    target.mkdir(parents=True, exist_ok=True)
    parts = []
    writer = None
    part_path = None
    part_len = 0
    total = 0
    lines = 0
    digest = hashlib.sha256()
    try:
        with gzip.open(source_gz, "rb") as src:
            for line in src:
                if not line or not line.endswith(b"\n") or not line.strip():
                    raise ValueError("Incomplete/empty NDJSON row")
                if len(line) > LIMIT:
                    raise ValueError("Single JSON record exceeds safe Git limit")
                # Full line remains intact. Verify both encoding and syntax.
                json.loads(line)
                if writer is None or part_len + len(line) > LIMIT:
                    if writer:
                        writer.close()
                        parts.append({"path": part_path.name, "size": part_len,
                                      "sha256": sha256(part_path)})
                    part_path = target / f"events.part{len(parts):04d}.ndjson"
                    writer = part_path.open("wb")
                    part_len = 0
                writer.write(line)
                digest.update(line)
                part_len += len(line)
                total += len(line)
                lines += 1
    finally:
        if writer:
            writer.close()
            parts.append({"path": part_path.name, "size": part_len,
                          "sha256": sha256(part_path)})
    if not parts:
        raise ValueError("No NDJSON data")
    return {"size": total, "sha256": digest.hexdigest(), "parts": parts,
            "lines": lines, "source_gzip_sha256": sha256(source_gz)}


def unpack_project(archive: Path, game: str, dest: Path, part_dir: Path) -> dict:
    stem = "PLA111"
    dest.mkdir(parents=True, exist_ok=True)
    files = 0
    splits = {}
    decoder = subprocess.Popen(["zstd", "-dc", str(archive)], stdout=subprocess.PIPE)
    if decoder.stdout is None:
        raise ValueError("Missing zstd stdout")
    try:
        with tarfile.open(fileobj=decoder.stdout, mode="r|") as tar:
            for item in tar:
                name = PurePosixPath(item.name)
                if (name.is_absolute() or ".." in name.parts or not name.parts or
                        name.parts[0] not in (stem + ".gpr", stem + ".rep")):
                    raise ValueError("Unsafe native Ghidra archive path: " + item.name)
                path = dest.joinpath(*name.parts)
                if item.isdir():
                    path.mkdir(parents=True, exist_ok=True)
                    continue
                if not item.isfile():
                    raise ValueError("Unsafe nonregular native project archive member")
                inp = tar.extractfile(item)
                if inp is None:
                    raise ValueError("Cannot read native project member")
                if item.size > LIMIT:
                    parts = []
                    digest = hashlib.sha256()
                    remain = item.size
                    with inp:
                        while remain:
                            data = inp.read(min(remain, LIMIT))
                            if not data:
                                raise ValueError("Truncated Ghidra native project")
                            p = part_dir.joinpath(*name.parts)
                            p = p.parent / f"{p.name}.part{len(parts):04d}.bin"
                            p.parent.mkdir(parents=True, exist_ok=True)
                            p.write_bytes(data)
                            digest.update(data)
                            parts.append({"path": p.relative_to(part_dir).as_posix(),
                                          "size": len(data), "sha256": sha256(p)})
                            remain -= len(data)
                    splits[name.as_posix()] = {"size": item.size,
                                               "sha256": digest.hexdigest(), "parts": parts}
                else:
                    path.parent.mkdir(parents=True, exist_ok=True)
                    with inp, path.open("wb") as output:
                        shutil.copyfileobj(inp, output, 4 << 20)
                    if path.stat().st_size != item.size:
                        raise ValueError("Truncated Ghidra native project file")
                    files += 1
    finally:
        if decoder.stdout:
            decoder.stdout.close()
        if decoder.wait() != 0:
            raise ValueError("zstd extraction failed")
    if not (dest / (stem + ".gpr")).is_file() or not (dest / (stem + ".rep")).is_dir():
        raise ValueError("Ghidra native .gpr/.rep project missing")
    return {"project_name": stem, "regular_files": files, "split_files": splits,
            "archive_sha256": sha256(archive)}


def unpack_code(archive: Path, target: Path, expected: int) -> int:
    target.mkdir(parents=True, exist_ok=True)
    count = 0
    with zipfile.ZipFile(archive) as zip_file:
        for info in zip_file.infolist():
            if info.is_dir() or not info.filename.startswith("decompiled/"):
                continue
            path = PurePosixPath(info.filename)
            if (len(path.parts) != 2 or path.name in (".", "..") or
                    not path.name.endswith(".c") or info.file_size > LIMIT or
                    any(c not in "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_.-" for c in path.name)):
                raise ValueError(f"Unsafe or oversized function file: {info.filename}")
            # Spread thousands of .c files across subdirectories.
            function = path.stem
            name = target / function[:2] / path.name
            name.parent.mkdir(parents=True, exist_ok=True)
            with zip_file.open(info) as inp, name.open("wb") as out:
                shutil.copyfileobj(inp, out, 4 << 20)
            if name.stat().st_size != info.file_size:
                raise ValueError("Truncated C export: " + str(name))
            count += 1
    if count != expected:
        raise ValueError(f"C export coverage mismatch: {count} != {expected}")
    return count


def publish_game(artifacts: Path, dest: Path, run_id: int, game: str) -> dict:
    dest.mkdir(parents=True)
    raw_db = find_artifact(artifacts, game, "sqlite", game + ".sqlite")
    elf_bytes_report = find_artifact(artifacts, game, "sqlite", game + "_elf_bytes_manifest.json")
    db_report = find_artifact(artifacts, game, "sqlite", game + "_sqlite_manifest.json")
    zip_c = find_artifact(artifacts, game, "c", game + "_all_c.zip")
    c_report = find_artifact(artifacts, game, "c", game + "_decompiled_manifest.json")
    c_index = find_artifact(artifacts, game, "c", game + "_decompiled_index.csv")
    raw_events = find_artifact(artifacts, game, "ndjson", game + "_events.ndjson.gz")
    project = find_artifact(artifacts, game, "project", game + "_ghidra_project.tar.zst")

    db_meta = json.loads(db_report.read_text(encoding="utf-8"))
    c_meta = json.loads(c_report.read_text(encoding="utf-8"))
    elf_sha = EXPECTED_SHA[game]
    raw_proof = json.loads(elf_bytes_report.read_text(encoding="utf-8"))
    if (raw_proof.get("status") != "BYTE_EXACT_ELF_RECOVERABLE" or
            raw_proof.get("original_file_sha256") != elf_sha):
        raise ValueError(game + ": missing or mismatched byte-exact original ELF proof")
    if db_meta.get("status") != "COMPLETE" or db_meta.get("elf_sha256") != elf_sha:
        raise ValueError(game + ": incomplete or mismatched SQLite provenance")
    if c_meta.get("original_elf_sha256_expected") != elf_sha:
        raise ValueError(game + ": C export provenance mismatch")
    if c_meta.get("ndjson_sha256") != sha256(raw_events):
        raise ValueError(game + ": NDJSON source hash mismatch")
    expected_functions = int(c_meta["functions"])
    expected_success = int(c_meta["c_success"])
    expected_failures = int(c_meta["c_fail_or_empty"])
    if expected_functions <= 0 or expected_success + expected_failures != expected_functions:
        raise ValueError(game + ": invalid function coverage")
    with sqlite3.connect(raw_db) as db:
        if db.execute("PRAGMA integrity_check").fetchone()[0] != "ok":
            raise ValueError(game + ": SQLite integrity check failed")
        counts = {table: db.execute("SELECT COUNT(*) FROM " + table).fetchone()[0]
                  for table in TABLES}
        c_ok = db.execute("SELECT COUNT(*) FROM decompilation WHERE status='OK'").fetchone()[0]
        found_source = db.execute("SELECT value FROM metadata WHERE key='source_ndjson_sha256'").fetchone()
        raw_table = db.execute("SELECT original_file_size, original_file_sha256, chunk_count FROM original_elf_manifest WHERE id=1").fetchone()
    if not raw_table or raw_table[1] != elf_sha or raw_table[2] < 1 or raw_table[0] != raw_proof["original_file_size"]:
        raise ValueError(game + ": SQLite does not contain original ELF byte chunks")
    if not found_source or found_source[0] != sha256(raw_events):
        raise ValueError(game + ": database/NDJSON mismatch")
    for table, event in (("functions", "function"), ("instructions", "instruction"),
                         ("references_full", "reference"), ("decompilation", "decompile")):
        if counts[table] != int(db_meta["counts"].get(event, -1)):
            raise ValueError(game + ": table count mismatch " + table)
    if counts["functions"] != expected_functions or counts["decompilation"] != expected_functions or c_ok != expected_success:
        raise ValueError(game + ": function/decompile/C counts disagree")
    with c_index.open("r", encoding="utf-8", newline="") as f:
        rows = list(csv.DictReader(f))
    if len(rows) != expected_functions or sum(r["status"] == "OK" for r in rows) != expected_success:
        raise ValueError(game + ": C index inconsistent")
    native = unpack_project(project, game, dest / "project", dest / "project_parts")
    sqlite_parts = chunk_binary(raw_db, dest / "database", game + ".sqlite")
    events_parts = chunk_ndjson(raw_events, dest / "ndjson")
    c_files = unpack_code(zip_c, dest / "c", expected_success)
    shutil.copy2(db_report, dest / "sqlite_manifest.json")
    shutil.copy2(elf_bytes_report, dest / "elf_bytes_manifest.json")
    shutil.copy2(c_report, dest / "decompiled_manifest.json")
    shutil.copy2(c_index, dest / "decompiled_index.csv")
    manifest = {
        "status": "UNCOMPRESSED_SPLIT_VERIFIED",
        "source_run_id": run_id,
        "game": game,
        "game_version": "1.1.1",
        "original_elf_sha256": elf_sha,
        "original_elf_chunks": raw_proof,
        "chunk_limit_bytes": LIMIT,
        "sqlite": sqlite_parts,
        "ndjson": events_parts,
        "project": native,
        "sqlite_counts": counts,
        "decompiler_attempted": expected_functions,
        "c_success": c_files,
        "c_failed_or_empty": expected_failures,
        "evidence": "GHIDRA_STATIC_ANALYSIS_ONLY_NOT_ORIGINAL_SOURCE",
    }
    (dest / "parts_manifest.json").write_text(json.dumps(manifest, indent=2) + "\n", encoding="utf-8")
    (dest / "README.md").write_text(
        f"# {game.title()} 1.1.1 — Ghidra 12.2 full static export\n\n"
        f"Source: [Actions #{run_id}](https://github.com/969981/PLA_Resources/actions/runs/{run_id}).\n\n"
        f"- \`project/PLA111.gpr\` and \`.rep/\`: editable native Ghidra program; restore project_parts first if present.\n"
        f"- \`database/\`: losslessly split **raw SQLite bytes** (not ZIP or gzip).\n"
        f"- \`ndjson/\`: **plain** JSON-lines parts, each part ends on a whole JSON record.\n"
        f"- \`c/\`: {c_files} individual C pseudocode files; {expected_failures} failures or empty results are recorded in \`decompiled_index.csv\`.\n"
        f"- \`parts_manifest.json\`: original and each-shard SHA-256 and counts.\n\n"
        "Restore using \`python3 tools/ghidra/pla_restore_split.py --source <this-directory> --out <empty-directory>\`.\n"
        "These files are Ghidra-derived static analysis, not Nintendo's original source code.\n",
        encoding="utf-8")
    for path in dest.rglob("*"):
        if path.is_file() and path.stat().st_size > LIMIT:
            raise ValueError("Oversized Git blob: " + str(path))
    print(json.dumps({"game": game, "functions": expected_functions,
                      "c_success": c_files, "c_failures": expected_failures,
                      "sqlite_chunks": len(sqlite_parts["parts"]),
                      "ndjson_chunks": len(events_parts["parts"])}, indent=2), flush=True)
    return manifest


def main() -> None:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--artifacts", type=Path, required=True)
    p.add_argument("--out", type=Path, required=True)
    p.add_argument("--run-id", type=int, required=True)
    args = p.parse_args()
    if args.out.exists() and any(args.out.iterdir()):
        raise ValueError("Target folder must be empty; never mix separate runs")
    args.out.mkdir(parents=True, exist_ok=True)
    m = {}
    for game in ("pla",):
        m[game] = publish_game(args.artifacts, args.out / game, args.run_id, game)
    (args.out / "README.md").write_text(
        "# PLA v1.1.1 full Ghidra 12.2 export\n\n"
        f"Source run: https://github.com/969981/PLA_Resources/actions/runs/{args.run_id}\n\n"
        "The PLA main program was analyzed. Reconstruct SQLite and the native project "
        "using tools/ghidra/pla_restore_split.py. Check parts_manifest.json for exact hashes.\n"
        "Auto-generated C is pseudocode, not recovered Nintendo source.\n", encoding="utf-8")
    print(json.dumps({g: {"functions":m[g]["sqlite_counts"]["functions"],
                          "C":m[g]["c_success"]} for g in m}, indent=2))


if __name__ == "__main__":
    main()
