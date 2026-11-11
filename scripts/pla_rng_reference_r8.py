#!/usr/bin/env python3
"""PLA v1.1.1 R8: independent, table-free xoroshiro128+ encounter reference.

Reference math: PKHeX.Core Xoroshiro128Plus, Overworld8aRNG,
PermuteMMO.Lib SpawnGenerator/Calculations. Not an original-game native
function recovery. No save edits, memory attachment, or PA8 creation.

CLI:
 python3 scripts/pla_rng_reference_r8.py --group-seed 0x1234 --count 4 --rolls 13 --ivs 3
 python3 scripts/pla_rng_reference_r8.py --entity-seed 0xC50932B428A734FD --rolls 1
 python3 scripts/pla_rng_reference_r8.py --self-test
"""
from __future__ import annotations
import argparse
import json
from dataclasses import dataclass

MASK64 = (1 << 64) - 1
DEFAULT_S1 = 0x82A2B175229D6A5B
PKHEX_SEED0_DEFAULT = 0x0F4B17A579F18960


def rotl(x: int, n: int) -> int:
    return ((x << n) | (x >> (64-n))) & MASK64


@dataclass
class Xoroshiro128Plus:
    s0: int
    s1: int = DEFAULT_S1

    def __post_init__(self):
        if not (0 <= self.s0 <= MASK64 and 0 <= self.s1 <= MASK64):
            raise ValueError("Both seeds must be unsigned 64bit")

    def next(self) -> int:
        a, b = self.s0, self.s1
        result = (a + b) & MASK64
        b ^= a
        self.s0 = rotl(a, 24) ^ b ^ ((b << 16) & MASK64)
        self.s1 = rotl(b, 37)
        return result

    def prev(self) -> int:
        b=rotl(self.s1,27)
        a=rotl((self.s0 ^ b ^ ((b << 16) & MASK64)) & MASK64,40)
        b ^= a
        self.s0,self.s1=a,b
        return (a+b)&MASK64

    def next_int(self, exclusive_max: int = 0xFFFFFFFF) -> int:
        if not 1 <= exclusive_max <= MASK64:
            raise ValueError("Invalid exclusive bound")
        mask=(1 << (exclusive_max-1).bit_length()) - 1
        while True:
            result=self.next() & mask
            if result < exclusive_max:
                return result


def shiny_xor(pid: int, fake_tid: int) -> int:
    n=(pid ^ fake_tid)
    return (n ^ (n >> 16)) & 0xFFFF


def shiny_rolls(complete:bool=False, perfect:bool=False, charm:bool=False,
                encounter:str="regular") -> int:
    bonus={"regular":0,"mmo":12,"outbreak":25}
    if encounter not in bonus:
        raise ValueError("Unknown encounter: " + encounter)
    if perfect and not complete:
        raise ValueError("Perfect research requires research complete")
    return 1+int(complete)+(2 if perfect else 0)+(3 if charm else 0)+bonus[encounter]


def entity_from_seed(entity_seed: int, *, rolls: int, guaranteed_ivs: int=0,
                     ratio: int=127, alpha: bool=False,
                     gender_max:int=252) -> dict:
    """Raw pseudo-TID/PID generation; *not* actual stored PID TID adjustment.

    PKHeX Overworld8aRNG uses gender NextInt(252)+1.
    PermuteMMO uses NextInt(253)+1; caller chooses explicitly.
    """
    if not (1 <= rolls <= 4096 and 0 <= guaranteed_ivs <= 6):
        raise ValueError("Bad reroll count or IV slots")
    if gender_max not in (252,253):
        raise ValueError("Choose gender bound 252 (PKHeX) or 253 (PermuteMMO)")
    rng=Xoroshiro128Plus(entity_seed)
    ec=rng.next_int()
    fake_tid=rng.next_int()
    pid=0
    hits=0
    shiny=False
    for i in range(1,rolls+1):
        pid=rng.next_int()
        hits=i
        if shiny_xor(pid,fake_tid)<16:
            shiny=True
            break

    ivs=[None]*6
    for _ in range(guaranteed_ivs):
        while True:
            index=rng.next_int(6)
            if ivs[index] is None:
                ivs[index]=31
                break
    for i,value in enumerate(ivs):
        if value is None:ivs[i]=rng.next_int(32)
    ability=rng.next_int(2)
    if ratio==255:gender=2
    elif ratio==254:gender=1
    elif ratio==0:gender=0
    elif 1<=ratio<=253:gender=1 if rng.next_int(gender_max)+1 < ratio else 0
    else:raise ValueError("Invalid gender ratio")
    nature=rng.next_int(25)
    if alpha:
        height=255
        weight=255
    else:
        height=rng.next_int(0x81)+rng.next_int(0x80)
        weight=rng.next_int(0x81)+rng.next_int(0x80)
    return {
        "entity_seed":f"0x{entity_seed:016X}",
        "ec":f"0x{ec:08X}",
        "fake_tid":f"0x{fake_tid:08X}",
        "pid_before_real_tid_adjustment":f"0x{pid:08X}",
        "raw_shiny_xor":shiny_xor(pid,fake_tid),
        "shiny":shiny,
        "pid_rolls_used":hits,
        "pid_rolls_available":rolls,
        "ivs_hp_atk_def_spa_spd_spe":ivs,
        "ability_index":ability,
        "gender":gender,
        "nature_index":nature,
        "height_scalar":height,
        "weight_scalar":weight,
        "gender_bound":gender_max,
        "notes":[
            "Cannot obtain actual stored PA8 PID without player's real TID/SID and ForceShinyState rules.",
            "Species/form/alpha/level require encounter slot lookup external to this reference.",
        ]
    }


def group_frame(group_seed:int, index:int) -> dict:
    if not 1 <= index <= 4096:raise ValueError("index out of range")
    rng=Xoroshiro128Plus(group_seed)
    for _ in range(index):
        generator_seed=rng.next()
        alpha_move_seed=rng.next()
    slot_rng=Xoroshiro128Plus(generator_seed)
    slot_roll=slot_rng.next()
    entity_seed=slot_rng.next()
    level_rng_state=(slot_rng.s0,slot_rng.s1)
    return {
        "group_seed":f"0x{group_seed:016X}",
        "spawn_index_1based":index,
        "generator_seed":f"0x{generator_seed:016X}",
        "alpha_move_seed":f"0x{alpha_move_seed:016X}",
        "slot_roll_raw":f"0x{slot_roll:016X}",
        "entity_seed":f"0x{entity_seed:016X}",
        "level_rng_state_s0":f"0x{level_rng_state[0]:016X}",
        "level_rng_state_s1":f"0x{level_rng_state[1]:016X}",
        "limitation":"Slot weighting, species, alpha, level and weather/time are NOT calculated."
    }


def group_next_seed(group_seed:int,count:int)->int:
    if not 0<=count<=4096:raise ValueError("Bad spawn count")
    rng=Xoroshiro128Plus(group_seed)
    for _ in range(count):
        rng.next();rng.next()
    return rng.next()


def r8_test():
    # Published PKHeX.Core.Tests.General.Xoroshiro128Tests.TestConsecutive
    r=Xoroshiro128Plus(0x5A62B550AA55AA55)
    assert [r.next() & 0xffffffff for _ in range(3)] == [
        0xCCF314B0, 0x359D276C, 0x43157D53]
    # PKHeX TestForward reports zero-based frame index 98, i.e. 99 Next calls.
    x=Xoroshiro128Plus(1,1)
    for _ in range(99):x.next()
    assert (x.s0,x.s1)==(0x339C61939607D435,0xF4DD6E2E9698D1B0)
    for _ in range(99):x.prev()
    assert (x.s0,x.s1)==(1,1)
    # Published PermuteMMO.Tests.UtilTests.Garchomp expected EntitySeed.
    seed=12880307074085126207
    seed=group_next_seed(seed,4)
    for n in (2,1,3):seed=group_next_seed(seed,n)
    assert group_frame(seed,2)["entity_seed"]=="0xC50932B428A734FD"
    # First PRNG output is an additive group seed: reversible for first slot only.
    group=0x1234567890ABCDEF
    first=Xoroshiro128Plus(group).next()
    assert (first-DEFAULT_S1)&MASK64==group
    # Roll calculation from PermuteMMO.Lib.SaveFileParameter.
    assert [shiny_rolls(encounter=e) for e in ("regular","mmo","outbreak")] == [1,13,26]
    assert shiny_rolls(True,True,True,"outbreak")==32
    assert shiny_rolls(True,True,True,"mmo")==19
    ent=entity_from_seed(0xC50932B428A734FD,rolls=1,guaranteed_ivs=3,alpha=True)
    assert len(ent["ivs_hp_atk_def_spa_spd_spe"])==6
    assert ent["ivs_hp_atk_def_spa_spd_spe"].count(31)>=3
    assert ent["height_scalar"]==ent["weight_scalar"]==255
    assert ent["pid_rolls_used"]==1
    try:entity_from_seed(0,rolls=0)
    except ValueError:pass
    else:raise AssertionError("Accepted invalid roll count")
    print("R8 REFERENCE MODEL TEST PASS: PKHeX transition vectors, reverse, PermuteMMO entity seed, shiny rolls")


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    m=ap.add_mutually_exclusive_group()
    m.add_argument("--group-seed",type=lambda x:int(x,0))
    m.add_argument("--entity-seed",type=lambda x:int(x,0))
    ap.add_argument("--count",type=int,default=4)
    ap.add_argument("--rolls",type=int,default=1)
    ap.add_argument("--ivs",type=int,default=0)
    ap.add_argument("--gender-ratio",type=int,default=127)
    ap.add_argument("--gender-max",type=int,choices=(252,253),default=252)
    ap.add_argument("--alpha",action="store_true")
    ap.add_argument("--self-test",action="store_true")
    a=ap.parse_args()
    if a.self_test:r8_test();return
    if a.group_seed is None and a.entity_seed is None:ap.error("Provide a group or entity seed")
    if a.entity_seed is not None:
        result=entity_from_seed(a.entity_seed,rolls=a.rolls,guaranteed_ivs=a.ivs,
                                ratio=a.gender_ratio,alpha=a.alpha,gender_max=a.gender_max)
    else:
        if not 1<=a.count<=64:ap.error("--count must be 1 to 64")
        entries=[group_frame(a.group_seed,i) for i in range(1,a.count+1)]
        for e in entries:
            e["entity"]=entity_from_seed(int(e["entity_seed"],16),
                                         rolls=a.rolls,guaranteed_ivs=a.ivs,
                                         ratio=a.gender_ratio,alpha=a.alpha,gender_max=a.gender_max)
        result={"group_seed":f"0x{a.group_seed:016X}",
                "count":a.count,"next_group_seed":f"0x{group_next_seed(a.group_seed,a.count):016X}",
                "entries":entries}
    print(json.dumps(result,indent=2,ensure_ascii=False))

if __name__=="__main__":
    main()
