#!/usr/bin/env python3
"""PLA 1.1.1 R11: read-only guest PKHeX reference parity gate.

No attached guest is available to this script. It NEVER manufactures native values.
Input can be a JSON capture collected from an unmodified running PLA v1.1.1 guest.

python scripts/pla_rng_guest_parity_r11.py --write-template capture.json
python scripts/pla_rng_guest_parity_r11.py --capture capture.json --report result.json
python scripts/pla_rng_guest_parity_r11.py --self-test
"""
from __future__ import annotations

import argparse
import json
from pathlib import Path
from pla_rng_reference_r8 import Xoroshiro128Plus, entity_from_seed, group_frame, shiny_xor

SHA = "260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794"

def sample_template():
    return {
        "status":"EMPTY_TEMPLATE_NOT_A_GUEST_CAPTURE",
        "capture_origin":"READ_ONLY_UNMODIFIED_PLA_111_GUEST",
        "source_elf_sha256":SHA,
        "game_version":"1.1.1",
        "pc":None,
        "lr":None,
        "main_base":None,
        "owner_ptr":None,
        "owner_plus_140_value":None,
        "spawner_ptr":None,
        "entry_ptr":None,
        "entry_offset":None,
        "group_seed_pre_entry_generation":None,
        "spawn_index_1based":None,
        "generate_seed":None,
        "alpha_move_seed":None,
        "native_entity_seed":None,
        "native_pa8_ec":None,
        "native_pa8_pid":None,
        "native_pa8_ivs_hp_atk_def_spa_spd_spe":None,
        "native_pa8_species":None,
        "native_pa8_form":None,
        "native_pa8_alpha":None,
        "native_pa8_level":None,
        "tid32":None,
        "roll_count":None,
        "flawless_ivs":None,
        "gender_ratio":None,
        "gender_nextint_bound":252,
        "notes":"No actual guest observations supplied; comparisons must remain SKIP.",
    }

def num(x):
    if x is None:return None
    if isinstance(x,bool):raise ValueError("A number must not be bool")
    if isinstance(x,int):return x
    if isinstance(x,str):return int(x,0)
    raise ValueError("Expected integer or hex string")

def pid_after_tid(raw_pid,is_shiny,id32):
    if is_shiny:
        if shiny_xor(raw_pid,id32)>=16:
            low=raw_pid&0xffff
            upper=((id32&0xffff)^(id32>>16)^low)&0xffff
            return (upper<<16)|low
    elif shiny_xor(raw_pid,id32)<16:
        return raw_pid ^ 0x10000000
    return raw_pid

def compare(rows, name, expected, observed):
    if expected is None or observed is None:
        rows.append({"field":name,"status":"SKIP_MISSING_EVIDENCE",
                     "expected":expected,"observed":observed})
    else:
        rows.append({"field":name,"status":"PASS" if expected==observed else "FAIL",
                     "expected":expected,"observed":observed})

def verify(capture):
    if capture.get("source_elf_sha256")!=SHA or capture.get("game_version")!="1.1.1":
        raise ValueError("Only pinned PLA 1.1.1 guest observations are accepted")
    rows=[]
    generate=num(capture.get("generate_seed"))
    alpha=num(capture.get("alpha_move_seed"))
    entity=num(capture.get("native_entity_seed"))
    owner=num(capture.get("owner_plus_140_value"))
    entry=num(capture.get("entry_ptr"))
    spawner=num(capture.get("spawner_ptr"))
    offset=num(capture.get("entry_offset"))
    compare(rows,"Owner+0x140 == EntryPtr",entry,owner)
    if spawner is not None and offset is not None:
        compare(rows,"SpawnerPtr+EntryOffset == EntryPtr",spawner+offset,entry)
    else:compare(rows,"SpawnerPtr+EntryOffset == EntryPtr",None,entry)
    if generate is not None:
        slot=Xoroshiro128Plus(generate)
        slot_roll=slot.next()
        expected_entity=slot.next()
        compare(rows,"SlotRNG.Next(2) == Native EntitySeed",expected_entity,entity)
    else:
        slot_roll=None
        expected_entity=None
        compare(rows,"SlotRNG.Next(2) == Native EntitySeed",None,entity)
    initial_group=num(capture.get("group_seed_pre_entry_generation"))
    idx=num(capture.get("spawn_index_1based"))
    if initial_group is not None and idx is not None:
        frame=group_frame(initial_group,idx)
        compare(rows,"GroupRNG GeneratorSeed",int(frame["generator_seed"],16),generate)
        compare(rows,"GroupRNG AlphaMoveSeed",int(frame["alpha_move_seed"],16),alpha)
    else:
        compare(rows,"GroupRNG GeneratorSeed",None,generate)
        compare(rows,"GroupRNG AlphaMoveSeed",None,alpha)
    # Compute PKHeX reference only if all encounter-generation parameters are known.
    rolls=num(capture.get("roll_count"))
    flawless=num(capture.get("flawless_ivs"))
    ratio=num(capture.get("gender_ratio"))
    is_alpha=capture.get("native_pa8_alpha")
    reference=None
    if entity is not None and all(v is not None for v in (rolls,flawless,ratio,is_alpha)):
        reference=entity_from_seed(
            entity,rolls=rolls,guaranteed_ivs=flawless,
            ratio=ratio,alpha=bool(is_alpha),
            gender_max=num(capture.get("gender_nextint_bound",252)))
        expected_ec=int(reference["ec"],16)
        expected_iv=reference["ivs_hp_atk_def_spa_spd_spe"]
        compare(rows,"PA8.EncryptionConstant",expected_ec,num(capture.get("native_pa8_ec")))
        ivs=capture.get("native_pa8_ivs_hp_atk_def_spa_spd_spe")
        compare(rows,"PA8 six IVs [HP,ATK,DEF,SPA,SPD,SPE]",expected_iv,ivs)
        tid32=num(capture.get("tid32"))
        expected_pid=None if tid32 is None else pid_after_tid(
            int(reference["pid_before_real_tid_adjustment"],16),reference["shiny"],tid32)
        compare(rows,"PA8.PID after PKHeX ForceShinyState",expected_pid,
                num(capture.get("native_pa8_pid")))
    else:
        compare(rows,"PA8.EncryptionConstant",None,num(capture.get("native_pa8_ec")))
        compare(rows,"PA8 six IVs [HP,ATK,DEF,SPA,SPD,SPE]",None,
                capture.get("native_pa8_ivs_hp_atk_def_spa_spd_spe"))
        compare(rows,"PA8.PID after PKHeX ForceShinyState",None,
                num(capture.get("native_pa8_pid")))
    counts={x:sum(r["status"]==x for r in rows) for x in
            ("PASS","FAIL","SKIP_MISSING_EVIDENCE")}
    return {
        "status":"FAIL" if counts["FAIL"] else
                 "PASS_FOR_PROVIDED_FIELDS_ONLY" if counts["PASS"] and not counts["SKIP_MISSING_EVIDENCE"] else
                 "PARTIAL_OR_NO_GUEST_EVIDENCE",
        "capture_origin":capture.get("capture_origin"),
        "main_elf_sha256":SHA,
        "slot_roll":None if slot_roll is None else f"0x{slot_roll:016X}",
        "expected_entity_seed_from_generate_seed":None if expected_entity is None else f"0x{expected_entity:016X}",
        "pkhex_reference_fields":reference,
        "counts":counts,
        "comparisons":rows,
        "limits":[
            "Identical offline expected fields do not establish guest code path or native generator identity.",
            "The supplied capture must come from a single unchanged guest and one exact entity.",
            "PKHeX RNG reference is separate from proof of native function pointer/producer-consumer alias.",
            "Missing tid32 prevents valid comparison of the PA8 stored PID to raw pre-adjustment PID.",
        ],
    }

def selftest():
    tmp=sample_template()
    assert verify(tmp)["status"]=="PARTIAL_OR_NO_GUEST_EVIDENCE"
    seed=0xC50932B428A734FD
    e=entity_from_seed(seed,rolls=1,guaranteed_ivs=3,ratio=127,alpha=True)
    tmp.update({"status":"SYNTHETIC_UNIT_TEST_ONLY",
                "generate_seed":0x1234,
                "native_entity_seed":None,
                "roll_count":1,"flawless_ivs":3,"gender_ratio":127,"native_pa8_alpha":True,
                "native_pa8_ec":int(e["ec"],16),
                "native_pa8_ivs_hp_atk_def_spa_spd_spe":e["ivs_hp_atk_def_spa_spd_spe"]})
    slot=Xoroshiro128Plus(tmp["generate_seed"]);slot.next()
    tmp["native_entity_seed"]=slot.next()
    real=entity_from_seed(tmp["native_entity_seed"],rolls=1,guaranteed_ivs=3,ratio=127,alpha=True)
    tmp["native_pa8_ec"]=int(real["ec"],16)
    tmp["native_pa8_ivs_hp_atk_def_spa_spd_spe"]=real["ivs_hp_atk_def_spa_spd_spe"]
    tmp["tid32"]=0x12345678
    tmp["native_pa8_pid"]=pid_after_tid(
        int(real["pid_before_real_tid_adjustment"],16),real["shiny"],tmp["tid32"])
    j=verify(tmp)
    assert j["counts"]["FAIL"]==0,j
    assert j["counts"]["PASS"]>=4,j
    tmp["native_pa8_ec"]^=1
    bad=verify(tmp)
    assert bad["counts"]["FAIL"]==1,bad
    print("R11 synthetic positive/negative guest-parity schema tests: PASS (NO REAL GUEST SAMPLE)")

def main():
    p=argparse.ArgumentParser(description=__doc__)
    group=p.add_mutually_exclusive_group(required=True)
    group.add_argument("--self-test",action="store_true")
    group.add_argument("--write-template",type=Path)
    group.add_argument("--capture",type=Path)
    p.add_argument("--report",type=Path)
    a=p.parse_args()
    if a.self_test:selftest();return
    if a.write_template:
        a.write_template.parent.mkdir(parents=True,exist_ok=True)
        a.write_template.write_text(json.dumps(sample_template(),indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
        print("Wrote EMPTY guest capture template; not a native game result")
        return
    j=verify(json.loads(a.capture.read_text(encoding="utf-8")))
    if a.report:
        a.report.parent.mkdir(parents=True,exist_ok=True)
        a.report.write_text(json.dumps(j,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    print(json.dumps(j,indent=2,ensure_ascii=False))
if __name__=="__main__":main()
