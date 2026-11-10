/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cb0af0; name: FUN_00cb0af0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00cb0af0(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  byte *pbVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  long local_358;
  long local_350;
  long local_348;
  long *local_340;
  ulong local_338;
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
  long *local_2b0;
  ulong local_2a8;
  long local_2a0;
  long lStack_298;
  int local_290;
  long local_288;
  long local_280;
  long local_278;
  long local_270;
  long *local_268;
  ulong local_260;
  long lStack_258;
  long local_250;
  int local_248;
  long local_240;
  long local_238;
  long local_230;
  long local_228;
  long *local_220;
  ulong local_218;
  long local_210;
  long lStack_208;
  int local_200;
  long local_1f8;
  long local_1f0;
  long local_1e8;
  long local_1e0;
  long *local_1d8;
  ulong local_1d0;
  long local_1c8;
  long lStack_1c0;
  int local_1b8;
  long local_1b0;
  long local_1a8;
  long local_1a0;
  long local_198;
  long *local_190;
  ulong local_188;
  long lStack_180;
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
  long local_a8;
  long lStack_a0;
  int local_98;
  long local_90;
  long *local_88;
  ulong uStack_80;
  long local_78;
  long lStack_70;
  
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  plVar20 = param_2 + 3;
  plVar16 = (long *)*plVar20;
  local_b0 = param_2[4];
  local_a8 = param_2[5];
  lStack_a0 = param_2[6];
  lVar21 = param_2[1] - *param_2;
  local_b8 = plVar16;
  if (lVar21 != 0) {
    uVar15 = local_b0;
    if (0x7ffffffffffffffe < local_b0) {
      uVar15 = 0x7fffffffffffffff;
    }
    if (uVar15 < (ulong)((lVar21 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar14 = (**(code **)(*plVar16 + 0x10))(plVar16,lVar21,0x10);
    if (lVar14 == 0) {
      (**(code **)(*plVar16 + 0xb8))(plVar16);
    }
    local_c0 = lVar14 + (lVar21 >> 4) * 0x10;
    lVar21 = *param_2;
    lVar17 = param_2[1];
    local_d0 = lVar14;
    local_c8 = lVar14;
    if (lVar21 != lVar17) {
      do {
        FUN_00bac10c(&local_b8,local_c8,lVar21);
        lVar21 = lVar21 + 0x250;
        local_c8 = local_c8 + 0x250;
      } while (lVar17 != lVar21);
    }
  }
  local_98 = (int)param_2[7];
  local_90 = param_2[8];
  local_118 = 0;
  local_108 = 0;
  local_110 = 0;
  local_100 = (long *)param_1[3];
  local_e8 = param_1[6];
  local_f8 = param_1[4];
  local_f0 = param_1[5];
  lVar21 = param_1[1] - *param_1;
  if (lVar21 != 0) {
    uVar15 = local_f8;
    if (0x7ffffffffffffffe < local_f8) {
      uVar15 = 0x7fffffffffffffff;
    }
    if (uVar15 < (ulong)((lVar21 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar14 = (**(code **)(*local_100 + 0x10))(local_100,lVar21,0x10);
    if (lVar14 == 0) {
      (**(code **)(*local_100 + 0xb8))();
    }
    local_108 = lVar14 + (lVar21 >> 4) * 0x10;
    lVar21 = *param_1;
    lVar17 = param_1[1];
    local_118 = lVar14;
    local_110 = lVar14;
    if (lVar21 != lVar17) {
      do {
        FUN_00bac10c(&local_100,local_110,lVar21);
        lVar21 = lVar21 + 0x250;
        local_110 = local_110 + 0x250;
      } while (lVar17 != lVar21);
    }
  }
  iVar11 = local_98;
  lVar7 = local_118;
  puVar10 = PTR_DAT_043794a8;
  puVar9 = PTR_DAT_043794a0;
  puVar8 = PTR_DAT_04379498;
  iVar3 = (int)param_1[7];
  local_d8 = param_1[8];
  local_e0 = iVar3;
  lVar21 = local_118;
  lVar14 = local_110;
  plVar16 = local_100;
  pbVar6 = PTR_DAT_04379498;
  plVar22 = (long *)PTR_DAT_043794a0;
  plVar19 = (long *)PTR_DAT_043794a8;
  lVar17 = local_d0;
  if (local_118 != 0) {
    while( true ) {
      local_118 = lVar21;
      local_100 = plVar16;
      if (lVar14 == lVar7) break;
      puVar18 = (undefined8 *)(lVar14 + -0x240);
      lVar14 = lVar14 + -0x250;
      puVar18 = (undefined8 *)*puVar18;
      if (puVar18 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar18 + 1);
        do {
          iVar13 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar13 + -1 == 0) {
          puVar18[2] = 0;
          if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar9,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar8);
          }
          lVar21 = *(long *)puVar9;
          *(long *)puVar10 = lVar21;
          local_88 = (long *)*puVar18;
          FUN_02a44274(lVar21 + 0xd8,&local_88);
          lVar21 = local_118;
          plVar16 = local_100;
        }
      }
    }
    lVar14 = local_108 - lVar21;
    local_110 = lVar7;
    uVar15 = (**(code **)(*plVar16 + 0xc0))(plVar16);
    if ((uVar15 & 1) != 0) {
      lVar17 = tpidr_el0;
      if (*(char *)(lVar17 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar17 + 0x38d488) = 1;
        *(undefined8 *)(lVar17 + 0x38d478) = 0;
        *(undefined8 *)(lVar17 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar17 + 0x38d480)) {
        FUN_02bcc824(plVar16,lVar21,lVar14,0x10);
        pbVar6 = PTR_DAT_04379498;
        plVar22 = (long *)PTR_DAT_043794a0;
        plVar19 = (long *)PTR_DAT_043794a8;
        lVar17 = local_d0;
        goto joined_r0x00cb160c;
      }
    }
    (**(code **)(*plVar16 + 0x18))(plVar16,lVar21,lVar14,0x10);
    pbVar6 = PTR_DAT_04379498;
    plVar22 = (long *)PTR_DAT_043794a0;
    plVar19 = (long *)PTR_DAT_043794a8;
    lVar17 = local_d0;
  }
joined_r0x00cb160c:
  PTR_DAT_04379498 = pbVar6;
  PTR_DAT_043794a0 = (undefined *)plVar22;
  PTR_DAT_043794a8 = (undefined *)plVar19;
  local_d0 = lVar17;
  lVar21 = lVar17;
  lVar14 = local_c8;
  plVar16 = local_b8;
  if (lVar17 != 0) {
    while( true ) {
      local_d0 = lVar21;
      local_b8 = plVar16;
      if (lVar14 == lVar17) break;
      puVar18 = (undefined8 *)(lVar14 + -0x240);
      lVar14 = lVar14 + -0x250;
      puVar18 = (undefined8 *)*puVar18;
      if (puVar18 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar18 + 1);
        do {
          iVar13 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar13 + -1 == 0) {
          puVar18[2] = 0;
          if (((*pbVar6 & 1) == 0) && (iVar13 = __cxa_guard_acquire(pbVar6), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,plVar22,&PTR_LOOP_0411a000);
            __cxa_guard_release(pbVar6);
          }
          lVar21 = *plVar22;
          *plVar19 = lVar21;
          local_88 = (long *)*puVar18;
          FUN_02a44274(lVar21 + 0xd8,&local_88);
          lVar21 = local_d0;
          plVar16 = local_b8;
        }
      }
    }
    lVar14 = local_c0 - lVar21;
    local_c8 = lVar17;
    uVar15 = (**(code **)(*plVar16 + 0xc0))(plVar16);
    if ((uVar15 & 1) != 0) {
      lVar17 = tpidr_el0;
      if (*(char *)(lVar17 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar17 + 0x38d488) = 1;
        *(undefined8 *)(lVar17 + 0x38d478) = 0;
        *(undefined8 *)(lVar17 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar17 + 0x38d480)) {
        FUN_02bcc824(plVar16,lVar21,lVar14,0x10);
        goto LAB_00cb0bc8;
      }
    }
    (**(code **)(*plVar16 + 0x18))(plVar16,lVar21,lVar14,0x10);
  }
LAB_00cb0bc8:
  local_88 = (long *)param_3[3];
  uStack_80 = param_3[4];
  local_78 = param_3[5];
  lStack_70 = param_3[6];
  if (iVar3 <= iVar11) {
    local_150 = 0;
    local_158 = 0;
    local_160 = 0;
    lVar21 = param_3[1] - *param_3;
    local_148 = local_88;
    local_140 = uStack_80;
    local_138 = local_78;
    local_130 = lStack_70;
    if (lVar21 != 0) {
      uVar15 = uStack_80;
      if (0x7ffffffffffffffe < uStack_80) {
        uVar15 = 0x7fffffffffffffff;
      }
      if (uVar15 < (ulong)((lVar21 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar14 = (**(code **)(*local_88 + 0x10))(local_88,lVar21,0x10);
      if (lVar14 == 0) {
        (**(code **)(*local_148 + 0xb8))();
      }
      local_150 = lVar14 + (lVar21 >> 4) * 0x10;
      lVar21 = *param_3;
      lVar17 = param_3[1];
      local_160 = lVar14;
      local_158 = lVar14;
      if (lVar21 != lVar17) {
        do {
          FUN_00bac10c(&local_148,local_158,lVar21);
          lVar21 = lVar21 + 0x250;
          local_158 = local_158 + 0x250;
        } while (lVar17 != lVar21);
      }
    }
    local_128 = (int)param_3[7];
    local_120 = param_3[8];
    local_1a8 = 0;
    local_1a0 = 0;
    local_190 = (long *)*plVar20;
    local_188 = param_2[4];
    lStack_180 = param_2[5];
    local_178 = param_2[6];
    local_198 = 0;
    lVar21 = param_2[1] - *param_2;
    if (lVar21 != 0) {
      uVar15 = local_188;
      if (0x7ffffffffffffffe < local_188) {
        uVar15 = 0x7fffffffffffffff;
      }
      if (uVar15 < (ulong)((lVar21 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar14 = (**(code **)(*local_190 + 0x10))(local_190,lVar21,0x10);
      if (lVar14 == 0) {
        (**(code **)(*local_190 + 0xb8))();
      }
      local_198 = lVar14 + (lVar21 >> 4) * 0x10;
      lVar21 = *param_2;
      lVar17 = param_2[1];
      local_1a8 = lVar14;
      local_1a0 = lVar14;
      if (lVar21 != lVar17) {
        do {
          FUN_00bac10c(&local_190,local_1a0,lVar21);
          lVar21 = lVar21 + 0x250;
          local_1a0 = local_1a0 + 0x250;
        } while (lVar17 != lVar21);
      }
    }
    iVar11 = local_128;
    lVar12 = local_1a8;
    puVar10 = PTR_DAT_043794a8;
    puVar9 = PTR_DAT_043794a0;
    puVar8 = PTR_DAT_04379498;
    iVar3 = (int)param_2[7];
    local_168 = param_2[8];
    local_170 = iVar3;
    lVar21 = local_1a8;
    lVar14 = local_1a0;
    plVar16 = local_190;
    pbVar6 = PTR_DAT_04379498;
    plVar22 = (long *)PTR_DAT_043794a0;
    plVar19 = (long *)PTR_DAT_043794a8;
    lVar7 = local_160;
    lVar17 = local_158;
    if (local_1a8 != 0) {
      while( true ) {
        local_1a8 = lVar21;
        local_190 = plVar16;
        if (lVar14 == lVar12) break;
        puVar18 = (undefined8 *)(lVar14 + -0x240);
        lVar14 = lVar14 + -0x250;
        plVar22 = (long *)*puVar18;
        if (plVar22 != (long *)0x0) {
          plVar19 = plVar22 + 1;
          do {
            iVar13 = (int)*plVar19 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar5) {
              *(int *)plVar19 = iVar13;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar13 == 0) {
            plVar22[2] = 0;
            if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar9,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar8);
            }
            lVar21 = *(long *)puVar9;
            *(long *)puVar10 = lVar21;
            local_88 = (long *)*plVar22;
            FUN_02a44274(lVar21 + 0xd8,&local_88);
            lVar21 = local_1a8;
            plVar16 = local_190;
          }
        }
      }
      lVar14 = local_198 - lVar21;
      local_1a0 = lVar12;
      uVar15 = (**(code **)(*plVar16 + 0xc0))(plVar16);
      if ((uVar15 & 1) != 0) {
        lVar17 = tpidr_el0;
        if (*(char *)(lVar17 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar17 + 0x38d488) = 1;
          *(undefined8 *)(lVar17 + 0x38d478) = 0;
          *(undefined8 *)(lVar17 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar17 + 0x38d480)) {
          FUN_02bcc824(plVar16,lVar21,lVar14,0x10);
          pbVar6 = PTR_DAT_04379498;
          plVar22 = (long *)PTR_DAT_043794a0;
          plVar19 = (long *)PTR_DAT_043794a8;
          lVar7 = local_160;
          lVar17 = local_158;
          goto joined_r0x00cb194c;
        }
      }
      (**(code **)(*plVar16 + 0x18))(plVar16,lVar21,lVar14,0x10);
      pbVar6 = PTR_DAT_04379498;
      plVar22 = (long *)PTR_DAT_043794a0;
      plVar19 = (long *)PTR_DAT_043794a8;
      lVar7 = local_160;
      lVar17 = local_158;
    }
joined_r0x00cb194c:
    PTR_DAT_04379498 = pbVar6;
    PTR_DAT_043794a0 = (undefined *)plVar22;
    PTR_DAT_043794a8 = (undefined *)plVar19;
    lVar21 = lVar7;
    local_158 = lVar17;
    plVar16 = local_148;
    local_160 = lVar7;
    if (lVar7 != 0) {
      while( true ) {
        local_160 = lVar21;
        local_148 = plVar16;
        if (lVar17 == lVar7) break;
        puVar18 = (undefined8 *)(lVar17 + -0x240);
        lVar17 = lVar17 + -0x250;
        plVar23 = (long *)*puVar18;
        if (plVar23 != (long *)0x0) {
          plVar2 = plVar23 + 1;
          do {
            iVar13 = (int)*plVar2 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *(int *)plVar2 = iVar13;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar13 == 0) {
            plVar23[2] = 0;
            if (((*pbVar6 & 1) == 0) && (iVar13 = __cxa_guard_acquire(pbVar6), iVar13 != 0)) {
              FUN_00100250(PTR_LAB_04379590,plVar22,&PTR_LOOP_0411a000);
              __cxa_guard_release(pbVar6);
            }
            lVar21 = *plVar22;
            *plVar19 = lVar21;
            local_88 = (long *)*plVar23;
            FUN_02a44274(lVar21 + 0xd8,&local_88);
            lVar21 = local_160;
            plVar16 = local_148;
          }
        }
      }
      lVar14 = local_150 - lVar21;
      local_158 = lVar7;
      uVar15 = (**(code **)(*plVar16 + 0xc0))(plVar16);
      if ((uVar15 & 1) != 0) {
        lVar17 = tpidr_el0;
        if (*(char *)(lVar17 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar17 + 0x38d488) = 1;
          *(undefined8 *)(lVar17 + 0x38d478) = 0;
          *(undefined8 *)(lVar17 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar17 + 0x38d480)) {
          FUN_02bcc824(plVar16,lVar21,lVar14,0x10);
          goto joined_r0x00cb1ac0;
        }
      }
      (**(code **)(*plVar16 + 0x18))(plVar16,lVar21,lVar14,0x10);
    }
joined_r0x00cb1ac0:
    if (iVar3 <= iVar11) {
      return 0;
    }
    FUN_00cb0840(param_2,param_3);
    local_1f0 = 0;
    local_1e8 = 0;
    local_1d8 = (long *)*plVar20;
    local_1d0 = param_2[4];
    local_1c8 = param_2[5];
    lStack_1c0 = param_2[6];
    local_1e0 = 0;
    lVar21 = param_2[1] - *param_2;
    if (lVar21 != 0) {
      uVar15 = local_1d0;
      if (0x7ffffffffffffffe < local_1d0) {
        uVar15 = 0x7fffffffffffffff;
      }
      if (uVar15 < (ulong)((lVar21 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar14 = (**(code **)(*local_1d8 + 0x10))(local_1d8,lVar21,0x10);
      if (lVar14 == 0) {
        (**(code **)(*local_1d8 + 0xb8))();
      }
      local_1e0 = lVar14 + (lVar21 >> 4) * 0x10;
      lVar21 = *param_2;
      lVar17 = param_2[1];
      local_1f0 = lVar14;
      local_1e8 = lVar14;
      if (lVar21 != lVar17) {
        do {
          FUN_00bac10c(&local_1d8,local_1e8,lVar21);
          lVar21 = lVar21 + 0x250;
          local_1e8 = local_1e8 + 0x250;
        } while (lVar17 != lVar21);
      }
    }
    local_1b8 = (int)param_2[7];
    local_1b0 = param_2[8];
    local_238 = 0;
    local_230 = 0;
    local_220 = (long *)param_1[3];
    local_218 = param_1[4];
    local_210 = param_1[5];
    lStack_208 = param_1[6];
    local_228 = 0;
    lVar21 = param_1[1] - *param_1;
    if (lVar21 != 0) {
      uVar15 = local_218;
      if (0x7ffffffffffffffe < local_218) {
        uVar15 = 0x7fffffffffffffff;
      }
      if (uVar15 < (ulong)((lVar21 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar14 = (**(code **)(*local_220 + 0x10))(local_220,lVar21,0x10);
      if (lVar14 == 0) {
        (**(code **)(*local_220 + 0xb8))();
      }
      local_228 = lVar14 + (lVar21 >> 4) * 0x10;
      lVar21 = *param_1;
      lVar17 = param_1[1];
      local_238 = lVar14;
      local_230 = lVar14;
      if (lVar21 != lVar17) {
        do {
          FUN_00bac10c(&local_220,local_230,lVar21);
          lVar21 = lVar21 + 0x250;
          local_230 = local_230 + 0x250;
        } while (lVar17 != lVar21);
      }
    }
    iVar11 = local_1b8;
    lVar12 = local_238;
    puVar10 = PTR_DAT_043794a8;
    puVar9 = PTR_DAT_043794a0;
    puVar8 = PTR_DAT_04379498;
    iVar3 = (int)param_1[7];
    local_1f8 = param_1[8];
    local_200 = iVar3;
    lVar21 = local_238;
    lVar14 = local_230;
    plVar16 = local_220;
    pbVar6 = PTR_DAT_04379498;
    plVar20 = (long *)PTR_DAT_043794a0;
    plVar22 = (long *)PTR_DAT_043794a8;
    lVar7 = local_1f0;
    lVar17 = local_1e8;
    if (local_238 != 0) {
      while( true ) {
        local_238 = lVar21;
        local_220 = plVar16;
        if (lVar14 == lVar12) break;
        puVar18 = (undefined8 *)(lVar14 + -0x240);
        lVar14 = lVar14 + -0x250;
        plVar20 = (long *)*puVar18;
        if (plVar20 != (long *)0x0) {
          plVar22 = plVar20 + 1;
          do {
            iVar13 = (int)*plVar22 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar5) {
              *(int *)plVar22 = iVar13;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar13 == 0) {
            plVar20[2] = 0;
            if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar9,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar8);
            }
            lVar21 = *(long *)puVar9;
            *(long *)puVar10 = lVar21;
            local_88 = (long *)*plVar20;
            FUN_02a44274(lVar21 + 0xd8,&local_88);
            lVar21 = local_238;
            plVar16 = local_220;
          }
        }
      }
      lVar14 = local_228 - lVar21;
      local_230 = lVar12;
      uVar15 = (**(code **)(*plVar16 + 0xc0))(plVar16);
      if ((uVar15 & 1) != 0) {
        lVar17 = tpidr_el0;
        if (*(char *)(lVar17 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar17 + 0x38d488) = 1;
          *(undefined8 *)(lVar17 + 0x38d478) = 0;
          *(undefined8 *)(lVar17 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar17 + 0x38d480)) {
          FUN_02bcc824(plVar16,lVar21,lVar14,0x10);
          pbVar6 = PTR_DAT_04379498;
          plVar20 = (long *)PTR_DAT_043794a0;
          plVar22 = (long *)PTR_DAT_043794a8;
          lVar7 = local_1f0;
          lVar17 = local_1e8;
          goto joined_r0x00cb1ca4;
        }
      }
      (**(code **)(*plVar16 + 0x18))(plVar16,lVar21,lVar14,0x10);
      pbVar6 = PTR_DAT_04379498;
      plVar20 = (long *)PTR_DAT_043794a0;
      plVar22 = (long *)PTR_DAT_043794a8;
      lVar7 = local_1f0;
      lVar17 = local_1e8;
    }
joined_r0x00cb1ca4:
    PTR_DAT_04379498 = pbVar6;
    PTR_DAT_043794a0 = (undefined *)plVar20;
    PTR_DAT_043794a8 = (undefined *)plVar22;
    lVar21 = lVar7;
    local_1e8 = lVar17;
    plVar16 = local_1d8;
    local_1f0 = lVar7;
    if (lVar7 != 0) {
      while( true ) {
        local_1f0 = lVar21;
        local_1d8 = plVar16;
        if (lVar17 == lVar7) break;
        puVar18 = (undefined8 *)(lVar17 + -0x240);
        lVar17 = lVar17 + -0x250;
        plVar19 = (long *)*puVar18;
        if (plVar19 != (long *)0x0) {
          plVar23 = plVar19 + 1;
          do {
            iVar13 = (int)*plVar23 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar5) {
              *(int *)plVar23 = iVar13;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar13 == 0) {
            plVar19[2] = 0;
            if (((*pbVar6 & 1) == 0) && (iVar13 = __cxa_guard_acquire(pbVar6), iVar13 != 0)) {
              FUN_00100250(PTR_LAB_04379590,plVar20,&PTR_LOOP_0411a000);
              __cxa_guard_release(pbVar6);
            }
            lVar21 = *plVar20;
            *plVar22 = lVar21;
            local_88 = (long *)*plVar19;
            FUN_02a44274(lVar21 + 0xd8,&local_88);
            lVar21 = local_1f0;
            plVar16 = local_1d8;
          }
        }
      }
      lVar14 = local_1e0 - lVar21;
      local_1e8 = lVar7;
      uVar15 = (**(code **)(*plVar16 + 0xc0))(plVar16);
      if ((uVar15 & 1) != 0) {
        lVar17 = tpidr_el0;
        if (*(char *)(lVar17 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar17 + 0x38d488) = 1;
          *(undefined8 *)(lVar17 + 0x38d478) = 0;
          *(undefined8 *)(lVar17 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar17 + 0x38d480)) {
          FUN_02bcc824(plVar16,lVar21,lVar14,0x10);
          goto joined_r0x00cb1e2c;
        }
      }
      (**(code **)(*plVar16 + 0x18))(plVar16,lVar21,lVar14,0x10);
    }
joined_r0x00cb1e2c:
    if (iVar3 <= iVar11) {
      return 1;
    }
    goto LAB_00cb2214;
  }
  local_280 = 0;
  local_278 = 0;
  local_270 = 0;
  lVar21 = param_3[1] - *param_3;
  local_268 = local_88;
  local_260 = uStack_80;
  lStack_258 = local_78;
  local_250 = lStack_70;
  if (lVar21 != 0) {
    uVar15 = uStack_80;
    if (0x7ffffffffffffffe < uStack_80) {
      uVar15 = 0x7fffffffffffffff;
    }
    if (uVar15 < (ulong)((lVar21 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar14 = (**(code **)(*local_88 + 0x10))(local_88,lVar21,0x10);
    if (lVar14 == 0) {
      (**(code **)(*local_268 + 0xb8))();
    }
    local_270 = lVar14 + (lVar21 >> 4) * 0x10;
    lVar21 = *param_3;
    lVar17 = param_3[1];
    local_280 = lVar14;
    local_278 = lVar14;
    if (lVar21 != lVar17) {
      do {
        FUN_00bac10c(&local_268,local_278,lVar21);
        lVar21 = lVar21 + 0x250;
        local_278 = local_278 + 0x250;
      } while (lVar17 != lVar21);
    }
  }
  local_248 = (int)param_3[7];
  local_240 = param_3[8];
  local_2c8 = 0;
  local_2c0 = 0;
  local_2b0 = (long *)*plVar20;
  local_2a8 = param_2[4];
  local_2a0 = param_2[5];
  lStack_298 = param_2[6];
  local_2b8 = 0;
  lVar21 = param_2[1] - *param_2;
  if (lVar21 != 0) {
    uVar15 = local_2a8;
    if (0x7ffffffffffffffe < local_2a8) {
      uVar15 = 0x7fffffffffffffff;
    }
    if (uVar15 < (ulong)((lVar21 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar14 = (**(code **)(*local_2b0 + 0x10))(local_2b0,lVar21,0x10);
    if (lVar14 == 0) {
      (**(code **)(*local_2b0 + 0xb8))();
    }
    local_2b8 = lVar14 + (lVar21 >> 4) * 0x10;
    lVar21 = *param_2;
    lVar17 = param_2[1];
    local_2c8 = lVar14;
    local_2c0 = lVar14;
    if (lVar21 != lVar17) {
      do {
        FUN_00bac10c(&local_2b0,local_2c0,lVar21);
        lVar21 = lVar21 + 0x250;
        local_2c0 = local_2c0 + 0x250;
      } while (lVar17 != lVar21);
    }
  }
  iVar11 = local_248;
  lVar7 = local_2c8;
  puVar10 = PTR_DAT_043794a8;
  puVar9 = PTR_DAT_043794a0;
  puVar8 = PTR_DAT_04379498;
  iVar3 = (int)param_2[7];
  local_288 = param_2[8];
  local_290 = iVar3;
  lVar21 = local_2c8;
  lVar14 = local_2c0;
  plVar16 = local_2b0;
  pbVar6 = PTR_DAT_04379498;
  plVar22 = (long *)PTR_DAT_043794a0;
  plVar19 = (long *)PTR_DAT_043794a8;
  lVar17 = local_280;
  if (local_2c8 != 0) {
    while( true ) {
      local_2c8 = lVar21;
      local_2b0 = plVar16;
      if (lVar14 == lVar7) break;
      puVar18 = (undefined8 *)(lVar14 + -0x240);
      lVar14 = lVar14 + -0x250;
      plVar22 = (long *)*puVar18;
      if (plVar22 != (long *)0x0) {
        plVar19 = plVar22 + 1;
        do {
          iVar13 = (int)*plVar19 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar5) {
            *(int *)plVar19 = iVar13;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar13 == 0) {
          plVar22[2] = 0;
          if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar9,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar8);
          }
          lVar21 = *(long *)puVar9;
          *(long *)puVar10 = lVar21;
          local_88 = (long *)*plVar22;
          FUN_02a44274(lVar21 + 0xd8,&local_88);
          lVar21 = local_2c8;
          plVar16 = local_2b0;
        }
      }
    }
    lVar14 = local_2b8 - lVar21;
    local_2c0 = lVar7;
    uVar15 = (**(code **)(*plVar16 + 0xc0))(plVar16);
    if ((uVar15 & 1) != 0) {
      lVar17 = tpidr_el0;
      if (*(char *)(lVar17 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar17 + 0x38d488) = 1;
        *(undefined8 *)(lVar17 + 0x38d478) = 0;
        *(undefined8 *)(lVar17 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar17 + 0x38d480)) {
        FUN_02bcc824(plVar16,lVar21,lVar14,0x10);
        pbVar6 = PTR_DAT_04379498;
        plVar22 = (long *)PTR_DAT_043794a0;
        plVar19 = (long *)PTR_DAT_043794a8;
        lVar17 = local_280;
        goto joined_r0x00cb1fa8;
      }
    }
    (**(code **)(*plVar16 + 0x18))(plVar16,lVar21,lVar14,0x10);
    pbVar6 = PTR_DAT_04379498;
    plVar22 = (long *)PTR_DAT_043794a0;
    plVar19 = (long *)PTR_DAT_043794a8;
    lVar17 = local_280;
  }
joined_r0x00cb1fa8:
  PTR_DAT_04379498 = pbVar6;
  PTR_DAT_043794a0 = (undefined *)plVar22;
  PTR_DAT_043794a8 = (undefined *)plVar19;
  local_280 = lVar17;
  if (lVar17 != 0) {
    lVar21 = lVar17;
    lVar14 = local_278;
    plVar16 = local_268;
    while( true ) {
      local_280 = lVar21;
      local_268 = plVar16;
      if (lVar14 == lVar17) break;
      puVar18 = (undefined8 *)(lVar14 + -0x240);
      lVar14 = lVar14 + -0x250;
      plVar23 = (long *)*puVar18;
      if (plVar23 != (long *)0x0) {
        plVar2 = plVar23 + 1;
        do {
          iVar13 = (int)*plVar2 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar13;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar13 == 0) {
          plVar23[2] = 0;
          if (((*pbVar6 & 1) == 0) && (iVar13 = __cxa_guard_acquire(pbVar6), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,plVar22,&PTR_LOOP_0411a000);
            __cxa_guard_release(pbVar6);
          }
          lVar21 = *plVar22;
          *plVar19 = lVar21;
          local_88 = (long *)*plVar23;
          FUN_02a44274(lVar21 + 0xd8,&local_88);
          lVar21 = local_280;
          plVar16 = local_268;
        }
      }
    }
    lVar14 = local_270 - lVar21;
    local_278 = lVar17;
    uVar15 = (**(code **)(*plVar16 + 0xc0))(plVar16);
    if ((uVar15 & 1) != 0) {
      lVar17 = tpidr_el0;
      if (*(char *)(lVar17 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar17 + 0x38d488) = 1;
        *(undefined8 *)(lVar17 + 0x38d478) = 0;
        *(undefined8 *)(lVar17 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar17 + 0x38d480)) {
        FUN_02bcc824(plVar16,lVar21,lVar14,0x10);
        goto joined_r0x00cb0c78;
      }
    }
    (**(code **)(*plVar16 + 0x18))(plVar16,lVar21,lVar14,0x10);
  }
joined_r0x00cb0c78:
  if (iVar11 < iVar3) {
    FUN_00cb0840(param_1,param_3);
    return 1;
  }
  FUN_00cb0840(param_1,param_2);
  local_310 = 0;
  local_308 = 0;
  local_2f8 = (long *)param_3[3];
  local_2f0 = param_3[4];
  local_2e8 = param_3[5];
  lStack_2e0 = param_3[6];
  local_300 = 0;
  lVar21 = param_3[1] - *param_3;
  if (lVar21 != 0) {
    uVar15 = local_2f0;
    if (0x7ffffffffffffffe < local_2f0) {
      uVar15 = 0x7fffffffffffffff;
    }
    if (uVar15 < (ulong)((lVar21 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar14 = (**(code **)(*local_2f8 + 0x10))(local_2f8,lVar21,0x10);
    if (lVar14 == 0) {
      (**(code **)(*local_2f8 + 0xb8))();
    }
    local_300 = lVar14 + (lVar21 >> 4) * 0x10;
    lVar21 = *param_3;
    lVar17 = param_3[1];
    local_310 = lVar14;
    local_308 = lVar14;
    if (lVar21 != lVar17) {
      do {
        FUN_00bac10c(&local_2f8,local_308,lVar21);
        lVar21 = lVar21 + 0x250;
        local_308 = local_308 + 0x250;
      } while (lVar17 != lVar21);
    }
  }
  local_2d8 = (int)param_3[7];
  local_2d0 = param_3[8];
  local_358 = 0;
  local_340 = (long *)*plVar20;
  local_338 = param_2[4];
  local_330 = param_2[5];
  lStack_328 = param_2[6];
  local_348 = 0;
  lVar21 = param_2[1] - *param_2;
  if (lVar21 == 0) {
    local_350 = 0;
  }
  else {
    uVar15 = local_338;
    if (0x7ffffffffffffffe < local_338) {
      uVar15 = 0x7fffffffffffffff;
    }
    if (uVar15 < (ulong)((lVar21 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    local_358 = (**(code **)(*local_340 + 0x10))(local_340,lVar21,0x10);
    if (local_358 == 0) {
      (**(code **)(*local_340 + 0xb8))();
    }
    local_348 = local_358 + (lVar21 >> 4) * 0x10;
    lVar21 = *param_2;
    lVar14 = param_2[1];
    local_350 = local_358;
    if (lVar21 != lVar14) {
      do {
        FUN_00bac10c(&local_340,local_350,lVar21);
        lVar21 = lVar21 + 0x250;
        local_350 = local_350 + 0x250;
      } while (lVar14 != lVar21);
    }
  }
  iVar11 = local_2d8;
  puVar10 = PTR_DAT_043794a8;
  puVar9 = PTR_DAT_043794a0;
  puVar8 = PTR_DAT_04379498;
  iVar3 = (int)param_2[7];
  local_318 = param_2[8];
  local_320 = iVar3;
  plVar16 = local_340;
  lVar14 = local_310;
  lVar21 = local_308;
  if (local_358 != 0) {
    while (local_340 = plVar16, local_350 != local_358) {
      puVar18 = (undefined8 *)(local_350 + -0x240);
      local_350 = local_350 + -0x250;
      plVar20 = (long *)*puVar18;
      if (plVar20 != (long *)0x0) {
        plVar22 = plVar20 + 1;
        do {
          iVar13 = (int)*plVar22 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar5) {
            *(int *)plVar22 = iVar13;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar13 == 0) {
          plVar20[2] = 0;
          if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar9,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar8);
          }
          lVar21 = *(long *)puVar9;
          *(long *)puVar10 = lVar21;
          local_88 = (long *)*plVar20;
          FUN_02a44274(lVar21 + 0xd8,&local_88);
          plVar16 = local_340;
        }
      }
    }
    uVar15 = (**(code **)(*plVar16 + 0xc0))(plVar16);
    if ((uVar15 & 1) != 0) {
      lVar21 = tpidr_el0;
      if (*(char *)(lVar21 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar21 + 0x38d488) = 1;
        *(undefined8 *)(lVar21 + 0x38d478) = 0;
        *(undefined8 *)(lVar21 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar21 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar21 + 0x38d480)) {
        FUN_02bcc824(plVar16,local_358,local_348 - local_358,0x10);
        puVar8 = PTR_DAT_04379498;
        puVar9 = PTR_DAT_043794a0;
        puVar10 = PTR_DAT_043794a8;
        lVar14 = local_310;
        lVar21 = local_308;
        goto joined_r0x00cb25c0;
      }
    }
    (**(code **)(*plVar16 + 0x18))(plVar16,local_358,local_348 - local_358,0x10);
    puVar8 = PTR_DAT_04379498;
    puVar9 = PTR_DAT_043794a0;
    puVar10 = PTR_DAT_043794a8;
    lVar14 = local_310;
    lVar21 = local_308;
  }
joined_r0x00cb25c0:
  PTR_DAT_04379498 = puVar8;
  PTR_DAT_043794a0 = puVar9;
  PTR_DAT_043794a8 = puVar10;
  lVar17 = lVar14;
  local_308 = lVar21;
  plVar16 = local_2f8;
  local_310 = lVar14;
  if (lVar14 != 0) {
    while( true ) {
      local_310 = lVar17;
      local_2f8 = plVar16;
      if (lVar21 == lVar14) break;
      puVar18 = (undefined8 *)(lVar21 + -0x240);
      lVar21 = lVar21 + -0x250;
      plVar20 = (long *)*puVar18;
      if (plVar20 != (long *)0x0) {
        plVar22 = plVar20 + 1;
        do {
          iVar13 = (int)*plVar22 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar5) {
            *(int *)plVar22 = iVar13;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar13 == 0) {
          plVar20[2] = 0;
          if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar9,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar8);
          }
          lVar17 = *(long *)puVar9;
          *(long *)puVar10 = lVar17;
          local_88 = (long *)*plVar20;
          FUN_02a44274(lVar17 + 0xd8,&local_88);
          lVar17 = local_310;
          plVar16 = local_2f8;
        }
      }
    }
    lVar21 = local_300 - lVar17;
    local_308 = lVar14;
    uVar15 = (**(code **)(*plVar16 + 0xc0))(plVar16);
    if ((uVar15 & 1) != 0) {
      lVar14 = tpidr_el0;
      if (*(char *)(lVar14 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar14 + 0x38d488) = 1;
        *(undefined8 *)(lVar14 + 0x38d478) = 0;
        *(undefined8 *)(lVar14 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar14 + 0x38d480)) {
        FUN_02bcc824(plVar16,lVar17,lVar21,0x10);
        goto joined_r0x00cb2730;
      }
    }
    (**(code **)(*plVar16 + 0x18))(plVar16,lVar17,lVar21,0x10);
  }
joined_r0x00cb2730:
  if (iVar3 <= iVar11) {
    return 1;
  }
  param_1 = param_2;
  param_2 = param_3;
LAB_00cb2214:
  FUN_00cb0840(param_1,param_2);
  return 2;
}


