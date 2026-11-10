/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009925a4; name: FUN_009925a4
 */


/* WARNING: Removing unreachable block (ram,0x009929ac) */
/* WARNING: Removing unreachable block (ram,0x00992690) */
/* WARNING: Removing unreachable block (ram,0x00992698) */
/* WARNING: Removing unreachable block (ram,0x009926a0) */
/* WARNING: Removing unreachable block (ram,0x00992d68) */

void FUN_009925a4(long param_1)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  byte *pbVar12;
  ulong uVar13;
  long *plVar14;
  undefined *puVar15;
  ulong uVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  undefined8 *puVar21;
  long *plVar22;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  long *local_98;
  long *local_90;
  undefined8 uStack_88;
  long *local_80;
  long *local_78;
  undefined8 uStack_70;
  long *local_68;
  
  pbVar17 = *(byte **)(param_1 + 0x138);
  pbVar20 = *(byte **)(param_1 + 0x140);
  if (pbVar17 != pbVar20) {
    puVar15 = PTR_LAB_043796d8;
    pbVar18 = PTR_DAT_04379498;
    plVar14 = (long *)PTR_DAT_043794a0;
    plVar22 = (long *)PTR_DAT_043794a8;
    do {
      iVar5 = *(int *)(pbVar17 + 0x50);
      if (iVar5 == 0) {
        if (*(long *)(pbVar17 + 0x18) == 0) {
          local_80 = (long *)0x0;
        }
        else {
          FUN_009b3e90(&local_80);
          if (local_80 != (long *)0x0) {
            if ((local_80[0x68] != 0) && (*(int *)(local_80[0x68] + 0xc) != 0)) {
              local_78 = (long *)0x0;
              uStack_70 = 0;
              FUN_009ab200(&local_78,local_80 + 0x68);
              plVar14 = local_78;
              if (local_78 != (long *)0x0) {
                if (*(int *)((long)local_78 + 0xc) != 0) {
                  piVar1 = (int *)((long)local_78 + 0xc);
                  iVar5 = *(int *)((long)local_78 + 0xc);
                  while (uVar9 = FUN_009b4090(plVar14[2]), (uVar9 & 1) != 0) {
                    iVar6 = *piVar1;
                    if (iVar6 == iVar5) {
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar4) {
                        *piVar1 = iVar5 + 1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                      if (cVar3 == '\0') {
                        lVar11 = plVar14[3];
                        plVar14 = (long *)0x0;
                        plVar22 = local_78;
                        if (lVar11 != 0) {
                          plVar14 = (long *)(lVar11 + -0x50);
                        }
                        goto joined_r0x009930d0;
                      }
                    }
                    else {
                      ClearExclusiveLocal();
                    }
                    iVar5 = iVar6;
                    if (iVar6 == 0) break;
                  }
                }
                plVar14 = (long *)0x0;
                plVar22 = local_78;
joined_r0x009930d0:
                local_78 = plVar22;
                if (plVar22 != (long *)0x0) {
                  plVar7 = plVar22 + 1;
                  do {
                    iVar5 = (int)*plVar7 + -1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                    if (bVar4) {
                      *(int *)plVar7 = iVar5;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar5 == 0) {
                    plVar22[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar11 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar11;
                    local_90 = (long *)*plVar22;
                    FUN_02a44274(lVar11 + 0xd8,&local_90);
                  }
                }
                if (plVar14 != (long *)0x0) {
                  uVar9 = FUN_018d45cc(plVar14);
                  if ((uVar9 & 1) != 0) {
                    FUN_00956dac(&local_98,plVar14 + 0x35);
                    (**(code **)(*local_98 + 0x10))(&local_78);
                    local_90 = (long *)0x0;
                    uStack_88 = 0;
                    FUN_0087f944(&local_90,&local_78);
                    plVar22 = local_78;
                    if (local_78 != (long *)0x0) {
                      plVar7 = local_78 + 1;
                      do {
                        iVar5 = (int)*plVar7 + -1;
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                        if (bVar4) {
                          *(int *)plVar7 = iVar5;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                      if (iVar5 == 0) {
                        local_78[2] = 0;
                        if (((*PTR_DAT_04379498 & 1) == 0) &&
                           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
                          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                          __cxa_guard_release(PTR_DAT_04379498);
                        }
                        lVar11 = *(long *)PTR_DAT_043794a0;
                        *(long *)PTR_DAT_043794a8 = lVar11;
                        local_68 = (long *)*plVar22;
                        FUN_02a44274(lVar11 + 0xd8,&local_68);
                      }
                    }
                    FUN_0087fcf0(pbVar17 + 8,&local_90);
                    plVar22 = local_90;
                    if (local_90 != (long *)0x0) {
                      plVar7 = local_90 + 1;
                      do {
                        iVar5 = (int)*plVar7 + -1;
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                        if (bVar4) {
                          *(int *)plVar7 = iVar5;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                      if (iVar5 == 0) {
                        local_90[2] = 0;
                        if (((*PTR_DAT_04379498 & 1) == 0) &&
                           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
                          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                          __cxa_guard_release(PTR_DAT_04379498);
                        }
                        lVar11 = *(long *)PTR_DAT_043794a0;
                        *(long *)PTR_DAT_043794a8 = lVar11;
                        local_78 = (long *)*plVar22;
                        FUN_02a44274(lVar11 + 0xd8,&local_78);
                      }
                    }
                    if (local_98 != (long *)0x0) {
                      lVar11 = local_98[0xb];
                      piVar1 = (int *)(lVar11 + 0xc);
                      do {
                        iVar5 = *piVar1;
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar4) {
                          *piVar1 = iVar5 + -1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                      if (iVar5 + -1 == 0) {
                        *(undefined8 *)(lVar11 + 0x18) = 0;
                        (**(code **)(*local_98 + 0x20))();
                      }
                    }
                    if (((*PTR_DAT_04379578 & 1) == 0) &&
                       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379578), iVar5 != 0)) {
                      FUN_00100250(puVar15,PTR_DAT_04379580,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379578);
                    }
                    lVar11 = *(long *)PTR_DAT_04379580;
                    *(long *)PTR_DAT_04379588 = lVar11;
                    FUN_0098f80c(&local_68,lVar11 + 0xd8);
                    if (local_68 != (long *)0x0) {
                      FUN_0199cf64(&local_78);
                      plVar22 = local_78;
                      if (local_78 != (long *)0x0) {
                        if (*(int *)((long)local_78 + 0xc) != 0) {
                          piVar1 = (int *)((long)local_78 + 0xc);
                          iVar5 = *(int *)((long)local_78 + 0xc);
                          do {
                            plVar7 = (long *)plVar22[2];
                            if (((*PTR_DAT_0437a110 & 1) == 0) &&
                               (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a110), iVar6 != 0)) {
                              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                                 (iVar6 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar6 != 0)) {
                                uVar10 = FUN_0087f8f0();
                                *(undefined8 *)PTR_DAT_043794d8 = uVar10;
                                __cxa_guard_release(PTR_DAT_043794d0);
                              }
                              *(undefined **)PTR_DAT_0437a108 = PTR_DAT_043794d8;
                              __cxa_guard_release(PTR_DAT_0437a110);
                            }
                            while( true ) {
                              if (plVar7 == (long *)0x0) goto LAB_009934f4;
                              if (plVar7 == (long *)PTR_DAT_0437a108) break;
                              plVar7 = (long *)*plVar7;
                            }
                            iVar6 = *piVar1;
                            if (iVar6 == iVar5) {
                              cVar3 = '\x01';
                              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                              if (bVar4) {
                                *piVar1 = iVar5 + 1;
                                cVar3 = ExclusiveMonitorsStatus();
                              }
                              if (cVar3 == '\0') {
                                lVar11 = plVar22[3];
                                plVar22 = (long *)0x0;
                                plVar7 = local_78;
                                if (lVar11 != 0) {
                                  plVar22 = (long *)(lVar11 + -0x50);
                                }
                                goto joined_r0x0099352c;
                              }
                            }
                            else {
                              ClearExclusiveLocal();
                            }
                            iVar5 = iVar6;
                          } while (iVar6 != 0);
                        }
LAB_009934f4:
                        plVar22 = (long *)0x0;
                        plVar7 = local_78;
joined_r0x0099352c:
                        local_78 = plVar7;
                        if (plVar7 != (long *)0x0) {
                          plVar8 = plVar7 + 1;
                          do {
                            iVar5 = (int)*plVar8 + -1;
                            cVar3 = '\x01';
                            bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                            if (bVar4) {
                              *(int *)plVar8 = iVar5;
                              cVar3 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar3 != '\0');
                          if (iVar5 == 0) {
                            plVar7[2] = 0;
                            if (((*PTR_DAT_04379498 & 1) == 0) &&
                               (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
                              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                              __cxa_guard_release(PTR_DAT_04379498);
                            }
                            lVar11 = *(long *)PTR_DAT_043794a0;
                            *(long *)PTR_DAT_043794a8 = lVar11;
                            local_90 = (long *)*plVar7;
                            FUN_02a44274(lVar11 + 0xd8,&local_90);
                          }
                        }
                        if (plVar22 != (long *)0x0) {
                          local_a8 = (undefined8 *)0x0;
                          uStack_a0 = 0;
                          FUN_0095e070(&local_a8,pbVar17 + 0x18);
                          FUN_017e5900(plVar22,&local_a8);
                          puVar21 = local_a8;
                          if (local_a8 != (undefined8 *)0x0) {
                            piVar1 = (int *)(local_a8 + 1);
                            do {
                              iVar5 = *piVar1;
                              cVar3 = '\x01';
                              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                              if (bVar4) {
                                *piVar1 = iVar5 + -1;
                                cVar3 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar3 != '\0');
                            if (iVar5 + -1 == 0) {
                              local_a8[2] = 0;
                              if (((*PTR_DAT_04379498 & 1) == 0) &&
                                 (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
                                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                                __cxa_guard_release(PTR_DAT_04379498);
                              }
                              lVar11 = *(long *)PTR_DAT_043794a0;
                              *(long *)PTR_DAT_043794a8 = lVar11;
                              local_78 = (long *)*puVar21;
                              FUN_02a44274(lVar11 + 0xd8,&local_78);
                            }
                          }
                          lVar11 = plVar22[0xb];
                          piVar1 = (int *)(lVar11 + 0xc);
                          do {
                            iVar5 = *piVar1;
                            cVar3 = '\x01';
                            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                            if (bVar4) {
                              *piVar1 = iVar5 + -1;
                              cVar3 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar3 != '\0');
                          if (iVar5 + -1 == 0) {
                            *(undefined8 *)(lVar11 + 0x18) = 0;
                            (**(code **)(*plVar22 + 0x20))(plVar22);
                          }
                        }
                      }
                      if (local_68 != (long *)0x0) {
                        lVar11 = local_68[0xb];
                        piVar1 = (int *)(lVar11 + 0xc);
                        do {
                          iVar5 = *piVar1;
                          cVar3 = '\x01';
                          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                          if (bVar4) {
                            *piVar1 = iVar5 + -1;
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar3 != '\0');
                        if (iVar5 + -1 == 0) {
                          *(undefined8 *)(lVar11 + 0x18) = 0;
                          (**(code **)(*local_68 + 0x20))();
                        }
                      }
                    }
                    FUN_018dae04(plVar14,0);
                  }
                  lVar11 = plVar14[0xb];
                  piVar1 = (int *)(lVar11 + 0xc);
                  do {
                    iVar5 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar5 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar5 + -1 == 0) {
                    *(undefined8 *)(lVar11 + 0x18) = 0;
                    (**(code **)(*plVar14 + 0x20))(plVar14);
                  }
                }
              }
            }
            pbVar18 = PTR_DAT_04379498;
            plVar14 = (long *)PTR_DAT_043794a0;
            plVar22 = (long *)PTR_DAT_043794a8;
            if (local_80 != (long *)0x0) {
              lVar11 = local_80[0xb];
              piVar1 = (int *)(lVar11 + 0xc);
              do {
                iVar5 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar5 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                plVar22 = (long *)PTR_DAT_043794a8;
                plVar14 = (long *)PTR_DAT_043794a0;
                pbVar18 = PTR_DAT_04379498;
              } while (cVar3 != '\0');
              if (iVar5 + -1 == 0) {
                *(undefined8 *)(lVar11 + 0x18) = 0;
                (**(code **)(*local_80 + 0x20))();
              }
            }
          }
        }
        if ((*(long *)(pbVar17 + 8) == 0) || (*(int *)(*(long *)(pbVar17 + 8) + 0xc) == 0)) {
          pbVar17 = pbVar17 + 0x60;
        }
        else if (pbVar17[0x55] == 0) {
          pbVar12 = *(byte **)(param_1 + 0x140);
          pbVar20 = pbVar17 + 0x60;
          pbVar19 = pbVar17;
          if (pbVar20 == pbVar12) {
LAB_00992bf8:
            puVar21 = *(undefined8 **)(pbVar20 + -0x48);
            if (puVar21 != (undefined8 *)0x0) {
              piVar1 = (int *)(puVar21 + 1);
              do {
                iVar5 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar5 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar5 + -1 == 0) {
                puVar21[2] = 0;
                if (((*pbVar18 & 1) == 0) && (iVar5 = __cxa_guard_acquire(pbVar18), iVar5 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,plVar14,&PTR_LOOP_0411a000);
                  __cxa_guard_release(pbVar18);
                }
                lVar11 = *plVar14;
                *plVar22 = lVar11;
                local_78 = (long *)*puVar21;
                FUN_02a44274(lVar11 + 0xd8,&local_78);
              }
            }
            puVar21 = *(undefined8 **)(pbVar20 + -0x58);
            if (puVar21 != (undefined8 *)0x0) {
              piVar1 = (int *)(puVar21 + 1);
              do {
                iVar5 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar5 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar5 + -1 == 0) {
                puVar21[2] = 0;
                if (((*pbVar18 & 1) == 0) && (iVar5 = __cxa_guard_acquire(pbVar18), iVar5 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,plVar14,&PTR_LOOP_0411a000);
                  __cxa_guard_release(pbVar18);
                }
                lVar11 = *plVar14;
                *plVar22 = lVar11;
                local_78 = (long *)*puVar21;
                FUN_02a44274(lVar11 + 0xd8,&local_78);
              }
            }
            while (pbVar12 = pbVar20 + -0x60, pbVar12 != pbVar19) {
              puVar21 = *(undefined8 **)(pbVar20 + -0xa8);
              if (puVar21 != (undefined8 *)0x0) {
                piVar1 = (int *)(puVar21 + 1);
                do {
                  iVar5 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar5 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar5 + -1 == 0) {
                  puVar21[2] = 0;
                  if (((*pbVar18 & 1) == 0) && (iVar5 = __cxa_guard_acquire(pbVar18), iVar5 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,plVar14,&PTR_LOOP_0411a000);
                    __cxa_guard_release(pbVar18);
                  }
                  lVar11 = *plVar14;
                  *plVar22 = lVar11;
                  local_78 = (long *)*puVar21;
                  FUN_02a44274(lVar11 + 0xd8,&local_78);
                }
              }
              puVar21 = *(undefined8 **)(pbVar20 + -0xb8);
              pbVar20 = pbVar12;
              if (puVar21 != (undefined8 *)0x0) {
                piVar1 = (int *)(puVar21 + 1);
                do {
                  iVar5 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar5 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar5 + -1 == 0) {
                  puVar21[2] = 0;
                  if (((*pbVar18 & 1) == 0) && (iVar5 = __cxa_guard_acquire(pbVar18), iVar5 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,plVar14,&PTR_LOOP_0411a000);
                    __cxa_guard_release(pbVar18);
                  }
                  lVar11 = *plVar14;
                  *plVar22 = lVar11;
                  local_78 = (long *)*puVar21;
                  FUN_02a44274(lVar11 + 0xd8,&local_78);
                }
              }
            }
          }
          else {
            pbVar20 = pbVar17;
            do {
              pbVar19 = pbVar20 + 0x60;
              *pbVar20 = *pbVar19;
              FUN_0087fcf0(pbVar20 + 8,pbVar20 + 0x68);
              FUN_0095a500(pbVar20 + 0x18,pbVar20 + 0x78);
              *(undefined8 *)(pbVar20 + 0x30) = *(undefined8 *)(pbVar20 + 0x90);
              *(undefined8 *)(pbVar20 + 0x38) = *(undefined8 *)(pbVar20 + 0x98);
              *(undefined4 *)(pbVar20 + 0x50) = *(undefined4 *)(pbVar20 + 0xb0);
              *(undefined8 *)(pbVar20 + 0x40) = *(undefined8 *)(pbVar20 + 0xa0);
              *(undefined8 *)(pbVar20 + 0x48) = *(undefined8 *)(pbVar20 + 0xa8);
              *(undefined2 *)(pbVar20 + 0x54) = *(undefined2 *)(pbVar20 + 0xb4);
              pbVar20 = pbVar19;
            } while (pbVar12 + -0x60 != pbVar19);
            pbVar20 = *(byte **)(param_1 + 0x140);
            if (pbVar20 != pbVar19) goto LAB_00992bf8;
          }
          *(byte **)(param_1 + 0x140) = pbVar19;
          puVar15 = PTR_LAB_043796d8;
        }
        else {
          FUN_00956dac(&local_78);
          plVar7 = (long *)FUN_00994624(param_1 + 0x68,pbVar17);
          plVar8 = (long *)*plVar7;
          *plVar7 = 0;
          if (plVar8 != (long *)0x0) {
            lVar11 = plVar8[0xb];
            piVar1 = (int *)(lVar11 + 0xc);
            do {
              iVar5 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar5 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar5 + -1 == 0) {
              *(undefined8 *)(lVar11 + 0x18) = 0;
              (**(code **)(*plVar8 + 0x20))();
            }
          }
          *plVar7 = (long)local_78;
          local_78 = (long *)0x0;
          pbVar17[0x50] = 1;
          pbVar17[0x51] = 0;
          pbVar17[0x52] = 0;
          pbVar17[0x53] = 0;
          FUN_0099494c(param_1,*pbVar17);
          puVar15 = PTR_LAB_043796d8;
        }
      }
      else if (iVar5 == 1) {
        uVar13 = *(ulong *)(param_1 + 0x70);
        bVar2 = *pbVar17;
        uVar9 = (ulong)bVar2;
        if ((uVar13 & uVar13 - 1) == 0) {
          plVar14 = *(long **)(*(long *)(param_1 + 0x68) + ((int)uVar13 - 1 & uVar9) * 8);
          do {
            do {
              plVar14 = (long *)*plVar14;
            } while (plVar14[1] != uVar9);
          } while (*(byte *)(plVar14 + 2) != bVar2);
        }
        else {
          uVar16 = uVar9;
          if (uVar13 <= uVar9) {
            uVar16 = 0;
            if (uVar13 != 0) {
              uVar16 = uVar9 / uVar13;
            }
            uVar16 = uVar9 - uVar16 * uVar13;
          }
          plVar14 = *(long **)(*(long *)(param_1 + 0x68) + uVar16 * 8);
          do {
            do {
              plVar14 = (long *)*plVar14;
            } while (plVar14[1] != uVar9);
          } while (*(byte *)(plVar14 + 2) != bVar2);
        }
        plVar14 = *(long **)((long)plVar14 + 0x18);
        local_78 = plVar14;
        if (plVar14 == (long *)0x0) {
          uVar9 = FUN_009986ec(&local_78);
        }
        else {
          lVar11 = plVar14[0xb];
          if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar11 + 0x10) == 0) {
            uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
            *(undefined8 *)(lVar11 + 0x10) = uVar10;
          }
          piVar1 = (int *)(lVar11 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          uVar9 = FUN_009986ec(&local_78);
          lVar11 = plVar14[0xb];
          piVar1 = (int *)(lVar11 + 0xc);
          do {
            iVar5 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar5 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 + -1 == 0) {
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*plVar14 + 0x20))(plVar14);
          }
        }
        if ((uVar9 & 1) == 0) {
          pbVar17 = pbVar17 + 0x60;
          puVar15 = PTR_LAB_043796d8;
          plVar14 = (long *)PTR_DAT_043794a0;
        }
        else {
          plVar14 = (long *)FUN_00994624(param_1 + 0x68,pbVar17);
          lVar11 = FUN_0095992c(*plVar14 + 0xf0,&local_78);
          if (lVar11 != 0) {
            FUN_01a83770(lVar11,pbVar17 + 0x30,pbVar17 + 0x40);
          }
          FUN_0099516c(param_1,*pbVar17,0);
          pbVar17[0x50] = 2;
          pbVar17[0x51] = 0;
          pbVar17[0x52] = 0;
          pbVar17[0x53] = 0;
          pbVar17 = pbVar17 + 0x60;
          puVar15 = PTR_LAB_043796d8;
          plVar14 = (long *)PTR_DAT_043794a0;
        }
      }
      else if (iVar5 == 2) {
        if (pbVar17 + 0x60 == pbVar20) {
          pbVar12 = pbVar17;
LAB_00992938:
          puVar21 = *(undefined8 **)(pbVar20 + -0x48);
          if (puVar21 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar21 + 1);
            do {
              iVar5 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar5 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar5 + -1 == 0) {
              puVar21[2] = 0;
              if (((*pbVar18 & 1) == 0) && (iVar5 = __cxa_guard_acquire(pbVar18), iVar5 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar14,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar18);
              }
              lVar11 = *plVar14;
              *plVar22 = lVar11;
              local_78 = (long *)*puVar21;
              FUN_02a44274(lVar11 + 0xd8,&local_78);
            }
          }
          puVar21 = *(undefined8 **)(pbVar20 + -0x58);
          if (puVar21 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar21 + 1);
            do {
              iVar5 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar5 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar5 + -1 == 0) {
              puVar21[2] = 0;
              if (((*pbVar18 & 1) == 0) && (iVar5 = __cxa_guard_acquire(pbVar18), iVar5 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar14,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar18);
              }
              lVar11 = *plVar14;
              *plVar22 = lVar11;
              local_78 = (long *)*puVar21;
              FUN_02a44274(lVar11 + 0xd8,&local_78);
            }
          }
          while (pbVar20 = pbVar20 + -0x60, pbVar20 != pbVar12) {
            puVar21 = *(undefined8 **)(pbVar20 + -0x48);
            if (puVar21 != (undefined8 *)0x0) {
              piVar1 = (int *)(puVar21 + 1);
              do {
                iVar5 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar5 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar5 + -1 == 0) {
                puVar21[2] = 0;
                if (((*pbVar18 & 1) == 0) && (iVar5 = __cxa_guard_acquire(pbVar18), iVar5 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,plVar14,&PTR_LOOP_0411a000);
                  __cxa_guard_release(pbVar18);
                }
                lVar11 = *plVar14;
                *plVar22 = lVar11;
                local_78 = (long *)*puVar21;
                FUN_02a44274(lVar11 + 0xd8,&local_78);
              }
            }
            puVar21 = *(undefined8 **)(pbVar20 + -0x58);
            if (puVar21 != (undefined8 *)0x0) {
              piVar1 = (int *)(puVar21 + 1);
              do {
                iVar5 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar5 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar5 + -1 == 0) {
                puVar21[2] = 0;
                if (((*pbVar18 & 1) == 0) && (iVar5 = __cxa_guard_acquire(pbVar18), iVar5 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,plVar14,&PTR_LOOP_0411a000);
                  __cxa_guard_release(pbVar18);
                }
                lVar11 = *plVar14;
                *plVar22 = lVar11;
                local_78 = (long *)*puVar21;
                FUN_02a44274(lVar11 + 0xd8,&local_78);
              }
            }
          }
        }
        else {
          pbVar19 = pbVar17;
          do {
            pbVar12 = pbVar19 + 0x60;
            *pbVar19 = *pbVar12;
            FUN_0087fcf0(pbVar19 + 8,pbVar19 + 0x68);
            FUN_0095a500(pbVar19 + 0x18,pbVar19 + 0x78);
            *(undefined8 *)(pbVar19 + 0x30) = *(undefined8 *)(pbVar19 + 0x90);
            *(undefined8 *)(pbVar19 + 0x38) = *(undefined8 *)(pbVar19 + 0x98);
            *(undefined8 *)(pbVar19 + 0x40) = *(undefined8 *)(pbVar19 + 0xa0);
            *(undefined8 *)(pbVar19 + 0x48) = *(undefined8 *)(pbVar19 + 0xa8);
            *(undefined4 *)(pbVar19 + 0x50) = *(undefined4 *)(pbVar19 + 0xb0);
            *(undefined2 *)(pbVar19 + 0x54) = *(undefined2 *)(pbVar19 + 0xb4);
            pbVar19 = pbVar12;
          } while (pbVar20 + -0x60 != pbVar12);
          pbVar20 = *(byte **)(param_1 + 0x140);
          puVar15 = PTR_LAB_043796d8;
          if (pbVar20 != pbVar12) goto LAB_00992938;
        }
        *(byte **)(param_1 + 0x140) = pbVar12;
      }
      pbVar20 = *(byte **)(param_1 + 0x140);
    } while (pbVar17 != pbVar20);
  }
  return;
}


