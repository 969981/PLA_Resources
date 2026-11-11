#!/usr/bin/env python3
"""PLA 1.1.1 R9 read-only cross-function C scanner for SpawnEntry seed consumers.

Offset co-occurrence does NOT prove a typed pointer or genuine seed consumer.
This script requires exactly 82,731 immutable C files with pinned ELF provenance.
"""
import argparse
import json
import re
from collections import Counter, defaultdict
from pathlib import Path

ELF_SHA = "260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794"
EXPECTED = 82731
REL = "derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/"
FIELDS = ("0x20","0x58","0x42","0x43","0x4b","0x80","0x400","0x408",
          "0x418","0x4c8","0x140","0x300","0x304","0x480","0x484",
          "0xc3","0x143","0x1c3","0x243","0x2c3","0x343","0x3c3","0x6f0")
PATTERNS = {x:re.compile(r"(?<![0-9a-fA-F])"+re.escape(x)+r"\b",re.I) for x in FIELDS}
CALL = re.compile(r"\bFUN_([0-9a-f]{8})\s*\(",re.I)
FOCUS = {"01b54e58","01b56418","01bab534","01bab8f4","01b570cc",
         "01b55130","01b56688","01b56acc","01c521e4","01094470",
         "01bb3778","01bbe470","01930680","0192d274","01931c40",
         "00db854c","009273d4","01bad050","01bacefc"}
STRIDE = re.compile(r"\*\s*0x80\b|\+\s*0x80\b",re.I)
READ = re.compile(r"=\s*\*\s*\(\s*(?:u?long|int|u?int|uint|undefined[1248]|byte|char|short|u?short)\s*\*\s*\)\s*\([^;\n]{1,160}\+\s*(0x20|0x58|0x408|0x400|0x43)\s*\)",re.I)

def traits(body,name):
    f={k for k,p in PATTERNS.items() if p.search(body)}
    calls={c.lower() for c in CALL.findall(body) if c.lower()!=name}
    eight=sum(k in f for k in ("0xc3","0x143","0x1c3","0x243","0x2c3","0x343","0x3c3"))
    shared = {"0x4c8","0x43"}.issubset(f)
    layout = {"0x20","0x58","0x42","0x43"}.issubset(f) and bool(STRIDE.search(body))
    meta = {"0x400","0x408"}.issubset(f)
    reads=sorted({x.lower() for x in READ.findall(body)})
    score=(30*shared+20*(eight>=4)+25*layout+24*meta+
           14*("FUN_01094470" in body or "FUN_01930680" in body)+
           12*{"0x300","0x304","0x480","0x484"}.issubset(f)+
           10*name.startswith("01b")+8*bool(calls & FOCUS)+
           3*("0x82a2b175229d6a5b" in body.lower())+5*len(reads))
    return {"score":score,"offsets":sorted(f),
            "same_spawner":shared,"eight_flag_count":eight,
            "entry_layout":layout,"group_count_metadata":meta,
            "potential_memory_reads":reads,
            "calls":sorted(calls),"focus_calls":sorted(calls & FOCUS)}

def snippets(body):
    labels=("0x4c8","0x408","0x400","0x418","0x43","0xc3","0x143",
            "0x243","0x20","0x58","0x140","0x6f0")
    output=[]
    for i,line in enumerate(body.splitlines(),1):
        if len(output)>=13:break
        if any(PATTERNS[v].search(line) for v in labels) or "FUN_01094470" in line:
            output.append({"body_line":i,"line":line.strip()[:300]})
    return output

def scan(root):
    files=sorted(root.glob("*/*.c"))
    if len(files)!=EXPECTED:raise ValueError("Wrong original C count: "+str(len(files)))
    out=[]
    counts=Counter()
    incoming=defaultdict(set)
    for f in files:
        raw=f.read_text(encoding="utf-8")
        if ELF_SHA not in raw[:350] or f.stem not in raw[:350]:
            raise ValueError("Original ELF provenance failure "+str(f))
        body=raw.split("*/",1)[-1]
        t=traits(body,f.stem)
        for c in t["focus_calls"]:incoming[c].add(f.stem)
        if t["same_spawner"]:counts["same_spawner_and_status"]+=1
        if t["entry_layout"]:counts["entry_layout"]+=1
        if t["group_count_metadata"]:counts["both_metadata_fields"]+=1
        if t["potential_memory_reads"]:counts["some_typed_memory_reads"]+=1
        if not (f.stem in FOCUS or (t["score"]>=45 and
                 (t["same_spawner"] or t["entry_layout"] or t["group_count_metadata"]))):
            continue
        out.append({"function":"FUN_"+f.stem,"source":REL+str(f.relative_to(root)),
                    "status":"STATIC_C_TRIAGE_NOT_TYPED_DATAFLOW",**t,
                    "excerpts":snippets(body)})
    out.sort(key=lambda z:(-z["score"],z["function"]))
    return {"status":"STATIC_C_TRIAGE_NOT_NATIVE_GAME_PARITY",
            "sha256":ELF_SHA,"c_files":len(files),"counts":dict(counts),
            "candidate_count":len(out),"candidates":out[:260],
            "omitted":max(0,len(out)-260),
            "focus_callers":{"FUN_"+k:sorted("FUN_"+n for n in incoming[k]) for k in sorted(FOCUS)},
            "edges":[
                ["FUN_01b56418","SpawnerEntry.GenerateSeed(+0x20)","CONFIRMED_PRODUCER"],
                ["SpawnerEntry.GenerateSeed(+0x20)","true typed read consumer","UNRESOLVED"],
                ["FUN_01c521e4","FUN_01094470","CONFIRMED_DIRECT_CALL"],
                ["FUN_01c521e4:param_1+0x6f0","SpawnerEntry.GenerateSeed(+0x20)","UNPROVEN_ALIAS"],
                ["FUN_01094470","native EC/PID/IV writer","UNPROVEN_CALL_DATAFLOW"]],
            "limits":["Numeric offsets may belong to unrelated structures.",
                      "Virtual calls and compiler-inlined RNG may obscure source consumers.",
                      "An original C code scan cannot replace Ghidra typed pointer propagation or guest observations.",
                      "The original ELF, Ghidra database and original C remain unchanged."]}

def make_md(j):
    bt=chr(96)
    lines=["# PLA 1.1.1 — R9 GenerateSeed consumer audit","",
           "Static audit only. No original native game parity is claimed.","",
           "- Original ELF SHA-256: "+j["sha256"],
           "- Original C bodies: "+str(j["c_files"]),
           "- Candidate count: "+str(j["candidate_count"]),"",
           "## Direct decompiler call references",""]
    for k,vals in j["focus_callers"].items():
        if vals:
            lines.append("- "+bt+k+bt+": "+", ".join(bt+x+bt for x in vals[:45]))
    lines+=["","## Source offset trait matches",""]
    for k,v in sorted(j["counts"].items()):lines.append("- "+k+": "+str(v))
    lines+=["","## Ranked candidates","",
            "| Function | Score | Same spawner | Eight flags | Entry stride | Meta pair | Potential direct reads |",
            "|---|---:|---|---:|---|---|---|"]
    for z in j["candidates"][:140]:
        lines.append("| "+z["function"]+" | "+str(z["score"])+" | "+
                     str(z["same_spawner"])+" | "+str(z["eight_flag_count"])+" | "+
                     str(z["entry_layout"])+" | "+str(z["group_count_metadata"])+" | "+
                     ", ".join(z["potential_memory_reads"])+" |")
    lines+=["","## Excerpts for prioritized functions",""]
    for z in j["candidates"][:45]:
        lines+=["### "+z["function"],"",z["source"],""]
        for v in z["excerpts"]:
            lines.append("- body line "+str(v["body_line"])+": "+bt+v["line"].replace("|","/")+bt)
        lines.append("")
    lines+=["","## Evidence boundaries",""]
    for a,b,status in j["edges"]:
        lines.append("- "+bt+a+bt+" -> "+bt+b+bt+": **"+status+"**")
    lines+=["","## Limitations",""]
    lines+=["- "+x for x in j["limits"]]
    return "\n".join(lines)+"\n"

def main():
    parser=argparse.ArgumentParser()
    parser.add_argument("--self-test",action="store_true")
    parser.add_argument("--c-root",type=Path)
    parser.add_argument("--out-json",type=Path)
    parser.add_argument("--out-md",type=Path)
    a=parser.parse_args()
    x=traits("*(long *)(p + 0x4c8); *(char *)(p + 0x43); x + 0xc3; x + 0x143;","01b56418")
    assert x["same_spawner"] and x["eight_flag_count"]==2
    assert PATTERNS["0x20"].search("ptr + 0x20")
    assert not PATTERNS["0x20"].search("ptr + 0x200")
    print("R9 synthetic pattern test PASS")
    if a.self_test:return
    if not a.c_root or not a.out_json or not a.out_md:parser.error("Specify all paths")
    result=scan(a.c_root)
    a.out_json.parent.mkdir(parents=True,exist_ok=True)
    a.out_json.write_text(json.dumps(result,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    a.out_md.write_text(make_md(result),encoding="utf-8")
    print(json.dumps({k:result[k] for k in ("status","c_files","counts","candidate_count")},indent=2))

if __name__=="__main__":
    main()
