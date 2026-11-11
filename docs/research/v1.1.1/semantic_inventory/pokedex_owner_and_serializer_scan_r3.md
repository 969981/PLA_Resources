# PLA 1.1.1 — Pokedex owner +0x298 and serializer candidate audit

> Static C inventory only: never equate identical offsets with identical object identity.

- Original Ghidra Run: 42774682950
- Pinned ELF SHA-256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
- Verified C coverage: 82,731 files
- Explicit assignment sites of +0x298: 146 (88 functions)
- Status: STATIC_SOURCE_CANDIDATES_NOT_DATAFLOW_PROOF

## Explicit +0x298 writer candidates, ranked by *co-occurrence* only

| Function C | Line | Base | Context score | Nearby recognized evidence |
| --- | ---: | --- | ---: | --- |
| 00/00268eb4.c | 132 | param_1 | 4 | adjacent_managed_slots, object_base_is_first_arg |
| 00/0052860c.c | 91 | param_1 | 4 | adjacent_managed_slots, object_base_is_first_arg |
| 00/00528bc8.c | 81 | param_1 | 4 | adjacent_managed_slots, object_base_is_first_arg |
| 00/00848bb0.c | 41 | param_1 | 4 | adjacent_managed_slots, object_base_is_first_arg |
| 00/009907fc.c | 506 | param_1 | 4 | adjacent_managed_slots, object_base_is_first_arg |
| 02/02fede20.c | 31 | param_1 | 4 | adjacent_managed_slots, object_base_is_first_arg |
| 03/03014b98.c | 75 | param_1 | 4 | adjacent_managed_slots, object_base_is_first_arg |
| 03/03338cb8.c | 191 | param_1 | 4 | adjacent_managed_slots, object_base_is_first_arg |
| 00/0016d530.c | 41 | lVar2 | 3 | adjacent_managed_slots |
| 00/006172f4.c | 224 | lVar5 | 3 | adjacent_managed_slots |
| 00/008cca50.c | 194 | puVar3 | 3 | adjacent_managed_slots |
| 01/011405e0.c | 133 | lVar2 | 3 | adjacent_managed_slots |
| 02/0272693c.c | 350 | lVar4 | 3 | adjacent_managed_slots |
| 02/02e4a2ac.c | 137 | param_4 | 3 | adjacent_managed_slots |
| 02/02e75160.c | 76 | __s | 3 | adjacent_managed_slots |
| 00/0010bf50.c | 1335 | param_1 | 1 | object_base_is_first_arg |
| 00/0010bf50.c | 1424 | param_1 | 1 | object_base_is_first_arg |
| 00/0010bf50.c | 1430 | param_1 | 1 | object_base_is_first_arg |
| 00/0010bf50.c | 1550 | param_1 | 1 | object_base_is_first_arg |
| 00/00113190.c | 295 | param_1 | 1 | object_base_is_first_arg |
| 00/00203b60.c | 36 | param_1 | 1 | object_base_is_first_arg |
| 00/0026d018.c | 83 | param_1 | 1 | object_base_is_first_arg |
| 00/0053d1f0.c | 363 | param_1 | 1 | object_base_is_first_arg |
| 00/00ae676c.c | 21 | param_1 | 1 | object_base_is_first_arg |
| 00/00ae6e18.c | 44 | param_1 | 1 | object_base_is_first_arg |
| 00/00ae6ef0.c | 47 | param_1 | 1 | object_base_is_first_arg |
| 00/00ae7090.c | 28 | param_1 | 1 | object_base_is_first_arg |
| 00/00af01d4.c | 87 | param_1 | 1 | object_base_is_first_arg |
| 00/00b6f390.c | 284 | param_1 | 1 | object_base_is_first_arg |
| 00/00b75ff4.c | 665 | param_1 | 1 | object_base_is_first_arg |
| 01/0110c3e4.c | 175 | param_1 | 1 | object_base_is_first_arg |
| 01/0120bc6c.c | 35 | param_1 | 1 | object_base_is_first_arg |
| 01/019e3e98.c | 22 | param_1 | 1 | object_base_is_first_arg |
| 01/01a71f00.c | 533 | param_1 | 1 | object_base_is_first_arg |
| 01/01a71f00.c | 541 | param_1 | 1 | object_base_is_first_arg |
| 01/01bfcca8.c | 75 | param_1 | 1 | object_base_is_first_arg |
| 01/01c15204.c | 18 | param_1 | 1 | object_base_is_first_arg |
| 01/01c15518.c | 18 | param_1 | 1 | object_base_is_first_arg |
| 01/01c1785c.c | 27 | param_1 | 1 | object_base_is_first_arg |
| 01/01c5aa48.c | 14 | param_1 | 1 | object_base_is_first_arg |
| 01/01c60590.c | 730 | param_1 | 1 | object_base_is_first_arg |
| 02/02583818.c | 126 | param_1 | 1 | object_base_is_first_arg |
| 02/025d17dc.c | 835 | param_1 | 1 | object_base_is_first_arg |
| 02/025d17dc.c | 1093 | param_1 | 1 | object_base_is_first_arg |
| 02/025d39a8.c | 50 | param_1 | 1 | object_base_is_first_arg |
| 02/025d3b0c.c | 50 | param_1 | 1 | object_base_is_first_arg |
| 02/0280f0f4.c | 51 | param_1 | 1 | object_base_is_first_arg |
| 02/0280f0f4.c | 63 | param_1 | 1 | object_base_is_first_arg |
| 02/028aab80.c | 127 | param_1 | 1 | object_base_is_first_arg |
| 02/0294f0dc.c | 163 | param_1 | 1 | object_base_is_first_arg |
| 02/02950338.c | 146 | param_1 | 1 | object_base_is_first_arg |
| 02/02a49934.c | 162 | param_1 | 1 | object_base_is_first_arg |
| 02/02a49d9c.c | 237 | param_1 | 1 | object_base_is_first_arg |
| 02/02aed4e4.c | 31 | param_1 | 1 | object_base_is_first_arg |
| 02/02aed4e4.c | 43 | param_1 | 1 | object_base_is_first_arg |
| 02/02aed4e4.c | 58 | param_1 | 1 | object_base_is_first_arg |
| 02/02aeebd0.c | 35 | param_1 | 1 | object_base_is_first_arg |
| 02/02aeebd0.c | 49 | param_1 | 1 | object_base_is_first_arg |
| 02/02aeebd0.c | 152 | param_1 | 1 | object_base_is_first_arg |
| 02/02e478e4.c | 44 | param_1 | 1 | object_base_is_first_arg |
| 02/02e7c8b4.c | 190 | param_1 | 1 | object_base_is_first_arg |
| 02/02f26970.c | 94 | param_1 | 1 | object_base_is_first_arg |
| 03/0316017c.c | 61 | param_1 | 1 | object_base_is_first_arg |
| 03/03392ec4.c | 20 | param_1 | 1 | object_base_is_first_arg |
| 03/0339823c.c | 85 | param_1 | 1 | object_base_is_first_arg |
| 03/0339823c.c | 132 | param_1 | 1 | object_base_is_first_arg |
| 03/03398734.c | 45 | param_1 | 1 | object_base_is_first_arg |
| 00/00203b60.c | 33 | lVar3 | 0 |  |
| 00/00529758.c | 593 | lVar6 | 0 |  |
| 00/0099494c.c | 313 | lVar20 | 0 |  |
| 00/00b756d8.c | 83 | lVar7 | 0 |  |
| 00/00d4d5ec.c | 80 | lVar12 | 0 |  |
| 00/00d4d5ec.c | 91 | lVar12 | 0 |  |
| 00/00d4d780.c | 80 | lVar12 | 0 |  |
| 00/00d4d780.c | 91 | lVar12 | 0 |  |
| 00/00d4d784.c | 80 | lVar12 | 0 |  |
| 00/00d4d784.c | 91 | lVar12 | 0 |  |
| 00/00d4f364.c | 669 | lVar11 | 0 |  |
| 00/00d4f364.c | 678 | lVar11 | 0 |  |
| 00/00d4f364.c | 987 | lVar11 | 0 |  |

No row above is an accepted setter for the Pokedex context without matching caller and concrete base-pointer provenance.

## Specific field occurrences (number of C functions, not data xrefs)

- 0x1e1: 283
- 0x1e4cc: 2
- 0x1f420: 12
- 0x4f78: 1

## Cross-call candidates

| Function C | Recognized calls | Same function uses Save global? | memcpy/memmove/memset? |
| --- | --- | --- | --- |
| 02/027dba38.c | FUN_01148690, FUN_011457e4 | True | False |
| 02/027dcc74.c | FUN_01148f20, FUN_011457e4 | True | False |
| 00/00927644.c | FUN_0113219c | True | False |
| 00/00daaa90.c | FUN_01148f20 | True | False |
| 00/00daab70.c | FUN_01148f20 | True | False |
| 00/00daac50.c | FUN_01148f20 | True | False |
| 00/00dab054.c | FUN_01148f20 | True | False |
| 00/00dabdc0.c | FUN_01148f20 | True | False |
| 01/010cbf14.c | FUN_01148690 | True | False |
| 01/011457e4.c | FUN_01148690 | True | False |
| 01/011a3bb8.c | FUN_01148f20 | True | False |
| 01/0120e4bc.c | FUN_01148f20 | True | False |
| 01/013f4074.c | FUN_01148f20 | True | True |
| 01/0141308c.c | FUN_01148f20 | True | True |
| 01/01456030.c | FUN_01148f20 | True | False |
| 01/01683cbc.c | FUN_01148f20 | True | False |
| 01/01906830.c | FUN_01148f20 | True | False |
| 02/0275d460.c | FUN_011457e4 | True | False |

## File I/O (unconnected until state-to-byte-buffer dataflow proved)

- 00/0040ae00.c: nn::fs::WriteFile
- 02/02a8d6bc.c: nn::fs::WriteFile
- 02/02a8f2f4.c: nn::fs::Commit
- 03/033a3920.c: nn::fs::WriteFile
- 03/033a4f40.c: nn::fs::Commit
- 04/04451748.c: nn::fs::WriteFile
- 04/04451b48.c: nn::fs::Commit

## Exact next proof obligations

1. Use the restored Ghidra project in read-only mode to find callers and concrete base aliases for top +0x298 assignments.
2. Discard offset matches belonging to different classes; identify the constructor of the context used by FUN_01148F20.
3. Track data reads from state+0xDC+species*0x58 / state+0x1e4cc / state+0x6c into the same serializer buffer.
4. Prove serializer buffer identity at a WriteFile call, and prove a matching Commit and result-code consumer.
5. Only then test Dirty set/clear and restart readback in an isolated runtime.

No original ELF, Ghidra project or source C files were modified.
