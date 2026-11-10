#!/usr/bin/env python3
"""Read-only PLA v1.1.1 ELF instruction trace of Pokedex report update labels."""
from __future__ import annotations
import argparse
import hashlib
import json
import re
import struct
from pathlib import Path
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN

HASH = "260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794"
TARGETS = {
    "UpdateAllReportPoke": 0x0112F4F8,
    "UpdateAllReportPokeAndGetResult": 0x0286BC90,
    "PokedexSaveRegister": 0x00E4FAF0,
    "GetReportPokeNum": 0x0112EDC4,
    "SumTaskProgress": 0x0112EFF0,
    "GetTaskProgress": 0x01130984,
}
ANCHORS = {0x0112EFF0: {0x01130984, 0x013F7198}, 0x0112EDC4: {0x0112EFF0}}

def segments(data):
    if data[:6] != b"\x7fELF\x02\x01" or struct.unpack_from("<H", data, 18)[0] != 183:
        raise ValueError("Not a little-endian ELF64 AArch64 image")
    phoff = struct.unpack_from("<Q", data, 32)[0]
    entsize, count = struct.unpack_from("<HH", data, 54)
    if entsize < 56 or not count or phoff + entsize * count > len(data):
        raise ValueError("Invalid ELF program headers")
    result = []
    for i in range(count):
        typ, flags, off, va, _, sz, _, _ = struct.unpack_from("<IIQQQQQQ", data, phoff + i * entsize)
        if typ == 1 and flags & 1:
            if off + sz > len(data):
                raise ValueError("LOAD extends beyond ELF file")
            result.append((va, off, sz))
    if not result:
        raise ValueError("No executable LOAD segment")
    return result

def extract(data, segs, va, size):
    for base, off, length in segs:
        if base <= va < base + length:
            pos = off + va - base
            return data[pos:pos + min(size, base + length - va)]
    return b""

def target_operand(op):
    m = re.fullmatch(r"\s*#?(0x[0-9a-fA-F]+|[0-9]+)\s*", op)
    return int(m.group(1), 0) if m else None

def anchor_hits(data, segs, engine, delta):
    hits = []
    for site, dests in ANCHORS.items():
        raw = extract(data, segs, site - delta, 0x800)
        for addr, size, mnemonic, op in engine.disasm_lite(raw, site - delta):
            dest = target_operand(op) if mnemonic == "bl" else None
            if dest is not None and dest + delta in dests:
                hits.append((addr + delta, dest + delta))
    return hits

def run(path):
    data = path.read_bytes()
    sha = hashlib.sha256(data).hexdigest()
    if sha != HASH:
        raise ValueError("ELF SHA-256 mismatch: " + sha)
    segs = segments(data)
    engine = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)
    engine.skipdata = True
    scores = [(len(hits := anchor_hits(data, segs, engine, delta)), delta, hits)
              for delta in (0, 0x100000)]
    scores.sort(reverse=True)
    score, delta, anchors = scores[0]
    if score < 2 or score == scores[1][0]:
        raise ValueError("Unproven Ghidra address mapping: " + repr(scores))
    windows = {}
    for name, va in TARGETS.items():
        pre = 0x100 if name.startswith("Update") else 0x40
        post = 0x1000 if name.startswith("Update") else 0x100
        start = va - delta - pre
        raw = extract(data, segs, start, pre + post)
        if len(raw) != pre + post:
            raise ValueError("Target out of ELF executable range: " + name)
        rows = []
        for addr, size, mnem, op in engine.disasm_lite(raw, start):
            dst = target_operand(op) if mnem in ("b", "bl") or mnem.startswith("b.") else None
            rows.append({
                "va": "0x%08x" % (addr + delta),
                "bytes": raw[addr-start:addr-start+size].hex(),
                "mnemonic": mnem, "operands": op,
                "branch": "0x%08x" % (dst + delta) if dst is not None else None,
                "possible_store": mnem.startswith("st") or mnem in ("cas", "swp"),
            })
        windows[name] = {"target": "0x%08x" % va, "instructions": rows}
    # Only direct BL calls; no pointer/vtable or BLR resolution.
    xrefs = {name: [] for name in TARGETS}
    target_lookup = {value - delta: key for key, value in TARGETS.items()}
    for base, off, length in segs:
        code = memoryview(data)[off:off+length]
        for addr, size, mnemonic, op in engine.disasm_lite(code, base):
            if mnemonic != "bl":
                continue
            key = target_lookup.get(target_operand(op))
            if key and len(xrefs[key]) < 500:
                xrefs[key].append("0x%08x" % (addr + delta))
    return {
        "status": "STATIC_INSTRUCTION_EVIDENCE_ONLY",
        "version": "PLA 1.1.1",
        "source_run": 42774682950,
        "elf_sha256": sha,
        "elf_bytes": len(data),
        "ghidra_minus_elf_va": "0x%x" % delta,
        "address_anchor_calls": [{"site": "0x%08x" % a, "callee": "0x%08x" % b} for a,b in anchors],
        "address_translation_scores": [{"delta":"0x%x" % d, "matches": n} for n,d,h in scores],
        "direct_bl_xrefs": xrefs,
        "windows": windows,
        "limitations": [
            "An address label is not necessarily a function entry",
            "Store instructions do not prove Pokedex state mutation without register provenance",
            "Indirect BLR/vtable calls and data references are not resolved",
            "Dirty flag, serialization, save I/O and runtime behavior remain unverified",
        ],
    }

def to_md(r):
    lines = [
        "# PLA 1.1.1 - Pokédex report update ARM64 trace",
        "",
        "Original ELF byte evidence only; no fresh Ghidra analysis and no runtime assertions.",
        "",
        "- Source Run: " + str(r["source_run"]),
        "- Source SHA-256: " + r["elf_sha256"],
        "- Ghidra VA minus ELF VA: " + r["ghidra_minus_elf_va"],
        "- Independent address translation anchors: " + str(r["address_anchor_calls"]),
        "",
        "## Instructions and direct callers",
        "",
    ]
    for name, win in r["windows"].items():
        lines += ["### " + name + " - " + win["target"], "",
                  "Direct BL callers: " + str(r["direct_bl_xrefs"][name]), "",
                  "Raw bytes and instructions (an exclamation mark marks a possible store):", ""]
        for row in win["instructions"]:
            mark = "  <-- TARGET" if row["va"] == win["target"] else ""
            mark += "  ! possible store" if row["possible_store"] else ""
            lines.append("    " + row["va"] + ": " + row["bytes"].ljust(12)
                         + " " + row["mnemonic"].ljust(8) + " " + row["operands"] + mark)
        lines.append("")
    lines += [
        "## Proof boundaries", "",
        "- Instruction windows are not function-body definitions.",
        "- A store to stack/local memory is not a store to PokedexSave.",
        "- Only direct BL xrefs are complete within executable PT_LOAD segments.",
        "- No Dirty, serializer, persistence or success/failure claim is made.",
        "",
        "## Next static review", "",
        "1. Recover function boundaries and CFG around both local labels.",
        "2. Track the object pointer into each write, not just the STR instruction.",
        "3. Follow relevant callees and returned result consumers.",
        "4. Resolve Dirty producers/consumers, then serializer and save-I/O success/failure.",
        "",
    ]
    return "\n".join(lines)

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--elf", type=Path, required=True)
    parser.add_argument("--out", type=Path, required=True)
    parser.add_argument("--json-out", type=Path, required=True)
    args = parser.parse_args()
    r = run(args.elf)
    args.out.parent.mkdir(parents=True, exist_ok=True)
    args.json_out.parent.mkdir(parents=True, exist_ok=True)
    args.out.write_text(to_md(r), encoding="utf-8")
    args.json_out.write_text(json.dumps(r, indent=2, ensure_ascii=False) + "\n", encoding="utf-8")
    print(json.dumps({k:v for k,v in r.items() if k not in ("windows","direct_bl_xrefs")}, indent=2))

if __name__ == "__main__":
    main()
