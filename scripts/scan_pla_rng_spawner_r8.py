#!/usr/bin/env python3
"""Read-only PLA 1.1.1 candidate scanner. This does not prove native spawn semantics."""
from __future__ import annotations
import argparse
import json
import re
from collections import Counter
from pathlib import Path

PINNED_SHA="260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794"
EXPECTED=82731
SEED="0x82a2b175229d6a5b"
NEGATIVE="-0x7d5d4e8add6295a5"
RELATED=("FUN_00db84c4","FUN_00db8508","FUN_00db8524",
         "FUN_029546dc","FUN_02954720","FUN_010f130c")
SHIFTS={
    "shl16":re.compile(r"<<\s*(?:0x10\b|16\b)"),
    "shl24":re.compile(r"<<\s*(?:0x18\b|24\b)"),
    "shl37":re.compile(r"<<\s*(?:0x25\b|37\b)"),
    "shr27":re.compile(r">>\s*(?:0x1b\b|27\b)"),
    "shr40":re.compile(r">>\s*(?:0x28\b|40\b)"),
    "shl27":re.compile(r"<<\s*(?:0x1b\b|27\b)"),
    "shr24":re.compile(r">>\s*(?:0x18\b|24\b)"),
    "shr37":re.compile(r">>\s*(?:0x25\b|37\b)"),
}
TEXT=re.compile(r"\b(?:spawn\w*|encounter\w*|shiny\w*|outbreak\w*|spawner\w*)",re.I)

def inventory(root):
    files=sorted(root.glob("*/*.c"))
    if len(files)!=EXPECTED:
        raise ValueError("Original per-function C coverage invalid: "+str(len(files)))
    results=[]
    stats=Counter()
    for file in files:
        source=file.read_text(encoding="utf-8")
        if PINNED_SHA not in source[:350]:
            raise ValueError("C provenance mismatch "+str(file))
        body=source.split("*/",1)[-1]
        lower=body.lower()
        c=SEED in lower or NEGATIVE in lower
        entropy="GenerateCryptographicallyRandomBytes" in body
        shifts=[name for name,pattern in SHIFTS.items() if pattern.search(body)]
        rotate=("shl16" in shifts and "shl24" in shifts and
                ("shl37" in shifts or "shr27" in shifts))
        reverse=("shl16" in shifts and "shr40" in shifts and
                 ("shr37" in shifts or "shl27" in shifts))
        keyword=bool(TEXT.search(body))
        related=[x for x in RELATED if x in body and file.stem not in x]
        if c:stats["seed_const"]+=1
        if entropy:stats["crypto_entropy"]+=1
        if rotate:stats["forward_rotation_like"]+=1
        if reverse:stats["reverse_rotation_like"]+=1
        if keyword:stats["spawn_keyword"]+=1
        if related:stats["calls_seed_constructor"]+=1
        if not (c or rotate or reverse or (entropy and keyword) or (related and keyword)):
            continue
        score=int(c)*12+int(entropy)*2+int(keyword)*3+int(rotate)*15+int(reverse)*12+len(related)*4
        snippets=[]
        for line_num,line in enumerate(body.splitlines(),1):
            if SEED in line.lower() or NEGATIVE in line.lower() or "GenerateCryptographicallyRandomBytes" in line or TEXT.search(line) or any(p.search(line) for p in SHIFTS.values()):
                snippets.append({"line_in_body":line_num,"excerpt":line.strip()[:240]})
        results.append({
            "function":"FUN_"+file.stem,"c_path":str(file.relative_to(root)),
            "score":score,"seed_const":c,"crypto_entropy":entropy,
            "forward_rotation_like":rotate,"reverse_rotation_like":reverse,
            "spawn_string":keyword,"related_calls":related,"shift_tokens":shifts,
            "evidence":snippets[:7],"extra_excerpt_count":max(0,len(snippets)-7),
            "status":"CANDIDATE_ONLY"})
    results.sort(key=lambda x:(-x["score"],x["function"]))
    return {"status":"STATIC_CODE_CANDIDATES_NOT_PROVEN_SPAWNS",
            "pinned_original_elf_sha256":PINNED_SHA,
            "c_files_checked":len(files),"counts":dict(stats),
            "candidate_count":len(results),
            "candidates":results[:350],
            "omitted":max(0,len(results)-350),
            "limitations":[
                "xoroshiro constant is shared by many native modules",
                "C rotation patterns may be optimizer artifacts",
                "Ghidra decompiler has known missing noret functions",
                "No claim is made that any candidate is the native Pokemon generator",
                "No game guest, fixed seed or monster instance was observed"]}

def markdown(j):
    lines=["# PLA 1.1.1 — R8 RNG and wild-spawner C candidate scan","",
           "Full original C scan, not a recovered native spawner algorithm.","",
           "Source ELF SHA-256: "+j["pinned_original_elf_sha256"],
           "C coverage: "+str(j["c_files_checked"]),
           "Status: "+j["status"],"",
           "## Counts",""]
    for k,v in sorted(j["counts"].items()):
        lines.append("- "+k+": "+str(v))
    lines.extend(["","## Ranked candidates","",
                  "| Function | Score | seed literal | crypto source | rotation candidate | spawn text |",
                  "| --- | ---: | --- | --- | --- | --- |"])
    for x in j["candidates"][:100]:
        lines.append("| "+x["function"]+" | "+str(x["score"])+" | "+str(x["seed_const"])+
                     " | "+str(x["crypto_entropy"])+" | "+str(x["forward_rotation_like"] or x["reverse_rotation_like"])+
                     " | "+str(x["spawn_string"])+" |")
    lines.extend(["","## Native C evidence excerpts",""])
    for x in j["candidates"][:45]:
        lines.extend(["### "+x["function"],"",x["c_path"],""])
        for y in x["evidence"]:
            lines.append("- line "+str(y["line_in_body"])+": "+y["excerpt"].replace("|","/"))
        lines.append("")
    lines.extend(["","## Limits",""])
    lines.extend("- "+s for s in j["limitations"])
    return "\n".join(lines)+"\n"

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--c-root",type=Path)
    p.add_argument("--out-json",type=Path)
    p.add_argument("--out-md",type=Path)
    p.add_argument("--self-test",action="store_true")
    a=p.parse_args()
    assert SHIFTS["shl24"].search("state << 0x18")
    assert SHIFTS["shl37"].search("tmp << 37")
    assert TEXT.search("SpawnActor")
    print("STATIC_R8_SCANNER_SYNTHETIC_TEST_OK")
    if a.self_test:return
    if not a.c_root or not a.out_json or not a.out_md:p.error("missing paths")
    j=inventory(a.c_root)
    a.out_json.parent.mkdir(parents=True,exist_ok=True)
    a.out_json.write_text(json.dumps(j,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    a.out_md.write_text(markdown(j),encoding="utf-8")
    print(json.dumps({k:j[k] for k in ("status","c_files_checked","counts","candidate_count")},indent=2))

if __name__=="__main__":
    main()
