# -*- coding: utf-8 -*-
"""
PLA v1.1.1 R7: GDB Python guest observation, with no game-state writes.

Run INSIDE an existing AArch64 guest GDB session (e.g. Eden GDB Stub).
Required env: PLA_R7_MAIN_BASE (loaded main ELF base), PLA_R7_LOG (JSONL path).
Optional: PLA_R7_CASE_ID, PLA_R7_RUN_ID, PLA_R7_STAGES (comma separated),
          PLA_R7_MAX_EVENTS (default 20000), PLA_R7_HASH_BYTES (default 131072).
Source using: (gdb) source scripts/pla_pokedex_runtime_gdb_r7.py
No breakpoints are created without PLA_R7_MAIN_BASE and PLA_R7_LOG.
CAUTION: GDB software breakpoints may temporarily patch guest code/JIT;
this script never writes to save memory, bytes, or disk. Only use on backups.
"""
import os
import sys
import json
import time
import uuid
import hashlib
from datetime import datetime, timezone

import gdb

GHIDRA_IMAGE_BASE = 0x100000
POKEDEX_SIZE = 0x1E460
AUX_OFFSET = 0x1E4CC
AUX_SIZE = 0xF54  # end at +0x1F420 mutex; not included in KZukan saved block
KZUKAN = 0x02168706
SCHEMA = "pla111-r7-guest-events-v1"
ALL_STAGES = {"update", "block", "mirror", "io", "commit"}
TARGETS = {
    "update": [
        ("report_update_enter", 0x0112F528, "report_update"),
    ],
    "block": [
        ("zukan_load_enter", 0x0112E414, "load"),
        ("zukan_write_enter", 0x0112E5CC, "zukan_write"),
        ("hash_write_enter", 0x0112E6F0, "hash_write"),
        ("hash_write_post", 0x0112E7B4, "hash_write_post"),
    ],
    "mirror": [
        ("snapshot_enter", 0x010CE5DC, "snapshot"),
    ],
    "io": [
        ("save_hashdb_job_requested", 0x010CED3C, "hashdb_start"),
        ("hashdb_write_job_result", 0x011506B8, "hashdb_result"),
        ("hashdb_writefile_enter", 0x010CE274, "hashdb_writefile"),
    ],
    "commit": [
        ("save_task_poll", 0x011457E4, "save_task"),
        ("commit_enter", 0x02A8F2F4, "commit"),
        ("save_callback_enter", 0x011486F8, "save_callback"),
    ]
}

def _require_env(name):
    value = os.environ.get(name)
    if not value:
        raise RuntimeError("R7 not armed: missing " + name)
    return value

class PLAR7Observer:
    def __init__(self):
        self.main_base = int(_require_env("PLA_R7_MAIN_BASE"), 0)
        if self.main_base <= 0 or self.main_base % 0x1000:
            raise ValueError("PLA_R7_MAIN_BASE must be a positive page-aligned guest address")
        self.log_path = os.path.abspath(_require_env("PLA_R7_LOG"))
        self.case_id = os.environ.get("PLA_R7_CASE_ID") or uuid.uuid4().hex
        self.run_id = os.environ.get("PLA_R7_RUN_ID") or uuid.uuid4().hex
        stages = os.environ.get("PLA_R7_STAGES", "update,block,mirror,io,commit")
        self.stages = {s.strip() for s in stages.split(",") if s.strip()}
        if not self.stages or not self.stages <= ALL_STAGES:
            raise ValueError("Invalid PLA_R7_STAGES: " + stages)
        self.max_events = int(os.environ.get("PLA_R7_MAX_EVENTS", "20000"))
        self.max_hash_bytes = int(os.environ.get("PLA_R7_HASH_BYTES", str(POKEDEX_SIZE+16)))
        self.count = 0
        self.live = True
        self.bps = []
        self.errors = []
        os.makedirs(os.path.dirname(self.log_path), exist_ok=True)
        self.emit("probe_started", stages=sorted(self.stages),
                  main_base=hex(self.main_base), ghidra_image_base=hex(GHIDRA_IMAGE_BASE),
                  original_elf_sha256="260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794",
                  storage="sha256_only_no_raw_save_data")
        for stage in sorted(self.stages):
            for name, va, kind in TARGETS[stage]:
                try:
                    bp = PLAR7Breakpoint(self, name, va, kind)
                    self.bps.append(bp)
                except Exception as exc:
                    self.emit("probe_install_error", stage=stage, name=name,
                              ghidra_va=hex(va), error=str(exc))
                    self.errors.append((name, str(exc)))
        if self.errors:
            # Avoid giving false negative conclusions from a partially installed probe.
            for bp in self.bps:
                bp.enabled = False
            self.live = False
            self.emit("probe_aborted", reason="one_or_more_breakpoints_not_installed",
                      failures=self.errors)
            raise RuntimeError("R7 probe disabled after breakpoint installation errors")
        self.emit("probe_armed", names=[bp.name for bp in self.bps])

    def emit(self, event, **extras):
        if self.count >= self.max_events:
            if self.live:
                self.live = False
                for bp in self.bps:
                    bp.enabled = False
                gdb.write("[PLA R7] max events reached, all probes disabled\n")
            return
        self.count += 1
        thr = gdb.selected_thread()
        data = {
            "schema": SCHEMA, "event": event, "origin": "guest_gdb_probe",
            "case_id": self.case_id, "run_id": self.run_id,
            "seq": self.count,
            "ts_monotonic_ns": time.monotonic_ns(),
            "ts_utc": datetime.now(timezone.utc).isoformat(),
            "thread": str(thr.ptid) if thr else None
        }
        data.update(extras)
        try:
            with open(self.log_path, "a", encoding="utf-8") as handle:
                handle.write(json.dumps(data, ensure_ascii=False, separators=(",",":"))+"\n")
        except OSError as exc:
            self.live = False
            gdb.write("[PLA R7] logging error: " + str(exc) + "\n", gdb.STDERR)

    @staticmethod
    def reg(name):
        return int(gdb.parse_and_eval("$" + name)) & 0xffffffffffffffff

    @staticmethod
    def read(address, size):
        if not address or size < 0:
            raise ValueError("invalid guest pointer or read length")
        return bytes(gdb.selected_inferior().read_memory(address, size))

    def u32(self, addr):
        return int.from_bytes(self.read(addr, 4), "little")

    def u64(self, addr):
        return int.from_bytes(self.read(addr, 8), "little")

    def hash_memory(self, addr, size):
        if size > self.max_hash_bytes:
            return {"sha256":None,"hash_error":"size_exceeds_limit","size":size}
        try:
            digest = hashlib.sha256()
            for off in range(0, size, 4096):
                digest.update(self.read(addr + off, min(size-off, 4096)))
            return {"sha256":digest.hexdigest(),"size":size}
        except Exception as exc:
            return {"sha256":None,"hash_error":str(exc),"size":size}

    def pokedex(self, obj):
        if not obj: return {"object":None,"sha256":None}
        result = {"object":hex(obj), "block_offset":hex(0x6C),
                  **self.hash_memory(obj+0x6C, POKEDEX_SIZE)}
        result["aux_offset"] = hex(AUX_OFFSET)
        result["aux_sha256"] = self.hash_memory(obj+AUX_OFFSET, AUX_SIZE).get("sha256")
        return result

    def descriptor(self, manager):
        result = {"manager":hex(manager) if manager else None,
                  "key":hex(KZUKAN)}
        if not manager: return result
        try:
            begin = self.u64(manager+0x8)
            end = self.u64(manager+0x10)
            result["desc_count"] = ((end-begin)//0x30 if end >= begin else None)
            if begin == 0 or end < begin or (end-begin)%0x30 or (end-begin)//0x30 > 200000:
                result["desc_error"] = "invalid descriptor array"
                return result
            lo, hi = 0, (end-begin)//0x30
            while lo < hi:
                mid=(lo+hi)//2
                key=self.u32(begin+mid*0x30)
                if key < KZUKAN: lo=mid+1
                else: hi=mid
            if lo >= (end-begin)//0x30 or self.u32(begin+lo*0x30)!=KZUKAN:
                result["found"] = False
                return result
            addr=begin+lo*0x30
            source=self.u64(addr+0x8)
            mirror=self.u64(addr+0x10)
            length=self.u64(addr+0x20)
            result.update({"found":True,"desc":hex(addr),"source":hex(source),
                           "mirror":hex(mirror),"length":length,
                           "pending":self.read(addr+0x28,1)[0]})
            if 0 < length <= self.max_hash_bytes:
                result["source_sha256"] = self.hash_memory(source,length)["sha256"] if source else None
                result["mirror_sha256"] = self.hash_memory(mirror,length)["sha256"] if mirror else None
        except Exception as exc:
            result["desc_error"] = str(exc)
        return result

    def sample(self, kind):
        r=self.reg
        if kind in ("report_update","load","zukan_write"):
            return {"state":self.pokedex(r("x0"))}
        if kind in ("hash_write","snapshot","hashdb_start"):
            return {"block":self.descriptor(r("x0"))}
        if kind == "hash_write_post":
            return {"block":self.descriptor(r("x22"))}
        if kind == "hashdb_result":
            job=r("x19")
            try: result=self.u32(job+0x448)
            except Exception: result=None
            return {"job":hex(job),"hashdb_job_result":result,
                    "hashdb_job_writefile_ok":result==2 if result is not None else None}
        if kind == "hashdb_writefile":
            return {"manager":hex(r("x0"))}
        if kind == "commit":
            return {"commit_arg":hex(r("x0"))}
        if kind == "save_task":
            param=r("x0")
            try: return {"task":hex(param),"stage":self.u32(param+4),"task_result":self.u32(param+8)}
            except Exception as exc: return {"task":hex(param),"read_error":str(exc)}
        if kind == "save_callback":
            ctx=r("x0")
            try:
                return {"context":hex(ctx),"commit_arg":hex(ctx+0xA8),
                        "commit_result_stored":self.u32(ctx+0xB0)}
            except Exception as exc:
                return {"context":hex(ctx),"read_error":str(exc)}
        return {}

    def install_finish(self, origin, kind, data):
        try:
            PLAR7Finish(self, origin, kind, data)
        except Exception as exc:
            self.emit("return_probe_error", entry_event=origin, error=str(exc))

class PLAR7Breakpoint(gdb.Breakpoint):
    def __init__(self, observer, name, ghidra_va, kind):
        self.observer=observer
        self.event_name=name
        self.ghidra_va=ghidra_va
        self.kind=kind
        self.runtime=observer.main_base+ghidra_va-GHIDRA_IMAGE_BASE
        super().__init__("*0x%x" % self.runtime, type=gdb.BP_BREAKPOINT, internal=True)
        self.silent=True

    def stop(self):
        o=self.observer
        if not o.live: return False
        try:
            data=o.sample(self.kind)
            o.emit(self.event_name, ghidra_va=hex(self.ghidra_va),
                   guest_pc=hex(self.runtime), **data)
            if self.kind in ("report_update","load","snapshot","hashdb_writefile","commit"):
                o.install_finish(self.event_name,self.kind,data)
        except Exception as exc:
            o.emit("sampling_error", entry_event=self.event_name, error=str(exc))
        return False

class PLAR7Finish(gdb.FinishBreakpoint):
    def __init__(self, observer, origin, kind, before):
        self.observer=observer
        self.origin=origin
        self.kind=kind
        self.before=before
        super().__init__(internal=True)
        self.silent=True

    def stop(self):
        o=self.observer
        if not o.live:return False
        try:
            if self.kind in ("report_update","load"):
                obj=int(self.before.get("state",{}).get("object") or "0",0)
                after=o.pokedex(obj)
                before_hash=self.before.get("state",{}).get("sha256")
                new_hash=after.get("sha256")
                changed=(before_hash!=new_hash if before_hash and new_hash else None)
                old_aux=self.before.get("state",{}).get("aux_sha256")
                new_aux=after.get("aux_sha256")
                aux_changed=(old_aux!=new_aux if old_aux and new_aux else None)
                o.emit(self.origin.replace("_enter","_exit"),
                       state=after, previous_sha256=before_hash,
                       changed=changed, aux_changed=aux_changed,
                       result_x0=hex(o.reg("x0")))
            elif self.kind=="snapshot":
                block=self.before.get("block",{})
                manager=int(block.get("manager") or "0",0)
                o.emit("snapshot_exit",block=o.descriptor(manager),
                       before_pending=block.get("pending"),
                       before_source_sha256=block.get("source_sha256"))
            elif self.kind=="hashdb_writefile":
                o.emit("hashdb_writefile_exit",manager=self.before.get("manager"),
                       bool_result_w0=o.reg("x0")&0xffffffff)
            elif self.kind=="commit":
                arg=int(self.before.get("commit_arg") or "0",0)
                result=o.u32(arg+8)
                o.emit("commit_exit",commit_arg=hex(arg),nn_fs_commit_result=result,
                       nn_fs_commit_ok=result==0)
        except Exception as exc:
            o.emit("return_sampling_error", entry_event=self.origin,error=str(exc))
        return False

    def out_of_scope(self):
        self.observer.emit("return_out_of_scope",entry_event=self.origin)

class PLAR7Mark(gdb.Command):
    def __init__(self, observer):
        self.observer=observer
        super().__init__("pla-r7-mark",gdb.COMMAND_USER)

    def invoke(self, arguments, from_tty):
        mark=arguments.strip()
        allowed={"baseline_start","update_action","save_action","cold_restart","failure_scenario","end"}
        if mark not in allowed:
            gdb.write("usage: pla-r7-mark "+"/".join(sorted(allowed))+"\n")
            return
        self.observer.emit("operator_marker",marker=mark)
        gdb.write("[PLA R7] marker "+mark+"\n")

if "PLA_R7_MAIN_BASE" in os.environ and "PLA_R7_LOG" in os.environ:
    _pla_r7_probe=PLAR7Observer()
    _pla_r7_mark=PLAR7Mark(_pla_r7_probe)
    gdb.write("[PLA R7] armed %d probes, case=%s run=%s, JSONL=%s\n" % (
        len(_pla_r7_probe.bps),_pla_r7_probe.case_id,
        _pla_r7_probe.run_id,_pla_r7_probe.log_path))
else:
    gdb.write("[PLA R7] not armed: set PLA_R7_MAIN_BASE and PLA_R7_LOG before sourcing\n")
