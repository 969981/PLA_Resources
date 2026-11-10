/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00c6ae30; name: FUN_00c6ae30
 */


int FUN_00c6ae30(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
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
  
  iVar8 = FUN_00c68af0();
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  plVar14 = (long *)param_4[3];
  local_98 = param_4[4];
  local_90 = param_4[5];
  lStack_88 = param_4[6];
  lVar17 = param_4[1] - *param_4;
  local_a0 = plVar14;
  if (lVar17 != 0) {
    uVar11 = local_98;
    if (0x7ffffffffffffffe < local_98) {
      uVar11 = 0x7fffffffffffffff;
    }
    if (uVar11 < (ulong)((lVar17 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar18 = (**(code **)(*plVar14 + 0x10))(plVar14,lVar17,0x10);
    if (lVar18 == 0) {
      (**(code **)(*plVar14 + 0xb8))(plVar14);
    }
    local_a8 = lVar18 + (lVar17 >> 4) * 0x10;
    lVar17 = *param_4;
    lVar12 = param_4[1];
    local_b8 = lVar18;
    local_b0 = lVar18;
    if (lVar17 != lVar12) {
      do {
        FUN_00bac10c(&local_a0,local_b0,lVar17);
        lVar17 = lVar17 + 0x250;
        local_b0 = local_b0 + 0x250;
      } while (lVar12 != lVar17);
    }
  }
  local_80 = (int)param_4[7];
  local_78 = param_4[8];
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = (long *)param_3[3];
  lStack_d0 = param_3[6];
  local_e0 = param_3[4];
  local_d8 = param_3[5];
  lVar17 = param_3[1] - *param_3;
  if (lVar17 != 0) {
    uVar11 = local_e0;
    if (0x7ffffffffffffffe < local_e0) {
      uVar11 = 0x7fffffffffffffff;
    }
    if (uVar11 < (ulong)((lVar17 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar18 = (**(code **)(*local_e8 + 0x10))(local_e8,lVar17,0x10);
    if (lVar18 == 0) {
      (**(code **)(*local_e8 + 0xb8))();
    }
    local_f0 = lVar18 + (lVar17 >> 4) * 0x10;
    lVar17 = *param_3;
    lVar12 = param_3[1];
    local_100 = lVar18;
    local_f8 = lVar18;
    if (lVar17 != lVar12) {
      do {
        FUN_00bac10c(&local_e8,local_f8,lVar17);
        lVar17 = lVar17 + 0x250;
        local_f8 = local_f8 + 0x250;
      } while (lVar12 != lVar17);
    }
  }
  iVar7 = local_80;
  lVar18 = local_100;
  plVar15 = (long *)PTR_DAT_043794a8;
  plVar14 = (long *)PTR_DAT_043794a0;
  pbVar13 = PTR_DAT_04379498;
  iVar2 = (int)param_3[7];
  local_c0 = param_3[8];
  local_c8 = iVar2;
  lVar17 = local_b8;
  if (local_100 != 0) {
    if (local_f8 != local_100) {
      puVar16 = *(undefined8 **)(local_f8 + -0x240);
      lVar17 = local_f8 + -0x250;
      if (puVar16 == (undefined8 *)0x0) goto LAB_00c6bfd0;
      piVar1 = (int *)(puVar16 + 1);
      do {
        iVar9 = *piVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        if (iVar9 == 0) {
          puVar16[2] = 0;
          if (((*pbVar13 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), plVar14 = (long *)PTR_DAT_043794a0,
             plVar15 = (long *)PTR_DAT_043794a8, iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
            plVar14 = (long *)PTR_DAT_043794a0;
            plVar15 = (long *)PTR_DAT_043794a8;
          }
          lVar12 = *plVar14;
          *plVar15 = lVar12;
          local_70[0] = *puVar16;
          FUN_02a44274(lVar12 + 0xd8,local_70);
          pbVar13 = PTR_DAT_04379498;
          plVar14 = (long *)PTR_DAT_043794a0;
        }
LAB_00c6bfd0:
        do {
          if (lVar17 == lVar18) goto LAB_00c6c008;
          puVar16 = (undefined8 *)(lVar17 + -0x240);
          lVar17 = lVar17 + -0x250;
          puVar16 = (undefined8 *)*puVar16;
        } while (puVar16 == (undefined8 *)0x0);
        piVar1 = (int *)(puVar16 + 1);
        do {
          iVar9 = *piVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      } while( true );
    }
LAB_00c6c008:
    plVar14 = local_e8;
    lVar17 = local_100;
    lVar12 = local_f0 - local_100;
    local_f8 = lVar18;
    uVar11 = (**(code **)(*local_e8 + 0xc0))(local_e8);
    if ((uVar11 & 1) != 0) {
      lVar18 = tpidr_el0;
      if (*(char *)(lVar18 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar18 + 0x38d488) = 1;
        *(undefined8 *)(lVar18 + 0x38d478) = 0;
        *(undefined8 *)(lVar18 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar18 + 0x38d480)) {
        FUN_02bcc824(plVar14,lVar17,lVar12,0x10);
        lVar17 = local_b8;
        goto joined_r0x00c6c230;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,lVar17,lVar12,0x10);
    lVar17 = local_b8;
  }
joined_r0x00c6c230:
  local_b8 = lVar17;
  if (lVar17 != 0) {
    if (local_b0 != lVar17) {
      lVar18 = local_b0 + -0x250;
      puVar16 = *(undefined8 **)(local_b0 + -0x240);
      if (puVar16 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar16 + 1);
        do {
          iVar9 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          puVar16[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_70[0] = *puVar16;
          FUN_02a44274(lVar12 + 0xd8,local_70);
        }
      }
      if (lVar18 != lVar17) {
        pbVar13 = PTR_DAT_04379498;
        plVar14 = (long *)PTR_DAT_043794a0;
        plVar15 = (long *)PTR_DAT_043794a8;
        do {
          puVar16 = (undefined8 *)(lVar18 + -0x240);
          lVar18 = lVar18 + -0x250;
          puVar16 = (undefined8 *)*puVar16;
          if (puVar16 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar16 + 1);
            do {
              iVar9 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar9 + -1 == 0) {
              puVar16[2] = 0;
              if (((*pbVar13 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), plVar14 = (long *)PTR_DAT_043794a0,
                 plVar15 = (long *)PTR_DAT_043794a8, iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
                plVar14 = (long *)PTR_DAT_043794a0;
                plVar15 = (long *)PTR_DAT_043794a8;
              }
              lVar12 = *plVar14;
              *plVar15 = lVar12;
              local_70[0] = *puVar16;
              FUN_02a44274(lVar12 + 0xd8,local_70);
              pbVar13 = PTR_DAT_04379498;
            }
          }
        } while (lVar18 != lVar17);
      }
    }
    plVar14 = local_a0;
    lVar18 = local_b8;
    lVar12 = local_a8 - local_b8;
    local_b0 = lVar17;
    uVar11 = (**(code **)(*local_a0 + 0xc0))(local_a0);
    if ((uVar11 & 1) != 0) {
      lVar17 = tpidr_el0;
      if (*(char *)(lVar17 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar17 + 0x38d488) = 1;
        *(undefined8 *)(lVar17 + 0x38d478) = 0;
        *(undefined8 *)(lVar17 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar17 + 0x38d480)) {
        FUN_02bcc824(plVar14,lVar18,lVar12,0x10);
        goto LAB_00c6aef4;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,lVar18,lVar12,0x10);
  }
LAB_00c6aef4:
  if (iVar2 <= iVar7) {
    return iVar8;
  }
  FUN_00c68810(param_3,param_4);
  local_140 = 0;
  local_138 = 0;
  local_148 = 0;
  local_130 = (long *)param_3[3];
  local_128 = param_3[4];
  local_120 = param_3[5];
  lStack_118 = param_3[6];
  lVar17 = param_3[1] - *param_3;
  if (lVar17 != 0) {
    uVar11 = local_128;
    if (0x7ffffffffffffffe < local_128) {
      uVar11 = 0x7fffffffffffffff;
    }
    if (uVar11 < (ulong)((lVar17 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar18 = (**(code **)(*local_130 + 0x10))(local_130,lVar17,0x10);
    if (lVar18 == 0) {
      (**(code **)(*local_130 + 0xb8))();
    }
    local_138 = lVar18 + (lVar17 >> 4) * 0x10;
    lVar17 = *param_3;
    lVar12 = param_3[1];
    local_148 = lVar18;
    local_140 = lVar18;
    if (lVar17 != lVar12) {
      do {
        FUN_00bac10c(&local_130,local_140,lVar17);
        lVar17 = lVar17 + 0x250;
        local_140 = local_140 + 0x250;
      } while (lVar12 != lVar17);
    }
  }
  local_110 = (int)param_3[7];
  local_108 = param_3[8];
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = (long *)param_2[3];
  lStack_160 = param_2[6];
  local_170 = param_2[4];
  local_168 = param_2[5];
  lVar17 = param_2[1] - *param_2;
  if (lVar17 != 0) {
    uVar11 = local_170;
    if (0x7ffffffffffffffe < local_170) {
      uVar11 = 0x7fffffffffffffff;
    }
    if (uVar11 < (ulong)((lVar17 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar18 = (**(code **)(*local_178 + 0x10))(local_178,lVar17,0x10);
    if (lVar18 == 0) {
      (**(code **)(*local_178 + 0xb8))();
    }
    local_180 = lVar18 + (lVar17 >> 4) * 0x10;
    lVar17 = *param_2;
    lVar12 = param_2[1];
    local_190 = lVar18;
    local_188 = lVar18;
    if (lVar17 != lVar12) {
      do {
        FUN_00bac10c(&local_178,local_188,lVar17);
        lVar17 = lVar17 + 0x250;
        local_188 = local_188 + 0x250;
      } while (lVar12 != lVar17);
    }
  }
  iVar7 = local_110;
  lVar17 = local_190;
  iVar2 = (int)param_2[7];
  local_150 = param_2[8];
  local_158 = iVar2;
  if (local_190 != 0) {
    if (local_188 != local_190) {
      puVar16 = *(undefined8 **)(local_188 + -0x240);
      lVar18 = local_188 + -0x250;
      if (puVar16 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar16 + 1);
        do {
          iVar9 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          puVar16[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_70[0] = *puVar16;
          FUN_02a44274(lVar12 + 0xd8,local_70);
        }
      }
      if (lVar18 != lVar17) {
        pbVar13 = PTR_DAT_04379498;
        plVar14 = (long *)PTR_DAT_043794a0;
        plVar15 = (long *)PTR_DAT_043794a8;
        do {
          puVar16 = (undefined8 *)(lVar18 + -0x240);
          lVar18 = lVar18 + -0x250;
          puVar16 = (undefined8 *)*puVar16;
          if (puVar16 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar16 + 1);
            do {
              iVar9 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar9 + -1 == 0) {
              puVar16[2] = 0;
              if (((*pbVar13 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), plVar14 = (long *)PTR_DAT_043794a0,
                 plVar15 = (long *)PTR_DAT_043794a8, iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
                plVar14 = (long *)PTR_DAT_043794a0;
                plVar15 = (long *)PTR_DAT_043794a8;
              }
              lVar12 = *plVar14;
              *plVar15 = lVar12;
              local_70[0] = *puVar16;
              FUN_02a44274(lVar12 + 0xd8,local_70);
              pbVar13 = PTR_DAT_04379498;
            }
          }
        } while (lVar18 != lVar17);
      }
    }
    plVar14 = local_178;
    lVar18 = local_190;
    lVar12 = local_180 - local_190;
    local_188 = lVar17;
    uVar11 = (**(code **)(*local_178 + 0xc0))(local_178);
    if ((uVar11 & 1) != 0) {
      lVar17 = tpidr_el0;
      if (*(char *)(lVar17 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar17 + 0x38d488) = 1;
        *(undefined8 *)(lVar17 + 0x38d478) = 0;
        *(undefined8 *)(lVar17 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar17 + 0x38d480)) {
        FUN_02bcc824(plVar14,lVar18,lVar12,0x10);
        goto LAB_00c6af8c;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,lVar18,lVar12,0x10);
  }
LAB_00c6af8c:
  lVar17 = local_148;
  if (local_148 != 0) {
    if (local_140 != local_148) {
      lVar18 = local_140 + -0x250;
      puVar16 = *(undefined8 **)(local_140 + -0x240);
      if (puVar16 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar16 + 1);
        do {
          iVar9 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          puVar16[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_70[0] = *puVar16;
          FUN_02a44274(lVar12 + 0xd8,local_70);
        }
      }
      if (lVar18 != lVar17) {
        pbVar13 = PTR_DAT_04379498;
        plVar14 = (long *)PTR_DAT_043794a0;
        plVar15 = (long *)PTR_DAT_043794a8;
        do {
          puVar16 = (undefined8 *)(lVar18 + -0x240);
          lVar18 = lVar18 + -0x250;
          puVar16 = (undefined8 *)*puVar16;
          if (puVar16 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar16 + 1);
            do {
              iVar9 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar9 + -1 == 0) {
              puVar16[2] = 0;
              if (((*pbVar13 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), plVar14 = (long *)PTR_DAT_043794a0,
                 plVar15 = (long *)PTR_DAT_043794a8, iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
                plVar14 = (long *)PTR_DAT_043794a0;
                plVar15 = (long *)PTR_DAT_043794a8;
              }
              lVar12 = *plVar14;
              *plVar15 = lVar12;
              local_70[0] = *puVar16;
              FUN_02a44274(lVar12 + 0xd8,local_70);
              pbVar13 = PTR_DAT_04379498;
            }
          }
        } while (lVar18 != lVar17);
      }
    }
    plVar14 = local_130;
    lVar18 = local_148;
    local_140 = lVar17;
    lVar17 = local_138 - local_148;
    uVar11 = (**(code **)(*local_130 + 0xc0))(local_130);
    if ((uVar11 & 1) != 0) {
      lVar12 = tpidr_el0;
      if (*(char *)(lVar12 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar12 + 0x38d488) = 1;
        *(undefined8 *)(lVar12 + 0x38d478) = 0;
        *(undefined8 *)(lVar12 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar12 + 0x38d480)) {
        FUN_02bcc824(plVar14,lVar18,lVar17,0x10);
        goto joined_r0x00c6b65c;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,lVar18,lVar17,0x10);
  }
joined_r0x00c6b65c:
  if (iVar2 <= iVar7) {
    return iVar8 + 1;
  }
  FUN_00c68810(param_2,param_3);
  local_1d0 = 0;
  local_1c8 = 0;
  local_1d8 = 0;
  local_1c0 = (long *)param_2[3];
  local_1b8 = param_2[4];
  local_1b0 = param_2[5];
  lStack_1a8 = param_2[6];
  lVar17 = param_2[1] - *param_2;
  if (lVar17 != 0) {
    uVar11 = local_1b8;
    if (0x7ffffffffffffffe < local_1b8) {
      uVar11 = 0x7fffffffffffffff;
    }
    if (uVar11 < (ulong)((lVar17 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar18 = (**(code **)(*local_1c0 + 0x10))(local_1c0,lVar17,0x10);
    if (lVar18 == 0) {
      (**(code **)(*local_1c0 + 0xb8))();
    }
    local_1c8 = lVar18 + (lVar17 >> 4) * 0x10;
    lVar17 = *param_2;
    lVar12 = param_2[1];
    local_1d8 = lVar18;
    local_1d0 = lVar18;
    if (lVar17 != lVar12) {
      do {
        FUN_00bac10c(&local_1c0,local_1d0,lVar17);
        lVar17 = lVar17 + 0x250;
        local_1d0 = local_1d0 + 0x250;
      } while (lVar12 != lVar17);
    }
  }
  local_1a0 = (int)param_2[7];
  local_198 = param_2[8];
  local_220 = 0;
  local_208 = (long *)param_1[3];
  local_200 = param_1[4];
  local_1f8 = param_1[5];
  lStack_1f0 = param_1[6];
  local_210 = 0;
  lVar17 = param_1[1] - *param_1;
  if (lVar17 == 0) {
    local_218 = 0;
  }
  else {
    uVar11 = local_200;
    if (0x7ffffffffffffffe < local_200) {
      uVar11 = 0x7fffffffffffffff;
    }
    if (uVar11 < (ulong)((lVar17 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    local_220 = (**(code **)(*local_208 + 0x10))(local_208,lVar17,0x10);
    if (local_220 == 0) {
      (**(code **)(*local_208 + 0xb8))();
    }
    local_210 = local_220 + (lVar17 >> 4) * 0x10;
    lVar17 = *param_1;
    lVar18 = param_1[1];
    local_218 = local_220;
    if (lVar17 != lVar18) {
      do {
        FUN_00bac10c(&local_208,local_218,lVar17);
        lVar17 = lVar17 + 0x250;
        local_218 = local_218 + 0x250;
      } while (lVar18 != lVar17);
    }
  }
  iVar7 = local_1a0;
  iVar2 = (int)param_1[7];
  local_1e0 = param_1[8];
  local_1e8 = iVar2;
  if (local_220 != 0) {
    if (local_218 != local_220) {
      puVar16 = *(undefined8 **)(local_218 + -0x240);
      local_218 = local_218 + -0x250;
      if (puVar16 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar16 + 1);
        do {
          iVar9 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          puVar16[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar17 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar17;
          local_70[0] = *puVar16;
          FUN_02a44274(lVar17 + 0xd8,local_70);
        }
      }
      puVar6 = PTR_LAB_04379590;
      puVar5 = PTR_DAT_04379498;
      if (local_218 != local_220) {
        plVar14 = (long *)PTR_DAT_043794a0;
        plVar15 = (long *)PTR_DAT_043794a8;
        do {
          puVar16 = (undefined8 *)(local_218 + -0x240);
          local_218 = local_218 + -0x250;
          puVar16 = (undefined8 *)*puVar16;
          if (puVar16 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar16 + 1);
            do {
              iVar9 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar9 + -1 == 0) {
              puVar16[2] = 0;
              if (((*puVar5 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(puVar5), plVar14 = (long *)PTR_DAT_043794a0,
                 plVar15 = (long *)PTR_DAT_043794a8, iVar9 != 0)) {
                FUN_00100250(puVar6,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar5);
                plVar14 = (long *)PTR_DAT_043794a0;
                plVar15 = (long *)PTR_DAT_043794a8;
              }
              lVar17 = *plVar14;
              *plVar15 = lVar17;
              local_70[0] = *puVar16;
              FUN_02a44274(lVar17 + 0xd8,local_70);
            }
          }
        } while (local_218 != local_220);
      }
    }
    plVar14 = local_208;
    uVar11 = (**(code **)(*local_208 + 0xc0))(local_208);
    if ((uVar11 & 1) != 0) {
      lVar17 = tpidr_el0;
      if (*(char *)(lVar17 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar17 + 0x38d488) = 1;
        *(undefined8 *)(lVar17 + 0x38d478) = 0;
        *(undefined8 *)(lVar17 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar17 + 0x38d480)) {
        FUN_02bcc824(plVar14,local_220,local_210 - local_220,0x10);
        goto LAB_00c6b02c;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,local_220,local_210 - local_220,0x10);
  }
LAB_00c6b02c:
  lVar17 = local_1d8;
  iVar9 = iVar8 + 2;
  if (local_1d8 != 0) {
    if (local_1d0 != local_1d8) {
      lVar18 = local_1d0 + -0x250;
      puVar16 = *(undefined8 **)(local_1d0 + -0x240);
      if (puVar16 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar16 + 1);
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
          puVar16[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_70[0] = *puVar16;
          FUN_02a44274(lVar12 + 0xd8,local_70);
        }
      }
      puVar6 = PTR_LAB_04379590;
      puVar5 = PTR_DAT_04379498;
      if (lVar18 != lVar17) {
        plVar14 = (long *)PTR_DAT_043794a0;
        plVar15 = (long *)PTR_DAT_043794a8;
        do {
          puVar16 = (undefined8 *)(lVar18 + -0x240);
          lVar18 = lVar18 + -0x250;
          puVar16 = (undefined8 *)*puVar16;
          if (puVar16 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar16 + 1);
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
              puVar16[2] = 0;
              if (((*puVar5 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(puVar5), plVar14 = (long *)PTR_DAT_043794a0,
                 plVar15 = (long *)PTR_DAT_043794a8, iVar10 != 0)) {
                FUN_00100250(puVar6,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar5);
                plVar14 = (long *)PTR_DAT_043794a0;
                plVar15 = (long *)PTR_DAT_043794a8;
              }
              lVar12 = *plVar14;
              *plVar15 = lVar12;
              local_70[0] = *puVar16;
              FUN_02a44274(lVar12 + 0xd8,local_70);
            }
          }
        } while (lVar18 != lVar17);
      }
    }
    plVar14 = local_1c0;
    lVar18 = local_1d8;
    local_1d0 = lVar17;
    lVar17 = local_1c8 - local_1d8;
    uVar11 = (**(code **)(*local_1c0 + 0xc0))(local_1c0);
    if ((uVar11 & 1) != 0) {
      lVar12 = tpidr_el0;
      if (*(char *)(lVar12 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar12 + 0x38d488) = 1;
        *(undefined8 *)(lVar12 + 0x38d478) = 0;
        *(undefined8 *)(lVar12 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar12 + 0x38d480)) {
        FUN_02bcc824(plVar14,lVar18,lVar17,0x10);
        goto joined_r0x00c6bac8;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,lVar18,lVar17,0x10);
  }
joined_r0x00c6bac8:
  if (iVar7 < iVar2) {
    FUN_00c68810(param_1,param_2);
    iVar9 = iVar8 + 3;
  }
  return iVar9;
}


