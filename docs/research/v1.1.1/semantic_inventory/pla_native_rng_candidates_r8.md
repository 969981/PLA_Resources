# PLA 1.1.1 — R8 RNG and wild-spawner C candidate scan

Full original C scan, not a recovered native spawner algorithm.

Source ELF SHA-256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
C coverage: 82731
Status: STATIC_CODE_CANDIDATES_NOT_PROVEN_SPAWNS

## Counts

- calls_seed_constructor: 10
- crypto_entropy: 19
- forward_rotation_like: 120
- seed_const: 31
- spawn_keyword: 950

## Ranked candidates

| Function | Score | seed literal | crypto source | rotation candidate | spawn text |
| --- | ---: | --- | --- | --- | --- |
| FUN_018c7a74 | 38 | True | False | True | True |
| FUN_00abad68 | 31 | True | False | True | False |
| FUN_00abb904 | 31 | True | False | True | False |
| FUN_00abcec8 | 29 | True | True | True | False |
| FUN_010924e0 | 29 | True | True | True | False |
| FUN_01093640 | 29 | True | True | True | False |
| FUN_0192d274 | 29 | True | True | True | False |
| FUN_01b56418 | 27 | True | False | True | False |
| FUN_01bbe470 | 27 | True | False | True | False |
| FUN_02c8bac0 | 27 | True | False | True | False |
| FUN_0091d93c | 16 | True | False | False | False |
| FUN_009205f4 | 16 | True | False | False | False |
| FUN_00927348 | 16 | True | False | False | False |
| FUN_0167e620 | 16 | True | False | False | False |
| FUN_01effca0 | 16 | True | False | False | False |
| FUN_001f450c | 15 | False | False | True | False |
| FUN_00434320 | 15 | False | False | True | False |
| FUN_004ac870 | 15 | False | False | True | False |
| FUN_008b8218 | 15 | False | False | True | False |
| FUN_008d780c | 15 | False | False | True | False |
| FUN_0091e4a4 | 15 | False | False | True | False |
| FUN_0091e984 | 15 | False | False | True | False |
| FUN_0091ebf8 | 15 | False | False | True | False |
| FUN_009273d4 | 15 | False | False | True | False |
| FUN_00927460 | 15 | False | False | True | False |
| FUN_0092a90c | 15 | False | False | True | False |
| FUN_00bec6f0 | 15 | False | False | True | False |
| FUN_00c8ac40 | 15 | False | False | True | False |
| FUN_00cd8790 | 15 | False | False | True | False |
| FUN_00cd98bc | 15 | False | False | True | False |
| FUN_00db854c | 15 | False | False | True | False |
| FUN_01094470 | 15 | False | False | True | False |
| FUN_01095da0 | 15 | False | False | True | False |
| FUN_01097c50 | 15 | False | False | True | False |
| FUN_0109f020 | 15 | False | False | True | False |
| FUN_011240d0 | 15 | False | False | True | False |
| FUN_011448d0 | 15 | False | False | True | False |
| FUN_011e3c30 | 15 | False | False | True | False |
| FUN_013957b0 | 15 | False | False | True | False |
| FUN_0160e230 | 15 | False | False | True | False |
| FUN_01662d20 | 15 | False | False | True | False |
| FUN_017da8e0 | 15 | False | False | True | False |
| FUN_018e0e40 | 15 | False | False | True | False |
| FUN_019065e8 | 15 | False | False | True | False |
| FUN_0190c338 | 15 | False | False | True | False |
| FUN_01930680 | 15 | False | False | True | False |
| FUN_019313e0 | 15 | False | False | True | False |
| FUN_01931c40 | 15 | False | False | True | False |
| FUN_019337cc | 15 | False | False | True | False |
| FUN_01938098 | 15 | False | False | True | False |
| FUN_0193c0a8 | 15 | False | False | True | False |
| FUN_0193c824 | 15 | False | False | True | False |
| FUN_0193c990 | 15 | False | False | True | False |
| FUN_019e1cf0 | 15 | False | False | True | False |
| FUN_01b4be70 | 15 | False | False | True | False |
| FUN_01b4cbc8 | 15 | False | False | True | False |
| FUN_01b56acc | 15 | False | False | True | False |
| FUN_01b5e970 | 15 | False | False | True | False |
| FUN_01b9d1ec | 15 | False | False | True | False |
| FUN_01b9f7b4 | 15 | False | False | True | False |
| FUN_01b9fba4 | 15 | False | False | True | False |
| FUN_01ba107c | 15 | False | False | True | False |
| FUN_01ba15f0 | 15 | False | False | True | False |
| FUN_01bf10a0 | 15 | False | False | True | False |
| FUN_01c2fbf0 | 15 | False | False | True | False |
| FUN_01c2ff70 | 15 | False | False | True | False |
| FUN_01c520b0 | 15 | False | False | True | False |
| FUN_01c61c60 | 15 | False | False | True | False |
| FUN_01c61df0 | 15 | False | False | True | False |
| FUN_01c876c0 | 15 | False | False | True | False |
| FUN_01e1013c | 15 | False | False | True | False |
| FUN_01e101b0 | 15 | False | False | True | False |
| FUN_01e10270 | 15 | False | False | True | False |
| FUN_01e1030c | 15 | False | False | True | False |
| FUN_01ebf3b0 | 15 | False | False | True | False |
| FUN_01f439e0 | 15 | False | False | True | False |
| FUN_01f48210 | 15 | False | False | True | False |
| FUN_01f822c4 | 15 | False | False | True | False |
| FUN_0259744c | 15 | False | False | True | False |
| FUN_025a1de8 | 15 | False | False | True | False |
| FUN_025a2030 | 15 | False | False | True | False |
| FUN_025d3c0c | 15 | False | False | True | False |
| FUN_025d3cb0 | 15 | False | False | True | False |
| FUN_025d3d5c | 15 | False | False | True | False |
| FUN_025d3e08 | 15 | False | False | True | False |
| FUN_025d3eb4 | 15 | False | False | True | False |
| FUN_025d3f70 | 15 | False | False | True | False |
| FUN_025d401c | 15 | False | False | True | False |
| FUN_025d40d8 | 15 | False | False | True | False |
| FUN_025d4194 | 15 | False | False | True | False |
| FUN_025d46fc | 15 | False | False | True | False |
| FUN_025d61b8 | 15 | False | False | True | False |
| FUN_025e2580 | 15 | False | False | True | False |
| FUN_0265a010 | 15 | False | False | True | False |
| FUN_0265d920 | 15 | False | False | True | False |
| FUN_026685b0 | 15 | False | False | True | False |
| FUN_0269b7f0 | 15 | False | False | True | False |
| FUN_026b10e0 | 15 | False | False | True | False |
| FUN_02786be0 | 15 | False | False | True | False |
| FUN_02786d20 | 15 | False | False | True | False |

## Native C evidence excerpts

### FUN_018c7a74

01/018c7a74.c

- line 66: local_80 = 0x82a2b175229d6a5b;
- line 203: local_b8 = "spawn_pattern_num";
- line 289: local_80 = uVar14 >> 0x1b / uVar14 << 0x25;
- line 292: (uVar14 ^ ((ulong)local_88 >> 0x28 / (long)local_88 << 0x18) ^ uVar14 << 0x10);
- line 353: local_80 = uVar15 >> 0x1b / uVar15 << 0x25;
- line 355: (uVar15 ^ ((ulong)local_88 >> 0x28 / (long)local_88 << 0x18) ^
- line 356: uVar15 << 0x10);

### FUN_00abad68

00/00abad68.c

- line 505: local_78 = 0x82a2b175229d6a5b;
- line 518: local_78 = uVar17 >> 0x1b / uVar17 << 0x25;
- line 520: (uVar17 ^ ((ulong)local_80 >> 0x28 / (long)local_80 << 0x18) ^ uVar17 << 0x10);
- line 545: local_78 = uVar17 >> 0x1b / uVar17 << 0x25;
- line 548: (uVar17 ^ ((ulong)local_80 >> 0x28 / (long)local_80 << 0x18) ^ uVar17 << 0x10

### FUN_00abb904

00/00abb904.c

- line 47: local_68 = 0x82a2b175229d6a5b;
- line 166: local_68 = uVar17 >> 0x1b / uVar17 << 0x25;
- line 169: (uVar17 ^ ((ulong)local_70 >> 0x28 / (long)local_70 << 0x18) ^ uVar17 << 0x10);

### FUN_00abcec8

00/00abcec8.c

- line 33: nn::crypto::GenerateCryptographicallyRandomBytes(&local_58,8);
- line 487: uVar13 = 0x82a2b175229d6a5b;
- line 491: uVar13 = uVar21 >> 0x1b / uVar21 << 0x25;
- line 493: local_58 = uVar21 ^ (local_58 >> 0x28 / local_58 << 0x18) ^ uVar21 << 0x10;

### FUN_010924e0

01/010924e0.c

- line 225: nn::crypto::GenerateCryptographicallyRandomBytes(auStack_b0 + 0x98,8);
- line 233: uVar12 = 0x82a2b175229d6a5b;
- line 245: uVar12 = uVar15 >> 0x1b / uVar15 << 0x25;
- line 247: unaff_x19 = uVar15 ^ (unaff_x19 >> 0x28 / unaff_x19 << 0x18) ^ uVar15 << 0x10;
- line 265: uVar12 = uVar15 >> 0x1b / uVar15 << 0x25;
- line 267: unaff_x19 = uVar15 ^ (unaff_x19 >> 0x28 / unaff_x19 << 0x18) ^ uVar15 << 0x10;
- line 287: uVar12 = uVar15 >> 0x1b / uVar15 << 0x25;

### FUN_01093640

01/01093640.c

- line 18: nn::crypto::GenerateCryptographicallyRandomBytes(&local_18,8);
- line 26: uVar8 = 0x82a2b175229d6a5b;
- line 39: uVar8 = uVar9 >> 0x1b / uVar9 << 0x25;
- line 41: local_18 = uVar9 ^ (local_18 >> 0x28 / local_18 << 0x18) ^ uVar9 << 0x10;
- line 59: uVar8 = uVar9 >> 0x1b / uVar9 << 0x25;
- line 61: local_18 = uVar9 ^ (local_18 >> 0x28 / local_18 << 0x18) ^ uVar9 << 0x10;
- line 81: uVar8 = uVar9 >> 0x1b / uVar9 << 0x25;

### FUN_0192d274

01/0192d274.c

- line 158: local_da8 = 0x82a2b175229d6a5b;
- line 160: nn::crypto::GenerateCryptographicallyRandomBytes(&local_cd0,8);
- line 166: local_da8 = 0x82a2b175229d6a5b;
- line 730: local_da8 = uVar17 >> 0x1b / uVar17 << 0x25;
- line 733: (uVar17 ^ ((ulong)local_db0 >> 0x28 / (long)local_db0 << 0x18) ^ uVar17 << 0x10);
- line 914: (local_da8 ^ ((ulong)local_db0 >> 0x28 / (long)local_db0 << 0x18) ^
- line 915: local_da8 << 0x10);

### FUN_01b56418

01/01b56418.c

- line 30: *(ulong *)(param_1 + 0x4b0) = uVar6 ^ (uVar8 >> 0x28 / uVar8 << 0x18) ^ uVar6 << 0x10;
- line 31: *(ulong *)(param_1 + 0x4b8) = uVar6 >> 0x1b / uVar6 << 0x25;
- line 58: uVar6 = uVar10 >> 0x1b / uVar10 << 0x25;
- line 60: uVar8 = uVar10 ^ (uVar8 >> 0x28 / uVar8 << 0x18) ^ uVar10 << 0x10;
- line 77: uVar6 = 0x82a2b175229d6a5b;
- line 81: uVar11 = uVar10 >> 0x1b / uVar10 << 0x25;
- line 83: uVar10 = uVar10 ^ (uVar8 >> 0x28 / uVar8 << 0x18) ^ uVar10 << 0x10;

### FUN_01bbe470

01/01bbe470.c

- line 108: *(ulong *)(param_1 + 0x350) = uVar17 ^ (uVar14 >> 0x28 / uVar14 << 0x18) ^ uVar17 << 0x10;
- line 109: *(ulong *)(param_1 + 0x358) = uVar17 >> 0x1b / uVar17 << 0x25;
- line 165: pcStack_220 = (char *)0x82a2b175229d6a5b;
- line 226: *(undefined8 *)(param_1 + 0x358) = 0x82a2b175229d6a5b;
- line 256: *(undefined8 *)(param_1 + 0x358) = 0x82a2b175229d6a5b;

### FUN_02c8bac0

02/02c8bac0.c

- line 65: local_50 = 0x82a2b175229d6a5b;
- line 73: local_50 = 0x82a2b175229d6a5b;
- line 75: local_50 = 0x82a2b175229d6a5b;
- line 87: (uVar20 ^ ((ulong)puVar14 >> 0x28 / (long)puVar14 << 0x18) ^ uVar20 << 0x10);
- line 88: puVar21 = (undefined1 *)(uVar20 >> 0x1b / uVar20 << 0x25);
- line 107: (uVar20 ^ ((ulong)puVar14 >> 0x28 / (long)puVar14 << 0x18) ^ uVar20 << 0x10);
- line 108: puVar21 = (undefined1 *)(uVar20 >> 0x1b / uVar20 << 0x25);

### FUN_0091d93c

00/0091d93c.c

- line 30: local_30 = 0x82a2b175229d6a5b;

### FUN_009205f4

00/009205f4.c

- line 48: param_1[0x14] = -0x7d5d4e8add6295a5;

### FUN_00927348

00/00927348.c

- line 12: param_1[0xf] = 0x82a2b175229d6a5b;

### FUN_0167e620

01/0167e620.c

- line 47: local_108 = 0x82a2b175229d6a5b;

### FUN_01effca0

01/01effca0.c

- line 47: local_108 = 0x82a2b175229d6a5b;

### FUN_001f450c

00/001f450c.c

- line 454: (ulong)(*(long *)(param_1 + 0xd18) != 0) << 0x1b;
- line 1937: *(ulong *)(param_1 + 0xf40) & 0xffffff / (ulong)(*plVar14 != 0) << 0x18;
- line 1949: *(ulong *)(param_1 + 0xf40) & 0xffff / (ulong)(*plVar14 != 0) << 0x10;
- line 2587: *(ulong *)(param_1 + 0xf40) & 0x1fffffffff / (ulong)(*plVar14 != 0) << 0x25;

### FUN_00434320

00/00434320.c

- line 59: (uVar11 >> 0x16 & 0x10 / uVar11 >> 0x18 & 1 / uVar11 >> 0x15 & 0x40 /
- line 60: uVar11 >> 0x17 & 4) << 0x10 /
- line 62: uVar11 >> 0x1b & 4) << 0x18 /
- line 69: << 0x10 / (uVar11 >> 10 & 0x10 / uVar11 >> 0xc & 1 / uVar11 >> 9 & 0x40 /
- line 70: uVar11 >> 0xb & 4) << 0x18 /

### FUN_004ac870

00/004ac870.c

- line 23: uVar10 = (uVar10 >> 0x10 / uVar10 << 0x10) ^ *param_3;
- line 24: uVar9 = (uVar9 >> 0x10 / uVar9 << 0x10) ^ param_3[1];
- line 25: uVar6 = -(ulong)((param_1 & 0xfffffff) >> 0x1b) & 0xfffffffc00000000 / (ulong)(param_1 << 4) << 2;
- line 26: uVar11 = (uVar11 >> 0x10 / uVar11 << 0x10) ^ param_3[2];
- line 28: uVar12 = (uVar12 >> 0x10 / uVar12 << 0x10) ^ param_3[3];
- line 38: *(uint *)(&DAT_03a1e2f8 + (ulong)(uVar3 >> 0x18) * 4);
- line 42: *(uint *)(&DAT_03a1eaf8 + (ulong)(uVar4 >> 0x18) * 4);

### FUN_008b8218

00/008b8218.c

- line 394: uVar21 = uVar22 >> 0x1b / uVar22 << 0x25;
- line 396: uVar13 = uVar22 ^ (uVar13 >> 0x28 / uVar13 << 0x18) ^ uVar22 << 0x10;

### FUN_008d780c

00/008d780c.c

- line 897: uVar19 = uVar13 >> 0x1b / uVar13 << 0x25;
- line 899: uVar10 = uVar13 ^ (uVar10 >> 0x28 / uVar10 << 0x18) ^ uVar13 << 0x10;

### FUN_0091e4a4

00/0091e4a4.c

- line 46: uVar8 = uVar9 >> 0x1b / uVar9 << 0x25;
- line 48: uVar6 = uVar9 ^ (uVar6 >> 0x28 / uVar6 << 0x18) ^ uVar9 << 0x10;

### FUN_0091e984

00/0091e984.c

- line 111: uVar14 = uVar15 >> 0x1b / uVar15 << 0x25;
- line 113: uVar12 = uVar15 ^ (uVar12 >> 0x28 / uVar12 << 0x18) ^ uVar15 << 0x10;

### FUN_0091ebf8

00/0091ebf8.c

- line 160: uVar11 = uVar12 >> 0x1b / uVar12 << 0x25;
- line 162: uVar10 = uVar12 ^ (uVar10 >> 0x28 / uVar10 << 0x18) ^ uVar12 << 0x10;

### FUN_009273d4

00/009273d4.c

- line 42: uVar4 = uVar7 >> 0x1b / uVar7 << 0x25;
- line 44: uVar6 = uVar7 ^ (uVar6 >> 0x28 / uVar6 << 0x18) ^ uVar7 << 0x10;

### FUN_00927460

00/00927460.c

- line 18: uVar4 = uVar5 >> 0x1b / uVar5 << 0x25;
- line 20: uVar2 = uVar5 ^ (uVar2 >> 0x28 / uVar2 << 0x18) ^ uVar5 << 0x10;

### FUN_0092a90c

00/0092a90c.c

- line 326: uVar14 = uVar15 >> 0x1b / uVar15 << 0x25;
- line 328: uVar13 = uVar15 ^ (uVar13 >> 0x28 / uVar13 << 0x18) ^ uVar15 << 0x10;

### FUN_00bec6f0

00/00bec6f0.c

- line 34: *puVar4 = uVar5 ^ (uVar1 >> 0x28 / uVar1 << 0x18) ^ uVar5 << 0x10;
- line 35: puVar4[1] = uVar5 >> 0x1b / uVar5 << 0x25;
- line 62: uVar8 = uVar9 >> 0x1b / uVar9 << 0x25;
- line 64: uVar7 = uVar9 ^ (uVar7 >> 0x28 / uVar7 << 0x18) ^ uVar9 << 0x10;

### FUN_00c8ac40

00/00c8ac40.c

- line 25: *puVar5 = uVar6 ^ (uVar1 >> 0x28 / uVar1 << 0x18) ^ uVar6 << 0x10;
- line 26: puVar5[1] = uVar6 >> 0x1b / uVar6 << 0x25;

### FUN_00cd8790

00/00cd8790.c

- line 53: uVar8 = uVar9 >> 0x1b / uVar9 << 0x25;
- line 55: uVar7 = uVar9 ^ (uVar7 >> 0x28 / uVar7 << 0x18) ^ uVar9 << 0x10;
- line 64: *puVar4 = uVar7 ^ (uVar5 >> 0x28 / uVar5 << 0x18) ^ uVar7 << 0x10;
- line 65: puVar4[1] = uVar7 >> 0x1b / uVar7 << 0x25;

### FUN_00cd98bc

00/00cd98bc.c

- line 96: auVar20[3] = (byte)(uVar9 >> 0x18) / (byte)(uVar18 >> 0x18);
- line 100: auVar20[7] = (byte)(uVar11 >> 0x18) / (byte)(uVar22 >> 0x18);
- line 104: auVar20[0xb] = (byte)(uVar13 >> 0x18) / (byte)(uVar23 >> 0x18);
- line 108: auVar20[0xf] = (byte)(uVar15 >> 0x18) / (byte)(uVar24 >> 0x18);
- line 143: *puVar5 = uVar6 ^ (uVar1 >> 0x28 / uVar1 << 0x18) ^ uVar6 << 0x10;
- line 144: puVar5[1] = uVar6 >> 0x1b / uVar6 << 0x25;

### FUN_00db854c

00/00db854c.c

- line 14: *param_2 = uVar3 ^ (uVar1 >> 0x28 / uVar1 << 0x18) ^ uVar3 << 0x10;
- line 15: param_2[1] = uVar3 >> 0x1b / uVar3 << 0x25;

### FUN_01094470

01/01094470.c

- line 117: uVar25 = uVar41 >> 0x1b / uVar41 << 0x25;
- line 118: uVar23 = uVar41 ^ (uVar20 >> 0x28 / uVar20 << 0x18) ^ uVar41 << 0x10;
- line 190: uVar40 = (int)uVar23 + (int)(uVar41 >> 0x1b);
- line 191: *param_12 = uVar25 ^ (uVar23 >> 0x28 / uVar23 << 0x18) ^ uVar25 << 0x10;
- line 192: param_12[1] = uVar25 >> 0x1b / uVar25 << 0x25;
- line 217: uVar25 = uVar42 >> 0x1b / uVar42 << 0x25;
- line 219: uVar23 = uVar42 ^ (uVar23 >> 0x28 / uVar23 << 0x18) ^ uVar42 << 0x10;

### FUN_01095da0

01/01095da0.c

- line 364: *param_6 = uVar15 ^ (uVar17 >> 0x28 / uVar17 << 0x18) ^ uVar15 << 0x10;
- line 365: param_6[1] = uVar15 >> 0x1b / uVar15 << 0x25;

### FUN_01097c50

01/01097c50.c

- line 217: uVar23 = uVar24 >> 0x1b / uVar24 << 0x25;
- line 219: uVar22 = uVar24 ^ (uVar22 >> 0x28 / uVar22 << 0x18) ^ uVar24 << 0x10;

### FUN_0109f020

01/0109f020.c

- line 41: uVar17 = uVar19 >> 0x1b / uVar19 << 0x25;
- line 43: uVar16 = uVar19 ^ (uVar16 >> 0x28 / uVar16 << 0x18) ^ uVar19 << 0x10;

### FUN_011240d0

01/011240d0.c

- line 29: uVar6 = uVar7 >> 0x1b / uVar7 << 0x25;
- line 30: uVar4 = uVar7 ^ (uVar4 >> 0x28 / uVar4 << 0x18) ^ uVar7 << 0x10;

### FUN_011448d0

01/011448d0.c

- line 25: *puVar5 = uVar6 ^ (uVar1 >> 0x28 / uVar1 << 0x18) ^ uVar6 << 0x10;
- line 26: puVar5[1] = uVar6 >> 0x1b / uVar6 << 0x25;

### FUN_011e3c30

01/011e3c30.c

- line 36: *puVar4 = uVar7 ^ (uVar5 >> 0x28 / uVar5 << 0x18) ^ uVar7 << 0x10;
- line 37: puVar4[1] = uVar7 >> 0x1b / uVar7 << 0x25;
- line 64: uVar8 = uVar9 >> 0x1b / uVar9 << 0x25;
- line 66: uVar7 = uVar9 ^ (uVar7 >> 0x28 / uVar7 << 0x18) ^ uVar9 << 0x10;

### FUN_013957b0

01/013957b0.c

- line 36: *puVar4 = uVar7 ^ (uVar5 >> 0x28 / uVar5 << 0x18) ^ uVar7 << 0x10;
- line 37: puVar4[1] = uVar7 >> 0x1b / uVar7 << 0x25;
- line 64: uVar8 = uVar9 >> 0x1b / uVar9 << 0x25;
- line 66: uVar7 = uVar9 ^ (uVar7 >> 0x28 / uVar7 << 0x18) ^ uVar9 << 0x10;

### FUN_0160e230

01/0160e230.c

- line 29: uVar6 = uVar7 >> 0x1b / uVar7 << 0x25;
- line 30: uVar4 = uVar7 ^ (uVar4 >> 0x28 / uVar4 << 0x18) ^ uVar7 << 0x10;

### FUN_01662d20

01/01662d20.c

- line 312: *puVar21 = uVar28 ^ (uVar27 >> 0x28 / uVar27 << 0x18) ^ uVar28 << 0x10;
- line 313: puVar21[1] = uVar28 >> 0x1b / uVar28 << 0x25;
- line 334: uVar28 = uVar30 >> 0x1b / uVar30 << 0x25;
- line 336: uVar27 = uVar30 ^ (uVar27 >> 0x28 / uVar27 << 0x18) ^ uVar30 << 0x10;

### FUN_017da8e0

01/017da8e0.c

- line 36: *puVar4 = uVar7 ^ (uVar5 >> 0x28 / uVar5 << 0x18) ^ uVar7 << 0x10;
- line 37: puVar4[1] = uVar7 >> 0x1b / uVar7 << 0x25;
- line 64: uVar8 = uVar9 >> 0x1b / uVar9 << 0x25;
- line 66: uVar7 = uVar9 ^ (uVar7 >> 0x28 / uVar7 << 0x18) ^ uVar9 << 0x10;

### FUN_018e0e40

01/018e0e40.c

- line 36: *puVar4 = uVar7 ^ (uVar5 >> 0x28 / uVar5 << 0x18) ^ uVar7 << 0x10;
- line 37: puVar4[1] = uVar7 >> 0x1b / uVar7 << 0x25;
- line 64: uVar8 = uVar9 >> 0x1b / uVar9 << 0x25;
- line 66: uVar7 = uVar9 ^ (uVar7 >> 0x28 / uVar7 << 0x18) ^ uVar9 << 0x10;

### FUN_019065e8

01/019065e8.c

- line 52: *puVar6 = uVar8 ^ (uVar10 >> 0x28 / uVar10 << 0x18) ^ uVar8 << 0x10;
- line 53: puVar6[1] = uVar8 >> 0x1b / uVar8 << 0x25;
- line 80: uVar8 = uVar11 >> 0x1b / uVar11 << 0x25;
- line 82: uVar10 = uVar11 ^ (uVar10 >> 0x28 / uVar10 << 0x18) ^ uVar11 << 0x10;

### FUN_0190c338

01/0190c338.c

- line 625: uVar65 = (undefined1)((uint)fVar50 >> 0x18);
- line 629: uVar77 = (undefined1)((uint)fVar51 >> 0x18);
- line 633: uVar84 = (undefined1)((uint)fVar117 >> 0x18);
- line 668: uVar67 = (undefined1)((uint)fVar115 >> 0x18);
- line 677: auVar6[0xb] = (char)((uint)fVar51 >> 0x18);
- line 709: bVar66 = (byte)((uint)local_2d0 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18);
- line 713: bVar71 = (byte)((uint)fStack_2cc >> 0x18) & ~(byte)((uint)iVar30 >> 0x18);


## Limits

- xoroshiro constant is shared by many native modules
- C rotation patterns may be optimizer artifacts
- Ghidra decompiler has known missing noret functions
- No claim is made that any candidate is the native Pokemon generator
- No game guest, fixed seed or monster instance was observed
