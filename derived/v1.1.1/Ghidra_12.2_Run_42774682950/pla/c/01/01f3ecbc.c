/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f3ecbc; name: FUN_01f3ecbc
 */


void FUN_01f3ecbc(long param_1,ulong param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  int local_bc;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  undefined8 *local_98 [2];
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined1 auStack_6c [4];
  undefined8 local_68;
  
  puVar9 = PTR_DAT_043796e8;
  puVar8 = PTR_DAT_043796e0;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  local_80 = DAT_03a7d1f8;
  uStack_78 = DAT_03a7d200;
  local_70 = DAT_03a7d208;
  lVar16 = *(long *)(param_1 + 0x70);
  if ((lVar16 != 0) && (*(int *)(lVar16 + 0xc) != 0)) {
    piVar1 = (int *)(lVar16 + 0xc);
    iVar12 = *(int *)(lVar16 + 0xc);
    do {
      plVar18 = *(long **)(lVar16 + 0x10);
      if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
        if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
          uVar13 = FUN_0087f8f0();
          *(undefined8 *)puVar7 = uVar13;
          __cxa_guard_release(puVar6);
        }
        *(undefined **)puVar9 = puVar7;
        __cxa_guard_release(puVar8);
      }
      while( true ) {
        if (plVar18 == (long *)0x0) {
          return;
        }
        if (plVar18 == (long *)puVar9) break;
        plVar18 = (long *)*plVar18;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar12) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar16 = *(long *)(lVar16 + 0x18);
          if (lVar16 == 0) {
            return;
          }
          plVar18 = (long *)(lVar16 + -0x50);
          FUN_0199ce80(local_98,plVar18);
          if (local_98[0] == (undefined8 *)0x0) {
            local_88 = (long *)0x0;
            pbVar4 = PTR_DAT_043795d8;
            pbVar5 = PTR_DAT_04379e88;
          }
          else {
            FUN_0095a2ac(&local_88);
            puVar17 = local_98[0];
            pbVar4 = PTR_DAT_043795d8;
            pbVar5 = PTR_DAT_04379e88;
            if (local_98[0] != (undefined8 *)0x0) {
              piVar1 = (int *)(local_98[0] + 1);
              do {
                iVar12 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar12 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              pbVar4 = PTR_DAT_043795d8;
              pbVar5 = PTR_DAT_04379e88;
              if (iVar12 + -1 == 0) {
                local_98[0][2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar14 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar14;
                local_68 = *puVar17;
                FUN_02a44274(lVar14 + 0xd8,&local_68);
                pbVar4 = PTR_DAT_043795d8;
                pbVar5 = PTR_DAT_04379e88;
              }
            }
          }
          PTR_DAT_043795d8 = pbVar4;
          PTR_DAT_04379e88 = pbVar5;
          if (local_88 != (long *)0x0) {
            puVar17 = &local_80;
            do {
              FUN_026c06ec(local_98,local_88,*(undefined4 *)puVar17);
              if (local_98[0] == (undefined8 *)0x0) {
                local_a0 = (long *)0x0;
              }
              else {
                FUN_00959eac(&local_a0);
                puVar10 = local_98[0];
                if (local_98[0] != (undefined8 *)0x0) {
                  piVar1 = (int *)(local_98[0] + 1);
                  do {
                    iVar12 = *piVar1;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                      *piVar1 = iVar12 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (iVar12 + -1 == 0) {
                    local_98[0][2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar14 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar14;
                    local_68 = *puVar10;
                    FUN_02a44274(lVar14 + 0xd8,&local_68);
                  }
                }
                if (local_a0 != (long *)0x0) {
                  FUN_01a73640(local_98);
                  puVar10 = local_98[0];
                  if (local_98[0] != (undefined8 *)0x0) {
                    if (*(int *)((long)local_98[0] + 0xc) != 0) {
                      piVar1 = (int *)((long)local_98[0] + 0xc);
                      local_bc = *(int *)((long)local_98[0] + 0xc);
                      do {
                        plVar15 = (long *)puVar10[2];
                        if (((*pbVar5 & 1) == 0) &&
                           (iVar12 = __cxa_guard_acquire(pbVar5), iVar12 != 0)) {
                          if (((*pbVar4 & 1) == 0) &&
                             (iVar12 = __cxa_guard_acquire(pbVar4), iVar12 != 0)) {
                            if (((*puVar6 & 1) == 0) &&
                               (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
                              uVar13 = FUN_0087f8f0();
                              *(undefined8 *)puVar7 = uVar13;
                              __cxa_guard_release(puVar6);
                            }
                            *(undefined **)PTR_DAT_043795e0 = puVar7;
                            __cxa_guard_release(pbVar4);
                          }
                          *(undefined **)PTR_DAT_04379e90 = PTR_DAT_043795e0;
                          __cxa_guard_release(pbVar5);
                        }
                        while( true ) {
                          if (plVar15 == (long *)0x0) goto LAB_01f3f188;
                          if (plVar15 == (long *)PTR_DAT_04379e90) break;
                          plVar15 = (long *)*plVar15;
                        }
                        iVar12 = *piVar1;
                        if (iVar12 == local_bc) {
                          cVar2 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                          if (bVar3) {
                            *piVar1 = local_bc + 1;
                            cVar2 = ExclusiveMonitorsStatus();
                          }
                          if (cVar2 == '\0') {
                            lVar14 = puVar10[3];
                            local_b0 = (long *)0x0;
                            if (lVar14 != 0) {
                              local_b0 = (long *)(lVar14 + -0x50);
                            }
                            goto LAB_01f3f1a8;
                          }
                        }
                        else {
                          ClearExclusiveLocal();
                        }
                        local_bc = iVar12;
                      } while (iVar12 != 0);
                    }
LAB_01f3f188:
                    local_b0 = (long *)0x0;
LAB_01f3f1a8:
                    puVar10 = local_98[0];
                    if (local_98[0] != (undefined8 *)0x0) {
                      piVar1 = (int *)(local_98[0] + 1);
                      do {
                        iVar12 = *piVar1;
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar3) {
                          *piVar1 = iVar12 + -1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                      if (iVar12 + -1 == 0) {
                        local_98[0][2] = 0;
                        if (((*PTR_DAT_04379498 & 1) == 0) &&
                           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                          __cxa_guard_release(PTR_DAT_04379498);
                        }
                        lVar14 = *(long *)PTR_DAT_043794a0;
                        *(long *)PTR_DAT_043794a8 = lVar14;
                        local_68 = *puVar10;
                        FUN_02a44274(lVar14 + 0xd8,&local_68);
                      }
                    }
                    if (local_b0 != (long *)0x0) {
                      FUN_01a9a6cc(local_98,local_b0);
                      if (local_98[0] == (undefined8 *)0x0) {
                        local_a8 = (long *)0x0;
                      }
                      else {
                        FUN_01d8f2f0(&local_a8);
                        puVar10 = local_98[0];
                        if (local_98[0] != (undefined8 *)0x0) {
                          piVar1 = (int *)(local_98[0] + 1);
                          do {
                            iVar12 = *piVar1;
                            cVar2 = '\x01';
                            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                            if (bVar3) {
                              *piVar1 = iVar12 + -1;
                              cVar2 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar2 != '\0');
                          if (iVar12 + -1 == 0) {
                            local_98[0][2] = 0;
                            if (((*PTR_DAT_04379498 & 1) == 0) &&
                               (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                              __cxa_guard_release(PTR_DAT_04379498);
                            }
                            lVar14 = *(long *)PTR_DAT_043794a0;
                            *(long *)PTR_DAT_043794a8 = lVar14;
                            local_68 = *puVar10;
                            FUN_02a44274(lVar14 + 0xd8,&local_68);
                          }
                        }
                        if (local_a8 != (long *)0x0) {
                          if ((param_2 & 1) == 0) {
                            FUN_01f45268(local_a8,*(undefined8 *)(param_1 + 0x158));
                          }
                          else {
                            FUN_01a7d054();
                          }
                          if (local_a8 != (long *)0x0) {
                            lVar14 = local_a8[0xb];
                            piVar1 = (int *)(lVar14 + 0xc);
                            do {
                              iVar12 = *piVar1;
                              cVar2 = '\x01';
                              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                              if (bVar3) {
                                *piVar1 = iVar12 + -1;
                                cVar2 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar2 != '\0');
                            if (iVar12 + -1 == 0) {
                              *(undefined8 *)(lVar14 + 0x18) = 0;
                              (**(code **)(*local_a8 + 0x20))();
                            }
                          }
                        }
                      }
                      lVar14 = local_b0[0xb];
                      piVar1 = (int *)(lVar14 + 0xc);
                      do {
                        iVar12 = *piVar1;
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar3) {
                          *piVar1 = iVar12 + -1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                      if (iVar12 + -1 == 0) {
                        *(undefined8 *)(lVar14 + 0x18) = 0;
                        (**(code **)(*local_b0 + 0x20))();
                      }
                    }
                  }
                  if (local_a0 != (long *)0x0) {
                    lVar14 = local_a0[0xb];
                    piVar1 = (int *)(lVar14 + 0xc);
                    do {
                      iVar12 = *piVar1;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar3) {
                        *piVar1 = iVar12 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (iVar12 + -1 == 0) {
                      *(undefined8 *)(lVar14 + 0x18) = 0;
                      (**(code **)(*local_a0 + 0x20))();
                    }
                  }
                }
              }
              puVar17 = (undefined8 *)((long)puVar17 + 4);
            } while (puVar17 != (undefined8 *)auStack_6c);
            if (local_88 != (long *)0x0) {
              lVar14 = local_88[0xb];
              piVar1 = (int *)(lVar14 + 0xc);
              do {
                iVar12 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar12 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar12 + -1 == 0) {
                *(undefined8 *)(lVar14 + 0x18) = 0;
                (**(code **)(*local_88 + 0x20))();
              }
            }
          }
          lVar16 = *(long *)(lVar16 + 8);
          piVar1 = (int *)(lVar16 + 0xc);
          do {
            iVar12 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar12 + -1 == 0) {
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*plVar18 + 0x20))(plVar18);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      param_2 = param_2 & 0xffffffff;
      iVar12 = iVar11;
    } while (iVar11 != 0);
  }
  return;
}


