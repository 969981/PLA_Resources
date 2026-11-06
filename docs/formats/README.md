# PLA native-format worklist

| Family | Approx. original count | Investigation focus |
| --- | ---: | --- |
| GFPak | 678 | Archive index, nested entries, compression and hash-preserving extraction |
| Message `.dat/.tbl` | 6,566 globally | Pairing, languages, record offsets, encoding and output CSV/JSON |
| BLUA | 874 | Native bytecode header, dialect, function metadata, disassembly |
| BNTX | 2,969 | Texture format, dimensions, swizzles, DDS/PNG conversion |
| Trinity model family | varied | Mesh, skeleton, material, animation, actual cross-file references |
| PTCL | 1,748 | Effect container formats and nested assets |
| Wwise | .pck/.bnk files | Bank/media IDs and codec-aware extraction |
| Misc bin/wazabin | varied | Native table layouts, row sizes, item/move semantics |

Counts are from the local inventory, not decoded assets. See the [roadmap](../unpack-roadmap.md) for acceptance criteria.
