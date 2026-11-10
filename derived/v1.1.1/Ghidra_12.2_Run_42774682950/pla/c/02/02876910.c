/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02876910; name: FUN_02876910
 */


void FUN_02876910(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long *local_48;
  undefined8 local_38;
  
  *param_1 = &PTR_FUN_04271200;
  puVar11 = param_1 + 1;
  *puVar11 = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = &DAT_cbf29ce484222645;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined1 *)(param_1 + 0x66) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  *(undefined1 *)(param_1 + 0x8a) = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  param_1[0xa1] = 0;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0;
  param_1[0x9e] = 0;
  *(undefined1 *)(param_1 + 0xae) = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  param_1[0xc5] = 0;
  param_1[0xc4] = 0;
  param_1[0xc3] = 0;
  param_1[0xc2] = 0;
  *(undefined1 *)(param_1 + 0xd2) = 0;
  param_1[0xb5] = 0;
  param_1[0xb4] = 0;
  param_1[0xb3] = 0;
  param_1[0xb2] = 0;
  param_1[0xb1] = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  param_1[0xe9] = 0;
  param_1[0xe8] = 0;
  param_1[0xe7] = 0;
  param_1[0xe6] = 0;
  *(undefined1 *)(param_1 + 0xf6) = 0;
  param_1[0xd9] = 0;
  param_1[0xd8] = 0;
  param_1[0xd7] = 0;
  param_1[0xd6] = 0;
  param_1[0xd5] = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  param_1[0x10d] = 0;
  param_1[0x10c] = 0;
  param_1[0x10b] = 0;
  param_1[0x10a] = 0;
  *(undefined1 *)(param_1 + 0x11a) = 0;
  param_1[0xfd] = 0;
  param_1[0xfc] = 0;
  param_1[0xfb] = 0;
  param_1[0xfa] = 0;
  param_1[0xf9] = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  param_1[0x131] = 0;
  param_1[0x130] = 0;
  param_1[0x12f] = 0;
  param_1[0x12e] = 0;
  *(undefined1 *)(param_1 + 0x13e) = 0;
  param_1[0x121] = 0;
  param_1[0x120] = 0;
  param_1[0x11f] = 0;
  param_1[0x11e] = 0;
  param_1[0x11d] = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  param_1[0x155] = 0;
  param_1[0x154] = 0;
  param_1[0x153] = 0;
  param_1[0x152] = 0;
  *(undefined1 *)(param_1 + 0x162) = 0;
  param_1[0x145] = 0;
  param_1[0x144] = 0;
  param_1[0x143] = 0;
  param_1[0x142] = 0;
  param_1[0x141] = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  param_1[0x179] = 0;
  param_1[0x178] = 0;
  param_1[0x177] = 0;
  param_1[0x176] = 0;
  *(undefined1 *)(param_1 + 0x186) = 0;
  param_1[0x169] = 0;
  param_1[0x168] = 0;
  param_1[0x167] = 0;
  param_1[0x166] = 0;
  param_1[0x165] = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  param_1[0x19d] = 0;
  param_1[0x19c] = 0;
  param_1[0x19b] = 0;
  param_1[0x19a] = 0;
  *(undefined1 *)(param_1 + 0x1aa) = 0;
  param_1[0x18d] = 0;
  param_1[0x18c] = 0;
  param_1[0x18b] = 0;
  param_1[0x18a] = 0;
  param_1[0x189] = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  param_1[0x1c1] = 0;
  param_1[0x1c0] = 0;
  param_1[0x1bf] = 0;
  param_1[0x1be] = 0;
  *(undefined1 *)(param_1 + 0x1ce) = 0;
  param_1[0x1b1] = 0;
  param_1[0x1b0] = 0;
  param_1[0x1af] = 0;
  param_1[0x1ae] = 0;
  param_1[0x1ad] = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  param_1[0x1e5] = 0;
  param_1[0x1e4] = 0;
  param_1[0x1e3] = 0;
  param_1[0x1e2] = 0;
  *(undefined1 *)(param_1 + 0x1f2) = 0;
  param_1[0x1d5] = 0;
  param_1[0x1d4] = 0;
  param_1[0x1d3] = 0;
  param_1[0x1d2] = 0;
  param_1[0x1d1] = 0;
  *(undefined4 *)(param_1 + 500) = 0;
  param_1[0x209] = 0;
  param_1[0x208] = 0;
  param_1[0x207] = 0;
  param_1[0x206] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x1c] = &DAT_03996322;
  param_1[0x1d] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x216) = 0;
  param_1[0x1f9] = 0;
  param_1[0x1f8] = 0;
  param_1[0x1f7] = 0;
  param_1[0x1f6] = 0;
  param_1[0x1f5] = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  param_1[0x22d] = 0;
  param_1[0x22c] = 0;
  param_1[0x22b] = 0;
  param_1[0x22a] = 0;
  *(undefined1 *)(param_1 + 0x23a) = 0;
  param_1[0x21d] = 0;
  param_1[0x21c] = 0;
  param_1[0x21b] = 0;
  param_1[0x21a] = 0;
  param_1[0x219] = 0;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  param_1[0x251] = 0;
  param_1[0x250] = 0;
  param_1[0x24f] = 0;
  param_1[0x24e] = 0;
  *(undefined1 *)(param_1 + 0x25e) = 0;
  param_1[0x241] = 0;
  param_1[0x240] = 0;
  param_1[0x23f] = 0;
  param_1[0x23e] = 0;
  param_1[0x23d] = 0;
  *(undefined4 *)(param_1 + 0x260) = 0;
  param_1[0x275] = 0;
  param_1[0x274] = 0;
  param_1[0x273] = 0;
  param_1[0x272] = 0;
  *(undefined1 *)(param_1 + 0x282) = 0;
  param_1[0x265] = 0;
  param_1[0x264] = 0;
  param_1[0x263] = 0;
  param_1[0x262] = 0;
  param_1[0x261] = 0;
  *(undefined4 *)(param_1 + 0x284) = 0;
  param_1[0x299] = 0;
  param_1[0x298] = 0;
  param_1[0x297] = 0;
  param_1[0x296] = 0;
  *(undefined1 *)(param_1 + 0x2a6) = 0;
  param_1[0x289] = 0;
  param_1[0x288] = 0;
  param_1[0x287] = 0;
  param_1[0x286] = 0;
  param_1[0x285] = 0;
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  param_1[0x2bd] = 0;
  param_1[700] = 0;
  param_1[699] = 0;
  param_1[0x2ba] = 0;
  *(undefined1 *)(param_1 + 0x2ca) = 0;
  param_1[0x2ad] = 0;
  param_1[0x2ac] = 0;
  param_1[0x2ab] = 0;
  param_1[0x2aa] = 0;
  param_1[0x2a9] = 0;
  *(undefined4 *)(param_1 + 0x2cc) = 0;
  param_1[0x2e1] = 0;
  param_1[0x2e0] = 0;
  param_1[0x2df] = 0;
  param_1[0x2de] = 0;
  *(undefined1 *)(param_1 + 0x2ee) = 0;
  param_1[0x2d1] = 0;
  param_1[0x2d0] = 0;
  param_1[0x2cf] = 0;
  param_1[0x2ce] = 0;
  param_1[0x2cd] = 0;
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  param_1[0x305] = 0;
  param_1[0x304] = 0;
  param_1[0x303] = 0;
  param_1[0x302] = 0;
  *(undefined1 *)(param_1 + 0x312) = 0;
  param_1[0x2f5] = 0;
  param_1[0x2f4] = 0;
  param_1[0x2f3] = 0;
  param_1[0x2f2] = 0;
  param_1[0x2f1] = 0;
  *(undefined4 *)(param_1 + 0x314) = 0;
  param_1[0x329] = 0;
  param_1[0x328] = 0;
  param_1[0x327] = 0;
  param_1[0x326] = 0;
  *(undefined1 *)(param_1 + 0x336) = 0;
  param_1[0x319] = 0;
  param_1[0x318] = 0;
  param_1[0x317] = 0;
  param_1[0x316] = 0;
  param_1[0x315] = 0;
  *(undefined4 *)(param_1 + 0x338) = 0;
  param_1[0x34d] = 0;
  param_1[0x34c] = 0;
  param_1[0x34b] = 0;
  param_1[0x34a] = 0;
  *(undefined1 *)(param_1 + 0x35a) = 0;
  param_1[0x33d] = 0;
  param_1[0x33c] = 0;
  param_1[0x33b] = 0;
  param_1[0x33a] = 0;
  param_1[0x339] = 0;
  *(undefined4 *)(param_1 + 0x35c) = 0;
  param_1[0x371] = 0;
  param_1[0x370] = 0;
  param_1[0x36f] = 0;
  param_1[0x36e] = 0;
  *(undefined1 *)(param_1 + 0x37e) = 0;
  param_1[0x361] = 0;
  param_1[0x360] = 0;
  param_1[0x35f] = 0;
  param_1[0x35e] = 0;
  param_1[0x35d] = 0;
  *(undefined4 *)(param_1 + 0x380) = 0;
  param_1[0x395] = 0;
  param_1[0x394] = 0;
  param_1[0x393] = 0;
  param_1[0x392] = 0;
  *(undefined1 *)(param_1 + 0x3a2) = 0;
  param_1[0x385] = 0;
  param_1[900] = 0;
  param_1[899] = 0;
  param_1[0x382] = 0;
  param_1[0x381] = 0;
  *(undefined4 *)(param_1 + 0x3a4) = 0;
  param_1[0x3b9] = 0;
  param_1[0x3b8] = 0;
  param_1[0x3b7] = 0;
  param_1[0x3b6] = 0;
  *(undefined1 *)(param_1 + 0x3c6) = 0;
  param_1[0x3a9] = 0;
  param_1[0x3a8] = 0;
  param_1[0x3a7] = 0;
  param_1[0x3a6] = 0;
  param_1[0x3a5] = 0;
  *(undefined4 *)(param_1 + 0x3c8) = 0;
  param_1[0x3dd] = 0;
  param_1[0x3dc] = 0;
  param_1[0x3db] = 0;
  param_1[0x3da] = 0;
  *(undefined1 *)(param_1 + 0x3ea) = 0;
  param_1[0x3cd] = 0;
  param_1[0x3cc] = 0;
  param_1[0x3cb] = 0;
  param_1[0x3ca] = 0;
  param_1[0x3c9] = 0;
  *(undefined4 *)(param_1 + 0x3ec) = 0;
  param_1[0x401] = 0;
  param_1[0x400] = 0;
  param_1[0x3ff] = 0;
  param_1[0x3fe] = 0;
  *(undefined1 *)(param_1 + 0x40e) = 0;
  param_1[0x3f1] = 0;
  param_1[0x3f0] = 0;
  param_1[0x3ef] = 0;
  param_1[0x3ee] = 0;
  param_1[0x3ed] = 0;
  *(undefined4 *)(param_1 + 0x410) = 0;
  param_1[0x425] = 0;
  param_1[0x424] = 0;
  param_1[0x423] = 0;
  param_1[0x422] = 0;
  *(undefined1 *)(param_1 + 0x432) = 0;
  param_1[0x415] = 0;
  param_1[0x414] = 0;
  param_1[0x413] = 0;
  param_1[0x412] = 0;
  param_1[0x411] = 0;
  *(undefined4 *)(param_1 + 0x434) = 0;
  param_1[0x449] = 0;
  param_1[0x448] = 0;
  param_1[0x447] = 0;
  param_1[0x446] = 0;
  *(undefined1 *)(param_1 + 0x456) = 0;
  param_1[0x439] = 0;
  param_1[0x438] = 0;
  param_1[0x437] = 0;
  param_1[0x436] = 0;
  param_1[0x435] = 0;
  *(undefined4 *)(param_1 + 0x458) = 0;
  param_1[0x46d] = 0;
  param_1[0x46c] = 0;
  param_1[0x46b] = 0;
  param_1[0x46a] = 0;
  *(undefined1 *)(param_1 + 0x47a) = 0;
  param_1[0x45d] = 0;
  param_1[0x45c] = 0;
  param_1[0x45b] = 0;
  param_1[0x45a] = 0;
  param_1[0x459] = 0;
  *(undefined4 *)(param_1 + 0x47c) = 0;
  param_1[0x491] = 0;
  param_1[0x490] = 0;
  param_1[0x48f] = 0;
  param_1[0x48e] = 0;
  *(undefined1 *)(param_1 + 0x49e) = 0;
  param_1[0x481] = 0;
  param_1[0x480] = 0;
  param_1[0x47f] = 0;
  param_1[0x47e] = 0;
  param_1[0x47d] = 0;
  *(undefined4 *)(param_1 + 0x4a0) = 0;
  param_1[0x4b5] = 0;
  param_1[0x4b4] = 0;
  param_1[0x4b3] = 0;
  param_1[0x4b2] = 0;
  *(undefined1 *)(param_1 + 0x4c2) = 0;
  param_1[0x4a5] = 0;
  param_1[0x4a4] = 0;
  param_1[0x4a3] = 0;
  param_1[0x4a2] = 0;
  param_1[0x4a1] = 0;
  *(undefined4 *)(param_1 + 0x4c4) = 0;
  param_1[0x4d9] = 0;
  param_1[0x4d8] = 0;
  param_1[0x4d7] = 0;
  param_1[0x4d6] = 0;
  *(undefined1 *)(param_1 + 0x4e6) = 0;
  param_1[0x4c9] = 0;
  param_1[0x4c8] = 0;
  param_1[0x4c7] = 0;
  param_1[0x4c6] = 0;
  param_1[0x4c5] = 0;
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  param_1[0x4fd] = 0;
  param_1[0x4fc] = 0;
  param_1[0x4fb] = 0;
  param_1[0x4fa] = 0;
  *(undefined1 *)(param_1 + 0x50a) = 0;
  param_1[0x4ed] = 0;
  param_1[0x4ec] = 0;
  param_1[0x4eb] = 0;
  param_1[0x4ea] = 0;
  param_1[0x4e9] = 0;
  *(undefined4 *)(param_1 + 0x50c) = 0;
  param_1[0x521] = 0;
  param_1[0x520] = 0;
  param_1[0x51f] = 0;
  param_1[0x51e] = 0;
  *(undefined1 *)(param_1 + 0x52e) = 0;
  param_1[0x511] = 0;
  param_1[0x510] = 0;
  param_1[0x50f] = 0;
  param_1[0x50e] = 0;
  param_1[0x50d] = 0;
  *(undefined4 *)(param_1 + 0x530) = 0;
  param_1[0x545] = 0;
  param_1[0x544] = 0;
  param_1[0x543] = 0;
  param_1[0x542] = 0;
  *(undefined1 *)(param_1 + 0x552) = 0;
  param_1[0x535] = 0;
  param_1[0x534] = 0;
  param_1[0x533] = 0;
  param_1[0x532] = 0;
  param_1[0x531] = 0;
  *(undefined4 *)(param_1 + 0x554) = 0;
  param_1[0x569] = 0;
  param_1[0x568] = 0;
  param_1[0x567] = 0;
  param_1[0x566] = 0;
  *(undefined1 *)(param_1 + 0x576) = 0;
  param_1[0x559] = 0;
  param_1[0x558] = 0;
  param_1[0x557] = 0;
  param_1[0x556] = 0;
  param_1[0x555] = 0;
  *(undefined4 *)(param_1 + 0x578) = 0;
  param_1[0x58d] = 0;
  param_1[0x58c] = 0;
  param_1[0x58b] = 0;
  param_1[0x58a] = 0;
  *(undefined1 *)(param_1 + 0x59a) = 0;
  *(undefined4 *)(param_1 + 0x5a9) = 4;
  param_1[0x57d] = 0;
  param_1[0x57c] = 0;
  param_1[0x57b] = 0;
  param_1[0x57a] = 0;
  param_1[0x579] = 0;
  *(undefined4 *)(param_1 + 0x5a1) = 0;
  param_1[0x5a0] = 0;
  param_1[0x59f] = 0;
  param_1[0x59e] = 0;
  param_1[0x59d] = 0;
  param_1[0x59c] = 0;
  param_1[0x5a8] = 0;
  param_1[0x5a7] = 0;
  param_1[0x5a6] = 0;
  param_1[0x5a5] = 0;
  param_1[0x5a4] = 0;
  param_1[0x5a3] = 0;
  param_1[0x5a2] = 0;
  *(undefined1 *)((long)param_1 + 0x2dc4) = 0;
  *(undefined8 *)((long)param_1 + 0x2dbc) = 0;
  *(undefined8 *)((long)param_1 + 0x2db4) = 0;
  *(undefined8 *)((long)param_1 + 0x2dac) = 0;
  *(undefined8 *)((long)param_1 + 0x2da4) = 0;
  *(undefined8 *)((long)param_1 + 0x2d9c) = 0;
  *(undefined8 *)((long)param_1 + 0x2d94) = 0;
  *(undefined8 *)((long)param_1 + 0x2d8c) = 0;
  *(undefined8 *)((long)param_1 + 0x2d84) = 0;
  *(undefined8 *)((long)param_1 + 0x2d7c) = 0;
  *(undefined8 *)((long)param_1 + 0x2d74) = 0;
  *(undefined8 *)((long)param_1 + 0x2d6c) = 0;
  *(undefined8 *)((long)param_1 + 0x2d64) = 0;
  *(undefined8 *)((long)param_1 + 0x2d5c) = 0;
  *(undefined8 *)((long)param_1 + 0x2d54) = 0;
  *(undefined8 *)((long)param_1 + 0x2d4c) = 0;
  param_1[0x5b9] = 6;
  param_1[0x5ba] = 3;
  *(undefined2 *)(param_1 + 0x5bb) = 0;
  *(undefined4 *)(param_1 + 0x5be) = 0;
  *(undefined4 *)(param_1 + 0x5c2) = 0;
  *(undefined2 *)((long)param_1 + 0x2e14) = 0;
  *(undefined4 *)(param_1 + 0x5c3) = 0;
  *(undefined8 *)((long)param_1 + 0x2de2) = 0;
  *(undefined8 *)((long)param_1 + 0x2ddc) = 0;
  *(undefined8 *)((long)param_1 + 0x2e06) = 0;
  *(undefined4 *)((long)param_1 + 0x2e1c) = 0xffffffff;
  param_1[0x5c0] = 0;
  param_1[0x5bf] = 0;
  *(undefined1 *)(param_1 + 0x5c4) = 0;
  param_1[0x5c5] = 0;
  *(undefined4 *)(param_1 + 0x5c6) = 0;
  local_38 = param_3;
  FUN_01201dd0(param_1 + 0x5c7);
  uVar5 = local_38;
  param_1[0x5cf] = 0x100000001;
  *(undefined1 *)(param_1 + 0x5d0) = 0;
  param_1[0x5d4] = 0;
  *(undefined8 *)((long)param_1 + 0x2e82) = 0;
  *(undefined8 *)((long)param_1 + 0x2e8a) = 0;
  *(undefined8 *)((long)param_1 + 0x2e92) = 0;
  *(undefined4 *)((long)param_1 + 0x2e9a) = 0;
  *(undefined4 *)(param_1 + 0x5d5) = 0;
  param_1[0x5d6] = 0;
  param_1[0x5d7] = 0;
  *(undefined4 *)(param_1 + 0x5d8) = 0;
  param_1[0x5e5] = 0;
  param_1[0x5e7] = 0;
  param_1[0x5e8] = 0;
  param_1[0x5e9] = 0;
  param_1[0x5ea] = 0;
  param_1[0x5eb] = 0;
  *(undefined4 *)(param_1 + 0x5e4) = 0;
  param_1[0x5e3] = 0;
  param_1[0x5e2] = 0;
  param_1[0x5e1] = 0;
  param_1[0x5e0] = 0;
  param_1[0x5df] = 0;
  param_1[0x5de] = 0;
  param_1[0x5dd] = 0;
  param_1[0x5dc] = 0;
  param_1[0x5db] = 0;
  param_1[0x5da] = 0;
  puVar1 = PTR_DAT_0437f2d8 + 0x10;
  param_1[0x5d9] = 0;
  param_1[0x5e6] = puVar1;
  param_1[0x5f1] = 0;
  param_1[0x5f0] = 0;
  param_1[0x5ef] = 0;
  param_1[0x5ee] = 0;
  param_1[0x5ed] = 0;
  param_1[0x5ec] = puVar1;
  param_1[0x5f7] = 0;
  param_1[0x5f6] = 0;
  param_1[0x5f5] = 0;
  param_1[0x5f4] = 0;
  param_1[0x5f3] = 0;
  param_1[0x5f2] = 0;
  param_1[0x5a8] = param_2;
  *puVar11 = local_38;
  FUN_02877980(&local_60,local_38);
  uVar7 = local_60;
  local_60 = 0;
  lVar10 = param_1[0x5a2];
  param_1[0x5a2] = uVar7;
  if (lVar10 == 0) {
    param_1[0x5a5] = local_48;
  }
  else {
    FUN_028786f0(param_1 + 0x5a3);
    param_1[0x5a5] = local_48;
    uVar7 = param_1[0x5a2];
  }
  param_1[0x5a4] = local_50;
  param_1[0x5a3] = local_58;
  FUN_02879310(uVar7,uVar5);
  lVar10 = FUN_00958ac0(&local_60,*puVar11);
  FUN_02a6fcd8();
  if (lVar10 != 0) {
    lVar12 = *(long *)(lVar10 + 0x58);
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_0287793c;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar7;
    }
    piVar2 = (int *)(lVar12 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar9 = param_1 + 0x59c;
  plVar8 = (long *)*plVar9;
  *plVar9 = 0;
  if (plVar8 != (long *)0x0) {
    lVar12 = plVar8[0xb];
    piVar2 = (int *)(lVar12 + 0xc);
    do {
      iVar6 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))();
    }
  }
  *plVar9 = lVar10;
  local_60 = 0;
  lVar10 = FUN_00957dc4(&local_68,*puVar11,&local_60);
  FUN_02a6fcd8();
  if (lVar10 != 0) {
    lVar12 = *(long *)(lVar10 + 0x58);
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_0287793c;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar7;
    }
    piVar2 = (int *)(lVar12 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar9 = (long *)param_1[0x59d];
  param_1[0x59d] = 0;
  if (plVar9 != (long *)0x0) {
    lVar12 = plVar9[0xb];
    piVar2 = (int *)(lVar12 + 0xc);
    do {
      iVar6 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
    }
  }
  param_1[0x59d] = lVar10;
  local_60 = 0;
  lVar10 = FUN_00957dc4(&local_68,param_1[1],&local_60);
  FUN_02a6fcd8();
  if (lVar10 != 0) {
    lVar12 = *(long *)(lVar10 + 0x58);
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_0287793c;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar7;
    }
    piVar2 = (int *)(lVar12 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar9 = (long *)param_1[0x59e];
  param_1[0x59e] = 0;
  if (plVar9 != (long *)0x0) {
    lVar12 = plVar9[0xb];
    piVar2 = (int *)(lVar12 + 0xc);
    do {
      iVar6 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
    }
  }
  param_1[0x59e] = lVar10;
  local_60 = 0;
  lVar10 = FUN_00957dc4(&local_68,param_1[1],&local_60);
  FUN_02a6fcd8();
  if (lVar10 != 0) {
    lVar12 = *(long *)(lVar10 + 0x58);
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_0287793c;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar7;
    }
    piVar2 = (int *)(lVar12 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar9 = (long *)param_1[0x59f];
  param_1[0x59f] = 0;
  if (plVar9 != (long *)0x0) {
    lVar12 = plVar9[0xb];
    piVar2 = (int *)(lVar12 + 0xc);
    do {
      iVar6 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
    }
  }
  param_1[0x59f] = lVar10;
  local_60 = 0;
  lVar10 = FUN_00957dc4(&local_68,param_1[1],&local_60);
  FUN_02a6fcd8();
  if (lVar10 != 0) {
    lVar12 = *(long *)(lVar10 + 0x58);
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
LAB_0287793c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar7;
    }
    piVar2 = (int *)(lVar12 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar9 = (long *)param_1[0x5a0];
  param_1[0x5a0] = 0;
  if (plVar9 != (long *)0x0) {
    lVar12 = plVar9[0xb];
    piVar2 = (int *)(lVar12 + 0xc);
    do {
      iVar6 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
    }
  }
  puVar1 = PTR_DAT_0437b160;
  param_1[0x5a0] = lVar10;
  FUN_02877a88(&local_60,*(undefined8 *)(*(long *)puVar1 + 0x348));
  plVar9 = (long *)param_1[0x5e5];
  param_1[0x5e5] = 0;
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    piVar2 = (int *)(lVar10 + 0xc);
    do {
      iVar6 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
    }
  }
  param_1[0x5e5] = local_60;
  FUN_00d3fa2c();
  FUN_02877b00(&local_60,*(undefined8 *)(*(long *)PTR_DAT_04379ff8 + 0xa8));
  plVar9 = (long *)param_1[9];
  param_1[9] = 0;
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    piVar2 = (int *)(lVar10 + 0xc);
    do {
      iVar6 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
    }
  }
  *(undefined4 *)(param_1 + 0x5a9) = 4;
  param_1[9] = local_60;
  *(undefined1 *)((long)param_1 + 0x2dc4) = 0;
  *(undefined8 *)((long)param_1 + 0x2dbc) = 0;
  *(undefined8 *)((long)param_1 + 0x2db4) = 0;
  *(undefined8 *)((long)param_1 + 0x2dac) = 0;
  *(undefined8 *)((long)param_1 + 0x2da4) = 0;
  *(undefined8 *)((long)param_1 + 0x2d9c) = 0;
  *(undefined8 *)((long)param_1 + 0x2d94) = 0;
  *(undefined8 *)((long)param_1 + 0x2d8c) = 0;
  *(undefined8 *)((long)param_1 + 0x2d84) = 0;
  *(undefined8 *)((long)param_1 + 0x2d7c) = 0;
  *(undefined8 *)((long)param_1 + 0x2d74) = 0;
  *(undefined8 *)((long)param_1 + 0x2d6c) = 0;
  *(undefined8 *)((long)param_1 + 0x2d64) = 0;
  *(undefined8 *)((long)param_1 + 0x2d5c) = 0;
  *(undefined8 *)((long)param_1 + 0x2d54) = 0;
  *(undefined8 *)((long)param_1 + 0x2d4c) = 0;
  param_1[0x5b9] = 6;
  *(undefined4 *)(param_1 + 0x5ba) = 3;
  local_60 = 0x88f8642ef3164c28;
  local_58 = "ui_common_particle";
  local_50 = 0x12;
  local_48 = (long *)0x0;
  FUN_0098f270(&local_68,local_38,&local_60);
  plVar9 = (long *)param_1[0x5f3];
  param_1[0x5f3] = 0;
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    piVar2 = (int *)(lVar10 + 0xc);
    do {
      iVar6 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
    }
  }
  uVar7 = local_68;
  local_68 = 0;
  param_1[0x5f3] = uVar7;
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  FUN_02877b80(&local_60,local_38,&local_38);
  uVar7 = local_60;
  local_60 = 0;
  lVar10 = param_1[0x5f4];
  param_1[0x5f4] = uVar7;
  if (lVar10 != 0) {
    FUN_00d3c348(param_1 + 0x5f5);
  }
  param_1[0x5f6] = local_50;
  param_1[0x5f7] = local_48;
  param_1[0x5f5] = local_58;
  plVar9 = (long *)*puVar11;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar9;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
  lVar10 = (**(code **)(*plVar9 + 0x10))(plVar9,0x80,8);
  if (lVar10 == 0) {
    (**(code **)(*plVar9 + 0xb8))(plVar9);
                    /* WARNING: Subroutine does not return */
    FUN_008a93d8(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_008a93d8();
}


