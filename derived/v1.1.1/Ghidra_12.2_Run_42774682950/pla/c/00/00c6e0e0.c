/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00c6e0e0; name: FUN_00c6e0e0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00c6e0e0(long *param_1,long *param_2)

{
  ulong *puVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  long *plVar23;
  ulong *puVar24;
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
  
  FUN_00c68af0(param_1,param_1 + 9,param_1 + 0x12);
  if (param_1 + 0x1b != param_2) {
    plVar18 = param_1 + 0x1b;
    plVar23 = param_1 + 0x12;
    do {
      plVar10 = plVar18;
      local_b0[0] = (long *)plVar10[3];
      local_c8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      uVar11 = plVar10[4];
      local_a0 = plVar10[5];
      lStack_98 = plVar10[6];
      lVar19 = plVar10[1] - *plVar10;
      if (lVar19 != 0) {
        if (0x7ffffffffffffffe < uVar11) {
          uVar11 = 0x7fffffffffffffff;
        }
        if (uVar11 < (ulong)((lVar19 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar20 = (**(code **)(*local_b0[0] + 0x10))(local_b0[0],lVar19,0x10);
        if (lVar20 == 0) {
          (**(code **)(*local_b0[0] + 0xb8))();
        }
        local_b8 = lVar20 + (lVar19 >> 4) * 0x10;
        lVar13 = plVar10[1];
        local_c0 = lVar20;
        local_c8 = lVar20;
        for (lVar19 = *plVar10; lVar19 != lVar13; lVar19 = lVar19 + 0x250) {
          FUN_00bac10c(local_b0,local_c0,lVar19);
          local_c0 = local_c0 + 0x250;
        }
      }
      local_90 = (int)plVar10[7];
      local_88 = plVar10[8];
      local_f8[0] = (long *)plVar23[3];
      uVar11 = plVar23[4];
      local_100 = 0;
      local_110 = 0;
      local_108 = 0;
      local_e8 = plVar23[5];
      lStack_e0 = plVar23[6];
      lVar19 = plVar23[1] - *plVar23;
      if (lVar19 != 0) {
        if (0x7ffffffffffffffe < uVar11) {
          uVar11 = 0x7fffffffffffffff;
        }
        if (uVar11 < (ulong)((lVar19 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar20 = (**(code **)(*local_f8[0] + 0x10))(local_f8[0],lVar19,0x10);
        if (lVar20 == 0) {
          (**(code **)(*local_f8[0] + 0xb8))();
        }
        local_100 = lVar20 + (lVar19 >> 4) * 0x10;
        lVar19 = *plVar23;
        lVar13 = plVar23[1];
        local_110 = lVar20;
        local_108 = lVar20;
        if (lVar19 != lVar13) {
          do {
            FUN_00bac10c(local_f8,local_108,lVar19);
            lVar19 = lVar19 + 0x250;
            local_108 = local_108 + 0x250;
          } while (lVar13 != lVar19);
        }
      }
      iVar8 = local_90;
      lVar20 = local_110;
      iVar3 = (int)plVar23[7];
      local_d0 = plVar23[8];
      local_d8 = iVar3;
      lVar19 = local_c8;
      if (local_110 != 0) {
        if (local_108 != local_110) {
          puVar24 = *(ulong **)(local_108 + -0x240);
          lVar19 = local_108 + -0x250;
          if (puVar24 == (ulong *)0x0) goto LAB_00c6e9d4;
          puVar1 = puVar24 + 1;
          do {
            iVar7 = (int)*puVar1 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *(int *)puVar1 = iVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          do {
            if (iVar7 == 0) {
              puVar24[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar13 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar13;
              local_80 = *puVar24;
              FUN_02a44274(lVar13 + 0xd8,&local_80);
            }
LAB_00c6e9d4:
            do {
              if (lVar19 == lVar20) goto LAB_00c6ea0c;
              puVar9 = (undefined8 *)(lVar19 + -0x240);
              lVar19 = lVar19 + -0x250;
              puVar24 = (ulong *)*puVar9;
            } while (puVar24 == (ulong *)0x0);
            puVar1 = puVar24 + 1;
            do {
              iVar7 = (int)*puVar1 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *(int *)puVar1 = iVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          } while( true );
        }
LAB_00c6ea0c:
        plVar18 = local_f8[0];
        lVar19 = local_110;
        lVar13 = local_100 - local_110;
        local_108 = lVar20;
        uVar11 = (**(code **)(*local_f8[0] + 0xc0))(local_f8[0]);
        if ((uVar11 & 1) != 0) {
          lVar20 = tpidr_el0;
          if (*(char *)(lVar20 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar20 + 0x38d488) = 1;
            *(undefined8 *)(lVar20 + 0x38d478) = 0;
            *(undefined8 *)(lVar20 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar20 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar20 + 0x38d480)) {
            FUN_02bcc824(plVar18,lVar19,lVar13,0x10);
            lVar19 = local_c8;
            goto joined_r0x00c6ec08;
          }
        }
        (**(code **)(*plVar18 + 0x18))(plVar18,lVar19,lVar13,0x10);
        lVar19 = local_c8;
      }
joined_r0x00c6ec08:
      local_c8 = lVar19;
      if (lVar19 != 0) {
        if (local_c0 != lVar19) {
          lVar20 = local_c0 + -0x250;
          puVar24 = *(ulong **)(local_c0 + -0x240);
          if (puVar24 == (ulong *)0x0) goto LAB_00c6eb0c;
          puVar1 = puVar24 + 1;
          do {
            iVar7 = (int)*puVar1 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *(int *)puVar1 = iVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          do {
            if (iVar7 == 0) {
              puVar24[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar13 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar13;
              local_80 = *puVar24;
              FUN_02a44274(lVar13 + 0xd8,&local_80);
            }
LAB_00c6eb0c:
            do {
              if (lVar20 == lVar19) goto LAB_00c6eb44;
              puVar9 = (undefined8 *)(lVar20 + -0x240);
              lVar20 = lVar20 + -0x250;
              puVar24 = (ulong *)*puVar9;
            } while (puVar24 == (ulong *)0x0);
            puVar1 = puVar24 + 1;
            do {
              iVar7 = (int)*puVar1 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *(int *)puVar1 = iVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          } while( true );
        }
LAB_00c6eb44:
        plVar18 = local_b0[0];
        lVar20 = local_c8;
        lVar13 = local_b8 - local_c8;
        local_c0 = lVar19;
        uVar11 = (**(code **)(*local_b0[0] + 0xc0))(local_b0[0]);
        if ((uVar11 & 1) != 0) {
          lVar19 = tpidr_el0;
          if (*(char *)(lVar19 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar19 + 0x38d488) = 1;
            *(undefined8 *)(lVar19 + 0x38d478) = 0;
            *(undefined8 *)(lVar19 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar19 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar19 + 0x38d480)) {
            FUN_02bcc824(plVar18,lVar20,lVar13,0x10);
            goto joined_r0x00c6ebc8;
          }
        }
        (**(code **)(*plVar18 + 0x18))(plVar18,lVar20,lVar13,0x10);
      }
joined_r0x00c6ebc8:
      if (iVar8 < iVar3) {
        local_118 = plVar10[6];
        plVar12 = (long *)plVar10[3];
        local_128 = plVar10[4];
        local_120 = plVar10[5];
        lVar14 = plVar10[2];
        lVar19 = *plVar10;
        lVar20 = plVar10[1];
        iVar3 = (int)plVar10[7];
        plVar10[1] = 0;
        plVar10[2] = 0;
        lVar15 = plVar10[8];
        lVar13 = lVar20 - lVar19;
        *plVar10 = 0;
        plVar18 = plVar10;
        while( true ) {
          plVar21 = plVar23;
          lVar17 = plVar21[3];
          lVar22 = plVar21[4];
          lVar16 = plVar21[5];
          *(int *)(plVar18 + 6) = (int)plVar21[6];
          plVar18[4] = lVar22;
          plVar18[5] = lVar16;
          plVar18[3] = lVar17;
          *plVar18 = *plVar21;
          plVar18[1] = plVar21[1];
          plVar18[2] = plVar21[2];
          plVar21[1] = 0;
          plVar21[2] = 0;
          *plVar21 = 0;
          *(int *)(plVar18 + 7) = (int)plVar21[7];
          plVar18[8] = plVar21[8];
          if (plVar21 == param_1) break;
          local_160 = 0;
          local_170 = 0;
          local_168 = 0;
          local_148 = local_120;
          lStack_140 = local_118;
          local_158[0] = plVar12;
          if (lVar13 != 0) {
            uVar11 = local_128;
            if (0x7ffffffffffffffe < local_128) {
              uVar11 = 0x7fffffffffffffff;
            }
            if (uVar11 < (ulong)((lVar13 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar17 = (**(code **)(*plVar12 + 0x10))(plVar12,lVar13,0x10);
            if (lVar17 == 0) {
              (**(code **)(*local_158[0] + 0xb8))();
            }
            local_160 = lVar17 + (lVar13 >> 4) * 0x10;
            local_170 = lVar17;
            local_168 = lVar17;
            if (lVar19 != lVar20) {
              lVar17 = lVar19;
              do {
                FUN_00bac10c(local_158,local_168,lVar17);
                lVar17 = lVar17 + 0x250;
                local_168 = local_168 + 0x250;
              } while (lVar20 != lVar17);
            }
          }
          local_1a0[0] = (long *)plVar21[-6];
          local_80 = plVar21[-5];
          local_78 = plVar21[-4];
          lStack_70 = plVar21[-3];
          local_1b8 = 0;
          local_1a8 = 0;
          plVar23 = plVar21 + -9;
          lVar17 = plVar21[-8] - *plVar23;
          local_138 = iVar3;
          local_130 = lVar15;
          local_190 = local_78;
          lStack_188 = lStack_70;
          if (lVar17 == 0) {
            local_1b0 = 0;
          }
          else {
            uVar11 = local_80;
            if (0x7ffffffffffffffe < local_80) {
              uVar11 = 0x7fffffffffffffff;
            }
            if (uVar11 < (ulong)((lVar17 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            local_1b8 = (**(code **)(*local_1a0[0] + 0x10))(local_1a0[0],lVar17,0x10);
            if (local_1b8 == 0) {
              (**(code **)(*local_1a0[0] + 0xb8))();
            }
            local_1a8 = local_1b8 + (lVar17 >> 4) * 0x10;
            lVar17 = plVar21[-9];
            lVar22 = plVar21[-8];
            local_1b0 = local_1b8;
            if (lVar17 != lVar22) {
              do {
                FUN_00bac10c(local_1a0,local_1b0,lVar17);
                lVar17 = lVar17 + 0x250;
                local_1b0 = local_1b0 + 0x250;
              } while (lVar22 != lVar17);
            }
          }
          iVar7 = local_138;
          iVar8 = (int)plVar21[-2];
          local_178 = plVar21[-1];
          local_180 = iVar8;
          lVar17 = local_170;
          if (local_1b8 != 0) {
            if (local_1b0 != local_1b8) {
              puVar24 = *(ulong **)(local_1b0 + -0x240);
              local_1b0 = local_1b0 + -0x250;
              if (puVar24 == (ulong *)0x0) goto LAB_00c6e584;
              puVar1 = puVar24 + 1;
              do {
                iVar6 = (int)*puVar1 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *(int *)puVar1 = iVar6;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              do {
                if (iVar6 == 0) {
                  puVar24[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar17 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar17;
                  local_80 = *puVar24;
                  FUN_02a44274(lVar17 + 0xd8,&local_80);
                }
LAB_00c6e584:
                do {
                  if (local_1b0 == local_1b8) goto LAB_00c6e5c0;
                  puVar9 = (undefined8 *)(local_1b0 + -0x240);
                  local_1b0 = local_1b0 + -0x250;
                  puVar24 = (ulong *)*puVar9;
                } while (puVar24 == (ulong *)0x0);
                puVar1 = puVar24 + 1;
                do {
                  iVar6 = (int)*puVar1 + -1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar5) {
                    *(int *)puVar1 = iVar6;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              } while( true );
            }
LAB_00c6e5c0:
            plVar18 = local_1a0[0];
            uVar11 = (**(code **)(*local_1a0[0] + 0xc0))(local_1a0[0]);
            if ((uVar11 & 1) != 0) {
              lVar17 = tpidr_el0;
              if (*(char *)(lVar17 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar17 + 0x38d488) = 1;
                *(undefined8 *)(lVar17 + 0x38d478) = 0;
                *(undefined8 *)(lVar17 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar17 + 0x38d480)) {
                FUN_02bcc824(plVar18,local_1b8,local_1a8 - local_1b8,0x10);
                lVar17 = local_170;
                goto joined_r0x00c6e96c;
              }
            }
            (**(code **)(*plVar18 + 0x18))(plVar18,local_1b8,local_1a8 - local_1b8,0x10);
            lVar17 = local_170;
          }
joined_r0x00c6e96c:
          local_170 = lVar17;
          if (lVar17 != 0) {
            if (local_168 != lVar17) {
              lVar22 = local_168 + -0x250;
              puVar24 = *(ulong **)(local_168 + -0x240);
              if (puVar24 == (ulong *)0x0) goto LAB_00c6e6c4;
              puVar1 = puVar24 + 1;
              do {
                iVar6 = (int)*puVar1 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *(int *)puVar1 = iVar6;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              do {
                if (iVar6 == 0) {
                  puVar24[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar16 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar16;
                  local_80 = *puVar24;
                  FUN_02a44274(lVar16 + 0xd8,&local_80);
                }
LAB_00c6e6c4:
                do {
                  if (lVar22 == lVar17) goto LAB_00c6e700;
                  puVar9 = (undefined8 *)(lVar22 + -0x240);
                  lVar22 = lVar22 + -0x250;
                  puVar24 = (ulong *)*puVar9;
                } while (puVar24 == (ulong *)0x0);
                puVar1 = puVar24 + 1;
                do {
                  iVar6 = (int)*puVar1 + -1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar5) {
                    *(int *)puVar1 = iVar6;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              } while( true );
            }
LAB_00c6e700:
            plVar18 = local_158[0];
            lVar22 = local_170;
            lVar16 = local_160 - local_170;
            local_168 = lVar17;
            uVar11 = (**(code **)(*local_158[0] + 0xc0))(local_158[0]);
            if ((uVar11 & 1) != 0) {
              lVar17 = tpidr_el0;
              if (*(char *)(lVar17 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar17 + 0x38d488) = 1;
                *(undefined8 *)(lVar17 + 0x38d478) = 0;
                *(undefined8 *)(lVar17 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar17 + 0x38d480)) {
                FUN_02bcc824(plVar18,lVar22,lVar16,0x10);
                goto joined_r0x00c6e788;
              }
            }
            (**(code **)(*plVar18 + 0x18))(plVar18,lVar22,lVar16,0x10);
          }
joined_r0x00c6e788:
          if (iVar8 <= iVar7) {
            lVar13 = *plVar21;
            plVar18 = plVar21;
            goto joined_r0x00c6e17c;
          }
          lVar17 = *plVar21;
          plVar18 = plVar21;
          if (lVar17 != 0) {
            lVar16 = plVar21[1];
            lVar22 = lVar17;
            if (lVar16 != lVar17) {
              lVar22 = lVar16 + -0x250;
              puVar24 = *(ulong **)(lVar16 + -0x240);
              if (puVar24 == (ulong *)0x0) goto LAB_00c6e198;
              puVar1 = puVar24 + 1;
              do {
                iVar8 = (int)*puVar1 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *(int *)puVar1 = iVar8;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              do {
                if (iVar8 == 0) {
                  puVar24[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar16 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar16;
                  local_80 = *puVar24;
                  FUN_02a44274(lVar16 + 0xd8,&local_80);
                }
LAB_00c6e198:
                do {
                  if (lVar22 == lVar17) {
                    lVar22 = *plVar21;
                    goto LAB_00c6ed04;
                  }
                  puVar9 = (undefined8 *)(lVar22 + -0x240);
                  lVar22 = lVar22 + -0x250;
                  puVar24 = (ulong *)*puVar9;
                } while (puVar24 == (ulong *)0x0);
                puVar1 = puVar24 + 1;
                do {
                  iVar8 = (int)*puVar1 + -1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar5) {
                    *(int *)puVar1 = iVar8;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              } while( true );
            }
LAB_00c6ed04:
            plVar21[1] = lVar17;
            lVar17 = plVar21[2];
            plVar2 = (long *)plVar21[3];
            uVar11 = (**(code **)(*plVar2 + 0xc0))(plVar2);
            if ((uVar11 & 1) == 0) {
LAB_00c6ed68:
              (**(code **)(*plVar2 + 0x18))(plVar2,lVar22,lVar17 - lVar22,0x10);
            }
            else {
              lVar16 = tpidr_el0;
              if (*(char *)(lVar16 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar16 + 0x38d488) = 1;
                *(undefined8 *)(lVar16 + 0x38d478) = 0;
                *(undefined8 *)(lVar16 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (*(int *)(lVar16 + 0x38d480) < 1) goto LAB_00c6ed68;
              FUN_02bcc824(plVar2,lVar22,lVar17 - lVar22,0x10);
            }
            plVar21[1] = 0;
            plVar21[2] = 0;
            *plVar21 = 0;
          }
        }
        lVar13 = *param_1;
        plVar18 = param_1;
joined_r0x00c6e17c:
        if (lVar13 != 0) {
          lVar22 = plVar21[1];
          lVar17 = lVar13;
          if (lVar22 != lVar13) {
            lVar17 = lVar22 + -0x250;
            puVar24 = *(ulong **)(lVar22 + -0x240);
            if (puVar24 == (ulong *)0x0) goto LAB_00c6f104;
            puVar1 = puVar24 + 1;
            do {
              iVar8 = (int)*puVar1 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *(int *)puVar1 = iVar8;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            do {
              if (iVar8 == 0) {
                puVar24[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar22 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar22;
                local_80 = *puVar24;
                FUN_02a44274(lVar22 + 0xd8,&local_80);
              }
LAB_00c6f104:
              do {
                if (lVar17 == lVar13) {
                  lVar17 = *plVar18;
                  goto LAB_00c6f13c;
                }
                puVar9 = (undefined8 *)(lVar17 + -0x240);
                lVar17 = lVar17 + -0x250;
                puVar24 = (ulong *)*puVar9;
              } while (puVar24 == (ulong *)0x0);
              puVar1 = puVar24 + 1;
              do {
                iVar8 = (int)*puVar1 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *(int *)puVar1 = iVar8;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            } while( true );
          }
LAB_00c6f13c:
          plVar21[1] = lVar13;
          lVar13 = plVar21[2];
          plVar23 = (long *)plVar18[3];
          uVar11 = (**(code **)(*plVar23 + 0xc0))(plVar23);
          if ((uVar11 & 1) == 0) {
LAB_00c6f1a4:
            (**(code **)(*plVar23 + 0x18))(plVar23,lVar17,lVar13 - lVar17,0x10);
          }
          else {
            lVar22 = tpidr_el0;
            if (*(char *)(lVar22 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar22 + 0x38d488) = 1;
              *(undefined8 *)(lVar22 + 0x38d478) = 0;
              *(undefined8 *)(lVar22 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar22 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar22 + 0x38d480) < 1) goto LAB_00c6f1a4;
            FUN_02bcc824(plVar23,lVar17,lVar13 - lVar17,0x10);
          }
          plVar18[1] = 0;
          plVar18[2] = 0;
          *plVar18 = 0;
        }
        plVar18[3] = (long)plVar12;
        plVar18[4] = local_128;
        plVar18[5] = local_120;
        *plVar18 = lVar19;
        *(undefined4 *)(plVar18 + 6) = (undefined4)local_118;
        plVar21[1] = lVar20;
        plVar21[2] = lVar14;
        *(int *)(plVar18 + 7) = iVar3;
        plVar18[8] = lVar15;
      }
      plVar18 = plVar10 + 9;
      plVar23 = plVar10;
    } while (plVar10 + 9 != param_2);
  }
  return;
}


