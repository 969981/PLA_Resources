#!/usr/bin/env python3
"""Restore split PLA GFPaks in the ephemeral worktree after validating 7z volumes.

Original .7z.* files remain untouched. No reconstructed source is auto-committed.
"""
from __future__ import annotations
import argparse
import csv
import hashlib
import json
from pathlib import Path
import os
import shutil
import subprocess
import tempfile

NCA = "b38cd4c18831237d85312886f3a377b5_NCA"


def sha256(p: Path) -> str:
    h = hashlib.sha256()
    with p.open("rb") as f:
        for block in iter(lambda: f.read(1 << 20), b""):
            h.update(block)
    return h.hexdigest()


def source_records(inventory: Path) -> dict[str, dict]:
    result = {}
    prefix = NCA + "/1/"
    with inventory.open(encoding="utf-8-sig", newline="") as stream:
        for row in csv.DictReader(stream):
            rel = (row.get("RelativePath") or "").replace("\\", "/")
            if rel.startswith(prefix):
                result[rel[len(prefix):]] = row
    return result


def restore(source_root: Path, inventory: Path, sevenzip: str) -> list[dict]:
    specs = source_records(inventory)
    result = []
    parts = sorted(source_root.rglob("*.gfpak.7z.001"))
    for first in parts:
        target = first.with_name(first.name.removesuffix(".7z.001"))
        rel = target.relative_to(source_root).as_posix()
        spec = specs.get(rel)
        if not spec:
            raise ValueError(f"Missing inventory row for reconstructed source {rel}")
        volumes = sorted(first.parent.glob(target.name + ".7z.*"))
        suffixes = [v.name.rsplit(".", 1)[-1] for v in volumes]
        expected = [f"{i:03}" for i in range(1, len(volumes) + 1)]
        if suffixes != expected:
            raise ValueError(f"Missing/duplicated 7z volume for {rel}: {suffixes}")
        expected_size = int(spec["SizeBytes"])
        expected_hash = (spec.get("SHA256") or "").strip().lower()
        if target.exists():
            if target.stat().st_size != expected_size or (expected_hash and sha256(target) != expected_hash):
                raise ValueError(f"Existing reconstructed source disagrees with inventory: {rel}")
            actual_hash = sha256(target)
            state = "ALREADY_PRESENT"
        else:
            subprocess.run([sevenzip, "t", "-y", str(first)], check=True,
                           capture_output=True, text=True)
            with tempfile.TemporaryDirectory(prefix=".restore-", dir=first.parent) as temp:
                staging = Path(temp)
                subprocess.run([sevenzip, "x", "-y", f"-o{staging}", str(first)],
                               check=True, capture_output=True, text=True)
                candidates = [p for p in staging.rglob(target.name) if p.is_file()]
                if len(candidates) != 1:
                    raise ValueError(f"Expected exactly one restored {target.name}, found {len(candidates)}")
                candidate = candidates[0]
                if candidate.stat().st_size != expected_size:
                    raise ValueError(f"Restored size mismatch {rel}: got {candidate.stat().st_size}, expected {expected_size}")
                actual_hash = sha256(candidate)
                if expected_hash and actual_hash != expected_hash:
                    raise ValueError(f"Restored SHA-256 mismatch: {rel}")
                os.replace(candidate, target)
            state = "RESTORED_VERIFIED"
        result.append({
            "path": rel, "state": state, "size": target.stat().st_size,
            "sha256": actual_hash, "parts": [
                {"path": p.relative_to(source_root).as_posix(),
                 "size": p.stat().st_size, "sha256": sha256(p)} for p in volumes
            ],
            "validation": "7z t + restored size + SHA-256" if state != "ALREADY_PRESENT"
                          else "existing size + SHA-256"
        })
        print(f"{state}: {rel} ({target.stat().st_size} bytes)", flush=True)
    return result


def main() -> int:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--source-root", required=True, type=Path)
    p.add_argument("--inventory", type=Path, default=Path("PLA_1.1.1_files.csv"))
    p.add_argument("--sevenzip", default="")
    p.add_argument("--expected-packs", type=int, default=678)
    p.add_argument("--out", type=Path, default=Path(".pla-work/v1.1.1/gfpak/restore.json"))
    args = p.parse_args()
    sevenzip = args.sevenzip or shutil.which("7z") or shutil.which("7za")
    if not sevenzip and os.name == "nt":
        candidate = Path(os.environ.get("ProgramFiles", "C:/Program Files")) / "7-Zip/7z.exe"
        if candidate.exists():
            sevenzip = str(candidate)
    if not sevenzip:
        p.error("7z executable not found; supply --sevenzip")
    restored = restore(args.source_root, args.inventory, str(sevenzip))
    found = sum(p.suffix.lower() == ".gfpak" for p in args.source_root.rglob("*") if p.is_file())
    status = "VERIFIED" if found == args.expected_packs else "INCOMPLETE"
    result = {"state": status, "expected_packs": args.expected_packs,
              "available_packs": found, "restored_from_volumes": restored}
    args.out.parent.mkdir(parents=True, exist_ok=True)
    args.out.write_text(json.dumps(result, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    print(f"Available GFPaks: {found}/{args.expected_packs}; volume sets={len(restored)}")
    return 0 if status == "VERIFIED" else 1


if __name__ == "__main__":
    raise SystemExit(main())
