#!/usr/bin/env python3
"""Read-only PLA 1.1.1 ELF AArch64 function-pointer and direct-call evidence.

Scope: specific targets only, original verified ELF. No Ghidra rerun or writes to ELF.
Raw direct BL sites and absolute data words are evidence; a table-neighbor hit
is NOT a proven virtual dispatch, semantic class, or serializer relationship.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import struct
from pathlib import Path
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN

WINDOWS = {
    "HashdbWriterRawCaller": (0x01150668, 0x011506D8),
    "HashdbWriterPrologue": (0x010CE274, 0x010CE2D0),
    "HashdbCopyFlagClear": (0x010CE5DC, 0x010CE718),
    "SaveJobStatusReader": (0x01150638, 0x01150660),
}

HASH = "260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794"
DELTA = 0x100000
TARGETS = {
    "SerializerWriteWrapper": 0x010CE274,
    "SerializerCopyAndEmit": 0x010CE5DC,
    "SerializerSize": 0x010CE508,
    "PokedexGetContextSlot": 0x01148F20,
    "PokedexMutation": 0x0112F528,
    "SaveJobController": 0x011457E4,
    "SaveJobCommitWrapper": 0x01148690,
    "CommitAdapter": 0x02A8F2F4,
    "FileWriteAdapter": 0x02A8D6BC,
    "PokedexEventMutationTask": 0x027DCC74,
}
ANCHOR_SITE = 0x0112F518
ANCHOR_TARGET = 0x0112F528


def load_segments(raw: bytes):
    if len(raw) < 64 or raw[:6] != b"\x7fELF\x02\x01" or struct.unpack_from("<H", raw, 18)[0] != 183:
        raise ValueError("Expected ELF64 little-endian AArch64")
    phoff = struct.unpack_from("<Q", raw, 32)[0]
    entsize, count = struct.unpack_from("<HH", raw, 54)
    if count < 1 or entsize < 56 or phoff + entsize * count > len(raw):
        raise ValueError("Malformed ELF PHT")
    res = []
    for n in range(count):
        kind, flags, fileoff, vaddr, _, filesz, memsz, _ = struct.unpack_from(
            "<IIQQQQQQ", raw, phoff + entsize * n
        )
        if kind == 1 and filesz:
            if fileoff + filesz > len(raw):
                raise ValueError("Invalid PT_LOAD file length")
            res.append({"index": n, "flags": flags, "off": fileoff,
                        "va": vaddr, "size": filesz, "memsz": memsz})
    return res


def resolve(segs, va):
    for seg in segs:
        if seg["va"] <= va < seg["va"] + seg["size"]:
            return seg["off"] + (va - seg["va"])
    raise ValueError(f"Unmapped VA {va:x}")


def decode_bl(word: int, site: int) -> int | None:
    if word & 0xFC000000 != 0x94000000:
        return None
    imm26 = word & 0x03FFFFFF
    signed = imm26 - (0x4000000 if imm26 & 0x2000000 else 0)
    return site + signed * 4


def nearby_words(raw, seg, position, radius=64):
    lo = max(seg["off"], position - radius)
    hi = min(seg["off"] + seg["size"], position + radius + 8)
    lo = (lo + 7) & ~7
    return [{
        "ghidra_va": f"0x{seg['va'] + off - seg['off'] + DELTA:08X}",
        "u64": f"0x{struct.unpack_from('<Q', raw, off)[0]:016X}",
    } for off in range(lo, hi-7, 8)]


def run(path):
    raw = path.read_bytes()
    sha = hashlib.sha256(raw).hexdigest()
    if sha != HASH:
        raise ValueError(f"ELF digest mismatch: {sha}")
    segs = load_segments(raw)
    # Verify address map with an independent known BL anchor.
    off = resolve(segs, ANCHOR_SITE - DELTA)
    check = decode_bl(struct.unpack_from("<I", raw, off)[0], ANCHOR_SITE - DELTA)
    if check is None or check + DELTA != ANCHOR_TARGET:
        raise ValueError(f"Anchor BL does not match: {check}")
    addresses = {k: v - DELTA for k, v in TARGETS.items()}
    by_elf = {v: k for k, v in addresses.items()}
    direct = {k: [] for k in TARGETS}
    for seg in segs:
        if not seg["flags"] & 1:
            continue
        limit = seg["off"] + seg["size"] - 3
        for pos in range(seg["off"], limit, 4):
            word = struct.unpack_from("<I", raw, pos)[0]
            if word & 0xFC000000 != 0x94000000:
                continue
            site = seg["va"] + pos - seg["off"]
            dst = decode_bl(word, site)
            name = by_elf.get(dst)
            if name:
                direct[name].append(f"0x{site + DELTA:08X}")
    pointers = {k: [] for k in TARGETS}
    for seg in segs:
        if seg["flags"] & 1:
            continue
        start = seg["off"]
        end = start + seg["size"]
        # Only aligned, exact 64-bit pointers in non-executable PT_LOAD data.
        for pos in range(start, end - 7, 8):
            word = struct.unpack_from("<Q", raw, pos)[0]
            for targetname, va in TARGETS.items():
                if word not in (va - DELTA, va):
                    continue
                pointers[targetname].append({
                    "ghidra_va": f"0x{seg['va'] + pos - seg['off'] + DELTA:08X}",
                    "raw_word": f"0x{word:016X}",
                    "segment_index": seg["index"],
                    "segment_flags": seg["flags"],
                    "nearby": nearby_words(raw, seg, pos),
                })
    engine = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)
    window_instructions = {}
    for label, (start, end) in WINDOWS.items():
        src = resolve(segs, start - DELTA)
        code = raw[src:src + end - start]
        window_instructions[label] = [
            {"va": f"0x{instruction.address + DELTA:08X}",
             "mnemonic": instruction.mnemonic,
             "operands": instruction.op_str,
             "bytes": instruction.bytes.hex()}
            for instruction in engine.disasm(code, start - DELTA)
        ]
    return {
        "instruction_windows": window_instructions,
        "status": "RAW_ELF_DIRECT_BL_AND_EXACT_DATA_POINTERS_ONLY",
        "source_sha256": sha,
        "elf_bytes": len(raw),
        "ghidra_minus_elf_va": f"0x{DELTA:X}",
        "anchor_verified": {"site": f"0x{ANCHOR_SITE:X}", "callee": f"0x{ANCHOR_TARGET:X}"},
        "targets": {
            name: {"ghidra_va": f"0x{va:08X}",
                   "direct_bl_call_sites": direct[name][:500],
                   "direct_bl_total": len(direct[name]),
                   "exact_nonexecutable_pointers": pointers[name][:80],
                   "exact_data_pointer_total": len(pointers[name]),
                   }
            for name, va in TARGETS.items()
        },
        "limitations": [
            "No virtual or indirect BLR call targets are recovered.",
            "Only absolute aligned 64-bit words in nonexecutable PT_LOAD segments are scanned.",
            "Relative offsets, 32-bit relocations, packed tables and runtime relocation-generated pointers are not captured.",
            "A matching raw pointer does not prove table/vtable ownership, object identity or serialization.",
            "No validation that the serializer buffer contains PokedexSave data or that Commit succeeded.",
        ],
    }


def md(result):
    lines = [
        "# PLA 1.1.1 — serializer writer function-pointer evidence (raw ELF)",
        "",
        "Read-only original ELF scan. Results are exact instruction/data occurrences, NOT a resolved callgraph.",
        "",
        f"- SHA256: {result['source_sha256']}",
        f"- ELF bytes: {result['elf_bytes']}",
        f"- Anchor: {result['anchor_verified']}",
        f"- Status: {result['status']}",
        "",
        "| Target | Ghidra VA | Direct BL | Exact aligned nonexec ptrs |",
        "| --- | --- | ---: | ---: |",
    ]
    for key, target in result["targets"].items():
        lines.append(f"| {key} | {target['ghidra_va']} | {target['direct_bl_total']} | {target['exact_data_pointer_total']} |")
    for key, target in result["targets"].items():
        lines += ["", f"## {key}", "", f"Direct BL: {', '.join(target['direct_bl_call_sites']) or 'none'}", ""]
        if not target["exact_nonexecutable_pointers"]:
            lines.append("No aligned, nonexecutable absolute pointer found (NOT proof of no pointer dispatch).")
        for hit in target["exact_nonexecutable_pointers"]:
            lines.append(f"- Pointer at {hit['ghidra_va']}: value {hit['raw_word']}; segment {hit['segment_index']}")
            lines.extend(f"    {row['ghidra_va']}: {row['u64']}" for row in hit["nearby"])
    lines += ["", "## Narrow ARM64 disassembly windows", ""]
    for name, instructions in result["instruction_windows"].items():
        lines += ["", f"### {name}", "", "```asm"]
        lines.extend(f"{i['va']} {i['mnemonic']:<8} {i['operands']}" for i in instructions)
        lines += ["```", ""]
    lines += [
        "", "## Strict interpretation", "",
        "- A function pointer may appear in a static data table or be generated at runtime.",
        "- A raw adjacent 64-bit word is NOT itself proven to be a method pointer.",
        "- Any PokedexSave-to-serializer association still requires concrete object pointer identity.",
        "- '0 hits' is only a negative finding for the specific pointer encodings searched.",
        "",
    ]
    return "\n".join(lines)


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--elf", type=Path, required=True)
    ap.add_argument("--output-md", type=Path, required=True)
    ap.add_argument("--output-json", type=Path, required=True)
    a = ap.parse_args()
    r = run(a.elf)
    a.output_md.parent.mkdir(parents=True, exist_ok=True)
    a.output_json.parent.mkdir(parents=True, exist_ok=True)
    a.output_md.write_text(md(r), encoding="utf-8")
    a.output_json.write_text(json.dumps(r, indent=2, ensure_ascii=False)+"\n", encoding="utf-8")
    print(json.dumps({"status":r["status"],"bytes":r["elf_bytes"], "calls":{k:v["direct_bl_total"] for k,v in r["targets"].items()}, "pointers":{k:v["exact_data_pointer_total"] for k,v in r["targets"].items()}},indent=2))


if __name__=="__main__":
    main()
