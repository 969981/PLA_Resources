#!/usr/bin/env python3
"""Run the pinned pkNX GFPak CLI in bounded parallel processes; verify outputs with threads.

Python 3.12+, .NET 10, pinned pkNX source and an appropriately licensed local
Oodle decoder are required for actual PLA extraction. Nothing reads ROM data
from the planner CSV as if it were byte-backed.
"""
from __future__ import annotations
import argparse
import concurrent.futures as cf
import hashlib
import json
import os
from pathlib import Path, PurePosixPath
import shutil
import subprocess
import sys
import uuid

NCA = "b38cd4c18831237d85312886f3a377b5_NCA"
PIN = "d191cd0e5c05f2af81d9a41c1f1d82e6621b351a"
SAMPLES = (
    "bin/archive/pokemon/pm0025_00_00.gfpak",
    "bin/archive/appli/battle_menu.gfpak",
    "bin/archive/field/resident_release.gfpak",
)


def sha256(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as f:
        for block in iter(lambda: f.read(1 << 20), b""):
            h.update(block)
    return h.hexdigest()


def shard(rel: str, total: int) -> int:
    return int.from_bytes(hashlib.sha256(rel.encode("utf-8")).digest()[:8], "big") % total


def safe_member_path(name: str) -> bool:
    if not name or "\\" in name or ":" in name or name.startswith("/"):
        return False
    parts = PurePosixPath(name).parts
    return all(p not in (".", "..") for p in parts) and len(parts) > 0


def verify_manifest(output: Path, source_hash: str, hash_threads: int) -> tuple[int, int]:
    meta = json.loads((output / "_manifest.json").read_text(encoding="utf-8"))
    if meta["source_sha256"].lower() != source_hash.lower():
        raise ValueError("source hash differs from extracted manifest")
    if meta["schema_version"] != 1 or meta["parser"] != "pkNX.Containers.GFPack":
        raise ValueError("unexpected manifest schema/parser")
    members = meta["members"]
    if not members or meta["extracted_count"] != len(members):
        raise ValueError("empty/incomplete extracted members")
    names = [x["path"] for x in members]
    if len(set(n.casefold() for n in names)) != len(names):
        raise ValueError("duplicate output member paths")
    if not all(safe_member_path(x) for x in names):
        raise ValueError("unsafe output member path")

    root = output.resolve()
    def check(x: dict) -> int:
        path = (output / x["path"]).resolve()
        if not path.is_relative_to(root) or not path.is_file():
            raise ValueError("missing member or path escape")
        size = path.stat().st_size
        if size != x["decoded_size"] or sha256(path) != x["sha256"].lower():
            raise ValueError(f"decoded size/SHA-256 mismatch: {x['path']}")
        return size
    with cf.ThreadPoolExecutor(max_workers=hash_threads) as pool:
        sizes = list(pool.map(check, members))
    if len(sizes) != meta["extracted_count"]:
        raise ValueError("manifest count mismatch")
    return len(sizes), sum(sizes)


def fingerprint(source_hash: str, max_depth: int) -> str:
    return hashlib.sha256(f"{source_hash}|{PIN}|depth={max_depth}|v1".encode()).hexdigest()


def process_one(job: tuple) -> dict:
    rel, source_root, dest_root, cli, dotnet, oodle, max_depth, hash_threads, timeout, retries, resume, dry = job
    source = Path(source_root) / rel
    output = Path(dest_root) / rel / "extracted"
    result = {"source_relative_path": rel, "stage": "extract", "state": "PLANNED",
              "tool": "PLA.GFPak.Cli", "tool_revision": PIN, "outputs": [], "error": None}
    if not source.is_file():
        result.update(state="SOURCE_MISSING", error="source file absent")
        return result
    if dry:
        return result

    source_hash = sha256(source)
    key = fingerprint(source_hash, max_depth)
    result.update(source_size_bytes=source.stat().st_size, source_sha256=source_hash,
                  input_fingerprint=key)
    if resume and output.is_dir():
        try:
            receipt = json.loads((output / "_receipt.json").read_text(encoding="utf-8"))
            if receipt["fingerprint"] == key:
                count, size = verify_manifest(output, source_hash, hash_threads)
                result.update(state="SKIPPED_UNCHANGED", entry_count=count,
                              decoded_bytes=size, outputs=[str(output)])
                return result
        except (OSError, KeyError, ValueError, json.JSONDecodeError):
            pass  # PARTIAL and mismatched previous output are never skip keys.

    output.parent.mkdir(parents=True, exist_ok=True)
    last_error = None
    for attempt in range(1, retries + 2):
        staged = output.parent / (".staging-" + uuid.uuid4().hex)
        backup = output.parent / (".previous-" + uuid.uuid4().hex)
        try:
            exe = [dotnet, cli] if cli.lower().endswith(".dll") else [cli]
            command = [*exe, str(source), str(staged), "--max-depth", str(max_depth)]
            if oodle:
                command += ["--oodle", oodle]
            completed = subprocess.run(command, capture_output=True, text=True,
                                       timeout=timeout, check=False)
            if completed.returncode:
                raise RuntimeError(f"CLI exit {completed.returncode}: {completed.stderr[-2500:]}")
            count, size = verify_manifest(staged, source_hash, hash_threads)
            (staged / "_receipt.json").write_text(json.dumps({
                "fingerprint": key, "source_sha256": source_hash, "entries": count,
                "decoded_bytes": size, "attempt": attempt, "state": "VERIFIED"
            }, indent=2) + "\n", encoding="utf-8")
            had_previous = output.exists()
            if had_previous:
                output.rename(backup)
            try:
                staged.rename(output)  # same filesystem, atomic promotion
            except Exception:
                if had_previous and backup.exists() and not output.exists():
                    backup.rename(output)
                raise
            if backup.exists():
                shutil.rmtree(backup)
            result.update(state="VERIFIED", entry_count=count, decoded_bytes=size,
                          attempts=attempt, outputs=[str(output)])
            return result
        except (OSError, ValueError, RuntimeError, subprocess.TimeoutExpired,
                KeyError, json.JSONDecodeError) as ex:
            last_error = str(ex)
        finally:
            if staged.exists():
                shutil.rmtree(staged)
    result.update(state="FAILED", attempts=retries + 1, error=last_error)
    return result


def main(argv: list[str] | None = None) -> int:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--source-root", type=Path, required=True, help="Immutable PLA v1.1.1 RomFS /1 root")
    p.add_argument("--dest", type=Path, default=Path("Unpack/v1.1.1/romfs"))
    p.add_argument("--cli", required=True, type=Path, help="Built PLA.GFPak.Cli DLL or executable")
    p.add_argument("--dotnet", default="dotnet")
    p.add_argument("--oodle", type=Path, help="Explicit local Oodle decoder; never uploaded")
    p.add_argument("--jobs", type=int, default=min(4, os.cpu_count() or 1))
    p.add_argument("--hash-threads", type=int, default=2)
    p.add_argument("--shard-index", type=int, default=0)
    p.add_argument("--shard-count", type=int, default=1)
    p.add_argument("--max-depth", type=int, default=2)
    p.add_argument("--timeout", type=int, default=900)
    p.add_argument("--retries", type=int, default=1)
    p.add_argument("--resume", action="store_true")
    p.add_argument("--retry-failed", action="store_true", help="With --resume rerun all non-verified tasks")
    p.add_argument("--dry-run", action="store_true")
    p.add_argument("--strict", action="store_true")
    p.add_argument("--samples", action="store_true", help="Run Pokemon, UI and field real GFPak trio")
    p.add_argument("--limit", type=int, default=0)
    p.add_argument("--expected-count", type=int, default=0)
    p.add_argument("--ledger", type=Path, default=Path(".pla-work/v1.1.1/gfpak/results.jsonl"))
    args = p.parse_args(argv)
    if (args.jobs < 1 or args.hash_threads < 1 or args.shard_count < 1 or
        not 0 <= args.shard_index < args.shard_count or not 0 <= args.max_depth <= 4 or
        args.timeout < 1 or args.retries < 0 or args.limit < 0):
        p.error("invalid parallelism/shard/depth/timeout/retries/limit")
    if not args.source_root.is_dir():
        p.error("source-root does not exist")
    if not args.dry_run and not args.cli.is_file():
        p.error("compiled CLI is absent")
    all_files = sorted(
        (x.relative_to(args.source_root).as_posix() for x in args.source_root.rglob("*")
         if x.is_file() and x.suffix.lower() == ".gfpak")
    )
    if args.samples:
        selected = list(SAMPLES)
    else:
        selected = all_files
    if args.expected_count and len(selected) != args.expected_count:
        print(f"Count mismatch: discovered={len(selected)} expected={args.expected_count}", file=sys.stderr)
        return 1
    seen = set()
    for rel in selected:
        if rel.casefold() in seen or not safe_member_path(rel):
            raise ValueError(f"unsafe/duplicate source path: {rel}")
        seen.add(rel.casefold())
    selected = [rel for rel in selected if shard(rel, args.shard_count) == args.shard_index]
    if args.limit:
        selected = selected[:args.limit]
    work = [
        (rel, str(args.source_root.resolve()), str(args.dest.resolve()),
         str(args.cli.resolve()), args.dotnet, str(args.oodle.resolve()) if args.oodle else None,
         args.max_depth, args.hash_threads, args.timeout, args.retries, args.resume, args.dry_run)
        for rel in selected
    ]
    args.ledger.parent.mkdir(parents=True, exist_ok=True)
    states = {}
    with args.ledger.open("w", encoding="utf-8") as f:
        with cf.ProcessPoolExecutor(max_workers=args.jobs) as pool:
            futures = {pool.submit(process_one, item): item[0] for item in work}
            for future in cf.as_completed(futures):
                rel = futures[future]
                try:
                    record = future.result()
                except Exception as ex:
                    record = {"source_relative_path": rel, "stage": "extract",
                              "state": "FAILED", "error": repr(ex)}
                f.write(json.dumps(record, ensure_ascii=False) + "\n")
                f.flush()
                states[record["state"]] = states.get(record["state"], 0) + 1
                print(f"{record['state']}: {rel}", flush=True)
    print(json.dumps({"selected": len(selected), "states": states,
                      "ledger": str(args.ledger)}, ensure_ascii=False))
    return int(args.strict and any(s not in ("VERIFIED", "SKIPPED_UNCHANGED") for s in states))


if __name__ == "__main__":
    raise SystemExit(main())
