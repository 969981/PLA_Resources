# -*- coding: utf-8 -*-
"""PLA 1.1.1 R12: explicit, operator-armed read-only guest Seed watchpoint.

Requires running AArch64 game guest GDB remote stub with hardware read watchpoints.
Does NOT attempt to emulate an rwatch with a write watchpoint or a guessed
code breakpoint. Source while guest is stopped:
  export PLA_R12_MAIN_BASE=0xYOUR_GUEST_MAIN_BASE
  export PLA_R12_LOG=/tmp/pla111-r12.jsonl
  (gdb) target remote localhost:6543
  (gdb) source scripts/pla_spawner_seed_read_gdb_r12.py
  (gdb) continue  # stops AFTER first original GenerateSeed STR
  (gdb) pla-r12-arm [OWNER_PTR]  # installs hardware read watchpoint, while stopped
  (gdb) continue  # stops on first read (if the guest stub supports rwatch)
  (gdb) pla-r12-inspect  # inspect PC, registers, disassembly and RNG expected outputs

This tool reads guest RAM but software code breakpoints may patch JIT memory.
Use a backed-up offline save and check game/GDB-stub version/byte signature.
Never infer actual EntitySeed, EC/PID or IVs from EXPECTED reference values.
"""
import gdb
import os
import json
import time
from datetime import datetime, timezone

GHIDRA_BASE=0x100000
ELF_SHA="260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794"
SCHEMA="pla111-r12-seed-read-v1"
PRODUCER_POST=0x01B565A4
# Checked against original main.elf in R11; never install against wrong guest code.
BYTES={
    0x01B5659C:"ac010a8b",
    0x01B565A0:"8e1100f9",
    0x01B565A4:"0e6442f9",
    0x01B55148:"08a040f9",
    0x01B55174:"1f1100f9",
    0x01B57120:"c8a240f9",
    0x01B5714C:"1f1100f9",
}
MASK=(1<<64)-1

def hex64(v):
    return "0x%016X"%(v & MASK)

def rotl(v,n):
    return ((v<<n)|(v>>(64-n))) & MASK

def expected_slot_outputs(seed):
    a=seed
    b=0x82A2B175229D6A5B
    first=(a+b)&MASK
    b ^= a
    a=rotl(a,24)^b^((b<<16)&MASK)
    b=rotl(b,37)
    second=(a+b)&MASK
    return {"expected_slot_roll":hex64(first),
            "expected_entity_seed":hex64(second),
            "verification":"REFERENCE_MATH_ONLY_NOT_NATIVE_OBSERVED"}

class R12Probe:
    def __init__(self):
        if "PLA_R12_MAIN_BASE" not in os.environ or "PLA_R12_LOG" not in os.environ:
            raise RuntimeError("R12 not armed: need PLA_R12_MAIN_BASE and PLA_R12_LOG")
        self.base=int(os.environ["PLA_R12_MAIN_BASE"],0)
        if self.base<=0 or self.base % 0x1000:
            raise RuntimeError("PLA_R12_MAIN_BASE must be positive page-aligned guest main base")
        self.log=os.path.abspath(os.environ["PLA_R12_LOG"])
        self.seq=0
        self.last=None
        self.watch=None
        self.first_read=None
        self.origin="guest_gdb_probe"
        self.case_id=os.environ.get("PLA_R12_CASE_ID") or "manual-case"
        self.run_id=os.environ.get("PLA_R12_RUN_ID") or "manual-run"
        os.makedirs(os.path.dirname(self.log),exist_ok=True)
        if os.path.exists(self.log) and os.path.getsize(self.log):
            raise RuntimeError("R12 requires a fresh JSONL path; refusing to append ambiguous sessions")
        # Stop if original instruction bytes aren't exactly those of pinned PLA 1.1.1.
        for va,raw in BYTES.items():
            actual=self.read(self.address(va),4).hex()
            if actual!=raw:
                raise RuntimeError("PLA R12 main base/guest build or prior breakpoint mismatch "
                                   "at %s: expected %s, got %s"%(hex(va),raw,actual))
        self.emit("probe_armed",main_base=hex64(self.base),game_version="1.1.1",
                  elf_sha256=ELF_SHA,
                  mode="producer_code_bp_then_operator_install_hardware_read_watchpoint",
                  warning="No guest seed-read watchpoint is installed until pla-r12-arm")
        self.bp=ProducerAfterStore(self)
        gdb.write("[PLA R12] signature verified. Continue to seed-write checkpoint; then pla-r12-arm.\n")

    def address(self,va):
        return self.base+va-GHIDRA_BASE

    @staticmethod
    def reg(name):
        try:return int(gdb.parse_and_eval("$"+name))&MASK
        except Exception:return None

    @staticmethod
    def read(address,size):
        return bytes(gdb.selected_inferior().read_memory(address,size))

    def u64(self,address):
        return int.from_bytes(self.read(address,8),"little")

    def emit(self,event,**values):
        self.seq+=1
        row={"schema":SCHEMA,"origin":self.origin,"event":event,
             "seq":self.seq,"ts_utc":datetime.now(timezone.utc).isoformat(),
             "ts_monotonic_ns":time.monotonic_ns(),
             "case_id":self.case_id,"run_id":self.run_id}
        thr=gdb.selected_thread()
        row["thread_ptid"]=str(thr.ptid) if thr else None
        row.update(values)
        with open(self.log,"a",encoding="utf-8") as file:
            file.write(json.dumps(row,ensure_ascii=False,separators=(",",":"))+"\n")

    def regs(self):
        return {reg:hex64(v) if (v:=self.reg(reg)) is not None else None
                for reg in (["pc","lr","sp"]+["x"+str(i) for i in range(31)])}

    def on_producer(self):
        controller=self.reg("x0")
        entry=self.reg("x12")
        seed=self.reg("x14")
        spawner=self.u64(controller+0x4C8)
        offset=entry-spawner
        if not (0<=offset<=0x380 and offset%0x80==0):
            self.emit("producer_alias_failure",controller=hex64(controller),
                      spawner=hex64(spawner),entry=hex64(entry),offset=offset)
            gdb.write("[PLA R12] Spawner/Entry alias failed; refusing to arm.\n",gdb.STDERR)
            return True
        stored=self.u64(entry+0x20)
        evidence={"controller":hex64(controller),"spawner_ptr":hex64(spawner),
                  "entry_ptr":hex64(entry),"entry_offset":offset,
                  "entry_index":offset//0x80,"generate_seed":hex64(stored),
                  "register_x14_seed":hex64(seed),
                  "seed_matches_register":stored==seed,
                  "alpha_move_seed_at_this_pc":"NOT_YET_WRITTEN",
                  "expected":expected_slot_outputs(stored),
                  "regs":self.regs()}
        self.last=evidence
        self.emit("producer_after_store",**evidence)
        if stored!=seed:
            gdb.write("[PLA R12] Seed memory != X14; refusing to arm.\n",gdb.STDERR)
        else:
            gdb.write("[PLA R12] Entry %s seed %s. Run pla-r12-arm [OWNER_PTR], then continue.\n"%
                      (hex64(entry),hex64(stored)))
        return True

    def arm(self,owner=None):
        if self.last is None:
            raise RuntimeError("Need genuine producer_after_store breakpoint first")
        if not self.last["seed_matches_register"]:
            raise RuntimeError("Seed register/memory mismatch")
        if self.watch is not None:
            raise RuntimeError("A read watchpoint already exists; inspect it before re-arming")
        entry=int(self.last["entry_ptr"],0)
        seed=int(self.last["generate_seed"],0)
        # At the producer post-STR checkpoint, IsEmpty may still be 1;
        # it is cleared later at 0x01B565CC. Do not require that flag now.
        owner_field=None
        if owner is not None:
            actual=self.u64(owner+0x140)
            owner_field={"owner_ptr":hex64(owner),
                         "owner_plus_140":hex64(actual),
                         "alias_equals_entry_at_arm":actual==entry,
                         "note":"May not yet be bound at this producer checkpoint"}
        spec="*((unsigned long long *)0x%x)"%(entry+0x20)
        try:
            self.watch=SeedReadWatch(self,spec,entry,seed,owner_field)
        except Exception as exc:
            self.emit("watch_install_failed",entry_ptr=hex64(entry),
                      address=hex64(entry+0x20),error=str(exc))
            raise RuntimeError("R12 hardware READ watchpoint unsupported or install failed; "
                               "NO read was observed: "+str(exc))
        self.emit("watch_install_requested",entry_ptr=hex64(entry),
                  address=hex64(entry+0x20),seed=hex64(seed),
                  owner=owner_field,
                  type="gdb.BP_WATCHPOINT/wp_class=gdb.WP_READ",
                  status="INSTALLED_IN_GDB_NOT_YET_PROVEN_SUPPORTED_BY_REMOTE_TARGET")
        gdb.write("[PLA R12] GDB READ watchpoint configured for %s. Continue; "
                  "remote target may still reject the hardware request.\n"%hex64(entry+0x20))

    def on_read(self,watch):
        entry=watch.entry
        current=self.u64(entry+0x20)
        same=current==watch.seed
        info={"entry_ptr":hex64(entry),
              "address":hex64(entry+0x20),
              "seed_at_arm":hex64(watch.seed),
              "seed_at_hit":hex64(current),
              "seed_unchanged":same,
              "regs":self.regs(),
              "pc_reporting_caveat":"Watchpoint stop PC may point to instruction after actual load",
              "instruction_context":self.disassembly(),
              "expected":expected_slot_outputs(watch.seed),
              "owner_alias_at_arm":watch.owner_field}
        self.first_read=info
        self.emit("hardware_read_watchpoint_hit",**info)
        gdb.write("[PLA R12] READ hardware watchpoint HIT, PC=%s, LR=%s. "
                  "Inspect native instruction and register dependencies before claiming SlotRNG parity.\n"%
                  (info["regs"].get("pc"),info["regs"].get("lr")))
        return True

    @staticmethod
    def disassembly():
        try:return gdb.execute("x/14i $pc-0x1c",to_string=True)[:4500]
        except Exception as exc:return "DISASSEMBLY_ERROR: "+str(exc)

class ProducerAfterStore(gdb.Breakpoint):
    def __init__(self,probe):
        self.probe=probe
        super().__init__("*0x%x"%probe.address(PRODUCER_POST),
                         type=gdb.BP_BREAKPOINT,internal=True,temporary=True)
        self.silent=True
    def stop(self):
        try:return self.probe.on_producer()
        except Exception as exc:
            try:self.probe.emit("producer_sample_error",error=str(exc))
            except Exception:pass
            gdb.write("[PLA R12] producer sampling failed: "+str(exc)+"\n",gdb.STDERR)
            return True

class SeedReadWatch(gdb.Breakpoint):
    def __init__(self,probe,spec,entry,seed,owner_field):
        self.probe=probe
        self.entry=entry
        self.seed=seed
        self.owner_field=owner_field
        # Unlike BP_ACCESS_WATCHPOINT, WP_READ excludes seed writes by design.
        super().__init__(spec,type=gdb.BP_WATCHPOINT,wp_class=gdb.WP_READ,
                         internal=True,temporary=True)
        self.silent=True
    def stop(self):
        try:return self.probe.on_read(self)
        except Exception as exc:
            try:self.probe.emit("read_sample_error",error=str(exc))
            except Exception:pass
            gdb.write("[PLA R12] watchpoint hit but sampling failed: "+str(exc)+"\n",gdb.STDERR)
            return True

class R12ArmCommand(gdb.Command):
    def __init__(self,p):
        self.p=p
        super().__init__("pla-r12-arm",gdb.COMMAND_USER)
    def invoke(self,args,from_tty):
        v=gdb.string_to_argv(args)
        if len(v)>1:raise gdb.GdbError("usage: pla-r12-arm [OWNER_PTR]")
        owner=int(v[0],0) if v else None
        self.p.arm(owner)

class R12InspectCommand(gdb.Command):
    def __init__(self,p):
        self.p=p
        super().__init__("pla-r12-inspect",gdb.COMMAND_USER)
    def invoke(self,args,from_tty):
        if args.strip():raise gdb.GdbError("pla-r12-inspect takes no arguments")
        gdb.write("[PLA R12] first read: "+json.dumps(self.p.first_read,ensure_ascii=False,indent=2)+"\n")
        if self.p.first_read is None:
            gdb.write("No hardware READ watchpoint event. Cannot claim actual Seed consumer.\n")
        else:
            gdb.write("Reference SlotRNG outputs are predictions, not observed guest EntitySeed.\n")

if "PLA_R12_MAIN_BASE" in os.environ and "PLA_R12_LOG" in os.environ:
    _pla_r12=R12Probe()
    _pla_r12_arm=R12ArmCommand(_pla_r12)
    _pla_r12_inspect=R12InspectCommand(_pla_r12)
else:
    gdb.write("[PLA R12] not armed: configure PLA_R12_MAIN_BASE and PLA_R12_LOG before sourcing.\n")
