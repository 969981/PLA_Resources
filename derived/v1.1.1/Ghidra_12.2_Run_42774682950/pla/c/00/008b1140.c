/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008b1140; name: FUN_008b1140
 */


undefined8 FUN_008b1140(long param_1)

{
  int *piVar1;
  long *plVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  undefined8 *puVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  long *local_90 [2];
  long *local_80 [2];
  long *local_70;
  long local_68;
  
  switch(*(undefined4 *)(param_1 + 0x90)) {
  case 0:
    FUN_008b1b68(param_1);
    break;
  case 1:
    plVar22 = *(long **)(param_1 + 0x98);
    if (plVar22 != (long *)0x0) {
      lVar17 = plVar22[0xb];
      if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) {
LAB_008b16b0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar17 + 0x10) == 0) {
        uVar16 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
        *(undefined8 *)(lVar17 + 0x10) = uVar16;
      }
      piVar1 = (int *)(lVar17 + 0xc);
      do {
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (plVar22[0xd] == 0) {
        local_80[0] = (long *)0x0;
LAB_008b11d4:
        bVar11 = true;
      }
      else {
        FUN_009c66e4(local_80);
        if (local_80[0] == (long *)0x0) goto LAB_008b11d4;
        bVar11 = (int)local_80[0][0xd] == 3;
        lVar17 = local_80[0][0xb];
        piVar1 = (int *)(lVar17 + 0xc);
        do {
          iVar14 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar14 + -1 == 0) {
          *(undefined8 *)(lVar17 + 0x18) = 0;
          (**(code **)(*local_80[0] + 0x20))();
        }
      }
      lVar17 = plVar22[0xb];
      piVar1 = (int *)(lVar17 + 0xc);
      do {
        iVar14 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar14 + -1 == 0) {
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*plVar22 + 0x20))(plVar22);
      }
      if (!bVar11) {
        return 0;
      }
    }
    iVar14 = 2;
    goto LAB_008b1458;
  case 2:
    FUN_008b1be8(param_1);
    break;
  case 3:
    plVar22 = *(long **)(param_1 + 0x98);
    if (plVar22 != (long *)0x0) {
      lVar17 = plVar22[0xb];
      if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_008b16b0;
      if (*(long *)(lVar17 + 0x10) == 0) {
        uVar16 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
        *(undefined8 *)(lVar17 + 0x10) = uVar16;
      }
      piVar1 = (int *)(lVar17 + 0xc);
      do {
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (plVar22[0xd] == 0) {
        local_80[0] = (long *)0x0;
LAB_008b12f0:
        bVar11 = true;
      }
      else {
        FUN_009c66e4(local_80);
        if (local_80[0] == (long *)0x0) goto LAB_008b12f0;
        bVar11 = (int)local_80[0][0xd] == 3;
        lVar17 = local_80[0][0xb];
        piVar1 = (int *)(lVar17 + 0xc);
        do {
          iVar14 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar14 + -1 == 0) {
          *(undefined8 *)(lVar17 + 0x18) = 0;
          (**(code **)(*local_80[0] + 0x20))();
        }
      }
      lVar17 = plVar22[0xb];
      piVar1 = (int *)(lVar17 + 0xc);
      do {
        iVar14 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar14 + -1 == 0) {
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*plVar22 + 0x20))(plVar22);
      }
      if (!bVar11) {
        return 0;
      }
    }
    iVar14 = 4;
    goto LAB_008b1458;
  case 4:
    FUN_008b1c80(param_1);
    break;
  case 5:
    plVar22 = *(long **)(param_1 + 0x98);
    if (plVar22 != (long *)0x0) {
      lVar17 = plVar22[0xb];
      if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_008b16b0;
      if (*(long *)(lVar17 + 0x10) == 0) {
        uVar16 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
        *(undefined8 *)(lVar17 + 0x10) = uVar16;
      }
      piVar1 = (int *)(lVar17 + 0xc);
      do {
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (plVar22[0xd] == 0) {
        local_80[0] = (long *)0x0;
LAB_008b1268:
        bVar11 = true;
      }
      else {
        FUN_009c66e4(local_80);
        if (local_80[0] == (long *)0x0) goto LAB_008b1268;
        bVar11 = (int)local_80[0][0xd] == 3;
        lVar17 = local_80[0][0xb];
        piVar1 = (int *)(lVar17 + 0xc);
        do {
          iVar14 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar14 + -1 == 0) {
          *(undefined8 *)(lVar17 + 0x18) = 0;
          (**(code **)(*local_80[0] + 0x20))();
        }
      }
      lVar17 = plVar22[0xb];
      piVar1 = (int *)(lVar17 + 0xc);
      do {
        iVar14 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar14 + -1 == 0) {
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*plVar22 + 0x20))(plVar22);
      }
      if (!bVar11) {
        return 0;
      }
    }
    iVar14 = 8;
    if (*(char *)(param_1 + 0x84) != '\0') {
      iVar14 = 6;
    }
    goto LAB_008b1458;
  case 6:
    FUN_008b1d44(param_1);
    break;
  case 7:
    uVar15 = FUN_008b1dcc(param_1);
    if ((uVar15 & 1) == 0) {
      return 0;
    }
    iVar14 = 8;
    goto LAB_008b1458;
  case 8:
    if (*(char *)(param_1 + 0x84) != '\0') {
      FUN_008b2878(param_1);
      uVar16 = FUN_00923c00();
      uVar16 = FUN_00933eec(uVar16,*(undefined1 *)(param_1 + 0x7d));
      FUN_008b2878(param_1);
      lVar17 = FUN_00923bbc();
      plVar22 = (long *)(lVar17 + 0x60);
      if (*plVar22 == 0) {
        lVar21 = 0;
LAB_008b1374:
        lVar18 = FUN_0093210c(uVar16);
        if (lVar18 != 0) {
          piVar1 = (int *)(lVar18 + 0x50);
          do {
            cVar4 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar11) {
              *piVar1 = *piVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        plVar19 = (long *)*plVar22;
        *plVar22 = lVar18;
        if (plVar19 != (long *)0x0) {
          plVar22 = plVar19 + 10;
          do {
            iVar14 = (int)*plVar22 + -1;
            cVar4 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar11) {
              *(int *)plVar22 = iVar14;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar14 == 0) {
            (**(code **)(*plVar19 + 0x10))();
          }
        }
        puVar20 = (undefined8 *)FUN_00931efc(uVar16);
        uVar3 = puVar20[1];
        lVar17 = lVar17 + lVar21 * 0x20;
        *(undefined8 *)(lVar17 + 0x70) = *puVar20;
        *(undefined8 *)(lVar17 + 0x78) = uVar3;
        uVar12 = FUN_00932118(uVar16);
        *(undefined4 *)(lVar17 + 0x68) = uVar12;
      }
      else {
        plVar22 = (long *)(lVar17 + 0x80);
        if (*plVar22 == 0) {
          lVar21 = 1;
          goto LAB_008b1374;
        }
        plVar22 = (long *)(lVar17 + 0xa0);
        if (*plVar22 == 0) {
          lVar21 = 2;
          goto LAB_008b1374;
        }
        plVar22 = (long *)(lVar17 + 0xc0);
        if (*plVar22 == 0) {
          lVar21 = 3;
          goto LAB_008b1374;
        }
        plVar22 = (long *)(lVar17 + 0xe0);
        if (*plVar22 == 0) {
          lVar21 = 4;
          goto LAB_008b1374;
        }
      }
      if (*(char *)(param_1 + 0x84) != '\0') {
        if (*(char *)(param_1 + 0x85) != '\0') {
          FUN_008b2878(param_1);
          uVar16 = FUN_00923bc4();
          FUN_00998db0(&local_70,uVar16,(undefined1 *)(param_1 + 0x7d));
          if (local_70 == (long *)0x0) {
LAB_008b152c:
            cVar4 = *(char *)(param_1 + 0x84);
          }
          else {
            lVar17 = FUN_008a7e50(local_70 + 0x1e,local_80);
            if (lVar17 != 0) {
              FUN_01a73650(local_80);
              plVar22 = local_80[0];
              puVar10 = PTR_DAT_043794d8;
              puVar9 = PTR_DAT_043794d0;
              puVar8 = PTR_DAT_043794c8;
              puVar7 = PTR_DAT_043794b8;
              puVar6 = PTR_DAT_043794b0;
              if (local_80[0] != (long *)0x0) {
                if (*(int *)((long)local_80[0] + 0xc) != 0) {
                  piVar1 = (int *)((long)local_80[0] + 0xc);
                  iVar14 = *(int *)((long)local_80[0] + 0xc);
                  do {
                    plVar19 = (long *)plVar22[2];
                    if (((*puVar6 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar6), iVar13 != 0))
                    {
                      if (((*PTR_DAT_043794c0 & 1) == 0) &&
                         (iVar13 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar13 != 0)) {
                        if (((*puVar9 & 1) == 0) &&
                           (iVar13 = __cxa_guard_acquire(puVar9), iVar13 != 0)) {
                          uVar16 = FUN_0087f8f0();
                          *(undefined8 *)puVar10 = uVar16;
                          __cxa_guard_release(puVar9);
                        }
                        *(undefined **)puVar8 = puVar10;
                        __cxa_guard_release(PTR_DAT_043794c0);
                      }
                      *(undefined **)puVar7 = puVar8;
                      __cxa_guard_release(puVar6);
                    }
                    while( true ) {
                      if (plVar19 == (long *)0x0) goto LAB_008b18b4;
                      if (plVar19 == (long *)puVar7) break;
                      plVar19 = (long *)*plVar19;
                    }
                    iVar13 = *piVar1;
                    if (iVar13 == iVar14) {
                      cVar4 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar11) {
                        *piVar1 = iVar14 + 1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                      if (cVar4 == '\0') {
                        lVar17 = plVar22[3];
                        plVar22 = (long *)0x0;
                        plVar19 = local_80[0];
                        if (lVar17 != 0) {
                          plVar22 = (long *)(lVar17 + -0x50);
                        }
                        goto joined_r0x008b1750;
                      }
                    }
                    else {
                      ClearExclusiveLocal();
                    }
                    iVar14 = iVar13;
                  } while (iVar13 != 0);
                }
LAB_008b18b4:
                plVar22 = (long *)0x0;
                plVar19 = local_80[0];
joined_r0x008b1750:
                local_80[0] = plVar19;
                if (plVar19 != (long *)0x0) {
                  plVar23 = plVar19 + 1;
                  do {
                    iVar14 = (int)*plVar23 + -1;
                    cVar4 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                    if (bVar11) {
                      *(int *)plVar23 = iVar14;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (iVar14 == 0) {
                    plVar19[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar17 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar17;
                    local_68 = *plVar19;
                    FUN_02a44274(lVar17 + 0xd8,&local_68);
                  }
                }
                if (plVar22 != (long *)0x0) {
                  lVar17 = FUN_008b2378(plVar22 + 0x1e,local_80);
                  if (lVar17 != 0) {
                    if (((*PTR_DAT_04379618 & 1) == 0) &&
                       (iVar14 = __cxa_guard_acquire(PTR_DAT_04379618), iVar14 != 0)) {
                      FUN_00100250(&LAB_008b2108,PTR_DAT_04379620,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379618);
                    }
                    *(undefined8 *)PTR_DAT_04379628 = *(undefined8 *)PTR_DAT_04379620;
                    FUN_00ae4f84(local_80);
                    plVar19 = local_80[0];
                    puVar7 = PTR_DAT_04379638;
                    puVar6 = PTR_DAT_04379630;
                    if (local_80[0] != (long *)0x0) {
                      if (*(int *)((long)local_80[0] + 0xc) != 0) {
                        piVar1 = (int *)((long)local_80[0] + 0xc);
                        iVar14 = *(int *)((long)local_80[0] + 0xc);
                        do {
                          plVar23 = (long *)plVar19[2];
                          if (((*puVar6 & 1) == 0) &&
                             (iVar13 = __cxa_guard_acquire(puVar6), iVar13 != 0)) {
                            uVar16 = FUN_008b2784();
                            *(undefined8 *)puVar7 = uVar16;
                            __cxa_guard_release(puVar6);
                          }
                          while( true ) {
                            if (plVar23 == (long *)0x0) goto LAB_008b19c8;
                            if (plVar23 == (long *)puVar7) break;
                            plVar23 = (long *)*plVar23;
                          }
                          iVar13 = *piVar1;
                          if (iVar13 == iVar14) {
                            cVar4 = '\x01';
                            bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                            if (bVar11) {
                              *piVar1 = iVar14 + 1;
                              cVar4 = ExclusiveMonitorsStatus();
                            }
                            if (cVar4 == '\0') {
                              lVar21 = plVar19[3];
                              plVar19 = (long *)0x0;
                              plVar23 = local_80[0];
                              if (lVar21 != 0) {
                                plVar19 = (long *)(lVar21 + -0x50);
                              }
                              goto joined_r0x008b19ec;
                            }
                          }
                          else {
                            ClearExclusiveLocal();
                          }
                          iVar14 = iVar13;
                        } while (iVar13 != 0);
                      }
LAB_008b19c8:
                      plVar19 = (long *)0x0;
                      plVar23 = local_80[0];
joined_r0x008b19ec:
                      local_80[0] = plVar23;
                      if (plVar23 != (long *)0x0) {
                        plVar2 = plVar23 + 1;
                        do {
                          iVar14 = (int)*plVar2 + -1;
                          cVar4 = '\x01';
                          bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                          if (bVar11) {
                            *(int *)plVar2 = iVar14;
                            cVar4 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar4 != '\0');
                        if (iVar14 == 0) {
                          plVar23[2] = 0;
                          if (((*PTR_DAT_04379498 & 1) == 0) &&
                             (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
                            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                            __cxa_guard_release(PTR_DAT_04379498);
                          }
                          lVar21 = *(long *)PTR_DAT_043794a0;
                          *(long *)PTR_DAT_043794a8 = lVar21;
                          local_68 = *plVar23;
                          FUN_02a44274(lVar21 + 0xd8,&local_68);
                        }
                      }
                      if (plVar19 != (long *)0x0) {
                        FUN_00d0ad3c(local_90,lVar17);
                        FUN_00d0bcb0(plVar19,local_90);
                        if (local_90[0] != (long *)0x0) {
                          plVar23 = local_90[0] + 1;
                          do {
                            iVar14 = (int)*plVar23 + -1;
                            cVar4 = '\x01';
                            bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                            if (bVar11) {
                              *(int *)plVar23 = iVar14;
                              cVar4 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar4 != '\0');
                          if (iVar14 == 0) {
                            local_90[0][2] = 0;
                            if (((*PTR_DAT_04379498 & 1) == 0) &&
                               (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
                              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                              __cxa_guard_release(PTR_DAT_04379498);
                            }
                            lVar17 = *(long *)PTR_DAT_043794a0;
                            *(long *)PTR_DAT_043794a8 = lVar17;
                            local_80[0] = (long *)*local_90[0];
                            FUN_02a44274(lVar17 + 0xd8,local_80);
                          }
                        }
                        lVar17 = plVar19[0xb];
                        piVar1 = (int *)(lVar17 + 0xc);
                        do {
                          iVar14 = *piVar1;
                          cVar4 = '\x01';
                          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                          if (bVar11) {
                            *piVar1 = iVar14 + -1;
                            cVar4 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar4 != '\0');
                        if (iVar14 + -1 == 0) {
                          *(undefined8 *)(lVar17 + 0x18) = 0;
                          (**(code **)(*plVar19 + 0x20))(plVar19);
                        }
                      }
                    }
                  }
                  lVar17 = plVar22[0xb];
                  piVar1 = (int *)(lVar17 + 0xc);
                  do {
                    iVar14 = *piVar1;
                    cVar4 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar11) {
                      *piVar1 = iVar14 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (iVar14 + -1 == 0) {
                    *(undefined8 *)(lVar17 + 0x18) = 0;
                    (**(code **)(*plVar22 + 0x20))(plVar22);
                  }
                }
              }
            }
            if (local_70 == (long *)0x0) goto LAB_008b152c;
            lVar17 = local_70[0xb];
            piVar1 = (int *)(lVar17 + 0xc);
            do {
              iVar14 = *piVar1;
              cVar4 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar11) {
                *piVar1 = iVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar14 + -1 != 0) goto LAB_008b152c;
            *(undefined8 *)(lVar17 + 0x18) = 0;
            (**(code **)(*local_70 + 0x20))();
            cVar4 = *(char *)(param_1 + 0x84);
          }
          if (cVar4 == '\0') goto LAB_008b1420;
        }
        FUN_008b2878(param_1);
        uVar16 = FUN_00923c30();
        FUN_009291e8(uVar16,0);
        FUN_008b2878(param_1);
        uVar16 = FUN_00923bc4();
        FUN_009979c4(uVar16,*(undefined1 *)(param_1 + 0x7d),0);
        if (*(char *)(param_1 + 0x84) != '\0') {
          FUN_008b2878(param_1);
          uVar16 = FUN_00923c78();
          FUN_00919c58(uVar16,*(undefined1 *)(param_1 + 0x7d));
        }
      }
    }
LAB_008b1420:
    FUN_00dac5cc(*(undefined4 *)(param_1 + 0x80));
switchD_008b1184_default:
    return 2;
  default:
    goto switchD_008b1184_default;
  }
  iVar14 = *(int *)(param_1 + 0x90) + 1;
LAB_008b1458:
  *(int *)(param_1 + 0x90) = iVar14;
  return 0;
}


