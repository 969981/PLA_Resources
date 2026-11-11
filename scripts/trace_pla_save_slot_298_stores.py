#!/usr/bin/env python3
"""Read-only PLA 1.1.1 exact STR immediate offsets. A numeric offset is not object identity."""
import argparse
import bisect
import hashlib
import json
import re
import struct
from collections import Counter
from pathlib import Path

from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN

ELF_SHA = "260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794"
DELTA = 0x100000
OFFSETS = {0x268, 0x288, 0x290, 0x298, 0x2a0, 0x2c8}
STR_KINDS = {0xf9000000: ("STR_X", 8), 0xb9000000: ("STR_W",4),
             0x79000000: ("STR_H",2), 0x39000000: ("STR_B",1)}

def decode(word):
    kind = STR_KINDS.get(word & 0xffc00000)
    if not kind:
        return None
    width = kind[1]
    off = ((word >> 10) & 0xfff) * width
    if off not in OFFSETS:
        return None
    return {"offset":off, "op":kind[0], "base_reg":(word>>5)&31, "data_reg":word&31}

def load_segments(data):
    if data[:6]!=b"\x7fELF\x02\x01" or struct.unpack_from("<H",data,18)[0]!=183:
        raise ValueError("not ELF64 AArch64 little endian")
    phoff=struct.unpack_from("<Q",data,32)[0]
    entsize,count=struct.unpack_from("<HH",data,54)
    if entsize<56 or not 0<count<200:
        raise ValueError("invalid ELF headers")
    result=[]
    for i in range(count):
        kind,flags,fo,va,_,fsz,_,_=struct.unpack_from("<IIQQQQQQ",data,phoff+i*entsize)
        if kind==1 and fsz and (flags & 1):
            if fo+fsz>len(data):
                raise ValueError("truncated executable segment")
            result.append((va,fo,fsz))
    return result

def inspect(elf,croot):
    data=elf.read_bytes()
    if hashlib.sha256(data).hexdigest()!=ELF_SHA:
        raise ValueError("original ELF hash mismatch")
    segs=load_segments(data)
    paths=sorted(croot.glob("*/*.c"))
    if len(paths)!=82731:
        raise ValueError("expected 82731 published C files; got "+str(len(paths)))
    refs=sorted((int(p.stem,16),p) for p in paths if re.fullmatch(r"[0-9a-f]{8}",p.stem))
    entries=[x[0] for x in refs]
    eng=Cs(CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN)
    cache={}
    counts=Counter()
    hits=[]
    anchor=False
    for va,fo,n in segs:
        for loc in range(fo,fo+n-3,4):
            w=struct.unpack_from("<I",data,loc)[0]
            v=va+loc-fo+DELTA
            if v==0x0112f518:
                imm=w & 0x3ffffff
                if imm & (1<<25):
                    imm-=1<<26
                anchor=(w&0xfc000000)==0x94000000 and (v+4*imm)==0x0112f528
            d=decode(w)
            if d is None:
                continue
            counts[d["offset"]]+=1
            if d["offset"]!=0x298:
                continue
            idx=bisect.bisect_right(entries,v)-1
            f_id,path=refs[idx] if idx>=0 else (None,None)
            if f_id is not None and f_id not in cache:
                src=path.read_text(encoding="utf-8")
                if ELF_SHA not in src[:250]:
                    raise ValueError("bad C provenance: "+str(path))
                cache[f_id]=src
            src=cache.get(f_id,"")
            before=max(fo,loc-24)
            after=min(fo+n,loc+28)
            context=[f"0x{item.address+DELTA:08X} {item.mnemonic} {item.op_str}"
                     for item in eng.disasm(data[before:after],va+before-fo)]
            hits.append({"site":f"0x{v:08X}", "word":f"0x{w:08X}",
                         "op":d["op"],"base_reg":d["base_reg"],"data_reg":d["data_reg"],
                         "nearest_c":str(path.relative_to(croot)) if path else None,
                         "nearest_c_entry":f"0x{f_id:08X}" if f_id else None,
                         "c_uses_save_global":"PTR_DAT_04379560" in src,
                         "c_calls_accessor":"FUN_01148f20" in src,
                         "c_uses_register":"FUN_010cd044" in src,
                         "c_has_298_literal":"0x298" in src,
                         "c_related_slots":sum(x in src for x in ["0x268","0x288","0x2c8","0x2f8","0x328"]),
                         "assembly":context})
    if not anchor:
        raise ValueError("cannot confirm Ghidra-ELF address anchor")
    hits.sort(key=lambda x:(-int(x["c_uses_save_global"]),
                             -int(x["c_calls_accessor"]),
                             -int(x["c_uses_register"]),
                             -x["c_related_slots"],x["site"]))
    return {"status":"RAW_STR_OFFSET_CANDIDATES_NOT_PROVEN_POKEDEX_OWNERS",
            "source_sha256":ELF_SHA,"ghidra_base":f"0x{DELTA:X}",
            "c_coverage":len(paths),
            "store_counts":{hex(k):v for k,v in sorted(counts.items())},
            "stores_298_total":len(hits),"stores_298":hits[:300],
            "omitted":max(0,len(hits)-300),
            "limitations":[
                "STR encoded byte offset 0x298 does not prove base register points to SaveSystem context.",
                "Nearest preceding C filename does not prove exact function boundary; Ghidra decompilation may merge or miss functions.",
                "STP, STUR, base-adjusted STR, memcpy, indirect writes, and runtime code not covered.",
                "No identity asserted with hashdb descriptor source nor any persisted Pokedex bytes."
            ]}

def markdown(res):
    lines=["# PLA 1.1.1 raw STR +0x298 owner candidates",
           "","All entries are raw code occurrences, not verified Pokedex owner setters.",
           "","- Status: "+res["status"],
           "- Verified C files: "+str(res["c_coverage"]),
           "- +0x298 STR sites: "+str(res["stores_298_total"]),
           "","## Immediate offset site counts"]
    for k,v in res["store_counts"].items():
        lines.append("- "+k+": "+str(v))
    lines+=["","## Ranked native STR +0x298 sites","",
            "| Native instruction | Base register | Nearest C | Same C mentions Save global |",
            "| --- | --- | --- | --- |"]
    for x in res["stores_298"][:110]:
        lines.append(f"| {x['site']} | X{x['base_reg']} | {x['nearest_c']} | {x['c_uses_save_global']} |")
    lines+=["","## Instruction windows for highest-ranked candidates",""]
    for x in res["stores_298"][:25]:
        lines.append("### "+x["site"]+" / "+str(x["nearest_c"]))
        lines.extend("    "+a for a in x["assembly"])
        lines.append("")
    lines+=["## Proof boundaries",""]
    lines.extend("- "+x for x in res["limitations"])
    return "\n".join(lines)+"\n"

def self_test():
    for base,(name,sz) in STR_KINDS.items():
        w=base|((0x298//sz)<<10)|(4<<5)|1
        d=decode(w)
        assert d and d["offset"]==0x298 and d["op"]==name and d["base_reg"]==4
    assert decode(0xf9400000|((0x298//8)<<10)) is None
    print("STR_IMMEDIATE_SYNTHETIC_TEST_PASS")

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--self-test",action="store_true")
    p.add_argument("--elf",type=Path)
    p.add_argument("--c-root",type=Path)
    p.add_argument("--out-json",type=Path)
    p.add_argument("--out-md",type=Path)
    a=p.parse_args()
    self_test()
    if a.self_test:return
    if not all([a.elf,a.c_root,a.out_json,a.out_md]):
        p.error("missing required paths")
    r=inspect(a.elf,a.c_root)
    a.out_json.parent.mkdir(parents=True,exist_ok=True)
    a.out_md.parent.mkdir(parents=True,exist_ok=True)
    a.out_json.write_text(json.dumps(r,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    a.out_md.write_text(markdown(r),encoding="utf-8")
    print(json.dumps({k:r[k] for k in ["status","source_sha256","c_coverage","store_counts","stores_298_total"]},indent=2))

if __name__=="__main__":
    main()
