/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cac990; name: FUN_00cac990
 */


void FUN_00cac990(long *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  long *plVar23;
  long *local_6c0;
  int local_67c;
  long local_628;
  long local_620;
  long local_618;
  long *local_610 [2];
  long local_600;
  long lStack_5f8;
  int local_5f0;
  long local_5e8;
  long local_5e0;
  long local_5d8;
  long local_5d0;
  long *local_5c8 [2];
  long local_5b8;
  long lStack_5b0;
  int local_5a8;
  long local_5a0;
  long local_598;
  long local_590;
  long local_588;
  long *local_580 [2];
  long local_570;
  long lStack_568;
  int local_560;
  long local_558;
  long local_550;
  long local_548;
  long local_540;
  long *local_538;
  ulong local_530;
  long local_528;
  long lStack_520;
  int local_518;
  long local_510;
  long local_508;
  long local_500;
  long local_4f8;
  long *local_4f0 [2];
  long local_4e0;
  long lStack_4d8;
  int local_4d0;
  long local_4c8;
  long local_4c0;
  long local_4b8;
  long local_4b0;
  long *local_4a8;
  ulong local_4a0;
  long local_498;
  long lStack_490;
  int local_488;
  long local_480;
  long local_478;
  long local_470;
  long local_468;
  long *local_460 [2];
  long local_450;
  long lStack_448;
  int local_440;
  long local_438;
  long local_430;
  long local_428;
  long local_420;
  long *local_418 [2];
  long local_408;
  long lStack_400;
  int local_3f8;
  long local_3f0;
  long local_3e8;
  long local_3e0;
  long local_3d8;
  long *local_3d0 [2];
  long local_3c0;
  long lStack_3b8;
  int local_3b0;
  long local_3a8;
  long local_3a0;
  long local_398;
  long local_390;
  long *local_388 [2];
  long local_378;
  long lStack_370;
  int local_368;
  long local_360;
  long local_358;
  long local_350;
  long local_348;
  long *local_340 [2];
  long local_330;
  long lStack_328;
  int local_320;
  long local_318;
  long local_310;
  long local_308;
  long local_300;
  long *local_2f8;
  ulong local_2f0;
  long local_2e8;
  long lStack_2e0;
  int local_2d8;
  long local_2d0;
  long local_2c8;
  long local_2c0;
  long local_2b8;
  long *local_2b0 [2];
  long local_2a0;
  long lStack_298;
  int local_290;
  long local_288;
  long local_280;
  long local_278;
  long local_270;
  long *local_268 [2];
  long local_258;
  long lStack_250;
  int local_248;
  long local_240;
  long local_238;
  long local_230;
  long local_228;
  long *local_220 [2];
  long local_210;
  long lStack_208;
  int local_200;
  long local_1f8;
  long local_1f0;
  long local_1e8;
  long local_1e0;
  long *local_1d8 [2];
  long local_1c8;
  long lStack_1c0;
  int local_1b8;
  long local_1b0;
  long local_1a8;
  long local_1a0;
  long local_198;
  long *local_190 [2];
  long local_180;
  long lStack_178;
  int local_170;
  long local_168;
  long local_160;
  long local_158;
  long local_150;
  long *local_148 [2];
  long local_138;
  long lStack_130;
  int local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long *local_100;
  ulong local_f8;
  long local_f0;
  long local_e8;
  int local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long *local_b8;
  ulong local_b0;
  long lStack_a8;
  long local_a0;
  int local_98;
  long local_90;
  long *local_88;
  ulong uStack_80;
  long local_78;
  long lStack_70;
  
  local_6c0 = param_2;
LAB_00caca90:
  plVar11 = local_6c0 + -9;
  plVar16 = param_1;
LAB_00cacaa8:
  param_1 = plVar16;
  uVar12 = (long)local_6c0 - (long)param_1;
  lVar5 = tpidr_el0;
  switch(((long)uVar12 >> 3) * -0x71c71c71c71c71c7) {
  case 0:
  case 1:
    return;
  case 2:
    lStack_a8 = local_6c0[-4];
    local_a0 = local_6c0[-3];
    local_b8 = (long *)local_6c0[-6];
    local_b0 = local_6c0[-5];
    local_d0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    lVar13 = local_6c0[-8] - local_6c0[-9];
    if (lVar13 != 0) {
      uVar12 = local_b0;
      if (0x7ffffffffffffffe < local_b0) {
        uVar12 = 0x7fffffffffffffff;
      }
      if (uVar12 < (ulong)((lVar13 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar22 = (**(code **)(*local_b8 + 0x10))(local_b8,lVar13,0x10);
      if (lVar22 == 0) {
        (**(code **)(*local_b8 + 0xb8))();
      }
      local_c0 = lVar22 + (lVar13 >> 4) * 0x10;
      lVar13 = local_6c0[-9];
      lVar20 = local_6c0[-8];
      local_d0 = lVar22;
      local_c8 = lVar22;
      if (lVar13 != lVar20) {
        do {
          FUN_00bac10c(&local_b8,local_c8,lVar13);
          lVar13 = lVar13 + 0x250;
          local_c8 = local_c8 + 0x250;
        } while (lVar20 != lVar13);
      }
    }
    local_98 = (int)local_6c0[-2];
    local_90 = local_6c0[-1];
    local_88 = (long *)param_1[3];
    uStack_80 = param_1[4];
    local_78 = param_1[5];
    lStack_70 = param_1[6];
    local_118 = 0;
    local_108 = 0;
    local_110 = 0;
    local_100 = (long *)param_1[3];
    local_f8 = param_1[4];
    local_f0 = param_1[5];
    local_e8 = param_1[6];
    lVar13 = param_1[1] - *param_1;
    if (lVar13 != 0) {
      uVar12 = local_f8;
      if (0x7ffffffffffffffe < local_f8) {
        uVar12 = 0x7fffffffffffffff;
      }
      if (uVar12 < (ulong)((lVar13 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar22 = (**(code **)(*local_100 + 0x10))(local_100,lVar13,0x10);
      if (lVar22 == 0) {
        (**(code **)(*local_100 + 0xb8))();
      }
      local_108 = lVar22 + (lVar13 >> 4) * 0x10;
      lVar13 = *param_1;
      lVar20 = param_1[1];
      local_118 = lVar22;
      local_110 = lVar22;
      if (lVar13 != lVar20) {
        do {
          FUN_00bac10c(&local_100,local_110,lVar13);
          lVar13 = lVar13 + 0x250;
          local_110 = local_110 + 0x250;
        } while (lVar20 != lVar13);
      }
    }
    iVar8 = local_98;
    lVar20 = local_118;
    puVar7 = PTR_LAB_04379590;
    iVar2 = (int)param_1[7];
    local_d8 = param_1[8];
    local_e0 = iVar2;
    lVar13 = local_118;
    lVar22 = local_110;
    plVar16 = local_100;
    if (local_118 != 0) {
      while( true ) {
        local_118 = lVar13;
        local_100 = plVar16;
        if (lVar22 == lVar20) break;
        puVar14 = (undefined8 *)(lVar22 + -0x240);
        lVar22 = lVar22 + -0x250;
        plVar23 = (long *)*puVar14;
        if (plVar23 != (long *)0x0) {
          plVar15 = plVar23 + 1;
          do {
            iVar10 = (int)*plVar15 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar4) {
              *(int *)plVar15 = iVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 == 0) {
            plVar23[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(puVar7,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_88 = (long *)*plVar23;
            FUN_02a44274(lVar13 + 0xd8,&local_88);
            lVar13 = local_118;
            plVar16 = local_100;
          }
        }
      }
      lVar22 = local_108 - lVar13;
      local_110 = lVar20;
      uVar12 = (**(code **)(*plVar16 + 0xc0))(plVar16);
      if ((uVar12 & 1) != 0) {
        if (*(char *)(lVar5 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar5 + 0x38d488) = 1;
          *(undefined8 *)(lVar5 + 0x38d478) = 0;
          *(undefined8 *)(lVar5 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar5 + 0x38d480)) {
          FUN_02bcc824(plVar16,lVar13,lVar22,0x10);
          goto LAB_00caf660;
        }
      }
      (**(code **)(*plVar16 + 0x18))(plVar16,lVar13,lVar22,0x10);
    }
LAB_00caf660:
    lVar20 = local_d0;
    puVar7 = PTR_LAB_04379590;
    lVar13 = local_d0;
    lVar22 = local_c8;
    plVar16 = local_b8;
    if (local_d0 != 0) {
      while( true ) {
        local_d0 = lVar13;
        local_b8 = plVar16;
        if (lVar22 == lVar20) break;
        puVar14 = (undefined8 *)(lVar22 + -0x240);
        lVar22 = lVar22 + -0x250;
        plVar23 = (long *)*puVar14;
        if (plVar23 != (long *)0x0) {
          plVar15 = plVar23 + 1;
          do {
            iVar10 = (int)*plVar15 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar4) {
              *(int *)plVar15 = iVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 == 0) {
            plVar23[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(puVar7,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_88 = (long *)*plVar23;
            FUN_02a44274(lVar13 + 0xd8,&local_88);
            lVar13 = local_d0;
            plVar16 = local_b8;
          }
        }
      }
      local_c8 = lVar20;
      lVar22 = local_c0 - lVar13;
      uVar12 = (**(code **)(*plVar16 + 0xc0))(plVar16);
      if ((uVar12 & 1) != 0) {
        if (*(char *)(lVar5 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar5 + 0x38d488) = 1;
          *(undefined8 *)(lVar5 + 0x38d478) = 0;
          *(undefined8 *)(lVar5 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar5 + 0x38d480)) {
          FUN_02bcc824(plVar16,lVar13,lVar22,0x10);
          goto joined_r0x00cb07b4;
        }
      }
      (**(code **)(*plVar16 + 0x18))(plVar16,lVar13,lVar22,0x10);
    }
joined_r0x00cb07b4:
    if (iVar8 < iVar2) {
      FUN_00cb0840(param_1,plVar11);
      return;
    }
    return;
  case 3:
    FUN_00cb0af0(param_1,param_1 + 9,plVar11);
    return;
  case 4:
    FUN_00cb27b0(param_1,param_1 + 9,param_1 + 0x12,plVar11);
    return;
  case 5:
    FUN_00cb38f0(param_1,param_1 + 9,param_1 + 0x12,param_1 + 0x1b,plVar11);
    return;
  default:
    if ((long)uVar12 < 0x1f8) {
      FUN_00cb5010(param_1,local_6c0);
      return;
    }
    uVar17 = uVar12 / 0x90;
    plVar16 = param_1 + uVar17 * 9;
    if ((long)uVar12 < 0x118f9) {
      local_67c = FUN_00cb0af0(param_1,plVar16,plVar11);
    }
    else {
      local_67c = FUN_00cb38f0(param_1,param_1 + (uVar12 / 0x120) * 9,plVar16,
                               plVar16 + (uVar12 / 0x120) * 9,plVar11);
    }
    plVar23 = param_1 + 3;
    local_88 = (long *)*plVar23;
    lStack_70 = param_1[6];
    uStack_80 = param_1[4];
    local_78 = param_1[5];
    local_160 = 0;
    local_150 = 0;
    local_158 = 0;
    local_148[0] = (long *)*plVar23;
    uVar12 = param_1[4];
    local_138 = param_1[5];
    lStack_130 = param_1[6];
    lVar13 = param_1[1] - *param_1;
    if (lVar13 != 0) {
      if (0x7ffffffffffffffe < uVar12) {
        uVar12 = 0x7fffffffffffffff;
      }
      if (uVar12 < (ulong)((lVar13 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar22 = (**(code **)(*local_148[0] + 0x10))(local_148[0],lVar13,0x10);
      if (lVar22 == 0) {
        (**(code **)(*local_148[0] + 0xb8))();
      }
      local_150 = lVar22 + (lVar13 >> 4) * 0x10;
      lVar20 = param_1[1];
      local_158 = lVar22;
      local_160 = lVar22;
      for (lVar13 = *param_1; lVar13 != lVar20; lVar13 = lVar13 + 0x250) {
        FUN_00bac10c(local_148,local_158,lVar13);
        local_158 = local_158 + 0x250;
      }
    }
    local_128 = (int)param_1[7];
    local_120 = param_1[8];
    local_190[0] = (long *)param_1[uVar17 * 9 + 3];
    uStack_80 = param_1[uVar17 * 9 + 4];
    local_78 = param_1[uVar17 * 9 + 5];
    lStack_70 = param_1[uVar17 * 9 + 6];
    local_1a8 = 0;
    local_198 = 0;
    local_1a0 = 0;
    plVar15 = param_1 + uVar17 * 9 + 1;
    lVar13 = *plVar15 - *plVar16;
    local_88 = local_190[0];
    local_180 = local_78;
    lStack_178 = lStack_70;
    if (lVar13 != 0) {
      uVar12 = uStack_80;
      if (0x7ffffffffffffffe < uStack_80) {
        uVar12 = 0x7fffffffffffffff;
      }
      if (uVar12 < (ulong)((lVar13 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar22 = (**(code **)(*local_190[0] + 0x10))(local_190[0],lVar13,0x10);
      if (lVar22 == 0) {
        (**(code **)(*local_190[0] + 0xb8))();
      }
      local_198 = lVar22 + (lVar13 >> 4) * 0x10;
      lVar13 = *plVar16;
      lVar20 = *plVar15;
      local_1a8 = lVar22;
      local_1a0 = lVar22;
      if (lVar13 != lVar20) {
        do {
          FUN_00bac10c(local_190,local_1a0,lVar13);
          lVar13 = lVar13 + 0x250;
          local_1a0 = local_1a0 + 0x250;
        } while (lVar20 != lVar13);
      }
    }
    iVar8 = local_128;
    lVar9 = local_1a8;
    iVar2 = (int)param_1[uVar17 * 9 + 7];
    local_168 = param_1[uVar17 * 9 + 8];
    local_170 = iVar2;
    lVar13 = local_1a8;
    lVar22 = local_1a0;
    plVar19 = local_190[0];
    lVar6 = local_160;
    lVar20 = local_158;
    if (local_1a8 != 0) {
      while (local_1a8 = lVar13, lVar22 != lVar9) {
        puVar14 = (undefined8 *)(lVar22 + -0x240);
        lVar22 = lVar22 + -0x250;
        plVar18 = (long *)*puVar14;
        if (plVar18 != (long *)0x0) {
          plVar21 = plVar18 + 1;
          do {
            iVar10 = (int)*plVar21 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar4) {
              *(int *)plVar21 = iVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 == 0) {
            plVar18[2] = 0;
            local_190[0] = plVar19;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_88 = (long *)*plVar18;
            FUN_02a44274(lVar13 + 0xd8,&local_88);
            lVar13 = local_1a8;
            plVar19 = local_190[0];
          }
        }
      }
      lVar22 = local_198 - lVar13;
      local_1a0 = lVar9;
      uVar12 = (**(code **)(*plVar19 + 0xc0))(plVar19);
      if ((uVar12 & 1) != 0) {
        if (*(char *)(lVar5 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar5 + 0x38d488) = 1;
          *(undefined8 *)(lVar5 + 0x38d478) = 0;
          *(undefined8 *)(lVar5 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar5 + 0x38d480)) {
          FUN_02bcc824(plVar19,lVar13,lVar22,0x10);
          lVar6 = local_160;
          lVar20 = local_158;
          goto joined_r0x00caf8e0;
        }
      }
      (**(code **)(*plVar19 + 0x18))(plVar19,lVar13,lVar22,0x10);
      lVar6 = local_160;
      lVar20 = local_158;
    }
joined_r0x00caf8e0:
    lVar13 = lVar6;
    local_158 = lVar20;
    plVar19 = local_148[0];
    local_160 = lVar6;
    if (lVar6 != 0) {
      while (local_160 = lVar13, lVar20 != lVar6) {
        puVar14 = (undefined8 *)(lVar20 + -0x240);
        lVar20 = lVar20 + -0x250;
        plVar18 = (long *)*puVar14;
        if (plVar18 != (long *)0x0) {
          plVar21 = plVar18 + 1;
          do {
            iVar10 = (int)*plVar21 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar4) {
              *(int *)plVar21 = iVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 == 0) {
            plVar18[2] = 0;
            local_148[0] = plVar19;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_88 = (long *)*plVar18;
            FUN_02a44274(lVar13 + 0xd8,&local_88);
            lVar13 = local_160;
            plVar19 = local_148[0];
          }
        }
      }
      lVar22 = local_150 - lVar13;
      local_158 = lVar6;
      uVar12 = (**(code **)(*plVar19 + 0xc0))(plVar19);
      if ((uVar12 & 1) != 0) {
        if (*(char *)(lVar5 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar5 + 0x38d488) = 1;
          *(undefined8 *)(lVar5 + 0x38d478) = 0;
          *(undefined8 *)(lVar5 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar5 + 0x38d480)) {
          FUN_02bcc824(plVar19,lVar13,lVar22,0x10);
          goto joined_r0x00cad9b8;
        }
      }
      (**(code **)(*plVar19 + 0x18))(plVar19,lVar13,lVar22,0x10);
    }
joined_r0x00cad9b8:
    if (iVar2 <= iVar8) {
      plVar19 = plVar11;
      while (plVar18 = plVar19 + -9, param_1 != plVar18) {
        local_418[0] = (long *)plVar19[-6];
        uStack_80 = plVar19[-5];
        local_78 = plVar19[-4];
        lStack_70 = plVar19[-3];
        local_430 = 0;
        local_420 = 0;
        local_428 = 0;
        lVar13 = plVar19[-8] - plVar19[-9];
        local_408 = local_78;
        lStack_400 = lStack_70;
        if (lVar13 != 0) {
          uVar12 = uStack_80;
          if (0x7ffffffffffffffe < uStack_80) {
            uVar12 = 0x7fffffffffffffff;
          }
          local_88 = local_418[0];
          if (uVar12 < (ulong)((lVar13 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar22 = (**(code **)(*local_418[0] + 0x10))(local_418[0],lVar13,0x10);
          if (lVar22 == 0) {
            (**(code **)(*local_418[0] + 0xb8))();
          }
          local_420 = lVar22 + (lVar13 >> 4) * 0x10;
          lVar20 = plVar19[-8];
          local_428 = lVar22;
          local_430 = lVar22;
          for (lVar13 = plVar19[-9]; lVar13 != lVar20; lVar13 = lVar13 + 0x250) {
            FUN_00bac10c(local_418,local_428,lVar13);
            local_428 = local_428 + 0x250;
          }
        }
        local_3f8 = (int)plVar19[-2];
        local_3f0 = plVar19[-1];
        local_460[0] = (long *)param_1[uVar17 * 9 + 3];
        uStack_80 = param_1[uVar17 * 9 + 4];
        local_78 = param_1[uVar17 * 9 + 5];
        lStack_70 = param_1[uVar17 * 9 + 6];
        local_478 = 0;
        local_468 = 0;
        local_470 = 0;
        lVar13 = *plVar15 - *plVar16;
        local_88 = local_460[0];
        local_450 = local_78;
        lStack_448 = lStack_70;
        if (lVar13 != 0) {
          uVar12 = uStack_80;
          if (0x7ffffffffffffffe < uStack_80) {
            uVar12 = 0x7fffffffffffffff;
          }
          if (uVar12 < (ulong)((lVar13 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar22 = (**(code **)(*local_460[0] + 0x10))(local_460[0],lVar13,0x10);
          if (lVar22 == 0) {
            (**(code **)(*local_460[0] + 0xb8))();
          }
          local_468 = lVar22 + (lVar13 >> 4) * 0x10;
          lVar13 = *plVar16;
          lVar20 = *plVar15;
          local_478 = lVar22;
          local_470 = lVar22;
          if (lVar13 != lVar20) {
            do {
              FUN_00bac10c(local_460,local_470,lVar13);
              lVar13 = lVar13 + 0x250;
              local_470 = local_470 + 0x250;
            } while (lVar20 != lVar13);
          }
        }
        iVar8 = local_3f8;
        lVar6 = local_478;
        iVar2 = (int)param_1[uVar17 * 9 + 7];
        local_438 = param_1[uVar17 * 9 + 8];
        local_440 = iVar2;
        lVar13 = local_478;
        lVar22 = local_470;
        plVar19 = local_460[0];
        lVar20 = local_430;
        if (local_478 != 0) {
          while (local_478 = lVar13, lVar22 != lVar6) {
            puVar14 = (undefined8 *)(lVar22 + -0x240);
            lVar22 = lVar22 + -0x250;
            plVar21 = (long *)*puVar14;
            if (plVar21 != (long *)0x0) {
              plVar1 = plVar21 + 1;
              do {
                iVar10 = (int)*plVar1 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar4) {
                  *(int *)plVar1 = iVar10;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar10 == 0) {
                plVar21[2] = 0;
                local_460[0] = plVar19;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar13 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar13;
                local_88 = (long *)*plVar21;
                FUN_02a44274(lVar13 + 0xd8,&local_88);
                lVar13 = local_478;
                plVar19 = local_460[0];
              }
            }
          }
          lVar22 = local_468 - lVar13;
          local_470 = lVar6;
          uVar12 = (**(code **)(*plVar19 + 0xc0))(plVar19);
          if ((uVar12 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar19,lVar13,lVar22,0x10);
              lVar20 = local_430;
              goto joined_r0x00cade10;
            }
          }
          (**(code **)(*plVar19 + 0x18))(plVar19,lVar13,lVar22,0x10);
          lVar20 = local_430;
        }
joined_r0x00cade10:
        local_430 = lVar20;
        if (lVar20 != 0) {
          lVar13 = lVar20;
          lVar22 = local_428;
          plVar19 = local_418[0];
          while (local_430 = lVar13, lVar22 != lVar20) {
            puVar14 = (undefined8 *)(lVar22 + -0x240);
            lVar22 = lVar22 + -0x250;
            plVar21 = (long *)*puVar14;
            if (plVar21 != (long *)0x0) {
              plVar1 = plVar21 + 1;
              do {
                iVar10 = (int)*plVar1 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar4) {
                  *(int *)plVar1 = iVar10;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar10 == 0) {
                plVar21[2] = 0;
                local_418[0] = plVar19;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar13 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar13;
                local_88 = (long *)*plVar21;
                FUN_02a44274(lVar13 + 0xd8,&local_88);
                lVar13 = local_430;
                plVar19 = local_418[0];
              }
            }
          }
          lVar22 = local_420 - lVar13;
          local_428 = lVar20;
          uVar12 = (**(code **)(*plVar19 + 0xc0))(plVar19);
          if ((uVar12 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar19,lVar13,lVar22,0x10);
              goto LAB_00cad9e8;
            }
          }
          (**(code **)(*plVar19 + 0x18))(plVar19,lVar13,lVar22,0x10);
        }
LAB_00cad9e8:
        plVar19 = plVar18;
        if (iVar8 < iVar2) goto LAB_00cae81c;
      }
      local_88 = (long *)*plVar23;
      uStack_80 = param_1[4];
      local_78 = param_1[5];
      lStack_70 = param_1[6];
      local_1f0 = 0;
      local_1e0 = 0;
      local_1e8 = 0;
      local_1d8[0] = (long *)*plVar23;
      uVar12 = param_1[4];
      local_1c8 = param_1[5];
      lStack_1c0 = param_1[6];
      lVar13 = param_1[1] - *param_1;
      if (lVar13 != 0) {
        if (0x7ffffffffffffffe < uVar12) {
          uVar12 = 0x7fffffffffffffff;
        }
        if (uVar12 < (ulong)((lVar13 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar22 = (**(code **)(*local_1d8[0] + 0x10))(local_1d8[0],lVar13,0x10);
        if (lVar22 == 0) {
          (**(code **)(*local_1d8[0] + 0xb8))();
        }
        local_1e0 = lVar22 + (lVar13 >> 4) * 0x10;
        lVar13 = *param_1;
        lVar20 = param_1[1];
        local_1f0 = lVar22;
        local_1e8 = lVar22;
        if (lVar13 != lVar20) {
          do {
            FUN_00bac10c(local_1d8,local_1e8,lVar13);
            lVar13 = lVar13 + 0x250;
            local_1e8 = local_1e8 + 0x250;
          } while (lVar20 != lVar13);
        }
      }
      local_1b8 = (int)param_1[7];
      local_1b0 = param_1[8];
      local_220[0] = (long *)local_6c0[-6];
      uStack_80 = local_6c0[-5];
      local_78 = local_6c0[-4];
      lStack_70 = local_6c0[-3];
      local_238 = 0;
      local_228 = 0;
      local_230 = 0;
      lVar13 = local_6c0[-8] - local_6c0[-9];
      local_88 = local_220[0];
      local_210 = local_78;
      lStack_208 = lStack_70;
      if (lVar13 != 0) {
        uVar12 = uStack_80;
        if (0x7ffffffffffffffe < uStack_80) {
          uVar12 = 0x7fffffffffffffff;
        }
        if (uVar12 < (ulong)((lVar13 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar22 = (**(code **)(*local_220[0] + 0x10))(local_220[0],lVar13,0x10);
        if (lVar22 == 0) {
          (**(code **)(*local_220[0] + 0xb8))();
        }
        local_228 = lVar22 + (lVar13 >> 4) * 0x10;
        lVar13 = local_6c0[-9];
        lVar20 = local_6c0[-8];
        local_238 = lVar22;
        local_230 = lVar22;
        if (lVar13 != lVar20) {
          do {
            FUN_00bac10c(local_220,local_230,lVar13);
            lVar13 = lVar13 + 0x250;
            local_230 = local_230 + 0x250;
          } while (lVar20 != lVar13);
        }
      }
      iVar8 = local_1b8;
      lVar20 = local_238;
      iVar2 = (int)local_6c0[-2];
      local_1f8 = local_6c0[-1];
      local_200 = iVar2;
      lVar13 = local_238;
      lVar22 = local_230;
      plVar16 = local_220[0];
      if (local_238 != 0) {
        while (local_238 = lVar13, lVar22 != lVar20) {
          puVar14 = (undefined8 *)(lVar22 + -0x240);
          lVar22 = lVar22 + -0x250;
          plVar15 = (long *)*puVar14;
          if (plVar15 != (long *)0x0) {
            plVar19 = plVar15 + 1;
            do {
              iVar10 = (int)*plVar19 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar4) {
                *(int *)plVar19 = iVar10;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar10 == 0) {
              plVar15[2] = 0;
              local_220[0] = plVar16;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar13 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar13;
              local_88 = (long *)*plVar15;
              FUN_02a44274(lVar13 + 0xd8,&local_88);
              lVar13 = local_238;
              plVar16 = local_220[0];
            }
          }
        }
        lVar22 = local_228 - lVar13;
        local_230 = lVar20;
        uVar12 = (**(code **)(*plVar16 + 0xc0))(plVar16);
        if ((uVar12 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar16,lVar13,lVar22,0x10);
            goto LAB_00caded0;
          }
        }
        (**(code **)(*plVar16 + 0x18))(plVar16,lVar13,lVar22,0x10);
      }
LAB_00caded0:
      lVar20 = local_1f0;
      plVar16 = param_1 + 9;
      lVar13 = local_1f0;
      lVar22 = local_1e8;
      plVar15 = local_1d8[0];
      if (local_1f0 != 0) {
        while (local_1f0 = lVar13, lVar22 != lVar20) {
          puVar14 = (undefined8 *)(lVar22 + -0x240);
          lVar22 = lVar22 + -0x250;
          plVar19 = (long *)*puVar14;
          if (plVar19 != (long *)0x0) {
            plVar18 = plVar19 + 1;
            do {
              iVar10 = (int)*plVar18 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar4) {
                *(int *)plVar18 = iVar10;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar10 == 0) {
              plVar19[2] = 0;
              local_1d8[0] = plVar15;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar13 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar13;
              local_88 = (long *)*plVar19;
              FUN_02a44274(lVar13 + 0xd8,&local_88);
              lVar13 = local_1f0;
              plVar15 = local_1d8[0];
            }
          }
        }
        local_1e8 = lVar20;
        lVar22 = local_1e0 - lVar13;
        uVar12 = (**(code **)(*plVar15 + 0xc0))(plVar15);
        if ((uVar12 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar15,lVar13,lVar22,0x10);
            goto joined_r0x00cafaf4;
          }
        }
        (**(code **)(*plVar15 + 0x18))(plVar15,lVar13,lVar22,0x10);
      }
joined_r0x00cafaf4:
      if (iVar2 <= iVar8) {
        do {
          if (plVar16 == plVar11) {
            return;
          }
          local_88 = (long *)*plVar23;
          uStack_80 = param_1[4];
          local_78 = param_1[5];
          lStack_70 = param_1[6];
          local_280 = 0;
          local_270 = 0;
          local_278 = 0;
          local_268[0] = (long *)*plVar23;
          uVar12 = param_1[4];
          local_258 = param_1[5];
          lStack_250 = param_1[6];
          lVar13 = param_1[1] - *param_1;
          if (lVar13 != 0) {
            if (0x7ffffffffffffffe < uVar12) {
              uVar12 = 0x7fffffffffffffff;
            }
            if (uVar12 < (ulong)((lVar13 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar22 = (**(code **)(*local_268[0] + 0x10))(local_268[0],lVar13,0x10);
            if (lVar22 == 0) {
              (**(code **)(*local_268[0] + 0xb8))();
            }
            local_270 = lVar22 + (lVar13 >> 4) * 0x10;
            lVar20 = param_1[1];
            local_278 = lVar22;
            local_280 = lVar22;
            for (lVar13 = *param_1; lVar13 != lVar20; lVar13 = lVar13 + 0x250) {
              FUN_00bac10c(local_268,local_278,lVar13);
              local_278 = local_278 + 0x250;
            }
          }
          local_248 = (int)param_1[7];
          local_240 = param_1[8];
          local_88 = (long *)plVar16[3];
          uStack_80 = plVar16[4];
          local_78 = plVar16[5];
          lStack_70 = plVar16[6];
          local_2c8 = 0;
          local_2b8 = 0;
          local_2c0 = 0;
          local_2b0[0] = (long *)plVar16[3];
          uVar12 = plVar16[4];
          local_2a0 = plVar16[5];
          lStack_298 = plVar16[6];
          lVar13 = plVar16[1] - *plVar16;
          if (lVar13 != 0) {
            if (0x7ffffffffffffffe < uVar12) {
              uVar12 = 0x7fffffffffffffff;
            }
            if (uVar12 < (ulong)((lVar13 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar22 = (**(code **)(*local_2b0[0] + 0x10))(local_2b0[0],lVar13,0x10);
            if (lVar22 == 0) {
              (**(code **)(*local_2b0[0] + 0xb8))();
            }
            local_2b8 = lVar22 + (lVar13 >> 4) * 0x10;
            lVar13 = *plVar16;
            lVar20 = plVar16[1];
            local_2c8 = lVar22;
            local_2c0 = lVar22;
            if (lVar13 != lVar20) {
              do {
                FUN_00bac10c(local_2b0,local_2c0,lVar13);
                lVar13 = lVar13 + 0x250;
                local_2c0 = local_2c0 + 0x250;
              } while (lVar20 != lVar13);
            }
          }
          iVar8 = local_248;
          lVar9 = local_2c8;
          iVar2 = (int)plVar16[7];
          local_288 = plVar16[8];
          local_290 = iVar2;
          lVar13 = local_2c8;
          lVar22 = local_2c0;
          plVar15 = local_2b0[0];
          lVar6 = local_280;
          lVar20 = local_278;
          if (local_2c8 != 0) {
            while (local_2c8 = lVar13, lVar22 != lVar9) {
              puVar14 = (undefined8 *)(lVar22 + -0x240);
              lVar22 = lVar22 + -0x250;
              plVar19 = (long *)*puVar14;
              if (plVar19 != (long *)0x0) {
                plVar18 = plVar19 + 1;
                do {
                  iVar10 = (int)*plVar18 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                  if (bVar4) {
                    *(int *)plVar18 = iVar10;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar10 == 0) {
                  plVar19[2] = 0;
                  local_2b0[0] = plVar15;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar13 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar13;
                  local_88 = (long *)*plVar19;
                  FUN_02a44274(lVar13 + 0xd8,&local_88);
                  lVar13 = local_2c8;
                  plVar15 = local_2b0[0];
                }
              }
            }
            lVar22 = local_2b8 - lVar13;
            local_2c0 = lVar9;
            uVar12 = (**(code **)(*plVar15 + 0xc0))(plVar15);
            if ((uVar12 & 1) != 0) {
              if (*(char *)(lVar5 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar5 + 0x38d488) = 1;
                *(undefined8 *)(lVar5 + 0x38d478) = 0;
                *(undefined8 *)(lVar5 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar5 + 0x38d480)) {
                FUN_02bcc824(plVar15,lVar13,lVar22,0x10);
                lVar6 = local_280;
                lVar20 = local_278;
                goto joined_r0x00caf858;
              }
            }
            (**(code **)(*plVar15 + 0x18))(plVar15,lVar13,lVar22,0x10);
            lVar6 = local_280;
            lVar20 = local_278;
          }
joined_r0x00caf858:
          lVar13 = lVar6;
          local_278 = lVar20;
          plVar15 = local_268[0];
          local_280 = lVar6;
          if (lVar6 != 0) {
            while (local_280 = lVar13, lVar20 != lVar6) {
              puVar14 = (undefined8 *)(lVar20 + -0x240);
              lVar20 = lVar20 + -0x250;
              plVar19 = (long *)*puVar14;
              if (plVar19 != (long *)0x0) {
                plVar18 = plVar19 + 1;
                do {
                  iVar10 = (int)*plVar18 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                  if (bVar4) {
                    *(int *)plVar18 = iVar10;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar10 == 0) {
                  plVar19[2] = 0;
                  local_268[0] = plVar15;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar13 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar13;
                  local_88 = (long *)*plVar19;
                  FUN_02a44274(lVar13 + 0xd8,&local_88);
                  lVar13 = local_280;
                  plVar15 = local_268[0];
                }
              }
            }
            lVar22 = local_270 - lVar13;
            local_278 = lVar6;
            uVar12 = (**(code **)(*plVar15 + 0xc0))(plVar15);
            if ((uVar12 & 1) != 0) {
              if (*(char *)(lVar5 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar5 + 0x38d488) = 1;
                *(undefined8 *)(lVar5 + 0x38d478) = 0;
                *(undefined8 *)(lVar5 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar5 + 0x38d480)) {
                FUN_02bcc824(plVar15,lVar13,lVar22,0x10);
                goto joined_r0x00caf4bc;
              }
            }
            (**(code **)(*plVar15 + 0x18))(plVar15,lVar13,lVar22,0x10);
          }
joined_r0x00caf4bc:
          if (iVar8 < iVar2) goto LAB_00caf4cc;
          plVar16 = plVar16 + 9;
        } while( true );
      }
      goto LAB_00cadee8;
    }
    plVar18 = plVar11;
  }
  goto LAB_00cacc50;
LAB_00cae81c:
  FUN_00cb0840(param_1,plVar18);
  local_67c = local_67c + 1;
LAB_00cacc50:
  plVar23 = param_1 + 9;
  if (plVar23 < plVar18) {
LAB_00cacc60:
    plVar15 = plVar16 + 3;
    do {
      local_88 = (long *)plVar23[3];
      uStack_80 = plVar23[4];
      local_78 = plVar23[5];
      lStack_70 = plVar23[6];
      local_4c0 = 0;
      local_4b0 = 0;
      local_4b8 = 0;
      local_498 = plVar23[5];
      lStack_490 = plVar23[6];
      lVar13 = plVar23[1] - *plVar23;
      if (lVar13 != 0) {
        uVar12 = local_4a0;
        if (0x7ffffffffffffffe < local_4a0) {
          uVar12 = 0x7fffffffffffffff;
        }
        if (uVar12 < (ulong)((lVar13 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar22 = (**(code **)(*local_4a8 + 0x10))(local_4a8,lVar13,0x10);
        if (lVar22 == 0) {
          (**(code **)(*local_4a8 + 0xb8))();
        }
        local_4b0 = lVar22 + (lVar13 >> 4) * 0x10;
        lVar20 = plVar23[1];
        local_4b8 = lVar22;
        local_4c0 = lVar22;
        for (lVar13 = *plVar23; lVar13 != lVar20; lVar13 = lVar13 + 0x250) {
          FUN_00bac10c(&local_4a8,local_4b8,lVar13);
          local_4b8 = local_4b8 + 0x250;
        }
      }
      local_488 = (int)plVar23[7];
      local_480 = plVar23[8];
      local_88 = (long *)*plVar15;
      uStack_80 = plVar16[4];
      local_78 = plVar16[5];
      lStack_70 = plVar16[6];
      local_508 = 0;
      local_4f8 = 0;
      local_500 = 0;
      local_4f0[0] = (long *)*plVar15;
      uVar12 = plVar16[4];
      local_4e0 = plVar16[5];
      lStack_4d8 = plVar16[6];
      lVar13 = plVar16[1] - *plVar16;
      if (lVar13 != 0) {
        if (0x7ffffffffffffffe < uVar12) {
          uVar12 = 0x7fffffffffffffff;
        }
        if (uVar12 < (ulong)((lVar13 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar22 = (**(code **)(*local_4f0[0] + 0x10))(local_4f0[0],lVar13,0x10);
        if (lVar22 == 0) {
          (**(code **)(*local_4f0[0] + 0xb8))();
        }
        local_4f8 = lVar22 + (lVar13 >> 4) * 0x10;
        lVar13 = *plVar16;
        lVar20 = plVar16[1];
        local_508 = lVar22;
        local_500 = lVar22;
        if (lVar13 != lVar20) {
          do {
            FUN_00bac10c(local_4f0,local_500,lVar13);
            lVar13 = lVar13 + 0x250;
            local_500 = local_500 + 0x250;
          } while (lVar20 != lVar13);
        }
      }
      iVar8 = local_488;
      lVar9 = local_508;
      iVar2 = (int)plVar16[7];
      local_4c8 = plVar16[8];
      local_4d0 = iVar2;
      lVar13 = local_508;
      lVar22 = local_500;
      plVar19 = local_4f0[0];
      lVar6 = local_4c0;
      lVar20 = local_4b8;
      if (local_508 != 0) {
        while (local_508 = lVar13, lVar22 != lVar9) {
          puVar14 = (undefined8 *)(lVar22 + -0x240);
          lVar22 = lVar22 + -0x250;
          plVar21 = (long *)*puVar14;
          if (plVar21 != (long *)0x0) {
            plVar1 = plVar21 + 1;
            do {
              iVar10 = (int)*plVar1 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *(int *)plVar1 = iVar10;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar10 == 0) {
              plVar21[2] = 0;
              local_4f0[0] = plVar19;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar13 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar13;
              local_88 = (long *)*plVar21;
              FUN_02a44274(lVar13 + 0xd8,&local_88);
              lVar13 = local_508;
              plVar19 = local_4f0[0];
            }
          }
        }
        lVar22 = local_4f8 - lVar13;
        local_500 = lVar9;
        uVar12 = (**(code **)(*plVar19 + 0xc0))(plVar19);
        if ((uVar12 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar19,lVar13,lVar22,0x10);
            lVar6 = local_4c0;
            lVar20 = local_4b8;
            goto joined_r0x00cacd10;
          }
        }
        (**(code **)(*plVar19 + 0x18))(plVar19,lVar13,lVar22,0x10);
        lVar6 = local_4c0;
        lVar20 = local_4b8;
      }
joined_r0x00cacd10:
      lVar13 = lVar6;
      local_4b8 = lVar20;
      plVar19 = local_4a8;
      local_4c0 = lVar6;
      if (lVar6 != 0) {
        while( true ) {
          local_4c0 = lVar13;
          local_4a8 = plVar19;
          if (lVar20 == lVar6) break;
          puVar14 = (undefined8 *)(lVar20 + -0x240);
          lVar20 = lVar20 + -0x250;
          plVar21 = (long *)*puVar14;
          if (plVar21 != (long *)0x0) {
            plVar1 = plVar21 + 1;
            do {
              iVar10 = (int)*plVar1 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *(int *)plVar1 = iVar10;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar10 == 0) {
              plVar21[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar13 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar13;
              local_88 = (long *)*plVar21;
              FUN_02a44274(lVar13 + 0xd8,&local_88);
              lVar13 = local_4c0;
              plVar19 = local_4a8;
            }
          }
        }
        lVar22 = local_4b0 - lVar13;
        local_4b8 = lVar6;
        uVar12 = (**(code **)(*plVar19 + 0xc0))(plVar19);
        if ((uVar12 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar19,lVar13,lVar22,0x10);
            goto joined_r0x00cacd18;
          }
        }
        (**(code **)(*plVar19 + 0x18))(plVar19,lVar13,lVar22,0x10);
      }
joined_r0x00cacd18:
      plVar19 = plVar18;
      if (iVar2 <= iVar8) goto LAB_00cad10c;
      plVar23 = plVar23 + 9;
    } while( true );
  }
LAB_00cad568:
  if (plVar23 == plVar16) {
LAB_00caed00:
    if (local_67c != 0) goto LAB_00caed08;
  }
  else {
    local_88 = (long *)plVar16[3];
    uStack_80 = plVar16[4];
    local_78 = plVar16[5];
    lStack_70 = plVar16[6];
    local_5d0 = 0;
    local_5e0 = 0;
    local_5d8 = 0;
    local_5c8[0] = (long *)plVar16[3];
    uVar12 = plVar16[4];
    local_5b8 = plVar16[5];
    lStack_5b0 = plVar16[6];
    lVar13 = plVar16[1] - *plVar16;
    if (lVar13 != 0) {
      if (0x7ffffffffffffffe < uVar12) {
        uVar12 = 0x7fffffffffffffff;
      }
      if (uVar12 < (ulong)((lVar13 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar22 = (**(code **)(*local_5c8[0] + 0x10))(local_5c8[0],lVar13,0x10);
      if (lVar22 == 0) {
        (**(code **)(*local_5c8[0] + 0xb8))();
      }
      local_5d0 = lVar22 + (lVar13 >> 4) * 0x10;
      lVar13 = *plVar16;
      lVar20 = plVar16[1];
      local_5e0 = lVar22;
      local_5d8 = lVar22;
      if (lVar13 != lVar20) {
        do {
          FUN_00bac10c(local_5c8,local_5d8,lVar13);
          lVar13 = lVar13 + 0x250;
          local_5d8 = local_5d8 + 0x250;
        } while (lVar20 != lVar13);
      }
    }
    local_5a8 = (int)plVar16[7];
    local_5a0 = plVar16[8];
    local_88 = (long *)plVar23[3];
    uStack_80 = plVar23[4];
    local_78 = plVar23[5];
    lStack_70 = plVar23[6];
    local_618 = 0;
    local_628 = 0;
    local_620 = 0;
    local_610[0] = (long *)plVar23[3];
    uVar12 = plVar23[4];
    local_600 = plVar23[5];
    lStack_5f8 = plVar23[6];
    lVar13 = plVar23[1] - *plVar23;
    if (lVar13 != 0) {
      if (0x7ffffffffffffffe < uVar12) {
        uVar12 = 0x7fffffffffffffff;
      }
      if (uVar12 < (ulong)((lVar13 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      local_628 = (**(code **)(*local_610[0] + 0x10))(local_610[0],lVar13,0x10);
      if (local_628 == 0) {
        (**(code **)(*local_610[0] + 0xb8))();
      }
      local_618 = local_628 + (lVar13 >> 4) * 0x10;
      lVar13 = *plVar23;
      lVar22 = plVar23[1];
      local_620 = local_628;
      if (lVar13 != lVar22) {
        do {
          FUN_00bac10c(local_610,local_620,lVar13);
          lVar13 = lVar13 + 0x250;
          local_620 = local_620 + 0x250;
        } while (lVar22 != lVar13);
      }
    }
    iVar8 = local_5a8;
    iVar2 = (int)plVar23[7];
    local_5e8 = plVar23[8];
    local_5f0 = iVar2;
    plVar15 = local_610[0];
    lVar13 = local_5e0;
    if (local_628 != 0) {
      while (local_620 != local_628) {
        puVar14 = (undefined8 *)(local_620 + -0x240);
        local_620 = local_620 + -0x250;
        plVar19 = (long *)*puVar14;
        if (plVar19 != (long *)0x0) {
          plVar18 = plVar19 + 1;
          do {
            iVar10 = (int)*plVar18 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar4) {
              *(int *)plVar18 = iVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 == 0) {
            plVar19[2] = 0;
            local_610[0] = plVar15;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_88 = (long *)*plVar19;
            FUN_02a44274(lVar13 + 0xd8,&local_88);
            plVar15 = local_610[0];
          }
        }
      }
      uVar12 = (**(code **)(*plVar15 + 0xc0))(plVar15);
      if ((uVar12 & 1) != 0) {
        if (*(char *)(lVar5 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar5 + 0x38d488) = 1;
          *(undefined8 *)(lVar5 + 0x38d478) = 0;
          *(undefined8 *)(lVar5 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar5 + 0x38d480)) {
          FUN_02bcc824(plVar15,local_628,local_618 - local_628,0x10);
          lVar13 = local_5e0;
          goto joined_r0x00caebe4;
        }
      }
      (**(code **)(*plVar15 + 0x18))(plVar15,local_628,local_618 - local_628,0x10);
      lVar13 = local_5e0;
    }
joined_r0x00caebe4:
    local_5e0 = lVar13;
    if (lVar13 != 0) {
      lVar22 = lVar13;
      lVar20 = local_5d8;
      plVar15 = local_5c8[0];
      while (local_5e0 = lVar22, lVar20 != lVar13) {
        puVar14 = (undefined8 *)(lVar20 + -0x240);
        lVar20 = lVar20 + -0x250;
        plVar19 = (long *)*puVar14;
        if (plVar19 != (long *)0x0) {
          plVar18 = plVar19 + 1;
          do {
            iVar10 = (int)*plVar18 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar4) {
              *(int *)plVar18 = iVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 == 0) {
            plVar19[2] = 0;
            local_5c8[0] = plVar15;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar22 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar22;
            local_88 = (long *)*plVar19;
            FUN_02a44274(lVar22 + 0xd8,&local_88);
            lVar22 = local_5e0;
            plVar15 = local_5c8[0];
          }
        }
      }
      lVar20 = local_5d0 - lVar22;
      local_5d8 = lVar13;
      uVar12 = (**(code **)(*plVar15 + 0xc0))(plVar15);
      if ((uVar12 & 1) != 0) {
        if (*(char *)(lVar5 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar5 + 0x38d488) = 1;
          *(undefined8 *)(lVar5 + 0x38d478) = 0;
          *(undefined8 *)(lVar5 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar5 + 0x38d480)) {
          FUN_02bcc824(plVar15,lVar22,lVar20,0x10);
          goto joined_r0x00cad624;
        }
      }
      (**(code **)(*plVar15 + 0x18))(plVar15,lVar22,lVar20,0x10);
    }
joined_r0x00cad624:
    if (iVar2 <= iVar8) goto LAB_00caed00;
    FUN_00cb0840(plVar23,plVar16);
    if (local_67c != -1) goto LAB_00caed08;
  }
  uVar12 = FUN_00cb60b0(param_1,plVar23);
  uVar17 = FUN_00cb60b0(plVar23 + 9,local_6c0);
  if ((uVar17 & 1) != 0) goto LAB_00caf834;
  plVar16 = plVar23 + 9;
  if ((uVar12 & 1) != 0) goto LAB_00cacaa8;
LAB_00caed08:
  if (((long)local_6c0 - (long)plVar23 >> 3) * -0x71c71c71c71c71c7 <=
      ((long)plVar23 - (long)param_1 >> 3) * -0x71c71c71c71c71c7) {
    FUN_00cac990(plVar23 + 9,local_6c0);
    local_6c0 = plVar23;
    goto LAB_00caca90;
  }
  FUN_00cac990(param_1,plVar23);
  plVar16 = plVar23 + 9;
  goto LAB_00cacaa8;
LAB_00caf4cc:
  FUN_00cb0840(plVar16,plVar11);
  plVar16 = plVar16 + 9;
LAB_00cadee8:
  if (plVar16 == plVar11) {
    return;
  }
  plVar15 = plVar11;
LAB_00cadf00:
  do {
    local_88 = (long *)*plVar23;
    uStack_80 = param_1[4];
    local_78 = param_1[5];
    lStack_70 = param_1[6];
    local_310 = 0;
    local_300 = 0;
    local_308 = 0;
    local_2e8 = param_1[5];
    lStack_2e0 = param_1[6];
    lVar13 = param_1[1] - *param_1;
    if (lVar13 != 0) {
      uVar12 = local_2f0;
      if (0x7ffffffffffffffe < local_2f0) {
        uVar12 = 0x7fffffffffffffff;
      }
      if (uVar12 < (ulong)((lVar13 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar22 = (**(code **)(*local_2f8 + 0x10))(local_2f8,lVar13,0x10);
      if (lVar22 == 0) {
        (**(code **)(*local_2f8 + 0xb8))();
      }
      local_300 = lVar22 + (lVar13 >> 4) * 0x10;
      lVar20 = param_1[1];
      local_308 = lVar22;
      local_310 = lVar22;
      for (lVar13 = *param_1; lVar13 != lVar20; lVar13 = lVar13 + 0x250) {
        FUN_00bac10c(&local_2f8,local_308,lVar13);
        local_308 = local_308 + 0x250;
      }
    }
    local_2d8 = (int)param_1[7];
    local_2d0 = param_1[8];
    local_88 = (long *)plVar16[3];
    uStack_80 = plVar16[4];
    local_78 = plVar16[5];
    lStack_70 = plVar16[6];
    local_358 = 0;
    local_348 = 0;
    local_350 = 0;
    local_340[0] = (long *)plVar16[3];
    uVar12 = plVar16[4];
    local_330 = plVar16[5];
    lStack_328 = plVar16[6];
    lVar13 = plVar16[1] - *plVar16;
    if (lVar13 != 0) {
      if (0x7ffffffffffffffe < uVar12) {
        uVar12 = 0x7fffffffffffffff;
      }
      if (uVar12 < (ulong)((lVar13 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar22 = (**(code **)(*local_340[0] + 0x10))(local_340[0],lVar13,0x10);
      if (lVar22 == 0) {
        (**(code **)(*local_340[0] + 0xb8))();
      }
      local_348 = lVar22 + (lVar13 >> 4) * 0x10;
      lVar13 = *plVar16;
      lVar20 = plVar16[1];
      local_358 = lVar22;
      local_350 = lVar22;
      if (lVar13 != lVar20) {
        do {
          local_350 = lVar22;
          FUN_00bac10c(local_340,lVar22,lVar13);
          lVar13 = lVar13 + 0x250;
          lVar22 = local_350 + 0x250;
          local_350 = lVar22;
        } while (lVar20 != lVar13);
      }
    }
    iVar8 = local_2d8;
    lVar6 = local_358;
    iVar2 = (int)plVar16[7];
    local_318 = plVar16[8];
    local_320 = iVar2;
    lVar13 = local_358;
    lVar22 = local_350;
    plVar19 = local_340[0];
    lVar20 = local_310;
    if (local_358 != 0) {
      while (local_358 = lVar13, lVar22 != lVar6) {
        puVar14 = (undefined8 *)(lVar22 + -0x240);
        lVar22 = lVar22 + -0x250;
        plVar18 = (long *)*puVar14;
        if (plVar18 != (long *)0x0) {
          plVar21 = plVar18 + 1;
          do {
            iVar10 = (int)*plVar21 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar4) {
              *(int *)plVar21 = iVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 == 0) {
            plVar18[2] = 0;
            local_340[0] = plVar19;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_88 = (long *)*plVar18;
            FUN_02a44274(lVar13 + 0xd8,&local_88);
            lVar13 = local_358;
            plVar19 = local_340[0];
          }
        }
      }
      lVar22 = local_348 - lVar13;
      local_350 = lVar6;
      uVar12 = (**(code **)(*plVar19 + 0xc0))(plVar19);
      if ((uVar12 & 1) != 0) {
        if (*(char *)(lVar5 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar5 + 0x38d488) = 1;
          *(undefined8 *)(lVar5 + 0x38d478) = 0;
          *(undefined8 *)(lVar5 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar5 + 0x38d480)) {
          FUN_02bcc824(plVar19,lVar13,lVar22,0x10);
          lVar20 = local_310;
          goto joined_r0x00cae1a0;
        }
      }
      (**(code **)(*plVar19 + 0x18))(plVar19,lVar13,lVar22,0x10);
      lVar20 = local_310;
    }
joined_r0x00cae1a0:
    local_310 = lVar20;
    lVar13 = lVar20;
    lVar22 = local_308;
    plVar19 = local_2f8;
    if (lVar20 != 0) {
      while( true ) {
        local_310 = lVar13;
        local_2f8 = plVar19;
        if (lVar22 == lVar20) break;
        puVar14 = (undefined8 *)(lVar22 + -0x240);
        lVar22 = lVar22 + -0x250;
        plVar18 = (long *)*puVar14;
        if (plVar18 != (long *)0x0) {
          plVar21 = plVar18 + 1;
          do {
            iVar10 = (int)*plVar21 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar4) {
              *(int *)plVar21 = iVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 == 0) {
            plVar18[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_88 = (long *)*plVar18;
            FUN_02a44274(lVar13 + 0xd8,&local_88);
            lVar13 = local_310;
            plVar19 = local_2f8;
          }
        }
      }
      lVar22 = local_300 - lVar13;
      local_308 = lVar20;
      uVar12 = (**(code **)(*plVar19 + 0xc0))(plVar19);
      if ((uVar12 & 1) != 0) {
        if (*(char *)(lVar5 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar5 + 0x38d488) = 1;
          *(undefined8 *)(lVar5 + 0x38d478) = 0;
          *(undefined8 *)(lVar5 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar5 + 0x38d480)) {
          FUN_02bcc824(plVar19,lVar13,lVar22,0x10);
          goto joined_r0x00cadfb4;
        }
      }
      (**(code **)(*plVar19 + 0x18))(plVar19,lVar13,lVar22,0x10);
    }
joined_r0x00cadfb4:
    plVar19 = plVar15;
    if (iVar8 < iVar2) {
      do {
        local_88 = (long *)*plVar23;
        uStack_80 = param_1[4];
        local_78 = param_1[5];
        lStack_70 = param_1[6];
        local_3a0 = 0;
        local_390 = 0;
        local_398 = 0;
        local_388[0] = (long *)*plVar23;
        uVar12 = param_1[4];
        local_378 = param_1[5];
        lStack_370 = param_1[6];
        lVar13 = param_1[1] - *param_1;
        if (lVar13 != 0) {
          if (0x7ffffffffffffffe < uVar12) {
            uVar12 = 0x7fffffffffffffff;
          }
          if (uVar12 < (ulong)((lVar13 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar22 = (**(code **)(*local_388[0] + 0x10))(local_388[0],lVar13,0x10);
          if (lVar22 == 0) {
            (**(code **)(*local_388[0] + 0xb8))();
          }
          local_390 = lVar22 + (lVar13 >> 4) * 0x10;
          lVar20 = param_1[1];
          local_398 = lVar22;
          local_3a0 = lVar22;
          for (lVar13 = *param_1; lVar13 != lVar20; lVar13 = lVar13 + 0x250) {
            FUN_00bac10c(local_388,local_398,lVar13);
            local_398 = local_398 + 0x250;
          }
        }
        local_368 = (int)param_1[7];
        local_360 = param_1[8];
        local_3d0[0] = (long *)plVar19[-6];
        uStack_80 = plVar19[-5];
        local_78 = plVar19[-4];
        lStack_70 = plVar19[-3];
        local_3e8 = 0;
        local_3d8 = 0;
        local_3e0 = 0;
        plVar15 = plVar19 + -9;
        lVar13 = plVar19[-8] - *plVar15;
        local_88 = local_3d0[0];
        local_3c0 = local_78;
        lStack_3b8 = lStack_70;
        if (lVar13 != 0) {
          uVar12 = uStack_80;
          if (0x7ffffffffffffffe < uStack_80) {
            uVar12 = 0x7fffffffffffffff;
          }
          if (uVar12 < (ulong)((lVar13 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar22 = (**(code **)(*local_3d0[0] + 0x10))(local_3d0[0],lVar13,0x10);
          if (lVar22 == 0) {
            (**(code **)(*local_3d0[0] + 0xb8))();
          }
          local_3d8 = lVar22 + (lVar13 >> 4) * 0x10;
          lVar13 = plVar19[-9];
          lVar20 = plVar19[-8];
          local_3e8 = lVar22;
          local_3e0 = lVar22;
          if (lVar13 != lVar20) {
            do {
              FUN_00bac10c(local_3d0,local_3e0,lVar13);
              lVar13 = lVar13 + 0x250;
              local_3e0 = local_3e0 + 0x250;
            } while (lVar20 != lVar13);
          }
        }
        iVar8 = local_368;
        lVar6 = local_3e8;
        iVar2 = (int)plVar19[-2];
        local_3a8 = plVar19[-1];
        local_3b0 = iVar2;
        lVar13 = local_3e8;
        lVar22 = local_3e0;
        plVar19 = local_3d0[0];
        lVar20 = local_3a0;
        if (local_3e8 != 0) {
          while (local_3e8 = lVar13, lVar22 != lVar6) {
            puVar14 = (undefined8 *)(lVar22 + -0x240);
            lVar22 = lVar22 + -0x250;
            plVar18 = (long *)*puVar14;
            if (plVar18 != (long *)0x0) {
              plVar21 = plVar18 + 1;
              do {
                iVar10 = (int)*plVar21 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                if (bVar4) {
                  *(int *)plVar21 = iVar10;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar10 == 0) {
                plVar18[2] = 0;
                local_3d0[0] = plVar19;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar13 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar13;
                local_88 = (long *)*plVar18;
                FUN_02a44274(lVar13 + 0xd8,&local_88);
                lVar13 = local_3e8;
                plVar19 = local_3d0[0];
              }
            }
          }
          lVar22 = local_3d8 - lVar13;
          local_3e0 = lVar6;
          uVar12 = (**(code **)(*plVar19 + 0xc0))(plVar19);
          if ((uVar12 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar19,lVar13,lVar22,0x10);
              lVar20 = local_3a0;
              goto joined_r0x00cae6c8;
            }
          }
          (**(code **)(*plVar19 + 0x18))(plVar19,lVar13,lVar22,0x10);
          lVar20 = local_3a0;
        }
joined_r0x00cae6c8:
        local_3a0 = lVar20;
        if (lVar20 != 0) {
          lVar13 = lVar20;
          lVar22 = local_398;
          plVar19 = local_388[0];
          while (local_3a0 = lVar13, lVar22 != lVar20) {
            puVar14 = (undefined8 *)(lVar22 + -0x240);
            lVar22 = lVar22 + -0x250;
            plVar18 = (long *)*puVar14;
            if (plVar18 != (long *)0x0) {
              plVar21 = plVar18 + 1;
              do {
                iVar10 = (int)*plVar21 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                if (bVar4) {
                  *(int *)plVar21 = iVar10;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar10 == 0) {
                plVar18[2] = 0;
                local_388[0] = plVar19;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar13 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar13;
                local_88 = (long *)*plVar18;
                FUN_02a44274(lVar13 + 0xd8,&local_88);
                lVar13 = local_3a0;
                plVar19 = local_388[0];
              }
            }
          }
          lVar22 = local_390 - lVar13;
          local_398 = lVar20;
          uVar12 = (**(code **)(*plVar19 + 0xc0))(plVar19);
          if ((uVar12 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar19,lVar13,lVar22,0x10);
              goto LAB_00cae2bc;
            }
          }
          (**(code **)(*plVar19 + 0x18))(plVar19,lVar13,lVar22,0x10);
        }
LAB_00cae2bc:
        plVar19 = plVar15;
      } while (iVar8 < iVar2);
      if (plVar16 < plVar15) {
        FUN_00cb0840(plVar16,plVar15);
        plVar16 = plVar16 + 9;
        goto LAB_00cadf00;
      }
      goto LAB_00cacaa8;
    }
    plVar16 = plVar16 + 9;
  } while( true );
LAB_00cad10c:
  do {
    local_88 = (long *)plVar19[-6];
    uStack_80 = plVar19[-5];
    local_78 = plVar19[-4];
    lStack_70 = plVar19[-3];
    local_540 = 0;
    local_550 = 0;
    local_548 = 0;
    plVar18 = plVar19 + -9;
    lVar13 = plVar19[-8] - *plVar18;
    local_528 = local_78;
    lStack_520 = lStack_70;
    if (lVar13 != 0) {
      uVar12 = local_530;
      if (0x7ffffffffffffffe < local_530) {
        uVar12 = 0x7fffffffffffffff;
      }
      if (uVar12 < (ulong)((lVar13 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar22 = (**(code **)(*local_538 + 0x10))(local_538,lVar13,0x10);
      if (lVar22 == 0) {
        (**(code **)(*local_538 + 0xb8))();
      }
      local_540 = lVar22 + (lVar13 >> 4) * 0x10;
      lVar20 = plVar19[-8];
      local_548 = lVar22;
      local_550 = lVar22;
      for (lVar13 = plVar19[-9]; lVar13 != lVar20; lVar13 = lVar13 + 0x250) {
        FUN_00bac10c(&local_538,local_548,lVar13);
        local_548 = local_548 + 0x250;
      }
    }
    local_518 = (int)plVar19[-2];
    local_510 = plVar19[-1];
    local_88 = (long *)*plVar15;
    uStack_80 = plVar16[4];
    local_78 = plVar16[5];
    lStack_70 = plVar16[6];
    local_588 = 0;
    local_598 = 0;
    local_590 = 0;
    local_580[0] = (long *)*plVar15;
    uVar12 = plVar16[4];
    local_570 = plVar16[5];
    lStack_568 = plVar16[6];
    lVar13 = plVar16[1] - *plVar16;
    if (lVar13 != 0) {
      if (0x7ffffffffffffffe < uVar12) {
        uVar12 = 0x7fffffffffffffff;
      }
      if (uVar12 < (ulong)((lVar13 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar22 = (**(code **)(*local_580[0] + 0x10))(local_580[0],lVar13,0x10);
      if (lVar22 == 0) {
        (**(code **)(*local_580[0] + 0xb8))();
      }
      local_588 = lVar22 + (lVar13 >> 4) * 0x10;
      lVar13 = *plVar16;
      lVar20 = plVar16[1];
      local_598 = lVar22;
      local_590 = lVar22;
      if (lVar13 != lVar20) {
        do {
          FUN_00bac10c(local_580,local_590,lVar13);
          lVar13 = lVar13 + 0x250;
          local_590 = local_590 + 0x250;
        } while (lVar20 != lVar13);
      }
    }
    iVar8 = local_518;
    lVar6 = local_598;
    iVar2 = (int)plVar16[7];
    local_558 = plVar16[8];
    local_560 = iVar2;
    lVar13 = local_598;
    lVar22 = local_590;
    plVar19 = local_580[0];
    lVar20 = local_550;
    if (local_598 != 0) {
      while (local_598 = lVar13, lVar22 != lVar6) {
        puVar14 = (undefined8 *)(lVar22 + -0x240);
        lVar22 = lVar22 + -0x250;
        plVar21 = (long *)*puVar14;
        if (plVar21 != (long *)0x0) {
          plVar1 = plVar21 + 1;
          do {
            iVar10 = (int)*plVar1 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 == 0) {
            plVar21[2] = 0;
            local_580[0] = plVar19;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_88 = (long *)*plVar21;
            FUN_02a44274(lVar13 + 0xd8,&local_88);
            lVar13 = local_598;
            plVar19 = local_580[0];
          }
        }
      }
      lVar22 = local_588 - lVar13;
      local_590 = lVar6;
      uVar12 = (**(code **)(*plVar19 + 0xc0))(plVar19);
      if ((uVar12 & 1) != 0) {
        if (*(char *)(lVar5 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar5 + 0x38d488) = 1;
          *(undefined8 *)(lVar5 + 0x38d478) = 0;
          *(undefined8 *)(lVar5 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar5 + 0x38d480)) {
          FUN_02bcc824(plVar19,lVar13,lVar22,0x10);
          lVar20 = local_550;
          goto joined_r0x00cad4f4;
        }
      }
      (**(code **)(*plVar19 + 0x18))(plVar19,lVar13,lVar22,0x10);
      lVar20 = local_550;
    }
joined_r0x00cad4f4:
    local_550 = lVar20;
    if (lVar20 != 0) {
      lVar13 = lVar20;
      lVar22 = local_548;
      plVar19 = local_538;
      while( true ) {
        local_550 = lVar13;
        local_538 = plVar19;
        if (lVar22 == lVar20) break;
        puVar14 = (undefined8 *)(lVar22 + -0x240);
        lVar22 = lVar22 + -0x250;
        plVar21 = (long *)*puVar14;
        if (plVar21 != (long *)0x0) {
          plVar1 = plVar21 + 1;
          do {
            iVar10 = (int)*plVar1 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 == 0) {
            plVar21[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_88 = (long *)*plVar21;
            FUN_02a44274(lVar13 + 0xd8,&local_88);
            lVar13 = local_550;
            plVar19 = local_538;
          }
        }
      }
      lVar22 = local_540 - lVar13;
      local_548 = lVar20;
      uVar12 = (**(code **)(*plVar19 + 0xc0))(plVar19);
      if ((uVar12 & 1) != 0) {
        if (*(char *)(lVar5 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar5 + 0x38d488) = 1;
          *(undefined8 *)(lVar5 + 0x38d478) = 0;
          *(undefined8 *)(lVar5 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar5 + 0x38d480)) {
          FUN_02bcc824(plVar19,lVar13,lVar22,0x10);
          goto LAB_00cad100;
        }
      }
      (**(code **)(*plVar19 + 0x18))(plVar19,lVar13,lVar22,0x10);
    }
LAB_00cad100:
    plVar19 = plVar18;
  } while (iVar2 <= iVar8);
  if (plVar18 < plVar23) goto LAB_00cad568;
  FUN_00cb0840(plVar23,plVar18);
  local_67c = local_67c + 1;
  plVar15 = plVar18;
  if (plVar16 != plVar23) {
    plVar15 = plVar16;
  }
  plVar23 = plVar23 + 9;
  plVar16 = plVar15;
  goto LAB_00cacc60;
LAB_00caf834:
  local_6c0 = plVar23;
  if ((uVar12 & 1) != 0) {
    return;
  }
  goto LAB_00caca90;
}


