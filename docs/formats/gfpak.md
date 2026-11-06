# GFPak format investigation — PLA v1.1.1

**Status: PLANNED.** 678 top-level `.gfpak` entries in local file inventory. Do not assume all internal entries have been extracted.

Record native header magic/offsets/endianess, file table size, count, compression flags, nested path/hash indexes, decode dependencies, extracted entry SHA-256 and unsupported records. Preserve container and nested path identities. Start from at least three independently selected packs, including one Pokémon, one UI and one field pack. Compare output file headers against actual formats; prohibit copy-with-new-extension pseudo-conversion.

Working output example: `Unpack/v1.1.1/romfs/bin/archive/ai/ai.gfpak/extracted/`; each output must have an archived entry identifier and SHA-256 in a source-linked ledger.

## R3 update — real sample evidence

The first three actual GFPak archives were verified in [Actions #42158997746](https://github.com/969981/PLA_Resources/actions/runs/42158997746). The status label `PLANNED` at the top was the R0 baseline. The current headless parser and parallel workflow are described in [gfpak-parallel-pipeline.md](../gfpak-parallel-pipeline.md). Do not extrapolate 3/3 to 678/678 or treat extraction as semantic parsing.
