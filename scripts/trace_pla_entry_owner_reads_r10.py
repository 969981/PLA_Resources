#!/usr/bin/env python3
"""PLA 1.1.1 R10: immutable C source evidence for owner+0x140 to entry+0x20."""
from __future__ import annotations
import argparse, json, re
from pathlib import Path
from collections import Counter

SHA = "260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794"
TOTAL = 82731
ROOT = "derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/"
LOAD = re.compile(r"\b(?P<dst>[a-zA-Z]\w*)\s*=\s*(?:\([a-zA-Z_]\w*(?:\s*\*)?\)\s*)?\*\s*\(\s*(?:u?long|undefined8|void|char|byte)\s*\*{1,2}\s*\)\s*\(\s*(?P<base>[a-zA-Z]\w*)\s*\+\s*0x140\s*\)\s*;",re.I)
STORE = re.compile(r"\*\s*\(\s*(?:u?long|undefined8|void|char|byte)\s*\*{1,2}\s*\)\s*\(\s*(?P<base>[a-zA-Z]\w*)\s*\+\s*0x140\s*\)\s*=\s*(?P<rhs>[^;\n]{1,220});",re.I)
NEST = re.compile(r"\*\s*\(\s*(?:u?long|undefined8|uint|int)\s*\*\s*\)\s*\(\s*\*\s*\(\s*(?:u?long|undefined8)\s*\*\s*\)\s*\(\s*[A-Za-z]\w*\s*\+\s*0x140\s*\)\s*\+\s*0x20\s*\)",re.I)
CALL = re.compile(r"\bFUN_([0-9a-f]{8})\s*\(",re.I)
CONST = re.compile(r"(?<![0-9a-fA-F])0x140\b",re.I)
F = {"01b56418","01b55130","01b570cc","01b54fa0","01bab8f4","01c521e4","01bb3778","01bbe470","01094470"}
ADDS = re.compile(r"\b(?P<var>[a-zA-Z]\w*)\s*\+\s*(?P<off>0x20|0x58|0x42|0x43)\b",re.I)
ARRAY = re.compile(r"\b(?P<var>[a-zA-Z]\w*)\s*\[\s*(?P<off>4|11)\s*\]")
def analyze(body,name):
    rows=body.splitlines()
    loads=[];stores=[];nests=[]
    for i,line in enumerate(rows):
        for x in LOAD.finditer(line):
            var=x.group("dst")
            suffix="\n".join(rows[i+1:min(i+141,len(rows))])
            uses=sorted({"add_"+z.group("off") for z in ADDS.finditer(suffix) if z.group("var")==var}|
                        {"subscript_"+z.group("off") for z in ARRAY.finditer(suffix) if z.group("var")==var})
            calls=[{"line":k+1,"code":rows[k].strip()[:250]} for k in range(i+1,min(i+141,len(rows))) if re.search(r"\b"+re.escape(var)+r"\b",rows[k]) and CALL.search(rows[k])]
            use_sites=[]
            for k in range(i+1,min(i+141,len(rows))):
                v=rows[k]
                pattern=r"\b"+re.escape(var)+r"\s*(?:\[\s*4\s*\]|\+\s*0x20\b)"
                if not re.search(pattern,v):continue
                # Control object may reset the entry field, which is not a seed consumer.
                writing=bool(re.search(r"\b"+re.escape(var)+r"\s*\[\s*4\s*\]\s*=",v))
                writing=writing or bool(re.search(r"\*\s*\(\s*(?:u?long|undefined8)\s*\*\s*\)\s*\(\s*"+re.escape(var)+r"\s*\+\s*0x20\s*\)\s*=",v))
                reading=(not writing) and (bool(re.search(r"=\s*"+re.escape(var)+r"\s*\[\s*4\s*\]",v)) or
                         bool(re.search(r"=\s*\*\s*\(\s*(?:u?long|undefined8)\s*\*\s*\)\s*\(\s*"+re.escape(var)+r"\s*\+\s*0x20\s*\)",v)))
                use_sites.append({"line":k+1,"mode":"WRITE_OR_CLEAR" if writing else "READ_CANDIDATE" if reading else "ADDRESS_OR_UNKNOWN","source":v.strip()[:300]})
            loads.append({"line":i+1,"var":var,"base":x.group("base"),"source":line.strip()[:300],
                          "uses":uses,"use_sites":use_sites[:25],"near_calls":calls[:5]})
        for x in STORE.finditer(line):
            stores.append({"line":i+1,"base":x.group("base"),"rhs":x.group("rhs"),"source":line.strip()[:300]})
        if NEST.search(line):
            nests.append({"line":i+1,"source":line.strip()[:300]})
    candidates=[x for x in loads if "add_0x20" in x["uses"] or "subscript_4" in x["uses"]]
    probable_reads=[x for x in candidates if any(y["mode"]=="READ_CANDIDATE" for y in x["use_sites"])]
    return {"function":"FUN_"+name,"path":ROOT+name[:2]+"/"+name+".c",
            "loads":loads[:25],"stores":stores[:25],"nested":nests[:25],"candidates":candidates[:25],"probable_reads":probable_reads[:25],
            "call_ids":sorted(set(CALL.findall(body))),"counts":{"loads":len(loads),"stores":len(stores),"nested":len(nests),"candidates":len(candidates),"probable_reads":len(probable_reads)},
            "status":"NESTED_140_20_EXPRESSION" if nests else "C_SAME_VARIABLE_ALIAS_CANDIDATE" if candidates else "140_FIELD_LOAD_OR_STORE_ONLY"}
def audit(root):
    paths=sorted(root.glob("*/*.c"))
    assert len(paths)==TOTAL,(len(paths),TOTAL)
    stats=Counter();out=[]
    for p in paths:
        s=p.read_text(encoding="utf-8")
        if SHA not in s[:350] or p.stem not in s[:350]:
            raise RuntimeError("Original source changed: "+str(p))
        if not CONST.search(s):continue
        stats["literal_140"]+=1
        row=analyze(s.split("*/",1)[-1],p.stem)
        for k,v in row["counts"].items():
            if v:stats[k+"_functions"]+=1
        if sum(row["counts"].values())==0 and p.stem not in F:continue
        out.append(row)
    out.sort(key=lambda x:(-bool(x["nested"]),-bool(x["candidates"]),
                           -x["counts"]["loads"],0 if x["function"].startswith("FUN_01b") else 1,x["function"]))
    return {"status":"STATIC_C_LEXICAL_ONLY_NOT_NATIVE_PARITY",
            "original_sha256":SHA,"source_count":len(paths),"stats":dict(stats),
            "record_count":len(out),"records":out[:850],"omitted":max(0,len(out)-850),
            "limits":["Matches do not prove object type, lifetime or absence of variable overwrite.",
                      "A decompiler may represent entry pointer access as indirect calls, inline code or array indices.",
                      "No original ELF, DB, Ghidra project, or game state modified."]}
def markdown(j):
    t=["# PLA 1.1.1 R10 — Owner +0x140 to entry +0x20 alias audit","",
       "R10 is a lexical triage of pinned original Ghidra C, not runtime proof.","",
       "Original ELF SHA-256: "+j["original_sha256"],
       "Source C count: "+str(j["source_count"]),"",
       "## Counts",""]
    t.extend("- "+k+": "+str(v) for k,v in sorted(j["stats"].items()))
    t+=["","## Candidate same-variable reads",""]
    for r in j["records"]:
        if not r["candidates"] and not r["nested"]:continue
        t+=["### "+r["function"],"",r["path"],"","Status: "+r["status"]]
        for x in r["candidates"]:
            t+=["- line "+str(x["line"])+": "+x["source"],
                "  - Subsequent same-variable accesses: "+", ".join(x["uses"])]
            for y in x["use_sites"][:9]:t.append("  - "+y["mode"]+" at "+str(y["line"])+": "+y["source"])
            for y in x["near_calls"][:4]:t.append("  - call at "+str(y["line"])+": "+y["code"])
        for y in r["nested"]:t.append("- nested expression "+str(y["line"])+": "+y["source"])
        t.append("")
    t+=["","## Owner pointer field stores",""]
    for r in j["records"]:
        if not r["stores"]:continue
        t.append("### "+r["function"])
        for y in r["stores"][:12]:t.append("- "+str(y["line"])+": "+y["source"])
        t.append("")
    t+=["","## Limits",""]
    t.extend("- "+x for x in j["limits"])
    t+=["","Require native ARM64 LDR chain or read-only guest memory parity before promoting any function to confirmed GenerateSeed consumer.",""]
    return "\n".join(t)
def main():
    a=argparse.ArgumentParser()
    a.add_argument("--self-test",action="store_true")
    a.add_argument("--c-root",type=Path)
    a.add_argument("--out-json",type=Path)
    a.add_argument("--out-md",type=Path)
    v=a.parse_args()
    s="lVar9 = *(long *)(param_1 + 0x140);\nuVar2=*(ulong *)(lVar9 + 0x20);\nFUN_1234abcd(lVar9,uVar2);\n*(long *)(param_2 + 0x140) = param_3;"
    k=analyze(s,"01b55130")
    assert len(k["loads"])==1 and len(k["stores"])==1 and len(k["candidates"])==1
    assert "add_0x20" in k["candidates"][0]["uses"]
    assert len(analyze("puVar8 = *(undefined8 **)(param_1 + 0x140);\npuVar8[4] = 0;","01b55130")["loads"])==1
    assert not analyze("(**(code **)(*param_1 + 0x140))(param_1);","01b55130")["loads"]
    print("R10 synthetic lexical source tests PASS")
    if v.self_test:return
    if not(v.c_root and v.out_json and v.out_md):a.error("Need --c-root --out-json --out-md")
    j=audit(v.c_root)
    v.out_json.parent.mkdir(parents=True,exist_ok=True)
    v.out_json.write_text(json.dumps(j,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    v.out_md.write_text(markdown(j),encoding="utf-8")
    print(json.dumps({"source_count":j["source_count"],"stats":j["stats"],"record_count":j["record_count"]},indent=2))
if __name__=="__main__":main()
