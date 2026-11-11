#!/usr/bin/env python3
"""Pure SYNTHETIC GDB-stub test for R12 code; never represents a PLA guest."""
from __future__ import annotations
import importlib.util
import json
import os
import sys
import tempfile
import types
from pathlib import Path

SCRIPT_DIR=Path(__file__).resolve().parents[1]/"scripts"
sys.path.insert(0,str(SCRIPT_DIR))
from audit_pla_spawner_seed_read_r12 import parse,audit

class MockMemory:
    def __init__(self):
        self.blocks={}
    def put(self,addr,data):
        for i,v in enumerate(data):
            self.blocks[addr+i]=v
    def put64(self,addr,value):
        self.put(addr,value.to_bytes(8,"little"))
    def read_memory(self,addr,length):
        try:return bytes(self.blocks[addr+i] for i in range(length))
        except KeyError as e:raise RuntimeError("Missing synthetic mock memory") from e

class MockBreakpoint:
    def __init__(self,spec,type=None,wp_class=None,internal=False,temporary=False):
        self.spec=spec
        self.type=type
        self.wp_class=wp_class
        self.internal=internal
        self.temporary=temporary
        self.silent=False

class MockCommand:
    def __init__(self,*a,**kw):pass

def run():
    guest=types.ModuleType("gdb")
    guest.Breakpoint=MockBreakpoint
    guest.Command=MockCommand
    guest.BP_BREAKPOINT=0
    guest.BP_WATCHPOINT=1
    guest.WP_READ=2
    guest.COMMAND_USER=1
    guest.STDERR=2
    guest.GdbError=RuntimeError
    guest.write=lambda *args:None
    guest.execute=lambda *args,**kw:"SYNTHETIC_DISASSEMBLY_ONLY"
    guest.string_to_argv=lambda args:args.split()
    guest.selected_thread=lambda:types.SimpleNamespace(ptid=("mock","not","guest"))
    mem=MockMemory()
    guest.selected_inferior=lambda:mem
    base=0x71000000
    spawner=0x73000000
    controller=0x72000000
    entry=spawner+0x100
    seed=0xC50932B428A734FD
    regs={"x0":controller,"x12":entry,"x14":seed,
          "pc":base+0x01A565A4,"lr":base+0x01A00120,"sp":0x70000000}
    for i in range(31):regs.setdefault("x"+str(i),0x01010000+i)
    guest.parse_and_eval=lambda name:regs[name[1:]]
    sys.modules["gdb"]=guest
    with tempfile.TemporaryDirectory() as temp:
        outfile=Path(temp)/"synthetic-read.jsonl"
        os.environ["PLA_R12_MAIN_BASE"]=hex(base)
        os.environ["PLA_R12_LOG"]=str(outfile)
        os.environ["PLA_R12_RUN_ID"]="synthetic-offline-test"
        path=SCRIPT_DIR/"pla_spawner_seed_read_gdb_r12.py"
        module_spec=importlib.util.spec_from_file_location("pla_r12_mocked",path)
        module=importlib.util.module_from_spec(module_spec)
        # The guest signatures are copied from independently pinned R11 ELF bytes.
        signatures={
            0x01B5659C:"ac010a8b",0x01B565A0:"8e1100f9",0x01B565A4:"0e6442f9",
            0x01B55148:"08a040f9",0x01B55174:"1f1100f9",
            0x01B57120:"c8a240f9",0x01B5714C:"1f1100f9",
        }
        for va,raw in signatures.items():
            mem.put(base+va-0x100000,bytes.fromhex(raw))
        mem.put64(controller+0x4c8,spawner)
        mem.put64(entry+0x20,seed)
        module_spec.loader.exec_module(module)
        probe=module._pla_r12
        assert probe.bp.spec=="*0x%x"%(base+0x01B565A4-0x100000)
        assert probe.bp.temporary is True
        assert probe.bp.stop() is True
        assert probe.last["seed_matches_register"]
        probe.arm()
        assert probe.watch.wp_class==guest.WP_READ
        assert probe.watch.type==guest.BP_WATCHPOINT
        regs["pc"]=base+0x01A89224
        regs["lr"]=base+0x01A74138
        assert probe.watch.stop() is True
        logged=parse(outfile.read_text(encoding="utf-8").splitlines())
        j=audit(logged)["cases"][0]
        assert j["status"]=="MONITORED_HARDWARE_READ_RECORDED_NATIVE_CONSUMER_UNIDENTIFIED",j
        assert j["game_parity"]=="NOT_VERIFIED"
        # A manual post-breakpoint source code mutation is not part of the process.
        # Only the live guest, not this fixture, can attest a true read event.
        print("PASS: synthetic GDB signatures, post-STR seed capture, WP_READ, PC/LR logging, no native parity")
    for key in ("PLA_R12_MAIN_BASE","PLA_R12_LOG","PLA_R12_RUN_ID"):
        os.environ.pop(key,None)
    sys.modules.pop("gdb",None)

if __name__=="__main__":run()
