/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00c63e30; name: FUN_00c63e30
 */


void FUN_00c63e30(long *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  long local_6e0;
  int local_6bc;
  long local_6a0;
  long local_690;
  long *local_688;
  long *local_680;
  long *local_660;
  long *local_658;
  long local_640;
  long local_628;
  long local_618;
  long *local_610;
  ulong local_608;
  long local_600;
  long lStack_5f8;
  int local_5f0;
  long local_5e8;
  long local_5e0;
  long local_5d8;
  long local_5d0;
  long *local_5c8;
  ulong local_5c0;
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
  long *local_3d0;
  ulong local_3c8;
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
  long *local_2f8 [2];
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
  long *local_220;
  ulong local_218;
  long local_210;
  long local_208;
  int local_200;
  long local_1f8;
  long local_1f0;
  long local_1e8;
  long local_1e0;
  long *local_1d8;
  ulong local_1d0;
  long local_1c8;
  long local_1c0;
  int local_1b8;
  long local_1b0;
  long local_1a8;
  long local_1a0;
  long local_198;
  long *local_190;
  ulong local_188;
  long local_180;
  long local_178;
  int local_170;
  long local_168;
  long local_160;
  long local_158;
  long local_150;
  long *local_148;
  ulong local_140;
  long local_138;
  long local_130;
  int local_128;
  long local_120;
  long *local_88;
  ulong uStack_80;
  long local_78;
  long lStack_70;
  
  plVar19 = param_2;
LAB_00c63f10:
  plVar18 = plVar19 + -9;
  plVar13 = param_1;
LAB_00c63f1c:
  param_1 = plVar13;
  uVar16 = (long)plVar19 - (long)param_1;
  uVar17 = ((long)uVar16 >> 3) * -0x71c71c71c71c71c7;
  if (uVar17 == 3) {
    FUN_00c68af0(param_1,param_1 + 9,plVar18);
    return;
  }
  if (uVar17 < 6) {
                    /* WARNING: Could not recover jumptable at 0x00c63f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)*(ushort *)(&DAT_03a77b80 + ((long)uVar16 >> 3) * 0x1c71c71c71c71c72) * 4 +
              0xc63f44))();
    return;
  }
  if ((long)uVar16 < 0x1f8) {
    FUN_00c6e0e0(param_1,plVar19);
    return;
  }
  uVar17 = uVar16 / 0x90;
  local_658 = param_1 + uVar17 * 9;
  if ((long)uVar16 < 0x118f9) {
    local_6bc = FUN_00c68af0(param_1,local_658,plVar18);
  }
  else {
    local_6bc = FUN_00c6c3f0(param_1,param_1 + (uVar16 / 0x120) * 9,local_658,
                             local_658 + (uVar16 / 0x120) * 9,plVar18);
  }
  plVar8 = param_1 + 3;
  local_88 = (long *)*plVar8;
  lStack_70 = param_1[6];
  uStack_80 = param_1[4];
  local_78 = param_1[5];
  local_160 = 0;
  local_150 = 0;
  local_158 = 0;
  local_148 = (long *)*plVar8;
  local_130 = param_1[6];
  local_140 = param_1[4];
  local_138 = param_1[5];
  lVar14 = param_1[1] - *param_1;
  if (lVar14 != 0) {
    uVar16 = local_140;
    if (0x7ffffffffffffffe < local_140) {
      uVar16 = 0x7fffffffffffffff;
    }
    if (uVar16 < (ulong)((lVar14 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar10 = (**(code **)(*local_148 + 0x10))(local_148,lVar14,0x10);
    if (lVar10 == 0) {
      (**(code **)(*local_148 + 0xb8))();
    }
    local_150 = lVar10 + (lVar14 >> 4) * 0x10;
    lVar11 = param_1[1];
    local_158 = lVar10;
    local_160 = lVar10;
    for (lVar14 = *param_1; lVar14 != lVar11; lVar14 = lVar14 + 0x250) {
      FUN_00bac10c(&local_148,local_158,lVar14);
      local_158 = local_158 + 0x250;
    }
  }
  local_128 = (int)param_1[7];
  local_120 = param_1[8];
  local_190 = (long *)param_1[uVar17 * 9 + 3];
  local_180 = param_1[uVar17 * 9 + 5];
  local_178 = param_1[uVar17 * 9 + 6];
  local_188 = param_1[uVar17 * 9 + 4];
  local_1a8 = 0;
  local_198 = 0;
  local_1a0 = 0;
  plVar13 = param_1 + uVar17 * 9 + 1;
  lVar14 = *plVar13 - *local_658;
  if (lVar14 != 0) {
    uVar16 = local_188;
    if (0x7ffffffffffffffe < local_188) {
      uVar16 = 0x7fffffffffffffff;
    }
    if (uVar16 < (ulong)((lVar14 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar10 = (**(code **)(*local_190 + 0x10))(local_190,lVar14,0x10);
    if (lVar10 == 0) {
      (**(code **)(*local_190 + 0xb8))();
    }
    local_198 = lVar10 + (lVar14 >> 4) * 0x10;
    lVar14 = *local_658;
    lVar11 = *plVar13;
    local_1a8 = lVar10;
    local_1a0 = lVar10;
    if (lVar14 != lVar11) {
      do {
        local_1a0 = lVar10;
        FUN_00bac10c(&local_190,lVar10,lVar14);
        lVar10 = local_1a0 + 0x250;
        lVar14 = lVar14 + 0x250;
        local_1a0 = lVar10;
      } while (lVar11 != lVar14);
    }
  }
  iVar4 = local_128;
  lVar10 = local_1a8;
  iVar2 = (int)param_1[uVar17 * 9 + 7];
  local_168 = param_1[uVar17 * 9 + 8];
  local_170 = iVar2;
  lVar14 = local_160;
  if (local_1a8 != 0) {
    if (local_1a0 != local_1a8) {
      local_680 = (long *)(local_1a0 + -0x250);
      plVar9 = *(long **)(local_1a0 + -0x240);
      if (plVar9 == (long *)0x0) goto LAB_00c65d6c;
      plVar12 = plVar9 + 1;
      do {
        iVar7 = (int)*plVar12 + -1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *(int *)plVar12 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        if (iVar7 == 0) {
          plVar9[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar14 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar14;
          local_88 = (long *)*plVar9;
          FUN_02a44274(lVar14 + 0xd8,&local_88);
        }
LAB_00c65d6c:
        do {
          if (local_680 == (long *)lVar10) goto LAB_00c65dbc;
          puVar15 = (undefined8 *)((long)local_680 + -0x240);
          local_680 = (long *)((long)local_680 + -0x250);
          plVar9 = (long *)*puVar15;
        } while (plVar9 == (long *)0x0);
        plVar12 = plVar9 + 1;
        do {
          iVar7 = (int)*plVar12 + -1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *(int *)plVar12 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      } while( true );
    }
LAB_00c65dbc:
    plVar9 = local_190;
    lVar14 = local_1a8;
    local_1a0 = lVar10;
    lVar10 = local_198 - local_1a8;
    uVar16 = (**(code **)(*local_190 + 0xc0))(local_190);
    if ((uVar16 & 1) != 0) {
      lVar11 = tpidr_el0;
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar11 + 0x38d480)) {
        FUN_02bcc824(plVar9,lVar14,lVar10,0x10);
        lVar14 = local_160;
        goto joined_r0x00c65eac;
      }
    }
    (**(code **)(*plVar9 + 0x18))(plVar9,lVar14,lVar10,0x10);
    lVar14 = local_160;
  }
joined_r0x00c65eac:
  local_160 = lVar14;
  if (lVar14 != 0) {
    if (local_158 != lVar14) {
      local_680 = (long *)(local_158 + -0x250);
      plVar9 = *(long **)(local_158 + -0x240);
      if (plVar9 == (long *)0x0) goto LAB_00c65f90;
      plVar12 = plVar9 + 1;
      do {
        iVar7 = (int)*plVar12 + -1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *(int *)plVar12 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        if (iVar7 == 0) {
          plVar9[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_88 = (long *)*plVar9;
          FUN_02a44274(lVar10 + 0xd8,&local_88);
        }
LAB_00c65f90:
        do {
          if (local_680 == (long *)lVar14) goto LAB_00c65fe0;
          puVar15 = (undefined8 *)((long)local_680 + -0x240);
          local_680 = (long *)((long)local_680 + -0x250);
          plVar9 = (long *)*puVar15;
        } while (plVar9 == (long *)0x0);
        plVar12 = plVar9 + 1;
        do {
          iVar7 = (int)*plVar12 + -1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *(int *)plVar12 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      } while( true );
    }
LAB_00c65fe0:
    plVar9 = local_148;
    lVar10 = local_160;
    lVar11 = local_150 - local_160;
    local_158 = lVar14;
    uVar16 = (**(code **)(*local_148 + 0xc0))(local_148);
    if ((uVar16 & 1) != 0) {
      lVar14 = tpidr_el0;
      if (*(char *)(lVar14 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar14 + 0x38d488) = 1;
        *(undefined8 *)(lVar14 + 0x38d478) = 0;
        *(undefined8 *)(lVar14 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar14 + 0x38d480)) {
        FUN_02bcc824(plVar9,lVar10,lVar11,0x10);
        goto LAB_00c64740;
      }
    }
    (**(code **)(*plVar9 + 0x18))(plVar9,lVar10,lVar11,0x10);
  }
LAB_00c64740:
  local_688 = plVar18;
  if (iVar2 <= iVar4) {
    while (plVar9 = local_688 + -9, param_1 != plVar9) {
      local_418[0] = (long *)local_688[-6];
      uStack_80 = local_688[-5];
      local_78 = local_688[-4];
      lStack_70 = local_688[-3];
      local_430 = 0;
      local_420 = 0;
      local_428 = 0;
      lVar14 = local_688[-8] - local_688[-9];
      local_408 = local_78;
      lStack_400 = lStack_70;
      if (lVar14 != 0) {
        uVar16 = uStack_80;
        if (0x7ffffffffffffffe < uStack_80) {
          uVar16 = 0x7fffffffffffffff;
        }
        local_88 = local_418[0];
        if (uVar16 < (ulong)((lVar14 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar10 = (**(code **)(*local_418[0] + 0x10))(local_418[0],lVar14,0x10);
        if (lVar10 == 0) {
          (**(code **)(*local_418[0] + 0xb8))();
        }
        local_420 = lVar10 + (lVar14 >> 4) * 0x10;
        lVar11 = local_688[-8];
        local_428 = lVar10;
        local_430 = lVar10;
        for (lVar14 = local_688[-9]; lVar14 != lVar11; lVar14 = lVar14 + 0x250) {
          FUN_00bac10c(local_418,local_428,lVar14);
          local_428 = local_428 + 0x250;
        }
      }
      local_3f8 = (int)local_688[-2];
      local_3f0 = local_688[-1];
      local_460[0] = (long *)param_1[uVar17 * 9 + 3];
      uStack_80 = param_1[uVar17 * 9 + 4];
      local_78 = param_1[uVar17 * 9 + 5];
      lStack_70 = param_1[uVar17 * 9 + 6];
      local_478 = 0;
      local_468 = 0;
      local_470 = 0;
      lVar14 = *plVar13 - *local_658;
      local_88 = local_460[0];
      local_450 = local_78;
      lStack_448 = lStack_70;
      if (lVar14 != 0) {
        uVar16 = uStack_80;
        if (0x7ffffffffffffffe < uStack_80) {
          uVar16 = 0x7fffffffffffffff;
        }
        if (uVar16 < (ulong)((lVar14 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar10 = (**(code **)(*local_460[0] + 0x10))(local_460[0],lVar14,0x10);
        if (lVar10 == 0) {
          (**(code **)(*local_460[0] + 0xb8))();
        }
        local_468 = lVar10 + (lVar14 >> 4) * 0x10;
        lVar14 = *local_658;
        lVar11 = *plVar13;
        local_478 = lVar10;
        local_470 = lVar10;
        if (lVar14 != lVar11) {
          do {
            local_470 = lVar10;
            FUN_00bac10c(local_460,lVar10,lVar14);
            lVar10 = local_470 + 0x250;
            lVar14 = lVar14 + 0x250;
            local_470 = lVar10;
          } while (lVar11 != lVar14);
        }
      }
      iVar4 = local_3f8;
      lVar10 = local_478;
      iVar2 = (int)param_1[uVar17 * 9 + 7];
      local_438 = param_1[uVar17 * 9 + 8];
      local_440 = iVar2;
      lVar14 = local_430;
      if (local_478 != 0) {
        if (local_470 != local_478) {
          local_6e0 = local_470 + -0x250;
          plVar12 = *(long **)(local_470 + -0x240);
          if (plVar12 == (long *)0x0) goto LAB_00c66470;
          plVar1 = plVar12 + 1;
          do {
            iVar7 = (int)*plVar1 + -1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *(int *)plVar1 = iVar7;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          do {
            if (iVar7 == 0) {
              plVar12[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar14 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar14;
              local_88 = (long *)*plVar12;
              FUN_02a44274(lVar14 + 0xd8,&local_88);
            }
LAB_00c66470:
            do {
              if (local_6e0 == lVar10) goto LAB_00c664c0;
              puVar15 = (undefined8 *)(local_6e0 + -0x240);
              local_6e0 = local_6e0 + -0x250;
              plVar12 = (long *)*puVar15;
            } while (plVar12 == (long *)0x0);
            plVar1 = plVar12 + 1;
            do {
              iVar7 = (int)*plVar1 + -1;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *(int *)plVar1 = iVar7;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          } while( true );
        }
LAB_00c664c0:
        lVar14 = local_478;
        local_470 = lVar10;
        lVar10 = local_468 - local_478;
        uVar16 = (**(code **)(*local_460[0] + 0xc0))(local_460[0]);
        if ((uVar16 & 1) != 0) {
          lVar11 = tpidr_el0;
          if (*(char *)(lVar11 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar11 + 0x38d488) = 1;
            *(undefined8 *)(lVar11 + 0x38d478) = 0;
            *(undefined8 *)(lVar11 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar11 + 0x38d480)) {
            FUN_02bcc824(local_460[0],lVar14,lVar10,0x10);
            lVar14 = local_430;
            goto joined_r0x00c6655c;
          }
        }
        (**(code **)(*local_460[0] + 0x18))(local_460[0],lVar14,lVar10,0x10);
        lVar14 = local_430;
      }
joined_r0x00c6655c:
      local_430 = lVar14;
      if (lVar14 != 0) {
        if (local_428 != lVar14) {
          local_680 = (long *)(local_428 + -0x250);
          plVar12 = *(long **)(local_428 + -0x240);
          if (plVar12 == (long *)0x0) goto LAB_00c665ac;
          plVar1 = plVar12 + 1;
          do {
            iVar7 = (int)*plVar1 + -1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *(int *)plVar1 = iVar7;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          do {
            if (iVar7 == 0) {
              plVar12[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar10 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar10;
              local_88 = (long *)*plVar12;
              FUN_02a44274(lVar10 + 0xd8,&local_88);
            }
LAB_00c665ac:
            do {
              if (local_680 == (long *)lVar14) goto LAB_00c665fc;
              puVar15 = (undefined8 *)((long)local_680 + -0x240);
              local_680 = (long *)((long)local_680 + -0x250);
              plVar12 = (long *)*puVar15;
            } while (plVar12 == (long *)0x0);
            plVar1 = plVar12 + 1;
            do {
              iVar7 = (int)*plVar1 + -1;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *(int *)plVar1 = iVar7;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          } while( true );
        }
LAB_00c665fc:
        lVar10 = local_430;
        lVar11 = local_420 - local_430;
        local_428 = lVar14;
        uVar16 = (**(code **)(*local_418[0] + 0xc0))(local_418[0]);
        if ((uVar16 & 1) != 0) {
          lVar14 = tpidr_el0;
          if (*(char *)(lVar14 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar14 + 0x38d488) = 1;
            *(undefined8 *)(lVar14 + 0x38d478) = 0;
            *(undefined8 *)(lVar14 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar14 + 0x38d480)) {
            FUN_02bcc824(local_418[0],lVar10,lVar11,0x10);
            goto LAB_00c66138;
          }
        }
        (**(code **)(*local_418[0] + 0x18))(local_418[0],lVar10,lVar11,0x10);
      }
LAB_00c66138:
      local_688 = plVar9;
      if (iVar4 < iVar2) goto LAB_00c672c8;
    }
    local_88 = (long *)*plVar8;
    uStack_80 = param_1[4];
    local_78 = param_1[5];
    lStack_70 = param_1[6];
    local_1f0 = 0;
    local_1e0 = 0;
    local_1e8 = 0;
    local_1d8 = (long *)*plVar8;
    local_1d0 = param_1[4];
    local_1c8 = param_1[5];
    local_1c0 = param_1[6];
    lVar14 = param_1[1] - *param_1;
    if (lVar14 != 0) {
      uVar16 = local_1d0;
      if (0x7ffffffffffffffe < local_1d0) {
        uVar16 = 0x7fffffffffffffff;
      }
      if (uVar16 < (ulong)((lVar14 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar10 = (**(code **)(*local_1d8 + 0x10))(local_1d8,lVar14,0x10);
      if (lVar10 == 0) {
        (**(code **)(*local_1d8 + 0xb8))();
      }
      local_1e0 = lVar10 + (lVar14 >> 4) * 0x10;
      lVar11 = param_1[1];
      local_1e8 = lVar10;
      local_1f0 = lVar10;
      for (lVar14 = *param_1; lVar14 != lVar11; lVar14 = lVar14 + 0x250) {
        FUN_00bac10c(&local_1d8,local_1e8,lVar14);
        local_1e8 = local_1e8 + 0x250;
      }
    }
    local_1b8 = (int)param_1[7];
    local_1b0 = param_1[8];
    local_210 = plVar19[-4];
    local_208 = plVar19[-3];
    local_220 = (long *)plVar19[-6];
    local_218 = plVar19[-5];
    local_238 = 0;
    local_228 = 0;
    local_230 = 0;
    lVar14 = plVar19[-8] - plVar19[-9];
    if (lVar14 != 0) {
      uVar16 = local_218;
      if (0x7ffffffffffffffe < local_218) {
        uVar16 = 0x7fffffffffffffff;
      }
      if (uVar16 < (ulong)((lVar14 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar10 = (**(code **)(*local_220 + 0x10))(local_220,lVar14,0x10);
      if (lVar10 == 0) {
        (**(code **)(*local_220 + 0xb8))();
      }
      local_228 = lVar10 + (lVar14 >> 4) * 0x10;
      lVar14 = plVar19[-9];
      lVar11 = plVar19[-8];
      local_238 = lVar10;
      local_230 = lVar10;
      if (lVar14 != lVar11) {
        do {
          local_230 = lVar10;
          FUN_00bac10c(&local_220,lVar10,lVar14);
          lVar10 = local_230 + 0x250;
          lVar14 = lVar14 + 0x250;
          local_230 = lVar10;
        } while (lVar11 != lVar14);
      }
    }
    iVar4 = local_1b8;
    lVar14 = local_238;
    iVar2 = (int)plVar19[-2];
    local_1f8 = plVar19[-1];
    local_200 = iVar2;
    if (local_238 != 0) {
      if (local_230 != local_238) {
        local_680 = (long *)(local_230 + -0x250);
        plVar13 = *(long **)(local_230 + -0x240);
        if (plVar13 == (long *)0x0) goto LAB_00c67994;
        plVar9 = plVar13 + 1;
        do {
          iVar7 = (int)*plVar9 + -1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *(int *)plVar9 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        do {
          if (iVar7 == 0) {
            plVar13[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar10 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar10;
            local_88 = (long *)*plVar13;
            FUN_02a44274(lVar10 + 0xd8,&local_88);
          }
LAB_00c67994:
          do {
            if (local_680 == (long *)lVar14) goto LAB_00c679e4;
            puVar15 = (undefined8 *)((long)local_680 + -0x240);
            local_680 = (long *)((long)local_680 + -0x250);
            plVar13 = (long *)*puVar15;
          } while (plVar13 == (long *)0x0);
          plVar9 = plVar13 + 1;
          do {
            iVar7 = (int)*plVar9 + -1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar5) {
              *(int *)plVar9 = iVar7;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        } while( true );
      }
LAB_00c679e4:
      plVar13 = local_220;
      lVar10 = local_238;
      local_230 = lVar14;
      lVar14 = local_228 - local_238;
      uVar16 = (**(code **)(*local_220 + 0xc0))(local_220);
      if ((uVar16 & 1) != 0) {
        lVar11 = tpidr_el0;
        if (*(char *)(lVar11 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar11 + 0x38d488) = 1;
          *(undefined8 *)(lVar11 + 0x38d478) = 0;
          *(undefined8 *)(lVar11 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar11 + 0x38d480)) {
          FUN_02bcc824(plVar13,lVar10,lVar14,0x10);
          goto LAB_00c66738;
        }
      }
      (**(code **)(*plVar13 + 0x18))(plVar13,lVar10,lVar14,0x10);
    }
LAB_00c66738:
    lVar14 = local_1f0;
    plVar13 = param_1 + 9;
    if (local_1f0 != 0) {
      if (local_1e8 != local_1f0) {
        local_680 = (long *)(local_1e8 + -0x250);
        plVar9 = *(long **)(local_1e8 + -0x240);
        if (plVar9 == (long *)0x0) goto LAB_00c67b74;
        plVar12 = plVar9 + 1;
        do {
          iVar7 = (int)*plVar12 + -1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *(int *)plVar12 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        do {
          if (iVar7 == 0) {
            plVar9[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar10 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar10;
            local_88 = (long *)*plVar9;
            FUN_02a44274(lVar10 + 0xd8,&local_88);
          }
LAB_00c67b74:
          do {
            if (local_680 == (long *)lVar14) goto LAB_00c67bc8;
            puVar15 = (undefined8 *)((long)local_680 + -0x240);
            local_680 = (long *)((long)local_680 + -0x250);
            plVar9 = (long *)*puVar15;
          } while (plVar9 == (long *)0x0);
          plVar12 = plVar9 + 1;
          do {
            iVar7 = (int)*plVar12 + -1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar5) {
              *(int *)plVar12 = iVar7;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        } while( true );
      }
LAB_00c67bc8:
      plVar9 = local_1d8;
      lVar10 = local_1f0;
      local_1e8 = lVar14;
      lVar14 = local_1e0 - local_1f0;
      uVar16 = (**(code **)(*local_1d8 + 0xc0))();
      if ((uVar16 & 1) != 0) {
        lVar11 = tpidr_el0;
        if (*(char *)(lVar11 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar11 + 0x38d488) = 1;
          *(undefined8 *)(lVar11 + 0x38d478) = 0;
          *(undefined8 *)(lVar11 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar11 + 0x38d480)) {
          FUN_02bcc824(plVar9,lVar10,lVar14,0x10);
          goto LAB_00c66748;
        }
      }
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar10,lVar14,0x10);
    }
LAB_00c66748:
    if (iVar2 <= iVar4) {
      do {
        if (plVar13 == plVar18) {
          return;
        }
        local_88 = (long *)*plVar8;
        uStack_80 = param_1[4];
        local_78 = param_1[5];
        lStack_70 = param_1[6];
        local_280 = 0;
        local_270 = 0;
        local_278 = 0;
        local_268[0] = (long *)*plVar8;
        uVar16 = param_1[4];
        local_258 = param_1[5];
        lStack_250 = param_1[6];
        lVar14 = param_1[1] - *param_1;
        if (lVar14 != 0) {
          if (0x7ffffffffffffffe < uVar16) {
            uVar16 = 0x7fffffffffffffff;
          }
          if (uVar16 < (ulong)((lVar14 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar10 = (**(code **)(*local_268[0] + 0x10))(local_268[0],lVar14,0x10);
          if (lVar10 == 0) {
            (**(code **)(*local_268[0] + 0xb8))();
          }
          local_270 = lVar10 + (lVar14 >> 4) * 0x10;
          lVar14 = *param_1;
          lVar11 = param_1[1];
          local_280 = lVar10;
          local_278 = lVar10;
          if (lVar14 != lVar11) {
            do {
              FUN_00bac10c(local_268,local_278,lVar14);
              lVar14 = lVar14 + 0x250;
              local_278 = local_278 + 0x250;
            } while (lVar11 != lVar14);
          }
        }
        local_248 = (int)param_1[7];
        local_240 = param_1[8];
        local_88 = (long *)plVar13[3];
        uStack_80 = plVar13[4];
        local_78 = plVar13[5];
        lStack_70 = plVar13[6];
        local_2c8 = 0;
        local_2b8 = 0;
        local_2c0 = 0;
        local_2b0[0] = (long *)plVar13[3];
        uVar16 = plVar13[4];
        local_2a0 = plVar13[5];
        lStack_298 = plVar13[6];
        lVar14 = plVar13[1] - *plVar13;
        if (lVar14 != 0) {
          if (0x7ffffffffffffffe < uVar16) {
            uVar16 = 0x7fffffffffffffff;
          }
          if (uVar16 < (ulong)((lVar14 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar10 = (**(code **)(*local_2b0[0] + 0x10))(local_2b0[0],lVar14,0x10);
          if (lVar10 == 0) {
            (**(code **)(*local_2b0[0] + 0xb8))();
          }
          local_2b8 = lVar10 + (lVar14 >> 4) * 0x10;
          lVar14 = *plVar13;
          lVar11 = plVar13[1];
          local_2c8 = lVar10;
          local_2c0 = lVar10;
          if (lVar14 != lVar11) {
            do {
              local_2c0 = lVar10;
              FUN_00bac10c(local_2b0,lVar10,lVar14);
              lVar14 = lVar14 + 0x250;
              lVar10 = local_2c0 + 0x250;
              local_2c0 = lVar10;
            } while (lVar11 != lVar14);
          }
        }
        iVar4 = local_248;
        lVar14 = local_2c8;
        iVar2 = (int)plVar13[7];
        local_288 = plVar13[8];
        local_290 = iVar2;
        if (local_2c8 != 0) {
          if (local_2c0 != local_2c8) {
            local_688 = (long *)(local_2c0 + -0x250);
            plVar9 = *(long **)(local_2c0 + -0x240);
            if (plVar9 == (long *)0x0) goto LAB_00c68058;
            plVar12 = plVar9 + 1;
            do {
              iVar7 = (int)*plVar12 + -1;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar5) {
                *(int *)plVar12 = iVar7;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            do {
              if (iVar7 == 0) {
                plVar9[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar10 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar10;
                local_88 = (long *)*plVar9;
                FUN_02a44274(lVar10 + 0xd8,&local_88);
              }
LAB_00c68058:
              do {
                if (local_688 == (long *)lVar14) goto LAB_00c680ac;
                puVar15 = (undefined8 *)((long)local_688 + -0x240);
                local_688 = (long *)((long)local_688 + -0x250);
                plVar9 = (long *)*puVar15;
              } while (plVar9 == (long *)0x0);
              plVar12 = plVar9 + 1;
              do {
                iVar7 = (int)*plVar12 + -1;
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                if (bVar5) {
                  *(int *)plVar12 = iVar7;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            } while( true );
          }
LAB_00c680ac:
          lVar10 = local_2c8;
          local_2c0 = lVar14;
          lVar14 = local_2b8 - local_2c8;
          uVar16 = (**(code **)(*local_2b0[0] + 0xc0))();
          if ((uVar16 & 1) != 0) {
            lVar11 = tpidr_el0;
            if (*(char *)(lVar11 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar11 + 0x38d488) = 1;
              *(undefined8 *)(lVar11 + 0x38d478) = 0;
              *(undefined8 *)(lVar11 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar11 + 0x38d480)) {
              FUN_02bcc824(local_2b0[0],lVar10,lVar14,0x10);
              goto LAB_00c67dc8;
            }
          }
          (**(code **)(*local_2b0[0] + 0x18))(local_2b0[0],lVar10,lVar14,0x10);
        }
LAB_00c67dc8:
        lVar14 = local_280;
        if (local_280 != 0) {
          if (local_278 != local_280) {
            local_680 = (long *)(local_278 + -0x250);
            plVar9 = *(long **)(local_278 + -0x240);
            if (plVar9 == (long *)0x0) goto LAB_00c68188;
            plVar12 = plVar9 + 1;
            do {
              iVar7 = (int)*plVar12 + -1;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar5) {
                *(int *)plVar12 = iVar7;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            do {
              if (iVar7 == 0) {
                plVar9[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar10 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar10;
                local_88 = (long *)*plVar9;
                FUN_02a44274(lVar10 + 0xd8,&local_88);
              }
LAB_00c68188:
              do {
                if (local_680 == (long *)lVar14) goto LAB_00c681dc;
                puVar15 = (undefined8 *)((long)local_680 + -0x240);
                local_680 = (long *)((long)local_680 + -0x250);
                plVar9 = (long *)*puVar15;
              } while (plVar9 == (long *)0x0);
              plVar12 = plVar9 + 1;
              do {
                iVar7 = (int)*plVar12 + -1;
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                if (bVar5) {
                  *(int *)plVar12 = iVar7;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            } while( true );
          }
LAB_00c681dc:
          lVar10 = local_280;
          local_278 = lVar14;
          lVar14 = local_270 - local_280;
          uVar16 = (**(code **)(*local_268[0] + 0xc0))();
          if ((uVar16 & 1) != 0) {
            lVar11 = tpidr_el0;
            if (*(char *)(lVar11 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar11 + 0x38d488) = 1;
              *(undefined8 *)(lVar11 + 0x38d478) = 0;
              *(undefined8 *)(lVar11 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar11 + 0x38d480)) {
              FUN_02bcc824(local_268[0],lVar10,lVar14,0x10);
              goto LAB_00c67dd4;
            }
          }
          (**(code **)(*local_268[0] + 0x18))(local_268[0],lVar10,lVar14,0x10);
        }
LAB_00c67dd4:
        if (iVar4 < iVar2) goto LAB_00c68274;
        plVar13 = plVar13 + 9;
      } while( true );
    }
    goto joined_r0x00c68288;
  }
  goto LAB_00c64754;
LAB_00c672c8:
  FUN_00c68810(param_1,plVar9);
  local_6bc = local_6bc + 1;
LAB_00c64754:
  local_660 = param_1 + 9;
  if (local_660 < local_688) {
LAB_00c64768:
    plVar13 = local_658 + 3;
    do {
      local_88 = (long *)local_660[3];
      uStack_80 = local_660[4];
      local_78 = local_660[5];
      lStack_70 = local_660[6];
      local_4c0 = 0;
      local_4b0 = 0;
      local_4b8 = 0;
      local_498 = local_660[5];
      lStack_490 = local_660[6];
      lVar14 = local_660[1] - *local_660;
      if (lVar14 != 0) {
        uVar16 = local_4a0;
        if (0x7ffffffffffffffe < local_4a0) {
          uVar16 = 0x7fffffffffffffff;
        }
        if (uVar16 < (ulong)((lVar14 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar10 = (**(code **)(*local_4a8 + 0x10))(local_4a8,lVar14,0x10);
        if (lVar10 == 0) {
          (**(code **)(*local_4a8 + 0xb8))();
        }
        local_4b0 = lVar10 + (lVar14 >> 4) * 0x10;
        lVar11 = local_660[1];
        local_4b8 = lVar10;
        local_4c0 = lVar10;
        for (lVar14 = *local_660; lVar14 != lVar11; lVar14 = lVar14 + 0x250) {
          FUN_00bac10c(&local_4a8,local_4b8,lVar14);
          local_4b8 = local_4b8 + 0x250;
        }
      }
      local_488 = (int)local_660[7];
      local_480 = local_660[8];
      local_88 = (long *)*plVar13;
      uStack_80 = local_658[4];
      local_78 = local_658[5];
      lStack_70 = local_658[6];
      local_4f8 = 0;
      local_508 = 0;
      local_500 = 0;
      local_4f0[0] = (long *)*plVar13;
      uVar16 = local_658[4];
      local_4e0 = local_658[5];
      lStack_4d8 = local_658[6];
      lVar14 = local_658[1] - *local_658;
      if (lVar14 != 0) {
        if (0x7ffffffffffffffe < uVar16) {
          uVar16 = 0x7fffffffffffffff;
        }
        if (uVar16 < (ulong)((lVar14 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar10 = (**(code **)(*local_4f0[0] + 0x10))(local_4f0[0],lVar14,0x10);
        if (lVar10 == 0) {
          (**(code **)(*local_4f0[0] + 0xb8))();
        }
        local_4f8 = lVar10 + (lVar14 >> 4) * 0x10;
        lVar14 = *local_658;
        lVar11 = local_658[1];
        local_508 = lVar10;
        local_500 = lVar10;
        if (lVar14 != lVar11) {
          do {
            local_500 = lVar10;
            FUN_00bac10c(lVar11,local_4f0,lVar10,lVar14);
            lVar10 = local_500 + 0x250;
            lVar14 = lVar14 + 0x250;
            local_500 = lVar10;
          } while (lVar11 != lVar14);
        }
      }
      iVar4 = local_488;
      lVar10 = local_508;
      iVar2 = (int)local_658[7];
      local_4c8 = local_658[8];
      local_4d0 = iVar2;
      lVar14 = local_4c0;
      if (local_508 != 0) {
        if (local_500 != local_508) {
          local_6a0 = local_500 + -0x250;
          plVar8 = *(long **)(local_500 + -0x240);
          if (plVar8 == (long *)0x0) goto LAB_00c64a4c;
          plVar9 = plVar8 + 1;
          do {
            iVar7 = (int)*plVar9 + -1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar5) {
              *(int *)plVar9 = iVar7;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          do {
            if (iVar7 == 0) {
              plVar8[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar14 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar14;
              local_88 = (long *)*plVar8;
              FUN_02a44274(lVar14 + 0xd8,&local_88);
            }
LAB_00c64a4c:
            do {
              if (local_6a0 == lVar10) goto LAB_00c64a9c;
              puVar15 = (undefined8 *)(local_6a0 + -0x240);
              local_6a0 = local_6a0 + -0x250;
              plVar8 = (long *)*puVar15;
            } while (plVar8 == (long *)0x0);
            plVar9 = plVar8 + 1;
            do {
              iVar7 = (int)*plVar9 + -1;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *(int *)plVar9 = iVar7;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          } while( true );
        }
LAB_00c64a9c:
        lVar14 = local_508;
        lVar11 = local_4f8 - local_508;
        local_500 = lVar10;
        uVar16 = (**(code **)(*local_4f0[0] + 0xc0))(local_4f0[0]);
        if ((uVar16 & 1) != 0) {
          lVar10 = tpidr_el0;
          if (*(char *)(lVar10 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar10 + 0x38d488) = 1;
            *(undefined8 *)(lVar10 + 0x38d478) = 0;
            *(undefined8 *)(lVar10 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar10 + 0x38d480)) {
            FUN_02bcc824(local_4f0[0],lVar14,lVar11,0x10);
            lVar14 = local_4c0;
            goto joined_r0x00c64b48;
          }
        }
        (**(code **)(*local_4f0[0] + 0x18))(local_4f0[0],lVar14,lVar11,0x10);
        lVar14 = local_4c0;
      }
joined_r0x00c64b48:
      local_4c0 = lVar14;
      if (lVar14 != 0) {
        if (local_4b8 != lVar14) {
          local_640 = local_4b8 + -0x250;
          plVar8 = *(long **)(local_4b8 + -0x240);
          if (plVar8 == (long *)0x0) goto LAB_00c64be0;
          plVar9 = plVar8 + 1;
          do {
            iVar7 = (int)*plVar9 + -1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar5) {
              *(int *)plVar9 = iVar7;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          do {
            if (iVar7 == 0) {
              plVar8[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar10 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar10;
              local_88 = (long *)*plVar8;
              FUN_02a44274(lVar10 + 0xd8,&local_88);
            }
LAB_00c64be0:
            do {
              if (local_640 == lVar14) goto LAB_00c64c30;
              puVar15 = (undefined8 *)(local_640 + -0x240);
              local_640 = local_640 + -0x250;
              plVar8 = (long *)*puVar15;
            } while (plVar8 == (long *)0x0);
            plVar9 = plVar8 + 1;
            do {
              iVar7 = (int)*plVar9 + -1;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *(int *)plVar9 = iVar7;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          } while( true );
        }
LAB_00c64c30:
        plVar8 = local_4a8;
        lVar10 = local_4c0;
        lVar11 = local_4b0 - local_4c0;
        local_4b8 = lVar14;
        uVar16 = (**(code **)(*local_4a8 + 0xc0))(local_4a8);
        if ((uVar16 & 1) != 0) {
          lVar14 = tpidr_el0;
          if (*(char *)(lVar14 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar14 + 0x38d488) = 1;
            *(undefined8 *)(lVar14 + 0x38d478) = 0;
            *(undefined8 *)(lVar14 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar14 + 0x38d480)) {
            FUN_02bcc824(plVar8,lVar10,lVar11,0x10);
            goto joined_r0x00c64838;
          }
        }
        (**(code **)(*plVar8 + 0x18))(plVar8,lVar10,lVar11,0x10);
      }
joined_r0x00c64838:
      if (iVar2 <= iVar4) goto LAB_00c64cdc;
      local_660 = local_660 + 9;
    } while( true );
  }
LAB_00c652d0:
  if (local_660 == local_658) goto LAB_00c653b4;
  local_88 = (long *)local_658[3];
  uStack_80 = local_658[4];
  local_78 = local_658[5];
  lStack_70 = local_658[6];
  local_5e0 = 0;
  local_5d8 = 0;
  local_5c8 = (long *)local_658[3];
  local_5c0 = local_658[4];
  local_5b8 = local_658[5];
  lStack_5b0 = local_658[6];
  local_5d0 = 0;
  lVar14 = local_658[1] - *local_658;
  if (lVar14 != 0) {
    uVar16 = local_5c0;
    if (0x7ffffffffffffffe < local_5c0) {
      uVar16 = 0x7fffffffffffffff;
    }
    if (uVar16 < (ulong)((lVar14 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar10 = (**(code **)(*local_5c8 + 0x10))(local_5c8,lVar14,0x10);
    if (lVar10 == 0) {
      (**(code **)(*local_5c8 + 0xb8))();
    }
    local_5d0 = lVar10 + (lVar14 >> 4) * 0x10;
    lVar11 = local_658[1];
    local_5d8 = lVar10;
    local_5e0 = lVar10;
    for (lVar14 = *local_658; lVar14 != lVar11; lVar14 = lVar14 + 0x250) {
      FUN_00bac10c(&local_5c8,local_5d8,lVar14);
      local_5d8 = local_5d8 + 0x250;
    }
  }
  local_5a8 = (int)local_658[7];
  local_5a0 = local_658[8];
  local_88 = (long *)local_660[3];
  uStack_80 = local_660[4];
  local_78 = local_660[5];
  lStack_70 = local_660[6];
  local_628 = 0;
  local_610 = (long *)local_660[3];
  local_608 = local_660[4];
  local_600 = local_660[5];
  lStack_5f8 = local_660[6];
  local_618 = 0;
  lVar14 = local_660[1] - *local_660;
  if (lVar14 == 0) {
    lVar14 = 0;
  }
  else {
    uVar16 = local_608;
    if (0x7ffffffffffffffe < local_608) {
      uVar16 = 0x7fffffffffffffff;
    }
    if (uVar16 < (ulong)((lVar14 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    local_628 = (**(code **)(*local_610 + 0x10))(local_610,lVar14,0x10);
    if (local_628 == 0) {
      (**(code **)(*local_610 + 0xb8))();
    }
    local_618 = local_628 + (lVar14 >> 4) * 0x10;
    lVar10 = *local_660;
    lVar11 = local_660[1];
    lVar14 = local_628;
    if (lVar10 != lVar11) {
      do {
        FUN_00bac10c(&local_610,lVar14,lVar10);
        lVar14 = lVar14 + 0x250;
        lVar10 = lVar10 + 0x250;
      } while (lVar11 != lVar10);
    }
  }
  iVar4 = local_5a8;
  iVar2 = (int)local_660[7];
  local_5e8 = local_660[8];
  local_5f0 = iVar2;
  lVar10 = local_5e0;
  if (local_628 != 0) {
    if (lVar14 != local_628) {
      local_690 = lVar14 + -0x250;
      plVar13 = *(long **)(lVar14 + -0x240);
      if (plVar13 == (long *)0x0) goto LAB_00c68460;
      plVar8 = plVar13 + 1;
      do {
        iVar7 = (int)*plVar8 + -1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *(int *)plVar8 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        if (iVar7 == 0) {
          plVar13[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar14 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar14;
          local_88 = (long *)*plVar13;
          FUN_02a44274(lVar14 + 0xd8,&local_88);
        }
LAB_00c68460:
        do {
          if (local_690 == local_628) goto LAB_00c684b0;
          puVar15 = (undefined8 *)(local_690 + -0x240);
          local_690 = local_690 + -0x250;
          plVar13 = (long *)*puVar15;
        } while (plVar13 == (long *)0x0);
        plVar8 = plVar13 + 1;
        do {
          iVar7 = (int)*plVar8 + -1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *(int *)plVar8 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      } while( true );
    }
LAB_00c684b0:
    plVar13 = local_610;
    uVar16 = (**(code **)(*local_610 + 0xc0))(local_610);
    if ((uVar16 & 1) != 0) {
      lVar14 = tpidr_el0;
      if (*(char *)(lVar14 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar14 + 0x38d488) = 1;
        *(undefined8 *)(lVar14 + 0x38d478) = 0;
        *(undefined8 *)(lVar14 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar14 + 0x38d480)) {
        FUN_02bcc824(plVar13,local_628,local_618 - local_628,0x10);
        lVar10 = local_5e0;
        goto joined_r0x00c6859c;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,local_628,local_618 - local_628,0x10);
    lVar10 = local_5e0;
  }
joined_r0x00c6859c:
  local_5e0 = lVar10;
  if (lVar10 != 0) {
    if (local_5d8 != lVar10) {
      local_688 = (long *)(local_5d8 + -0x250);
      plVar13 = *(long **)(local_5d8 + -0x240);
      if (plVar13 == (long *)0x0) goto LAB_00c68680;
      plVar8 = plVar13 + 1;
      do {
        iVar7 = (int)*plVar8 + -1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *(int *)plVar8 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        if (iVar7 == 0) {
          plVar13[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar14 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar14;
          local_88 = (long *)*plVar13;
          FUN_02a44274(lVar14 + 0xd8,&local_88);
        }
LAB_00c68680:
        do {
          if (local_688 == (long *)lVar10) goto LAB_00c686d0;
          puVar15 = (undefined8 *)((long)local_688 + -0x240);
          local_688 = (long *)((long)local_688 + -0x250);
          plVar13 = (long *)*puVar15;
        } while (plVar13 == (long *)0x0);
        plVar8 = plVar13 + 1;
        do {
          iVar7 = (int)*plVar8 + -1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *(int *)plVar8 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      } while( true );
    }
LAB_00c686d0:
    plVar13 = local_5c8;
    lVar14 = local_5e0;
    lVar11 = local_5d0 - local_5e0;
    local_5d8 = lVar10;
    uVar16 = (**(code **)(*local_5c8 + 0xc0))(local_5c8);
    if ((uVar16 & 1) != 0) {
      lVar10 = tpidr_el0;
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar10 + 0x38d480)) {
        FUN_02bcc824(plVar13,lVar14,lVar11,0x10);
        goto LAB_00c65390;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,lVar14,lVar11,0x10);
  }
LAB_00c65390:
  if (iVar4 < iVar2) {
    FUN_00c68810(local_660,local_658);
    local_6bc = local_6bc + 1;
  }
LAB_00c653b4:
  if (local_6bc == 0) {
    uVar6 = FUN_00c6f280(param_1,local_660);
    uVar16 = FUN_00c6f280(local_660 + 9,plVar19);
    if ((uVar16 & 1) != 0) goto LAB_00c659ec;
    plVar13 = local_660 + 9;
    if ((uVar6 & 1) != 0) goto LAB_00c63f1c;
  }
  if (((long)plVar19 - (long)local_660 >> 3) * -0x71c71c71c71c71c7 <=
      ((long)local_660 - (long)param_1 >> 3) * -0x71c71c71c71c71c7) {
    FUN_00c63e30(local_660 + 9,plVar19);
    plVar19 = local_660;
    goto LAB_00c63f10;
  }
  FUN_00c63e30(param_1,local_660);
  plVar13 = local_660 + 9;
LAB_00c65404:
  goto LAB_00c63f1c;
LAB_00c68274:
  FUN_00c68810(plVar13,plVar18);
  plVar13 = plVar13 + 9;
joined_r0x00c68288:
  if (plVar13 == plVar18) {
    return;
  }
  local_680 = plVar18;
LAB_00c66764:
  do {
    local_88 = (long *)*plVar8;
    uStack_80 = param_1[4];
    local_78 = param_1[5];
    lStack_70 = param_1[6];
    local_310 = 0;
    local_300 = 0;
    local_308 = 0;
    local_2f8[0] = (long *)*plVar8;
    uVar16 = param_1[4];
    local_2e8 = param_1[5];
    lStack_2e0 = param_1[6];
    lVar14 = param_1[1] - *param_1;
    if (lVar14 != 0) {
      if (0x7ffffffffffffffe < uVar16) {
        uVar16 = 0x7fffffffffffffff;
      }
      if (uVar16 < (ulong)((lVar14 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar10 = (**(code **)(*local_2f8[0] + 0x10))(local_2f8[0],lVar14,0x10);
      if (lVar10 == 0) {
        (**(code **)(*local_2f8[0] + 0xb8))();
      }
      local_300 = lVar10 + (lVar14 >> 4) * 0x10;
      lVar11 = param_1[1];
      local_308 = lVar10;
      local_310 = lVar10;
      for (lVar14 = *param_1; lVar14 != lVar11; lVar14 = lVar14 + 0x250) {
        FUN_00bac10c(local_2f8,local_308,lVar14);
        local_308 = local_308 + 0x250;
      }
    }
    local_2d8 = (int)param_1[7];
    local_2d0 = param_1[8];
    local_88 = (long *)plVar13[3];
    uStack_80 = plVar13[4];
    local_78 = plVar13[5];
    lStack_70 = plVar13[6];
    local_358 = 0;
    local_348 = 0;
    local_350 = 0;
    local_340[0] = (long *)plVar13[3];
    uVar16 = plVar13[4];
    local_330 = plVar13[5];
    lStack_328 = plVar13[6];
    lVar14 = plVar13[1] - *plVar13;
    if (lVar14 != 0) {
      if (0x7ffffffffffffffe < uVar16) {
        uVar16 = 0x7fffffffffffffff;
      }
      if (uVar16 < (ulong)((lVar14 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar10 = (**(code **)(*local_340[0] + 0x10))(local_340[0],lVar14,0x10);
      if (lVar10 == 0) {
        (**(code **)(*local_340[0] + 0xb8))();
      }
      local_348 = lVar10 + (lVar14 >> 4) * 0x10;
      lVar14 = *plVar13;
      lVar11 = plVar13[1];
      local_358 = lVar10;
      local_350 = lVar10;
      if (lVar14 != lVar11) {
        do {
          local_350 = lVar10;
          FUN_00bac10c(local_340,lVar10,lVar14);
          lVar10 = local_350 + 0x250;
          lVar14 = lVar14 + 0x250;
          local_350 = lVar10;
        } while (lVar11 != lVar14);
      }
    }
    iVar4 = local_2d8;
    lVar10 = local_358;
    iVar2 = (int)plVar13[7];
    local_318 = plVar13[8];
    local_320 = iVar2;
    lVar14 = local_310;
    if (local_358 != 0) {
      if (local_350 != local_358) {
        local_688 = (long *)(local_350 + -0x250);
        plVar9 = *(long **)(local_350 + -0x240);
        if (plVar9 == (long *)0x0) goto LAB_00c66a50;
        plVar12 = plVar9 + 1;
        do {
          iVar7 = (int)*plVar12 + -1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *(int *)plVar12 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        do {
          if (iVar7 == 0) {
            plVar9[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar14 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar14;
            local_88 = (long *)*plVar9;
            FUN_02a44274(lVar14 + 0xd8,&local_88);
          }
LAB_00c66a50:
          do {
            if (local_688 == (long *)lVar10) goto LAB_00c66aa4;
            puVar15 = (undefined8 *)((long)local_688 + -0x240);
            local_688 = (long *)((long)local_688 + -0x250);
            plVar9 = (long *)*puVar15;
          } while (plVar9 == (long *)0x0);
          plVar12 = plVar9 + 1;
          do {
            iVar7 = (int)*plVar12 + -1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar5) {
              *(int *)plVar12 = iVar7;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        } while( true );
      }
LAB_00c66aa4:
      lVar14 = local_358;
      local_350 = lVar10;
      lVar10 = local_348 - local_358;
      uVar16 = (**(code **)(*local_340[0] + 0xc0))();
      if ((uVar16 & 1) != 0) {
        lVar11 = tpidr_el0;
        if (*(char *)(lVar11 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar11 + 0x38d488) = 1;
          *(undefined8 *)(lVar11 + 0x38d478) = 0;
          *(undefined8 *)(lVar11 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar11 + 0x38d480)) {
          FUN_02bcc824(local_340[0],lVar14,lVar10,0x10);
          lVar14 = local_310;
          goto joined_r0x00c66ba8;
        }
      }
      (**(code **)(*local_340[0] + 0x18))(local_340[0],lVar14,lVar10,0x10);
      lVar14 = local_310;
    }
joined_r0x00c66ba8:
    local_310 = lVar14;
    if (lVar14 != 0) {
      if (local_308 != lVar14) {
        local_660 = (long *)(local_308 + -0x250);
        plVar9 = *(long **)(local_308 + -0x240);
        if (plVar9 == (long *)0x0) goto LAB_00c66bf8;
        plVar12 = plVar9 + 1;
        do {
          iVar7 = (int)*plVar12 + -1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *(int *)plVar12 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        do {
          if (iVar7 == 0) {
            plVar9[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar10 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar10;
            local_88 = (long *)*plVar9;
            FUN_02a44274(lVar10 + 0xd8,&local_88);
          }
LAB_00c66bf8:
          do {
            if (local_660 == (long *)lVar14) goto LAB_00c66c4c;
            puVar15 = (undefined8 *)((long)local_660 + -0x240);
            local_660 = (long *)((long)local_660 + -0x250);
            plVar9 = (long *)*puVar15;
          } while (plVar9 == (long *)0x0);
          plVar12 = plVar9 + 1;
          do {
            iVar7 = (int)*plVar12 + -1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar5) {
              *(int *)plVar12 = iVar7;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        } while( true );
      }
LAB_00c66c4c:
      lVar10 = local_310;
      lVar11 = local_300 - local_310;
      local_308 = lVar14;
      uVar16 = (**(code **)(*local_2f8[0] + 0xc0))();
      if ((uVar16 & 1) != 0) {
        lVar14 = tpidr_el0;
        if (*(char *)(lVar14 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar14 + 0x38d488) = 1;
          *(undefined8 *)(lVar14 + 0x38d478) = 0;
          *(undefined8 *)(lVar14 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar14 + 0x38d480)) {
          FUN_02bcc824(local_2f8[0],lVar10,lVar11,0x10);
          goto LAB_00c66820;
        }
      }
      (**(code **)(*local_2f8[0] + 0x18))(local_2f8[0],lVar10,lVar11,0x10);
    }
LAB_00c66820:
    if (iVar4 < iVar2) {
      do {
        local_88 = (long *)*plVar8;
        uStack_80 = param_1[4];
        local_78 = param_1[5];
        lStack_70 = param_1[6];
        local_3a0 = 0;
        local_390 = 0;
        local_398 = 0;
        local_388[0] = (long *)*plVar8;
        uVar16 = param_1[4];
        local_378 = param_1[5];
        lStack_370 = param_1[6];
        lVar14 = param_1[1] - *param_1;
        if (lVar14 != 0) {
          if (0x7ffffffffffffffe < uVar16) {
            uVar16 = 0x7fffffffffffffff;
          }
          if (uVar16 < (ulong)((lVar14 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar10 = (**(code **)(*local_388[0] + 0x10))(local_388[0],lVar14,0x10);
          if (lVar10 == 0) {
            (**(code **)(*local_388[0] + 0xb8))();
          }
          local_390 = lVar10 + (lVar14 >> 4) * 0x10;
          lVar11 = param_1[1];
          local_398 = lVar10;
          local_3a0 = lVar10;
          for (lVar14 = *param_1; lVar14 != lVar11; lVar14 = lVar14 + 0x250) {
            FUN_00bac10c(local_388,local_398,lVar14);
            local_398 = local_398 + 0x250;
          }
        }
        local_368 = (int)param_1[7];
        local_360 = param_1[8];
        local_3d0 = (long *)local_680[-6];
        local_3c8 = local_680[-5];
        local_3c0 = local_680[-4];
        lStack_3b8 = local_680[-3];
        local_3e8 = 0;
        local_3d8 = 0;
        local_3e0 = 0;
        plVar9 = local_680 + -9;
        lVar14 = local_680[-8] - *plVar9;
        local_88 = local_3d0;
        uStack_80 = local_3c8;
        local_78 = local_3c0;
        lStack_70 = lStack_3b8;
        if (lVar14 != 0) {
          uVar16 = local_3c8;
          if (0x7ffffffffffffffe < local_3c8) {
            uVar16 = 0x7fffffffffffffff;
          }
          if (uVar16 < (ulong)((lVar14 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar10 = (**(code **)(*local_3d0 + 0x10))(local_3d0,lVar14,0x10);
          if (lVar10 == 0) {
            (**(code **)(*local_3d0 + 0xb8))();
          }
          local_3d8 = lVar10 + (lVar14 >> 4) * 0x10;
          lVar14 = local_680[-9];
          lVar11 = local_680[-8];
          local_3e8 = lVar10;
          local_3e0 = lVar10;
          if (lVar14 != lVar11) {
            do {
              local_3e0 = lVar10;
              FUN_00bac10c(lVar11,&local_3d0,lVar10,lVar14);
              lVar10 = local_3e0 + 0x250;
              lVar14 = lVar14 + 0x250;
              local_3e0 = lVar10;
            } while (lVar11 != lVar14);
          }
        }
        iVar4 = local_368;
        lVar10 = local_3e8;
        iVar2 = (int)local_680[-2];
        local_3a8 = local_680[-1];
        local_3b0 = iVar2;
        lVar14 = local_3a0;
        if (local_3e8 != 0) {
          if (local_3e0 != local_3e8) {
            local_660 = (long *)(local_3e0 + -0x250);
            plVar12 = *(long **)(local_3e0 + -0x240);
            if (plVar12 == (long *)0x0) goto LAB_00c67060;
            plVar1 = plVar12 + 1;
            do {
              iVar7 = (int)*plVar1 + -1;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *(int *)plVar1 = iVar7;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            do {
              if (iVar7 == 0) {
                plVar12[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar14 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar14;
                local_88 = (long *)*plVar12;
                FUN_02a44274(lVar14 + 0xd8,&local_88);
              }
LAB_00c67060:
              do {
                if (local_660 == (long *)lVar10) goto LAB_00c670b4;
                puVar15 = (undefined8 *)((long)local_660 + -0x240);
                local_660 = (long *)((long)local_660 + -0x250);
                plVar12 = (long *)*puVar15;
              } while (plVar12 == (long *)0x0);
              plVar1 = plVar12 + 1;
              do {
                iVar7 = (int)*plVar1 + -1;
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar5) {
                  *(int *)plVar1 = iVar7;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            } while( true );
          }
LAB_00c670b4:
          plVar12 = local_3d0;
          lVar14 = local_3e8;
          local_3e0 = lVar10;
          lVar10 = local_3d8 - local_3e8;
          uVar16 = (**(code **)(*local_3d0 + 0xc0))();
          if ((uVar16 & 1) != 0) {
            lVar11 = tpidr_el0;
            if (*(char *)(lVar11 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar11 + 0x38d488) = 1;
              *(undefined8 *)(lVar11 + 0x38d478) = 0;
              *(undefined8 *)(lVar11 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar11 + 0x38d480)) {
              FUN_02bcc824(plVar12,lVar14,lVar10,0x10);
              lVar14 = local_3a0;
              goto joined_r0x00c67150;
            }
          }
          (**(code **)(*plVar12 + 0x18))(plVar12,lVar14,lVar10,0x10);
          lVar14 = local_3a0;
        }
joined_r0x00c67150:
        local_3a0 = lVar14;
        if (lVar14 != 0) {
          if (local_398 != lVar14) {
            local_660 = (long *)(local_398 + -0x250);
            plVar12 = *(long **)(local_398 + -0x240);
            if (plVar12 == (long *)0x0) goto LAB_00c671a0;
            plVar1 = plVar12 + 1;
            do {
              iVar7 = (int)*plVar1 + -1;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *(int *)plVar1 = iVar7;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            do {
              if (iVar7 == 0) {
                plVar12[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar10 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar10;
                local_88 = (long *)*plVar12;
                FUN_02a44274(lVar10 + 0xd8,&local_88);
              }
LAB_00c671a0:
              do {
                if (local_660 == (long *)lVar14) goto LAB_00c671f4;
                puVar15 = (undefined8 *)((long)local_660 + -0x240);
                local_660 = (long *)((long)local_660 + -0x250);
                plVar12 = (long *)*puVar15;
              } while (plVar12 == (long *)0x0);
              plVar1 = plVar12 + 1;
              do {
                iVar7 = (int)*plVar1 + -1;
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar5) {
                  *(int *)plVar1 = iVar7;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            } while( true );
          }
LAB_00c671f4:
          lVar10 = local_3a0;
          lVar11 = local_390 - local_3a0;
          local_398 = lVar14;
          uVar16 = (**(code **)(*local_388[0] + 0xc0))();
          if ((uVar16 & 1) != 0) {
            lVar14 = tpidr_el0;
            if (*(char *)(lVar14 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar14 + 0x38d488) = 1;
              *(undefined8 *)(lVar14 + 0x38d478) = 0;
              *(undefined8 *)(lVar14 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar14 + 0x38d480)) {
              FUN_02bcc824(local_388[0],lVar10,lVar11,0x10);
              goto LAB_00c66d1c;
            }
          }
          (**(code **)(*local_388[0] + 0x18))(local_388[0],lVar10,lVar11,0x10);
        }
LAB_00c66d1c:
        local_680 = plVar9;
      } while (iVar4 < iVar2);
      if (plVar9 <= plVar13) goto LAB_00c65404;
      FUN_00c68810(plVar13,plVar9);
      plVar13 = plVar13 + 9;
      goto LAB_00c66764;
    }
    plVar13 = plVar13 + 9;
  } while( true );
LAB_00c64cdc:
  do {
    local_88 = (long *)local_688[-6];
    uStack_80 = local_688[-5];
    local_78 = local_688[-4];
    lStack_70 = local_688[-3];
    local_540 = 0;
    local_550 = 0;
    local_548 = 0;
    plVar8 = local_688 + -9;
    lVar14 = local_688[-8] - *plVar8;
    local_528 = local_78;
    lStack_520 = lStack_70;
    if (lVar14 != 0) {
      uVar16 = local_530;
      if (0x7ffffffffffffffe < local_530) {
        uVar16 = 0x7fffffffffffffff;
      }
      if (uVar16 < (ulong)((lVar14 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar10 = (**(code **)(*local_538 + 0x10))(local_538,lVar14,0x10);
      if (lVar10 == 0) {
        (**(code **)(*local_538 + 0xb8))();
      }
      local_540 = lVar10 + (lVar14 >> 4) * 0x10;
      lVar11 = local_688[-8];
      local_548 = lVar10;
      local_550 = lVar10;
      for (lVar14 = local_688[-9]; lVar14 != lVar11; lVar14 = lVar14 + 0x250) {
        FUN_00bac10c(&local_538,local_548,lVar14);
        local_548 = local_548 + 0x250;
      }
    }
    local_518 = (int)local_688[-2];
    local_510 = local_688[-1];
    local_88 = (long *)*plVar13;
    uStack_80 = local_658[4];
    local_78 = local_658[5];
    lStack_70 = local_658[6];
    local_588 = 0;
    local_598 = 0;
    local_590 = 0;
    local_580[0] = (long *)*plVar13;
    uVar16 = local_658[4];
    local_570 = local_658[5];
    lStack_568 = local_658[6];
    lVar14 = local_658[1] - *local_658;
    if (lVar14 != 0) {
      if (0x7ffffffffffffffe < uVar16) {
        uVar16 = 0x7fffffffffffffff;
      }
      if (uVar16 < (ulong)((lVar14 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar10 = (**(code **)(*local_580[0] + 0x10))(local_580[0],lVar14,0x10);
      if (lVar10 == 0) {
        (**(code **)(*local_580[0] + 0xb8))();
      }
      local_588 = lVar10 + (lVar14 >> 4) * 0x10;
      lVar14 = *local_658;
      lVar11 = local_658[1];
      local_598 = lVar10;
      local_590 = lVar10;
      if (lVar14 != lVar11) {
        do {
          local_590 = lVar10;
          FUN_00bac10c(lVar11,local_580,lVar10,lVar14);
          lVar10 = local_590 + 0x250;
          lVar14 = lVar14 + 0x250;
          local_590 = lVar10;
        } while (lVar11 != lVar14);
      }
    }
    iVar4 = local_518;
    lVar10 = local_598;
    iVar2 = (int)local_658[7];
    local_558 = local_658[8];
    local_560 = iVar2;
    lVar14 = local_550;
    if (local_598 != 0) {
      if (local_590 != local_598) {
        local_6a0 = local_590 + -0x250;
        plVar9 = *(long **)(local_590 + -0x240);
        if (plVar9 == (long *)0x0) goto LAB_00c65050;
        plVar12 = plVar9 + 1;
        do {
          iVar7 = (int)*plVar12 + -1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *(int *)plVar12 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        do {
          if (iVar7 == 0) {
            plVar9[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar14 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar14;
            local_88 = (long *)*plVar9;
            FUN_02a44274(lVar14 + 0xd8,&local_88);
          }
LAB_00c65050:
          do {
            if (local_6a0 == lVar10) goto LAB_00c650a0;
            puVar15 = (undefined8 *)(local_6a0 + -0x240);
            local_6a0 = local_6a0 + -0x250;
            plVar9 = (long *)*puVar15;
          } while (plVar9 == (long *)0x0);
          plVar12 = plVar9 + 1;
          do {
            iVar7 = (int)*plVar12 + -1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar5) {
              *(int *)plVar12 = iVar7;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        } while( true );
      }
LAB_00c650a0:
      lVar14 = local_598;
      lVar11 = local_588 - local_598;
      local_590 = lVar10;
      uVar16 = (**(code **)(*local_580[0] + 0xc0))(local_580[0]);
      if ((uVar16 & 1) != 0) {
        lVar10 = tpidr_el0;
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar10 + 0x38d480)) {
          FUN_02bcc824(local_580[0],lVar14,lVar11,0x10);
          lVar14 = local_550;
          goto joined_r0x00c65144;
        }
      }
      (**(code **)(*local_580[0] + 0x18))(local_580[0],lVar14,lVar11,0x10);
      lVar14 = local_550;
    }
joined_r0x00c65144:
    local_550 = lVar14;
    if (lVar14 != 0) {
      if (local_548 != lVar14) {
        local_640 = local_548 + -0x250;
        plVar9 = *(long **)(local_548 + -0x240);
        if (plVar9 == (long *)0x0) goto LAB_00c65194;
        plVar12 = plVar9 + 1;
        do {
          iVar7 = (int)*plVar12 + -1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *(int *)plVar12 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        do {
          if (iVar7 == 0) {
            plVar9[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar10 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar10;
            local_88 = (long *)*plVar9;
            FUN_02a44274(lVar10 + 0xd8,&local_88);
          }
LAB_00c65194:
          do {
            if (local_640 == lVar14) goto LAB_00c651e4;
            puVar15 = (undefined8 *)(local_640 + -0x240);
            local_640 = local_640 + -0x250;
            plVar9 = (long *)*puVar15;
          } while (plVar9 == (long *)0x0);
          plVar12 = plVar9 + 1;
          do {
            iVar7 = (int)*plVar12 + -1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar5) {
              *(int *)plVar12 = iVar7;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        } while( true );
      }
LAB_00c651e4:
      plVar9 = local_538;
      lVar10 = local_550;
      lVar11 = local_540 - local_550;
      local_548 = lVar14;
      uVar16 = (**(code **)(*local_538 + 0xc0))(local_538);
      if ((uVar16 & 1) != 0) {
        lVar14 = tpidr_el0;
        if (*(char *)(lVar14 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar14 + 0x38d488) = 1;
          *(undefined8 *)(lVar14 + 0x38d478) = 0;
          *(undefined8 *)(lVar14 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar14 + 0x38d480)) {
          FUN_02bcc824(plVar9,lVar10,lVar11,0x10);
          goto LAB_00c64d3c;
        }
      }
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar10,lVar11,0x10);
    }
LAB_00c64d3c:
    local_688 = plVar8;
  } while (iVar2 <= iVar4);
  if (plVar8 < local_660) goto LAB_00c652d0;
  FUN_00c68810(local_660,plVar8);
  local_6bc = local_6bc + 1;
  bVar5 = local_658 != local_660;
  local_660 = local_660 + 9;
  if (bVar5) {
    plVar8 = local_658;
  }
  local_658 = plVar8;
  goto LAB_00c64768;
LAB_00c659ec:
  plVar19 = local_660;
  if ((uVar6 & 1) != 0) {
    return;
  }
  goto LAB_00c63f10;
}


