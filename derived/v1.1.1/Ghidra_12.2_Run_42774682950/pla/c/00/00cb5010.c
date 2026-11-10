/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cb5010; name: FUN_00cb5010
 */


void FUN_00cb5010(long *param_1,long *param_2)

{
  ulong *puVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  ulong *puVar22;
  long *plVar23;
  long *plVar24;
  long local_1b8;
  long local_1b0;
  long local_1a8;
  long *local_1a0 [2];
  long local_190;
  long lStack_188;
  int local_180;
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  long *local_158 [2];
  long local_148;
  long lStack_140;
  int local_138;
  long local_130;
  ulong local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long *local_f8 [2];
  long local_e8;
  long lStack_e0;
  int local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long *local_b0 [2];
  long local_a0;
  long lStack_98;
  int local_90;
  long local_88;
  ulong local_80;
  long local_78;
  long lStack_70;
  
  FUN_00cb0af0(param_1,param_1 + 9,param_1 + 0x12);
  if (param_1 + 0x1b != param_2) {
    plVar24 = param_1 + 0x1b;
    plVar23 = param_1 + 0x12;
    do {
      plVar9 = plVar24;
      local_b0[0] = (long *)plVar9[3];
      local_c8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      uVar10 = plVar9[4];
      local_a0 = plVar9[5];
      lStack_98 = plVar9[6];
      lVar15 = plVar9[1] - *plVar9;
      if (lVar15 != 0) {
        if (0x7ffffffffffffffe < uVar10) {
          uVar10 = 0x7fffffffffffffff;
        }
        if (uVar10 < (ulong)((lVar15 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar20 = (**(code **)(*local_b0[0] + 0x10))(local_b0[0],lVar15,0x10);
        if (lVar20 == 0) {
          (**(code **)(*local_b0[0] + 0xb8))();
        }
        local_b8 = lVar20 + (lVar15 >> 4) * 0x10;
        lVar12 = plVar9[1];
        local_c0 = lVar20;
        local_c8 = lVar20;
        for (lVar15 = *plVar9; lVar15 != lVar12; lVar15 = lVar15 + 0x250) {
          FUN_00bac10c(local_b0,local_c0,lVar15);
          local_c0 = local_c0 + 0x250;
        }
      }
      local_90 = (int)plVar9[7];
      local_88 = plVar9[8];
      local_f8[0] = (long *)plVar23[3];
      uVar10 = plVar23[4];
      local_100 = 0;
      local_110 = 0;
      local_108 = 0;
      local_e8 = plVar23[5];
      lStack_e0 = plVar23[6];
      lVar15 = plVar23[1] - *plVar23;
      if (lVar15 != 0) {
        if (0x7ffffffffffffffe < uVar10) {
          uVar10 = 0x7fffffffffffffff;
        }
        if (uVar10 < (ulong)((lVar15 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar20 = (**(code **)(*local_f8[0] + 0x10))(local_f8[0],lVar15,0x10);
        if (lVar20 == 0) {
          (**(code **)(*local_f8[0] + 0xb8))();
        }
        local_100 = lVar20 + (lVar15 >> 4) * 0x10;
        lVar15 = *plVar23;
        lVar12 = plVar23[1];
        local_110 = lVar20;
        local_108 = lVar20;
        if (lVar15 != lVar12) {
          do {
            FUN_00bac10c(local_f8,local_108,lVar15);
            lVar15 = lVar15 + 0x250;
            local_108 = local_108 + 0x250;
          } while (lVar12 != lVar15);
        }
      }
      iVar8 = local_90;
      lVar16 = local_110;
      iVar3 = (int)plVar23[7];
      local_d0 = plVar23[8];
      local_d8 = iVar3;
      lVar15 = local_110;
      lVar20 = local_108;
      plVar24 = local_f8[0];
      lVar12 = local_c8;
      if (local_110 != 0) {
        while( true ) {
          local_110 = lVar15;
          local_f8[0] = plVar24;
          if (lVar20 == lVar16) break;
          puVar14 = (undefined8 *)(lVar20 + -0x240);
          lVar20 = lVar20 + -0x250;
          puVar22 = (ulong *)*puVar14;
          if (puVar22 != (ulong *)0x0) {
            puVar1 = puVar22 + 1;
            do {
              iVar7 = (int)*puVar1 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *(int *)puVar1 = iVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 == 0) {
              puVar22[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar15 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar15;
              local_80 = *puVar22;
              FUN_02a44274(lVar15 + 0xd8,&local_80);
              lVar15 = local_110;
              plVar24 = local_f8[0];
            }
          }
        }
        lVar20 = local_100 - lVar15;
        local_108 = lVar16;
        uVar10 = (**(code **)(*plVar24 + 0xc0))(plVar24);
        if ((uVar10 & 1) != 0) {
          lVar12 = tpidr_el0;
          if (*(char *)(lVar12 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar12 + 0x38d488) = 1;
            *(undefined8 *)(lVar12 + 0x38d478) = 0;
            *(undefined8 *)(lVar12 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar12 + 0x38d480)) {
            FUN_02bcc824(plVar24,lVar15,lVar20,0x10);
            lVar12 = local_c8;
            goto joined_r0x00cb5b74;
          }
        }
        (**(code **)(*plVar24 + 0x18))(plVar24,lVar15,lVar20,0x10);
        lVar12 = local_c8;
      }
joined_r0x00cb5b74:
      local_c8 = lVar12;
      if (lVar12 != 0) {
        lVar15 = lVar12;
        lVar20 = local_c0;
        plVar24 = local_b0[0];
        while( true ) {
          local_c8 = lVar15;
          local_b0[0] = plVar24;
          if (lVar20 == lVar12) break;
          puVar14 = (undefined8 *)(lVar20 + -0x240);
          lVar20 = lVar20 + -0x250;
          puVar22 = (ulong *)*puVar14;
          if (puVar22 != (ulong *)0x0) {
            puVar1 = puVar22 + 1;
            do {
              iVar7 = (int)*puVar1 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *(int *)puVar1 = iVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 == 0) {
              puVar22[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar15 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar15;
              local_80 = *puVar22;
              FUN_02a44274(lVar15 + 0xd8,&local_80);
              lVar15 = local_c8;
              plVar24 = local_b0[0];
            }
          }
        }
        lVar20 = local_b8 - lVar15;
        local_c0 = lVar12;
        uVar10 = (**(code **)(*plVar24 + 0xc0))(plVar24);
        if ((uVar10 & 1) != 0) {
          lVar12 = tpidr_el0;
          if (*(char *)(lVar12 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar12 + 0x38d488) = 1;
            *(undefined8 *)(lVar12 + 0x38d478) = 0;
            *(undefined8 *)(lVar12 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar12 + 0x38d480)) {
            FUN_02bcc824(plVar24,lVar15,lVar20,0x10);
            goto LAB_00cb51a4;
          }
        }
        (**(code **)(*plVar24 + 0x18))(plVar24,lVar15,lVar20,0x10);
      }
LAB_00cb51a4:
      if (iVar8 < iVar3) {
        plVar11 = (long *)plVar9[3];
        local_118 = plVar9[6];
        local_128 = plVar9[4];
        local_120 = plVar9[5];
        lVar16 = plVar9[2];
        lVar15 = *plVar9;
        lVar20 = plVar9[1];
        iVar3 = (int)plVar9[7];
        plVar9[1] = 0;
        plVar9[2] = 0;
        lVar17 = plVar9[8];
        lVar12 = lVar20 - lVar15;
        *plVar9 = 0;
        plVar24 = plVar9;
        while( true ) {
          plVar21 = plVar23;
          lVar19 = plVar21[3];
          lVar13 = plVar21[4];
          lVar18 = plVar21[5];
          *(int *)(plVar24 + 6) = (int)plVar21[6];
          plVar24[3] = lVar19;
          plVar24[4] = lVar13;
          plVar24[5] = lVar18;
          *plVar24 = *plVar21;
          plVar24[1] = plVar21[1];
          plVar24[2] = plVar21[2];
          plVar21[1] = 0;
          plVar21[2] = 0;
          *plVar21 = 0;
          *(int *)(plVar24 + 7) = (int)plVar21[7];
          plVar24[8] = plVar21[8];
          if (plVar21 == param_1) break;
          local_160 = 0;
          local_170 = 0;
          local_168 = 0;
          local_148 = local_120;
          lStack_140 = local_118;
          local_158[0] = plVar11;
          if (lVar12 != 0) {
            uVar10 = local_128;
            if (0x7ffffffffffffffe < local_128) {
              uVar10 = 0x7fffffffffffffff;
            }
            if (uVar10 < (ulong)((lVar12 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar19 = (**(code **)(*plVar11 + 0x10))(plVar11,lVar12,0x10);
            if (lVar19 == 0) {
              (**(code **)(*local_158[0] + 0xb8))();
            }
            local_160 = lVar19 + (lVar12 >> 4) * 0x10;
            local_170 = lVar19;
            local_168 = lVar19;
            if (lVar15 != lVar20) {
              lVar19 = lVar15;
              do {
                FUN_00bac10c(local_158,local_168,lVar19);
                lVar19 = lVar19 + 0x250;
                local_168 = local_168 + 0x250;
              } while (lVar20 != lVar19);
            }
          }
          local_1a0[0] = (long *)plVar21[-6];
          local_80 = plVar21[-5];
          local_78 = plVar21[-4];
          lStack_70 = plVar21[-3];
          local_1b8 = 0;
          local_1b0 = 0;
          local_1a8 = 0;
          plVar23 = plVar21 + -9;
          lVar19 = plVar21[-8] - *plVar23;
          local_138 = iVar3;
          local_130 = lVar17;
          local_190 = local_78;
          lStack_188 = lStack_70;
          if (lVar19 != 0) {
            uVar10 = local_80;
            if (0x7ffffffffffffffe < local_80) {
              uVar10 = 0x7fffffffffffffff;
            }
            if (uVar10 < (ulong)((lVar19 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            local_1b8 = (**(code **)(*local_1a0[0] + 0x10))(local_1a0[0],lVar19,0x10);
            if (local_1b8 == 0) {
              (**(code **)(*local_1a0[0] + 0xb8))();
            }
            local_1a8 = local_1b8 + (lVar19 >> 4) * 0x10;
            lVar19 = plVar21[-9];
            lVar13 = plVar21[-8];
            local_1b0 = local_1b8;
            if (lVar19 != lVar13) {
              do {
                FUN_00bac10c(local_1a0,local_1b0,lVar19);
                lVar19 = lVar19 + 0x250;
                local_1b0 = local_1b0 + 0x250;
              } while (lVar13 != lVar19);
            }
          }
          iVar7 = local_138;
          iVar8 = (int)plVar21[-2];
          local_178 = plVar21[-1];
          local_180 = iVar8;
          plVar24 = local_1a0[0];
          lVar13 = local_170;
          lVar19 = local_168;
          if (local_1b8 != 0) {
            while (local_1a0[0] = plVar24, local_1b0 != local_1b8) {
              puVar14 = (undefined8 *)(local_1b0 + -0x240);
              local_1b0 = local_1b0 + -0x250;
              puVar22 = (ulong *)*puVar14;
              if (puVar22 != (ulong *)0x0) {
                puVar1 = puVar22 + 1;
                do {
                  iVar6 = (int)*puVar1 + -1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar5) {
                    *(int *)puVar1 = iVar6;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar6 == 0) {
                  puVar22[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar19 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar19;
                  local_80 = *puVar22;
                  FUN_02a44274(lVar19 + 0xd8,&local_80);
                  plVar24 = local_1a0[0];
                }
              }
            }
            uVar10 = (**(code **)(*plVar24 + 0xc0))(plVar24);
            if ((uVar10 & 1) != 0) {
              lVar19 = tpidr_el0;
              if (*(char *)(lVar19 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar19 + 0x38d488) = 1;
                *(undefined8 *)(lVar19 + 0x38d478) = 0;
                *(undefined8 *)(lVar19 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar19 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar19 + 0x38d480)) {
                FUN_02bcc824(plVar24,local_1b8,local_1a8 - local_1b8,0x10);
                lVar13 = local_170;
                lVar19 = local_168;
                goto joined_r0x00cb5308;
              }
            }
            (**(code **)(*plVar24 + 0x18))(plVar24,local_1b8,local_1a8 - local_1b8,0x10);
            lVar13 = local_170;
            lVar19 = local_168;
          }
joined_r0x00cb5308:
          lVar18 = lVar13;
          local_168 = lVar19;
          plVar24 = local_158[0];
          local_170 = lVar13;
          if (lVar13 != 0) {
            while( true ) {
              local_170 = lVar18;
              local_158[0] = plVar24;
              if (lVar19 == lVar13) break;
              puVar14 = (undefined8 *)(lVar19 + -0x240);
              lVar19 = lVar19 + -0x250;
              puVar22 = (ulong *)*puVar14;
              if (puVar22 != (ulong *)0x0) {
                puVar1 = puVar22 + 1;
                do {
                  iVar6 = (int)*puVar1 + -1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar5) {
                    *(int *)puVar1 = iVar6;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar6 == 0) {
                  puVar22[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar18 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar18;
                  local_80 = *puVar22;
                  FUN_02a44274(lVar18 + 0xd8,&local_80);
                  lVar18 = local_170;
                  plVar24 = local_158[0];
                }
              }
            }
            lVar19 = local_160 - lVar18;
            local_168 = lVar13;
            uVar10 = (**(code **)(*plVar24 + 0xc0))(plVar24);
            if ((uVar10 & 1) != 0) {
              lVar13 = tpidr_el0;
              if (*(char *)(lVar13 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar13 + 0x38d488) = 1;
                *(undefined8 *)(lVar13 + 0x38d478) = 0;
                *(undefined8 *)(lVar13 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar13 + 0x38d480)) {
                FUN_02bcc824(plVar24,lVar18,lVar19,0x10);
                goto joined_r0x00cb5670;
              }
            }
            (**(code **)(*plVar24 + 0x18))(plVar24,lVar18,lVar19,0x10);
          }
joined_r0x00cb5670:
          if (iVar8 <= iVar7) {
            plVar24 = plVar21;
            goto LAB_00cb50a8;
          }
          lVar19 = *plVar21;
          plVar24 = plVar21;
          if (lVar19 != 0) {
            lVar18 = plVar21[1];
            lVar13 = lVar19;
            if (lVar18 != lVar19) {
              do {
                puVar14 = (undefined8 *)(lVar18 + -0x240);
                lVar18 = lVar18 + -0x250;
                puVar22 = (ulong *)*puVar14;
                if (puVar22 != (ulong *)0x0) {
                  puVar1 = puVar22 + 1;
                  do {
                    iVar8 = (int)*puVar1 + -1;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                      *(int *)puVar1 = iVar8;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (iVar8 == 0) {
                    puVar22[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar13 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar13;
                    local_80 = *puVar22;
                    FUN_02a44274(lVar13 + 0xd8,&local_80);
                  }
                }
              } while (lVar18 != lVar19);
              lVar13 = *plVar21;
            }
            lVar18 = plVar21[2];
            plVar2 = (long *)plVar21[3];
            plVar21[1] = lVar19;
            uVar10 = (**(code **)(*plVar2 + 0xc0))(plVar2);
            if ((uVar10 & 1) == 0) {
LAB_00cb5c10:
              (**(code **)(*plVar2 + 0x18))(plVar2,lVar13,lVar18 - lVar13,0x10);
            }
            else {
              lVar19 = tpidr_el0;
              if (*(char *)(lVar19 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar19 + 0x38d488) = 1;
                *(undefined8 *)(lVar19 + 0x38d478) = 0;
                *(undefined8 *)(lVar19 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar19 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (*(int *)(lVar19 + 0x38d480) < 1) goto LAB_00cb5c10;
              FUN_02bcc824(plVar2,lVar13,lVar18 - lVar13,0x10);
            }
            plVar21[1] = 0;
            plVar21[2] = 0;
            *plVar21 = 0;
          }
        }
        plVar24 = param_1;
LAB_00cb50a8:
        lVar12 = *plVar24;
        if (lVar12 != 0) {
          lVar19 = plVar21[1];
          if (lVar19 == lVar12) {
            lVar19 = lVar12;
          }
          else {
            do {
              puVar14 = (undefined8 *)(lVar19 + -0x240);
              lVar19 = lVar19 + -0x250;
              puVar22 = (ulong *)*puVar14;
              if (puVar22 != (ulong *)0x0) {
                puVar1 = puVar22 + 1;
                do {
                  iVar8 = (int)*puVar1 + -1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar5) {
                    *(int *)puVar1 = iVar8;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar8 == 0) {
                  puVar22[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar13 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar13;
                  local_80 = *puVar22;
                  FUN_02a44274(lVar13 + 0xd8,&local_80);
                }
              }
            } while (lVar19 != lVar12);
            lVar19 = *plVar24;
          }
          plVar21[1] = lVar12;
          lVar12 = plVar21[2];
          plVar23 = (long *)plVar24[3];
          uVar10 = (**(code **)(*plVar23 + 0xc0))(plVar23);
          if ((uVar10 & 1) == 0) {
LAB_00cb5e08:
            (**(code **)(*plVar23 + 0x18))(plVar23,lVar19,lVar12 - lVar19,0x10);
          }
          else {
            lVar13 = tpidr_el0;
            if (*(char *)(lVar13 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar13 + 0x38d488) = 1;
              *(undefined8 *)(lVar13 + 0x38d478) = 0;
              *(undefined8 *)(lVar13 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar13 + 0x38d480) < 1) goto LAB_00cb5e08;
            FUN_02bcc824(plVar23,lVar19,lVar12 - lVar19,0x10);
          }
          plVar24[1] = 0;
          plVar24[2] = 0;
          *plVar24 = 0;
        }
        plVar24[3] = (long)plVar11;
        plVar24[4] = local_128;
        plVar24[5] = local_120;
        *plVar24 = lVar15;
        *(undefined4 *)(plVar24 + 6) = (undefined4)local_118;
        plVar21[1] = lVar20;
        plVar21[2] = lVar16;
        *(int *)(plVar24 + 7) = iVar3;
        plVar24[8] = lVar17;
      }
      plVar24 = plVar9 + 9;
      plVar23 = plVar9;
    } while (plVar9 + 9 != param_2);
  }
  return;
}


