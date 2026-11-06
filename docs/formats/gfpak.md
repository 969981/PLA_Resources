# GFPak format investigation — PLA v1.1.1

**Status: PLANNED.** 678 top-level `.gfpak` entries in local file inventory. Do not assume all internal entries have been extracted.

Record native header magic/offsets/endianess, file table size, count, compression flags, nested path/hash indexes, decode dependencies, extracted entry SHA-256 and unsupported records. Preserve container and nested path identities. Start from at least three independently selected packs, including one Pokémon, one UI and one field pack. Compare output file headers against actual formats; prohibit copy-with-new-extension pseudo-conversion.

Working output example: `Unpack/v1.1.1/romfs/bin/archive/ai/ai.gfpak/extracted/`; each output must have an archived entry identifier and SHA-256 in a source-linked ledger.
