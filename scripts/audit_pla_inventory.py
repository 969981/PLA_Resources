#!/usr/bin/env python3
"""Audit a PLA inventory CSV without claiming ROM or parser verification.

Run: python scripts/audit_pla_inventory.py PLA_1.1.1_files.csv
"""
from __future__ import annotations
import argparse
import csv
import json
from collections import Counter
from pathlib import Path
from typing import Iterable

from pathlib import PurePosixPath

REQUIRED = {"RelativePath", "FileName", "SizeBytes", "Section", "Module"}


def classify(path: str) -> str:
    parts = path.replace("\\", "/").split("/")
    if len(parts) >= 3 and len(parts[0]) == 36 and parts[0].lower().endswith("_nca"):
        if parts[1] == "0":
            return "ExeFS"
        if parts[1] == "1":
            return "RomFS"
    return "Other"


def audit_csv(csv_path: Path, source_root: Path | None = None) -> dict:
    errors: list[str] = []
    counts = Counter()
    total_bytes = 0
    checked = 0
    missing = 0
    seen: set[str] = set()
    with csv_path.open("r", encoding="utf-8-sig", newline="") as f:
        reader = csv.DictReader(f)
        if not REQUIRED.issubset(set(reader.fieldnames or [])):
            raise ValueError(f"Missing required columns: {sorted(REQUIRED - set(reader.fieldnames or []))}")
        for line, row in enumerate(reader, 2):
            rel = (row.get("RelativePath") or "").replace("\\", "/")
            if (not rel or rel.startswith("/") or ":" in rel or
                    ".." in PurePosixPath(rel).parts or "" in rel.split("/")):
                errors.append(f"line {line}: unsafe or empty path: {rel!r}")
                continue
            # Windows path/case collisions are significant when restoring on NTFS.
            path_key = rel.casefold()
            if path_key in seen:
                errors.append(f"line {line}: duplicate path (casefold): {rel!r}")
            seen.add(path_key)
            observed = classify(rel)
            if row.get("Section") != observed:
                errors.append(f"line {line}: section {row.get('Section')!r} != path {observed!r}")
            if row.get("FileName") != rel.split("/")[-1]:
                errors.append(f"line {line}: basename mismatch: {rel}")
            raw_size = (row.get("SizeBytes") or "").strip()
            try:
                sz = int(raw_size) if raw_size else None
                if sz is not None and sz < 0:
                    raise ValueError("negative byte size")
            except ValueError:
                errors.append(f"line {line}: invalid size {raw_size!r}")
                sz = None
            if sz is not None:
                total_bytes += sz
            counts[observed] += 1
            if source_root:
                checked += 1
                actual = source_root.joinpath(*rel.split("/"))
                if not actual.is_file():
                    missing += 1
                elif sz is not None and actual.stat().st_size != sz:
                    errors.append(f"line {line}: size mismatch: {rel}")
    return {
        "inventory": str(csv_path), "entries": sum(counts.values()),
        "nca_files": counts["ExeFS"] + counts["RomFS"],
        "exe_fs": counts["ExeFS"], "rom_fs": counts["RomFS"],
        "other": counts["Other"], "listed_bytes": total_bytes,
        "source_checked": checked, "source_missing": missing,
        "hash_verified": False, "errors": errors,
    }


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("inventory", type=Path)
    parser.add_argument("--source-root", type=Path, help="Optional actual v1.1.1 directory for existence/size check")
    parser.add_argument("--strict-source", action="store_true", help="Fail if any source file is missing")
    parser.add_argument("--expected-nca", type=int)
    parser.add_argument("--expected-exefs", type=int)
    parser.add_argument("--expected-romfs", type=int)
    parser.add_argument("--out", type=Path, help="Optional JSON receipt")
    args = parser.parse_args(argv)
    if args.strict_source and not args.source_root:
        parser.error("--strict-source requires --source-root")
    result = audit_csv(args.inventory, args.source_root)
    checks = (("nca_files", args.expected_nca),
              ("exe_fs", args.expected_exefs), ("rom_fs", args.expected_romfs))
    for key, expected in checks:
        if expected is not None and result[key] != expected:
            result["errors"].append(f"{key} actual={result[key]} expected={expected}")
    if args.strict_source and result["source_missing"]:
        result["errors"].append(f"missing actual source files: {result['source_missing']}")
    result["ok"] = not result["errors"]
    txt = json.dumps(result, ensure_ascii=False, indent=2)
    print(txt)
    if args.out:
        args.out.parent.mkdir(parents=True, exist_ok=True)
        args.out.write_text(txt + "\n", encoding="utf-8")
    return 0 if result["ok"] else 1


if __name__ == "__main__":
    raise SystemExit(main())
