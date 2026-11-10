/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013dbb78; name: FUN_013dbb78
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013dbb78(undefined4 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  undefined2 uVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  uint *puVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  ulong uVar22;
  short *psVar23;
  ulong uVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  byte bVar29;
  byte bVar30;
  long *plVar31;
  byte bVar32;
  undefined1 uVar33;
  uint uVar34;
  byte bVar35;
  ulong uVar36;
  char local_db0 [4];
  char local_dac [4];
  char local_da8 [4];
  short local_da4 [2];
  uint local_da0;
  undefined2 local_d9c [2];
  uint local_d98 [510];
  uint local_5a0 [2];
  short local_598 [2];
  uint uStack_594;
  undefined4 uStack_590;
  undefined2 local_58c;
  undefined8 local_588;
  undefined2 local_580;
  undefined8 local_57c;
  undefined2 local_574;
  undefined8 local_570;
  undefined2 local_568;
  undefined8 local_564;
  undefined2 local_55c;
  undefined8 local_558;
  undefined2 local_550;
  undefined8 local_54c;
  undefined2 local_544;
  undefined8 local_540;
  undefined2 local_538;
  undefined8 local_534;
  undefined2 local_52c;
  undefined8 local_528;
  undefined2 local_520;
  undefined8 local_51c;
  undefined2 local_514;
  undefined8 local_510;
  undefined2 local_508;
  undefined8 local_504;
  undefined2 local_4fc;
  undefined8 local_4f8;
  undefined2 local_4f0;
  undefined8 local_4ec;
  undefined2 local_4e4;
  undefined8 local_4e0;
  undefined2 local_4d8;
  undefined8 local_4d4;
  undefined2 local_4cc;
  undefined8 local_4c8;
  undefined2 local_4c0;
  undefined8 local_4bc;
  undefined2 local_4b4;
  undefined8 local_4b0;
  undefined2 local_4a8;
  undefined8 local_4a4;
  undefined2 local_49c;
  undefined8 local_498;
  undefined2 local_490;
  undefined8 local_48c;
  undefined2 local_484;
  undefined8 local_480;
  undefined2 local_478;
  undefined8 local_474;
  undefined2 local_46c;
  undefined8 local_468;
  undefined2 local_460;
  undefined8 local_45c;
  undefined2 local_454;
  undefined8 local_450;
  undefined2 local_448;
  undefined8 local_444;
  undefined2 local_43c;
  undefined8 local_438;
  undefined2 local_430;
  undefined8 local_42c;
  undefined2 local_424;
  undefined8 local_420;
  undefined2 local_418;
  undefined8 local_414;
  undefined2 local_40c;
  undefined8 local_408;
  undefined2 local_400;
  undefined8 local_3fc;
  undefined2 local_3f4;
  undefined8 local_3f0;
  undefined2 local_3e8;
  undefined8 local_3e4;
  undefined2 local_3dc;
  undefined8 local_3d8;
  undefined2 local_3d0;
  undefined8 local_3cc;
  undefined2 local_3c4;
  undefined8 local_3c0;
  undefined2 local_3b8;
  undefined8 local_3b4;
  undefined2 local_3ac;
  undefined8 local_3a8;
  undefined2 local_3a0;
  undefined8 local_39c;
  undefined2 local_394;
  undefined8 local_390;
  undefined2 local_388;
  undefined8 local_384;
  undefined2 local_37c;
  undefined8 local_378;
  undefined2 local_370;
  undefined8 local_36c;
  undefined2 local_364;
  undefined8 local_360;
  undefined2 local_358;
  undefined8 local_354;
  undefined2 local_34c;
  undefined8 local_348;
  undefined2 local_340;
  undefined8 local_33c;
  undefined2 local_334;
  undefined8 local_330;
  undefined2 local_328;
  undefined8 local_324;
  undefined2 local_31c;
  undefined8 local_318;
  undefined2 local_310;
  undefined8 local_30c;
  undefined2 local_304;
  undefined8 local_300;
  undefined2 local_2f8;
  undefined8 local_2f4;
  undefined2 local_2ec;
  undefined8 local_2e8;
  undefined2 local_2e0;
  undefined8 local_2dc;
  undefined2 local_2d4;
  undefined8 local_2d0;
  undefined2 local_2c8;
  undefined8 local_2c4;
  undefined2 local_2bc;
  undefined8 local_2b8;
  undefined2 local_2b0;
  undefined8 local_2ac;
  undefined2 local_2a4;
  undefined8 local_2a0;
  undefined2 local_298;
  undefined8 local_294;
  undefined2 local_28c;
  undefined8 local_288;
  undefined2 local_280;
  undefined8 local_27c;
  undefined2 local_274;
  undefined8 local_270;
  undefined2 local_268;
  undefined8 local_264;
  undefined2 local_25c;
  undefined8 local_258;
  undefined2 local_250;
  undefined8 local_24c;
  undefined2 local_244;
  undefined8 local_240;
  undefined2 local_238;
  undefined8 local_234;
  undefined2 local_22c;
  undefined8 local_228;
  undefined2 local_220;
  undefined8 local_21c;
  undefined2 local_214;
  undefined8 local_210;
  undefined2 local_208;
  undefined8 local_204;
  undefined2 local_1fc;
  undefined8 local_1f8;
  undefined2 local_1f0;
  undefined8 local_1ec;
  undefined2 local_1e4;
  undefined8 local_1e0;
  undefined2 local_1d8;
  undefined8 local_1d4;
  undefined2 local_1cc;
  undefined8 local_1c8;
  undefined2 local_1c0;
  undefined8 local_1bc;
  undefined2 local_1b4;
  undefined8 local_1b0;
  undefined2 local_1a8;
  undefined8 local_1a4;
  undefined2 local_19c;
  undefined8 local_198;
  undefined2 local_190;
  undefined8 local_18c;
  undefined2 local_184;
  undefined8 local_180;
  undefined2 local_178;
  undefined8 local_174;
  undefined2 local_16c;
  undefined8 local_168;
  undefined2 local_160;
  undefined8 local_15c;
  undefined2 local_154;
  undefined8 local_150;
  undefined2 local_148;
  undefined8 local_144;
  undefined2 local_13c;
  undefined8 local_138;
  undefined2 local_130;
  undefined8 local_12c;
  undefined2 local_124;
  undefined8 local_120;
  undefined2 local_118;
  undefined8 local_114;
  undefined2 local_10c;
  undefined8 local_108;
  undefined2 local_100;
  undefined8 local_fc;
  undefined2 local_f4;
  undefined8 local_f0;
  undefined2 local_e8;
  undefined8 local_e4;
  undefined2 local_dc;
  undefined8 local_d8;
  undefined2 local_d0;
  undefined8 local_cc;
  undefined2 local_c4;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined8 local_b4;
  undefined2 local_ac;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined8 local_9c;
  undefined2 local_94;
  undefined8 local_90;
  undefined2 local_88;
  undefined8 local_84;
  undefined2 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379558), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar17 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar17;
  plVar31 = *(long **)(lVar17 + 0x298);
  if (plVar31 != (long *)0x0) {
    lVar17 = plVar31[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar11) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_598[0] = 0;
  uStack_594 = 0;
  uStack_590 = 0;
  local_58c = 0;
  local_588 = 0;
  local_580 = 0;
  local_57c = 0;
  local_574 = 0;
  local_570 = 0;
  local_568 = 0;
  local_564 = 0;
  local_55c = 0;
  local_558 = 0;
  local_550 = 0;
  local_54c = 0;
  local_544 = 0;
  local_540 = 0;
  local_538 = 0;
  local_534 = 0;
  local_52c = 0;
  local_528 = 0;
  local_520 = 0;
  local_51c = 0;
  local_514 = 0;
  local_510 = 0;
  local_508 = 0;
  local_504 = 0;
  local_4fc = 0;
  local_4f8 = 0;
  local_4f0 = 0;
  local_4ec = 0;
  local_4e4 = 0;
  local_4e0 = 0;
  local_4d8 = 0;
  local_4d4 = 0;
  local_4cc = 0;
  local_4c8 = 0;
  local_4c0 = 0;
  local_4bc = 0;
  local_4b4 = 0;
  local_4b0 = 0;
  local_4a8 = 0;
  local_4a4 = 0;
  local_49c = 0;
  local_498 = 0;
  local_490 = 0;
  local_48c = 0;
  local_484 = 0;
  local_480 = 0;
  local_478 = 0;
  local_474 = 0;
  local_46c = 0;
  local_468 = 0;
  local_460 = 0;
  local_45c = 0;
  local_454 = 0;
  local_450 = 0;
  local_448 = 0;
  local_444 = 0;
  local_43c = 0;
  local_438 = 0;
  local_430 = 0;
  local_42c = 0;
  local_424 = 0;
  local_420 = 0;
  local_418 = 0;
  local_414 = 0;
  local_40c = 0;
  local_408 = 0;
  local_400 = 0;
  local_3fc = 0;
  local_3f4 = 0;
  local_3f0 = 0;
  local_3e8 = 0;
  local_3e4 = 0;
  local_3dc = 0;
  local_3d8 = 0;
  local_3d0 = 0;
  local_3cc = 0;
  local_3c4 = 0;
  local_3c0 = 0;
  local_3b8 = 0;
  local_3b4 = 0;
  local_3ac = 0;
  local_3a8 = 0;
  local_3a0 = 0;
  local_39c = 0;
  local_394 = 0;
  local_390 = 0;
  local_388 = 0;
  local_384 = 0;
  local_37c = 0;
  local_378 = 0;
  local_370 = 0;
  local_36c = 0;
  local_364 = 0;
  local_360 = 0;
  local_358 = 0;
  local_354 = 0;
  local_34c = 0;
  local_348 = 0;
  local_340 = 0;
  local_33c = 0;
  local_334 = 0;
  local_330 = 0;
  local_328 = 0;
  local_324 = 0;
  local_31c = 0;
  local_318 = 0;
  local_310 = 0;
  local_30c = 0;
  local_304 = 0;
  local_300 = 0;
  local_2f8 = 0;
  local_2f4 = 0;
  local_2ec = 0;
  local_2e8 = 0;
  local_2e0 = 0;
  local_2dc = 0;
  local_2d4 = 0;
  local_2d0 = 0;
  local_2c8 = 0;
  local_2c4 = 0;
  local_2bc = 0;
  local_2b8 = 0;
  local_2b0 = 0;
  local_2ac = 0;
  local_2a4 = 0;
  local_2a0 = 0;
  local_298 = 0;
  local_294 = 0;
  local_28c = 0;
  local_288 = 0;
  local_280 = 0;
  local_27c = 0;
  local_274 = 0;
  local_270 = 0;
  local_268 = 0;
  local_264 = 0;
  local_25c = 0;
  local_258 = 0;
  local_250 = 0;
  local_24c = 0;
  local_244 = 0;
  local_240 = 0;
  local_238 = 0;
  local_234 = 0;
  local_22c = 0;
  local_228 = 0;
  local_220 = 0;
  local_21c = 0;
  local_214 = 0;
  local_210 = 0;
  local_208 = 0;
  local_204 = 0;
  local_1fc = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 0;
  local_1e4 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d4 = 0;
  local_1cc = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 0;
  local_1b4 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a4 = 0;
  local_19c = 0;
  local_198 = 0;
  local_190 = 0;
  local_18c = 0;
  local_184 = 0;
  local_180 = 0;
  local_178 = 0;
  local_174 = 0;
  local_16c = 0;
  local_168 = 0;
  local_160 = 0;
  local_15c = 0;
  local_154 = 0;
  local_150 = 0;
  local_148 = 0;
  local_144 = 0;
  local_13c = 0;
  local_138 = 0;
  local_130 = 0;
  local_12c = 0;
  local_124 = 0;
  local_120 = 0;
  local_118 = 0;
  local_114 = 0;
  local_10c = 0;
  local_108 = 0;
  local_100 = 0;
  local_fc = 0;
  local_f4 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e4 = 0;
  local_dc = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_94 = 0;
  local_90 = 0;
  local_88 = 0;
  local_84 = 0;
  local_7c = 0;
  local_78 = 0;
  local_70 = 0;
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379678), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar17 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar17;
  plVar15 = *(long **)(lVar17 + 0xd0);
  if (plVar15 == (long *)0x0) {
    lVar17 = _DAT_00000168;
  }
  else {
    plVar2 = plVar15 + 10;
    do {
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar11) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    lVar17 = plVar15[0x2d];
    do {
      iVar13 = (int)*plVar2 + -1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar11) {
        *(int *)plVar2 = iVar13;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 == 0) {
      (**(code **)(*plVar15 + 0x10))();
    }
  }
  puVar18 = &local_da0;
  do {
    *puVar18 = 0;
    *(undefined2 *)(puVar18 + 1) = 0;
    puVar18[2] = 0;
    *(undefined4 *)((long)puVar18 + 0xb) = 0;
    puVar18[4] = 0;
    *(undefined2 *)(puVar18 + 5) = 0;
    puVar18[6] = 0;
    *(undefined4 *)((long)puVar18 + 0x1b) = 0;
    puVar18[8] = 0;
    *(undefined2 *)(puVar18 + 9) = 0;
    puVar18[10] = 0;
    *(undefined4 *)((long)puVar18 + 0x2b) = 0;
    puVar18[0xc] = 0;
    *(undefined2 *)(puVar18 + 0xd) = 0;
    puVar18[0xe] = 0;
    *(undefined4 *)((long)puVar18 + 0x3b) = 0;
    puVar18 = puVar18 + 0x10;
  } while (puVar18 != local_5a0);
  local_5a0[0] = 0;
  FUN_00d3ed48(lVar17,*param_1,&local_da0);
  if (local_5a0[0] != 0) {
    uVar36 = 0;
    uVar25 = 0;
    uVar34 = 0;
    lVar17 = (long)plVar31 + 0x6c;
    puVar18 = local_d98;
    do {
      if (uVar36 == 0x80) goto LAB_013dd0bc;
      if (*puVar18 < 6) {
        uVar3 = puVar18[-2];
        uVar5 = (undefined2)puVar18[-1];
        switch(*puVar18) {
        case 0:
          lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
          if ((lVar16 == 0) || ((*(byte *)(lVar16 + 5) & 1) == 0)) {
            lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
            if (lVar16 == 0) {
              bVar30 = 0;
            }
            else {
              bVar30 = *(byte *)(lVar16 + 4) & 1;
            }
            bVar11 = false;
          }
          else {
            bVar30 = 0;
            bVar11 = true;
          }
          lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
          bVar32 = bVar30;
          if ((lVar16 == 0) || ((*(byte *)(lVar16 + 5) >> 2 & 1) == 0)) {
            lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
            if (lVar16 == 0) {
              bVar29 = 0;
            }
            else {
              bVar29 = *(byte *)(lVar16 + 4) >> 2 & 1;
              if ((*(byte *)(lVar16 + 4) & 4) != 0) {
                bVar32 = 1;
              }
            }
            bVar8 = 0;
            uVar33 = bVar11;
          }
          else {
            bVar29 = 0;
            bVar8 = 1;
            uVar33 = true;
          }
          lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
          if ((lVar16 == 0) || ((*(byte *)(lVar16 + 5) >> 4 & 1) == 0)) {
            lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
            if (lVar16 == 0) {
              bVar35 = 0;
            }
            else {
              bVar35 = *(byte *)(lVar16 + 4) >> 4 & 1;
              if ((*(byte *)(lVar16 + 4) & 0x10) != 0) {
                bVar32 = 1;
              }
            }
            bVar12 = false;
          }
          else {
            bVar35 = 0;
            uVar33 = true;
            bVar12 = true;
          }
          lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
          if ((lVar16 != 0) && ((*(byte *)(lVar16 + 5) >> 6 & 1) != 0)) {
LAB_013dcc10:
            uVar19 = (ulong)bVar11;
            uVar24 = (ulong)bVar8;
            bVar12 = !bVar12;
LAB_013dcc1c:
            uVar27 = (ulong)!bVar12;
            uVar28 = 1;
            goto LAB_013dc310;
          }
          lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
          if (lVar16 == 0) {
            bVar4 = 0;
          }
          else {
            bVar4 = *(byte *)(lVar16 + 4) >> 6 & 1;
          }
          uVar21 = (ulong)(bVar30 != 0);
          uVar22 = (ulong)(bVar29 != 0);
          uVar26 = (ulong)(bVar35 != 0);
          uVar19 = (ulong)bVar11;
          uVar24 = (ulong)bVar8;
          uVar27 = (ulong)bVar12;
          if (bVar4 == 0) {
            uVar28 = 0;
            bVar10 = false;
            if ((bool)uVar33) goto LAB_013dc310;
            goto LAB_013dc4ac;
          }
          goto joined_r0x013dcc78;
        case 1:
          lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
          if ((lVar16 == 0) || ((*(byte *)(lVar16 + 5) >> 1 & 1) == 0)) {
            lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
            if (lVar16 == 0) {
              bVar30 = 0;
            }
            else {
              bVar30 = *(byte *)(lVar16 + 4) >> 1 & 1;
            }
            bVar11 = false;
          }
          else {
            bVar30 = 0;
            bVar11 = true;
          }
          lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
          bVar32 = bVar30;
          if ((lVar16 == 0) || ((*(byte *)(lVar16 + 5) >> 3 & 1) == 0)) {
            lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
            if (lVar16 == 0) {
              bVar29 = 0;
            }
            else {
              bVar29 = *(byte *)(lVar16 + 4) >> 3 & 1;
              if ((*(byte *)(lVar16 + 4) & 8) != 0) {
                bVar32 = 1;
              }
            }
            bVar8 = 0;
            uVar33 = bVar11;
          }
          else {
            uVar33 = true;
            bVar29 = 0;
            bVar8 = 1;
          }
          lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
          if ((lVar16 == 0) || ((*(byte *)(lVar16 + 5) >> 5 & 1) == 0)) {
            lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
            if (lVar16 == 0) {
              bVar35 = 0;
            }
            else {
              bVar35 = *(byte *)(lVar16 + 4) >> 5 & 1;
              if ((*(byte *)(lVar16 + 4) & 0x20) != 0) {
                bVar32 = 1;
              }
            }
            bVar12 = false;
          }
          else {
            bVar35 = 0;
            uVar33 = true;
            bVar12 = true;
          }
          lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
          if ((lVar16 != 0) && (*(char *)(lVar16 + 5) < '\0')) goto LAB_013dcc10;
          lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
          if (lVar16 == 0) {
            bVar9 = false;
          }
          else {
            bVar9 = *(char *)(lVar16 + 4) < '\0';
          }
          uVar21 = (ulong)(bVar30 != 0);
          uVar22 = (ulong)(bVar29 != 0);
          uVar26 = (ulong)(bVar35 != 0);
          uVar19 = (ulong)bVar11;
          uVar24 = (ulong)bVar8;
          uVar27 = (ulong)bVar12;
          if (bVar9) goto joined_r0x013dcc78;
          uVar28 = 0;
          if (!(bool)uVar33) {
            bVar10 = false;
            goto LAB_013dc4ac;
          }
          goto LAB_013dc310;
        case 2:
          lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
          if ((lVar16 == 0) || ((*(byte *)(lVar16 + 5) & 1) == 0)) {
            lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
            if (lVar16 == 0) {
              bVar30 = 0;
            }
            else {
              bVar30 = *(byte *)(lVar16 + 4) & 1;
            }
            bVar11 = false;
          }
          else {
            bVar30 = 0;
            bVar11 = true;
          }
          lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
          bVar32 = bVar30;
          if ((lVar16 == 0) || ((*(byte *)(lVar16 + 5) >> 2 & 1) == 0)) {
            lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
            if (lVar16 == 0) {
              bVar29 = 0;
            }
            else {
              bVar29 = *(byte *)(lVar16 + 4) >> 2 & 1;
              if ((*(byte *)(lVar16 + 4) & 4) != 0) {
                bVar32 = 1;
              }
            }
            bVar8 = 0;
            uVar33 = bVar11;
          }
          else {
            bVar29 = 0;
            uVar33 = true;
            bVar8 = 1;
          }
          lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
          if ((lVar16 == 0) || ((*(byte *)(lVar16 + 5) >> 4 & 1) == 0)) {
            lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
            if (lVar16 == 0) {
              bVar35 = 0;
            }
            else {
              bVar35 = *(byte *)(lVar16 + 4) >> 4 & 1;
              if ((*(byte *)(lVar16 + 4) & 0x10) != 0) {
                bVar32 = 1;
              }
            }
            bVar12 = false;
          }
          else {
            bVar35 = 0;
            uVar33 = true;
            bVar12 = true;
          }
          lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
          if (lVar16 != 0) {
            bVar4 = *(byte *)(lVar16 + 5);
joined_r0x013dc960:
            if ((bVar4 >> 6 & 1) != 0) goto LAB_013dcc10;
          }
          break;
        case 3:
          lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
          if ((lVar16 == 0) || ((*(byte *)(lVar16 + 5) & 1) == 0)) {
            lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
            if (lVar16 == 0) {
              bVar30 = 0;
            }
            else {
              bVar30 = *(byte *)(lVar16 + 4) & 1;
            }
            bVar11 = false;
          }
          else {
            bVar30 = 0;
            bVar11 = true;
          }
          lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
          bVar32 = bVar30;
          if ((lVar16 == 0) || ((*(byte *)(lVar16 + 5) >> 2 & 1) == 0)) {
            lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
            if (lVar16 == 0) {
              bVar29 = 0;
            }
            else {
              bVar29 = *(byte *)(lVar16 + 4) >> 2 & 1;
              if ((*(byte *)(lVar16 + 4) & 4) != 0) {
                bVar32 = 1;
              }
            }
            bVar8 = 0;
            uVar33 = bVar11;
          }
          else {
            bVar29 = 0;
            uVar33 = true;
            bVar8 = 1;
          }
          lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
          if ((lVar16 == 0) || ((*(byte *)(lVar16 + 5) >> 4 & 1) == 0)) {
            lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
            if (lVar16 == 0) {
              bVar35 = 0;
            }
            else {
              bVar35 = *(byte *)(lVar16 + 4) >> 4 & 1;
              if ((*(byte *)(lVar16 + 4) & 0x10) != 0) {
                bVar32 = 1;
              }
            }
            bVar12 = false;
          }
          else {
            bVar35 = 0;
            bVar12 = true;
            uVar33 = true;
          }
          lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
          if ((lVar16 == 0) || ((*(byte *)(lVar16 + 5) >> 6 & 1) == 0)) {
            lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
            if (lVar16 == 0) {
              bVar4 = 0;
            }
            else {
              bVar4 = *(byte *)(lVar16 + 4) >> 6 & 1;
              if ((*(byte *)(lVar16 + 4) & 0x40) != 0) {
                bVar32 = 1;
              }
            }
            bVar7 = 0;
          }
          else {
            bVar4 = 0;
            uVar33 = true;
            bVar7 = 1;
          }
          lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
          if ((lVar16 == 0) || ((*(byte *)(lVar16 + 5) >> 1 & 1) == 0)) {
            lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
            if ((lVar16 != 0) && ((*(byte *)(lVar16 + 4) >> 1 & 1) != 0)) {
              bVar32 = 1;
              bVar30 = 1;
            }
          }
          else {
            uVar33 = true;
            bVar11 = true;
          }
          lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
          if ((lVar16 == 0) || ((*(byte *)(lVar16 + 5) >> 3 & 1) == 0)) {
            lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
            if ((lVar16 != 0) && ((*(byte *)(lVar16 + 4) >> 3 & 1) != 0)) {
              bVar32 = 1;
              bVar29 = 1;
            }
          }
          else {
            uVar33 = true;
            bVar8 = 1;
          }
          lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
          if ((lVar16 == 0) || ((*(byte *)(lVar16 + 5) >> 5 & 1) == 0)) {
            lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
            if ((lVar16 != 0) && ((*(byte *)(lVar16 + 4) >> 5 & 1) != 0)) {
              bVar32 = 1;
              bVar35 = 1;
            }
          }
          else {
            uVar33 = true;
            bVar12 = true;
          }
          lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
          if ((lVar16 != 0) && (*(char *)(lVar16 + 5) < '\0')) {
            uVar19 = (ulong)bVar11;
            uVar24 = (ulong)bVar8;
            bVar12 = !bVar12;
            goto LAB_013dcc1c;
          }
          lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
          if (lVar16 == 0) {
            bVar9 = false;
          }
          else {
            bVar9 = *(char *)(lVar16 + 4) < '\0';
          }
          uVar21 = (ulong)(bVar30 != 0);
          uVar22 = (ulong)(bVar29 != 0);
          uVar26 = (ulong)(bVar35 != 0);
          bVar10 = bVar4 != 0;
          uVar19 = (ulong)bVar11;
          uVar24 = (ulong)bVar8;
          uVar27 = (ulong)bVar12;
          uVar28 = (ulong)bVar7;
          if (!bVar9) goto joined_r0x013dc30c;
          if ((bool)uVar33) goto LAB_013dc310;
          goto LAB_013dcc84;
        case 4:
          lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
          if ((lVar16 == 0) || ((*(byte *)(lVar16 + 5) & 1) == 0)) {
            lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
            if (lVar16 == 0) {
              bVar30 = 0;
            }
            else {
              bVar30 = *(byte *)(lVar16 + 4) & 1;
            }
            bVar11 = false;
          }
          else {
            bVar30 = 0;
            bVar11 = true;
          }
          lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
          bVar32 = bVar30;
          if ((lVar16 == 0) || ((*(byte *)(lVar16 + 5) >> 2 & 1) == 0)) {
            lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
            if (lVar16 == 0) {
              bVar29 = 0;
            }
            else {
              bVar29 = *(byte *)(lVar16 + 4) >> 2 & 1;
              if ((*(byte *)(lVar16 + 4) & 4) != 0) {
                bVar32 = 1;
              }
            }
            bVar8 = 0;
            uVar33 = bVar11;
          }
          else {
            bVar29 = 0;
            uVar33 = true;
            bVar8 = 1;
          }
          lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
          if ((lVar16 == 0) || ((*(byte *)(lVar16 + 5) >> 4 & 1) == 0)) {
            lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
            if (lVar16 == 0) {
              bVar35 = 0;
            }
            else {
              bVar35 = *(byte *)(lVar16 + 4) >> 4 & 1;
              if ((*(byte *)(lVar16 + 4) & 0x10) != 0) {
                bVar32 = 1;
              }
            }
            bVar12 = false;
          }
          else {
            bVar35 = 0;
            uVar33 = true;
            bVar12 = true;
          }
          lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
          if (lVar16 != 0) {
            bVar4 = *(byte *)(lVar16 + 5);
            goto joined_r0x013dc960;
          }
          break;
        case 5:
          lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
          if ((lVar16 == 0) || ((*(byte *)(lVar16 + 5) >> 1 & 1) == 0)) {
            lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
            if (lVar16 == 0) {
              bVar30 = 0;
            }
            else {
              bVar30 = *(byte *)(lVar16 + 4) >> 1 & 1;
            }
            bVar11 = false;
          }
          else {
            bVar30 = 0;
            bVar11 = true;
          }
          lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
          bVar32 = bVar30;
          if ((lVar16 == 0) || ((*(byte *)(lVar16 + 5) >> 3 & 1) == 0)) {
            lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
            if (lVar16 == 0) {
              bVar29 = 0;
            }
            else {
              bVar29 = *(byte *)(lVar16 + 4) >> 3 & 1;
              if ((*(byte *)(lVar16 + 4) & 8) != 0) {
                bVar32 = 1;
              }
            }
            bVar8 = 0;
            uVar33 = bVar11;
          }
          else {
            uVar33 = true;
            bVar29 = 0;
            bVar8 = 1;
          }
          lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
          if ((lVar16 == 0) || ((*(byte *)(lVar16 + 5) >> 5 & 1) == 0)) {
            lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
            if (lVar16 == 0) {
              bVar35 = 0;
            }
            else {
              bVar35 = *(byte *)(lVar16 + 4) >> 5 & 1;
              if ((*(byte *)(lVar16 + 4) & 0x20) != 0) {
                bVar32 = 1;
              }
            }
            bVar12 = false;
          }
          else {
            bVar35 = 0;
            uVar33 = true;
            bVar12 = true;
          }
          lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
          if ((lVar16 != 0) && (*(char *)(lVar16 + 5) < '\0')) {
            uVar19 = (ulong)bVar11;
            uVar24 = (ulong)bVar8;
            bVar12 = !bVar12;
            goto LAB_013dcc1c;
          }
          lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
          if (lVar16 == 0) {
            bVar9 = false;
          }
          else {
            bVar9 = *(char *)(lVar16 + 4) < '\0';
          }
          uVar21 = (ulong)(bVar30 != 0);
          uVar22 = (ulong)(bVar29 != 0);
          uVar26 = (ulong)(bVar35 != 0);
          uVar19 = (ulong)bVar11;
          uVar24 = (ulong)bVar8;
          uVar27 = (ulong)bVar12;
          if (bVar9) goto joined_r0x013dcc78;
          goto LAB_013dc6e0;
        }
        lVar16 = FUN_011323d0(lVar17,uVar3,uVar5);
        if (lVar16 == 0) {
          bVar4 = 0;
        }
        else {
          bVar4 = *(byte *)(lVar16 + 4) >> 6 & 1;
        }
        uVar21 = (ulong)(bVar30 != 0);
        uVar22 = (ulong)(bVar29 != 0);
        uVar26 = (ulong)(bVar35 != 0);
        uVar19 = (ulong)bVar11;
        uVar24 = (ulong)bVar8;
        uVar27 = (ulong)bVar12;
        if (bVar4 == 0) {
LAB_013dc6e0:
          bVar10 = false;
          uVar28 = 0;
joined_r0x013dc30c:
          if ((bool)uVar33) goto LAB_013dc310;
LAB_013dc4ac:
          if (bVar32 != 0) goto LAB_013dc638;
        }
        else {
joined_r0x013dcc78:
          if ((bool)uVar33) {
            uVar28 = 0;
LAB_013dc310:
            if (0x6d < uVar25) goto LAB_013dd0bc;
            uVar3 = *puVar18;
            psVar23 = (short *)((long)param_3 + (ulong)uVar25 * 0xc);
            *psVar23 = (short)puVar18[-1];
            uVar19 = uVar28 << 0x38 | uVar27 << 0x30 | uVar24 << 0x28 | uVar19 << 0x20 |
                     (ulong)uVar3;
            uVar25 = uVar25 + 1;
          }
          else {
LAB_013dcc84:
            bVar10 = true;
LAB_013dc638:
            if (0x6d < uVar34) goto LAB_013dd0bc;
            psVar23 = local_598 + (ulong)uVar34 * 6;
            uVar34 = uVar34 + 1;
            uVar19 = uVar21 << 0x20 | uVar22 << 0x28 | uVar26 << 0x30 | (ulong)bVar10 << 0x38 |
                     (ulong)*puVar18;
            *psVar23 = (short)puVar18[-1];
          }
          *(ulong *)(psVar23 + 2) = uVar19;
        }
      }
      uVar36 = uVar36 + 1;
      puVar18 = puVar18 + 4;
    } while (uVar36 < local_5a0[0]);
    if (uVar25 != 0) goto LAB_013dc718;
    if (uVar34 != 0) {
      local_da4[0] = 0;
      local_da8[0] = '\0';
      local_dac[0] = '\0';
      local_db0[0] = '\0';
      FUN_013db190(param_2,1,*param_1,local_da4,local_da8,local_dac,local_db0);
      bVar11 = local_db0[0] == '\0';
      bVar12 = local_dac[0] != '\0';
      uVar36 = (ulong)uVar34;
      if (local_da8[0] == '\0') {
        if (bVar12 && !bVar11) {
          lVar17 = 0;
          do {
            if (lVar17 == 0x528) goto LAB_013dd0bc;
            if (((local_da4[0] == *(short *)((long)local_598 + lVar17)) &&
                (iVar13 = *(int *)((long)local_598 + lVar17 + 4), iVar13 - 2U < 3 || iVar13 == 0))
               && (*(char *)((long)local_598 + lVar17 + 0xb) != '\0')) goto LAB_013dd050;
            lVar17 = lVar17 + 0xc;
          } while (uVar36 * 0xc != lVar17);
        }
        else {
          lVar17 = 0;
          do {
            if (lVar17 == 0x528) goto LAB_013dd0bc;
            if ((local_da4[0] == *(short *)((long)local_598 + lVar17)) &&
               (iVar13 = *(int *)((long)local_598 + lVar17 + 4), iVar13 - 2U < 3 || iVar13 == 0)) {
              if (bVar12 && bVar11) {
                cVar6 = *(char *)((long)local_598 + lVar17 + 10);
              }
              else if (bVar12 || bVar11) {
                cVar6 = *(char *)((long)local_598 + lVar17 + 8);
              }
              else {
                cVar6 = *(char *)((long)local_598 + lVar17 + 9);
              }
              if (cVar6 != '\0') goto LAB_013dcf14;
            }
            lVar17 = lVar17 + 0xc;
          } while (uVar36 * 0xc != lVar17);
        }
      }
      else {
        if (!(bVar12 && !bVar11)) {
          lVar17 = 0;
LAB_013dcf78:
          if (lVar17 == 0x528) {
LAB_013dd0bc:
                    /* WARNING: Subroutine does not return */
            FUN_013dd720();
          }
          if ((local_da4[0] != *(short *)((long)local_598 + lVar17)) ||
             (uVar25 = *(uint *)((long)local_598 + lVar17 + 4),
             !(uVar25 < 6 && (1 << (ulong)(uVar25 & 0x1f) & 0x2aU) != 0))) goto LAB_013dcfb8;
          if (bVar12 && bVar11) {
            cVar6 = *(char *)((long)local_598 + lVar17 + 10);
          }
          else {
            if (!bVar12 && !bVar11) {
              if (*(char *)((long)local_598 + lVar17 + 9) == '\0') goto LAB_013dcfb8;
LAB_013dcf14:
              puVar20 = (undefined8 *)((long)local_598 + lVar17);
              goto LAB_013dcf1c;
            }
            cVar6 = *(char *)((long)local_598 + lVar17 + 8);
          }
          if (cVar6 != '\0') goto LAB_013dcf14;
LAB_013dcfb8:
          lVar17 = lVar17 + 0xc;
          if (uVar36 * 0xc == lVar17) goto LAB_013dcfc4;
          goto LAB_013dcf78;
        }
        lVar17 = 0;
        do {
          if (lVar17 == 0x528) goto LAB_013dd0bc;
          if (((local_da4[0] == *(short *)((long)local_598 + lVar17)) &&
              (uVar25 = *(uint *)((long)local_598 + lVar17 + 4),
              uVar25 < 6 && (1 << (ulong)(uVar25 & 0x1f) & 0x2aU) != 0)) &&
             (*(char *)((long)local_598 + lVar17 + 0xb) != '\0')) goto LAB_013dd050;
          lVar17 = lVar17 + 0xc;
        } while (uVar36 * 0xc != lVar17);
      }
LAB_013dcfc4:
      *(undefined4 *)(param_3 + 1) = uStack_590;
      *param_3 = CONCAT44(uStack_594,CONCAT22(local_598[1],local_598[0]));
      goto LAB_013dcf30;
    }
  }
  uVar25 = 1;
  *(undefined2 *)param_3 = local_d9c[0];
  *(ulong *)((long)param_3 + 4) = (ulong)local_d98[0] | 0x100000000;
LAB_013dc718:
  *(uint *)(param_3 + 0xa5) = uVar25;
  *(undefined4 *)((long)param_3 + 0x52c) = *param_1;
  if (plVar31 != (long *)0x0) {
    lVar17 = plVar31[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar11) {
        *piVar1 = iVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar31 + 0x20))(plVar31);
    }
  }
  return;
LAB_013dd050:
  puVar20 = (undefined8 *)((long)local_598 + lVar17);
LAB_013dcf1c:
  uVar14 = *puVar20;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar20 + 1);
  *param_3 = uVar14;
LAB_013dcf30:
  uVar25 = 1;
  goto LAB_013dc718;
}


