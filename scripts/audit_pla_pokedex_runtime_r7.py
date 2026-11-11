#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""PLA v1.1.1 R7: evidence-graded auditor for guest GDB JSONL observations.

Standard library only. Does not access or modify original game, save or ELF.
The auditor NEVER reports PERSISTED from a single process / file IO / Commit.
"""
from __future__ import annotations

import argparse
import json
import sys
from collections import Counter, defaultdict
from pathlib import Path

SCHEMA = "pla111-r7-guest-events-v1"
ORIGIN = "guest_gdb_probe"
VERSION = "PLA-v1.1.1-R7"

def load_events(paths, allow_synthetic=False):
    rows = []
    for path in paths:
        with Path(path).open("r", encoding="utf-8") as fp:
            for index, line in enumerate(fp, 1):
                if not line.strip():
                    continue
                try:
                    obj = json.loads(line)
                except json.JSONDecodeError as exc:
                    raise ValueError(f"{path}:{index}: invalid JSON: {exc}") from exc
                if not isinstance(obj, dict) or obj.get("schema") != SCHEMA:
                    raise ValueError(f"{path}:{index}: invalid event schema")
                if obj.get("origin") != ORIGIN and not allow_synthetic:
                    raise ValueError(f"{path}:{index}: untrusted event origin: {obj.get('origin')}")
                for key in ("case_id", "run_id", "event", "seq"):
                    if key not in obj:
                        raise ValueError(f"{path}:{index}: missing {key}")
                if not isinstance(obj["seq"], int):
                    raise ValueError(f"{path}:{index}: invalid sequence")
                rows.append(obj)
    return rows

def by_case(rows):
    result = defaultdict(list)
    for obj in rows:
        result[obj["case_id"]].append(obj)
    return result

def _matching(rows, event):
    return [r for r in rows if r["event"] == event]

def _digest(event):
    return (event.get("state") or {}).get("sha256")

def _has_good_hash(event):
    return isinstance(_digest(event), str) and len(_digest(event)) == 64

def _pending_transition(row):
    block = row.get("block") or {}
    return (row.get("before_pending") == 1 and block.get("pending") == 0
            and block.get("found") is True
            and block.get("source_sha256") is not None
            and block.get("source_sha256") == block.get("mirror_sha256"))

def analyze_case(rows):
    rows = sorted(rows, key=lambda e: (int(e.get("ts_monotonic_ns", 0)), e.get("run_id",""), e["seq"]))
    armed_runs={r["run_id"] for r in _matching(rows,"probe_armed")}
    aborted_runs={r["run_id"] for r in _matching(rows,"probe_aborted")}
    reliable_runs=armed_runs-aborted_runs
    clean = [r for r in rows if r["run_id"] in reliable_runs]
    reports=[r for r in _matching(clean,"report_update_exit") if r.get("changed") is True and _has_good_hash(r)]
    writes=[r for r in _matching(clean,"zukan_write_enter") if _has_good_hash(r)]
    key_writes=[r for r in _matching(clean,"hash_write_post")
                if (r.get("block") or {}).get("found") and (r.get("block") or {}).get("pending")==1]
    snapshots=[r for r in _matching(clean,"snapshot_exit") if _pending_transition(r)]
    writefile=[r for r in _matching(clean,"hashdb_writefile_exit") if r.get("bool_result_w0")==1]
    jobs=[r for r in _matching(clean,"hashdb_write_job_result") if r.get("hashdb_job_result")==2]
    failed_jobs=[r for r in _matching(clean,"hashdb_write_job_result") if r.get("hashdb_job_result")==3]
    commits=[r for r in _matching(clean,"commit_exit") if r.get("nn_fs_commit_result")==0]
    commit_fail=[r for r in _matching(clean,"commit_exit")
                 if isinstance(r.get("nn_fs_commit_result"),int) and r.get("nn_fs_commit_result")!=0]
    load_exits=[r for r in _matching(clean,"zukan_load_exit") if _has_good_hash(r)]
    match_pairs=[]
    for report in reports:
        for loaded in load_exits:
            if loaded["run_id"]!=report["run_id"] and _digest(loaded)==_digest(report):
                match_pairs.append({
                    "source_run_id":report["run_id"],
                    "restarted_run_id":loaded["run_id"],
                    "sha256":_digest(report),
                })
    # This is only sequential compatibility evidence. No true shared transaction ID.
    observed_events = {
        "report_memory_changed":bool(reports),
        "pokedex_write_method_entered":bool(writes),
        "kzukan_descriptor_pending_set":bool(key_writes),
        "snapshot_source_copied_to_mirror":bool(snapshots),
        "hashdb_writefile_returned_ok":bool(writefile),
        "hashdb_write_job_result_2":bool(jobs),
        "hashdb_write_job_result_3":bool(failed_jobs),
        "native_commit_returned_zero":bool(commits),
        "native_commit_returned_nonzero":bool(commit_fail),
        "cold_restart_pokedex_digest_match":bool(match_pairs),
    }
    # Ordering is per host-observed timestamps, cannot stand in for transactional identity.
    event_counts=dict(Counter(r["event"] for r in clean))
    blockers=[]
    if not reliable_runs:
        blockers.append("No fully armed live guest probe (or it aborted).")
    for key,label in (
        ("report_memory_changed","Report update before/after full-block digest"),
        ("pokedex_write_method_entered","Pokedex vtable+0x50 entry"),
        ("kzukan_descriptor_pending_set","KZukan desc+0x28 set on actual write"),
        ("snapshot_source_copied_to_mirror","KZukan pending 1->0 plus source/mirror digest equality"),
        ("hashdb_write_job_result_2","hashdb background WriteFile job success"),
        ("native_commit_returned_zero","nn::fs::Commit native return code 0"),
        ("cold_restart_pokedex_digest_match","new run after cold restart with matched Pokedex block"),
    ):
        if not observed_events[key]:
            blockers.append("NOT OBSERVED: "+label)
    blockers.append("Hashdb job and nn::fs::Commit do not carry a proven shared transaction identity.")
    blockers.append("Even a matching post-restart memory digest must be verified against the actual fresh save load; no automatic PERSISTED verdict.")
    if any(r.get("event") in ("probe_install_error","return_probe_error","sampling_error","return_sampling_error") for r in rows):
        blockers.append("At least one instrumentation error occurred, so missing events cannot mean code was not called.")
    return {
        "case_id":rows[0]["case_id"] if rows else None,
        "evidence_grade":"GUEST_EVENTS_ONLY_NOT_FULL_SAVE_PERSISTENCE",
        "fully_armed_runs":sorted(reliable_runs),
        "failed_or_aborted_runs":sorted(aborted_runs),
        "runs":sorted({r["run_id"] for r in rows}),
        "event_counts":event_counts,
        "observed":observed_events,
        "cold_restart_matches":match_pairs[:16],
        "blockers":blockers,
        "verdict":"PERSISTENCE_NOT_VERIFIED",
    }

def report(rows):
    cases=by_case(rows)
    return {
        "schema":"pla111-r7-runtime-audit-v1",
        "version":VERSION,
        "events":len(rows),
        "cases":{k:analyze_case(v) for k,v in sorted(cases.items())},
        "warning":"Hashdb write success, Commit return 0, and memory snapshot are distinct facts; no automatic cross-transaction success inference.",
    }

def _self_test():
    import tempfile
    def row(event, n, run="A", **extras):
        return {"schema":SCHEMA, "origin":ORIGIN, "event":event,
                "seq":n, "case_id":"offline-fixture", "run_id":run,
                "ts_monotonic_ns":n, **extras}
    h1="ab"*32
    h2="cd"*32
    staged=[
        row("probe_started",1),row("probe_armed",2),
        row("report_update_enter",3),
        row("report_update_exit",4,changed=True,state={"sha256":h1}),
        row("zukan_write_enter",5,state={"sha256":h1}),
        row("hash_write_post",6,block={"found":True,"pending":1}),
        row("snapshot_exit",7,before_pending=1,block={
            "found":True,"pending":0,"source_sha256":h2,"mirror_sha256":h2}),
        row("hashdb_writefile_exit",8,bool_result_w0=1),
        row("hashdb_write_job_result",9,hashdb_job_result=2),
        row("commit_exit",10,nn_fs_commit_result=0),
        row("probe_started",11,run="B"),row("probe_armed",12,run="B"),
        row("zukan_load_exit",13,run="B",state={"sha256":h1}),
    ]
    with tempfile.TemporaryDirectory() as temp:
        path=Path(temp)/"fixture.jsonl"
        path.write_text("\n".join(json.dumps(x) for x in staged)+"\n",encoding="utf-8")
        rows=load_events([path])
        a=report(rows)["cases"]["offline-fixture"]
        assert a["verdict"]=="PERSISTENCE_NOT_VERIFIED"
        assert all(a["observed"][x] for x in (
            "report_memory_changed","pokedex_write_method_entered",
            "kzukan_descriptor_pending_set","snapshot_source_copied_to_mirror",
            "hashdb_writefile_returned_ok","hashdb_write_job_result_2",
            "native_commit_returned_zero","cold_restart_pokedex_digest_match"))
        assert len(a["cold_restart_matches"])==1
        corrupted=staged.copy()
        corrupted[6]=row("snapshot_exit",7,before_pending=1,
                         block={"found":True,"pending":0,"source_sha256":h1,"mirror_sha256":h2})
        path.write_text("\n".join(json.dumps(x) for x in corrupted)+"\n",encoding="utf-8")
        a=report(load_events([path]))["cases"]["offline-fixture"]
        assert not a["observed"]["snapshot_source_copied_to_mirror"]
        # Job state 3 and Commit failure are never mistaken for success.
        corrupted[8]=row("hashdb_write_job_result",9,hashdb_job_result=3)
        corrupted[9]=row("commit_exit",10,nn_fs_commit_result=0x123)
        path.write_text("\n".join(json.dumps(x) for x in corrupted)+"\n",encoding="utf-8")
        a=report(load_events([path]))["cases"]["offline-fixture"]
        assert not a["observed"]["hashdb_write_job_result_2"]
        assert a["observed"]["hashdb_write_job_result_3"]
        assert not a["observed"]["native_commit_returned_zero"]
        assert a["observed"]["native_commit_returned_nonzero"]
        # No attached/armed real run: never conclude that missing events are negatives.
        path.write_text(json.dumps(row("report_update_exit",1,changed=True,state={"sha256":h1}))+"\n",encoding="utf-8")
        a=report(load_events([path]))["cases"]["offline-fixture"]
        assert not any(a["observed"].values())
        # Synthetic fixture source cannot be accepted by production auditor.
        x=row("probe_armed",1)
        x["origin"]="synthetic_test"
        path.write_text(json.dumps(x)+"\n",encoding="utf-8")
        try:
            load_events([path])
            raise AssertionError("accepted synthetic event in production")
        except ValueError as exc:
            assert "untrusted event origin" in str(exc)
    print("PASS: schema, closed-loop indicators, mirror mismatch, job failure, commit failure, not-armed, no PERSISTED, synthetic origin")
    return 0

def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument("logs",nargs="*",help="R7 live guest JSONL log files")
    parser.add_argument("--out",type=Path,help="write a JSON report (does not change input logs)")
    parser.add_argument("--self-test",action="store_true",help="CI-only synthetic unit tests, never actual guest evidence")
    args=parser.parse_args()
    if args.self_test:
        return _self_test()
    if not args.logs:
        parser.error("Provide live guest JSONL logs, or --self-test")
    result=report(load_events(args.logs))
    contents=json.dumps(result,ensure_ascii=False,indent=2)+"\n"
    if args.out:
        args.out.parent.mkdir(parents=True,exist_ok=True)
        args.out.write_text(contents,encoding="utf-8")
    print(contents)
    return 0

if __name__=="__main__":
    sys.exit(main())
