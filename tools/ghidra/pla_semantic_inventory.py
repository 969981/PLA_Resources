#!/usr/bin/env python3
"""Build a first-pass, evidence-linked PLA semantic candidate inventory from Ghidra SQLite.

All labels are search candidates, not proven runtime behavior. String references are
mapped to the nearest containing Ghidra function interval and retain their evidence
addresses so each inference can be independently audited.
"""
from __future__ import annotations

import argparse
import csv
import json
import re
import sqlite3
from collections import defaultdict
from pathlib import Path
from bisect import bisect_right

DOMAINS = {
    "pokemon_data": re.compile(
        r"pokemon|pok[eé]mon|pml|pms|species|personal|monster|party|trainer|form|box",
        re.I,
    ),
    "save_storage": re.compile(
        r"save|savedata|save_data|serialize|deserialize|storage|userdata|user_data|"
        r"playerdata|player_data|systemdata|archive|block|profile",
        re.I,
    ),
    "battle": re.compile(
        r"battle|damage|attack|move|skill|ability|turn|target|combat|trainer",
        re.I,
    ),
    "pokedex_research": re.compile(
        r"pokedex|pok[eé]dex|zukan|research|dex|entry|task|request",
        re.I,
    ),
    "items_inventory": re.compile(
        r"item|inventory|bag|shop|recipe|material|medicine|craft|goods",
        re.I,
    ),
    "wild_encounter": re.compile(
        r"encount|encounter|wild|spawn|habitat|zone|area|appear|resident|field|"
        r"population|species",
        re.I,
    ),
}

RTTI = re.compile(
    r"(^_Z(TV|TI|TS|TT|TC|GV|Th|Tv|Tc))|"
    r"(vtable for |typeinfo for |typeinfo name for )|"
    r"(^__Z(TV|TI|TS))|(^\?\?_7)|(^\?\?_R0)",
    re.I,
)


def addr_int(value: str | None) -> int | None:
    if not value:
        return None
    value = value.strip()
    try:
        return int(value, 16)
    except (TypeError, ValueError):
        return None


def write_csv(path: Path, rows: list[dict], columns: list[str]) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    with path.open("w", encoding="utf-8-sig", newline="") as fp:
        writer = csv.DictWriter(fp, fieldnames=columns, extrasaction="ignore")
        writer.writeheader()
        writer.writerows(rows)


def load_functions(db: sqlite3.Connection):
    rows = db.execute(
        "SELECT entry,name,namespace,min_addr,max_addr,body_bytes,signature "
        "FROM functions ORDER BY entry"
    ).fetchall()
    funcs = []
    for row in rows:
        entry, name, namespace, min_addr, max_addr, body_bytes, signature = row
        lo, hi, ep = addr_int(min_addr), addr_int(max_addr), addr_int(entry)
        if ep is None:
            continue
        funcs.append({
            "entry": entry, "name": name or "", "namespace": namespace or "",
            "min_addr": min_addr or "", "max_addr": max_addr or "",
            "lo": lo, "hi": hi, "entry_int": ep,
            "body_bytes": int(body_bytes or 0), "signature": signature or "",
            "c_path": f"c/{entry[:2]}/{entry.lower()}.c",
        })
    funcs.sort(key=lambda x: x["entry_int"])
    return funcs


def map_function(address: str, funcs: list[dict], entries: list[int]) -> tuple[dict | None, str]:
    target = addr_int(address)
    if target is None:
        return None, "invalid_address"
    pos = bisect_right(entries, target) - 1
    # Function bodies can be discontiguous. The exported min/max interval is a
    # candidate containment test only; retain this method explicitly in outputs.
    for idx in range(pos, max(-1, pos - 12), -1):
        fn = funcs[idx]
        if fn["lo"] is not None and fn["hi"] is not None and fn["lo"] <= target <= fn["hi"]:
            return fn, "within_exported_function_min_max"
    return None, "no_containing_function_interval"


def main() -> None:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--db", type=Path, required=True)
    p.add_argument("--out", type=Path, required=True)
    p.add_argument("--top-per-domain", type=int, default=250)
    args = p.parse_args()
    args.out.mkdir(parents=True, exist_ok=True)

    db = sqlite3.connect(f"file:{args.db.resolve()}?mode=ro", uri=True)
    db.row_factory = sqlite3.Row
    funcs = load_functions(db)
    entries = [x["entry_int"] for x in funcs]
    by_entry = {x["entry"]: x for x in funcs}

    summary = {
        "evidence_scope": "STATIC_GHIDRA_DATABASE_ONLY",
        "semantic_status": "CANDIDATE_DISCOVERY_NOT_RUNTIME_PROOF",
        "database": args.db.name,
        "functions": len(funcs),
        "tables": {},
    }
    for table in ("functions", "instructions", "references_full", "symbols",
                  "defined_data", "decompilation", "memory_blocks", "metadata"):
        try:
            summary["tables"][table] = db.execute(
                "SELECT COUNT(*) FROM " + table
            ).fetchone()[0]
        except sqlite3.Error:
            summary["tables"][table] = None

    status_rows = db.execute(
        "SELECT status,COUNT(*) AS n FROM decompilation GROUP BY status ORDER BY status"
    ).fetchall()
    summary["decompilation_status"] = {r["status"] or "NULL": r["n"] for r in status_rows}

    # Collect domain-keyword strings and their direct data references.
    string_rows = db.execute(
        """
        SELECT d.addr AS string_addr,d.preview AS string_value,d.byte_length,
               r.id AS reference_id,r.from_addr,r.ref_type,
               r.is_call,r.is_jump,r.is_read,r.is_write
        FROM defined_data d
        JOIN references_full r ON r.to_addr=d.addr
        WHERE d.is_string=1 AND d.preview IS NOT NULL
        ORDER BY d.addr,r.from_addr
        """
    )
    xrefs: list[dict] = []
    candidate_acc = defaultdict(lambda: {
        "xrefs": 0, "strings": set(), "ref_addresses": set()
    })
    category_string_counts = defaultdict(set)

    for row in string_rows:
        value = row["string_value"]
        categories = [name for name, pattern in DOMAINS.items() if pattern.search(value)]
        if not categories:
            continue
        fn, mapping = map_function(row["from_addr"], funcs, entries)
        for category in categories:
            category_string_counts[category].add((row["string_addr"], value))
            xrefs.append({
                "category": category,
                "string_addr": row["string_addr"],
                "string_value": value,
                "string_length": row["byte_length"],
                "reference_id": row["reference_id"],
                "reference_from": row["from_addr"],
                "reference_type": row["ref_type"],
                "is_call": row["is_call"],
                "is_jump": row["is_jump"],
                "is_read": row["is_read"],
                "is_write": row["is_write"],
                "function_entry": fn["entry"] if fn else "",
                "function_name": fn["name"] if fn else "",
                "function_namespace": fn["namespace"] if fn else "",
                "function_signature": fn["signature"] if fn else "",
                "function_body_bytes": fn["body_bytes"] if fn else 0,
                "c_path": fn["c_path"] if fn else "",
                "mapping_method": mapping,
                "evidence": "STATIC_DATA_REFERENCE_AND_ADDRESS_INTERVAL",
            })
            if fn:
                acc = candidate_acc[(category, fn["entry"])]
                acc["xrefs"] += 1
                acc["strings"].add(value)
                acc["ref_addresses"].add(row["from_addr"])

    candidate_rows = []
    selected_by_domain = defaultdict(set)
    for (category, entry), acc in candidate_acc.items():
        fn = by_entry[entry]
        dec = db.execute(
            "SELECT status,error FROM decompilation WHERE entry=?", (entry,)
        ).fetchone()
        unique_strings = sorted(acc["strings"])
        score = len(unique_strings) * 2 + acc["xrefs"]
        candidate_rows.append({
            "category": category,
            "entry": entry,
            "name": fn["name"],
            "namespace": fn["namespace"],
            "signature": fn["signature"],
            "body_bytes": fn["body_bytes"],
            "decompilation_status": dec["status"] if dec else "MISSING",
            "decompilation_error": dec["error"] if dec else "",
            "string_xref_count": acc["xrefs"],
            "unique_string_count": len(unique_strings),
            "candidate_score": score,
            "sample_strings": " | ".join(unique_strings[:12]),
            "reference_sites": " ".join(sorted(acc["ref_addresses"])[:24]),
            "c_path": fn["c_path"],
            "evidence": "STATIC_KEYWORD_STRING_XREF; FUNCTION_INTERVAL_MAPPING",
        })

    for category in DOMAINS:
        domain_rows = sorted(
            [r for r in candidate_rows if r["category"] == category],
            key=lambda r: (-r["candidate_score"], -r["body_bytes"], r["entry"]),
        )
        for row in domain_rows[:args.top_per_domain]:
            selected_by_domain[category].add(row["entry"])
    candidate_rows.sort(key=lambda r: (r["category"], -r["candidate_score"], r["entry"]))

    # Build a focused direct call graph around top keyword candidates.
    selected_entries = set().union(*selected_by_domain.values()) if selected_by_domain else set()
    call_edges = set()
    calls = db.execute(
        "SELECT from_addr,to_addr,ref_type FROM references_full WHERE is_call=1"
    )
    for call in calls:
        caller, caller_method = map_function(call["from_addr"], funcs, entries)
        if not caller:
            continue
        target = call["to_addr"]
        callee = by_entry.get(target)
        callee_method = "exact_function_entry"
        if callee is None:
            callee, callee_method = map_function(target, funcs, entries)
        if not callee:
            continue
        if caller["entry"] in selected_entries or callee["entry"] in selected_entries:
            call_edges.add((
                caller["entry"], callee["entry"], call["from_addr"], target,
                call["ref_type"], caller_method, callee_method,
            ))

    call_rows = []
    degree = defaultdict(lambda: {"in": 0, "out": 0})
    for edge in sorted(call_edges):
        caller_entry, callee_entry, site, target, ref_type, caller_method, callee_method = edge
        caller, callee = by_entry[caller_entry], by_entry[callee_entry]
        degree[caller_entry]["out"] += 1
        degree[callee_entry]["in"] += 1
        call_rows.append({
            "caller_entry": caller_entry, "caller_name": caller["name"],
            "callee_entry": callee_entry, "callee_name": callee["name"],
            "callsite": site, "target": target, "reference_type": ref_type,
            "caller_mapping": caller_method, "callee_mapping": callee_method,
            "evidence": "STATIC_GHIDRA_CALL_REFERENCE",
        })

    for row in candidate_rows:
        row["direct_callers_in_selected_graph"] = degree[row["entry"]]["in"]
        row["direct_callees_in_selected_graph"] = degree[row["entry"]]["out"]

    # RTTI/vtable/typeinfo symbol inventory.
    rtti_rows = []
    for row in db.execute(
        "SELECT addr,name,namespace,symbol_type,source,is_primary FROM symbols "
        "WHERE name IS NOT NULL ORDER BY addr"
    ):
        if not RTTI.search(row["name"]):
            continue
        xref_count = db.execute(
            "SELECT COUNT(*) FROM references_full WHERE to_addr=?", (row["addr"],)
        ).fetchone()[0]
        fn, mapping = map_function(row["addr"], funcs, entries)
        rtti_rows.append({
            "address": row["addr"], "name": row["name"],
            "namespace": row["namespace"], "symbol_type": row["symbol_type"],
            "source": row["source"], "is_primary": row["is_primary"],
            "incoming_reference_count": xref_count,
            "containing_function_entry": fn["entry"] if fn else "",
            "mapping_method": mapping,
            "evidence": "STATIC_SYMBOL_NAME_PATTERN",
        })

    # Preserve all failed/empty decompilation records for a separate repair queue.
    failure_rows = []
    for row in db.execute(
        """
        SELECT f.entry,f.name,f.namespace,f.signature,f.body_bytes,d.status,d.error
        FROM decompilation d
        LEFT JOIN functions f ON f.entry=d.entry
        WHERE COALESCE(d.status,'') <> 'OK' OR COALESCE(d.c,'')=''
        ORDER BY f.entry
        """
    ):
        fn = by_entry.get(row["entry"])
        failure_rows.append({
            "entry": row["entry"], "name": row["name"],
            "namespace": row["namespace"], "signature": row["signature"],
            "body_bytes": row["body_bytes"], "status": row["status"],
            "error": row["error"], "c_path": fn["c_path"] if fn else "",
        })

    summary["domain_string_counts"] = {
        category: len(values) for category, values in category_string_counts.items()
    }
    summary["domain_candidate_function_counts"] = {
        category: sum(1 for row in candidate_rows if row["category"] == category)
        for category in DOMAINS
    }
    summary["selected_candidate_functions_for_callgraph"] = len(selected_entries)
    summary["selected_callgraph_edges"] = len(call_rows)
    summary["rtti_vtable_typeinfo_symbols"] = len(rtti_rows)
    summary["decompilation_failures_or_empty"] = len(failure_rows)
    summary["address_mapping_caveat"] = (
        "Function attribution uses exported min_addr/max_addr intervals and nearest "
        "preceding entry. It is a static candidate mapping, not proof of exact CFG "
        "ownership where function bodies are discontiguous or intervals overlap."
    )
    summary["next_manual_step"] = (
        "Inspect high-ranked function C pseudocode and raw instructions, then verify "
        "caller/callee paths, structure offsets, and data-flow before assigning business names."
    )

    write_csv(args.out / "domain_string_xrefs.csv", xrefs, [
        "category","string_addr","string_value","string_length","reference_id",
        "reference_from","reference_type","is_call","is_jump","is_read","is_write",
        "function_entry","function_name","function_namespace","function_signature",
        "function_body_bytes","c_path","mapping_method","evidence",
    ])
    write_csv(args.out / "domain_function_candidates.csv", candidate_rows, [
        "category","entry","name","namespace","signature","body_bytes",
        "decompilation_status","decompilation_error","string_xref_count",
        "unique_string_count","candidate_score","sample_strings","reference_sites",
        "c_path","direct_callers_in_selected_graph","direct_callees_in_selected_graph",
        "evidence",
    ])
    write_csv(args.out / "selected_callgraph_edges.csv", call_rows, [
        "caller_entry","caller_name","callee_entry","callee_name","callsite","target",
        "reference_type","caller_mapping","callee_mapping","evidence",
    ])
    write_csv(args.out / "rtti_vtable_typeinfo_symbols.csv", rtti_rows, [
        "address","name","namespace","symbol_type","source","is_primary",
        "incoming_reference_count","containing_function_entry","mapping_method","evidence",
    ])
    write_csv(args.out / "decompilation_failures.csv", failure_rows, [
        "entry","name","namespace","signature","body_bytes","status","error","c_path",
    ])
    (args.out / "summary.json").write_text(
        json.dumps(summary, indent=2, ensure_ascii=False) + "\n", encoding="utf-8"
    )
    (args.out / "README.md").write_text(
        "# PLA 1.1.1 — first-pass semantic candidate inventory\n\n"
        "This is a static evidence index, not a claim that keyword matches prove function behavior. "
        "String xrefs are linked to candidate functions using exported function address intervals. "
        "Use the address, callsite and C path to inspect the original Ghidra pseudocode and instructions.\n\n"
        "- domain_string_xrefs.csv: domain keyword strings and direct references.\n"
        "- domain_function_candidates.csv: ranked candidate functions by domain.\n"
        "- selected_callgraph_edges.csv: direct call references adjacent to top-ranked candidates.\n"
        "- rtti_vtable_typeinfo_symbols.csv: RTTI/vtable/typeinfo-like symbol names and xref counts.\n"
        "- decompilation_failures.csv: unsuccessful or empty decompilation records.\n"
        "- summary.json: counts, evidence scope and mapping caveats.\n\n"
        "Function interval attribution is provisional. Confirm every business label through "
        "instruction-level data flow, callers/callees, structure offsets and runtime evidence.\n",
        encoding="utf-8",
    )
    print(json.dumps(summary, indent=2, ensure_ascii=False))
    db.close()


if __name__ == "__main__":
    main()
