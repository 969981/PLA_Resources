/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008d780c; name: FUN_008d780c
 */


void FUN_008d780c(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  byte *pbVar16;
  int iVar17;
  byte *pbVar18;
  ulong uVar19;
  long lVar20;
  byte local_4b0 [4];
  byte local_4ac [24];
  byte local_494 [4];
  byte local_490 [8];
  int local_488 [3];
  char local_47c [4];
  byte local_478 [4];
  byte local_474 [8];
  int local_46c [3];
  char local_460 [4];
  byte local_45c [4];
  byte local_458 [8];
  int aiStack_450 [3];
  char local_444 [4];
  byte local_440 [4];
  undefined8 local_43c;
  undefined8 local_434;
  undefined4 local_42c;
  undefined1 local_428;
  undefined1 local_424;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined4 local_410;
  undefined1 local_40c;
  undefined1 local_408;
  undefined8 local_404;
  undefined8 local_3fc;
  undefined4 local_3f4;
  undefined1 local_3f0;
  undefined1 local_3ec;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined4 local_3d8;
  undefined1 local_3d4;
  undefined1 local_3d0;
  undefined8 local_3cc;
  undefined8 local_3c4;
  undefined4 local_3bc;
  undefined1 local_3b8;
  undefined1 local_3b4;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined4 local_3a0;
  undefined1 local_39c;
  undefined1 local_398;
  undefined8 local_394;
  undefined8 local_38c;
  undefined4 local_384;
  undefined1 local_380;
  undefined1 local_37c;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined4 local_368;
  undefined1 local_364;
  undefined1 local_360;
  undefined8 local_35c;
  undefined8 local_354;
  undefined4 local_34c;
  undefined1 local_348;
  undefined1 local_344;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined4 local_330;
  undefined1 local_32c;
  undefined1 local_328;
  undefined8 local_324;
  undefined8 local_31c;
  undefined4 local_314;
  undefined1 local_310;
  undefined1 local_30c;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined4 local_2f8;
  undefined1 local_2f4;
  undefined1 local_2f0;
  undefined8 local_2ec;
  undefined8 local_2e4;
  undefined4 local_2dc;
  undefined1 local_2d8;
  undefined1 local_2d4;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined1 local_2bc;
  undefined1 local_2b8;
  undefined8 local_2b4;
  undefined8 local_2ac;
  undefined4 local_2a4;
  undefined1 local_2a0;
  undefined1 local_29c;
  undefined8 local_298;
  undefined8 local_290;
  undefined4 local_288;
  undefined1 local_284;
  undefined2 local_280;
  uint local_278;
  uint local_274;
  undefined4 local_270;
  undefined8 local_268;
  char *local_260;
  undefined8 local_258;
  undefined8 local_250;
  int local_248 [3];
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined1 local_224;
  undefined8 local_220;
  undefined1 local_218;
  undefined8 local_214;
  undefined1 local_20c;
  undefined8 local_208;
  undefined1 local_200;
  undefined8 local_1fc;
  undefined1 local_1f4;
  undefined8 local_1f0;
  undefined1 local_1e8;
  undefined8 local_1e4;
  undefined1 local_1dc;
  undefined8 local_1d8;
  undefined1 local_1d0;
  undefined8 local_1cc;
  undefined1 local_1c4;
  undefined8 local_1c0;
  undefined1 local_1b8;
  undefined8 local_1b4;
  undefined1 local_1ac;
  undefined8 local_1a8;
  undefined1 local_1a0;
  undefined8 local_19c;
  undefined1 local_194;
  undefined8 local_190;
  undefined1 local_188;
  undefined8 local_184;
  undefined1 local_17c;
  undefined8 local_178;
  undefined1 local_170;
  undefined8 local_16c;
  undefined1 local_164;
  undefined8 local_160;
  byte local_158 [4];
  int iStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  byte local_148 [24];
  undefined8 local_130;
  undefined1 local_128;
  undefined8 local_124;
  undefined1 local_11c;
  undefined8 local_118;
  undefined1 local_110;
  undefined8 local_10c;
  undefined1 local_104;
  undefined8 local_100;
  undefined1 local_f8;
  undefined8 local_f4;
  undefined1 local_ec;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined8 local_dc;
  undefined1 local_d4;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 local_c4;
  undefined1 local_bc;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_ac;
  undefined1 local_a4;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_94;
  undefined1 local_8c;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_7c;
  undefined1 local_74;
  undefined8 local_70;
  undefined1 auStack_68 [8];
  
  local_4ac[0] = 0;
  local_4ac[1] = 0;
  local_4ac[2] = 0;
  local_4ac[3] = 0;
  local_4ac[4] = 0;
  local_4ac[5] = 0;
  local_4ac[6] = 0;
  local_4ac[7] = 0;
  local_4b0[0] = 0x1f;
  local_4ac[8] = 0;
  local_4ac[9] = 0;
  local_4ac[10] = 0;
  local_4ac[0xb] = 0;
  local_4ac[0xc] = 0;
  local_4ac[0xd] = 0;
  local_4ac[0xe] = 0;
  local_4ac[0xf] = 0;
  local_4ac[0x10] = 0;
  local_4ac[0x11] = 0;
  local_4ac[0x12] = 0;
  local_4ac[0x13] = 0;
  local_4ac[0x14] = 1;
  local_494[0] = 0x1f;
  local_488[2] = 0;
  local_47c[0] = '\x01';
  local_478[0] = 0x1f;
  local_474[0] = 0;
  local_474[1] = 0;
  local_474[2] = 0;
  local_474[3] = 0;
  local_474[4] = 0;
  local_474[5] = 0;
  local_474[6] = 0;
  local_474[7] = 0;
  local_46c[0] = 0;
  local_46c[1] = 0;
  local_46c[2] = 0;
  local_460[0] = '\x01';
  local_45c[0] = 0x1f;
  aiStack_450[2] = 0;
  local_444[0] = '\x01';
  local_440[0] = 0x1f;
  local_43c = 0;
  local_434 = 0;
  local_42c = 0;
  local_428 = 1;
  local_424 = 0x1f;
  local_410 = 0;
  local_40c = 1;
  local_408 = 0x1f;
  local_3f4 = 0;
  local_490[0] = 0;
  local_490[1] = 0;
  local_490[2] = 0;
  local_490[3] = 0;
  local_490[4] = 0;
  local_490[5] = 0;
  local_490[6] = 0;
  local_490[7] = 0;
  local_488[0] = 0;
  local_488[1] = 0;
  local_458[0] = 0;
  local_458[1] = 0;
  local_458[2] = 0;
  local_458[3] = 0;
  local_458[4] = 0;
  local_458[5] = 0;
  local_458[6] = 0;
  local_458[7] = 0;
  aiStack_450[0] = 0;
  aiStack_450[1] = 0;
  local_420 = 0;
  uStack_418 = 0;
  local_404 = 0;
  local_3fc = 0;
  local_3f0 = 1;
  local_3ec = 0x1f;
  local_3d8 = 0;
  local_3d4 = 1;
  local_3d0 = 0x1f;
  local_3bc = 0;
  local_3e8 = 0;
  local_3e0 = 0;
  local_3cc = 0;
  local_3c4 = 0;
  local_3b8 = 1;
  local_3b4 = 0x1f;
  local_3a0 = 0;
  local_39c = 1;
  local_398 = 0x1f;
  local_384 = 0;
  local_3b0 = 0;
  uStack_3a8 = 0;
  local_394 = 0;
  local_38c = 0;
  local_380 = 1;
  local_37c = 0x1f;
  local_368 = 0;
  local_364 = 1;
  local_360 = 0x1f;
  local_34c = 0;
  local_378 = 0;
  uStack_370 = 0;
  local_35c = 0;
  local_354 = 0;
  local_348 = 1;
  local_344 = 0x1f;
  local_330 = 0;
  local_32c = 1;
  local_328 = 0x1f;
  local_314 = 0;
  local_340 = 0;
  uStack_338 = 0;
  local_324 = 0;
  local_31c = 0;
  local_310 = 1;
  local_30c = 0x1f;
  local_2f8 = 0;
  local_2f4 = 1;
  local_2f0 = 0x1f;
  local_2dc = 0;
  local_308 = 0;
  uStack_300 = 0;
  local_2ec = 0;
  local_2e4 = 0;
  local_2d8 = 1;
  local_2d4 = 0x1f;
  local_2c0 = 0;
  local_2c8 = 0;
  local_2d0 = 0;
  local_2bc = 1;
  local_2b8 = 0x1f;
  local_2ac = 0;
  local_2b4 = 0;
  local_2a4 = 0;
  local_2a0 = 1;
  local_29c = 0x1f;
  local_288 = 0;
  local_290 = 0;
  local_298 = 0;
  local_284 = 1;
  local_280 = 0;
  uVar9 = (uint)*(byte *)(param_1 + 0x7c);
  lVar6 = FUN_00933eec(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xd0));
  uVar12 = *(uint *)(param_1 + 0x84);
  bVar3 = *(byte *)(*(long *)(lVar6 + 0x70) + 0x368);
  uVar10 = (ulong)bVar3;
  if (0 < (int)uVar12) {
    if (bVar3 == 0) {
      if (1 < (int)uVar12) {
        uVar15 = 1;
        do {
          uVar15 = uVar15 + 1;
        } while ((int)(uVar15 & 0xff) < (int)uVar12);
      }
    }
    else {
      uVar19 = 0;
      do {
        lVar20 = 0;
        do {
          pbVar16 = local_4b0 + lVar20 + (uVar19 & 0xff) * 0x70;
          bVar4 = *(byte *)(param_1 + (uVar19 & 0xff) + 0x7d);
          iVar14 = *(int *)(*(long *)(lVar6 + 0x70) + lVar20 + 0x300);
          *pbVar16 = bVar4;
          *(int *)(pbVar16 + 4) = iVar14;
          lVar7 = FUN_00933eec(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xd0),uVar9);
          lVar8 = FUN_00933eec(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xd0),bVar4);
          if (lVar7 == 0 || lVar8 == 0) {
LAB_008d7adc:
            bVar5 = false;
          }
          else {
            bVar5 = false;
            if (*(short *)(*(long *)(lVar8 + 0x70) + 0x74) != 0) {
              lVar7 = *(long *)(lVar7 + 0x70);
              if (iVar14 == 0) {
                uVar13 = 4;
              }
              else if (*(int *)(lVar7 + 0x300) == iVar14) {
                uVar13 = 0;
              }
              else if (*(int *)(lVar7 + 0x31c) == iVar14) {
                uVar13 = 1;
              }
              else if (*(int *)(lVar7 + 0x338) == iVar14) {
                uVar13 = 2;
              }
              else {
                uVar15 = 3;
                if (*(int *)(lVar7 + 0x354) != iVar14) {
                  uVar15 = 4;
                }
                uVar13 = (ulong)uVar15;
              }
              if ((uint)*(byte *)(lVar7 + 0x368) <= (uint)uVar13) goto LAB_008d7adc;
              bVar5 = *(char *)(lVar7 + uVar13 * 0x1c + 0x304) != '\0';
            }
          }
          pbVar16[0x18] = bVar5;
          lVar20 = lVar20 + 0x1c;
        } while (uVar10 * 0x1c != lVar20);
        uVar15 = (int)uVar19 + 1;
        uVar19 = (ulong)uVar15;
      } while ((int)(uVar15 & 0xff) < (int)uVar12);
    }
    if (bVar3 == 0) {
      if (1 < (int)uVar12) {
        uVar9 = 1;
        do {
          uVar9 = uVar9 + 1;
        } while ((int)(uVar9 & 0xff) < (int)uVar12);
      }
    }
    else {
      lVar20 = uVar10 * 0x1c;
      uVar19 = 0;
      do {
        lVar7 = (uVar19 & 0xff) * 0x70 + -0x4b0;
        pbVar16 = (byte *)((char *)(param_1 + 0x78) + (uVar19 & 0xff) + 5);
        if (*(char *)(param_1 + 0x78) != '\0') {
          lVar8 = 0;
          do {
            pbVar18 = local_4b0 + lVar8 + lVar7 + 0x4b0;
            if (pbVar18[0x18] != 0) {
              bVar4 = *pbVar16;
              uVar1 = *(undefined4 *)(*(long *)(lVar6 + 0x70) + lVar8 + 0x300);
              local_274 = (uint)bVar4;
              *(undefined4 *)(param_1 + 0x54) = 0;
              iStack_150 = 0x38b5eee;
              uStack_14c = 0;
              local_158[0] = 0x3f;
              local_158[1] = 0x32;
              local_158[2] = 0x92;
              local_158[3] = 0xbd;
              iStack_154 = 0x12613b07;
              local_148[0] = 2;
              local_148[1] = 0;
              local_148[2] = 0;
              local_148[3] = 0;
              local_148[4] = 0;
              local_148[5] = 0;
              local_148[6] = 0;
              local_148[7] = 0;
              local_248[2] = 0x3955aa0;
              uStack_23c = 0;
              local_248[0] = 0x5bbdb2d0;
              local_248[1] = 0x810e44b5;
              local_238 = 0xb;
              local_260 = "Evaluate";
              local_268 = 0xac6f7f3f8855b6a;
              local_148[8] = 0;
              local_148[9] = 0;
              local_148[10] = 0;
              local_148[0xb] = 0;
              local_148[0xc] = 0;
              local_148[0xd] = 0;
              local_148[0xe] = 0;
              local_148[0xf] = 0;
              local_230 = 0;
              uStack_22c = 0;
              local_250 = 0;
              local_258 = 8;
              local_278 = uVar9;
              local_270 = uVar1;
              FUN_008d8564(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x68),local_158,local_248,
                           &local_268,*(undefined8 *)(param_1 + 0x70),&local_278);
              uVar2 = *(undefined4 *)(param_1 + 0x54);
              *pbVar18 = bVar4;
              *(undefined4 *)(pbVar18 + 4) = uVar1;
              *(undefined4 *)(pbVar18 + 8) = uVar2;
            }
            lVar8 = lVar8 + 0x1c;
          } while (lVar20 != lVar8);
        }
        if (*(char *)(param_1 + 0x79) != '\0') {
          lVar8 = 0;
          do {
            pbVar18 = local_4b0 + lVar8 + lVar7 + 0x4b0;
            if (pbVar18[0x18] != 0) {
              bVar4 = *pbVar16;
              uVar1 = *(undefined4 *)(*(long *)(lVar6 + 0x70) + lVar8 + 0x300);
              local_274 = (uint)bVar4;
              *(undefined4 *)(param_1 + 0x54) = 0;
              iStack_150 = 0x38b5eee;
              uStack_14c = 0;
              local_158[0] = 0x3f;
              local_158[1] = 0x32;
              local_158[2] = 0x92;
              local_158[3] = 0xbd;
              iStack_154 = 0x12613b07;
              local_148[0] = 2;
              local_148[1] = 0;
              local_148[2] = 0;
              local_148[3] = 0;
              local_148[4] = 0;
              local_148[5] = 0;
              local_148[6] = 0;
              local_148[7] = 0;
              local_248[2] = 0x38dd4ff;
              uStack_23c = 0;
              local_248[0] = -0x7fb9a25b;
              local_248[1] = 0x9df3aec;
              local_238 = 0xc;
              local_260 = "Evaluate";
              local_268 = 0xac6f7f3f8855b6a;
              local_148[8] = 0;
              local_148[9] = 0;
              local_148[10] = 0;
              local_148[0xb] = 0;
              local_148[0xc] = 0;
              local_148[0xd] = 0;
              local_148[0xe] = 0;
              local_148[0xf] = 0;
              local_230 = 0;
              uStack_22c = 0;
              local_250 = 0;
              local_258 = 8;
              local_278 = uVar9;
              local_270 = uVar1;
              FUN_008d8564(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x68),local_158,local_248,
                           &local_268,*(undefined8 *)(param_1 + 0x70),&local_278);
              uVar2 = *(undefined4 *)(param_1 + 0x54);
              *pbVar18 = bVar4;
              *(undefined4 *)(pbVar18 + 4) = uVar1;
              *(undefined4 *)(pbVar18 + 0xc) = uVar2;
            }
            lVar8 = lVar8 + 0x1c;
          } while (lVar20 != lVar8);
        }
        if (*(char *)(param_1 + 0x7a) != '\0') {
          lVar8 = 0;
          do {
            pbVar18 = local_4b0 + lVar8 + lVar7 + 0x4b0;
            if (pbVar18[0x18] != 0) {
              bVar4 = *pbVar16;
              uVar1 = *(undefined4 *)(*(long *)(lVar6 + 0x70) + lVar8 + 0x300);
              local_274 = (uint)bVar4;
              *(undefined4 *)(param_1 + 0x54) = 0;
              iStack_150 = 0x38b5eee;
              uStack_14c = 0;
              local_158[0] = 0x3f;
              local_158[1] = 0x32;
              local_158[2] = 0x92;
              local_158[3] = 0xbd;
              iStack_154 = 0x12613b07;
              local_148[0] = 2;
              local_148[1] = 0;
              local_148[2] = 0;
              local_148[3] = 0;
              local_148[4] = 0;
              local_148[5] = 0;
              local_148[6] = 0;
              local_148[7] = 0;
              local_248[2] = 0x391ae3a;
              uStack_23c = 0;
              local_248[0] = 0x6a155c4a;
              local_248[1] = 0xed64418e;
              local_238 = 0xc;
              local_260 = "Evaluate";
              local_268 = 0xac6f7f3f8855b6a;
              local_148[8] = 0;
              local_148[9] = 0;
              local_148[10] = 0;
              local_148[0xb] = 0;
              local_148[0xc] = 0;
              local_148[0xd] = 0;
              local_148[0xe] = 0;
              local_148[0xf] = 0;
              local_230 = 0;
              uStack_22c = 0;
              local_250 = 0;
              local_258 = 8;
              local_278 = uVar9;
              local_270 = uVar1;
              FUN_008d8564(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x68),local_158,local_248,
                           &local_268,*(undefined8 *)(param_1 + 0x70),&local_278);
              uVar2 = *(undefined4 *)(param_1 + 0x54);
              *pbVar18 = bVar4;
              *(undefined4 *)(pbVar18 + 4) = uVar1;
              *(undefined4 *)(pbVar18 + 0x10) = uVar2;
            }
            lVar8 = lVar8 + 0x1c;
          } while (lVar20 != lVar8);
        }
        if (*(char *)(param_1 + 0x7b) != '\0') {
          lVar8 = 0;
          do {
            pbVar18 = local_4b0 + lVar8 + lVar7 + 0x4b0;
            if (pbVar18[0x18] != 0) {
              bVar4 = *pbVar16;
              uVar1 = *(undefined4 *)(*(long *)(lVar6 + 0x70) + lVar8 + 0x300);
              local_274 = (uint)bVar4;
              *(undefined4 *)(param_1 + 0x54) = 0;
              iStack_150 = 0x38b5eee;
              uStack_14c = 0;
              local_158[0] = 0x3f;
              local_158[1] = 0x32;
              local_158[2] = 0x92;
              local_158[3] = 0xbd;
              iStack_154 = 0x12613b07;
              local_148[0] = 2;
              local_148[1] = 0;
              local_148[2] = 0;
              local_148[3] = 0;
              local_148[4] = 0;
              local_148[5] = 0;
              local_148[6] = 0;
              local_148[7] = 0;
              local_248[2] = 0x397bfce;
              uStack_23c = 0;
              local_248[0] = 0x15c0eccc;
              local_248[1] = 0x671ff5a1;
              local_238 = 0xf;
              local_260 = "Evaluate";
              local_268 = 0xac6f7f3f8855b6a;
              local_148[8] = 0;
              local_148[9] = 0;
              local_148[10] = 0;
              local_148[0xb] = 0;
              local_148[0xc] = 0;
              local_148[0xd] = 0;
              local_148[0xe] = 0;
              local_148[0xf] = 0;
              local_230 = 0;
              uStack_22c = 0;
              local_250 = 0;
              local_258 = 8;
              local_278 = uVar9;
              local_270 = uVar1;
              FUN_008d8564(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x68),local_158,local_248,
                           &local_268,*(undefined8 *)(param_1 + 0x70),&local_278);
              uVar2 = *(undefined4 *)(param_1 + 0x54);
              *pbVar18 = bVar4;
              *(undefined4 *)(pbVar18 + 4) = uVar1;
              *(undefined4 *)(pbVar18 + 0x14) = uVar2;
            }
            lVar8 = lVar8 + 0x1c;
          } while (lVar20 != lVar8);
        }
        uVar15 = (int)uVar19 + 1;
        uVar19 = (ulong)uVar15;
      } while ((int)(uVar15 & 0xff) < (int)uVar12);
    }
  }
  local_280 = CONCAT11((char)uVar12,bVar3);
  local_158[0] = 0x1f;
  iStack_154 = 0;
  iStack_150 = -0x80000000;
  uStack_14c = CONCAT31(uStack_14c._1_3_,0x1f);
  local_148[0] = 0;
  local_148[1] = 0;
  local_148[2] = 0;
  local_148[3] = 0;
  local_148[4] = 0;
  local_148[5] = 0;
  local_148[6] = 0;
  local_148[7] = 0x80;
  local_148[8] = 0x1f;
  local_148[0xc] = 0;
  local_148[0xd] = 0;
  local_148[0xe] = 0;
  local_148[0xf] = 0;
  local_148[0x10] = 0;
  local_148[0x11] = 0;
  local_148[0x12] = 0;
  local_148[0x13] = 0x80;
  local_148[0x14] = 0x1f;
  local_130 = 0x8000000000000000;
  local_128 = 0x1f;
  local_124 = 0x8000000000000000;
  local_11c = 0x1f;
  local_118 = 0x8000000000000000;
  local_110 = 0x1f;
  local_10c = 0x8000000000000000;
  local_104 = 0x1f;
  local_100 = 0x8000000000000000;
  local_f8 = 0x1f;
  local_f4 = 0x8000000000000000;
  local_ec = 0x1f;
  local_e8 = 0x8000000000000000;
  local_e0 = 0x1f;
  local_dc = 0x8000000000000000;
  local_d4 = 0x1f;
  local_d0 = 0x8000000000000000;
  local_c8 = 0x1f;
  local_c4 = 0x8000000000000000;
  local_bc = 0x1f;
  local_b8 = 0x8000000000000000;
  local_b0 = 0x1f;
  local_ac = 0x8000000000000000;
  local_a4 = 0x1f;
  local_a0 = 0x8000000000000000;
  local_98 = 0x1f;
  local_94 = 0x8000000000000000;
  local_8c = 0x1f;
  local_88 = 0x8000000000000000;
  local_80 = 0x1f;
  local_7c = 0x8000000000000000;
  local_74 = 0x1f;
  local_70 = 0x8000000000000000;
  if ((bVar3 != 0) && ((uVar12 & 0xff) != 0)) {
    uVar19 = 0;
    uVar13 = 0;
    pbVar16 = local_440;
    do {
      if (local_4ac[uVar19 * 0x70 + 0x14] != 0) {
        lVar6 = uVar19 * 0x70;
        local_148[(uVar13 * 3 + -4) * 4] = local_4b0[lVar6];
        iVar14 = *(int *)(local_4ac + lVar6 + 4);
        *(undefined4 *)(local_148 + (uVar13 * 3 + -3) * 4) = *(undefined4 *)(local_4ac + lVar6);
        *(int *)(local_148 + (uVar13 * 3 + -2) * 4) =
             *(int *)(local_4ac + lVar6 + 8) + iVar14 + *(int *)(local_4ac + lVar6 + 0xc) +
             *(int *)(local_4ac + lVar6 + 0x10);
        uVar13 = (ulong)((int)uVar13 + 1);
      }
      if (bVar3 != 1) {
        if (local_47c[uVar19 * 0x70] != '\0') {
          local_148[(uVar13 * 3 + -4) * 4] = local_494[uVar19 * 0x70];
          iVar14 = local_488[uVar19 * 0x1c + -1];
          *(undefined4 *)(local_148 + (uVar13 * 3 + -3) * 4) =
               *(undefined4 *)(local_494 + uVar19 * 0x70 + 4);
          *(int *)(local_148 + (uVar13 * 3 + -2) * 4) =
               local_488[uVar19 * 0x1c] + iVar14 + local_488[uVar19 * 0x1c + 1] +
               local_488[uVar19 * 0x1c + 2];
          uVar13 = (ulong)((int)uVar13 + 1);
        }
        if (bVar3 != 2) {
          if (local_460[uVar19 * 0x70] != '\0') {
            local_148[(uVar13 * 3 + -4) * 4] = local_478[uVar19 * 0x70];
            iVar14 = local_46c[uVar19 * 0x1c + -1];
            *(undefined4 *)(local_148 + (uVar13 * 3 + -3) * 4) =
                 *(undefined4 *)(local_478 + uVar19 * 0x70 + 4);
            *(int *)(local_148 + (uVar13 * 3 + -2) * 4) =
                 local_46c[uVar19 * 0x1c] + iVar14 + local_46c[uVar19 * 0x1c + 1] +
                 local_46c[uVar19 * 0x1c + 2];
            uVar13 = (ulong)((int)uVar13 + 1);
          }
          if (bVar3 != 3) {
            if (local_444[uVar19 * 0x70] != '\0') {
              local_148[(uVar13 * 3 + -4) * 4] = local_45c[uVar19 * 0x70];
              iVar14 = aiStack_450[uVar19 * 0x1c + -1];
              *(undefined4 *)(local_148 + (uVar13 * 3 + -3) * 4) =
                   *(undefined4 *)(local_45c + uVar19 * 0x70 + 4);
              *(int *)(local_148 + (uVar13 * 3 + -2) * 4) =
                   aiStack_450[uVar19 * 0x1c] + iVar14 + aiStack_450[uVar19 * 0x1c + 1] +
                   aiStack_450[uVar19 * 0x1c + 2];
              uVar13 = (ulong)((int)uVar13 + 1);
            }
            if (bVar3 != 4) {
              uVar11 = uVar13;
              pbVar18 = pbVar16;
              lVar6 = uVar10 - 4;
              do {
                uVar13 = uVar11;
                if (pbVar18[0x18] != 0) {
                  uVar13 = (ulong)((int)uVar11 + 1);
                  local_148[(uVar11 * 3 + -4) * 4] = *pbVar18;
                  iVar14 = *(int *)(pbVar18 + 8);
                  *(undefined4 *)(local_148 + (uVar11 * 3 + -3) * 4) = *(undefined4 *)(pbVar18 + 4);
                  *(int *)(local_148 + (uVar11 * 3 + -2) * 4) =
                       *(int *)(pbVar18 + 0xc) + iVar14 + *(int *)(pbVar18 + 0x10) +
                       *(int *)(pbVar18 + 0x14);
                }
                lVar6 = lVar6 + -1;
                pbVar18 = pbVar18 + 0x1c;
                uVar11 = uVar13;
              } while (lVar6 != 0);
            }
          }
        }
      }
      uVar19 = uVar19 + 1;
      pbVar16 = pbVar16 + 0x70;
    } while (uVar19 != ((ulong)uVar12 & 0xff));
    if ((int)uVar13 != 0) goto LAB_008d825c;
  }
  iVar14 = *(int *)(param_1 + 0x84);
  if (0 < iVar14) {
    uVar12 = 0;
    do {
      bVar3 = *(byte *)(param_1 + (ulong)(byte)uVar12 + 0x7d);
      uVar10 = (ulong)uVar12;
      uVar12 = uVar12 + 1;
      pbVar16 = local_148 + (uVar10 * 3 + -3) * 4;
      pbVar16[0] = 0xa5;
      pbVar16[1] = 0;
      pbVar16[2] = 0;
      pbVar16[3] = 0;
      pbVar16[4] = 0;
      pbVar16[5] = 0;
      pbVar16[6] = 0;
      pbVar16[7] = 0;
      local_148[(uVar10 * 3 + -4) * 4] = bVar3;
    } while ((int)(uVar12 & 0xff) < iVar14);
  }
LAB_008d825c:
  FUN_008db320(local_158,auStack_68);
  local_248[0] = CONCAT31(local_248[0]._1_3_,0x1f);
  local_248[1] = 0;
  local_248[2] = 0x80000000;
  uStack_23c = CONCAT31(uStack_23c._1_3_,0x1f);
  local_238 = 0x8000000000000000;
  local_230 = CONCAT31(local_230._1_3_,0x1f);
  uStack_22c = 0;
  uStack_228 = 0x80000000;
  local_224 = 0x1f;
  local_220 = 0x8000000000000000;
  local_218 = 0x1f;
  local_214 = 0x8000000000000000;
  local_20c = 0x1f;
  local_208 = 0x8000000000000000;
  local_200 = 0x1f;
  local_1fc = 0x8000000000000000;
  local_1f4 = 0x1f;
  local_1f0 = 0x8000000000000000;
  local_1e8 = 0x1f;
  local_1e4 = 0x8000000000000000;
  local_1dc = 0x1f;
  local_1d8 = 0x8000000000000000;
  local_1d0 = 0x1f;
  local_1cc = 0x8000000000000000;
  local_1c4 = 0x1f;
  local_1c0 = 0x8000000000000000;
  local_1b8 = 0x1f;
  local_1b4 = 0x8000000000000000;
  local_1ac = 0x1f;
  local_1a8 = 0x8000000000000000;
  local_1a0 = 0x1f;
  local_19c = 0x8000000000000000;
  local_194 = 0x1f;
  local_190 = 0x8000000000000000;
  local_188 = 0x1f;
  local_184 = 0x8000000000000000;
  local_17c = 0x1f;
  local_178 = 0x8000000000000000;
  local_170 = 0x1f;
  local_16c = 0x8000000000000000;
  local_164 = 0x1f;
  lVar6 = 0;
  local_160 = 0x8000000000000000;
  if (iStack_154 != 0) {
    uVar10 = 0;
    iVar14 = iStack_154;
    iVar17 = iStack_150;
    do {
      if (iVar17 == iStack_150) {
        uVar19 = uVar10 & 0xff;
        uVar10 = (ulong)((int)uVar10 + 1);
        local_248[uVar19 * 3] = *(int *)(local_148 + lVar6 + -0x10);
        local_248[uVar19 * 3 + 1] = iVar14;
        local_248[uVar19 * 3 + 2] = iStack_150;
      }
      if (lVar6 == 0xe4) break;
      iVar14 = *(int *)(local_148 + lVar6);
      iVar17 = *(int *)(local_148 + lVar6 + 4);
      lVar6 = lVar6 + 0xc;
    } while (iVar14 != 0);
    uVar12 = (uint)uVar10 & 0xff;
    if (uVar12 < 2) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0x1f;
      if ((0x7fffffffU >> (ulong)((uint)LZCOUNT(uVar12) & 0x1f) & uVar12) != 0) {
        lVar6 = 0x20;
      }
      lVar20 = *(long *)(*(long *)(param_1 + 0x60) + 0xc0);
      uVar19 = lVar6 - LZCOUNT(uVar12);
      uVar10 = uVar19 >> 6;
      if ((uVar19 & 0x3f) != 0) {
        uVar10 = uVar10 + 1;
      }
      if (uVar19 < uVar10) {
        uVar9 = 0;
      }
      else {
        uVar13 = 0;
        if (uVar10 != 0) {
          uVar13 = uVar19 / uVar10;
        }
        uVar9 = (uint)(0xffffffffffffffff >> (-uVar13 & 0x3f));
      }
      uVar10 = *(ulong *)(lVar20 + 0x70);
      uVar19 = *(ulong *)(lVar20 + 0x78);
      do {
        uVar13 = uVar10 ^ uVar19;
        iVar14 = (int)uVar19;
        uVar19 = uVar13 >> 0x1b | uVar13 << 0x25;
        uVar15 = (int)uVar10 + iVar14 & uVar9;
        uVar10 = uVar13 ^ (uVar10 >> 0x28 | uVar10 << 0x18) ^ uVar13 << 0x10;
      } while (uVar12 <= uVar15);
      lVar6 = (long)(int)uVar15;
      *(ulong *)(lVar20 + 0x70) = uVar10;
      *(ulong *)(lVar20 + 0x78) = uVar19;
    }
  }
  *(char *)(param_1 + 0x88) = (char)local_248[lVar6 * 3];
  iVar14 = local_248[lVar6 * 3 + 2];
  *(int *)(param_1 + 0x8c) = local_248[lVar6 * 3 + 1];
  *(int *)(param_1 + 0x54) = iVar14;
  return;
}


