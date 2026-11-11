#!/usr/bin/env python3
"""Evidence-scoped scan of pinned PLA 1.1.1 per-function Ghidra C exports.

Input contract: the already published 82,731 individual C files, never modified.
Output contract: compact independent JSON/Markdown candidate list with exact
function paths, context fingerprints and proof boundaries. No symbol renaming.
A matching numeric field offset is NOT proof of matching object identity.
"""
from __future__ import annotations
import argparse
import json
import re
from collections import Counter
from pathlib import Path

OWNER_STORE = re.compile(
    r"\*\s*\([^)]*\)\s*\(\s*([A-Za-z_]\w*)\s*\+\s*0x298\s*\)\s*=(?!=)"
)
RELATED_CALLS = (
    "FUN_01148f20", "FUN_0112f528", "FUN_0113219c",
    "FUN_01148690", "FUN_011457e4", "FUN_010ce274",
    "FUN_02a8d6bc", "FUN_02a8f2f4",
)
SAVE_IO = ("nn::fs::WriteFile", "nn::fs::Commit")
SPECIFIC_FIELDS = ("0x1e4cc", "0x1f420", "0x4f78", "0x1e1")
TARGET_OFFSETS = ("0x6c", "0x74", "0x78", "0x1e4cc", "0x1f420", "0x58")
ORIGINAL_HASH = "260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794"


def extract_context(source: str, match: re.Match, before: int = 2, after: int = 2) -> str:
    begin = source.rfind("\n", 0, match.start())
    for _ in range(before):
        if begin <= 0:
            break
        begin = source.rfind("\n", 0, begin)
    begin = max(begin, 0)
    finish = source.find("\n", match.end())
    for _ in range(after):
        if finish < 0:
            break
        finish = source.find("\n", finish + 1)
    finish = len(source) if finish < 0 else finish
    return source[begin:finish].strip()[:750]


def score_owner_context(body: str, base: str) -> tuple[int, dict]:
    flags = {
        "owner_global": "PTR_DAT_04379560" in body,
        "known_pokedex_accessor": "FUN_01148f20" in body,
        "save_type_binding": '"PokedexSave"' in body or "savedata::io::PokedexSave" in body,
        "adjacent_managed_slots": all(x in body for x in ("0x268", "0x2c8", "0x2f8")),
        "known_resource_ready_group": "0x4f78" in body and "0x1e1" in body,
        "state_mutex": "0x1f420" in body,
        "state_records": "0x1e4cc" in body,
        "object_base_is_first_arg": base == "param_1",
    }
    weights = {"owner_global": 10, "known_pokedex_accessor": 10,
               "save_type_binding": 7, "adjacent_managed_slots": 3,
               "known_resource_ready_group": 1, "state_mutex": 5,
               "state_records": 5, "object_base_is_first_arg": 1}
    return sum(weights[k] for k, v in flags.items() if v), flags


def analyze(croot: Path, expected_count: int) -> dict:
    if not croot.is_dir():
        raise ValueError("C source directory absent: " + str(croot))
    writers = []
    relevant = []
    io = []
    field_freq = Counter()
    total_files = 0
    failed_read = 0
    for path in sorted(croot.glob("*/*.c")):
        total_files += 1
        try:
            body = path.read_text(encoding="utf-8")
        except (UnicodeError, OSError):
            failed_read += 1
            continue
        rel = str(path.relative_to(croot))
        if ORIGINAL_HASH not in body[:500]:
            raise ValueError("Ghidra source hash header does not match verified PLA ELF: " + rel)
        for field in SPECIFIC_FIELDS:
            if field in body:
                field_freq[field] += 1
        for match in OWNER_STORE.finditer(body):
            score, flags = score_owner_context(body, match.group(1))
            writers.append({
                "path": rel,
                "function": path.stem,
                "base": match.group(1),
                "line": body.count("\n", 0, match.start()) + 1,
                "score": score,
                "flags": flags,
                "excerpt": extract_context(body, match, 1, 1),
                "identity": "UNRESOLVED_BASE_OBJECT_IDENTITY",
            })
        calls = [c for c in RELATED_CALLS if c in body and
                 path.stem != c.removeprefix("FUN_")]
        uses_global = "PTR_DAT_04379560" in body
        offsets = [o for o in TARGET_OFFSETS if o in body]
        if calls and (uses_global or len(calls) >= 2 or "0x298" in body or "0x1f420" in body):
            relevant.append({
                "path": rel, "function": path.stem,
                "calls": calls, "owner_global": uses_global,
                "record_offsets": offsets,
                "contains_memcpy": bool(re.search(r"\bmem(?:cpy|move|set)\s*\(", body)),
                "contains_file_io": any(s in body for s in SAVE_IO),
                "identity": "STATIC_C_CALLER_CANDIDATE",
            })
        match_io = [s for s in SAVE_IO if s in body]
        if match_io:
            io.append({
                "path": rel, "function": path.stem,
                "io": match_io, "calls": calls,
                "owner_global": uses_global,
                "record_offsets": offsets,
                "identity": "IO_ONLY_NO_POKEDEX_PROVENANCE",
            })
    if total_files != expected_count or failed_read:
        raise ValueError(f"Incomplete C coverage: {total_files} vs {expected_count}; unreadable {failed_read}")
    writers.sort(key=lambda x: (-x["score"], x["path"], x["line"]))
    relevant.sort(key=lambda x: (-int(x["owner_global"]), -len(x["calls"]), x["path"]))
    return {
        "status": "STATIC_SOURCE_CANDIDATES_NOT_DATAFLOW_PROOF",
        "version": "PLA 1.1.1",
        "analysis_run": 42774682950,
        "original_elf_sha256": ORIGINAL_HASH,
        "scanned_c_functions": total_files,
        "unreadable": failed_read,
        "owner_offset_298": {
            "syntactic_writer_occurrences": len(writers),
            "unique_functions": len({w["function"] for w in writers}),
            "candidates": writers[:150],
            "candidates_omitted": max(0, len(writers) - 150),
        },
        "selected_specific_field_occurrence_counts": dict(field_freq),
        "selected_cross_call_candidates": relevant[:180],
        "selected_cross_call_candidates_omitted": max(0, len(relevant) - 180),
        "filesystem_io_functions": io[:100],
        "filesystem_io_functions_omitted": max(0, len(io) - 100),
        "limitations": [
            "Offset +0x298 appears in many unrelated object types; writer rows are NOT a proven match to the Pokedex context.",
            "Regex detects only explicit C assignments at +0x298, not writes via alias variables, memcpy, nested structures or indirect calls.",
            "Ghidra C is imperfect and misses some control flow; this is not a complete binary xref set.",
            "String references, function co-occurrence and nearby offsets do NOT establish byte-level serialization.",
            "No Dirty field, serializer or persistence success is declared by this scan.",
        ],
    }


def to_md(result: dict) -> str:
    owner = result["owner_offset_298"]
    lines = [
        "# PLA 1.1.1 — Pokedex owner +0x298 and serializer candidate audit",
        "",
        "> Static C inventory only: never equate identical offsets with identical object identity.",
        "",
        f"- Original Ghidra Run: {result['analysis_run']}",
        f"- Pinned ELF SHA-256: {result['original_elf_sha256']}",
        f"- Verified C coverage: {result['scanned_c_functions']:,} files",
        f"- Explicit assignment sites of +0x298: {owner['syntactic_writer_occurrences']} "
        f"({owner['unique_functions']} functions)",
        "- Status: STATIC_SOURCE_CANDIDATES_NOT_DATAFLOW_PROOF",
        "",
        "## Explicit +0x298 writer candidates, ranked by *co-occurrence* only",
        "",
        "| Function C | Line | Base | Context score | Nearby recognized evidence |",
        "| --- | ---: | --- | ---: | --- |",
    ]
    for row in owner["candidates"][:80]:
        recognized = [name for name, flag in row["flags"].items() if flag]
        lines.append(f"| {row['path']} | {row['line']} | {row['base']} | {row['score']} | "
                     + ", ".join(recognized).replace("|", "/") + " |")
    lines += [
        "",
        "No row above is an accepted setter for the Pokedex context without matching caller and concrete base-pointer provenance.",
        "",
        "## Specific field occurrences (number of C functions, not data xrefs)",
        "",
    ]
    for key, value in sorted(result["selected_specific_field_occurrence_counts"].items()):
        lines.append(f"- {key}: {value}")
    lines += [
        "",
        "## Cross-call candidates",
        "",
        "| Function C | Recognized calls | Same function uses Save global? | memcpy/memmove/memset? |",
        "| --- | --- | --- | --- |",
    ]
    for row in result["selected_cross_call_candidates"][:80]:
        lines.append(f"| {row['path']} | {', '.join(row['calls'])} | "
                     f"{row['owner_global']} | {row['contains_memcpy']} |")
    lines += [
        "",
        "## File I/O (unconnected until state-to-byte-buffer dataflow proved)",
        "",
    ]
    for row in result["filesystem_io_functions"]:
        lines.append(f"- {row['path']}: {', '.join(row['io'])}")
    lines += [
        "",
        "## Exact next proof obligations",
        "",
        "1. Use the restored Ghidra project in read-only mode to find callers and concrete base aliases for top +0x298 assignments.",
        "2. Discard offset matches belonging to different classes; identify the constructor of the context used by FUN_01148F20.",
        "3. Track data reads from state+0xDC+species*0x58 / state+0x1e4cc / state+0x6c into the same serializer buffer.",
        "4. Prove serializer buffer identity at a WriteFile call, and prove a matching Commit and result-code consumer.",
        "5. Only then test Dirty set/clear and restart readback in an isolated runtime.",
        "",
        "No original ELF, Ghidra project or source C files were modified.",
        "",
    ]
    return "\n".join(lines)


def self_test():
    a = "*(undefined8 *)(param_1 + 0x298) = uVar5;"
    b = "*(undefined8 *)(param_1 + 0x298) == uVar5;"
    c = "*(long *)(ctx + 0x298) = local_38;"
    assert [(m.group(1), m.group(0)) for m in OWNER_STORE.finditer(a)] == [
        ("param_1", "*(undefined8 *)(param_1 + 0x298) =")]
    assert not OWNER_STORE.search(b)
    assert OWNER_STORE.search(c).group(1) == "ctx"
    assert score_owner_context("PTR_DAT_04379560", "ctx")[0] == 10


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--c-root", type=Path)
    parser.add_argument("--out", type=Path)
    parser.add_argument("--json-out", type=Path)
    parser.add_argument("--expected-count", type=int, default=82731)
    parser.add_argument("--self-test", action="store_true")
    args = parser.parse_args()
    self_test()
    if args.self_test:
        print("SYNTHETIC_SELF_TEST_OK")
        return
    if not args.c_root or not args.out or not args.json_out:
        parser.error("--c-root --out --json-out are all required")
    r = analyze(args.c_root, args.expected_count)
    args.out.parent.mkdir(parents=True, exist_ok=True)
    args.json_out.parent.mkdir(parents=True, exist_ok=True)
    args.json_out.write_text(json.dumps(r, indent=2, ensure_ascii=False) + "\n", encoding="utf-8")
    args.out.write_text(to_md(r), encoding="utf-8")
    print(json.dumps({
        "status": r["status"],
        "coverage": r["scanned_c_functions"],
        "offset_writer_occurrences": r["owner_offset_298"]["syntactic_writer_occurrences"],
        "cross_call_candidates": len(r["selected_cross_call_candidates"]),
        "filesystem_io_functions": len(r["filesystem_io_functions"]),
    }, indent=2))


if __name__ == "__main__":
    main()
