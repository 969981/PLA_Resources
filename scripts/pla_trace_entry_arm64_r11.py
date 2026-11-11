#!/usr/bin/env python3
"""PLA 1.1.1 R11: SHA-pinned original ELF ARM64 function entry slices.

The original ELF and all Ghidra artifacts are immutable.
Ghidra image base is 0x00100000: Ghidra VA = ELF virtual address + base.
This program extracts bounded instruction windows, NOT full function CFGs.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import re
from pathlib import Path

ELF_SHA = "260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794"
BASE = 0x00100000
TARGETS = {
    "FUN_01B54E58":(0x01B54E58,0x180),
    "FUN_01B56418":(0x01B56418,0x260),
    "FUN_01B55130":(0x01B55130,0x180),
    "FUN_01B570CC":(0x01B570CC,0x260),
    "FUN_01B54FA0":(0x01B54FA0,0x170),
    "FUN_01BAB534":(0x01BAB534,0x280),
    "FUN_01BAB8F4":(0x01BAB8F4,0x280),
    "FUN_01BBE470":(0x01BBE470,0x330),
    "FUN_01BB3778":(0x01BB3778,0x330),
    "FUN_01C521E4":(0x01C521E4,0x300),
    "FUN_01094470":(0x01094470,0x260),
}
SIGNIFICANT = re.compile(r"#0x140\b|#0x20\b|#0x58\b|#0x43\b|#0x42\b|#0x4c8\b|#0x400\b|#0x408\b|#0x418\b|#0x4b0\b|#0x4b8\b|#0x350\b|#0x358\b|#0x1f8\b|#0x6f0\b",re.I)
CALL = re.compile(r"\bbl[r]?\b",re.I)

def sha256(path:Path)->str:
    h=hashlib.sha256()
    with path.open("rb") as f:
        for chunk in iter(lambda:f.read(4*1024*1024),b""):h.update(chunk)
    return h.hexdigest()

def inspect_elf(src):
    from elftools.elf.elffile import ELFFile
    e=ELFFile(src)
    if not e.little_endian or e.elfclass!=64 or str(e["e_machine"]) not in ("EM_AARCH64","183"):
        raise RuntimeError("ELF must be little-endian AArch64 64-bit: "+str(e["e_machine"]))
    segments=[]
    for seg in e.iter_segments():
        if str(seg["p_type"])!="PT_LOAD":continue
        segments.append({"virtual_start":int(seg["p_vaddr"]),
                         "virtual_end":int(seg["p_vaddr"])+int(seg["p_filesz"]),
                         "file_offset":int(seg["p_offset"]),
                         "filesz":int(seg["p_filesz"]),
                         "flags":str(seg["p_flags"])})
    return segments

def map_address(segments, ghidra_va):
    virtual=ghidra_va-BASE
    for x in segments:
        if x["virtual_start"]<=virtual<x["virtual_end"]:
            return x["file_offset"]+(virtual-x["virtual_start"]),virtual
    raise RuntimeError("Ghidra VA 0x%X cannot map ELF virtual address 0x%X"%(ghidra_va,virtual))

def disassemble(elf:Path):
    from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
    mode=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    mode.detail=False
    with elf.open("rb") as f:
        seg=inspect_elf(f)
        out={}
        for name,(va,size) in TARGETS.items():
            offset,rva=map_address(seg,va)
            f.seek(offset)
            data=f.read(size)
            if len(data)!=size:raise RuntimeError("Short ELF read "+name)
            inst=[]
            for insn in mode.disasm(data,va):
                row={"ghidra_va":"0x%08X"%insn.address,
                     "elf_rva":"0x%08X"%(insn.address-BASE),
                     "bytes":insn.bytes.hex(),"mnemonic":insn.mnemonic,"operands":insn.op_str}
                row["significant_offset"]=bool(SIGNIFICANT.search(insn.op_str))
                row["call"]=bool(CALL.fullmatch(insn.mnemonic))
                inst.append(row)
            if len(inst)<min(8,size//4):
                raise RuntimeError("Insufficient valid ARM64 instructions in "+name)
            # No flow tracing from mere offset; preserve context around each anchor.
            anchors=[i for i,x in enumerate(inst) if x["significant_offset"]]
            selected=set()
            for i in anchors:
                selected.update(range(max(0,i-5),min(len(inst),i+10)))
            for i,x in enumerate(inst):
                if x["call"]:selected.update(range(max(0,i-2),min(len(inst),i+3)))
            out[name]={
                "va":"0x%08X"%va,"elf_rva":"0x%08X"%rva,
                "source_file_offset":"0x%08X"%offset,"window_bytes":size,
                "decoded_count":len(inst),"observed_anchors":len(anchors),
                "selected_instructions":[inst[k] for k in sorted(selected)],
                "entry_first_instructions":inst[:14],
                "limits":"A bounded static window may include an adjacent function or exclude late code; not a full CFG"
            }
    return {"status":"ARM64_BYTE_EXACT_STATIC_WINDOW_ONLY",
            "elf_sha256":ELF_SHA,"ghidra_image_base":"0x%08X"%BASE,
            "segments":seg,"functions":out,
            "limitations":[
              "No claim that a register is alive across a call without def-use/control-flow proof.",
              "No claim that this spans entire native functions or covers indirect callback dispatch.",
              "No game runtime, no extracted PA8, no native PKHeX parity.",
              "Original ELF is opened read-only; no existing Ghidra DB/ELF modifications.",
            ]}

def render_md(j):
    t=chr(96)
    lines=["# PLA 1.1.1 R11 — ARM64 Original ELF register/memory instruction slices","",
           "SHA pinned original game binary. Bounded windows only, not completed CFG.","",
           "- ELF SHA-256: "+t+j["elf_sha256"]+t,
           "- Ghidra image base: "+t+j["ghidra_image_base"]+t,"",
           "## Virtual mapping",""]
    for x in j["segments"]:
        lines.append("- VA 0x%X..0x%X -> ELF offset 0x%X, flags=%s"%
                     (x["virtual_start"],x["virtual_end"],x["file_offset"],x["flags"]))
    for name,r in j["functions"].items():
        lines+=["","## "+name,"",
                "Ghidra "+r["va"]+"; ELF RVA "+r["elf_rva"]+
                "; ELF byte offset "+r["source_file_offset"]+
                "; fixed window "+hex(r["window_bytes"])+
                "; decoded "+str(r["decoded_count"])+
                "; significant offsets "+str(r["observed_anchors"]),"",
                "| Ghidra VA | Original bytes | AArch64 mnemonic | Operands |","|---|---|---|---|"]
        for x in r["selected_instructions"][:190]:
            lines.append("| "+t+x["ghidra_va"]+t+" | "+t+x["bytes"]+t+" | "+
                         t+x["mnemonic"]+t+" | "+t+x["operands"].replace("|","/")+t+" |")
    lines+=["","## Interpretation boundaries",""]
    lines.extend("- "+x for x in j["limitations"])
    lines+=["","These are original raw ARM64 bytes of the pinned ELF, not inferred C pseudocode. An isolated 0x140 and 0x20 occurrence never establishes pointer identity. Qualified runtime comparison remains pending.",""]
    return "\n".join(lines)

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--elf",type=Path,required=True)
    p.add_argument("--out-json",type=Path,required=True)
    p.add_argument("--out-md",type=Path,required=True)
    a=p.parse_args()
    actual=sha256(a.elf)
    if actual!=ELF_SHA:raise RuntimeError("Original ELF hash mismatch, refusing: "+actual)
    j=disassemble(a.elf)
    a.out_json.parent.mkdir(parents=True,exist_ok=True)
    a.out_json.write_text(json.dumps(j,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    a.out_md.write_text(render_md(j),encoding="utf-8")
    print(json.dumps({k:{"anchors":v["observed_anchors"],"window":v["window_bytes"],
                         "offset":v["source_file_offset"]} for k,v in j["functions"].items()},indent=2))
if __name__=="__main__":main()
