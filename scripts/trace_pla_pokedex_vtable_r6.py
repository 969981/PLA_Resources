#!/usr/bin/env python3
"""PLA 1.1.1 pinned ELF constructor and virtual-method candidate raw evidence."""
import argparse
import hashlib
import json
import struct
from pathlib import Path
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN
from trace_pla_serializer_owner_pointers import load_segments, resolve, decode_bl, HASH, DELTA

TARGETS={
    "context_allocator":0x02888630,
    "context_constructor":0x011458E8,
    "slot_factory_wrapper":0x0114725C,
    "slot_object_allocator":0x0114BC50,
    "object_initializer_or_error":0x0112E220,
    "zukan_read_method":0x0112E580,
    "zukan_write_method":0x0112E6F0,
    "registered_hashdb_callback":0x010CD044,
    "register_all":0x01147C34,
    "get_pokedex_slot":0x01148F20,
    "zukan_shared_lookup":0x0113749C,
    "zukan_shared_writer":0x011379C4,
    "generic_registry_callback40":0x010CEEA0,
    "generic_registry_callback48":0x010CEC54,
    "generic_registry_callback58":0x010CEB08,
}
WINDOWS={
    "context_allocator":(0x02888630,0x02888778),
    "slot_factory_wrapper":(0x0114725C,0x011472D4),
    "slot_object_allocator":(0x0114BC50,0x0114BDA0),
    "object_initializer_or_error":(0x0112E220,0x0112E300),
    "zukan_read_method":(0x0112E580,0x0112E610),
    "zukan_write_method":(0x0112E6F0,0x0112E830),
    "get_pokedex_slot":(0x01148F20,0x01148F9C),
    "primary_vtable_callback40":(0x0112E3D0,0x0112E414),
    "primary_vtable_callback48_load":(0x0112E414,0x0112E5CC),
    "primary_vtable_callback50_write":(0x0112E5CC,0x0112E6F0),
    "primary_vtable_callback58":(0x010D741C,0x010D74BC),
}

def main():
    parser=argparse.ArgumentParser()
    parser.add_argument("--elf",type=Path,required=True)
    parser.add_argument("--out-md",type=Path,required=True)
    parser.add_argument("--out-json",type=Path,required=True)
    args=parser.parse_args()
    raw=args.elf.read_bytes()
    sha=hashlib.sha256(raw).hexdigest()
    if sha!=HASH:raise ValueError("Original ELF SHA mismatch: "+sha)
    segs=load_segments(raw)
    word=struct.unpack_from("<I",raw,resolve(segs,0x0112F518-DELTA))[0]
    if decode_bl(word,0x0112F518-DELTA)+DELTA!=0x0112F528:
        raise ValueError("Ghidra VA to raw ELF VA anchor invalid")
    by_elf={v-DELTA:k for k,v in TARGETS.items()}
    by_ghidra={v:k for k,v in TARGETS.items()}
    refs={k:{"ghidra_va":f"0x{v:08X}","direct_BL":[],"aligned_data_ptrs":[]} for k,v in TARGETS.items()}
    for seg in segs:
        start=seg["off"]
        end=start+seg["size"]
        if seg["flags"]&1:
            for i in range(start,end-3,4):
                ins=struct.unpack_from("<I",raw,i)[0]
                if ins&0xfc000000!=0x94000000:continue
                pc=seg["va"]+i-start
                callee=decode_bl(ins,pc)
                name=by_elf.get(callee)
                if name:refs[name]["direct_BL"].append(f"0x{pc+DELTA:08X}")
        else:
            for i in range((start+7)&~7,end-7,8):
                value=struct.unpack_from("<Q",raw,i)[0]
                name=by_elf.get(value) or by_ghidra.get(value)
                if name:
                    refs[name]["aligned_data_ptrs"].append({
                        "site":f"0x{seg['va']+i-start+DELTA:08X}",
                        "raw_value":f"0x{value:016X}"})
    engine=Cs(CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN)
    windows={}
    def disasm(first,last):
        pos=resolve(segs,first-DELTA)
        return [{"va":f"0x{x.address+DELTA:08X}","mnemonic":x.mnemonic,"operands":x.op_str}
                for x in engine.disasm(raw[pos:pos+last-first],first-DELTA)]
    for name,(first,last) in WINDOWS.items():
        windows[name]=disasm(first,last)
    for name in ("slot_factory_wrapper","context_constructor","slot_object_allocator",
                 "zukan_read_method","zukan_write_method"):
        for j,site in enumerate(refs[name]["direct_BL"][:5]):
            addr=int(site,16)
            seg=next((s for s in segs if s["flags"]&1 and s["va"]<=addr-DELTA<s["va"]+s["size"]),None)
            if seg:
                first=max(seg["va"]+DELTA,addr-0x60)
                last=min(seg["va"]+seg["size"]+DELTA,addr+0x60)
                windows["origin_"+name+"_"+str(j)]=disasm(first,last)
    vtables={}
    for label,base in {"primary_vtable":0x041F23C8,"secondary_vtable_A":0x041F2438,"secondary_vtable_B":0x041F2480}.items():
        try:
            start=resolve(segs,base-DELTA)
            vtables[label]={"ghidra_va":f"0x{base:08X}","words":[
                {"slot":f"+0x{i:03X}","word":f"0x{struct.unpack_from('<Q',raw,start+i)[0]:016X}",
                 "elf_va":f"0x{struct.unpack_from('<Q',raw,start+i)[0]:08X}",
                 "maybe_function_ghidra_va":f"0x{struct.unpack_from('<Q',raw,start+i)[0]+DELTA:08X}"}
                for i in range(0,0xF0,8)]}
        except ValueError as e:
            vtables[label]={"ghidra_va":f"0x{base:08X}","error":str(e)}
    result={"vtable_raw_words":vtables,"status":"STATIC_RAW_ELF_NOT_DYNAMIC_VTABLE_PROOF",
            "sha256":sha,"anchor":"0x0112F518 BL 0x0112F528",
            "targets":refs,"windows":windows,
            "limitations":[
                "BL references prove direct code calls only.",
                "Aligned static data-pointer searches do not account for dynamic relocations or indirect BLR.",
                "No dynamic virtual dispatch or class identity can be asserted from these matches alone.",
                "No WriteFile success, Commit ACK or cold restart validation is performed."]}
    args.out_json.parent.mkdir(parents=True,exist_ok=True)
    args.out_json.write_text(json.dumps(result,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    lines=["# PLA 1.1.1 R6 — pinned ELF constructor and method candidates",
           "","Status: "+result["status"],"ELF SHA-256: "+sha,"",
           "| Target | Ghidra VA | Direct BL sites | Aligned static data pointers |",
           "| --- | --- | ---: | ---: |"]
    for name,ref in refs.items():
        lines.append(f"| {name} | {ref['ghidra_va']} | {len(ref['direct_BL'])} | {len(ref['aligned_data_ptrs'])} |")
    for name,ref in refs.items():
        lines.extend(["","## "+name,"","BL: "+(", ".join(ref["direct_BL"]) or "none"),
                      "Static: "+(str(ref["aligned_data_ptrs"][:10]) if ref["aligned_data_ptrs"] else "none")])
    for name,v in vtables.items():
        lines.extend(["","## Raw static vtable region "+name,""])
        if "words" in v:
            lines.extend("- "+x["slot"]+": "+x["word"] for x in v["words"])
        else:
            lines.append(v["error"])
    for name,insns in windows.items():
        lines.extend(["","## Disassembly "+name,""])
        lines.extend("    "+x["va"]+" "+x["mnemonic"]+" "+x["operands"] for x in insns)
    lines.extend(["","## Limitations",""])
    lines.extend("- "+v for v in result["limitations"])
    args.out_md.write_text("\n".join(lines)+"\n",encoding="utf-8")
    print(json.dumps({k:{"direct":len(v["direct_BL"]),"static":len(v["aligned_data_ptrs"])}
                      for k,v in refs.items()},indent=2))
if __name__=="__main__":
    main()
