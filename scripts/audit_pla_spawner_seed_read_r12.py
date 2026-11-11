#!/usr/bin/env python3
"""Audit PLA 1.1.1 R12 hardware-read-watchpoint JSONL; no native game simulation.

Classification is deliberately limited to observed watchpoint events:
- producer STR evidence + one read watchpoint event can establish a monitored read;
- C/ASM consumer identity, SlotRNG.Next() calls and PA8 parity remain UNPROVEN.
"""
from __future__ import annotations

import argparse
import json
from pathlib import Path
from collections import defaultdict
from pla_rng_reference_r8 import Xoroshiro128Plus

SCHEMA="pla111-r12-seed-read-v1"
EXPECTED_SHA="260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794"
PRODUCER_EVENTS=("producer_after_store","producer_alias_failure","producer_sample_error")
ALLOWED=("probe_armed","producer_after_store","producer_alias_failure",
         "producer_sample_error","watch_install_requested","watch_install_failed",
         "hardware_read_watchpoint_hit","read_sample_error")

def value(obj):
    if obj is None:return None
    if isinstance(obj,bool):raise ValueError("Boolean is not a uint64")
    if isinstance(obj,int):return obj
    return int(obj,0)

def parse(lines):
    parsed=[]
    for idx,line in enumerate(lines,1):
        if not line.strip():continue
        try:row=json.loads(line)
        except Exception as exc:raise ValueError(f"line {idx}: invalid JSON: {exc}") from exc
        if not isinstance(row,dict) or row.get("schema")!=SCHEMA:
            raise ValueError(f"line {idx}: wrong schema")
        if row.get("event") not in ALLOWED:
            raise ValueError(f"line {idx}: unknown event")
        if row.get("origin")!="guest_gdb_probe":
            raise ValueError(f"line {idx}: unsupported origin; synthetic samples cannot be mixed with live")
        if not row.get("case_id") or not row.get("run_id") or not isinstance(row.get("seq"),int):
            raise ValueError(f"line {idx}: missing case/run/sequence")
        parsed.append(row)
    return parsed

def audit(rows):
    groups=defaultdict(list)
    for item in rows:
        groups[(item["case_id"],item["run_id"])].append(item)
    result=[]
    for (case,run),items in sorted(groups.items()):
        ordered=sorted(items,key=lambda x:x["seq"])
        if len({x["seq"] for x in ordered})!=len(ordered):
            raise ValueError("Duplicate sequence in "+case+"/"+run)
        armed=[x for x in ordered if x["event"]=="probe_armed"]
        if armed and armed[0].get("elf_sha256")!=EXPECTED_SHA:
            raise ValueError("Source ELF provenance mismatch in "+case+"/"+run)
        producer=next((x for x in ordered if x["event"]=="producer_after_store"),None)
        requested=next((x for x in ordered if x["event"]=="watch_install_requested"),None)
        hit=next((x for x in ordered if x["event"]=="hardware_read_watchpoint_hit"),None)
        failed=any(x["event"] in ("producer_alias_failure","producer_sample_error","watch_install_failed","read_sample_error") for x in ordered)
        checks={}
        if producer:
            ep=value(producer.get("entry_ptr"))
            sp=value(producer.get("spawner_ptr"))
            off=producer.get("entry_offset")
            rg=value(producer.get("register_x14_seed"))
            sd=value(producer.get("generate_seed"))
            checks["valid_entry_offset"]=isinstance(off,int) and off in range(0,0x381,0x80)
            checks["entry_alias"]=ep is not None and sp is not None and isinstance(off,int) and ep==sp+off
            checks["seed_matches_x14"]=sd is not None and rg==sd and producer.get("seed_matches_register") is True
        else:
            checks.update({"valid_entry_offset":False,"entry_alias":False,"seed_matches_x14":False})
        if requested and producer:
            checks["watch_request_matches_producer"]=(value(requested.get("entry_ptr"))==value(producer.get("entry_ptr"))
                                                      and value(requested.get("address"))==value(producer.get("entry_ptr"))+0x20)
        else:checks["watch_request_matches_producer"]=False
        if hit and producer and requested:
            reg=hit.get("regs") or {}
            checks["hardware_read_hit_matched"]=(value(hit.get("entry_ptr"))==value(producer.get("entry_ptr"))
                and value(hit.get("seed_at_hit"))==value(producer.get("generate_seed"))
                and hit.get("seed_unchanged") is True
                and reg.get("pc") is not None
                and reg.get("lr") is not None
                and hit["seq"]>requested["seq"]>producer["seq"])
        else:checks["hardware_read_hit_matched"]=False
        predicted=None
        if producer and checks["seed_matches_x14"]:
            g=Xoroshiro128Plus(value(producer["generate_seed"]))
            predicted={"slot_roll":f"0x{g.next():016X}",
                       "entity_seed":f"0x{g.next():016X}",
                       "status":"REFERENCE_ONLY_NOT_OBSERVED"}
        if failed:
            status="INSTRUMENTATION_ERROR"
        elif all(checks.values()) and armed:
            status="MONITORED_HARDWARE_READ_RECORDED_NATIVE_CONSUMER_UNIDENTIFIED"
        elif producer and requested and checks["entry_alias"] and checks["seed_matches_x14"]:
            status="WATCH_REQUESTED_NO_VALID_READ_HIT"
        elif producer:
            status="PRODUCER_CAPTURE_ONLY"
        else:
            status="NO_PRODUCER_CAPTURE"
        result.append({
            "case_id":case,"run_id":run,"status":status,
            "events":len(ordered),
            "checks":checks,
            "predicted":predicted,
            "first_read_stop_pc":(hit or {}).get("regs",{}).get("pc") if hit else None,
            "first_read_stop_lr":(hit or {}).get("regs",{}).get("lr") if hit else None,
            "note":"PC may be after the load; inspect ARM64 around PC. A read watchpoint does not itself prove SlotRNG or EC/PID/IV calls.",
            "consumer_function":"UNRESOLVED_NEEDS_NATIVE_PC_CONTROL_FLOW",
            "native_entity_seed":"NOT_OBSERVED",
            "native_ec_pid_ivs":"NOT_OBSERVED",
            "game_parity":"NOT_VERIFIED",
        })
    return {"schema":"pla111-r12-read-watch-audit-v1","source":"provided_jsonl_not_independently_attested",
            "cases":result,
            "limits":["Synthetic unit tests do not attest a real guest watchpoint.",
                      "Hardware read watchpoints are mandatory for the read-hit claim.",
                      "No automatic native consumer identification or EC/PID/IV parity."]}

def selftest():
    def ev(name,seq,**kw):
        return {"schema":SCHEMA,"origin":"guest_gdb_probe","case_id":"synthetic",
                "run_id":"synthetic","seq":seq,"event":name,**kw}
    g=Xoroshiro128Plus(0x1234)
    slot=f"0x{g.next():016X}";ent=f"0x{g.next():016X}"
    rows=[
        ev("probe_armed",1,elf_sha256=EXPECTED_SHA),
        ev("producer_after_store",2,spawner_ptr="0x10000000",entry_ptr="0x10000080",
           entry_offset=0x80,generate_seed="0x1234",register_x14_seed="0x1234",seed_matches_register=True),
        ev("watch_install_requested",3,entry_ptr="0x10000080",address="0x100000a0"),
        ev("hardware_read_watchpoint_hit",4,entry_ptr="0x10000080",
           seed_at_hit="0x1234",seed_unchanged=True,
           regs={"pc":"0x20000000","lr":"0x20000004"})]
    out=audit(parse(json.dumps(x)+"\n" for x in rows))["cases"][0]
    assert out["status"]=="MONITORED_HARDWARE_READ_RECORDED_NATIVE_CONSUMER_UNIDENTIFIED",out
    assert out["predicted"]["slot_roll"]==slot and out["predicted"]["entity_seed"]==ent
    assert out["game_parity"]=="NOT_VERIFIED"
    with_fail=rows.copy()
    with_fail[-1]=dict(with_fail[-1],seed_at_hit="0x1235",seed_unchanged=False)
    out=audit(with_fail)["cases"][0]
    assert out["status"]!="MONITORED_HARDWARE_READ_RECORDED_NATIVE_CONSUMER_UNIDENTIFIED"
    with_fail[-1]=ev("watch_install_failed",4,error="remote unsupported")
    out=audit(with_fail)["cases"][0]
    assert out["status"]=="INSTRUMENTATION_ERROR"
    no_hit=audit(rows[:-1])["cases"][0]
    assert no_hit["status"]=="WATCH_REQUESTED_NO_VALID_READ_HIT"
    false_source=dict(rows[0],origin="synthetic")
    try:parse([json.dumps(false_source)])
    except ValueError:pass
    else:raise AssertionError("synthetic data accepted as live")
    print("R12 synthetic only: match, mismatch, unsupported remote, no hit, no false game parity PASS")

def main():
    a=argparse.ArgumentParser()
    a.add_argument("--self-test",action="store_true")
    a.add_argument("--jsonl",type=Path)
    a.add_argument("--report",type=Path)
    x=a.parse_args()
    if x.self_test:selftest();return
    if not x.jsonl:a.error("--jsonl required unless --self-test")
    rows=parse(x.jsonl.read_text(encoding="utf-8").splitlines())
    result=audit(rows)
    if x.report:
        x.report.parent.mkdir(parents=True,exist_ok=True)
        x.report.write_text(json.dumps(result,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    print(json.dumps(result,indent=2,ensure_ascii=False))
if __name__=="__main__":main()
