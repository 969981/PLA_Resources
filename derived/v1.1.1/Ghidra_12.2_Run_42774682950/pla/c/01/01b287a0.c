/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b287a0; name: FUN_01b287a0
 */


void FUN_01b287a0(long param_1)

{
  int *piVar1;
  long *plVar2;
  char *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined1 *puVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  undefined1 *puVar23;
  long *local_3a0;
  long local_328;
  undefined1 *local_318 [3];
  long *local_300;
  long *local_2f8;
  long *local_2f0;
  long *local_2e8;
  long *local_2e0;
  undefined1 *local_2d8;
  undefined1 *puStack_2d0;
  undefined1 auStack_2c8 [584];
  long *local_80;
  long *local_78;
  
  lVar16 = *(long *)(param_1 + 0x1f0);
  if ((lVar16 != 0) && (*(int *)(lVar16 + 0xc) != 0)) {
    piVar1 = (int *)(lVar16 + 0xc);
    iVar17 = *(int *)(lVar16 + 0xc);
    do {
      plVar18 = *(long **)(lVar16 + 0x10);
      lVar7 = FUN_00a3edb8();
      while( true ) {
        if (plVar18 == (long *)0x0) {
          return;
        }
        if (plVar18 == (long *)lVar7) break;
        plVar18 = (long *)*plVar18;
      }
      iVar15 = *piVar1;
      if (iVar15 == iVar17) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar17 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          lVar16 = *(long *)(lVar16 + 0x18);
          plVar18 = (long *)(lVar16 + -0x50);
          if (lVar16 == 0) {
            return;
          }
          if (*(int *)(lVar16 + 0x1a8) == 3) {
            local_328 = param_1 + 600;
            lVar7 = local_328;
            do {
              FUN_01b31228(local_318,lVar7);
              puVar8 = (undefined8 *)FUN_02a9b144(plVar18,local_318);
              plVar19 = (long *)*puVar8;
              if (plVar19 != (long *)0x0) {
                plVar2 = plVar19 + 10;
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar6) {
                    *(int *)plVar2 = (int)*plVar2 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                puVar4 = (undefined8 *)plVar19[0x1e];
                for (puVar8 = (undefined8 *)plVar19[0x1d]; puVar8 != puVar4; puVar8 = puVar8 + 1) {
                  plVar20 = (long *)*puVar8;
                  if (plVar20 != (long *)0x0) {
                    plVar13 = plVar20 + 10;
                    do {
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                      if (bVar6) {
                        *(int *)plVar13 = (int)*plVar13 + 1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                  }
                  plVar13 = (long *)plVar20[0x12];
                  plVar12 = (long *)plVar20[0x13];
                  if (plVar13 != plVar12) {
                    plVar9 = (long *)*plVar13;
                    if (plVar9 == (long *)0x0) {
                      DAT_00000228 = 1;
                    }
                    else {
                      plVar21 = plVar9 + 10;
                      do {
                        cVar5 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                        if (bVar6) {
                          *(int *)plVar21 = (int)*plVar21 + 1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      *(undefined1 *)(plVar9 + 0x45) = 1;
                      do {
                        iVar17 = (int)*plVar21 + -1;
                        cVar5 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                        if (bVar6) {
                          *(int *)plVar21 = iVar17;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      if (iVar17 == 0) {
                        (**(code **)(*plVar9 + 0x10))();
                      }
                    }
                    if (plVar13 + 1 != plVar12) {
                      plVar9 = (long *)plVar13[1];
                      if (plVar9 == (long *)0x0) {
                        DAT_00000228 = 1;
                      }
                      else {
                        plVar21 = plVar9 + 10;
                        do {
                          cVar5 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                          if (bVar6) {
                            *(int *)plVar21 = (int)*plVar21 + 1;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                        *(undefined1 *)(plVar9 + 0x45) = 1;
                        do {
                          iVar17 = (int)*plVar21 + -1;
                          cVar5 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                          if (bVar6) {
                            *(int *)plVar21 = iVar17;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                        if (iVar17 == 0) {
                          (**(code **)(*plVar9 + 0x10))();
                        }
                      }
                      if (plVar13 + 2 != plVar12) {
                        plVar9 = (long *)plVar13[2];
                        if (plVar9 == (long *)0x0) {
                          DAT_00000228 = 1;
                        }
                        else {
                          plVar21 = plVar9 + 10;
                          do {
                            cVar5 = '\x01';
                            bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                            if (bVar6) {
                              *(int *)plVar21 = (int)*plVar21 + 1;
                              cVar5 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar5 != '\0');
                          *(undefined1 *)(plVar9 + 0x45) = 1;
                          do {
                            iVar17 = (int)*plVar21 + -1;
                            cVar5 = '\x01';
                            bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                            if (bVar6) {
                              *(int *)plVar21 = iVar17;
                              cVar5 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar5 != '\0');
                          if (iVar17 == 0) {
                            (**(code **)(*plVar9 + 0x10))();
                          }
                        }
                        for (plVar13 = plVar13 + 3; plVar13 != plVar12; plVar13 = plVar13 + 1) {
                          while (plVar9 = (long *)*plVar13, plVar9 != (long *)0x0) {
                            plVar21 = plVar9 + 10;
                            do {
                              cVar5 = '\x01';
                              bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                              if (bVar6) {
                                *(int *)plVar21 = (int)*plVar21 + 1;
                                cVar5 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar5 != '\0');
                            *(undefined1 *)(plVar9 + 0x45) = 1;
                            do {
                              iVar17 = (int)*plVar21 + -1;
                              cVar5 = '\x01';
                              bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                              if (bVar6) {
                                *(int *)plVar21 = iVar17;
                                cVar5 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar5 != '\0');
                            if (iVar17 == 0) {
                              (**(code **)(*plVar9 + 0x10))();
                            }
                            plVar13 = plVar13 + 1;
                            if (plVar13 == plVar12) goto LAB_01b289ac;
                          }
                          DAT_00000228 = 1;
                        }
                      }
                    }
                  }
LAB_01b289ac:
                  if (plVar20 != (long *)0x0) {
                    plVar13 = plVar20 + 10;
                    do {
                      iVar17 = (int)*plVar13 + -1;
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                      if (bVar6) {
                        *(int *)plVar13 = iVar17;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (iVar17 == 0) {
                      (**(code **)(*plVar20 + 0x10))(plVar20);
                    }
                  }
                }
                do {
                  iVar17 = (int)*plVar2 + -1;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar6) {
                    *(int *)plVar2 = iVar17;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar17 == 0) {
                  (**(code **)(*plVar19 + 0x10))(plVar19);
                }
              }
              if (local_78 != (long *)0x0) {
                lVar11 = local_78[0xb];
                piVar1 = (int *)(lVar11 + 0xc);
                do {
                  iVar17 = *piVar1;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = iVar17 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar17 + -1 == 0) {
                  *(undefined8 *)(lVar11 + 0x18) = 0;
                  (**(code **)(*local_78 + 0x20))();
                }
              }
              if (local_80 != (long *)0x0) {
                lVar11 = local_80[0xb];
                piVar1 = (int *)(lVar11 + 0xc);
                do {
                  iVar17 = *piVar1;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = iVar17 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar17 + -1 == 0) {
                  *(undefined8 *)(lVar11 + 0x18) = 0;
                  (**(code **)(*local_80 + 0x20))();
                }
              }
              FUN_01b2b168(auStack_2c8);
              if (local_2e0 != (long *)0x0) {
                (**(code **)(*local_2e0 + 0x20))();
              }
              if (local_2e8 != (long *)0x0) {
                (**(code **)(*local_2e8 + 0x20))();
              }
              if (local_2f0 != (long *)0x0) {
                (**(code **)(*local_2f0 + 0x20))();
              }
              if (local_2f8 != (long *)0x0) {
                (**(code **)(*local_2f8 + 0x20))();
              }
              if (local_300 != (long *)0x0) {
                (**(code **)(*local_300 + 0x20))();
              }
              lVar7 = lVar7 + 0x2b0;
            } while (lVar7 != param_1 + 0x1fe8);
            pcVar3 = (char *)(param_1 + 0x2800);
            do {
              FUN_01b31228(local_318,local_328);
              if (local_2d8 != &DAT_cbf29ce484222645 || puStack_2d0 != &DAT_cbf29ce484222645) {
                puVar14 = *(undefined1 **)(param_1 + 0x1fe8);
                if (puVar14 == local_2d8) {
                  iVar15 = 0;
                  lVar7 = *(long *)(param_1 + 0x1548);
                  bVar6 = false;
                  iVar17 = 0;
                  if (lVar7 != 0) {
LAB_01b292f8:
                    iVar15 = iVar17;
                    bVar6 = **(char **)(lVar7 + 0x60) != '\0';
                  }
LAB_01b29308:
                  iVar17 = iVar15 + 3;
                  if (!(bool)(iVar15 - 4U < 3 & bVar6)) {
                    iVar17 = iVar15;
                  }
                  if (puVar14 != puStack_2d0) goto LAB_01b28cfc;
LAB_01b29328:
                  iVar10 = 0;
                  lVar7 = *(long *)(param_1 + 0x1548);
                  bVar6 = false;
                  iVar15 = 0;
                  if (lVar7 != 0) goto LAB_01b29334;
LAB_01b29344:
                  iVar15 = iVar10 + 3;
                  if (!(bool)(iVar10 - 4U < 3 & bVar6)) {
                    iVar15 = iVar10;
                  }
                }
                else {
                  if (*(undefined1 **)(param_1 + 0x20b0) == local_2d8) {
                    iVar15 = 1;
                    lVar7 = *(long *)(param_1 + 0x1548);
                    iVar17 = 1;
                    if (lVar7 != 0) goto LAB_01b292f8;
                    bVar6 = false;
                    goto LAB_01b29308;
                  }
                  if (*(undefined1 **)(param_1 + 0x2178) == local_2d8) {
                    iVar15 = 2;
                    lVar7 = *(long *)(param_1 + 0x1548);
                    iVar17 = 2;
                    if (lVar7 != 0) goto LAB_01b292f8;
                    bVar6 = false;
                    goto LAB_01b29308;
                  }
                  if (*(undefined1 **)(param_1 + 0x2240) == local_2d8) {
                    iVar15 = 3;
                    lVar7 = *(long *)(param_1 + 0x1548);
                    iVar17 = 3;
                    if (lVar7 != 0) goto LAB_01b292f8;
                    bVar6 = false;
                    goto LAB_01b29308;
                  }
                  if (*(undefined1 **)(param_1 + 0x2308) == local_2d8) {
                    iVar15 = 4;
                    lVar7 = *(long *)(param_1 + 0x1548);
                    iVar17 = 4;
                    if (lVar7 != 0) goto LAB_01b292f8;
                    bVar6 = false;
                    goto LAB_01b29308;
                  }
                  if (*(undefined1 **)(param_1 + 0x23d0) == local_2d8) {
                    iVar15 = 5;
                    lVar7 = *(long *)(param_1 + 0x1548);
                    iVar17 = 5;
                    if (lVar7 != 0) goto LAB_01b292f8;
                    bVar6 = false;
                    goto LAB_01b29308;
                  }
                  if (*(undefined1 **)(param_1 + 0x2498) == local_2d8) {
                    iVar15 = 6;
                    lVar7 = *(long *)(param_1 + 0x1548);
                    iVar17 = 6;
                    if (lVar7 != 0) goto LAB_01b292f8;
                    bVar6 = false;
                    goto LAB_01b29308;
                  }
                  if (*(undefined1 **)(param_1 + 0x2560) == local_2d8) {
                    iVar15 = 7;
                    lVar7 = *(long *)(param_1 + 0x1548);
                    iVar17 = 7;
                    if (lVar7 != 0) goto LAB_01b292f8;
                    bVar6 = false;
                    goto LAB_01b29308;
                  }
                  if (*(undefined1 **)(param_1 + 0x2628) == local_2d8) {
                    iVar15 = 8;
                    lVar7 = *(long *)(param_1 + 0x1548);
                    iVar17 = 8;
                    if (lVar7 != 0) goto LAB_01b292f8;
                    bVar6 = false;
                    goto LAB_01b29308;
                  }
                  iVar17 = -1;
                  if (*(undefined1 **)(param_1 + 0x26f0) == local_2d8) {
                    iVar15 = 9;
                    lVar7 = *(long *)(param_1 + 0x1548);
                    iVar17 = 9;
                    if (lVar7 != 0) goto LAB_01b292f8;
                    bVar6 = false;
                    goto LAB_01b29308;
                  }
                  if (puVar14 == puStack_2d0) goto LAB_01b29328;
LAB_01b28cfc:
                  if (*(undefined1 **)(param_1 + 0x20b0) == puStack_2d0) {
                    iVar10 = 1;
                    lVar7 = *(long *)(param_1 + 0x1548);
                    iVar15 = 1;
                    if (lVar7 == 0) {
                      bVar6 = false;
                    }
                    else {
LAB_01b29334:
                      iVar10 = iVar15;
                      bVar6 = **(char **)(lVar7 + 0x60) != '\0';
                    }
                    goto LAB_01b29344;
                  }
                  if (*(undefined1 **)(param_1 + 0x2178) == puStack_2d0) {
                    iVar10 = 2;
                    lVar7 = *(long *)(param_1 + 0x1548);
                    iVar15 = 2;
                    if (lVar7 != 0) goto LAB_01b29334;
                    bVar6 = false;
                    goto LAB_01b29344;
                  }
                  if (*(undefined1 **)(param_1 + 0x2240) == puStack_2d0) {
                    iVar10 = 3;
                    lVar7 = *(long *)(param_1 + 0x1548);
                    iVar15 = 3;
                    if (lVar7 != 0) goto LAB_01b29334;
                    bVar6 = false;
                    goto LAB_01b29344;
                  }
                  if (*(undefined1 **)(param_1 + 0x2308) == puStack_2d0) {
                    iVar10 = 4;
                    lVar7 = *(long *)(param_1 + 0x1548);
                    iVar15 = 4;
                    if (lVar7 != 0) goto LAB_01b29334;
                    bVar6 = false;
                    goto LAB_01b29344;
                  }
                  if (*(undefined1 **)(param_1 + 0x23d0) == puStack_2d0) {
                    iVar10 = 5;
                    lVar7 = *(long *)(param_1 + 0x1548);
                    iVar15 = 5;
                    if (lVar7 != 0) goto LAB_01b29334;
                    bVar6 = false;
                    goto LAB_01b29344;
                  }
                  if (*(undefined1 **)(param_1 + 0x2498) == puStack_2d0) {
                    iVar10 = 6;
                    lVar7 = *(long *)(param_1 + 0x1548);
                    iVar15 = 6;
                    if (lVar7 != 0) goto LAB_01b29334;
                    bVar6 = false;
                    goto LAB_01b29344;
                  }
                  if (*(undefined1 **)(param_1 + 0x2560) == puStack_2d0) {
                    iVar10 = 7;
                    lVar7 = *(long *)(param_1 + 0x1548);
                    iVar15 = 7;
                    if (lVar7 != 0) goto LAB_01b29334;
                    bVar6 = false;
                    goto LAB_01b29344;
                  }
                  if (*(undefined1 **)(param_1 + 0x2628) == puStack_2d0) {
                    iVar10 = 8;
                    lVar7 = *(long *)(param_1 + 0x1548);
                    iVar15 = 8;
                    if (lVar7 != 0) goto LAB_01b29334;
                    bVar6 = false;
                    goto LAB_01b29344;
                  }
                  iVar15 = -1;
                  if (*(undefined1 **)(param_1 + 0x26f0) == puStack_2d0) {
                    iVar10 = 9;
                    lVar7 = *(long *)(param_1 + 0x1548);
                    iVar15 = 9;
                    if (lVar7 != 0) goto LAB_01b29334;
                    bVar6 = false;
                    goto LAB_01b29344;
                  }
                }
                if (iVar17 != -1) {
                  plVar19 = (long *)FUN_02a9b144(plVar18,param_1 + (long)iVar17 * 200 + 0x1ff0);
                  plVar19 = (long *)*plVar19;
                  if (plVar19 != (long *)0x0) {
                    plVar2 = plVar19 + 10;
                    do {
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                      if (bVar6) {
                        *(int *)plVar2 = (int)*plVar2 + 1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    plVar20 = (long *)plVar19[0x1d];
                    plVar13 = (long *)plVar19[0x1e];
                    if (plVar20 != plVar13) {
                      lVar7 = param_1 + (long)iVar17 * 200;
                      do {
                        plVar12 = (long *)*plVar20;
                        if (plVar12 != (long *)0x0) {
                          plVar9 = plVar12 + 10;
                          do {
                            cVar5 = '\x01';
                            bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                            if (bVar6) {
                              *(int *)plVar9 = (int)*plVar9 + 1;
                              cVar5 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar5 != '\0');
                        }
                        puVar4 = (undefined8 *)plVar12[0x13];
                        for (puVar8 = (undefined8 *)plVar12[0x12]; puVar8 != puVar4;
                            puVar8 = puVar8 + 1) {
                          plVar9 = (long *)*puVar8;
                          if (plVar9 != (long *)0x0) {
                            plVar21 = plVar9 + 10;
                            do {
                              cVar5 = '\x01';
                              bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                              if (bVar6) {
                                *(int *)plVar21 = (int)*plVar21 + 1;
                                cVar5 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar5 != '\0');
                          }
                          puVar14 = (undefined1 *)plVar9[0xb];
                          plVar21 = (long *)plVar9[0xe];
                          if (plVar21 != (long *)0x0) {
                            (**(code **)(*plVar21 + 0x18))(plVar21);
                          }
                          puVar23 = *(undefined1 **)(lVar7 + 0x2018);
                          plVar22 = *(long **)(lVar7 + 0x2030);
                          bVar6 = plVar22 == (long *)0x0;
                          if (plVar22 != (long *)0x0) {
                            (**(code **)(*plVar22 + 0x18))(plVar22);
                          }
                          if ((*pcVar3 == '\0') || (local_318[0] != &DAT_4355e65a738c7bd3)) {
                            if ((puVar23 == &DAT_cbf29ce484222645) || (puVar14 != puVar23))
                            goto joined_r0x01b28f14;
                            puVar14 = (undefined1 *)(lVar7 + 0x2010);
LAB_01b290e8:
                            *(undefined1 *)(plVar9 + 0x45) = *puVar14;
                            if (!bVar6) goto LAB_01b29080;
                          }
                          else {
                            *(undefined1 *)(plVar9 + 0x45) = 1;
joined_r0x01b28f14:
                            if (plVar22 != (long *)0x0) {
                              (**(code **)(*plVar22 + 0x20))(plVar22);
                            }
                            puVar23 = *(undefined1 **)(lVar7 + 0x2040);
                            plVar22 = *(long **)(lVar7 + 0x2058);
                            bVar6 = plVar22 == (long *)0x0;
                            if (plVar22 != (long *)0x0) {
                              (**(code **)(*plVar22 + 0x18))(plVar22);
                            }
                            if ((*pcVar3 == '\0') || (local_318[0] != &DAT_4355e65a738c7bd3)) {
                              if ((puVar23 != &DAT_cbf29ce484222645) && (puVar14 == puVar23)) {
                                puVar14 = (undefined1 *)(lVar7 + 0x2038);
                                goto LAB_01b290e8;
                              }
                            }
                            else {
                              *(undefined1 *)(plVar9 + 0x45) = 1;
                            }
                            if (plVar22 != (long *)0x0) {
                              (**(code **)(*plVar22 + 0x20))(plVar22);
                            }
                            puVar23 = *(undefined1 **)(lVar7 + 0x2068);
                            plVar22 = *(long **)(lVar7 + 0x2080);
                            bVar6 = plVar22 == (long *)0x0;
                            if (plVar22 != (long *)0x0) {
                              (**(code **)(*plVar22 + 0x18))(plVar22);
                            }
                            if ((*pcVar3 == '\0') || (local_318[0] != &DAT_4355e65a738c7bd3)) {
                              if ((puVar23 != &DAT_cbf29ce484222645) && (puVar14 == puVar23)) {
                                puVar14 = (undefined1 *)(lVar7 + 0x2060);
                                goto LAB_01b290e8;
                              }
                            }
                            else {
                              *(undefined1 *)(plVar9 + 0x45) = 1;
                            }
                            if (plVar22 != (long *)0x0) {
                              (**(code **)(*plVar22 + 0x20))(plVar22);
                            }
                            puVar23 = *(undefined1 **)(lVar7 + 0x2090);
                            plVar22 = *(long **)(lVar7 + 0x20a8);
                            bVar6 = plVar22 == (long *)0x0;
                            if (plVar22 != (long *)0x0) {
                              (**(code **)(*plVar22 + 0x18))(plVar22);
                            }
                            if ((*pcVar3 == '\0') || (local_318[0] != &DAT_4355e65a738c7bd3)) {
                              if ((puVar23 != &DAT_cbf29ce484222645) && (puVar14 == puVar23)) {
                                puVar14 = (undefined1 *)(lVar7 + 0x2088);
                                goto LAB_01b290e8;
                              }
                            }
                            else {
                              *(undefined1 *)(plVar9 + 0x45) = 1;
                            }
                            if (plVar22 != (long *)0x0) {
LAB_01b29080:
                              (**(code **)(*plVar22 + 0x20))(plVar22);
                            }
                          }
                          if (plVar21 != (long *)0x0) {
                            (**(code **)(*plVar21 + 0x20))(plVar21);
                          }
                          plVar21 = plVar9 + 10;
                          do {
                            iVar17 = (int)*plVar21 + -1;
                            cVar5 = '\x01';
                            bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                            if (bVar6) {
                              *(int *)plVar21 = iVar17;
                              cVar5 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar5 != '\0');
                          if (iVar17 == 0) {
                            (**(code **)(*plVar9 + 0x10))(plVar9);
                          }
                        }
                        if (plVar12 != (long *)0x0) {
                          plVar9 = plVar12 + 10;
                          do {
                            iVar17 = (int)*plVar9 + -1;
                            cVar5 = '\x01';
                            bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                            if (bVar6) {
                              *(int *)plVar9 = iVar17;
                              cVar5 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar5 != '\0');
                          if (iVar17 == 0) {
                            (**(code **)(*plVar12 + 0x10))();
                          }
                        }
                        plVar20 = plVar20 + 1;
                      } while (plVar20 != plVar13);
                    }
                    do {
                      iVar17 = (int)*plVar2 + -1;
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                      if (bVar6) {
                        *(int *)plVar2 = iVar17;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (iVar17 == 0) {
                      (**(code **)(*plVar19 + 0x10))();
                    }
                  }
                }
                if (iVar15 != -1) {
                  plVar19 = (long *)FUN_02a9b144(plVar18,param_1 + (long)iVar15 * 200 + 0x1ff0);
                  plVar19 = (long *)*plVar19;
                  if (plVar19 != (long *)0x0) {
                    plVar2 = plVar19 + 10;
                    do {
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                      if (bVar6) {
                        *(int *)plVar2 = (int)*plVar2 + 1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    local_3a0 = (long *)plVar19[0x1d];
                    plVar20 = (long *)plVar19[0x1e];
                    if (local_3a0 != plVar20) {
                      lVar7 = param_1 + (long)iVar15 * 200;
                      do {
                        plVar13 = (long *)*local_3a0;
                        if (plVar13 != (long *)0x0) {
                          plVar12 = plVar13 + 10;
                          do {
                            cVar5 = '\x01';
                            bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                            if (bVar6) {
                              *(int *)plVar12 = (int)*plVar12 + 1;
                              cVar5 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar5 != '\0');
                        }
                        puVar4 = (undefined8 *)plVar13[0x13];
                        for (puVar8 = (undefined8 *)plVar13[0x12]; puVar8 != puVar4;
                            puVar8 = puVar8 + 1) {
                          plVar12 = (long *)*puVar8;
                          if (plVar12 != (long *)0x0) {
                            plVar9 = plVar12 + 10;
                            do {
                              cVar5 = '\x01';
                              bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                              if (bVar6) {
                                *(int *)plVar9 = (int)*plVar9 + 1;
                                cVar5 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar5 != '\0');
                          }
                          puVar14 = (undefined1 *)plVar12[0xb];
                          plVar9 = (long *)plVar12[0xe];
                          if (plVar9 != (long *)0x0) {
                            (**(code **)(*plVar9 + 0x18))(plVar9);
                          }
                          plVar21 = *(long **)(lVar7 + 0x2030);
                          bVar6 = plVar21 == (long *)0x0;
                          puVar23 = *(undefined1 **)(lVar7 + 0x2018);
                          if (plVar21 != (long *)0x0) {
                            (**(code **)(*plVar21 + 0x18))(plVar21);
                          }
                          if ((*pcVar3 == '\0') || (local_318[0] != &DAT_4355e65a738c7bd3)) {
                            if ((puVar23 == &DAT_cbf29ce484222645) || (puVar14 != puVar23))
                            goto LAB_01b29418;
                            puVar14 = (undefined1 *)(lVar7 + 0x2010);
LAB_01b29564:
                            *(undefined1 *)(plVar12 + 0x45) = *puVar14;
                            if (!bVar6) goto LAB_01b29570;
                          }
                          else {
                            *(undefined1 *)(plVar12 + 0x45) = 1;
LAB_01b29418:
                            if (plVar21 != (long *)0x0) {
                              (**(code **)(*plVar21 + 0x20))(plVar21);
                            }
                            puVar23 = *(undefined1 **)(lVar7 + 0x2040);
                            plVar21 = *(long **)(lVar7 + 0x2058);
                            bVar6 = plVar21 == (long *)0x0;
                            if (plVar21 != (long *)0x0) {
                              (**(code **)(*plVar21 + 0x18))(plVar21);
                            }
                            if ((*pcVar3 == '\0') || (local_318[0] != &DAT_4355e65a738c7bd3)) {
                              if ((puVar23 != &DAT_cbf29ce484222645) && (puVar14 == puVar23)) {
                                puVar14 = (undefined1 *)(lVar7 + 0x2038);
                                goto LAB_01b29564;
                              }
                            }
                            else {
                              *(undefined1 *)(plVar12 + 0x45) = 1;
                            }
                            if (plVar21 != (long *)0x0) {
                              (**(code **)(*plVar21 + 0x20))(plVar21);
                            }
                            puVar23 = *(undefined1 **)(lVar7 + 0x2068);
                            plVar21 = *(long **)(lVar7 + 0x2080);
                            bVar6 = plVar21 == (long *)0x0;
                            if (plVar21 != (long *)0x0) {
                              (**(code **)(*plVar21 + 0x18))(plVar21);
                            }
                            if ((*pcVar3 == '\0') || (local_318[0] != &DAT_4355e65a738c7bd3)) {
                              if ((puVar23 != &DAT_cbf29ce484222645) && (puVar14 == puVar23)) {
                                puVar14 = (undefined1 *)(lVar7 + 0x2060);
                                goto LAB_01b29564;
                              }
                            }
                            else {
                              *(undefined1 *)(plVar12 + 0x45) = 1;
                            }
                            if (plVar21 != (long *)0x0) {
                              (**(code **)(*plVar21 + 0x20))(plVar21);
                            }
                            puVar23 = *(undefined1 **)(lVar7 + 0x2090);
                            plVar21 = *(long **)(lVar7 + 0x20a8);
                            bVar6 = plVar21 == (long *)0x0;
                            if (plVar21 != (long *)0x0) {
                              (**(code **)(*plVar21 + 0x18))(plVar21);
                            }
                            if ((*pcVar3 == '\0') || (local_318[0] != &DAT_4355e65a738c7bd3)) {
                              if ((puVar23 != &DAT_cbf29ce484222645) && (puVar14 == puVar23)) {
                                puVar14 = (undefined1 *)(lVar7 + 0x2088);
                                goto LAB_01b29564;
                              }
                            }
                            else {
                              *(undefined1 *)(plVar12 + 0x45) = 1;
                            }
                            if (plVar21 != (long *)0x0) {
LAB_01b29570:
                              (**(code **)(*plVar21 + 0x20))(plVar21);
                            }
                          }
                          if (plVar9 != (long *)0x0) {
                            (**(code **)(*plVar9 + 0x20))(plVar9);
                          }
                          plVar9 = plVar12 + 10;
                          do {
                            iVar17 = (int)*plVar9 + -1;
                            cVar5 = '\x01';
                            bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                            if (bVar6) {
                              *(int *)plVar9 = iVar17;
                              cVar5 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar5 != '\0');
                          if (iVar17 == 0) {
                            (**(code **)(*plVar12 + 0x10))(plVar12);
                          }
                        }
                        if (plVar13 != (long *)0x0) {
                          plVar12 = plVar13 + 10;
                          do {
                            iVar17 = (int)*plVar12 + -1;
                            cVar5 = '\x01';
                            bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                            if (bVar6) {
                              *(int *)plVar12 = iVar17;
                              cVar5 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar5 != '\0');
                          if (iVar17 == 0) {
                            (**(code **)(*plVar13 + 0x10))();
                          }
                        }
                        local_3a0 = local_3a0 + 1;
                      } while (local_3a0 != plVar20);
                    }
                    do {
                      iVar17 = (int)*plVar2 + -1;
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                      if (bVar6) {
                        *(int *)plVar2 = iVar17;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (iVar17 == 0) {
                      (**(code **)(*plVar19 + 0x10))();
                    }
                  }
                }
              }
              if (local_78 != (long *)0x0) {
                lVar7 = local_78[0xb];
                piVar1 = (int *)(lVar7 + 0xc);
                do {
                  iVar17 = *piVar1;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = iVar17 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar17 + -1 == 0) {
                  *(undefined8 *)(lVar7 + 0x18) = 0;
                  (**(code **)(*local_78 + 0x20))();
                }
              }
              if (local_80 != (long *)0x0) {
                lVar7 = local_80[0xb];
                piVar1 = (int *)(lVar7 + 0xc);
                do {
                  iVar17 = *piVar1;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = iVar17 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar17 + -1 == 0) {
                  *(undefined8 *)(lVar7 + 0x18) = 0;
                  (**(code **)(*local_80 + 0x20))();
                }
              }
              FUN_01b2b168(auStack_2c8);
              if (local_2e0 != (long *)0x0) {
                (**(code **)(*local_2e0 + 0x20))();
              }
              if (local_2e8 != (long *)0x0) {
                (**(code **)(*local_2e8 + 0x20))();
              }
              if (local_2f0 != (long *)0x0) {
                (**(code **)(*local_2f0 + 0x20))();
              }
              if (local_2f8 != (long *)0x0) {
                (**(code **)(*local_2f8 + 0x20))();
              }
              if (local_300 != (long *)0x0) {
                (**(code **)(*local_300 + 0x20))();
              }
              local_328 = local_328 + 0x2b0;
            } while (local_328 != param_1 + 0x1fe8);
          }
          lVar16 = *(long *)(lVar16 + 8);
          piVar1 = (int *)(lVar16 + 0xc);
          do {
            iVar17 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar17 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar17 + -1 == 0) {
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*plVar18 + 0x20))();
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar17 = iVar15;
    } while (iVar15 != 0);
  }
  return;
}


