/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013fe320; name: FUN_013fe320
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013fe320(long param_1,uint param_2,undefined8 param_3,uint param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  byte bVar13;
  uint uVar14;
  long lVar15;
  int *piVar16;
  undefined4 *puVar17;
  byte *pbVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long *plVar21;
  undefined1 *puVar22;
  long *plVar23;
  long *plVar24;
  undefined4 uVar25;
  long *local_de8;
  long *local_de0;
  ulong local_dd8;
  long *local_dd0;
  long *local_dc8;
  uint local_dc0 [256];
  undefined4 local_9c0;
  undefined2 local_9bc;
  undefined4 local_9b8;
  ushort local_9b4;
  undefined8 local_9b0;
  undefined2 local_5c0 [2];
  undefined8 local_5bc;
  undefined2 local_5b4;
  undefined8 local_5b0;
  undefined2 local_5a8;
  undefined8 local_5a4;
  undefined2 local_59c;
  undefined8 local_598;
  undefined2 local_590;
  undefined8 local_58c;
  undefined2 local_584;
  undefined8 local_580;
  undefined2 local_578;
  undefined8 local_574;
  undefined2 local_56c;
  undefined8 local_568;
  undefined2 local_560;
  undefined8 local_55c;
  undefined2 local_554;
  undefined8 local_550;
  undefined2 local_548;
  undefined8 local_544;
  undefined2 local_53c;
  undefined8 local_538;
  undefined2 local_530;
  undefined8 local_52c;
  undefined2 local_524;
  undefined8 local_520;
  undefined2 local_518;
  undefined8 local_514;
  undefined2 local_50c;
  undefined8 local_508;
  undefined2 local_500;
  undefined8 local_4fc;
  undefined2 local_4f4;
  undefined8 local_4f0;
  undefined2 local_4e8;
  undefined8 local_4e4;
  undefined2 local_4dc;
  undefined8 local_4d8;
  undefined2 local_4d0;
  undefined8 local_4cc;
  undefined2 local_4c4;
  undefined8 local_4c0;
  undefined2 local_4b8;
  undefined8 local_4b4;
  undefined2 local_4ac;
  undefined8 local_4a8;
  undefined2 local_4a0;
  undefined8 local_49c;
  undefined2 local_494;
  undefined8 local_490;
  undefined2 local_488;
  undefined8 local_484;
  undefined2 local_47c;
  undefined8 local_478;
  undefined2 local_470;
  undefined8 local_46c;
  undefined2 local_464;
  undefined8 local_460;
  undefined2 local_458;
  undefined8 local_454;
  undefined2 local_44c;
  undefined8 local_448;
  undefined2 local_440;
  undefined8 local_43c;
  undefined2 local_434;
  undefined8 local_430;
  undefined2 local_428;
  undefined8 local_424;
  undefined2 local_41c;
  undefined8 local_418;
  undefined2 local_410;
  undefined8 local_40c;
  undefined2 local_404;
  undefined8 local_400;
  undefined2 local_3f8;
  undefined8 local_3f4;
  undefined2 local_3ec;
  undefined8 local_3e8;
  undefined2 local_3e0;
  undefined8 local_3dc;
  undefined2 local_3d4;
  undefined8 local_3d0;
  undefined2 local_3c8;
  undefined8 local_3c4;
  undefined2 local_3bc;
  undefined8 local_3b8;
  undefined2 local_3b0;
  undefined8 local_3ac;
  undefined2 local_3a4;
  undefined8 local_3a0;
  undefined2 local_398;
  undefined8 local_394;
  undefined2 local_38c;
  undefined8 local_388;
  undefined2 local_380;
  undefined8 local_37c;
  undefined2 local_374;
  undefined8 local_370;
  undefined2 local_368;
  undefined8 local_364;
  undefined2 local_35c;
  undefined8 local_358;
  undefined2 local_350;
  undefined8 local_34c;
  undefined2 local_344;
  undefined8 local_340;
  undefined2 local_338;
  undefined8 local_334;
  undefined2 local_32c;
  undefined8 local_328;
  undefined2 local_320;
  undefined8 local_31c;
  undefined2 local_314;
  undefined8 local_310;
  undefined2 local_308;
  undefined8 local_304;
  undefined2 local_2fc;
  undefined8 local_2f8;
  undefined2 local_2f0;
  undefined8 local_2ec;
  undefined2 local_2e4;
  undefined8 local_2e0;
  undefined2 local_2d8;
  undefined8 local_2d4;
  undefined2 local_2cc;
  undefined8 local_2c8;
  undefined2 local_2c0;
  undefined8 local_2bc;
  undefined2 local_2b4;
  undefined8 local_2b0;
  undefined2 local_2a8;
  undefined8 local_2a4;
  undefined2 local_29c;
  undefined8 local_298;
  undefined2 local_290;
  undefined8 local_28c;
  undefined2 local_284;
  undefined8 local_280;
  undefined2 local_278;
  undefined8 local_274;
  undefined2 local_26c;
  undefined8 local_268;
  undefined2 local_260;
  undefined8 local_25c;
  undefined2 local_254;
  undefined8 local_250;
  undefined2 local_248;
  undefined8 local_244;
  undefined2 local_23c;
  undefined8 local_238;
  undefined2 local_230;
  undefined8 local_22c;
  undefined2 local_224;
  undefined8 local_220;
  undefined2 local_218;
  undefined8 local_214;
  undefined2 local_20c;
  undefined8 local_208;
  undefined2 local_200;
  undefined8 local_1fc;
  undefined2 local_1f4;
  undefined8 local_1f0;
  undefined2 local_1e8;
  undefined8 local_1e4;
  undefined2 local_1dc;
  undefined8 local_1d8;
  undefined2 local_1d0;
  undefined8 local_1cc;
  undefined2 local_1c4;
  undefined8 local_1c0;
  undefined2 local_1b8;
  undefined8 local_1b4;
  undefined2 local_1ac;
  undefined8 local_1a8;
  undefined2 local_1a0;
  undefined8 local_19c;
  undefined2 local_194;
  undefined8 local_190;
  undefined2 local_188;
  undefined8 local_184;
  undefined2 local_17c;
  undefined8 local_178;
  undefined2 local_170;
  undefined8 local_16c;
  undefined2 local_164;
  undefined8 local_160;
  undefined2 local_158;
  undefined8 local_154;
  undefined2 local_14c;
  undefined8 local_148;
  undefined2 local_140;
  undefined8 local_13c;
  undefined2 local_134;
  undefined8 local_130;
  undefined2 local_128;
  undefined8 local_124;
  undefined2 local_11c;
  undefined8 local_118;
  undefined2 local_110;
  undefined8 local_10c;
  undefined2 local_104;
  undefined8 local_100;
  undefined2 local_f8;
  undefined8 local_f4;
  undefined2 local_ec;
  undefined8 local_e8;
  undefined2 local_e0;
  undefined8 local_dc;
  undefined2 local_d4;
  undefined8 local_d0;
  undefined2 local_c8;
  undefined8 local_c4;
  undefined2 local_bc;
  undefined8 local_b8;
  undefined2 local_b0;
  undefined8 local_ac;
  undefined2 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 *local_88;
  char *pcStack_80;
  size_t local_78;
  long *local_70;
  
  *(uint *)(param_1 + (ulong)param_4 * 4 + 0x760) = param_2;
  lVar15 = *(long *)(*(long *)(param_1 + 0x68) + 0xb0);
  uVar14 = *(uint *)(lVar15 + 400);
  if (uVar14 != 0) {
    uVar19 = 0;
    piVar16 = (int *)(lVar15 + 0x20);
LAB_013fe384:
    puVar20 = (undefined8 *)PTR_DAT_04379c88;
    if (*(long *)(piVar16 + -4) != 0) {
      puVar20 = (undefined8 *)(*(long *)(piVar16 + -4) + 0x58);
    }
    if (((undefined1 *)*puVar20 != &DAT_304928236d5bcabe) || (*piVar16 != 10)) goto LAB_013fed34;
    if (0xf < (uint)uVar19) {
      plVar21 = (long *)0x0;
      goto LAB_013fe3b8;
    }
    plVar21 = *(long **)(piVar16 + -2);
    if (plVar21 == (long *)0x0) goto LAB_013fe3b8;
    lVar15 = plVar21[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar7;
      }
      piVar16 = (int *)(lVar15 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar3) {
          *piVar16 = *piVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_013fe3b8:
      plVar4 = (long *)plVar21[0xd];
      goto joined_r0x013fe3bc;
    }
    goto LAB_013fef20;
  }
LAB_013fed44:
  plVar21 = (long *)0x0;
  plVar4 = _DAT_00000068;
joined_r0x013fe3bc:
  if (plVar4 != (long *)0x0) {
    plVar23 = plVar4 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar3) {
        *(int *)plVar23 = (int)*plVar23 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (plVar21 == (long *)0x0) {
LAB_013fe3f4:
    plVar21 = *(long **)(param_1 + 0x2c8);
  }
  else {
    lVar15 = plVar21[0xb];
    piVar16 = (int *)(lVar15 + 0xc);
    do {
      iVar6 = *piVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 != 0) goto LAB_013fe3f4;
    *(undefined8 *)(lVar15 + 0x18) = 0;
    (**(code **)(*plVar21 + 0x20))(plVar21);
    plVar21 = *(long **)(param_1 + 0x2c8);
  }
  if (plVar21 != (long *)0x0) {
    plVar23 = plVar21 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar3) {
        *(int *)plVar23 = (int)*plVar23 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar15 = *(long *)(param_1 + 0x448);
  uVar14 = *(uint *)(*(long *)(*(long *)(param_1 + 0x738) + 0xa8) + (ulong)param_2 * 8);
  local_90 = 0;
  if (uVar14 < *(uint *)(*(long *)(param_1 + 0x740) + 0x3390)) {
    if (1099 < uVar14) goto LAB_013fef1c;
    puVar17 = (undefined4 *)(*(long *)(param_1 + 0x740) + (ulong)uVar14 * 0xc);
    uVar25 = puVar17[2];
    local_90 = CONCAT44(uVar25,*puVar17);
    uVar19 = FUN_013e1f88();
  }
  else {
    uVar25 = 0;
    uVar19 = FUN_013e1f88(0);
  }
  if ((uVar19 & 1) != 0) {
    local_5c0[0] = 0;
    local_5bc = 0;
    local_5b4 = 0;
    local_5b0 = 0;
    local_5a8 = 0;
    local_5a4 = 0;
    local_59c = 0;
    local_598 = 0;
    local_590 = 0;
    local_58c = 0;
    local_584 = 0;
    local_580 = 0;
    local_578 = 0;
    local_574 = 0;
    local_56c = 0;
    local_568 = 0;
    local_560 = 0;
    local_55c = 0;
    local_554 = 0;
    local_550 = 0;
    local_548 = 0;
    local_544 = 0;
    local_53c = 0;
    local_538 = 0;
    local_530 = 0;
    local_52c = 0;
    local_524 = 0;
    local_520 = 0;
    local_518 = 0;
    local_514 = 0;
    local_50c = 0;
    local_508 = 0;
    local_500 = 0;
    local_4fc = 0;
    local_4f4 = 0;
    local_4f0 = 0;
    local_4e8 = 0;
    local_4e4 = 0;
    local_4dc = 0;
    local_4d8 = 0;
    local_4d0 = 0;
    local_4cc = 0;
    local_4c4 = 0;
    local_4c0 = 0;
    local_4b8 = 0;
    local_4b4 = 0;
    local_4ac = 0;
    local_4a8 = 0;
    local_4a0 = 0;
    local_49c = 0;
    local_494 = 0;
    local_490 = 0;
    local_488 = 0;
    local_484 = 0;
    local_47c = 0;
    local_478 = 0;
    local_470 = 0;
    local_46c = 0;
    local_464 = 0;
    local_460 = 0;
    local_458 = 0;
    local_454 = 0;
    local_44c = 0;
    local_448 = 0;
    local_440 = 0;
    local_43c = 0;
    local_434 = 0;
    local_430 = 0;
    local_428 = 0;
    local_424 = 0;
    local_41c = 0;
    local_418 = 0;
    local_410 = 0;
    local_40c = 0;
    local_404 = 0;
    local_400 = 0;
    local_3f8 = 0;
    local_3f4 = 0;
    local_3ec = 0;
    local_3e8 = 0;
    local_3e0 = 0;
    local_3dc = 0;
    local_3d4 = 0;
    local_3d0 = 0;
    local_3c8 = 0;
    local_3c4 = 0;
    local_3bc = 0;
    local_3b8 = 0;
    local_3b0 = 0;
    local_3ac = 0;
    local_3a4 = 0;
    local_3a0 = 0;
    local_398 = 0;
    local_394 = 0;
    local_38c = 0;
    local_388 = 0;
    local_380 = 0;
    local_37c = 0;
    local_374 = 0;
    local_370 = 0;
    local_368 = 0;
    local_364 = 0;
    local_35c = 0;
    local_358 = 0;
    local_350 = 0;
    local_34c = 0;
    local_344 = 0;
    local_340 = 0;
    local_338 = 0;
    local_334 = 0;
    local_32c = 0;
    local_328 = 0;
    local_320 = 0;
    local_31c = 0;
    local_314 = 0;
    local_310 = 0;
    local_308 = 0;
    local_304 = 0;
    local_2fc = 0;
    local_2f8 = 0;
    local_2f0 = 0;
    local_2ec = 0;
    local_2e4 = 0;
    local_2e0 = 0;
    local_2d8 = 0;
    local_2d4 = 0;
    local_2cc = 0;
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 0;
    local_2b4 = 0;
    local_2b0 = 0;
    local_2a8 = 0;
    local_2a4 = 0;
    local_29c = 0;
    local_298 = 0;
    local_290 = 0;
    local_28c = 0;
    local_284 = 0;
    local_280 = 0;
    local_278 = 0;
    local_274 = 0;
    local_26c = 0;
    local_268 = 0;
    local_260 = 0;
    local_25c = 0;
    local_254 = 0;
    local_250 = 0;
    local_248 = 0;
    local_244 = 0;
    local_23c = 0;
    local_238 = 0;
    local_230 = 0;
    local_22c = 0;
    local_224 = 0;
    local_220 = 0;
    local_218 = 0;
    local_214 = 0;
    local_20c = 0;
    local_208 = 0;
    local_200 = 0;
    local_1fc = 0;
    local_1f4 = 0;
    local_1f0 = 0;
    local_1e8 = 0;
    local_1e4 = 0;
    local_1dc = 0;
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 0;
    local_1c4 = 0;
    local_1c0 = 0;
    local_1b8 = 0;
    local_1b4 = 0;
    local_1ac = 0;
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 0;
    local_194 = 0;
    local_190 = 0;
    local_188 = 0;
    local_184 = 0;
    local_17c = 0;
    local_178 = 0;
    local_170 = 0;
    local_16c = 0;
    local_164 = 0;
    local_160 = 0;
    local_158 = 0;
    local_154 = 0;
    local_14c = 0;
    local_148 = 0;
    local_140 = 0;
    local_13c = 0;
    local_134 = 0;
    local_130 = 0;
    local_128 = 0;
    local_124 = 0;
    local_11c = 0;
    local_118 = 0;
    local_110 = 0;
    local_10c = 0;
    local_104 = 0;
    local_100 = 0;
    local_f8 = 0;
    local_f4 = 0;
    local_ec = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 0;
    local_d4 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_c4 = 0;
    local_bc = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 0;
    local_a4 = 0;
    local_a0 = 0;
    local_98 = 0;
    FUN_013dbb78(&local_90,*(undefined8 *)(*(long *)(param_1 + 0x730) + 0xa0),local_5c0);
    local_dc0[0] = 0;
    local_88 = (undefined1 *)((ulong)local_88 & 0xffffffffffffff00);
    local_dd8 = local_dd8 & 0xffffffffffffff00;
    FUN_013db878(local_5c0,*(undefined8 *)(*(long *)(param_1 + 0x730) + 0xa0),
                 *(undefined4 *)(*(long *)(param_1 + 0x730) + 0x70),local_dc0,&local_88,&local_dd8);
    if (local_dc0[0] < (uint)local_98) {
      if (0x6d < local_dc0[0]) {
LAB_013fef1c:
                    /* WARNING: Subroutine does not return */
        FUN_013dd720();
      }
      local_9bc = local_5c0[(ulong)local_dc0[0] * 6];
      uVar14 = *(uint *)((long)&local_5bc + (ulong)local_dc0[0] * 0xc);
      local_9c0 = local_98._4_4_;
    }
    else {
      uVar14 = 0;
      local_9bc = 0;
      local_9c0 = 0;
    }
    local_9b8 = 0;
    local_9b0 = 0xffffffff00000000;
    if (uVar14 < 6) {
      local_9b8 = (&DAT_03a7b840)[(int)uVar14];
    }
    local_9b4 = (ushort)(byte)local_88;
    FUN_0284f014(lVar15 + (ulong)param_4 * 0xd0,&local_9c0,0);
  }
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379558), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar15 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar15;
  plVar23 = *(long **)(lVar15 + 0x298);
  if (plVar23 != (long *)0x0) {
    lVar15 = plVar23[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
LAB_013fef20:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar7;
    }
    piVar16 = (int *)(lVar15 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = *piVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar15 = param_1 + 0x180;
  memset(local_5c0,0,0x400);
  memset(&local_9c0,0,0x400);
  memset(local_dc0,0,0x400);
  snprintf((char *)local_5c0,0x400,"pane_L_list_poke_%02d_N_loader_icon_poke_00",param_4);
  lVar8 = FUN_01306260(lVar15,local_5c0);
  snprintf((char *)local_5c0,0x400,"pane_L_list_poke_%02d_N_icon_undiscovered_00",param_4);
  lVar9 = FUN_01306260(lVar15,local_5c0);
  snprintf((char *)local_5c0,0x400,"pane_L_list_poke_%02d_P_icon_complete_00",param_4);
  lVar10 = FUN_01306260(lVar15,local_5c0);
  snprintf((char *)local_5c0,0x400,"pane_L_list_poke_%02d_P_icon_perfect_00",param_4);
  lVar11 = FUN_01306260(lVar15,local_5c0);
  snprintf((char *)local_5c0,0x400,"pane_L_list_poke_%02d_T_dexnum_00",param_4);
  lVar12 = FUN_01306260(lVar15,local_5c0);
  if (plVar21 != (long *)0x0) {
    plVar24 = plVar21 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar3) {
        *(int *)plVar24 = (int)*plVar24 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar22 = &DAT_cbf29ce484222645;
  local_dc8 = plVar21;
  local_78 = strlen((char *)local_5c0);
  local_88 = &DAT_cbf29ce484222645;
  if ((byte)local_5c0[0] != 0) {
    local_88 = &DAT_cbf29ce484222645;
    pbVar18 = (byte *)((ulong)local_5c0 | 1);
    bVar5 = (byte)local_5c0[0];
    do {
      local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar5) * 0x100000001b3);
      bVar5 = *pbVar18;
      pbVar18 = pbVar18 + 1;
    } while (bVar5 != 0);
  }
  local_70 = (long *)0x0;
  if (plVar4 == (long *)0x0) {
    plVar24 = (long *)0x0;
  }
  else {
    plVar24 = plVar4 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar3) {
        *(int *)plVar24 = (int)*plVar24 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar24 = plVar4;
  }
  local_dd8 = 0xdad224e9ad58ee30;
  local_dd0 = plVar4;
  pcStack_80 = (char *)local_5c0;
  FUN_014013e4(&local_dc8,&local_88,&local_dd0,&local_dd8,uVar25);
  if (plVar24 != (long *)0x0) {
    plVar1 = plVar24 + 10;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar24 + 0x10))(plVar24);
    }
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_dc8 != (long *)0x0) {
    plVar24 = local_dc8 + 10;
    do {
      iVar6 = (int)*plVar24 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar3) {
        *(int *)plVar24 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_dc8 + 0x10))();
    }
  }
  snprintf((char *)&local_9c0,0x400,"pane_L_list_poke_%02d_T_pokerace_00",param_4);
  snprintf((char *)local_dc0,0x400,"anime_L_list_poke_%02d_discovered",param_4);
  uVar25 = 0;
  if ((int)local_90 < 0x3d5) {
    uVar14 = *(uint *)((long)plVar23 + (local_90 & 0xffffffff) * 0x58 + 0xdc);
    if ((uVar14 >> 1 & 1) == 0) {
      bVar5 = (byte)uVar14 & 1;
    }
    else {
      bVar5 = 1;
      uVar25 = 0x3f800000;
    }
  }
  else {
    bVar5 = 0;
  }
  FUN_00d2e2f0(uVar25,lVar15,local_dc0);
  *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe | bVar5;
  *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) & 0xfe | bVar5 ^ 1;
  if (*(int *)(param_1 + 0x794) == 2) {
    bVar5 = *(byte *)(lVar12 + 0x58) | 1;
  }
  else {
    bVar5 = *(byte *)(lVar12 + 0x58) & 0xfe;
  }
  *(byte *)(lVar12 + 0x58) = bVar5;
  uVar19 = local_90 & 0xffffffff;
  if (((int)local_90 < 0x3d5) && ((*(byte *)((long)plVar23 + uVar19 * 0x58 + 0xdc) & 1) != 0)) {
    local_78 = strlen((char *)&local_9c0);
    if ((byte)local_9c0 != 0) {
      pbVar18 = (byte *)((ulong)&local_9c0 | 1);
      bVar5 = (byte)local_9c0;
      do {
        puVar22 = (undefined1 *)(((ulong)puVar22 ^ (ulong)bVar5) * 0x100000001b3);
        bVar5 = *pbVar18;
        pbVar18 = pbVar18 + 1;
      } while (bVar5 != 0);
    }
    local_70 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      plVar24 = plVar4 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar3) {
          *(int *)plVar24 = (int)*plVar24 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar19 = local_90 & 0xffffffff;
    }
    local_dd8 = 0xdad226e9ad58f196;
    local_de0 = plVar4;
    local_88 = puVar22;
    pcStack_80 = (char *)&local_9c0;
    FUN_0133fa78(lVar15,&local_88,&local_de0,&local_dd8,0,uVar19);
    if (local_de0 != (long *)0x0) {
      plVar24 = local_de0 + 10;
      do {
        iVar6 = (int)*plVar24 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar3) {
          *(int *)plVar24 = iVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
        plVar1 = local_de0;
      } while (cVar2 != '\0');
joined_r0x013fee44:
      if (iVar6 == 0) {
        (**(code **)(*plVar1 + 0x10))();
      }
    }
  }
  else {
    local_78 = strlen((char *)&local_9c0);
    if ((byte)local_9c0 != 0) {
      pbVar18 = (byte *)((ulong)&local_9c0 | 1);
      bVar5 = (byte)local_9c0;
      do {
        puVar22 = (undefined1 *)(((ulong)puVar22 ^ (ulong)bVar5) * 0x100000001b3);
        bVar5 = *pbVar18;
        pbVar18 = pbVar18 + 1;
      } while (bVar5 != 0);
    }
    local_70 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      plVar24 = plVar4 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar3) {
          *(int *)plVar24 = (int)*plVar24 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_dd8 = 0x86cfcfc939d0a9a;
    local_de8 = plVar4;
    local_88 = puVar22;
    pcStack_80 = (char *)&local_9c0;
    FUN_011845f4(lVar15,&local_88,&local_de8,&local_dd8,10);
    if (local_de8 != (long *)0x0) {
      plVar24 = local_de8 + 10;
      do {
        iVar6 = (int)*plVar24 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar3) {
          *(int *)plVar24 = iVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
        plVar1 = local_de8;
      } while (cVar2 != '\0');
      goto joined_r0x013fee44;
    }
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  uVar19 = local_90 & 0xffffffff;
  if ((int)local_90 < 0x3d5) {
    if (*(ushort *)((long)plVar23 + uVar19 * 0x58 + 0xe4) < 100) {
      bVar5 = 0;
    }
    else {
      bVar5 = FUN_011357f8(plVar23);
      uVar19 = local_90 & 0xffffffff;
      if (0x3d4 < (int)local_90) goto LAB_013fed2c;
    }
    bVar13 = *(byte *)((long)plVar23 + uVar19 * 0x58 + 0xdc) >> 2 & 1;
  }
  else {
    bVar5 = 0;
LAB_013fed2c:
    bVar13 = 0;
  }
  puVar20 = &DAT_0420cde8;
  *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) & 0xfe | bVar5 & (bVar13 ^ 1);
  *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe | bVar13;
  do {
    local_88 = (undefined1 *)*puVar20;
    pcStack_80 = (char *)puVar20[1];
    local_78 = puVar20[2];
    local_70 = (long *)0x0;
    if (*pcStack_80 == '\0') {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_00d648b4(*(undefined8 *)(param_1 + 0x2c8),&local_88);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
    }
    FUN_00256608(uVar7);
    puVar20 = puVar20 + 3;
  } while (puVar20 != (undefined8 *)0x420cf80);
  if (plVar23 != (long *)0x0) {
    lVar15 = plVar23[0xb];
    piVar16 = (int *)(lVar15 + 0xc);
    do {
      iVar6 = *piVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
    }
  }
  if (plVar21 != (long *)0x0) {
    plVar23 = plVar21 + 10;
    do {
      iVar6 = (int)*plVar23 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar3) {
        *(int *)plVar23 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
    }
  }
  if (plVar4 != (long *)0x0) {
    plVar21 = plVar4 + 10;
    do {
      iVar6 = (int)*plVar21 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar3) {
        *(int *)plVar21 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  return;
LAB_013fed34:
  uVar19 = uVar19 + 1;
  piVar16 = piVar16 + 6;
  if (uVar14 == uVar19) goto LAB_013fed44;
  goto LAB_013fe384;
}


