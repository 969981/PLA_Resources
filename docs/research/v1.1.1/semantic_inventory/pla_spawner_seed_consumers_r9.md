# PLA 1.1.1 — R9 GenerateSeed consumer audit

Static audit only. No original native game parity is claimed.

- Original ELF SHA-256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
- Original C bodies: 82731
- Candidate count: 25

## Direct decompiler call references

- `FUN_009273d4`: `FUN_0088103c`, `FUN_008c9178`, `FUN_008d3234`, `FUN_0091c398`
- `FUN_00db854c`: `FUN_00be70f0`, `FUN_00bff090`, `FUN_00c36160`, `FUN_00c36450`, `FUN_00c37080`, `FUN_00c46e60`, `FUN_00c481b0`, `FUN_00c4c550`, `FUN_019e2920`, `FUN_01e8a110`, `FUN_01ebf320`, `FUN_01f0eab0`, `FUN_025ff490`
- `FUN_01094470`: `FUN_01bb3778`, `FUN_01c521e4`
- `FUN_01930680`: `FUN_0192d274`
- `FUN_01931c40`: `FUN_0192d274`
- `FUN_01b54e58`: `FUN_01b54e4c`, `FUN_01bab534`
- `FUN_01b55130`: `FUN_01b54fa0`
- `FUN_01b56418`: `FUN_01b54e58`
- `FUN_01b56688`: `FUN_01c521e4`
- `FUN_01b56acc`: `FUN_01c521e4`
- `FUN_01b570cc`: `FUN_01b54e58`
- `FUN_01bacefc`: `FUN_01b56418`
- `FUN_01bad050`: `FUN_01b56418`
- `FUN_01bb3778`: `FUN_01bbe470`

## Source offset trait matches

- both_metadata_fields: 48
- entry_layout: 28
- same_spawner_and_status: 7
- some_typed_memory_reads: 6154

## Ranked candidates

| Function | Score | Same spawner | Eight flags | Entry stride | Meta pair | Potential direct reads |
|---|---:|---|---:|---|---|---|
| FUN_01b56418 | 125 | True | 7 | True | True | 0x408 |
| FUN_01bfe800 | 109 | True | 2 | True | True | 0x20, 0x400, 0x408, 0x58 |
| FUN_007e9304 | 69 | False | 4 | True | True |  |
| FUN_01bab8f4 | 60 | True | 7 | False | False |  |
| FUN_0295a8cc | 55 | True | 0 | True | False |  |
| FUN_01bab534 | 48 | True | 0 | False | False |  |
| FUN_003dba34 | 45 | False | 7 | True | False |  |
| FUN_01bd2fd0 | 45 | False | 0 | True | False | 0x20, 0x58 |
| FUN_0299e034 | 45 | False | 6 | True | False |  |
| FUN_01c521e4 | 34 | False | 0 | False | False |  |
| FUN_01bb3778 | 32 | False | 0 | False | False |  |
| FUN_0192d274 | 25 | False | 0 | False | False |  |
| FUN_01bbe470 | 21 | False | 0 | False | False |  |
| FUN_01b54e58 | 18 | False | 0 | False | False |  |
| FUN_01094470 | 14 | False | 0 | False | False |  |
| FUN_01930680 | 14 | False | 0 | False | False |  |
| FUN_01b55130 | 10 | False | 0 | False | False |  |
| FUN_01b56688 | 10 | False | 0 | False | False |  |
| FUN_01b56acc | 10 | False | 0 | False | False |  |
| FUN_01b570cc | 10 | False | 0 | False | False |  |
| FUN_01bacefc | 10 | False | 0 | False | False |  |
| FUN_01bad050 | 10 | False | 0 | False | False |  |
| FUN_01931c40 | 5 | False | 0 | False | False | 0x58 |
| FUN_009273d4 | 0 | False | 0 | False | False |  |
| FUN_00db854c | 0 | False | 0 | False | False |  |

## Excerpts for prioritized functions

### FUN_01b56418

derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01b56418.c

- body line 19: `if (*(long *)(param_1 + 0x4c8) != 0) {`
- body line 36: `lVar9 = 0x20;`
- body line 68: `*(int *)(*(long *)(param_1 + 0x4c8) + 0x418) = iVar3;`
- body line 69: `lVar9 = *(long *)(param_1 + 0x4c8);`
- body line 70: `iVar3 = (*(byte *)(lVar9 + 0xc3) ^ 1) + (*(byte *)(lVar9 + 0x43) ^ 1) +`
- body line 71: `(*(byte *)(lVar9 + 0x143) ^ 1) + (*(byte *)(lVar9 + 0x1c3) ^ 1) +`
- body line 72: `(*(byte *)(lVar9 + 0x243) ^ 1) + (*(byte *)(lVar9 + 0x2c3) ^ 1) +`
- body line 75: `uVar8 = *(ulong *)(lVar9 + 0x408);`
- body line 78: `if (*(byte *)(lVar9 + 0x43) == 0) goto LAB_01b565e8;`
- body line 84: `*(ulong *)(lVar9 + lVar4 + 0x20) = uVar8 + uVar6;`
- body line 88: `*(ulong *)(*(long *)(param_1 + 0x4c8) + lVar4 + 0x58) = uVar10 + uVar11;`
- body line 89: `*(undefined1 *)(*(long *)(param_1 + 0x4c8) + lVar4 + 0x43) = 0;`
- body line 90: `*(undefined1 *)(*(long *)(param_1 + 0x4c8) + lVar4 + 0x42) = 0;`

### FUN_01bfe800

derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01bfe800.c

- body line 28: `lVar9 = *(long *)(param_2 + 0x20);`
- body line 38: `param_1[0xb] = *(long *)(param_2 + 0x58);`
- body line 59: `param_1[0x20] = *(long *)(param_2 + 0x100);`
- body line 71: `lVar7 = *(long *)(param_2 + 0x140);`
- body line 119: `param_1[0x43] = lVar9;`
- body line 146: `param_1[0x58] = *(long *)(param_2 + 0x2c0);`
- body line 196: `param_1[0x80] = *(long *)(param_2 + 0x400);`
- body line 197: `param_1[0x81] = *(long *)(param_2 + 0x408);`
- body line 199: `param_1[0x83] = *(long *)(param_2 + 0x418);`
- body line 224: `param_1[0x99] = *(long *)(param_2 + 0x4c8);`
- body line 274: `param_1[0xc3] = *(long *)(param_2 + 0x618);`
- body line 303: `param_1[0xde] = *(long *)(param_2 + 0x6f0);`
- body line 404: `param_1[0x140] = *(long *)(param_2 + 0xa00);`

### FUN_007e9304

derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/00/007e9304.c

- body line 22: `FUN_007ed380(lVar1 + 0x10,*(undefined4 *)(param_2 + 0x20));`
- body line 35: `FUN_007ed3c0(lVar1 + 0x20,*(undefined1 *)(param_2 + 0x30));`
- body line 54: `FUN_007ed3c0(lVar1 + 0x33,*(undefined1 *)(param_2 + 0x43));`
- body line 70: `FUN_007ed3c0(lVar1 + 0x43,*(undefined1 *)(param_2 + 0x53));`
- body line 75: `FUN_007ed3c0(lVar1 + 0x48,*(undefined1 *)(param_2 + 0x58));`
- body line 91: `FUN_007ed3c0(lVar1 + 0x58,*(undefined1 *)(param_2 + 0x68));`
- body line 168: `FUN_007ed3c0(lVar1 + 0xb2,*(undefined1 *)(param_2 + 0xc3));`
- body line 185: `FUN_007ed3c0(lVar1 + 0xc3,*(undefined1 *)(param_2 + 0xd4));`
- body line 293: `FUN_007ed3c0(lVar1 + 0x12f,*(undefined1 *)(param_2 + 0x140));`
- body line 296: `FUN_007ed3c0(lVar1 + 0x132,*(undefined1 *)(param_2 + 0x143));`
- body line 310: `FUN_007ed3c0(lVar1 + 0x140,*(undefined1 *)(param_2 + 0x151));`
- body line 313: `FUN_007ed3c0(lVar1 + 0x143,*(undefined1 *)(param_2 + 0x154));`
- body line 655: `FUN_007ed380(lVar1 + 0x3d4,*(undefined4 *)(param_2 + 0x400));`

### FUN_01bab8f4

derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01bab8f4.c

- body line 99: `(**(code **)(*plVar23 + 0x20))(plVar23);`
- body line 112: `lVar17 = *(long *)(lVar17 + 0x4c8);`
- body line 113: `if (*(char *)(lVar17 + 0x43) == '\0' && *(char *)(lVar17 + 0x42) == '\0') {`
- body line 116: `if (*(char *)(lVar17 + 0xc3) == '\0' && *(char *)(lVar17 + 0xc2) == '\0') {`
- body line 119: `if (*(char *)(lVar17 + 0x143) == '\0' && *(char *)(lVar17 + 0x142) == '\0') {`
- body line 125: `if (*(char *)(lVar17 + 0x243) == '\0' && *(char *)(lVar17 + 0x242) == '\0') {`
- body line 181: `FUN_008802f0(&local_138,*(long *)(lVar17 + 0x58) + 0x58);`
- body line 338: `(**(code **)(*plVar26 + 0x20))(plVar26);`
- body line 355: `(**(code **)(*plVar21 + 0x20))(plVar21);`
- body line 372: `(**(code **)(*plVar23 + 0x20))(plVar23);`
- body line 636: `(**(code **)(*(long *)(lVar17 + -0x50) + 0x20))((long *)(lVar17 + -0x50));`
- body line 755: `plVar21 = *(long **)(*(long *)(lVar17 + 0x58) + uVar20 * 8);`
- body line 826: `plVar22 = *(long **)(plVar21[0x20] + uVar20 * 8);`

### FUN_0295a8cc

derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/02/0295a8cc.c

- body line 165: `puVar10[0x20] = 0;`
- body line 272: `puVar10 = (undefined8 *)(**(code **)(*plVar19 + 0x10))(plVar19,0x4c8,8);`
- body line 294: `uVar21 = 0x4c8;`
- body line 449: `*(undefined8 *)(lVar12 + 0x58) = 0;`
- body line 454: `*(undefined8 *)(lVar12 + 0x20) = 0;`
- body line 463: `lVar18 = lVar18 + 0x20;`
- body line 745: `uVar24 = param_1[0x20];`
- body line 782: `param_1[0x20] = uVar17;`
- body line 1322: `puVar10 = (undefined8 *)(**(code **)(*plVar19 + 0x10))(plVar19,0x20,4);`
- body line 1349: `uVar21 = 0x20;`
- body line 1409: `*(undefined8 *)(lVar8 + 0x58) = 0;`
- body line 1414: `*(undefined8 *)(lVar8 + 0x20) = 0;`
- body line 1493: `*(undefined8 *)(lVar23 + 0x20) = 0;`

### FUN_01bab534

derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01bab534.c

- body line 89: `(**(code **)(*plVar13 + 0x20))(plVar13);`
- body line 132: `lVar16 = (char)plVar13[0x20] + lVar16 + -1;`
- body line 146: `(**(code **)(*plVar13 + 0x20))(plVar13);`
- body line 158: `if (*(long *)(lVar9 + 0x4c8) != 0) {`
- body line 159: `*(int *)(*(long *)(lVar9 + 0x4c8) + 0x418) = iVar2;`
- body line 166: `lVar9 = *(long *)(lVar16 + 0x4c8) + lVar17 * 0x80;`
- body line 167: `pcVar18 = (char *)(lVar9 + 0x43);`
- body line 204: `(**(code **)(*plVar13 + 0x20))(plVar13);`

### FUN_003dba34

derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/00/003dba34.c

- body line 55: `*(undefined4 *)(param_1 + 0x20) = 0;`
- body line 391: `param_1[0x43] = 0;`
- body line 459: `*(undefined4 *)(param_1 + 0x216) = 0x58;`
- body line 504: `param_1[0xc3] = puVar3;`
- body line 568: `param_1[0x243] = puVar3;`
- body line 633: `param_1[0x2b5] = param_1 + 0x43;`
- body line 674: `*(undefined4 *)(param_1 + 0xc6) = 0x20;`
- body line 837: `param_1[0x582] = 0x20;`
- body line 934: `param_1[0x58] = 0;`
- body line 939: `*(undefined4 *)(param_1 + 0x198) = 0x43;`
- body line 1358: `param_1[0x6e0] = 0x43;`
- body line 1702: `param_1[0x143] = 0;`
- body line 1713: `*(undefined4 *)(param_1 + 0x140) = 0;`

### FUN_01bd2fd0

derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01bd2fd0.c

- body line 46: `FUN_01a0372c(&local_88,param_2 + 0x20);`
- body line 130: `param_1[0x58] = puVar7 + 0x10;`
- body line 148: `(lVar12 = *(long *)(lVar17 + 0x20), *(long *)(lVar17 + 0x20) == 0)) {`
- body line 149: `*(long *)(lVar17 + 0x20) = DAT_043f1798;`
- body line 164: `param_1[0x58] = &PTR_LAB_04245be8;`
- body line 203: `(lVar12 = *(long *)(lVar17 + 0x20), *(long *)(lVar17 + 0x20) == 0)) {`
- body line 204: `*(long *)(lVar17 + 0x20) = DAT_043f1798;`
- body line 226: `lVar18 = *(long *)(lVar18 + 0x58);`
- body line 253: `param_1[0x73] = *(undefined8 *)(param_2 + 0x58);`
- body line 261: `(**(code **)(*plVar15 + 0x20))();`
- body line 290: `*(undefined1 *)(plVar20 + 0x43) = uVar4;`
- body line 372: `(**(code **)(*local_78 + 0x20))();`
- body line 408: `(**(code **)(*plVar15 + 0x20))();`

### FUN_0299e034

derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/02/0299e034.c

- body line 609: `puVar8 = (undefined8 *)param_1[0x20];`
- body line 610: `param_1[0x20] = puVar3;`
- body line 1176: `uVar9 = param_1[0x43];`
- body line 1214: `param_1[0x43] = uVar13;`
- body line 1589: `puVar8 = (undefined8 *)param_1[0x58];`
- body line 1590: `param_1[0x58] = puVar3;`
- body line 3416: `uVar9 = param_1[0xc3];`
- body line 3454: `param_1[0xc3] = uVar13;`
- body line 5649: `puVar8 = (undefined8 *)param_1[0x140];`
- body line 5650: `param_1[0x140] = puVar3;`
- body line 5656: `uVar9 = param_1[0x143];`
- body line 5694: `param_1[0x143] = uVar13;`
- body line 10136: `uVar9 = param_1[0x243];`

### FUN_01c521e4

derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01c521e4.c

- body line 308: `FUN_01094470(local_108,lVar28,uVar39,uVar40,uVar33,uVar37,uVar38,uVar35,auStack_110,0,0,`
- body line 309: `param_1 + 0x6f0,0);`
- body line 325: `(**(code **)(*local_390 + 0x20))();`
- body line 559: `(**(code **)(*plVar32 + 0x20))();`
- body line 584: `(**(code **)(*local_3a0 + 0x20))();`
- body line 610: `(**(code **)(*local_80[0] + 0x20))();`
- body line 614: `(**(code **)(*local_268 + 0x20))();`
- body line 617: `(**(code **)(*local_2a8 + 0x20))();`
- body line 656: `(**(code **)(*(long *)*plVar32 + 0x20))();`
- body line 683: `(**(code **)(*local_358 + 0x20))();`
- body line 694: `(**(code **)(*(long *)*plVar32 + 0x20))();`
- body line 739: `(**(code **)(*plVar19 + 0x20))();`

### FUN_01bb3778

derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01bb3778.c

- body line 121: `FUN_008802f0(&local_108,*(long *)(lVar33 + 0x58) + 0x58);`
- body line 230: `FUN_01094470(&local_108,local_140,(ulong)puVar35 & 0xffffffff,uVar14,local_154,uVar30,`
- body line 247: `(**(code **)(*local_120 + 0x20))();`
- body line 292: `(**(code **)(*local_110 + 0x20))();`
- body line 413: `*(undefined2 *)(param_1 + 0x4c8) = 0x1ff;`
- body line 577: `(**(code **)(*plVar32 + 0x20))(plVar32);`
- body line 699: `plVar32 = *(long **)(*(long *)(lVar34 + 0x58) + uVar19 * 8);`
- body line 756: `(**(code **)(*local_f0 + 0x20))();`
- body line 854: `(**(code **)(*local_78 + 0x20))();`
- body line 871: `(**(code **)(*plVar18 + 0x20))();`

### FUN_0192d274

derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/0192d274.c

- body line 159: `if (*(char *)(param_1 + 0x58) == '\0') {`
- body line 259: `(**(code **)(*plVar44 + 0x20))(plVar44);`
- body line 302: `(**(code **)(*plVar44 + 0x20))(plVar44);`
- body line 466: `(**(code **)(*plVar12 + 0x20))(plVar12);`
- body line 566: `(**(code **)(*plVar14 + 0x20))(plVar14);`
- body line 583: `(**(code **)(*plVar38 + 0x20))(plVar38);`
- body line 600: `(**(code **)(*plVar12 + 0x20))(plVar12);`
- body line 617: `(**(code **)(*plVar44 + 0x20))(plVar44);`
- body line 643: `(**(code **)(*local_d70 + 0x20))();`
- body line 660: `(**(code **)(*local_d78 + 0x20))();`
- body line 677: `(**(code **)(*local_d80 + 0x20))();`
- body line 694: `(**(code **)(*local_d88 + 0x20))();`
- body line 711: `(**(code **)(*local_d90 + 0x20))();`

### FUN_01bbe470

derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01bbe470.c

- body line 156: `(**(code **)(*plVar18 + 0x20))(plVar18);`
- body line 320: `(**(code **)(*plVar18 + 0x20))(plVar18);`
- body line 367: `(**(code **)(*(long *)CONCAT44(uStack_20c,local_210) + 0x20))();`
- body line 375: `for (plVar19 = (long *)local_58[0x58]; PTR_DAT_0437a6d8 = pbVar7,`
- body line 429: `(**(code **)(*plVar18 + 0x20))(plVar18);`
- body line 485: `(**(code **)(*local_58 + 0x20))();`
- body line 503: `(**(code **)(*local_230 + 0x20))();`

### FUN_01b54e58

derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01b54e58.c

- body line 30: `lVar3 = *(long *)(lVar3 + 0x140);`

### FUN_01094470

derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01094470.c

- body line 6: `void FUN_01094470(undefined1 *param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5,`
- body line 169: `if ((ulong)puVar21[0x20] != 0) {`
- body line 170: `iVar22 = *(int *)((long)piVar16 + (ulong)puVar21[0x20]);`
- body line 172: `if ((uVar4 < 0x43) // ((ulong)puVar21[0x21] == 0)) goto LAB_010945dc;`
- body line 197: `lVar36 = 0x20;`
- body line 748: `(**(code **)(*plVar51 + 0x20))(plVar51);`
- body line 793: `(**(code **)(*plVar51 + 0x20))(plVar51);`
- body line 825: `plVar51 = *(long **)(*(long *)(lVar36 + 0x58) + uVar41 * 8);`
- body line 1006: `if ((99 < *(ushort *)((long)plVar51 + uVar48 * 0x58 + 0xe4)) &&`
- body line 1033: `plVar26 = *(long **)(*(long *)(lVar36 + 0x58) + uVar41 * 8);`
- body line 1168: `if ((*(byte *)((long)plVar51 + uVar48 * 0x58 + 0xdc) >> 2 & 1) != 0) {`
- body line 1198: `plVar26 = *(long **)(*(long *)(lVar36 + 0x58) + uVar41 * 8);`
- body line 1342: `(**(code **)(*plVar51 + 0x20))(plVar51);`

### FUN_01930680

derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01930680.c

- body line 184: `(**(code **)(*param_4 + 0x20))(param_4);`
- body line 275: `lVar9 = 0x20;`

### FUN_01b55130

derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01b55130.c

- body line 37: `(**(code **)(*local_18 + 0x20))(local_18);`
- body line 38: `puVar8 = *(undefined8 **)(param_1 + 0x140);`
- body line 43: `puVar8 = *(undefined8 **)(param_1 + 0x140);`
- body line 52: `*(undefined1 *)((long)puVar8 + 0x43) = 1;`

### FUN_01b56688

derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01b56688.c

- body line 242: `(**(code **)(*local_c8 + 0x20))();`

### FUN_01b56acc

derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01b56acc.c

- body line 113: `uVar3 = (undefined2)(CONCAT15(uVar21,CONCAT14(uVar20,fVar16)) >> 0x20);`
- body line 168: `(float)((ulong)uVar30 >> 0x20) +`
- body line 172: `CONCAT14(SUB41(fVar17,0) & ~(byte)iVar4,fVar27)))) >> 0x20`
- body line 176: `(float)((ulong)uVar31 >> 0x20) +`
- body line 180: `CONCAT14(SUB41(fVar16,0) & ~(byte)iVar6,fVar24)))) >> 0x20`

### FUN_01b570cc

derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01b570cc.c

- body line 44: `(**(code **)(*local_38 + 0x20))(local_38);`
- body line 45: `puVar10 = *(undefined8 **)(lVar13 + 0x140);`
- body line 50: `puVar10 = *(undefined8 **)(lVar13 + 0x140);`
- body line 59: `*(undefined1 *)((long)puVar10 + 0x43) = 1;`
- body line 98: `(**(code **)(*plVar8 + 0x20))();`
- body line 128: `(**(code **)(*plVar9 + 0x20))();`

### FUN_01bacefc

derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01bacefc.c

- body line 64: `(**(code **)(*plVar7 + 0x20))(plVar7);`

### FUN_01bad050

derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01bad050.c

- body line 64: `(**(code **)(*plVar7 + 0x20))(plVar7);`

### FUN_01931c40

derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01931c40.c

- body line 308: `(**(code **)(*plVar36 + 0x20))();`
- body line 353: `(**(code **)(*plVar36 + 0x20))();`
- body line 398: `(**(code **)(*plVar36 + 0x20))();`
- body line 443: `(**(code **)(*plVar32 + 0x20))();`
- body line 489: `(**(code **)(*plVar34 + 0x20))();`
- body line 495: `(**(code **)(*local_70 + 0x20))();`
- body line 498: `(**(code **)(*local_90 + 0x20))();`
- body line 501: `(**(code **)(*local_b0 + 0x20))();`
- body line 504: `(**(code **)(*local_d0 + 0x20))();`
- body line 507: `(**(code **)(*local_f0 + 0x20))();`
- body line 534: `local_110 = CONCAT44((int)((ulong)local_110 >> 0x20),uVar44);`
- body line 672: `lVar23 = 0x20;`
- body line 866: `*(undefined2 *)(param_2 + 0x20) = 0;`

### FUN_009273d4

derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/00/009273d4.c

- body line 20: `lVar1 = 0x20;`

### FUN_00db854c

derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/00/00db854c.c



## Evidence boundaries

- `FUN_01b56418` -> `SpawnerEntry.GenerateSeed(+0x20)`: **CONFIRMED_PRODUCER**
- `SpawnerEntry.GenerateSeed(+0x20)` -> `true typed read consumer`: **UNRESOLVED**
- `FUN_01c521e4` -> `FUN_01094470`: **CONFIRMED_DIRECT_CALL**
- `FUN_01c521e4:param_1+0x6f0` -> `SpawnerEntry.GenerateSeed(+0x20)`: **UNPROVEN_ALIAS**
- `FUN_01094470` -> `native EC/PID/IV writer`: **UNPROVEN_CALL_DATAFLOW**

## Limitations

- Numeric offsets may belong to unrelated structures.
- Virtual calls and compiler-inlined RNG may obscure source consumers.
- An original C code scan cannot replace Ghidra typed pointer propagation or guest observations.
- The original ELF, Ghidra database and original C remain unchanged.
