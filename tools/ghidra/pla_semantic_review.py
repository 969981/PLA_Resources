#!/usr/bin/env python3
"""Build a compact PLA semantic review bundle using exact Ghidra function-body ranges.

The SQLite database remains the source of function, string, reference and C-pseudocode
records. Function ownership comes from a separate read-only export of the restored
Ghidra project; no ELF import, analysis pass or decompilation is performed here.
All domain labels remain static candidates, not runtime proof.
"""
from __future__ import annotations

import argparse
import bisect
import csv
import json
import re
import sqlite3
from collections import Counter, defaultdict
from pathlib import Path

DOMAINS = {
    "pokemon_data": re.compile(
        r"pokemon|pok[eé]mon|pml|pms|species|personal|monster|party|trainer|form|box|pkm",
        re.I,
    ),
    "save_storage": re.compile(
        r"save|savedata|save_data|serialize|deserialize|storage|userdata|user_data|"
        r"playerdata|player_data|systemdata|archive|profile|checkpoint|progress|slot",
        re.I,
    ),
    "battle": re.compile(
        r"battle|damage|attack|move|skill|ability|turn|target|combat|trainer|"
        r"critical|effectiveness|type.?chart|stat|status|condition|hit.?point",
        re.I,
    ),
    "pokedex_research": re.compile(
        r"pokedex|pok[eé]dex|zukan|research|field.?note|discovery|research.?task|"
        r"report.?task|encyclopedia|encyclopaedia",
        re.I,
    ),
    "items_inventory": re.compile(
        r"item|inventory|bag|shop|recipe|material|medicine|craft|goods|"
        r"pokeball|poke.?ball|berry|consumable|treasure|key.?item",
        re.I,
    ),
    "wild_encounter": re.compile(
        r"encount|encounter|wild|spawn|habitat|resident|population|appear|"
        r"mass.?outbreak|distortion|alpha|roam|patrol|territory",
        re.I,
    ),
}


def norm_addr(value: str | None) -> str:
    if value is None:
        return ""
    value = str(value).strip().lower()
    if value.startswith("0x"):
        value = value[2:]
    return value


def addr_int(value: str | None) -> int | None:
    value = norm_addr(value)
    if not value:
        return None
    try:
        return int(value, 16)
    except ValueError:
        return None


def write_csv(path: Path, rows: list[dict], columns: list[str]) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    with path.open("w", encoding="utf-8-sig", newline="") as fp:
        writer = csv.DictWriter(fp, fieldnames=columns, extrasaction="ignore")
        writer.writeheader()
        writer.writerows(rows)


def load_body_ranges(path: Path, expected_functions: int):
    intervals = []
    function_entries = set()
    summary = None
    meta = None
    with path.open("r", encoding="utf-8") as fp:
        for line_no, line in enumerate(fp, 1):
            if not line.strip():
                continue
            row = json.loads(line)
            kind = row.get("type")
            if kind == "meta":
                meta = row
            elif kind == "function":
                entry = norm_addr(row.get("entry"))
                if not entry or entry in function_entries:
                    raise ValueError(f"Missing or duplicate function entry at line {line_no}: {entry}")
                function_entries.add(entry)
                ranges = row.get("ranges") or []
                if not ranges:
                    raise ValueError(f"Function has no body ranges: {entry}")
                for span in ranges:
                    lo, hi = addr_int(span.get("start")), addr_int(span.get("end"))
                    if lo is None or hi is None or hi < lo:
                        raise ValueError(f"Invalid function body range for {entry}: {span}")
                    intervals.append((lo, hi, entry))
            elif kind == "summary":
                if summary is not None:
                    raise ValueError("Repeated function-body summary")
                summary = row
            else:
                raise ValueError(f"Unknown function-body record at line {line_no}: {kind}")

    if not meta or meta.get("mode") != "READ_ONLY_NO_ANALYSIS":
        raise ValueError("Function-body export is missing read-only/no-analysis provenance")
    if not summary or not summary.get("complete"):
        raise ValueError("Function-body export is incomplete")
    if len(function_entries) != expected_functions or int(summary.get("functions", -1)) != expected_functions:
        raise ValueError(
            f"Function-body count mismatch: {len(function_entries)} / {summary.get('functions')} "
            f"vs SQLite {expected_functions}"
        )
    if int(summary.get("ranges", -1)) != len(intervals):
        raise ValueError("Function-body range count mismatch")

    intervals.sort(key=lambda item: (item[0], item[1], item[2]))
    starts = [item[0] for item in intervals]
    prefix_max_end = []
    current_max = -1
    for _, hi, _ in intervals:
        current_max = max(current_max, hi)
        prefix_max_end.append(current_max)

    def locate(address: str):
        target = addr_int(address)
        if target is None:
            return "", "INVALID_ADDRESS"
        pos = bisect.bisect_right(starts, target) - 1
        matches = set()
        idx = pos
        while idx >= 0 and prefix_max_end[idx] >= target:
            lo, hi, entry = intervals[idx]
            if lo <= target <= hi:
                matches.add(entry)
            idx -= 1
        if len(matches) == 1:
            return next(iter(matches)), "EXACT_GHIDRA_FUNCTION_BODY"
        if len(matches) > 1:
            return "", "OVERLAPPING_GHIDRA_FUNCTION_BODIES"
        return "", "NOT_IN_GHIDRA_FUNCTION_BODY"

    return locate, {
        "functions": len(function_entries),
        "ranges": len(intervals),
        "program": meta.get("program"),
        "image_base": meta.get("image_base"),
        "mode": meta.get("mode"),
    }, function_entries


def main() -> None:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--db", type=Path, required=True)
    p.add_argument("--function-bodies", type=Path, required=True)
    p.add_argument("--out", type=Path, required=True)
    p.add_argument("--top-per-domain", type=int, default=20)
    p.add_argument("--seed-per-domain", type=int, default=60)
    p.add_argument("--pseudocode-per-domain", type=int, default=3)
    p.add_argument("--max-c-chars", type=int, default=12000)
    args = p.parse_args()
    if args.top_per_domain < 1 or args.seed_per_domain < args.top_per_domain:
        p.error("Require seed-per-domain >= top-per-domain >= 1")
    args.out.mkdir(parents=True, exist_ok=True)

    db = sqlite3.connect(f"file:{args.db.resolve()}?mode=ro", uri=True)
    db.row_factory = sqlite3.Row
    functions = {}
    for row in db.execute(
        "SELECT entry,name,namespace,min_addr,max_addr,body_bytes,signature "
        "FROM functions ORDER BY entry"
    ):
        entry = norm_addr(row["entry"])
        functions[entry] = {
            "entry": entry,
            "name": row["name"] or "",
            "namespace": row["namespace"] or "",
            "min_addr": row["min_addr"] or "",
            "max_addr": row["max_addr"] or "",
            "body_bytes": int(row["body_bytes"] or 0),
            "signature": row["signature"] or "",
            "c_path": f"c/{entry[:2]}/{entry}.c",
        }

    locate, body_meta, body_entries = load_body_ranges(args.function_bodies, len(functions))
    missing_body_entries = set(functions) - body_entries
    extra_body_entries = body_entries - set(functions)
    if missing_body_entries or extra_body_entries:
        raise ValueError(
            f"Function entry-set mismatch: missing={len(missing_body_entries)}, "
            f"extra={len(extra_body_entries)}"
        )

    summary = {
        "evidence_scope": "STATIC_GHIDRA_SQLITE_PLUS_EXACT_FUNCTION_BODY_RANGES",
        "semantic_status": "CANDIDATE_DISCOVERY_NOT_RUNTIME_PROOF",
        "database": args.db.name,
        "function_body_export": body_meta,
        "functions": len(functions),
        "tables": {},
    }
    for table in (
        "functions", "instructions", "references_full", "symbols",
        "defined_data", "decompilation", "memory_blocks", "metadata",
    ):
        summary["tables"][table] = db.execute(
            "SELECT COUNT(*) FROM " + table
        ).fetchone()[0]
    status_rows = db.execute(
        "SELECT status,COUNT(*) AS n FROM decompilation GROUP BY status ORDER BY status"
    ).fetchall()
    summary["decompilation_status"] = {
        row["status"] or "NULL": row["n"] for row in status_rows
    }

    candidate_acc = defaultdict(lambda: {
        "xrefs": 0, "strings": set(), "sites": set(), "reference_ids": set()
    })
    xref_rows = []
    mapping_counts = Counter()
    category_string_counts = defaultdict(set)
    query = """
        SELECT d.addr AS string_addr,d.preview AS string_value,d.byte_length,
               r.id AS reference_id,r.from_addr,r.to_addr,r.ref_type,
               r.is_call,r.is_jump,r.is_read,r.is_write,r.is_primary
        FROM defined_data d
        JOIN references_full r ON r.to_addr=d.addr
        WHERE d.is_string=1 AND d.preview IS NOT NULL
        ORDER BY d.addr,r.from_addr
    """
    for row in db.execute(query):
        value = row["string_value"] or ""
        categories = [name for name, pattern in DOMAINS.items() if pattern.search(value)]
        if not categories:
            continue
        entry, mapping = locate(row["from_addr"])
        mapping_counts[mapping] += 1
        for category in categories:
            category_string_counts[category].add((row["string_addr"], value))
            if entry:
                acc = candidate_acc[(category, entry)]
                acc["xrefs"] += 1
                acc["strings"].add(value)
                acc["sites"].add(norm_addr(row["from_addr"]))
                acc["reference_ids"].add(row["reference_id"])
            xref_rows.append({
                "category": category,
                "string_addr": norm_addr(row["string_addr"]),
                "string_value": value,
                "string_length": row["byte_length"],
                "reference_id": row["reference_id"],
                "reference_from": norm_addr(row["from_addr"]),
                "reference_type": row["ref_type"],
                "is_call": row["is_call"],
                "is_jump": row["is_jump"],
                "is_read": row["is_read"],
                "is_write": row["is_write"],
                "function_entry": entry,
                "function_name": functions[entry]["name"] if entry else "",
                "mapping_method": mapping,
                "evidence": "STRING_DATA_XREF_PLUS_EXACT_GHIDRA_BODY_MEMBERSHIP",
            })

    base_rows = []
    selected_seed_entries = set()
    for category in DOMAINS:
        rows = []
        for (cat, entry), acc in candidate_acc.items():
            if cat != category:
                continue
            fn = functions[entry]
            dec = db.execute(
                "SELECT status,error FROM decompilation WHERE entry=?", (entry,)
            ).fetchone()
            score = len(acc["strings"]) * 4 + acc["xrefs"]
            rows.append({
                "category": category,
                "entry": entry,
                "name": fn["name"],
                "namespace": fn["namespace"],
                "signature": fn["signature"],
                "body_bytes": fn["body_bytes"],
                "decompilation_status": dec["status"] if dec else "MISSING",
                "decompilation_error": dec["error"] if dec else "",
                "string_xref_count": acc["xrefs"],
                "unique_string_count": len(acc["strings"]),
                "string_score": score,
                "sample_strings": sorted(acc["strings"])[:12],
                "reference_sites": sorted(acc["sites"])[:24],
                "c_path": fn["c_path"],
                "evidence": "STATIC_STRING_XREF_WITH_EXACT_BODY_OWNERSHIP",
            })
        rows.sort(key=lambda r: (-r["string_score"], -r["body_bytes"], r["entry"]))
        base_rows.extend(rows)
        selected_seed_entries.update(r["entry"] for r in rows[:args.seed_per_domain])

    edge_counts = Counter()
    edge_sites = defaultdict(list)
    caller_map_failures = Counter()
    unresolved_targets = 0
    call_rows_seen = 0
    for call in db.execute(
        "SELECT from_addr,to_addr,ref_type FROM references_full WHERE is_call=1"
    ):
        call_rows_seen += 1
        caller, mapping = locate(call["from_addr"])
        if not caller:
            caller_map_failures[mapping] += 1
            continue
        callee = norm_addr(call["to_addr"])
        if callee not in functions:
            unresolved_targets += 1
            continue
        if caller not in selected_seed_entries and callee not in selected_seed_entries:
            continue
        key = (caller, callee, call["ref_type"] or "")
        edge_counts[key] += 1
        if len(edge_sites[key]) < 8:
            edge_sites[key].append(norm_addr(call["from_addr"]))

    degree = defaultdict(lambda: {"in": 0, "out": 0})
    for (caller, callee, _), count in edge_counts.items():
        degree[caller]["out"] += count
        degree[callee]["in"] += count

    final_by_domain = {}
    final_entries = set()
    for category in DOMAINS:
        rows = [r for r in base_rows if r["category"] == category]
        for row in rows:
            d = degree[row["entry"]]
            row["direct_callers_in_candidate_graph"] = d["in"]
            row["direct_callees_in_candidate_graph"] = d["out"]
            row["candidate_score"] = (
                row["string_score"]
                + 2 * min(d["in"], 50)
                + 2 * min(d["out"], 50)
            )
        rows.sort(key=lambda r: (
            -r["candidate_score"], -r["unique_string_count"], -r["body_bytes"], r["entry"]
        ))
        final_by_domain[category] = rows[:args.top_per_domain]
        final_entries.update(r["entry"] for r in rows[:args.top_per_domain])

    edge_rows = []
    incoming = defaultdict(Counter)
    outgoing = defaultdict(Counter)
    for (caller, callee, ref_type), count in sorted(edge_counts.items()):
        if caller not in final_entries and callee not in final_entries:
            continue
        incoming[callee][caller] += count
        outgoing[caller][callee] += count
        edge_rows.append({
            "caller_entry": caller,
            "caller_name": functions[caller]["name"],
            "callee_entry": callee,
            "callee_name": functions[callee]["name"],
            "reference_type": ref_type,
            "call_count": count,
            "sample_callsites": " ".join(edge_sites[(caller, callee, ref_type)]),
            "evidence": "DIRECT_CALL_REFERENCE_AND_EXACT_FUNCTION_BODY_OWNERSHIP",
        })

    def neighbor_list(counter, entry):
        return [
            {"entry": key, "name": functions[key]["name"], "call_count": count}
            for key, count in counter[entry].most_common(10)
        ]

    for rows in final_by_domain.values():
        for row in rows:
            row["top_callers"] = neighbor_list(incoming, row["entry"])
            row["top_callees"] = neighbor_list(outgoing, row["entry"])
            row["body_range_mapping"] = "EXACT_GHIDRA_FUNCTION_BODY"

    compact = {
        "evidence_scope": summary["evidence_scope"],
        "semantic_status": summary["semantic_status"],
        "source_analysis_run": 42774682950,
        "source_publication_run": 42830950371,
        "domains": final_by_domain,
    }
    (args.out / "top_candidates.json").write_text(
        json.dumps(compact, indent=2, ensure_ascii=False) + "\n", encoding="utf-8"
    )

    shortlist_rows = []
    for category, rows in final_by_domain.items():
        for row in rows:
            shortlist_rows.append({
                "category": category,
                "entry": row["entry"],
                "name": row["name"],
                "namespace": row["namespace"],
                "signature": row["signature"],
                "body_bytes": row["body_bytes"],
                "decompilation_status": row["decompilation_status"],
                "string_xref_count": row["string_xref_count"],
                "unique_string_count": row["unique_string_count"],
                "direct_callers": row["direct_callers_in_candidate_graph"],
                "direct_callees": row["direct_callees_in_candidate_graph"],
                "candidate_score": row["candidate_score"],
                "sample_strings": " | ".join(row["sample_strings"]),
                "c_path": row["c_path"],
                "evidence": row["evidence"],
            })
    write_csv(args.out / "semantic_shortlist.csv", shortlist_rows, [
        "category","entry","name","namespace","signature","body_bytes",
        "decompilation_status","string_xref_count","unique_string_count",
        "direct_callers","direct_callees","candidate_score","sample_strings",
        "c_path","evidence",
    ])
    write_csv(args.out / "semantic_string_xrefs.csv", xref_rows, [
        "category","string_addr","string_value","string_length","reference_id",
        "reference_from","reference_type","is_call","is_jump","is_read","is_write",
        "function_entry","function_name","mapping_method","evidence",
    ])
    write_csv(args.out / "semantic_callgraph_edges.csv", edge_rows, [
        "caller_entry","caller_name","callee_entry","callee_name","reference_type",
        "call_count","sample_callsites","evidence",
    ])

    pseudocode_lines = [
        "# PLA 1.1.1 — top semantic candidate pseudocode",
        "",
        "All entries below are Ghidra C pseudocode, not original game source. "
        "Domain membership is a static string/call-graph hypothesis.",
        "",
    ]
    emitted = set()
    for category, rows in final_by_domain.items():
        pseudocode_lines.extend([f"## {category}", ""])
        added = 0
        for row in rows:
            entry = row["entry"]
            if entry in emitted:
                continue
            dec = db.execute(
                "SELECT status,c,error FROM decompilation WHERE entry=?", (entry,)
            ).fetchone()
            if not dec or dec["status"] != "OK" or not dec["c"]:
                continue
            c_text = dec["c"]
            truncated = len(c_text) > args.max_c_chars
            if truncated:
                c_text = c_text[:args.max_c_chars] + "\n/* ... truncated for review bundle ... */\n"
            pseudocode_lines.extend([
                f"### {entry} — {row['name'] or 'FUN_' + entry}",
                "",
                f"- Signature: {row['signature']}",
                f"- Body bytes: {row['body_bytes']}",
                f"- String xrefs: {row['string_xref_count']} ({row['unique_string_count']} unique strings)",
                f"- Candidate score: {row['candidate_score']}",
                f"- Sample strings: {' | '.join(row['sample_strings'])}",
                f"- Direct callers: {json.dumps(row['top_callers'], ensure_ascii=False)}",
                f"- Direct callees: {json.dumps(row['top_callees'], ensure_ascii=False)}",
                f"- Pseudocode truncated: {str(truncated).lower()}",
                "",
                "----- C PSEUDOCODE START -----",
                c_text.rstrip(),
                "----- C PSEUDOCODE END -----",
                "",
            ])
            emitted.add(entry)
            added += 1
            if added >= args.pseudocode_per_domain:
                break
        if added == 0:
            pseudocode_lines.extend(["No successful pseudocode in this domain shortlist.", ""])
    (args.out / "top_candidate_pseudocode.md").write_text(
        "\n".join(pseudocode_lines), encoding="utf-8"
    )

    rtti_count = db.execute(
        "SELECT COUNT(*) FROM symbols WHERE name LIKE '%_ZTV%' OR name LIKE '%_ZTI%' OR name LIKE '%_ZTS%'"
    ).fetchone()[0]
    summary.update({
        "function_body_ranges": body_meta,
        "exact_function_body_mapping": True,
        "string_reference_mapping_counts": dict(mapping_counts),
        "domain_string_counts": {
            category: len(values) for category, values in category_string_counts.items()
        },
        "domain_candidate_function_counts": {
            category: sum(1 for row in base_rows if row["category"] == category)
            for category in DOMAINS
        },
        "shortlist_counts": {
            category: len(rows) for category, rows in final_by_domain.items()
        },
        "selected_seed_functions_for_callgraph": len(selected_seed_entries),
        "exact_call_references_scanned": call_rows_seen,
        "selected_aggregated_call_edges": len(edge_counts),
        "final_shortlist_call_edges": len(edge_rows),
        "caller_mapping_failures": dict(caller_map_failures),
        "unresolved_call_targets": unresolved_targets,
        "rtti_typeinfo_like_symbols": rtti_count,
        "final_shortlist_functions": len(final_entries),
        "pseudocode_functions_in_review_bundle": len(emitted),
        "caveats": [
            "String matching discovers candidates; it does not prove the function's business responsibility.",
            "Caller ownership is accepted only when the callsite lies in exactly one exported Ghidra function body range.",
            "Callee ownership is accepted only when the direct call target equals a known Ghidra function entry.",
            "Indirect calls, virtual dispatch, tail calls not represented as call references and unresolved external targets require separate analysis.",
            "No runtime behavior, game UI behavior or save-side effect is proven by this static report.",
        ],
        "next_manual_step": (
            "Review top_candidate_pseudocode.md, then trace the strongest candidate through "
            "exact callers/callees, data references, structure offsets and raw ARM64 instructions."
        ),
    })
    (args.out / "summary.json").write_text(
        json.dumps(summary, indent=2, ensure_ascii=False) + "\n", encoding="utf-8"
    )
    (args.out / "README.md").write_text(
        "# PLA 1.1.1 — exact-body semantic review bundle\n\n"
        "This bundle refines the first-pass keyword inventory using exact Ghidra function-body "
        "ranges exported from the restored native project in read-only/no-analysis mode.\n\n"
        "- top_candidates.json: top candidates per domain, with evidence and direct neighbors.\n"
        "- semantic_shortlist.csv: compact ranked candidate table.\n"
        "- semantic_string_xrefs.csv: matching string xrefs and exact source-function ownership.\n"
        "- semantic_callgraph_edges.csv: aggregated direct calls touching the shortlist.\n"
        "- top_candidate_pseudocode.md: Ghidra C pseudocode for leading candidates.\n"
        "- summary.json: counts, mapping validation and limitations.\n\n"
        "The analysis uses no ELF re-import, no Ghidra reanalysis and no new decompilation. "
        "Every business label remains a hypothesis until data flow and runtime behavior are verified.\n",
        encoding="utf-8",
    )
    print(json.dumps(summary, indent=2, ensure_ascii=False))
    db.close()


if __name__ == "__main__":
    main()
