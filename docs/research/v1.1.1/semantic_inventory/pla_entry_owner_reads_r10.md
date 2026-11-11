# PLA 1.1.1 R10 — Owner +0x140 to entry +0x20 alias audit

R10 is a lexical triage of pinned original Ghidra C, not runtime proof.

Original ELF SHA-256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
Source C count: 82731

## Counts

- candidates_functions: 4
- literal_140: 928
- loads_functions: 158
- stores_functions: 139

## Candidate same-variable reads

### FUN_00195d4c

derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/00/00195d4c.c

Status: C_SAME_VARIABLE_ALIAS_CANDIDATE
- line 1081: lVar27 = *(long *)(param_1 + 0x140);
  - Subsequent same-variable accesses: add_0x20
- line 1116: lVar27 = *(long *)(param_1 + 0x140);
  - Subsequent same-variable accesses: add_0x20

### FUN_00838bc0

derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/00/00838bc0.c

Status: C_SAME_VARIABLE_ALIAS_CANDIDATE
- line 27: lVar13 = *(long *)(param_1 + 0x140);
  - Subsequent same-variable accesses: add_0x20, add_0x42
  - call at 35: FUN_0083eb68(lVar6,lVar13 + 0x20);
  - call at 42: (lVar11 = *(long *)(lVar13 + 0x10), lVar6 = FUN_0083fd98(lVar6 + 0x1b8), lVar11 == lVar6)
  - call at 51: lVar6 = FUN_008372b8(param_1,*(undefined8 *)(lVar13 + 0x10),*(undefined2 *)(lVar13 + 0x18),
  - call at 57: FUN_00825c28(lVar6,lVar13 + 0x50);

### FUN_019382e8

derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/019382e8.c

Status: C_SAME_VARIABLE_ALIAS_CANDIDATE
- line 57: lVar10 = *(long *)(param_1 + 0x140);
  - Subsequent same-variable accesses: add_0x20, add_0x58
  - call at 132: lVar10 = FUN_0193c0a8(param_1,1);
  - call at 134: FUN_0193c824(param_1 + 0x1f8,*(undefined4 *)(lVar10 + 0x10),*(undefined2 *)(lVar10 + 0x14));
  - call at 142: lVar10 = FUN_0193c0a8(param_1,0);
  - call at 144: FUN_0193c824(param_1 + 0x1c8,*(undefined4 *)(lVar10 + 0x10),*(undefined2 *)(lVar10 + 0x14));

### FUN_0302f5b4

derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/03/0302f5b4.c

Status: C_SAME_VARIABLE_ALIAS_CANDIDATE
- line 578: lVar20 = *(long *)(param_1 + 0x140);
  - Subsequent same-variable accesses: add_0x20, add_0x58
  - call at 664: lVar20 = FUN_0333d16c(0,1);
  - call at 693: lVar20 = FUN_0333d16c(0,1);


## Owner pointer field stores

### FUN_0174ac74
- 336: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 343: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 399: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 405: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 461: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 467: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 523: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 529: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 585: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 591: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 647: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 653: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);

### FUN_02073b74
- 336: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 343: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 399: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 405: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 461: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 467: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 523: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 529: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 585: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 591: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 647: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 653: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);

### FUN_0211a204
- 336: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 343: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 399: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 405: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 461: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 467: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 523: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 529: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 585: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 591: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 647: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 653: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);

### FUN_02343154
- 336: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 343: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 399: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 405: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 461: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 467: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 523: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 529: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 585: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 591: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 647: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
- 653: *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);

### FUN_02e0d018
- 192: *(undefined8 *)(param_1 + 0x140) = 0;

### FUN_0052d5e4
- 287: *(undefined8 *)(param_1 + 0x140) = 0;
- 299: *(ulong *)(param_1 + 0x140) = uVar21;
- 303: *(ulong *)(param_1 + 0x140) = uVar21;

### FUN_02b3a924
- 244: *(long *)(param_1 + 0x140) = lVar29;
- 357: *(ulong *)(param_1 + 0x140) = lVar20 + uVar25 * 0xc;

### FUN_02bc8af0
- 121: *(undefined8 *)(param_1 + 0x140) = 0;

### FUN_0318f5c0
- 73: *(long *)(param_1 + 0x140) = lVar20;

### FUN_01b2aa30
- 268: *(undefined8 *)(param_1 + 0x140) = 0;
- 285: *(undefined8 *)(param_2 + 0x140) = 0;
- 287: *(undefined8 *)(param_1 + 0x140) = uVar7;

### FUN_01b34b24
- 208: *(long *)(param_1 + 0x140) = lVar8;

### FUN_001c3964
- 385: *(ulong *)(param_1 + 0x140) = uVar36;
- 396: *(undefined8 *)(param_1 + 0x140) = uVar59;

### FUN_00246a94
- 88: *(undefined8 *)(param_2 + 0x140) = local_c0;
- 164: *(undefined8 *)(param_2 + 0x140) = local_c0;
- 222: *(undefined8 *)(param_2 + 0x140) = local_c0;
- 244: *(undefined8 *)(param_2 + 0x140) = local_70;

### FUN_00259414
- 118: *(undefined8 *)(param_2 + 0x140) = local_40;
- 124: *(undefined8 *)(param_2 + 0x140) = local_60;

### FUN_028f14e0
- 44: *(undefined8 *)(param_1 + 0x140) = 0;

### FUN_02b22e7c
- 69: *(undefined8 *)(param_1 + 0x140) = 0;

### FUN_02e0b9fc
- 35: *(long *)(param_1 + 0x140) = lVar4;

### FUN_03199240
- 66: *(undefined8 *)(param_1 + 0x140) = uVar5;

### FUN_03385ef8
- 115: *(undefined8 *)(param_1 + 0x140) = 0;

### FUN_01b30490
- 92: *(undefined8 *)(param_1 + 0x140) = 0;

### FUN_0010bc10
- 61: *(undefined8 *)(param_1 + 0x140) = 0;

### FUN_0014ee60
- 67: *(long *)(lVar1 + 0x140) = lVar1 + 0x128;

### FUN_001c120c
- 35: *(long *)(param_1 + 0x140) = auVar8._0_8_;
- 114: *(undefined8 *)(param_1 + 0x140) = auVar5._0_8_;

### FUN_001c3678
- 69: *(undefined8 *)(param_1 + 0x140) = 0;

### FUN_001fcf00
- 21: *(undefined8 *)(param_1 + 0x140) = 0;

### FUN_0023bd74
- 83: *(undefined8 *)(lVar6 + 0x140) = *(undefined8 *)(puVar2 + 1);

### FUN_0023d43c
- 145: *(undefined8 *)(lVar13 + 0x140) = *(undefined8 *)((long)puVar15 + 4);

### FUN_0024d08c
- 29: *(undefined8 *)(param_1 + 0x140) = 0;

### FUN_00263e74
- 58: *(undefined8 *)(param_2 + 0x140) = local_80;

### FUN_0026d2ac
- 375: *(long *)(param_1 + 0x140) = lVar9;

### FUN_0027eaa0
- 76: *(long *)(lVar4 + 0x140) = lVar4 + 0x70;

### FUN_00293684
- 39: *(undefined8 *)(param_1 + 0x140) = uStack_48;

### FUN_002977c4
- 39: *(undefined8 *)(param_1 + 0x140) = uStack_48;

### FUN_0029bd54
- 39: *(undefined8 *)(param_1 + 0x140) = uStack_48;

### FUN_0029ded4
- 39: *(undefined8 *)(param_1 + 0x140) = uStack_48;

### FUN_002a0058
- 39: *(undefined8 *)(param_1 + 0x140) = uStack_48;

### FUN_002a32c8
- 39: *(undefined8 *)(param_1 + 0x140) = uStack_48;

### FUN_002ddac4
- 39: *(undefined8 *)(param_1 + 0x140) = uStack_48;

### FUN_003e72b4
- 61: *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;

### FUN_003e73bc
- 48: *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + -1;

### FUN_004180f0
- 38: *(undefined8 *)(param_1 + 0x140) = 0;
- 43: *(undefined8 *)(param_1 + 0x140) = 0;

### FUN_004ccc20
- 40: *(long *)(lVar3 + 0x140) = lVar4;

### FUN_004e1da0
- 77: *(undefined8 *)(param_1 + 0x140) = 0;

### FUN_0053d1f0
- 340: *(long *)(param_1 + 0x140) = param_1 + 0x8c8;

### FUN_00592f30
- 22: *(undefined8 *)(param_1 + 0x140) = uVar2;

### FUN_00605630
- 120: *(undefined8 *)(lVar9 + 0x140) = param_5;

### FUN_00623338
- 39: *(undefined8 *)(param_1 + 0x140) = uStack_48;

### FUN_00646c04
- 85: *(undefined8 *)(param_1 + 0x140) = 0;

### FUN_0064f6b8
- 39: *(undefined8 *)(param_1 + 0x140) = uStack_48;

### FUN_00653308
- 39: *(undefined8 *)(param_1 + 0x140) = uStack_48;

### FUN_0065a734
- 88: *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x3a);

### FUN_00679ae4
- 39: *(undefined8 *)(param_1 + 0x140) = uStack_48;

### FUN_0067bc94
- 39: *(undefined8 *)(param_1 + 0x140) = uStack_48;

### FUN_00680828
- 39: *(undefined8 *)(param_1 + 0x140) = uStack_48;

### FUN_006efc74
- 39: *(undefined8 *)(param_1 + 0x140) = uStack_48;

### FUN_006faef4
- 39: *(undefined8 *)(param_1 + 0x140) = uStack_48;

### FUN_00700128
- 39: *(undefined8 *)(param_1 + 0x140) = uStack_48;

### FUN_00703430
- 39: *(undefined8 *)(param_1 + 0x140) = uStack_48;

### FUN_0078b308
- 39: *(undefined8 *)(param_1 + 0x140) = uStack_48;

### FUN_0078d798
- 39: *(undefined8 *)(param_1 + 0x140) = uStack_48;

### FUN_0078fc2c
- 39: *(undefined8 *)(param_1 + 0x140) = uStack_48;

### FUN_00792838
- 39: *(undefined8 *)(param_1 + 0x140) = uStack_48;

### FUN_007e7878
- 83: *(ulong *)(param_1 + 0x140) = *(ulong *)(param_1 + 0xc0) ^ uVar6;

### FUN_0083ca64
- 21: *(undefined8 *)(param_1 + 0x140) = 0;

### FUN_0085929c
- 12: *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);

### FUN_008592ec
- 33: *(undefined8 *)(param_1 + 0x140) = 0x20;

### FUN_008cca50
- 102: *(undefined8 *)(puVar3 + 0x140) = 0;

### FUN_00960668
- 408: *(undefined8 *)(param_1 + 0x140) = 0;
- 424: *(long *)(param_1 + 0x140) = lVar9;

### FUN_009612e0
- 187: *(undefined8 *)(param_1 + 0x140) = 0;

### FUN_00996460
- 442: *(long *)(param_3 + 0x140) = *(long *)(param_3 + 0x140) + 0x60;

### FUN_00996f94
- 193: *(long *)(param_3 + 0x140) = *(long *)(param_3 + 0x140) + 0x60;

### FUN_00d3fa2c
- 106: *(undefined8 *)(lVar4 + 0x140) = 0x70;

### FUN_00dcfaf4
- 968: if (*(char *)(lVar13 + 0x140) == '\0') goto LAB_00dd0c4c;

### FUN_00f28384
- 1134: if (*(char *)(lVar12 + 0x140) == '\0') goto LAB_00f298d0;

### FUN_01034fbc
- 1267: if (*(char *)(lVar13 + 0x140) == '\0') goto LAB_010367d4;

### FUN_0107d6a8
- 61: *(undefined8 *)(param_1 + 0x140) = uVar10;

### FUN_011ce40c
- 51: *(undefined8 *)(lVar1 + 0x140) = local_c0;

### FUN_011fb094
- 7: *(undefined8 *)(param_1 + 0x140) = 0;

### FUN_0120678c
- 107: *(undefined8 *)(param_1 + 0x140) = 0;
- 119: *(undefined8 *)(param_1 + 0x140) = uVar2;

### FUN_0124ff60
- 20: *(undefined8 *)(lVar1 + 0x140) = 0;

### FUN_0125484c
- 20: *(undefined8 *)(lVar1 + 0x140) = 0;

### FUN_012707ac
- 21: *(undefined8 *)(lVar1 + 0x140) = 0;

### FUN_01324e00
- 153: *(undefined8 *)(param_2 + 0x140) = 0;
- 162: *(undefined8 *)(param_2 + 0x140) = local_68;

### FUN_013cad18
- 23: *(undefined8 *)(lVar1 + 0x140) = 0;

### FUN_013e98a0
- 114: *(undefined8 *)(param_1 + 0x140) = 0;

### FUN_0143ac78
- 151: *(long *)(param_1 + 0x140) = param_2[0xb];

### FUN_01443720
- 151: *(undefined8 *)(param_1 + 0x140) = 0;

### FUN_0145b0c8
- 1086: *(undefined8 *)(param_1 + 0x140) = 0xffffffffffffffff;

### FUN_016b7f10
- 90: *(undefined8 *)(param_1 + 0x140) = 0;
- 109: *(undefined8 *)(param_1 + 0x140) = local_d8;

### FUN_01701494
- 956: if (*(char *)(lVar11 + 0x140) == '\0') goto LAB_01702604;

### FUN_017deacc
- 2970: *(undefined8 *)(param_1 + 0x140) = 0;

### FUN_019c9384
- 65: *(undefined8 *)(param_2 + 0x140) = 0;

### FUN_01a71028
- 115: *(undefined8 *)(lVar12 + 0x140) = 0;

### FUN_01dc2f04
- 258: *(ulong *)(param_1 + 0x140) = CONCAT44(uVar18,uVar16);

### FUN_01e3fbdc
- 110: *(undefined8 *)(lVar15 + 0x140) = 0;

### FUN_01f1ba38
- 545: *(ulong *)(lVar15 + 0x140) = local_d8;

### FUN_0227fa94
- 969: if (*(char *)(lVar12 + 0x140) == '\0') goto LAB_02280c18;

### FUN_02304544
- 972: if (*(char *)(lVar12 + 0x140) == '\0') goto LAB_0230569c;

### FUN_0259d910
- 1688: *(ulong *)(param_1 + 0x140) = CONCAT44(fStack_15c + fVar70,local_160 + fVar66);

### FUN_0259f730
- 65: *(undefined8 *)(param_1 + 0x140) = 0;

### FUN_0272693c
- 224: *(undefined8 *)(lVar4 + 0x140) = 0x70;

### FUN_027c564c
- 75: *(undefined8 *)(lVar8 + 0x140) = uVar1;

### FUN_027f89f4
- 49: *(undefined8 *)(param_1 + 0x140) = 0;
- 146: *(undefined8 *)(param_1 + 0x140) = 0;

### FUN_0289ad50
- 238: *(undefined8 *)(param_5 + 0x140) = uVar18;

### FUN_028f03dc
- 96: *(undefined8 *)(param_1 + 0x140) = 0;

### FUN_02926f8c
- 296: *(undefined8 *)(param_1 + 0x140) = local_b0;

### FUN_02941260
- 62: *(undefined8 *)(param_1 + 0x140) = 0x1f0000001f;

### FUN_02a69b58
- 47: if (*(long *)(param_1 + 0x140) == *(long *)(param_1 + 0x148)) break;

### FUN_02ae991c
- 97: *(undefined8 *)(DAT_043ef568 + 0x140) = 0x1f;
- 109: *(undefined8 *)(lVar14 + 0x140) = 0x1f;

### FUN_02b64be8
- 815: *(ulong *)(param_5 + 0x140) = *(long *)(param_5 + 0x138) + uVar76 * 4;

### FUN_02bac564
- 70: *(undefined8 *)(lVar9 + 0x140) = 0;

### FUN_02bbd4cc
- 217: *(ulong *)(lVar12 + 0x140) = CONCAT44(fVar59,fVar58);

### FUN_02bbda10
- 113: *(undefined8 *)(lVar23 + 0x140) = 0;

### FUN_02bc7a40
- 124: *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;

### FUN_02c95f80
- 23: *(undefined8 *)(lVar5 + 0x140) = *param_2;

### FUN_02dda8f4
- 985: *(undefined8 *)(lVar40 + 0x140) = *(undefined8 *)(piVar6 + 10);

### FUN_02deacf0
- 115: *(undefined8 *)(param_1 + 0x140) = 0;

### FUN_02deb5b8
- 84: *(undefined8 *)(param_1 + 0x140) = 0;

### FUN_02dfd5a0
- 126: *(undefined8 *)(param_1 + 0x140) = 0;

### FUN_02dfe2dc
- 160: *(ulong *)(param_1 + 0x140) = CONCAT44(fVar44,fVar27);

### FUN_02e478e4
- 55: *(undefined8 *)(param_1 + 0x140) = 0;

### FUN_02e4a2ac
- 54: *(undefined8 *)(param_4 + 0x140) = uVar1;

### FUN_02f95a44
- 1555: *(undefined8 *)(param_1 + 0x140) = auVar55._0_8_;

### FUN_02f9729c
- 918: *(undefined8 *)(param_2 + 0x140) = auVar33._0_8_;
- 1075: *(undefined8 *)(param_2 + 0x140) = local_d0;

### FUN_02f9837c
- 801: *(undefined8 *)(param_2 + 0x140) = auVar39._0_8_;
- 907: *(undefined8 *)(param_2 + 0x140) = local_e0;

### FUN_02fd60b8
- 100: (*(long **)(lVar12 + 8),2,*(char *)(param_1 + 0x140) == '\0',local_68,local_a0);

### FUN_030110d8
- 341: *(long *)(param_1 + 0x140) = auVar32._0_8_;

### FUN_0301b3b4
- 204: *(undefined8 *)(puVar8 + 0x140) = 0;

### FUN_03196e74
- 155: *(undefined8 *)(param_1 + 0x140) = 0;

### FUN_031c039c
- 46: *(undefined8 *)(param_1 + 0x140) = 0;
- 50: *(long *)(param_1 + 0x140) = lVar5;

### FUN_031f2adc
- 119: *(undefined8 *)(param_1 + 0x140) = local_70;
- 154: *(undefined8 *)(param_1 + 0x140) = 0;
- 185: *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_1 + 0x40);

### FUN_031ffcd0
- 250: *(undefined8 *)(lVar50 + 0x140) = 0;

### FUN_03259ff4
- 643: *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);

### FUN_032a6120
- 21: *(ulong *)(param_1 + 0x140) = local_38;

### FUN_032a61d4
- 18: *(undefined8 *)(param_1 + 0x140) = 0;

### FUN_032a6744
- 27: *(ulong *)(param_1 + 0x140) = local_28;

### FUN_0332e590
- 22: *(undefined8 *)(param_1 + 0x140) = 0;

### FUN_03338cb8
- 13: *(long *)(param_1 + 0x140) = param_1 + 0x150;

### FUN_03370fa8
- 962: *(undefined8 *)(lVar17 + 0x140) = 0;
- 1035: *(long *)(lVar17 + 0x140) = lVar69;


## Limits

- Matches do not prove object type, lifetime or absence of variable overwrite.
- A decompiler may represent entry pointer access as indirect calls, inline code or array indices.
- No original ELF, DB, Ghidra project, or game state modified.

Require native ARM64 LDR chain or read-only guest memory parity before promoting any function to confirmed GenerateSeed consumer.
