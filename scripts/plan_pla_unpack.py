#!/usr/bin/env python3
"""Plan one auditable task per PLA NCA input. Does not extract or convert files."""
from __future__ import annotations
import argparse
import csv
import hashlib
from pathlib import Path
from audit_pla_inventory import classify

HEADERS = ["source_relative_path", "section", "module", "extension", "size_bytes",
           "family", "operation", "stage", "status", "shard", "source_verified"]
MODEL_EXTENSIONS = {".trmdl", ".trmsh", ".trmtr", ".trskl", ".tranm", ".trmbf"}


def task_for(row: dict, shard_count: int = 1) -> dict | None:
    rel = (row.get("RelativePath") or "").replace("\\", "/")
    sec = classify(rel)
    if sec == "Other":
        return None
    ext = Path(rel).suffix.lower()
    module = row.get("Module", "")
    family = "opaque"
    operation = "probe_header"
    stage = "inspect"
    if sec == "ExeFS":
        family, operation = "exefs", "inspect_exefs"
    elif ext == ".gfpak":
        family, operation, stage = "gfpak", "extract_gfpak", "extract"
    elif module == "message" and ext in (".dat", ".tbl"):
        family, operation, stage = "message", "parse_message_pair", "parse"
    elif ext == ".blua":
        family, operation, stage = "blua", "probe_blua_bytecode", "parse"
    elif ext == ".bntx":
        family, operation, stage = "bntx", "decode_bntx", "convert"
    elif ext in MODEL_EXTENSIONS:
        family, operation, stage = "trinity_model", "decode_model_family", "convert"
    elif ext == ".ptcl":
        family, operation, stage = "ptcl", "decode_ptcl", "parse"
    elif ext in (".pck", ".bnk"):
        family, operation, stage = "wwise", "extract_wwise", "extract"
    elif module == "pml" or ext in (".wazabin", ".evobin", ".perbin"):
        family, operation, stage = "pml", "parse_pml_table", "parse"
    elif ext in (".arc",):
        family, operation, stage = "arc", "extract_arc", "extract"
    shard = int.from_bytes(hashlib.sha256(rel.encode("utf-8")).digest()[:8], "big") % shard_count
    return {
        "source_relative_path": rel,
        "section": sec, "module": module, "extension": ext or "[none]",
        "size_bytes": row.get("SizeBytes", ""), "family": family,
        "operation": operation, "stage": stage,
        "status": "PLANNED", "shard": shard, "source_verified": "false",
    }


def main(argv: list[str] | None = None) -> int:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("inventory", type=Path)
    p.add_argument("--out", required=True, type=Path)
    p.add_argument("--shard-count", type=int, default=1)
    p.add_argument("--shard-index", type=int)
    args = p.parse_args(argv)
    if args.shard_count < 1:
        p.error("--shard-count must be >= 1")
    if args.shard_index is not None and not 0 <= args.shard_index < args.shard_count:
        p.error("--shard-index must be within [0, shard-count)")
    tasks = []
    seen = set()
    with args.inventory.open("r", encoding="utf-8-sig", newline="") as f:
        reader = csv.DictReader(f)
        for row in reader:
            task = task_for(row, args.shard_count)
            if task is None:
                continue
            k = task["source_relative_path"].casefold()
            if k in seen:
                raise ValueError(f"duplicate source path: {k}")
            seen.add(k)
            if args.shard_index is None or task["shard"] == args.shard_index:
                tasks.append(task)
    tasks.sort(key=lambda x: x["source_relative_path"])
    args.out.parent.mkdir(parents=True, exist_ok=True)
    with args.out.open("w", encoding="utf-8-sig", newline="") as f:
        writer = csv.DictWriter(f, fieldnames=HEADERS)
        writer.writeheader()
        writer.writerows(tasks)
    print(f"Planned {len(tasks)} NCA tasks; status=PLANNED, no extraction performed. Output: {args.out}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
