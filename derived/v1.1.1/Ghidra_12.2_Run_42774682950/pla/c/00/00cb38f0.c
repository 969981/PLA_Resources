/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cb38f0; name: FUN_00cb38f0
 */


int FUN_00cb38f0(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  byte *pbVar6;
  long *plVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  long local_2b0;
  long local_2a8;
  long local_2a0;
  long *local_298;
  ulong local_290;
  long local_288;
  long lStack_280;
  int local_278;
  long local_270;
  long local_268;
  long local_260;
  long local_258;
  long *local_250;
  ulong local_248;
  long local_240;
  long lStack_238;
  int local_230;
  long local_228;
  long local_220;
  long local_218;
  long local_210;
  long *local_208;
  ulong local_200;
  long local_1f8;
  long lStack_1f0;
  int local_1e8;
  long local_1e0;
  long local_1d8;
  long local_1d0;
  long local_1c8;
  long *local_1c0;
  ulong local_1b8;
  long local_1b0;
  long lStack_1a8;
  int local_1a0;
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  long *local_178;
  ulong local_170;
  long local_168;
  long lStack_160;
  int local_158;
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  long *local_130;
  ulong local_128;
  long local_120;
  long lStack_118;
  int local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long *local_e8;
  ulong local_e0;
  long local_d8;
  long lStack_d0;
  int local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long *local_a0;
  ulong local_98;
  long local_90;
  long lStack_88;
  int local_80;
  long local_78;
  undefined8 local_70 [2];
  
  iVar14 = FUN_00cb27b0();
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  plVar2 = (long *)param_5[3];
  local_98 = param_5[4];
  local_90 = param_5[5];
  lStack_88 = param_5[6];
  lVar18 = param_5[1] - *param_5;
  local_a0 = plVar2;
  if (lVar18 != 0) {
    uVar17 = local_98;
    if (0x7ffffffffffffffe < local_98) {
      uVar17 = 0x7fffffffffffffff;
    }
    if (uVar17 < (ulong)((lVar18 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar21 = (**(code **)(*plVar2 + 0x10))(plVar2,lVar18,0x10);
    if (lVar21 == 0) {
      (**(code **)(*plVar2 + 0xb8))(plVar2);
    }
    local_a8 = lVar21 + (lVar18 >> 4) * 0x10;
    lVar18 = *param_5;
    lVar20 = param_5[1];
    local_b8 = lVar21;
    local_b0 = lVar21;
    if (lVar18 != lVar20) {
      do {
        FUN_00bac10c(&local_a0,local_b0,lVar18);
        lVar18 = lVar18 + 0x250;
        local_b0 = local_b0 + 0x250;
      } while (lVar20 != lVar18);
    }
  }
  local_80 = (int)param_5[7];
  local_78 = param_5[8];
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = (long *)param_4[3];
  lStack_d0 = param_4[6];
  local_e0 = param_4[4];
  local_d8 = param_4[5];
  lVar18 = param_4[1] - *param_4;
  if (lVar18 != 0) {
    uVar17 = local_e0;
    if (0x7ffffffffffffffe < local_e0) {
      uVar17 = 0x7fffffffffffffff;
    }
    if (uVar17 < (ulong)((lVar18 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar21 = (**(code **)(*local_e8 + 0x10))(local_e8,lVar18,0x10);
    if (lVar21 == 0) {
      (**(code **)(*local_e8 + 0xb8))();
    }
    local_f0 = lVar21 + (lVar18 >> 4) * 0x10;
    lVar18 = *param_4;
    lVar20 = param_4[1];
    local_100 = lVar21;
    local_f8 = lVar21;
    if (lVar18 != lVar20) {
      do {
        FUN_00bac10c(&local_e8,local_f8,lVar18);
        lVar18 = lVar18 + 0x250;
        local_f8 = local_f8 + 0x250;
      } while (lVar20 != lVar18);
    }
  }
  iVar12 = local_80;
  lVar13 = local_100;
  puVar10 = PTR_DAT_043794a8;
  puVar9 = PTR_DAT_043794a0;
  iVar3 = (int)param_4[7];
  local_c0 = param_4[8];
  pbVar6 = PTR_DAT_04379498;
  plVar2 = (long *)PTR_DAT_043794a0;
  plVar7 = (long *)PTR_DAT_043794a8;
  local_c8 = iVar3;
  lVar18 = local_b8;
  lVar21 = local_100;
  lVar20 = local_f8;
  plVar8 = local_e8;
  if (local_100 != 0) {
    while( true ) {
      local_100 = lVar21;
      local_e8 = plVar8;
      if (lVar20 == lVar13) break;
      puVar19 = (undefined8 *)(lVar20 + -0x240);
      lVar20 = lVar20 + -0x250;
      puVar19 = (undefined8 *)*puVar19;
      if (puVar19 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar19 + 1);
        do {
          iVar15 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar15 + -1 == 0) {
          puVar19[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar9,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar18 = *(long *)puVar9;
          *(long *)puVar10 = lVar18;
          local_70[0] = *puVar19;
          FUN_02a44274(lVar18 + 0xd8,local_70);
          lVar21 = local_100;
          plVar8 = local_e8;
        }
      }
    }
    lVar18 = local_f0 - lVar21;
    local_f8 = lVar13;
    uVar17 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar17 & 1) != 0) {
      lVar20 = tpidr_el0;
      if (*(char *)(lVar20 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar20 + 0x38d488) = 1;
        *(undefined8 *)(lVar20 + 0x38d478) = 0;
        *(undefined8 *)(lVar20 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar20 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar20 + 0x38d480)) {
        FUN_02bcc824(plVar8,lVar21,lVar18,0x10);
        pbVar6 = PTR_DAT_04379498;
        plVar2 = (long *)PTR_DAT_043794a0;
        plVar7 = (long *)PTR_DAT_043794a8;
        lVar18 = local_b8;
        goto joined_r0x00cb4498;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar21,lVar18,0x10);
    pbVar6 = PTR_DAT_04379498;
    plVar2 = (long *)PTR_DAT_043794a0;
    plVar7 = (long *)PTR_DAT_043794a8;
    lVar18 = local_b8;
  }
joined_r0x00cb4498:
  PTR_DAT_04379498 = pbVar6;
  PTR_DAT_043794a0 = (undefined *)plVar2;
  PTR_DAT_043794a8 = (undefined *)plVar7;
  local_b8 = lVar18;
  lVar21 = lVar18;
  lVar20 = local_b0;
  plVar8 = local_a0;
  if (lVar18 != 0) {
    while( true ) {
      local_b8 = lVar21;
      local_a0 = plVar8;
      if (lVar20 == lVar18) break;
      puVar19 = (undefined8 *)(lVar20 + -0x240);
      lVar20 = lVar20 + -0x250;
      puVar19 = (undefined8 *)*puVar19;
      if (puVar19 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar19 + 1);
        do {
          iVar15 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar15 + -1 == 0) {
          puVar19[2] = 0;
          if (((*pbVar6 & 1) == 0) && (iVar15 = __cxa_guard_acquire(pbVar6), iVar15 != 0)) {
            FUN_00100250(PTR_LAB_04379590,plVar2,&PTR_LOOP_0411a000);
            __cxa_guard_release(pbVar6);
          }
          lVar21 = *plVar2;
          *plVar7 = lVar21;
          local_70[0] = *puVar19;
          FUN_02a44274(lVar21 + 0xd8,local_70);
          lVar21 = local_b8;
          plVar8 = local_a0;
        }
      }
    }
    lVar20 = local_a8 - lVar21;
    local_b0 = lVar18;
    uVar17 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar17 & 1) != 0) {
      lVar18 = tpidr_el0;
      if (*(char *)(lVar18 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar18 + 0x38d488) = 1;
        *(undefined8 *)(lVar18 + 0x38d478) = 0;
        *(undefined8 *)(lVar18 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar18 + 0x38d480)) {
        FUN_02bcc824(plVar8,lVar21,lVar20,0x10);
        goto LAB_00cb39b4;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar21,lVar20,0x10);
  }
LAB_00cb39b4:
  if (iVar3 <= iVar12) {
    return iVar14;
  }
  FUN_00cb0840(param_4,param_5);
  local_140 = 0;
  local_138 = 0;
  local_148 = 0;
  local_130 = (long *)param_4[3];
  local_128 = param_4[4];
  local_120 = param_4[5];
  lStack_118 = param_4[6];
  lVar18 = param_4[1] - *param_4;
  if (lVar18 != 0) {
    uVar17 = local_128;
    if (0x7ffffffffffffffe < local_128) {
      uVar17 = 0x7fffffffffffffff;
    }
    if (uVar17 < (ulong)((lVar18 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar21 = (**(code **)(*local_130 + 0x10))(local_130,lVar18,0x10);
    if (lVar21 == 0) {
      (**(code **)(*local_130 + 0xb8))();
    }
    local_138 = lVar21 + (lVar18 >> 4) * 0x10;
    lVar18 = *param_4;
    lVar20 = param_4[1];
    local_148 = lVar21;
    local_140 = lVar21;
    if (lVar18 != lVar20) {
      do {
        FUN_00bac10c(&local_130,local_140,lVar18);
        lVar18 = lVar18 + 0x250;
        local_140 = local_140 + 0x250;
      } while (lVar20 != lVar18);
    }
  }
  local_110 = (int)param_4[7];
  local_108 = param_4[8];
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = (long *)param_3[3];
  lStack_160 = param_3[6];
  local_170 = param_3[4];
  local_168 = param_3[5];
  lVar18 = param_3[1] - *param_3;
  if (lVar18 != 0) {
    uVar17 = local_170;
    if (0x7ffffffffffffffe < local_170) {
      uVar17 = 0x7fffffffffffffff;
    }
    if (uVar17 < (ulong)((lVar18 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar21 = (**(code **)(*local_178 + 0x10))(local_178,lVar18,0x10);
    if (lVar21 == 0) {
      (**(code **)(*local_178 + 0xb8))();
    }
    local_180 = lVar21 + (lVar18 >> 4) * 0x10;
    lVar18 = *param_3;
    lVar20 = param_3[1];
    local_190 = lVar21;
    local_188 = lVar21;
    if (lVar18 != lVar20) {
      do {
        FUN_00bac10c(&local_178,local_188,lVar18);
        lVar18 = lVar18 + 0x250;
        local_188 = local_188 + 0x250;
      } while (lVar20 != lVar18);
    }
  }
  iVar12 = local_110;
  lVar20 = local_190;
  puVar11 = PTR_DAT_043794a8;
  puVar10 = PTR_DAT_043794a0;
  puVar9 = PTR_DAT_04379498;
  iVar3 = (int)param_3[7];
  local_150 = param_3[8];
  local_158 = iVar3;
  lVar18 = local_190;
  lVar21 = local_188;
  plVar2 = local_178;
  if (local_190 != 0) {
    while( true ) {
      local_190 = lVar18;
      local_178 = plVar2;
      if (lVar21 == lVar20) break;
      puVar19 = (undefined8 *)(lVar21 + -0x240);
      lVar21 = lVar21 + -0x250;
      puVar19 = (undefined8 *)*puVar19;
      if (puVar19 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar19 + 1);
        do {
          iVar15 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar15 + -1 == 0) {
          puVar19[2] = 0;
          if (((*puVar9 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar9), iVar15 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar10,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar9);
          }
          lVar18 = *(long *)puVar10;
          *(long *)puVar11 = lVar18;
          local_70[0] = *puVar19;
          FUN_02a44274(lVar18 + 0xd8,local_70);
          lVar18 = local_190;
          plVar2 = local_178;
        }
      }
    }
    lVar21 = local_180 - lVar18;
    local_188 = lVar20;
    uVar17 = (**(code **)(*plVar2 + 0xc0))(plVar2);
    if ((uVar17 & 1) != 0) {
      lVar20 = tpidr_el0;
      if (*(char *)(lVar20 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar20 + 0x38d488) = 1;
        *(undefined8 *)(lVar20 + 0x38d478) = 0;
        *(undefined8 *)(lVar20 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar20 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar20 + 0x38d480)) {
        FUN_02bcc824(plVar2,lVar18,lVar21,0x10);
        goto LAB_00cb3a54;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar18,lVar21,0x10);
  }
LAB_00cb3a54:
  lVar20 = local_148;
  puVar11 = PTR_DAT_043794a8;
  puVar10 = PTR_DAT_043794a0;
  puVar9 = PTR_DAT_04379498;
  lVar18 = local_148;
  lVar21 = local_140;
  plVar2 = local_130;
  if (local_148 != 0) {
    while( true ) {
      local_148 = lVar18;
      local_130 = plVar2;
      if (lVar21 == lVar20) break;
      puVar19 = (undefined8 *)(lVar21 + -0x240);
      lVar21 = lVar21 + -0x250;
      puVar19 = (undefined8 *)*puVar19;
      if (puVar19 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar19 + 1);
        do {
          iVar15 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar15 + -1 == 0) {
          puVar19[2] = 0;
          if (((*puVar9 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar9), iVar15 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar10,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar9);
          }
          lVar18 = *(long *)puVar10;
          *(long *)puVar11 = lVar18;
          local_70[0] = *puVar19;
          FUN_02a44274(lVar18 + 0xd8,local_70);
          lVar18 = local_148;
          plVar2 = local_130;
        }
      }
    }
    local_140 = lVar20;
    lVar21 = local_138 - lVar18;
    uVar17 = (**(code **)(*plVar2 + 0xc0))(plVar2);
    if ((uVar17 & 1) != 0) {
      lVar20 = tpidr_el0;
      if (*(char *)(lVar20 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar20 + 0x38d488) = 1;
        *(undefined8 *)(lVar20 + 0x38d478) = 0;
        *(undefined8 *)(lVar20 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar20 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar20 + 0x38d480)) {
        FUN_02bcc824(plVar2,lVar18,lVar21,0x10);
        goto joined_r0x00cb4968;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar18,lVar21,0x10);
  }
joined_r0x00cb4968:
  if (iVar3 <= iVar12) {
    return iVar14 + 1;
  }
  FUN_00cb0840(param_3,param_4);
  local_1d0 = 0;
  local_1c8 = 0;
  local_1d8 = 0;
  local_1c0 = (long *)param_3[3];
  local_1b8 = param_3[4];
  local_1b0 = param_3[5];
  lStack_1a8 = param_3[6];
  lVar18 = param_3[1] - *param_3;
  if (lVar18 != 0) {
    uVar17 = local_1b8;
    if (0x7ffffffffffffffe < local_1b8) {
      uVar17 = 0x7fffffffffffffff;
    }
    if (uVar17 < (ulong)((lVar18 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar21 = (**(code **)(*local_1c0 + 0x10))(local_1c0,lVar18,0x10);
    if (lVar21 == 0) {
      (**(code **)(*local_1c0 + 0xb8))();
    }
    local_1c8 = lVar21 + (lVar18 >> 4) * 0x10;
    lVar18 = *param_3;
    lVar20 = param_3[1];
    local_1d8 = lVar21;
    local_1d0 = lVar21;
    if (lVar18 != lVar20) {
      do {
        FUN_00bac10c(&local_1c0,local_1d0,lVar18);
        lVar18 = lVar18 + 0x250;
        local_1d0 = local_1d0 + 0x250;
      } while (lVar20 != lVar18);
    }
  }
  local_1a0 = (int)param_3[7];
  local_198 = param_3[8];
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  local_208 = (long *)param_2[3];
  lStack_1f0 = param_2[6];
  local_200 = param_2[4];
  local_1f8 = param_2[5];
  lVar18 = param_2[1] - *param_2;
  if (lVar18 != 0) {
    uVar17 = local_200;
    if (0x7ffffffffffffffe < local_200) {
      uVar17 = 0x7fffffffffffffff;
    }
    if (uVar17 < (ulong)((lVar18 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar21 = (**(code **)(*local_208 + 0x10))(local_208,lVar18,0x10);
    if (lVar21 == 0) {
      (**(code **)(*local_208 + 0xb8))();
    }
    local_210 = lVar21 + (lVar18 >> 4) * 0x10;
    lVar18 = *param_2;
    lVar20 = param_2[1];
    local_220 = lVar21;
    local_218 = lVar21;
    if (lVar18 != lVar20) {
      do {
        FUN_00bac10c(&local_208,local_218,lVar18);
        lVar18 = lVar18 + 0x250;
        local_218 = local_218 + 0x250;
      } while (lVar20 != lVar18);
    }
  }
  iVar12 = local_1a0;
  lVar20 = local_220;
  puVar11 = PTR_DAT_043794a8;
  puVar10 = PTR_DAT_043794a0;
  puVar9 = PTR_DAT_04379498;
  iVar3 = (int)param_2[7];
  local_1e0 = param_2[8];
  local_1e8 = iVar3;
  lVar18 = local_220;
  lVar21 = local_218;
  plVar2 = local_208;
  if (local_220 != 0) {
    while( true ) {
      local_220 = lVar18;
      local_208 = plVar2;
      if (lVar21 == lVar20) break;
      puVar19 = (undefined8 *)(lVar21 + -0x240);
      lVar21 = lVar21 + -0x250;
      puVar19 = (undefined8 *)*puVar19;
      if (puVar19 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar19 + 1);
        do {
          iVar15 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar15 + -1 == 0) {
          puVar19[2] = 0;
          if (((*puVar9 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar9), iVar15 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar10,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar9);
          }
          lVar18 = *(long *)puVar10;
          *(long *)puVar11 = lVar18;
          local_70[0] = *puVar19;
          FUN_02a44274(lVar18 + 0xd8,local_70);
          lVar18 = local_220;
          plVar2 = local_208;
        }
      }
    }
    lVar21 = local_210 - lVar18;
    local_218 = lVar20;
    uVar17 = (**(code **)(*plVar2 + 0xc0))(plVar2);
    if ((uVar17 & 1) != 0) {
      lVar20 = tpidr_el0;
      if (*(char *)(lVar20 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar20 + 0x38d488) = 1;
        *(undefined8 *)(lVar20 + 0x38d478) = 0;
        *(undefined8 *)(lVar20 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar20 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar20 + 0x38d480)) {
        FUN_02bcc824(plVar2,lVar18,lVar21,0x10);
        goto LAB_00cb3afc;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar18,lVar21,0x10);
  }
LAB_00cb3afc:
  lVar20 = local_1d8;
  puVar11 = PTR_DAT_043794a8;
  puVar10 = PTR_DAT_043794a0;
  puVar9 = PTR_DAT_04379498;
  lVar18 = local_1d8;
  lVar21 = local_1d0;
  plVar2 = local_1c0;
  if (local_1d8 != 0) {
    while( true ) {
      local_1d8 = lVar18;
      local_1c0 = plVar2;
      if (lVar21 == lVar20) break;
      puVar19 = (undefined8 *)(lVar21 + -0x240);
      lVar21 = lVar21 + -0x250;
      puVar19 = (undefined8 *)*puVar19;
      if (puVar19 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar19 + 1);
        do {
          iVar15 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar15 + -1 == 0) {
          puVar19[2] = 0;
          if (((*puVar9 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar9), iVar15 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar10,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar9);
          }
          lVar18 = *(long *)puVar10;
          *(long *)puVar11 = lVar18;
          local_70[0] = *puVar19;
          FUN_02a44274(lVar18 + 0xd8,local_70);
          lVar18 = local_1d8;
          plVar2 = local_1c0;
        }
      }
    }
    local_1d0 = lVar20;
    lVar21 = local_1c8 - lVar18;
    uVar17 = (**(code **)(*plVar2 + 0xc0))(plVar2);
    if ((uVar17 & 1) != 0) {
      lVar20 = tpidr_el0;
      if (*(char *)(lVar20 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar20 + 0x38d488) = 1;
        *(undefined8 *)(lVar20 + 0x38d478) = 0;
        *(undefined8 *)(lVar20 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar20 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar20 + 0x38d480)) {
        FUN_02bcc824(plVar2,lVar18,lVar21,0x10);
        goto joined_r0x00cb4c78;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar18,lVar21,0x10);
  }
joined_r0x00cb4c78:
  if (iVar3 <= iVar12) {
    return iVar14 + 2;
  }
  FUN_00cb0840(param_2,param_3);
  local_260 = 0;
  local_258 = 0;
  local_268 = 0;
  local_250 = (long *)param_2[3];
  local_248 = param_2[4];
  local_240 = param_2[5];
  lStack_238 = param_2[6];
  lVar18 = param_2[1] - *param_2;
  if (lVar18 != 0) {
    uVar17 = local_248;
    if (0x7ffffffffffffffe < local_248) {
      uVar17 = 0x7fffffffffffffff;
    }
    if (uVar17 < (ulong)((lVar18 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar21 = (**(code **)(*local_250 + 0x10))(local_250,lVar18,0x10);
    if (lVar21 == 0) {
      (**(code **)(*local_250 + 0xb8))();
    }
    local_258 = lVar21 + (lVar18 >> 4) * 0x10;
    lVar18 = *param_2;
    lVar20 = param_2[1];
    local_268 = lVar21;
    local_260 = lVar21;
    if (lVar18 != lVar20) {
      do {
        FUN_00bac10c(&local_250,local_260,lVar18);
        lVar18 = lVar18 + 0x250;
        local_260 = local_260 + 0x250;
      } while (lVar20 != lVar18);
    }
  }
  local_230 = (int)param_2[7];
  local_228 = param_2[8];
  local_2b0 = 0;
  local_298 = (long *)param_1[3];
  local_290 = param_1[4];
  local_288 = param_1[5];
  lStack_280 = param_1[6];
  local_2a0 = 0;
  lVar18 = param_1[1] - *param_1;
  if (lVar18 == 0) {
    local_2a8 = 0;
  }
  else {
    uVar17 = local_290;
    if (0x7ffffffffffffffe < local_290) {
      uVar17 = 0x7fffffffffffffff;
    }
    if (uVar17 < (ulong)((lVar18 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    local_2b0 = (**(code **)(*local_298 + 0x10))(local_298,lVar18,0x10);
    if (local_2b0 == 0) {
      (**(code **)(*local_298 + 0xb8))();
    }
    local_2a0 = local_2b0 + (lVar18 >> 4) * 0x10;
    lVar18 = *param_1;
    lVar21 = param_1[1];
    local_2a8 = local_2b0;
    if (lVar18 != lVar21) {
      do {
        FUN_00bac10c(&local_298,local_2a8,lVar18);
        lVar18 = lVar18 + 0x250;
        local_2a8 = local_2a8 + 0x250;
      } while (lVar21 != lVar18);
    }
  }
  iVar12 = local_230;
  puVar11 = PTR_DAT_043794a8;
  puVar10 = PTR_DAT_043794a0;
  puVar9 = PTR_DAT_04379498;
  iVar3 = (int)param_1[7];
  local_270 = param_1[8];
  local_278 = iVar3;
  plVar2 = local_298;
  if (local_2b0 != 0) {
    while (local_298 = plVar2, local_2a8 != local_2b0) {
      puVar19 = (undefined8 *)(local_2a8 + -0x240);
      local_2a8 = local_2a8 + -0x250;
      puVar19 = (undefined8 *)*puVar19;
      if (puVar19 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar19 + 1);
        do {
          iVar15 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar15 + -1 == 0) {
          puVar19[2] = 0;
          if (((*puVar9 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar9), iVar15 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar10,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar9);
          }
          lVar18 = *(long *)puVar10;
          *(long *)puVar11 = lVar18;
          local_70[0] = *puVar19;
          FUN_02a44274(lVar18 + 0xd8,local_70);
          plVar2 = local_298;
        }
      }
    }
    uVar17 = (**(code **)(*plVar2 + 0xc0))(plVar2);
    if ((uVar17 & 1) != 0) {
      lVar18 = tpidr_el0;
      if (*(char *)(lVar18 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar18 + 0x38d488) = 1;
        *(undefined8 *)(lVar18 + 0x38d478) = 0;
        *(undefined8 *)(lVar18 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar18 + 0x38d480)) {
        FUN_02bcc824(plVar2,local_2b0,local_2a0 - local_2b0,0x10);
        goto LAB_00cb3ba4;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,local_2b0,local_2a0 - local_2b0,0x10);
  }
LAB_00cb3ba4:
  lVar20 = local_268;
  puVar11 = PTR_DAT_043794a8;
  puVar10 = PTR_DAT_043794a0;
  puVar9 = PTR_DAT_04379498;
  iVar15 = iVar14 + 3;
  lVar18 = local_268;
  lVar21 = local_260;
  plVar2 = local_250;
  if (local_268 != 0) {
    while( true ) {
      local_268 = lVar18;
      local_250 = plVar2;
      if (lVar21 == lVar20) break;
      puVar19 = (undefined8 *)(lVar21 + -0x240);
      lVar21 = lVar21 + -0x250;
      puVar19 = (undefined8 *)*puVar19;
      if (puVar19 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar19 + 1);
        do {
          iVar16 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar16 + -1 == 0) {
          puVar19[2] = 0;
          if (((*puVar9 & 1) == 0) && (iVar16 = __cxa_guard_acquire(puVar9), iVar16 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar10,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar9);
          }
          lVar18 = *(long *)puVar10;
          *(long *)puVar11 = lVar18;
          local_70[0] = *puVar19;
          FUN_02a44274(lVar18 + 0xd8,local_70);
          lVar18 = local_268;
          plVar2 = local_250;
        }
      }
    }
    local_260 = lVar20;
    lVar21 = local_258 - lVar18;
    uVar17 = (**(code **)(*plVar2 + 0xc0))(plVar2);
    if ((uVar17 & 1) != 0) {
      lVar20 = tpidr_el0;
      if (*(char *)(lVar20 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar20 + 0x38d488) = 1;
        *(undefined8 *)(lVar20 + 0x38d478) = 0;
        *(undefined8 *)(lVar20 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar20 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar20 + 0x38d480)) {
        FUN_02bcc824(plVar2,lVar18,lVar21,0x10);
        goto joined_r0x00cb4f88;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar18,lVar21,0x10);
  }
joined_r0x00cb4f88:
  if (iVar12 < iVar3) {
    FUN_00cb0840(param_1,param_2);
    iVar15 = iVar14 + 4;
  }
  return iVar15;
}


