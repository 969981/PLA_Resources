#!/usr/bin/env python3
"""Clone/check out verified upstream tool revisions outside the tracked repository."""
from __future__ import annotations
import argparse
import json
from pathlib import Path
import subprocess

ROOT = Path(__file__).resolve().parents[1]


def run(*cmd: str) -> str:
    result = subprocess.run(cmd, check=True, capture_output=True, text=True)
    return result.stdout.strip()


def main() -> int:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--only", default="all", help="Comma-separated tool names or all")
    p.add_argument("--root", type=Path, default=ROOT / ".pla-work" / "toolsrc")
    args = p.parse_args()
    conf = json.loads((ROOT / "tools" / "upstream.json").read_text(encoding="utf-8"))
    chosen = None if args.only == "all" else set(args.only.split(","))
    entries = [t for t in conf["tools"] if chosen is None or t["name"] in chosen]
    if chosen is not None and chosen != {t["name"] for t in entries}:
        p.error("unknown tool name in --only")
    args.root.mkdir(parents=True, exist_ok=True)
    for item in entries:
        target = args.root / item["name"]
        if not (target / ".git").exists():
            if target.exists():
                raise RuntimeError(f"Refusing to overwrite non-git directory: {target}")
            run("git", "clone", "--filter=blob:none", "--no-checkout",
                item["upstream"], str(target))
        # Update exact pinned revision, never merge a moving branch into master.
        run("git", "-C", str(target), "fetch", "--no-tags", "--depth", "1",
            "origin", item["commit"])
        run("git", "-C", str(target), "checkout", "--detach", "--force", "FETCH_HEAD")
        actual = run("git", "-C", str(target), "rev-parse", "HEAD")
        if actual != item["commit"]:
            raise RuntimeError(f"Commit pin mismatch for {item['name']}: {actual}")
        if run("git", "-C", str(target), "status", "--porcelain"):
            raise RuntimeError(f"Dirty checkout: {target}")
        print(f"{item['name']} pinned {actual} at {target}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
