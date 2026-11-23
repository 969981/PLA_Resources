# PLA v1.1.1 — encounter analysis and PKHeX `.pkl`

## Current stage and provenance

PLA's PKHeX wild encounter resource is `encounter_la.pkl`, not a Pokémon save file. To generate it correctly from game resources, the producer must join **native encounter tables** to **spawners, geographic placements, met-location IDs, MMO lotteries, and other conditions**. Neither an encounter table by itself nor a set of `new_huge_outbreak_*.bin` files is sufficient.

### Verified native source paths (relative to RomFS `/1/`)

| Original source | pkNX FlatBuffers schema | Root records observed on GitHub, 2026-11-23 |
| --- | --- | ---: |
| `bin/field/encount/huge_outbreak.bin` | `MassOutbreakTable` | 5 |
| `bin/field/encount/new_huge_outbreak_group.bin` | `NewHugeOutbreakGroupArchive` | 166 |
| `bin/field/encount/new_huge_outbreak_group_lottery.bin` | `NewHugeOutbreakGroupLotteryArchive` | 7 |
| `bin/field/encount/new_huge_outbreak_lottery.bin` | `NewHugeOutbreakLotteryArchive` | 5 |
| `bin/field/encount/new_huge_outbreak_time_limit.bin` | `NewHugeOutbreakTimeLimitArchive` | 3 |
| `bin/archive/field/resident_release.gfpak` | GFPak containing `AreaSettings.bin`, encounter and placement data | NOT EXTRACTED |

The first five counts were measured from *actual* FlatBuffers root vectors, not from filenames or the CSV inventory. These are NOT Pokémon slot counts. The `resident_release.gfpak` entry is a critical source and has not been decoded in this implementation.

Use the native source auditor to produce byte-backed SHA-256, record counts, and samples without changing original bytes:

```powershell
python scripts/audit_pla_encounter_sources.py "v1.1.1/b38cd4c18831237d85312886f3a377b5_NCA/1" --output ".pla-work/v1.1.1/encounter-source-audit.json" --strict
```

The scripts use only Python's standard library; they never import or redistribute third-party code.

## PKHeX's exact `la` wire format

The PLA encounter resource uses a Mini container:
- header: ASCII `la`, little-endian `uint16` record count, followed by `count+1` little-endian `uint32` offsets;
- each area: `uint8` location count, a list of `uint8` location IDs, even-byte alignment, `uint8` type, `uint8` slot count, then packed 8-byte slots;
- slot: `ushort Species`, `byte Form`, `byte AlphaType`, `byte LevelMin`, `byte LevelMax`, `byte Gender`, `byte FlawlessIVCount`;
- slot types: 0=standard, 1=space-time distortion, 2=landmark/tree/ore, 3=regular outbreak, 4=massive mass outbreak;
- AlphaType: 0=never, 1=random, 2=guaranteed.

`scripts/pla_encounter_pkl.py` implements **packing, unpacking, inspect, structural checks and lossless JSON roundtrip** for this specific wire format. Input JSON fields are exactly `game`, `version` and `areas`. Each area contains `locations`, `type` and `slots`; each slot contains `species`, `form`, `alpha`, `level_min`, `level_max`, `gender`, `flawless_ivs`.

```powershell
# Parse a known-good binary to JSON; also prints type and slot totals.
python scripts/pla_encounter_pkl.py inspect "encounter_la.pkl"
python scripts/pla_encounter_pkl.py unpack "encounter_la.pkl" --output ".pla-work/v1.1.1/encounter_la.json"

# Recreate a valid binary FROM VERIFIABLY SOURCED normalized encounter JSON.
python scripts/pla_encounter_pkl.py pack ".pla-work/v1.1.1/encounter_la.json" --output ".pla-work/v1.1.1/encounter_la_repacked.pkl" --check-roundtrip
python -m unittest discover -s tests -p "test_*.py" -v
```

### PKHeX upstream reference measurements

An independent structural read of the upstream PKHeX reference `encounter_la.pkl` (Git blob `1ddcd7340389d96ccc8374b740156b5b03ccfa73`, 86,760 bytes) yielded **1,738** area records and **7,132** slots. Area type counts for types 0..4 were **519 / 213 / 169 / 227 / 610**. The min/max wild level values seen in the slots were **2..91**. These are reference measurements, **NOT** results generated from this repository's RomFS, and are useful for independent regression comparisons.

### Remaining steps before native full-generation is complete

1. Extract and verify `resident_release.gfpak`; identify nested `AreaSettings.bin`, encounter tables, place name mappings, placement objects.
2. Join table IDs to map spawners, wormholes, landmarks and MMO groups; emit audited, location-aware normalized area JSON with source paths and hashes. Avoid inferring coordinates or location IDs.
3. Resolve alpha bonuses, gender and IV constraints, shiny locks and level modifiers from native semantics. Mark unknowns explicitly.
4. Pack JSON to `encounter_la.pkl`, inspect with the current PKHeX loader, compare it to the upstream reference and account for differences.
5. Run full source-version checks and rights review before publishing game-derived binary artifacts. A structurally valid `.pkl` is not proof of correct encounter semantics.

## Upstream research references

- PKHeX area decoder: https://github.com/kwsch/PKHeX/blob/master/PKHeX.Core/Legality/Encounters/Templates/Gen8a/EncounterArea8a.cs
- PKHeX reference: https://github.com/kwsch/PKHeX/blob/master/PKHeX.Core/Resources/legality/wild/Gen8/encounter_la.pkl
- pkNX native PLA dumper: https://github.com/kwsch/pkNX/blob/master/pkNX.WinForms/Dumping/Gen8a/GameDumperPLA.cs
- pkNX placement join / slot serialization: https://github.com/kwsch/pkNX/blob/master/FlatBuffers/Arceus/Arceus/Util/EncounterTableUtil.cs
- pkNX Mini serializer: https://github.com/kwsch/pkNX/blob/master/pkNX.Containers/Mini/MiniUtil.cs
- pkNX FlatBuffers schemas: https://github.com/kwsch/pkNX/tree/master/FlatBuffers/Arceus/Schemas/Field

Upstream projects are GPL-3.0 licensed; this repository links to them rather than copying any reference binaries or upstream source code. The Python tools contain only independently written format logic, and tests are synthetic.
