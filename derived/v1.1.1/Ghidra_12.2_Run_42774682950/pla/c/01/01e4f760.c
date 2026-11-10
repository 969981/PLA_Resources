/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e4f760; name: FUN_01e4f760
 */


void FUN_01e4f760(undefined8 *param_1,long param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined8 *puVar24;
  long *local_e0;
  long *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  long *local_80 [2];
  undefined8 local_70;
  long *local_68;
  
  puVar9 = PTR_DAT_0437af78;
  puVar8 = PTR_DAT_0437af70;
  lVar23 = *(long *)(param_2 + 0x208);
  if ((lVar23 != 0) && (*(int *)(lVar23 + 0xc) != 0)) {
    piVar1 = (int *)(lVar23 + 0xc);
    iVar12 = *(int *)(lVar23 + 0xc);
    do {
      plVar19 = *(long **)(lVar23 + 0x10);
      if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
        if (((*PTR_DAT_043795d8 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar11 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar11 != 0)) {
            uVar13 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar13;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_043795d8);
        }
        *(undefined **)puVar9 = PTR_DAT_043795e0;
        __cxa_guard_release(puVar8);
      }
      while( true ) {
        if (plVar19 == (long *)0x0) goto LAB_01e4f788;
        if (plVar19 == (long *)puVar9) break;
        plVar19 = (long *)*plVar19;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar12) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar12 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 == '\0') {
          lVar23 = *(long *)(lVar23 + 0x18);
          if (lVar23 != 0) {
            plVar19 = (long *)(lVar23 + -0x50);
            if (*(long *)(lVar23 + 0x1a8) != *(long *)(lVar23 + 0x1a0)) goto LAB_01e4f86c;
            if (((*PTR_DAT_0437a648 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar12 != 0)) {
              FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_0437a648);
            }
            lVar14 = *(long *)PTR_DAT_0437a650;
            *(long *)PTR_DAT_0437a658 = lVar14;
            local_70 = *(undefined8 *)(lVar14 + 0x230);
            FUN_02bea704(local_80,plVar19,&local_70);
            FUN_00ab5ae0(&local_d8,local_80);
            if (local_d8 == (long *)0x0) goto LAB_01e4faec;
            *(undefined4 *)((long)local_d8 + 0xe4) = 0;
            *(undefined4 *)((long)local_d8 + 0xfc) = 6;
            *(undefined2 *)((long)local_d8 + 0xf4) = 0;
            FUN_02bdb08c(local_d8,param_3);
            if (*(int *)((long)local_d8 + 0x7c) == 0) {
              *(undefined4 *)((long)local_d8 + 0x7c) = 1;
              *(undefined1 *)(local_d8 + 0x50) = 0;
            }
            else {
              *(undefined1 *)(local_d8 + 0x50) = 0;
              if (local_d8 == (long *)0x0) goto LAB_01e4faec;
            }
            lVar14 = local_d8[0xb];
            piVar1 = (int *)(lVar14 + 0xc);
            do {
              iVar12 = *piVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = iVar12 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar12 + -1 == 0) {
              *(undefined8 *)(lVar14 + 0x18) = 0;
              (**(code **)(*local_d8 + 0x20))();
            }
LAB_01e4faec:
            local_88 = 0;
            local_d0 = (undefined8 *)0x0;
            local_d8 = (long *)CONCAT44(local_d8._4_4_,0x17);
            local_98 = (undefined8 *)0x0;
            uStack_90 = 0;
            local_a8 = 0;
            uStack_a0 = 0;
            local_b8 = 0;
            local_b0 = (undefined8 *)0x0;
            local_c8 = 0;
            local_c0 = (undefined8 *)0x0;
            lVar14 = *(long *)(lVar23 + 8);
            local_e0 = plVar19;
            if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl("","","",0);
            }
            if (*(long *)(lVar14 + 0x10) == 0) {
              uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
              *(undefined8 *)(lVar14 + 0x10) = uVar13;
            }
            piVar1 = (int *)(lVar14 + 0xc);
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = *piVar1 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            FUN_01e4b6a0(&local_e0,&local_d8);
            puVar2 = local_98;
            if (local_e0 != (long *)0x0) {
              lVar14 = local_e0[0xb];
              piVar1 = (int *)(lVar14 + 0xc);
              do {
                iVar12 = *piVar1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar7) {
                  *piVar1 = iVar12 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar12 + -1 == 0) {
                *(undefined8 *)(lVar14 + 0x18) = 0;
                (**(code **)(*local_e0 + 0x20))();
                puVar2 = local_98;
              }
            }
            local_98 = puVar2;
            if (puVar2 != (undefined8 *)0x0) {
              piVar1 = (int *)(puVar2 + 1);
              do {
                iVar12 = *piVar1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar7) {
                  *piVar1 = iVar12 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar12 + -1 == 0) {
                puVar2[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar14 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar14;
                local_68 = (long *)*puVar2;
                FUN_02a44274(lVar14 + 0xd8,&local_68);
              }
            }
            puVar2 = local_b0;
            if (local_b0 != (undefined8 *)0x0) {
              piVar1 = (int *)(local_b0 + 1);
              do {
                iVar12 = *piVar1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar7) {
                  *piVar1 = iVar12 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar12 + -1 == 0) {
                local_b0[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar14 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar14;
                local_68 = (long *)*puVar2;
                FUN_02a44274(lVar14 + 0xd8,&local_68);
              }
            }
            puVar2 = local_c0;
            if (local_c0 != (undefined8 *)0x0) {
              piVar1 = (int *)(local_c0 + 1);
              do {
                iVar12 = *piVar1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar7) {
                  *piVar1 = iVar12 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar12 + -1 == 0) {
                local_c0[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar14 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar14;
                local_68 = (long *)*puVar2;
                FUN_02a44274(lVar14 + 0xd8,&local_68);
              }
            }
            puVar2 = local_d0;
            if (local_d0 != (undefined8 *)0x0) {
              piVar1 = (int *)(local_d0 + 1);
              do {
                iVar12 = *piVar1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar7) {
                  *piVar1 = iVar12 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar12 + -1 == 0) {
                local_d0[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar14 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar14;
                local_68 = (long *)*puVar2;
                FUN_02a44274(lVar14 + 0xd8,&local_68);
              }
            }
            plVar18 = local_80[0];
            if (local_80[0] != (long *)0x0) {
              plVar4 = local_80[0] + 1;
              do {
                iVar12 = (int)*plVar4 + -1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                if (bVar7) {
                  *(int *)plVar4 = iVar12;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar12 == 0) {
                local_80[0][2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar14 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar14;
                local_d8 = (long *)*plVar18;
                FUN_02a44274(lVar14 + 0xd8,&local_d8);
              }
            }
LAB_01e4f86c:
            FUN_02be88ac(&local_d8,plVar19,0);
            FUN_00ab5ae0(&local_68,&local_d8);
            if (local_68 == (long *)0x0) {
              bVar7 = false;
              plVar18 = local_d8;
            }
            else {
              FUN_02bd68b8(param_1,local_68,param_4,param_5,param_6,param_7,param_8);
              puVar2 = (undefined8 *)(param_2 + 0x230);
              lVar14 = *(long *)(param_2 + 0x220);
              if (lVar14 == *(long *)(param_2 + 0x228)) {
                uVar17 = *(ulong *)(param_2 + 0x238);
                lVar14 = lVar14 - *(long *)(param_2 + 0x218) >> 3;
                if (0x7ffffffffffffffe < uVar17) {
                  uVar17 = 0x7fffffffffffffff;
                }
                uVar3 = lVar14 * -0x5555555555555555 + 1;
                if (uVar17 < uVar3) {
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_length_error();
                }
                lVar15 = *(long *)(param_2 + 0x228) - *(long *)(param_2 + 0x218) >> 3;
                uVar16 = lVar15 * 0x5555555555555556;
                if (uVar3 <= uVar16) {
                  uVar3 = uVar16;
                }
                if ((ulong)(lVar15 * -0x5555555555555555) < uVar17 >> 1) {
                  uVar17 = uVar3;
                }
                if (uVar17 == 0) {
                  lVar15 = 0;
                }
                else {
                  lVar15 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar17 * 0x18,8);
                  if (lVar15 == 0) {
                    (**(code **)(*(long *)*puVar2 + 0xb8))();
                  }
                }
                lVar21 = lVar15 + lVar14 * 8;
                FUN_01e50500(puVar2,lVar21,param_1);
                lVar14 = lVar21 + 0x18;
                puVar24 = *(undefined8 **)(param_2 + 0x218);
                puVar20 = *(undefined8 **)(param_2 + 0x220);
                if (puVar20 == puVar24) {
                  puVar20 = puVar24;
                }
                else {
                  do {
                    lVar21 = lVar21 + -0x18;
                    puVar20 = puVar20 + -3;
                    FUN_01e50500(puVar2,lVar21,puVar20);
                  } while (puVar24 != puVar20);
                  puVar24 = *(undefined8 **)(param_2 + 0x218);
                  puVar20 = *(undefined8 **)(param_2 + 0x220);
                }
                *(long *)(param_2 + 0x218) = lVar21;
                lVar21 = *(long *)(param_2 + 0x228);
                *(long *)(param_2 + 0x220) = lVar14;
                *(ulong *)(param_2 + 0x228) = lVar15 + uVar17 * 0x18;
                puVar10 = PTR_DAT_043794a8;
                puVar9 = PTR_DAT_043794a0;
                puVar8 = PTR_DAT_04379498;
                while (puVar20 != puVar24) {
                  puVar20 = puVar20 + -3;
                  puVar22 = (undefined8 *)*puVar20;
                  if (puVar22 != (undefined8 *)0x0) {
                    piVar1 = (int *)(puVar22 + 1);
                    do {
                      iVar12 = *piVar1;
                      cVar6 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar7) {
                        *piVar1 = iVar12 + -1;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    if (iVar12 + -1 == 0) {
                      puVar22[2] = 0;
                      if (((*puVar8 & 1) == 0) &&
                         (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,puVar9,&PTR_LOOP_0411a000);
                        __cxa_guard_release(puVar8);
                      }
                      lVar14 = *(long *)puVar9;
                      *(long *)puVar10 = lVar14;
                      local_80[0] = (long *)*puVar22;
                      FUN_02a44274(lVar14 + 0xd8,local_80);
                    }
                  }
                }
                if (puVar24 != (undefined8 *)0x0) {
                  plVar18 = (long *)*puVar2;
                  lVar21 = lVar21 - (long)puVar24;
                  uVar17 = (**(code **)(*plVar18 + 0xc0))(plVar18);
                  if ((uVar17 & 1) != 0) {
                    lVar14 = tpidr_el0;
                    if (*(char *)(lVar14 + 0x38d488) == '\0') {
                      *(undefined1 *)(lVar14 + 0x38d488) = 1;
                      *(undefined8 *)(lVar14 + 0x38d478) = 0;
                      *(undefined8 *)(lVar14 + 0x38d480) = 0;
                      __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
                    }
                    if (0 < *(int *)(lVar14 + 0x38d480)) {
                      FUN_02bcc824(plVar18,puVar24,lVar21,8);
                      goto joined_r0x01e4fdfc;
                    }
                  }
                  (**(code **)(*plVar18 + 0x18))(plVar18,puVar24,lVar21,8);
                }
              }
              else {
                FUN_01e50500(puVar2,lVar14,param_1);
                *(long *)(param_2 + 0x220) = *(long *)(param_2 + 0x220) + 0x18;
              }
joined_r0x01e4fdfc:
              if (local_68 != (long *)0x0) {
                lVar14 = local_68[0xb];
                piVar1 = (int *)(lVar14 + 0xc);
                do {
                  iVar12 = *piVar1;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar7) {
                    *piVar1 = iVar12 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (iVar12 == 1) {
                  *(undefined8 *)(lVar14 + 0x18) = 0;
                  (**(code **)(*local_68 + 0x20))();
                }
              }
              bVar7 = true;
              plVar18 = local_d8;
            }
            local_d8 = plVar18;
            if (plVar18 != (long *)0x0) {
              plVar4 = plVar18 + 1;
              do {
                iVar12 = (int)*plVar4 + -1;
                cVar6 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                if (bVar5) {
                  *(int *)plVar4 = iVar12;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar12 == 0) {
                plVar18[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar14 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar14;
                local_80[0] = (long *)*plVar18;
                FUN_02a44274(lVar14 + 0xd8,local_80);
              }
            }
            lVar23 = *(long *)(lVar23 + 8);
            piVar1 = (int *)(lVar23 + 0xc);
            do {
              iVar12 = *piVar1;
              cVar6 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar12 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar12 + -1 == 0) {
              *(undefined8 *)(lVar23 + 0x18) = 0;
              (**(code **)(*plVar19 + 0x20))(plVar19);
            }
            if (bVar7) {
              return;
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar12 = iVar11;
    } while (iVar11 != 0);
  }
LAB_01e4f788:
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}


