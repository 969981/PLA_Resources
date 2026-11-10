/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00c6c3f0; name: FUN_00c6c3f0
 */


int FUN_00c6c3f0(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  byte *pbVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
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
  
  iVar9 = FUN_00c6ae30();
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  plVar15 = (long *)param_5[3];
  local_98 = param_5[4];
  local_90 = param_5[5];
  lStack_88 = param_5[6];
  lVar18 = param_5[1] - *param_5;
  local_a0 = plVar15;
  if (lVar18 != 0) {
    uVar12 = local_98;
    if (0x7ffffffffffffffe < local_98) {
      uVar12 = 0x7fffffffffffffff;
    }
    if (uVar12 < (ulong)((lVar18 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar19 = (**(code **)(*plVar15 + 0x10))(plVar15,lVar18,0x10);
    if (lVar19 == 0) {
      (**(code **)(*plVar15 + 0xb8))(plVar15);
    }
    local_a8 = lVar19 + (lVar18 >> 4) * 0x10;
    lVar18 = *param_5;
    lVar13 = param_5[1];
    local_b8 = lVar19;
    local_b0 = lVar19;
    if (lVar18 != lVar13) {
      do {
        FUN_00bac10c(&local_a0,local_b0,lVar18);
        lVar18 = lVar18 + 0x250;
        local_b0 = local_b0 + 0x250;
      } while (lVar13 != lVar18);
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
    uVar12 = local_e0;
    if (0x7ffffffffffffffe < local_e0) {
      uVar12 = 0x7fffffffffffffff;
    }
    if (uVar12 < (ulong)((lVar18 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar19 = (**(code **)(*local_e8 + 0x10))(local_e8,lVar18,0x10);
    if (lVar19 == 0) {
      (**(code **)(*local_e8 + 0xb8))();
    }
    local_f0 = lVar19 + (lVar18 >> 4) * 0x10;
    lVar18 = *param_4;
    lVar13 = param_4[1];
    local_100 = lVar19;
    local_f8 = lVar19;
    if (lVar18 != lVar13) {
      do {
        FUN_00bac10c(&local_e8,local_f8,lVar18);
        lVar18 = lVar18 + 0x250;
        local_f8 = local_f8 + 0x250;
      } while (lVar13 != lVar18);
    }
  }
  iVar8 = local_80;
  lVar19 = local_100;
  plVar16 = (long *)PTR_DAT_043794a8;
  plVar15 = (long *)PTR_DAT_043794a0;
  pbVar14 = PTR_DAT_04379498;
  iVar2 = (int)param_4[7];
  local_c0 = param_4[8];
  local_c8 = iVar2;
  lVar18 = local_b8;
  if (local_100 != 0) {
    if (local_f8 != local_100) {
      puVar17 = *(undefined8 **)(local_f8 + -0x240);
      lVar18 = local_f8 + -0x250;
      if (puVar17 == (undefined8 *)0x0) goto LAB_00c6dcb8;
      piVar1 = (int *)(puVar17 + 1);
      do {
        iVar10 = *piVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        if (iVar10 == 0) {
          puVar17[2] = 0;
          if (((*pbVar14 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), plVar15 = (long *)PTR_DAT_043794a0,
             plVar16 = (long *)PTR_DAT_043794a8, iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
            plVar15 = (long *)PTR_DAT_043794a0;
            plVar16 = (long *)PTR_DAT_043794a8;
          }
          lVar13 = *plVar15;
          *plVar16 = lVar13;
          local_70[0] = *puVar17;
          FUN_02a44274(lVar13 + 0xd8,local_70);
          pbVar14 = PTR_DAT_04379498;
          plVar15 = (long *)PTR_DAT_043794a0;
        }
LAB_00c6dcb8:
        do {
          if (lVar18 == lVar19) goto LAB_00c6dcf0;
          puVar17 = (undefined8 *)(lVar18 + -0x240);
          lVar18 = lVar18 + -0x250;
          puVar17 = (undefined8 *)*puVar17;
        } while (puVar17 == (undefined8 *)0x0);
        piVar1 = (int *)(puVar17 + 1);
        do {
          iVar10 = *piVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      } while( true );
    }
LAB_00c6dcf0:
    plVar15 = local_e8;
    lVar18 = local_100;
    lVar13 = local_f0 - local_100;
    local_f8 = lVar19;
    uVar12 = (**(code **)(*local_e8 + 0xc0))(local_e8);
    if ((uVar12 & 1) != 0) {
      lVar19 = tpidr_el0;
      if (*(char *)(lVar19 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar19 + 0x38d488) = 1;
        *(undefined8 *)(lVar19 + 0x38d478) = 0;
        *(undefined8 *)(lVar19 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar19 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar19 + 0x38d480)) {
        FUN_02bcc824(plVar15,lVar18,lVar13,0x10);
        lVar18 = local_b8;
        goto joined_r0x00c6df18;
      }
    }
    (**(code **)(*plVar15 + 0x18))(plVar15,lVar18,lVar13,0x10);
    lVar18 = local_b8;
  }
joined_r0x00c6df18:
  local_b8 = lVar18;
  if (lVar18 != 0) {
    if (local_b0 != lVar18) {
      lVar19 = local_b0 + -0x250;
      puVar17 = *(undefined8 **)(local_b0 + -0x240);
      if (puVar17 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar17 + 1);
        do {
          iVar10 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 + -1 == 0) {
          puVar17[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar13;
          local_70[0] = *puVar17;
          FUN_02a44274(lVar13 + 0xd8,local_70);
        }
      }
      if (lVar19 != lVar18) {
        pbVar14 = PTR_DAT_04379498;
        plVar15 = (long *)PTR_DAT_043794a0;
        plVar16 = (long *)PTR_DAT_043794a8;
        do {
          puVar17 = (undefined8 *)(lVar19 + -0x240);
          lVar19 = lVar19 + -0x250;
          puVar17 = (undefined8 *)*puVar17;
          if (puVar17 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar17 + 1);
            do {
              iVar10 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar10 + -1 == 0) {
              puVar17[2] = 0;
              if (((*pbVar14 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), plVar15 = (long *)PTR_DAT_043794a0
                 , plVar16 = (long *)PTR_DAT_043794a8, iVar10 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
                plVar15 = (long *)PTR_DAT_043794a0;
                plVar16 = (long *)PTR_DAT_043794a8;
              }
              lVar13 = *plVar15;
              *plVar16 = lVar13;
              local_70[0] = *puVar17;
              FUN_02a44274(lVar13 + 0xd8,local_70);
              pbVar14 = PTR_DAT_04379498;
            }
          }
        } while (lVar19 != lVar18);
      }
    }
    plVar15 = local_a0;
    lVar19 = local_b8;
    lVar13 = local_a8 - local_b8;
    local_b0 = lVar18;
    uVar12 = (**(code **)(*local_a0 + 0xc0))(local_a0);
    if ((uVar12 & 1) != 0) {
      lVar18 = tpidr_el0;
      if (*(char *)(lVar18 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar18 + 0x38d488) = 1;
        *(undefined8 *)(lVar18 + 0x38d478) = 0;
        *(undefined8 *)(lVar18 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar18 + 0x38d480)) {
        FUN_02bcc824(plVar15,lVar19,lVar13,0x10);
        goto LAB_00c6c4b8;
      }
    }
    (**(code **)(*plVar15 + 0x18))(plVar15,lVar19,lVar13,0x10);
  }
LAB_00c6c4b8:
  if (iVar2 <= iVar8) {
    return iVar9;
  }
  FUN_00c68810(param_4,param_5);
  local_140 = 0;
  local_138 = 0;
  local_148 = 0;
  local_130 = (long *)param_4[3];
  local_128 = param_4[4];
  local_120 = param_4[5];
  lStack_118 = param_4[6];
  lVar18 = param_4[1] - *param_4;
  if (lVar18 != 0) {
    uVar12 = local_128;
    if (0x7ffffffffffffffe < local_128) {
      uVar12 = 0x7fffffffffffffff;
    }
    if (uVar12 < (ulong)((lVar18 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar19 = (**(code **)(*local_130 + 0x10))(local_130,lVar18,0x10);
    if (lVar19 == 0) {
      (**(code **)(*local_130 + 0xb8))();
    }
    local_138 = lVar19 + (lVar18 >> 4) * 0x10;
    lVar18 = *param_4;
    lVar13 = param_4[1];
    local_148 = lVar19;
    local_140 = lVar19;
    if (lVar18 != lVar13) {
      do {
        FUN_00bac10c(&local_130,local_140,lVar18);
        lVar18 = lVar18 + 0x250;
        local_140 = local_140 + 0x250;
      } while (lVar13 != lVar18);
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
    uVar12 = local_170;
    if (0x7ffffffffffffffe < local_170) {
      uVar12 = 0x7fffffffffffffff;
    }
    if (uVar12 < (ulong)((lVar18 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar19 = (**(code **)(*local_178 + 0x10))(local_178,lVar18,0x10);
    if (lVar19 == 0) {
      (**(code **)(*local_178 + 0xb8))();
    }
    local_180 = lVar19 + (lVar18 >> 4) * 0x10;
    lVar18 = *param_3;
    lVar13 = param_3[1];
    local_190 = lVar19;
    local_188 = lVar19;
    if (lVar18 != lVar13) {
      do {
        FUN_00bac10c(&local_178,local_188,lVar18);
        lVar18 = lVar18 + 0x250;
        local_188 = local_188 + 0x250;
      } while (lVar13 != lVar18);
    }
  }
  iVar8 = local_110;
  lVar18 = local_190;
  iVar2 = (int)param_3[7];
  local_150 = param_3[8];
  local_158 = iVar2;
  if (local_190 != 0) {
    if (local_188 != local_190) {
      puVar17 = *(undefined8 **)(local_188 + -0x240);
      lVar19 = local_188 + -0x250;
      if (puVar17 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar17 + 1);
        do {
          iVar10 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 + -1 == 0) {
          puVar17[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar13;
          local_70[0] = *puVar17;
          FUN_02a44274(lVar13 + 0xd8,local_70);
        }
      }
      if (lVar19 != lVar18) {
        pbVar14 = PTR_DAT_04379498;
        plVar15 = (long *)PTR_DAT_043794a0;
        plVar16 = (long *)PTR_DAT_043794a8;
        do {
          puVar17 = (undefined8 *)(lVar19 + -0x240);
          lVar19 = lVar19 + -0x250;
          puVar17 = (undefined8 *)*puVar17;
          if (puVar17 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar17 + 1);
            do {
              iVar10 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar10 + -1 == 0) {
              puVar17[2] = 0;
              if (((*pbVar14 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), plVar15 = (long *)PTR_DAT_043794a0
                 , plVar16 = (long *)PTR_DAT_043794a8, iVar10 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
                plVar15 = (long *)PTR_DAT_043794a0;
                plVar16 = (long *)PTR_DAT_043794a8;
              }
              lVar13 = *plVar15;
              *plVar16 = lVar13;
              local_70[0] = *puVar17;
              FUN_02a44274(lVar13 + 0xd8,local_70);
              pbVar14 = PTR_DAT_04379498;
            }
          }
        } while (lVar19 != lVar18);
      }
    }
    plVar15 = local_178;
    lVar19 = local_190;
    lVar13 = local_180 - local_190;
    local_188 = lVar18;
    uVar12 = (**(code **)(*local_178 + 0xc0))(local_178);
    if ((uVar12 & 1) != 0) {
      lVar18 = tpidr_el0;
      if (*(char *)(lVar18 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar18 + 0x38d488) = 1;
        *(undefined8 *)(lVar18 + 0x38d478) = 0;
        *(undefined8 *)(lVar18 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar18 + 0x38d480)) {
        FUN_02bcc824(plVar15,lVar19,lVar13,0x10);
        goto LAB_00c6c550;
      }
    }
    (**(code **)(*plVar15 + 0x18))(plVar15,lVar19,lVar13,0x10);
  }
LAB_00c6c550:
  lVar18 = local_148;
  if (local_148 != 0) {
    if (local_140 != local_148) {
      lVar19 = local_140 + -0x250;
      puVar17 = *(undefined8 **)(local_140 + -0x240);
      if (puVar17 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar17 + 1);
        do {
          iVar10 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 + -1 == 0) {
          puVar17[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar13;
          local_70[0] = *puVar17;
          FUN_02a44274(lVar13 + 0xd8,local_70);
        }
      }
      if (lVar19 != lVar18) {
        pbVar14 = PTR_DAT_04379498;
        plVar15 = (long *)PTR_DAT_043794a0;
        plVar16 = (long *)PTR_DAT_043794a8;
        do {
          puVar17 = (undefined8 *)(lVar19 + -0x240);
          lVar19 = lVar19 + -0x250;
          puVar17 = (undefined8 *)*puVar17;
          if (puVar17 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar17 + 1);
            do {
              iVar10 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar10 + -1 == 0) {
              puVar17[2] = 0;
              if (((*pbVar14 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), plVar15 = (long *)PTR_DAT_043794a0
                 , plVar16 = (long *)PTR_DAT_043794a8, iVar10 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
                plVar15 = (long *)PTR_DAT_043794a0;
                plVar16 = (long *)PTR_DAT_043794a8;
              }
              lVar13 = *plVar15;
              *plVar16 = lVar13;
              local_70[0] = *puVar17;
              FUN_02a44274(lVar13 + 0xd8,local_70);
              pbVar14 = PTR_DAT_04379498;
            }
          }
        } while (lVar19 != lVar18);
      }
    }
    plVar15 = local_130;
    lVar19 = local_148;
    local_140 = lVar18;
    lVar18 = local_138 - local_148;
    uVar12 = (**(code **)(*local_130 + 0xc0))(local_130);
    if ((uVar12 & 1) != 0) {
      lVar13 = tpidr_el0;
      if (*(char *)(lVar13 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar13 + 0x38d488) = 1;
        *(undefined8 *)(lVar13 + 0x38d478) = 0;
        *(undefined8 *)(lVar13 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar13 + 0x38d480)) {
        FUN_02bcc824(plVar15,lVar19,lVar18,0x10);
        goto joined_r0x00c6ccc8;
      }
    }
    (**(code **)(*plVar15 + 0x18))(plVar15,lVar19,lVar18,0x10);
  }
joined_r0x00c6ccc8:
  if (iVar2 <= iVar8) {
    return iVar9 + 1;
  }
  FUN_00c68810(param_3,param_4);
  local_1d0 = 0;
  local_1c8 = 0;
  local_1d8 = 0;
  local_1c0 = (long *)param_3[3];
  local_1b8 = param_3[4];
  local_1b0 = param_3[5];
  lStack_1a8 = param_3[6];
  lVar18 = param_3[1] - *param_3;
  if (lVar18 != 0) {
    uVar12 = local_1b8;
    if (0x7ffffffffffffffe < local_1b8) {
      uVar12 = 0x7fffffffffffffff;
    }
    if (uVar12 < (ulong)((lVar18 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar19 = (**(code **)(*local_1c0 + 0x10))(local_1c0,lVar18,0x10);
    if (lVar19 == 0) {
      (**(code **)(*local_1c0 + 0xb8))();
    }
    local_1c8 = lVar19 + (lVar18 >> 4) * 0x10;
    lVar18 = *param_3;
    lVar13 = param_3[1];
    local_1d8 = lVar19;
    local_1d0 = lVar19;
    if (lVar18 != lVar13) {
      do {
        FUN_00bac10c(&local_1c0,local_1d0,lVar18);
        lVar18 = lVar18 + 0x250;
        local_1d0 = local_1d0 + 0x250;
      } while (lVar13 != lVar18);
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
    uVar12 = local_200;
    if (0x7ffffffffffffffe < local_200) {
      uVar12 = 0x7fffffffffffffff;
    }
    if (uVar12 < (ulong)((lVar18 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar19 = (**(code **)(*local_208 + 0x10))(local_208,lVar18,0x10);
    if (lVar19 == 0) {
      (**(code **)(*local_208 + 0xb8))();
    }
    local_210 = lVar19 + (lVar18 >> 4) * 0x10;
    lVar18 = *param_2;
    lVar13 = param_2[1];
    local_220 = lVar19;
    local_218 = lVar19;
    if (lVar18 != lVar13) {
      do {
        FUN_00bac10c(&local_208,local_218,lVar18);
        lVar18 = lVar18 + 0x250;
        local_218 = local_218 + 0x250;
      } while (lVar13 != lVar18);
    }
  }
  iVar8 = local_1a0;
  lVar18 = local_220;
  iVar2 = (int)param_2[7];
  local_1e0 = param_2[8];
  local_1e8 = iVar2;
  if (local_220 != 0) {
    if (local_218 != local_220) {
      puVar17 = *(undefined8 **)(local_218 + -0x240);
      lVar19 = local_218 + -0x250;
      if (puVar17 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar17 + 1);
        do {
          iVar10 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 + -1 == 0) {
          puVar17[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar13;
          local_70[0] = *puVar17;
          FUN_02a44274(lVar13 + 0xd8,local_70);
        }
      }
      puVar5 = PTR_DAT_04379498;
      if (lVar19 != lVar18) {
        plVar15 = (long *)PTR_DAT_043794a0;
        plVar16 = (long *)PTR_DAT_043794a8;
        do {
          puVar17 = (undefined8 *)(lVar19 + -0x240);
          lVar19 = lVar19 + -0x250;
          puVar17 = (undefined8 *)*puVar17;
          if (puVar17 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar17 + 1);
            do {
              iVar10 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar10 + -1 == 0) {
              puVar17[2] = 0;
              if (((*puVar5 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(puVar5), plVar15 = (long *)PTR_DAT_043794a0,
                 plVar16 = (long *)PTR_DAT_043794a8, iVar10 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar5);
                plVar15 = (long *)PTR_DAT_043794a0;
                plVar16 = (long *)PTR_DAT_043794a8;
              }
              lVar13 = *plVar15;
              *plVar16 = lVar13;
              local_70[0] = *puVar17;
              FUN_02a44274(lVar13 + 0xd8,local_70);
            }
          }
        } while (lVar19 != lVar18);
      }
    }
    plVar15 = local_208;
    lVar19 = local_220;
    lVar13 = local_210 - local_220;
    local_218 = lVar18;
    uVar12 = (**(code **)(*local_208 + 0xc0))(local_208);
    if ((uVar12 & 1) != 0) {
      lVar18 = tpidr_el0;
      if (*(char *)(lVar18 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar18 + 0x38d488) = 1;
        *(undefined8 *)(lVar18 + 0x38d478) = 0;
        *(undefined8 *)(lVar18 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar18 + 0x38d480)) {
        FUN_02bcc824(plVar15,lVar19,lVar13,0x10);
        goto LAB_00c6c5f8;
      }
    }
    (**(code **)(*plVar15 + 0x18))(plVar15,lVar19,lVar13,0x10);
  }
LAB_00c6c5f8:
  lVar18 = local_1d8;
  if (local_1d8 != 0) {
    if (local_1d0 != local_1d8) {
      lVar19 = local_1d0 + -0x250;
      puVar17 = *(undefined8 **)(local_1d0 + -0x240);
      if (puVar17 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar17 + 1);
        do {
          iVar10 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 + -1 == 0) {
          puVar17[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar13;
          local_70[0] = *puVar17;
          FUN_02a44274(lVar13 + 0xd8,local_70);
        }
      }
      puVar5 = PTR_DAT_04379498;
      if (lVar19 != lVar18) {
        plVar15 = (long *)PTR_DAT_043794a0;
        plVar16 = (long *)PTR_DAT_043794a8;
        do {
          puVar17 = (undefined8 *)(lVar19 + -0x240);
          lVar19 = lVar19 + -0x250;
          puVar17 = (undefined8 *)*puVar17;
          if (puVar17 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar17 + 1);
            do {
              iVar10 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar10 + -1 == 0) {
              puVar17[2] = 0;
              if (((*puVar5 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(puVar5), plVar15 = (long *)PTR_DAT_043794a0,
                 plVar16 = (long *)PTR_DAT_043794a8, iVar10 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar5);
                plVar15 = (long *)PTR_DAT_043794a0;
                plVar16 = (long *)PTR_DAT_043794a8;
              }
              lVar13 = *plVar15;
              *plVar16 = lVar13;
              local_70[0] = *puVar17;
              FUN_02a44274(lVar13 + 0xd8,local_70);
            }
          }
        } while (lVar19 != lVar18);
      }
    }
    plVar15 = local_1c0;
    lVar19 = local_1d8;
    local_1d0 = lVar18;
    lVar18 = local_1c8 - local_1d8;
    uVar12 = (**(code **)(*local_1c0 + 0xc0))(local_1c0);
    if ((uVar12 & 1) != 0) {
      lVar13 = tpidr_el0;
      if (*(char *)(lVar13 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar13 + 0x38d488) = 1;
        *(undefined8 *)(lVar13 + 0x38d478) = 0;
        *(undefined8 *)(lVar13 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar13 + 0x38d480)) {
        FUN_02bcc824(plVar15,lVar19,lVar18,0x10);
        goto joined_r0x00c6d124;
      }
    }
    (**(code **)(*plVar15 + 0x18))(plVar15,lVar19,lVar18,0x10);
  }
joined_r0x00c6d124:
  if (iVar2 <= iVar8) {
    return iVar9 + 2;
  }
  FUN_00c68810(param_2,param_3);
  local_260 = 0;
  local_258 = 0;
  local_268 = 0;
  local_250 = (long *)param_2[3];
  local_248 = param_2[4];
  local_240 = param_2[5];
  lStack_238 = param_2[6];
  lVar18 = param_2[1] - *param_2;
  if (lVar18 != 0) {
    uVar12 = local_248;
    if (0x7ffffffffffffffe < local_248) {
      uVar12 = 0x7fffffffffffffff;
    }
    if (uVar12 < (ulong)((lVar18 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar19 = (**(code **)(*local_250 + 0x10))(local_250,lVar18,0x10);
    if (lVar19 == 0) {
      (**(code **)(*local_250 + 0xb8))();
    }
    local_258 = lVar19 + (lVar18 >> 4) * 0x10;
    lVar18 = *param_2;
    lVar13 = param_2[1];
    local_268 = lVar19;
    local_260 = lVar19;
    if (lVar18 != lVar13) {
      do {
        FUN_00bac10c(&local_250,local_260,lVar18);
        lVar18 = lVar18 + 0x250;
        local_260 = local_260 + 0x250;
      } while (lVar13 != lVar18);
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
    uVar12 = local_290;
    if (0x7ffffffffffffffe < local_290) {
      uVar12 = 0x7fffffffffffffff;
    }
    if (uVar12 < (ulong)((lVar18 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    local_2b0 = (**(code **)(*local_298 + 0x10))(local_298,lVar18,0x10);
    if (local_2b0 == 0) {
      (**(code **)(*local_298 + 0xb8))();
    }
    local_2a0 = local_2b0 + (lVar18 >> 4) * 0x10;
    lVar18 = *param_1;
    lVar19 = param_1[1];
    local_2a8 = local_2b0;
    if (lVar18 != lVar19) {
      do {
        FUN_00bac10c(&local_298,local_2a8,lVar18);
        lVar18 = lVar18 + 0x250;
        local_2a8 = local_2a8 + 0x250;
      } while (lVar19 != lVar18);
    }
  }
  iVar8 = local_230;
  iVar2 = (int)param_1[7];
  local_270 = param_1[8];
  local_278 = iVar2;
  if (local_2b0 != 0) {
    if (local_2a8 != local_2b0) {
      puVar17 = *(undefined8 **)(local_2a8 + -0x240);
      local_2a8 = local_2a8 + -0x250;
      if (puVar17 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar17 + 1);
        do {
          iVar10 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 + -1 == 0) {
          puVar17[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar18 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar18;
          local_70[0] = *puVar17;
          FUN_02a44274(lVar18 + 0xd8,local_70);
        }
      }
      puVar7 = PTR_LAB_04379590;
      puVar6 = PTR_DAT_043794a8;
      puVar5 = PTR_DAT_04379498;
      if (local_2a8 != local_2b0) {
        plVar15 = (long *)PTR_DAT_043794a0;
        do {
          puVar17 = (undefined8 *)(local_2a8 + -0x240);
          local_2a8 = local_2a8 + -0x250;
          puVar17 = (undefined8 *)*puVar17;
          if (puVar17 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar17 + 1);
            do {
              iVar10 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar10 + -1 == 0) {
              puVar17[2] = 0;
              if (((*puVar5 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(puVar5), plVar15 = (long *)PTR_DAT_043794a0,
                 iVar10 != 0)) {
                FUN_00100250(puVar7,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar5);
                plVar15 = (long *)PTR_DAT_043794a0;
              }
              lVar18 = *plVar15;
              *(long *)puVar6 = lVar18;
              local_70[0] = *puVar17;
              FUN_02a44274(lVar18 + 0xd8,local_70);
            }
          }
        } while (local_2a8 != local_2b0);
      }
    }
    plVar15 = local_298;
    uVar12 = (**(code **)(*local_298 + 0xc0))(local_298);
    if ((uVar12 & 1) != 0) {
      lVar18 = tpidr_el0;
      if (*(char *)(lVar18 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar18 + 0x38d488) = 1;
        *(undefined8 *)(lVar18 + 0x38d478) = 0;
        *(undefined8 *)(lVar18 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar18 + 0x38d480)) {
        FUN_02bcc824(plVar15,local_2b0,local_2a0 - local_2b0,0x10);
        goto LAB_00c6c69c;
      }
    }
    (**(code **)(*plVar15 + 0x18))(plVar15,local_2b0,local_2a0 - local_2b0,0x10);
  }
LAB_00c6c69c:
  lVar18 = local_268;
  iVar10 = iVar9 + 3;
  if (local_268 != 0) {
    if (local_260 != local_268) {
      lVar19 = local_260 + -0x250;
      puVar17 = *(undefined8 **)(local_260 + -0x240);
      if (puVar17 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar17 + 1);
        do {
          iVar11 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar11 + -1 == 0) {
          puVar17[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar13;
          local_70[0] = *puVar17;
          FUN_02a44274(lVar13 + 0xd8,local_70);
        }
      }
      puVar7 = PTR_LAB_04379590;
      puVar6 = PTR_DAT_043794a8;
      puVar5 = PTR_DAT_04379498;
      if (lVar19 != lVar18) {
        plVar15 = (long *)PTR_DAT_043794a0;
        do {
          puVar17 = (undefined8 *)(lVar19 + -0x240);
          lVar19 = lVar19 + -0x250;
          puVar17 = (undefined8 *)*puVar17;
          if (puVar17 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar17 + 1);
            do {
              iVar11 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar11 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar11 + -1 == 0) {
              puVar17[2] = 0;
              if (((*puVar5 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(puVar5), plVar15 = (long *)PTR_DAT_043794a0,
                 iVar11 != 0)) {
                FUN_00100250(puVar7,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar5);
                plVar15 = (long *)PTR_DAT_043794a0;
              }
              lVar13 = *plVar15;
              *(long *)puVar6 = lVar13;
              local_70[0] = *puVar17;
              FUN_02a44274(lVar13 + 0xd8,local_70);
            }
          }
        } while (lVar19 != lVar18);
      }
    }
    plVar15 = local_250;
    lVar19 = local_268;
    local_260 = lVar18;
    lVar18 = local_258 - local_268;
    uVar12 = (**(code **)(*local_250 + 0xc0))(local_250);
    if ((uVar12 & 1) != 0) {
      lVar13 = tpidr_el0;
      if (*(char *)(lVar13 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar13 + 0x38d488) = 1;
        *(undefined8 *)(lVar13 + 0x38d478) = 0;
        *(undefined8 *)(lVar13 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar13 + 0x38d480)) {
        FUN_02bcc824(plVar15,lVar19,lVar18,0x10);
        goto joined_r0x00c6d5a0;
      }
    }
    (**(code **)(*plVar15 + 0x18))(plVar15,lVar19,lVar18,0x10);
  }
joined_r0x00c6d5a0:
  if (iVar8 < iVar2) {
    FUN_00c68810(param_1,param_2);
    iVar10 = iVar9 + 4;
  }
  return iVar10;
}


