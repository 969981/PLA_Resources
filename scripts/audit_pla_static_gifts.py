#!/usr/bin/env python3
"""PLA 1.1.1 native static/gift source audit (standard library, no guessed captures).

Reads two FlatBuffers source files, preserves their source identities and
declared parameters, and compares against *candidate* PKHeX static templates.
Never treats battle-only templates as catchable based on species/level alone.
"""
from __future__ import annotations

import argparse
import csv
import hashlib
import json
import re
import struct
from pathlib import Path

FILE_GIFT = "bin/pokemon/data/poke_add.bin"
FILE_EVENT = "bin/pokemon/data/poke_event_encount.bin"
# Exact field indexes from pinned pkNX FlatBuffers schemas, not C# property offsets.
GIFTS = {"event_id": ("str", 0), "species": ("i32", 1),
         "form": ("i32", 2), "gender": ("i32", 3), "shiny": ("i32", 4),
         "level": ("i32", 5), "ability": ("i32", 6),
         "nature": ("i32", 7), "height": ("i32", 8),
         "weight": ("i32", 9), "alpha": ("bool", 10),
         "move_1": ("i32", 11), "mastery_1": ("bool", 12),
         "move_2": ("i32", 13), "mastery_2": ("bool", 14),
         "move_3": ("i32", 15), "mastery_3": ("bool", 16),
         "move_4": ("i32", 17), "mastery_4": ("bool", 18),
         "iv_hp": ("i32", 19), "iv_atk": ("i32", 20),
         "iv_def": ("i32", 21), "iv_spa": ("i32", 22),
         "iv_spd": ("i32", 23), "iv_spe": ("i32", 24),
         "flawless_ivs": ("i32", 25),
         "gv_hp": ("i32", 26), "gv_atk": ("i32", 27),
         "gv_def": ("i32", 28), "gv_spa": ("i32", 29),
         "gv_spd": ("i32", 30), "gv_spe": ("i32", 31),
         "try_insert_party": ("i32", 32), "ball": ("i32", 33)}
SCRIPT_SLOTS = {"species": ("i32", 0), "form": ("i32", 1),
                "gender": ("i32", 2), "shiny": ("i32", 3),
                "level": ("i32", 4), "ability": ("i32", 5),
                "nature": ("i32", 6), "height": ("i32", 7),
                "weight": ("i32", 8),
                "flag_09": ("bool", 9), "flag_10": ("bool", 10),
                "flag_11": ("bool", 11), "field_12": ("i32", 12),
                "field_13": ("str", 13), "field_14": ("str", 14),
                "field_15": ("str", 15), "experience": ("i32", 16),
                "alpha": ("bool", 17), "move_1": ("i32", 18),
                "mastery_1": ("bool", 19),
                "move_2": ("i32", 20), "mastery_2": ("bool", 21),
                "move_3": ("i32", 22), "mastery_3": ("bool", 23),
                "move_4": ("i32", 24), "mastery_4": ("bool", 25),
                "iv_hp": ("i32", 26), "iv_atk": ("i32", 27),
                "iv_def": ("i32", 28), "iv_spa": ("i32", 29),
                "iv_spd": ("i32", 30), "iv_spe": ("i32", 31),
                "flawless_ivs": ("i32", 32),
                "gv_hp": ("i32", 33), "gv_atk": ("i32", 34),
                "gv_def": ("i32", 35), "gv_spa": ("i32", 36),
                "gv_spd": ("i32", 37), "gv_spe": ("i32", 38)}
PKHEX_RX = re.compile(
    r"^\s*new\(\s*(\d+)\s*,\s*(\d+)\s*,\s*(\d+)"
    r"\s*(?:,|\))", re.MULTILINE)


class FlatTable:
    def __init__(self, data: bytes):
        self.data = data

    def get(self, fmt, off):
        n = struct.calcsize("<" + fmt)
        if off < 0 or off+n > len(self.data):
            raise ValueError(f"FlatBuffer out of bounds: {off}+{n}")
        return struct.unpack_from("<"+fmt, self.data, off)[0]

    def rel(self, off):
        dest = off + self.get("I", off)
        if dest <= off or dest >= len(self.data):
            raise ValueError("Invalid forward reference")
        return dest

    def field(self, obj, i):
        vt = obj - self.get("i", obj)
        size = self.get("H", vt)
        if not (4 <= size <= 2048):
            raise ValueError("Invalid FlatBuffer vtable size")
        if i*2+6 > size:
            return None
        off = self.get("H", vt + 4 + i*2)
        return obj + off if off else None

    def value(self, obj, typ, index):
        p = self.field(obj, index)
        if p is None:
            return "" if typ == "str" else False if typ == "bool" else 0
        if typ == "str":
            dest = self.rel(p)
            n = self.get("I", dest)
            if n > 65536 or dest+4+n >= len(self.data):
                raise ValueError("Invalid FlatBuffer string")
            if self.data[dest+4+n] != 0:
                raise ValueError("Unterminated FlatBuffer string")
            return self.data[dest+4:dest+4+n].decode("utf-8")
        return bool(self.get("B", p)) if typ == "bool" else self.get("i", p)

    def fields(self, obj, schema):
        return {name: self.value(obj, *typ) for name, typ in schema.items()}

    def tables(self, obj, index):
        p = self.field(obj, index)
        if p is None:
            raise ValueError("Missing required FlatBuffer table vector")
        v = self.rel(p)
        n = self.get("I", v)
        if n > 100000 or v+4+4*n > len(self.data):
            raise ValueError("Invalid FlatBuffer vector length")
        return [self.rel(v+4+i*4) for i in range(n)]

    def root(self):
        return self.rel(0)


def parse_gifts(data):
    f = FlatTable(data)
    rows = []
    for i, obj in enumerate(f.tables(f.root(), 0)):
        row = {"source_record_index": i, **f.fields(obj, GIFTS)}
        validate_mon(row, "gift")
        rows.append(row)
    return rows


def parse_events(data):
    f = FlatTable(data)
    groups = []
    for i, obj in enumerate(f.tables(f.root(), 0)):
        name = f.value(obj, "str", 0)
        if not name:
            raise ValueError(f"event group {i} has no name")
        group = {"source_group_index":i, "encounter_name":name,
                 "secondary":f.value(obj, "str", 1),
                 "field_02":f.value(obj, "i32", 2), "slots":[]}
        if name.startswith("mut_"):
            group["classification"] = "battle_template_not_proven_catchable"
        else:
            group["classification"] = "scripted_encounter_needs_trigger_verification"
        for j, slot in enumerate(f.tables(obj, 3)):
            row = {"source_slot_index":j, **f.fields(slot, SCRIPT_SLOTS)}
            validate_mon(row, "event")
            group["slots"].append(row)
        groups.append(group)
    return groups


def validate_mon(row, kind):
    if not 1 <= row["species"] <= 1025 or not 0 <= row["form"] <= 255:
        raise ValueError(f"{kind}: invalid species or form: {row}")
    if not 1 <= row["level"] <= 100:
        raise ValueError(f"{kind}: invalid level: {row}")
    if row["shiny"] not in (0,1,2) or row["gender"] not in (-1, 0, 1, 2):
        raise ValueError(f"{kind}: invalid lock or gender: {row}")
    if row["flawless_ivs"] not in range(7):
        raise ValueError(f"{kind}: invalid guaranteed flawless IV count")


def pkhex_static_keys(source):
    """Only syntactic species/form/level candidates, never legal equivalence."""
    keys = {}
    for m in PKHEX_RX.finditer(source):
        species, form, level = (int(v) for v in m.groups())
        if not (1 <= species <= 1025 and 0 <= level <= 100):
            continue
        key = f"{species}:{form}:{level}"
        keys.setdefault(key, []).append({"line": source.count("\n", 0, m.start())+1,
                                           "template": source[m.start():source.find("\n", m.start())].strip()[:300]})
    return keys


def analyze(gifts, groups, pkhex_source=None):
    entries = pkhex_static_keys(pkhex_source) if pkhex_source else {}
    by_class = {}
    matched = []
    for g in groups:
        by_class[g["classification"]] = by_class.get(g["classification"], 0) + 1
        for slot in g["slots"]:
            key = f"{slot['species']}:{slot['form']}:{slot['level']}"
            if key in entries:
                matched.append({"source_kind":"event", "event":g["encounter_name"],
                                "source_group_index":g["source_group_index"],
                                "source_slot_index":slot["source_slot_index"],
                                "key":key, "pkhex_candidates":entries[key],
                                "status":"SPECIES_FORM_LEVEL_ONLY"})
    for row in gifts:
        key = f"{row['species']}:{row['form']}:{row['level']}"
        if key in entries:
            matched.append({"source_kind":"gift", "event":row["event_id"],
                            "source_record_index":row["source_record_index"],
                            "key":key, "pkhex_candidates":entries[key],
                            "status":"SPECIES_FORM_LEVEL_ONLY"})
    return {
        "gift_source_records":len(gifts),
        "event_source_groups":len(groups),
        "event_source_slots":sum(len(g["slots"]) for g in groups),
        "event_groups_by_classification":by_class,
        "gift_duplicates_by_species_form_level": len(gifts)-len({
            (r["species"], r["form"], r["level"]) for r in gifts}),
        "pkhex_template_keys":len(entries) if pkhex_source else None,
        "syntactic_candidate_matches":len(matched),
        "candidate_matches":matched,
        "npc_exchange_status":"NO_PLA_NPC_TRADE_SOURCE_PROVEN",
        "interpretation":"Event battle templates are not automatically catchable; candidate matches are not legality proofs.",
    }


def csv_write(path, rows):
    if not rows:
        return
    keys = list(rows[0])
    with path.open("w", encoding="utf-8-sig", newline="") as fp:
        writer = csv.DictWriter(fp, fieldnames=keys)
        writer.writeheader()
        writer.writerows(rows)


def main(argv=None):
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("romfs",type=Path,help="PLA v1.1.1 RomFS directory containing bin/")
    p.add_argument("--output",type=Path,required=True)
    p.add_argument("--pkhex-source",type=Path,help="current/pinned Encounters8a.cs for *candidate* cross-check")
    args=p.parse_args(argv)
    data={}
    for relative in (FILE_GIFT,FILE_EVENT):
        binary=(args.romfs/relative).read_bytes()
        data[relative]={"sha256":hashlib.sha256(binary).hexdigest(),"bytes":len(binary)}
    gifts=parse_gifts((args.romfs/FILE_GIFT).read_bytes())
    groups=parse_events((args.romfs/FILE_EVENT).read_bytes())
    pkhex=(args.pkhex_source.read_text(encoding="utf-8")
           if args.pkhex_source else None)
    report={"game":"PLA", "version":"1.1.1", "source_files":data,
            "pkhex_source_sha256":hashlib.sha256(pkhex.encode("utf-8")).hexdigest() if pkhex else None,
            **analyze(gifts,groups,pkhex)}
    dst=args.output
    dst.mkdir(parents=True,exist_ok=True)
    (dst/"pla_gifts_native.json").write_text(json.dumps(gifts,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    (dst/"pla_event_groups_native.json").write_text(json.dumps(groups,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    csv_write(dst/"pla_gifts_native.csv",gifts)
    csv_write(dst/"pla_event_slots_native.csv",[
        {"source_group_index":g["source_group_index"],
         "encounter_name":g["encounter_name"],
         "classification":g["classification"],**row}
        for g in groups for row in g["slots"]])
    (dst/"pla_static_gift_audit.json").write_text(json.dumps(report,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print(json.dumps({k:v for k,v in report.items() if k!="candidate_matches"},ensure_ascii=False,indent=2))


if __name__=="__main__":
    main()
