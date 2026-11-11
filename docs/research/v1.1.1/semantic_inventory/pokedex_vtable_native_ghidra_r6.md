# PLA R6 — original Ghidra 12.2 read-only vtable inspection

Verified restored original native Ghidra project; headless -noanalysis -readOnly.
Pinned source ELF SHA-256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794.
Evidence is Ghidra native data and references, NOT observed runtime virtual dispatch.

| Target | xrefs | Symbol |
| --- | ---: | --- |
| 0112E220 | 5 | FUN_0112e220 |
| 0112E580 | 3 | FUN_0112e580 |
| 0112E6F0 | 3 | FUN_0112e6f0 |
| 0112E4C0 | 0 | None |
| 0112E660 | 0 | None |
| 01147C34 | 3 | FUN_01147c34 |
| 010CD044 | 39 | FUN_010cd044 |
| 0114725C | 3 | FUN_0114725c |
| 0114BC50 | 3 | FUN_0114bc50 |
| 011458E8 | 4 | FUN_011458e8 |
| 02888630 | 3 | FUN_02888630 |
| 01148F20 | 32 | FUN_01148f20 |
| 010CEEA0 | 3 | FUN_010ceea0 |
| 010CEC54 | 4 | FUN_010cec54 |
| 010CEB08 | 3 | FUN_010ceb08 |

## Nonzero or referenced vtable entries

| Table | Offset (bytes) | Address | Data qword | Data value | Xrefs |
| --- | ---: | --- | --- | --- | ---: |
| primary | 0 | 041f23c8 | 0x000000000112E2B0 | 0112e2b0 | 1 |
| primary | 8 | 041f23d0 | 0x000000000112E3BC | 0112e3bc | 1 |
| primary | 16 | 041f23d8 | 0x00000000008A782C | 008a782c | 1 |
| primary | 24 | 041f23e0 | 0x00000000008A783C | 008a783c | 1 |
| primary | 32 | 041f23e8 | 0x00000000008A791C | 008a791c | 1 |
| primary | 40 | 041f23f0 | 0x00000000008A7B80 | 008a7b80 | 1 |
| primary | 48 | 041f23f8 | 0x00000000008A7BE8 | 008a7be8 | 1 |
| primary | 56 | 041f2400 | 0x0000000001137114 | 01137114 | 1 |
| primary | 64 | 041f2408 | 0x000000000112E3D0 | 0112e3d0 | 1 |
| primary | 72 | 041f2410 | 0x000000000112E414 | 0112e414 | 1 |
| primary | 80 | 041f2418 | 0x000000000112E5CC | 0112e5cc | 1 |
| primary | 88 | 041f2420 | 0x00000000010D741C | 010d741c | 1 |
| primary | 96 | 041f2428 | 0xFFFFFFFFFFFFFFB8 | None | 0 |
| primary | 112 | 041f2438 | 0x000000000112E3AC | 0112e3ac | 1 |
| primary | 120 | 041f2440 | 0x000000000112E3C0 | 0112e3c0 | 1 |
| primary | 128 | 041f2448 | 0x00000000008A7C1C | 008a7c1c | 1 |
| primary | 136 | 041f2450 | 0x00000000008A7C84 | 008a7c84 | 1 |
| primary | 144 | 041f2458 | 0x00000000008A7CBC | 008a7cbc | 1 |
| primary | 152 | 041f2460 | 0x00000000008A7CCC | 008a7ccc | 1 |
| primary | 160 | 041f2468 | 0x00000000011371F4 | 011371f4 | 1 |
| primary | 168 | 041f2470 | 0xFFFFFFFFFFFFFFB0 | None | 0 |
| primary | 184 | 041f2480 | 0x00000000011372D4 | 011372d4 | 1 |
| primary | 192 | 041f2488 | 0x000000000112E3B4 | 0112e3b4 | 1 |
| primary | 200 | 041f2490 | 0x000000000112E3C8 | 0112e3c8 | 1 |
| primary | 224 | 041f24a8 | 0x00000000008AEECC | 008aeecc | 1 |
| primary | 232 | 041f24b0 | 0x0000000001138520 | 01138520 | 1 |
| primary | 240 | 041f24b8 | 0x00000000008A782C | 008a782c | 1 |
| primary | 248 | 041f24c0 | 0x00000000008A783C | 008a783c | 1 |
| primary | 256 | 041f24c8 | 0x00000000008A791C | 008a791c | 1 |
| primary | 264 | 041f24d0 | 0x00000000008A7B80 | 008a7b80 | 1 |
| primary | 272 | 041f24d8 | 0x00000000008A7BE8 | 008a7be8 | 1 |
| primary | 280 | 041f24e0 | 0x00000000010D7380 | 010d7380 | 1 |
| primary | 288 | 041f24e8 | 0x0000000001137E78 | 01137e78 | 1 |
| primary | 296 | 041f24f0 | 0x0000000001138104 | 01138104 | 1 |
| primary | 304 | 041f24f8 | 0x000000000113835C | 0113835c | 1 |
| primary | 312 | 041f2500 | 0x00000000010D741C | 010d741c | 1 |
| primary | 320 | 041f2508 | 0xFFFFFFFFFFFFFFB8 | None | 0 |
| primary | 336 | 041f2518 | 0x00000000011385FC | 011385fc | 1 |
| primary | 344 | 041f2520 | 0x00000000011386D8 | 011386d8 | 1 |
| secondaryA | 0 | 041f2438 | 0x000000000112E3AC | 0112e3ac | 1 |
| secondaryA | 8 | 041f2440 | 0x000000000112E3C0 | 0112e3c0 | 1 |
| secondaryA | 16 | 041f2448 | 0x00000000008A7C1C | 008a7c1c | 1 |
| secondaryA | 24 | 041f2450 | 0x00000000008A7C84 | 008a7c84 | 1 |
| secondaryA | 32 | 041f2458 | 0x00000000008A7CBC | 008a7cbc | 1 |
| secondaryA | 40 | 041f2460 | 0x00000000008A7CCC | 008a7ccc | 1 |
| secondaryA | 48 | 041f2468 | 0x00000000011371F4 | 011371f4 | 1 |
| secondaryA | 56 | 041f2470 | 0xFFFFFFFFFFFFFFB0 | None | 0 |
| secondaryA | 72 | 041f2480 | 0x00000000011372D4 | 011372d4 | 1 |
| secondaryA | 80 | 041f2488 | 0x000000000112E3B4 | 0112e3b4 | 1 |
| secondaryA | 88 | 041f2490 | 0x000000000112E3C8 | 0112e3c8 | 1 |
| secondaryA | 112 | 041f24a8 | 0x00000000008AEECC | 008aeecc | 1 |
| secondaryA | 120 | 041f24b0 | 0x0000000001138520 | 01138520 | 1 |
| secondaryA | 128 | 041f24b8 | 0x00000000008A782C | 008a782c | 1 |
| secondaryA | 136 | 041f24c0 | 0x00000000008A783C | 008a783c | 1 |
| secondaryA | 144 | 041f24c8 | 0x00000000008A791C | 008a791c | 1 |
| secondaryA | 152 | 041f24d0 | 0x00000000008A7B80 | 008a7b80 | 1 |
| secondaryA | 160 | 041f24d8 | 0x00000000008A7BE8 | 008a7be8 | 1 |
| secondaryA | 168 | 041f24e0 | 0x00000000010D7380 | 010d7380 | 1 |
| secondaryA | 176 | 041f24e8 | 0x0000000001137E78 | 01137e78 | 1 |
| secondaryA | 184 | 041f24f0 | 0x0000000001138104 | 01138104 | 1 |
| secondaryA | 192 | 041f24f8 | 0x000000000113835C | 0113835c | 1 |
| secondaryA | 200 | 041f2500 | 0x00000000010D741C | 010d741c | 1 |
| secondaryA | 208 | 041f2508 | 0xFFFFFFFFFFFFFFB8 | None | 0 |
| secondaryA | 224 | 041f2518 | 0x00000000011385FC | 011385fc | 1 |
| secondaryA | 232 | 041f2520 | 0x00000000011386D8 | 011386d8 | 1 |
| secondaryA | 240 | 041f2528 | 0x00000000008A7C1C | 008a7c1c | 1 |
| secondaryA | 248 | 041f2530 | 0x00000000008A7C84 | 008a7c84 | 1 |
| secondaryA | 256 | 041f2538 | 0x00000000008A7CBC | 008a7cbc | 1 |
| secondaryA | 264 | 041f2540 | 0x00000000008A7CCC | 008a7ccc | 1 |
| secondaryA | 272 | 041f2548 | 0x00000000010D7420 | 010d7420 | 1 |
| secondaryA | 280 | 041f2550 | 0xFFFFFFFFFFFFFFB0 | None | 0 |
| secondaryA | 296 | 041f2560 | 0x00000000010D74BC | 010d74bc | 1 |
| secondaryA | 304 | 041f2568 | 0x00000000011387B4 | 011387b4 | 1 |
| secondaryA | 312 | 041f2570 | 0x0000000001138890 | 01138890 | 1 |
| secondaryA | 336 | 041f2588 | 0x000000000113A6A8 | 0113a6a8 | 1 |
| secondaryA | 344 | 041f2590 | 0x000000000113A79C | 0113a79c | 1 |
| secondaryB | 0 | 041f2480 | 0x00000000011372D4 | 011372d4 | 1 |
| secondaryB | 8 | 041f2488 | 0x000000000112E3B4 | 0112e3b4 | 1 |
| secondaryB | 16 | 041f2490 | 0x000000000112E3C8 | 0112e3c8 | 1 |
| secondaryB | 40 | 041f24a8 | 0x00000000008AEECC | 008aeecc | 1 |
| secondaryB | 48 | 041f24b0 | 0x0000000001138520 | 01138520 | 1 |
| secondaryB | 56 | 041f24b8 | 0x00000000008A782C | 008a782c | 1 |
| secondaryB | 64 | 041f24c0 | 0x00000000008A783C | 008a783c | 1 |
| secondaryB | 72 | 041f24c8 | 0x00000000008A791C | 008a791c | 1 |
| secondaryB | 80 | 041f24d0 | 0x00000000008A7B80 | 008a7b80 | 1 |
| secondaryB | 88 | 041f24d8 | 0x00000000008A7BE8 | 008a7be8 | 1 |
| secondaryB | 96 | 041f24e0 | 0x00000000010D7380 | 010d7380 | 1 |
| secondaryB | 104 | 041f24e8 | 0x0000000001137E78 | 01137e78 | 1 |
| secondaryB | 112 | 041f24f0 | 0x0000000001138104 | 01138104 | 1 |
| secondaryB | 120 | 041f24f8 | 0x000000000113835C | 0113835c | 1 |
| secondaryB | 128 | 041f2500 | 0x00000000010D741C | 010d741c | 1 |
| secondaryB | 136 | 041f2508 | 0xFFFFFFFFFFFFFFB8 | None | 0 |
| secondaryB | 152 | 041f2518 | 0x00000000011385FC | 011385fc | 1 |
| secondaryB | 160 | 041f2520 | 0x00000000011386D8 | 011386d8 | 1 |
| secondaryB | 168 | 041f2528 | 0x00000000008A7C1C | 008a7c1c | 1 |
| secondaryB | 176 | 041f2530 | 0x00000000008A7C84 | 008a7c84 | 1 |
| secondaryB | 184 | 041f2538 | 0x00000000008A7CBC | 008a7cbc | 1 |
| secondaryB | 192 | 041f2540 | 0x00000000008A7CCC | 008a7ccc | 1 |
| secondaryB | 200 | 041f2548 | 0x00000000010D7420 | 010d7420 | 1 |
| secondaryB | 208 | 041f2550 | 0xFFFFFFFFFFFFFFB0 | None | 0 |
| secondaryB | 224 | 041f2560 | 0x00000000010D74BC | 010d74bc | 1 |
| secondaryB | 232 | 041f2568 | 0x00000000011387B4 | 011387b4 | 1 |
| secondaryB | 240 | 041f2570 | 0x0000000001138890 | 01138890 | 1 |
| secondaryB | 264 | 041f2588 | 0x000000000113A6A8 | 0113a6a8 | 1 |
| secondaryB | 272 | 041f2590 | 0x000000000113A79C | 0113a79c | 1 |
| secondaryB | 280 | 041f2598 | 0x00000000008A782C | 008a782c | 1 |
| secondaryB | 288 | 041f25a0 | 0x00000000008A783C | 008a783c | 1 |
| secondaryB | 296 | 041f25a8 | 0x00000000008A791C | 008a791c | 1 |
| secondaryB | 304 | 041f25b0 | 0x00000000008A7B80 | 008a7b80 | 1 |
| secondaryB | 312 | 041f25b8 | 0x00000000008A7BE8 | 008a7be8 | 1 |
| secondaryB | 320 | 041f25c0 | 0x00000000010D7380 | 010d7380 | 1 |
| secondaryB | 328 | 041f25c8 | 0x00000000011392EC | 011392ec | 1 |
| secondaryB | 336 | 041f25d0 | 0x0000000001139B08 | 01139b08 | 1 |
| secondaryB | 344 | 041f25d8 | 0x000000000113983C | 0113983c | 1 |

## Strict limits

- Raw ELF vtable words are relocation placeholders; zero is not necessarily a null virtual method.
- Ghidra references or nonzero qwords are not automatically verified runtime BLR dispatch.
- No game-side Commit success or cold restart was attempted.
