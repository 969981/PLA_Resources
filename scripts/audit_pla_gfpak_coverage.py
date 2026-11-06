#!/usr/bin/env python3
"""Reconcile every PLA top-level GFPak with completed per-shard native extraction receipts."""
from __future__ import annotations
import argparse
from collections import Counter
import csv
import json
from pathlib import Path


def expected_from_inventory(csv_file: Path) -> list[str]:
    prefix = "b38cd4c18831237d85312886f3a377b5_NCA/1/"
    result = []
    with csv_file.open("r", encoding="utf-8-sig", newline="") as f:
        for row in csv.DictReader(f):
            rel = (row.get("RelativePath") or "").replace("\\", "/")
            if rel.startswith(prefix) and rel.lower().endswith(".gfpak"):
                result.append(rel[len(prefix):])
    if len(result) != len(set(x.casefold() for x in result)):
        raise ValueError("duplicate case-insensitive paths in inventory")
    return sorted(result)


def audit(inventory: Path, ledgers: list[Path], count: int) -> dict:
    expected = set(expected_from_inventory(inventory))
    records = {}
    duplicate = []
    for ledger in ledgers:
        with ledger.open("r", encoding="utf-8") as f:
            for line, raw in enumerate(f, 1):
                if not raw.strip():
                    continue
                obj = json.loads(raw)
                rel = obj["source_relative_path"]
                if rel in records:
                    duplicate.append(f"{ledger}:{line}: {rel}")
                records[rel] = obj
    states = Counter(x.get("state", "MISSING_STATE") for x in records.values())
    missing = sorted(expected - records.keys())
    extra = sorted(records.keys() - expected)
    failed = [p for p in sorted(expected & records.keys())
              if records[p].get("state") not in {"VERIFIED", "SKIPPED_UNCHANGED"}]
    problems = []
    if len(expected) != count:
        problems.append(f"inventory top-level GFPak count {len(expected)} != {count}")
    if duplicate:
        problems.append(f"duplicate ledger paths: {len(duplicate)}")
    if missing:
        problems.append(f"unaccounted sources: {len(missing)}")
    if extra:
        problems.append(f"unexpected sources: {len(extra)}")
    if failed:
        problems.append(f"unverified sources: {len(failed)}")
    return {
        "expected": count,
        "discovered": len(expected),
        "recorded": len(records),
        "states": dict(sorted(states.items())),
        "missing": missing,
        "extra": extra,
        "duplicate": duplicate,
        "unverified": [{"path": p, "state": records[p].get("state"),
                        "error": records[p].get("error")} for p in failed],
        "problems": problems,
        "complete": not problems,
    }


def main() -> int:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--inventory", type=Path, default=Path("PLA_1.1.1_files.csv"))
    p.add_argument("--ledger", type=Path, nargs="+", required=True)
    p.add_argument("--expected", type=int, default=678)
    p.add_argument("--out", type=Path, required=True)
    args = p.parse_args()
    result = audit(args.inventory, args.ledger, args.expected)
    args.out.parent.mkdir(parents=True, exist_ok=True)
    args.out.write_text(json.dumps(result, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    print(json.dumps({"complete": result["complete"], "expected": result["expected"],
                      "recorded": result["recorded"], "states": result["states"],
                      "problems": result["problems"]}, ensure_ascii=False))
    return 0 if result["complete"] else 1


if __name__ == "__main__":
    raise SystemExit(main())
