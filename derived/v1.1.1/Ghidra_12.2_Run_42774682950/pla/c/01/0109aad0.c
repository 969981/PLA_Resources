/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0109aad0; name: FUN_0109aad0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0109aad0(undefined4 *param_1)

{
  uint uVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  ushort uVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ushort *puVar22;
  ushort *puVar23;
  uint uVar24;
  ushort *puVar25;
  ushort *puVar26;
  uint uVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  long *plVar32;
  long *plVar33;
  int local_b8;
  long *local_a8;
  long *local_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  long *local_88;
  undefined8 uStack_80;
  long *local_78;
  long local_70;
  long local_68;
  
  puVar8 = PTR_DAT_04379678;
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379678), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  puVar10 = PTR_DAT_04379688;
  puVar9 = PTR_DAT_04379680;
  lVar19 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar19;
  plVar28 = *(long **)(lVar19 + 0xc0);
  if (plVar28 != (long *)0x0) {
    lVar19 = plVar28[0xb];
    if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) {
LAB_0109b5a4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar19 + 0x10) == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
      *(undefined8 *)(lVar19 + 0x10) = uVar15;
    }
    piVar2 = (int *)(lVar19 + 0xc);
    do {
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar11) {
        *piVar2 = *piVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_68 = plVar28[0x18];
  local_70 = local_68 + plVar28[0x19] * 8;
  FUN_0109c330(&local_88,&local_68,&local_70);
  if (local_88 != (long *)(plVar28[0x18] + plVar28[0x19] * 8)) {
    plVar30 = (long *)*local_88;
    puVar16 = (undefined8 *)(**(code **)plVar30[10])(plVar30 + 10);
    if (((*PTR_DAT_0437c678 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar13 != 0)) {
      uVar15 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437c680 = uVar15;
      __cxa_guard_release(PTR_DAT_0437c678);
    }
    if (puVar16 != (undefined8 *)0x0) {
LAB_0109abc4:
      if (puVar16 != (undefined8 *)PTR_DAT_0437c680) goto LAB_0109acbc;
      lVar19 = plVar30[0xb];
      if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_0109b5a4;
      if (*(long *)(lVar19 + 0x10) == 0) {
        uVar15 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
        *(undefined8 *)(lVar19 + 0x10) = uVar15;
      }
      piVar2 = (int *)(lVar19 + 0xc);
      do {
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar11) {
          *piVar2 = *piVar2 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        plVar29 = plVar30;
      } while (cVar6 != '\0');
LAB_0109ac08:
      if (plVar29 == (long *)0x0) goto LAB_0109ac48;
      if (plVar29[0x1a] == 0) {
        local_88 = (long *)0x0;
        uStack_80 = 0;
      }
      else {
        local_88 = (long *)0x0;
        uStack_80 = 0;
        FUN_019d08dc(&local_88,plVar29[0x1a] + 0x1c0);
        plVar30 = local_88;
        if (local_88 != (long *)0x0) {
          if (*(int *)((long)local_88 + 0xc) == 0) {
LAB_0109b1c0:
            local_a0 = (long *)0x0;
            plVar30 = local_88;
          }
          else {
            piVar2 = (int *)((long)local_88 + 0xc);
            iVar13 = *(int *)((long)local_88 + 0xc);
            while( true ) {
              plVar31 = (long *)plVar30[2];
              if (((*PTR_DAT_0437c668 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_0437c668), iVar12 != 0)) {
                if (((*PTR_DAT_043794d0 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar12 != 0)) {
                  uVar15 = FUN_0087f8f0();
                  *(undefined8 *)PTR_DAT_043794d8 = uVar15;
                  __cxa_guard_release(PTR_DAT_043794d0);
                }
                *(undefined **)PTR_DAT_0437c670 = PTR_DAT_043794d8;
                __cxa_guard_release(PTR_DAT_0437c668);
              }
              while( true ) {
                if (plVar31 == (long *)0x0) goto LAB_0109b1c0;
                if (plVar31 == (long *)PTR_DAT_0437c670) break;
                plVar31 = (long *)*plVar31;
              }
              iVar12 = *piVar2;
              if (iVar12 == iVar13) break;
              ClearExclusiveLocal();
LAB_0109ad60:
              iVar13 = iVar12;
              if (iVar12 == 0) goto LAB_0109b1c0;
            }
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar11) {
              *piVar2 = iVar13 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 != '\0') goto LAB_0109ad60;
            lVar19 = plVar30[3];
            local_a0 = (long *)0x0;
            plVar30 = local_88;
            if (lVar19 != 0) {
              local_a0 = (long *)(lVar19 + -0x50);
            }
          }
          local_88 = plVar30;
          if (plVar30 != (long *)0x0) {
            plVar31 = plVar30 + 1;
            do {
              iVar13 = (int)*plVar31 + -1;
              cVar6 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar31,0x10);
              if (bVar11) {
                *(int *)plVar31 = iVar13;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar13 == 0) {
              plVar30[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar19 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar19;
              local_68 = *plVar30;
              FUN_02a44274(lVar19 + 0xd8,&local_68);
            }
          }
          if (local_a0 != (long *)0x0) {
            plVar30 = (long *)local_a0[0xe];
            if (plVar30 != (long *)0x0) {
              lVar19 = plVar30[0xb];
              if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_0109b5a4;
              if (*(long *)(lVar19 + 0x10) == 0) {
                uVar15 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
                *(undefined8 *)(lVar19 + 0x10) = uVar15;
              }
              piVar2 = (int *)(lVar19 + 0xc);
              do {
                cVar6 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar11) {
                  *piVar2 = *piVar2 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              (**(code **)(*plVar30 + 0x10))(&local_88,plVar30);
              local_98 = (undefined8 *)0x0;
              uStack_90 = 0;
              FUN_0109c02c(&local_98,&local_88);
              plVar31 = local_88;
              if (local_88 != (long *)0x0) {
                plVar17 = local_88 + 1;
                do {
                  iVar13 = (int)*plVar17 + -1;
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                  if (bVar11) {
                    *(int *)plVar17 = iVar13;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (iVar13 == 0) {
                  local_88[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar19 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar19;
                  local_68 = *plVar31;
                  FUN_02a44274(lVar19 + 0xd8,&local_68);
                }
              }
              *(undefined2 *)((long)param_1 + 5) = 0;
              param_1[2] = 0;
              *param_1 = 0;
              *(undefined1 *)(param_1 + 3) = 0;
              if (((*PTR_DAT_04379558 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_04379558), iVar13 != 0)) {
                FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379558);
              }
              lVar19 = *(long *)PTR_DAT_04379560;
              *(long *)PTR_DAT_04379568 = lVar19;
              plVar31 = *(long **)(lVar19 + 0x268);
              if (plVar31 != (long *)0x0) {
                lVar19 = plVar31[0xb];
                if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_0109b5a4;
                if (*(long *)(lVar19 + 0x10) == 0) {
                  uVar15 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
                  *(undefined8 *)(lVar19 + 0x10) = uVar15;
                }
                piVar2 = (int *)(lVar19 + 0xc);
                do {
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar11) {
                    *piVar2 = *piVar2 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              param_1[4] = (int)plVar31[0xf];
              *(undefined1 *)(param_1 + 5) = *(undefined1 *)((long)plVar31 + 0x7d);
              iVar13 = 0;
              puVar22 = (ushort *)((long)param_1 + 0x16);
              puVar23 = (ushort *)(plVar31 + 0x11);
              *(undefined1 *)((long)param_1 + 0x15) = *(undefined1 *)((long)plVar31 + 0x7f);
              uVar14 = 0xd;
              do {
                uVar5 = *puVar23;
                *puVar22 = uVar5;
                if (uVar5 != 0x10) {
                  if (uVar5 != 0) {
                    puVar22 = puVar22 + 1;
                    puVar23 = puVar23 + 1;
                    iVar13 = iVar13 + 1;
                    uVar14 = uVar14 - 1;
                    goto joined_r0x0109af9c;
                  }
                  goto joined_r0x0109b11c;
                }
                puVar25 = puVar23 + 1;
                uVar5 = *puVar25;
                uVar1 = uVar5 + 2;
                bVar11 = uVar14 < uVar1;
                uVar14 = uVar14 - uVar1;
                if (bVar11 || uVar14 == 0) {
                  *puVar22 = 0;
                  goto joined_r0x0109b11c;
                }
                uVar24 = uVar5 + 1;
                uVar27 = uVar24 & 7;
                puVar26 = puVar22 + 1;
                *puVar26 = uVar5;
                if (uVar27 != 0) {
                  lVar19 = 0;
                  do {
                    lVar20 = lVar19;
                    uVar24 = uVar24 - 1;
                    uVar27 = uVar27 - 1;
                    *(undefined2 *)((long)puVar22 + lVar20 + 4) =
                         *(undefined2 *)((long)puVar23 + lVar20 + 4);
                    lVar19 = lVar20 + 2;
                  } while (uVar27 != 0);
                  puVar26 = (ushort *)((long)puVar22 + lVar20 + 4);
                  puVar23 = (ushort *)((long)puVar23 + lVar20 + 2);
                  puVar25 = puVar23 + 1;
                  puVar22 = puVar26;
                }
                if (6 < uVar5) {
                  puVar22 = puVar26;
                  do {
                    puVar22[1] = puVar23[2];
                    puVar22[2] = puVar25[2];
                    puVar22[3] = puVar25[3];
                    puVar22[4] = puVar25[4];
                    puVar22[5] = puVar25[5];
                    puVar22[6] = puVar25[6];
                    puVar23 = puVar25 + 7;
                    puVar22[7] = *puVar23;
                    puVar25 = puVar25 + 8;
                    uVar24 = uVar24 - 8;
                    puVar22 = puVar22 + 8;
                    *puVar22 = *puVar25;
                  } while (uVar24 != 0);
                }
                iVar13 = uVar1 + iVar13;
                puVar23 = puVar25;
joined_r0x0109af9c:
              } while (uVar14 != 0);
              if (iVar13 != 0) {
                puVar22[-1] = 0;
              }
joined_r0x0109b11c:
              puVar16 = local_98;
              if (plVar31 != (long *)0x0) {
                lVar19 = plVar31[0xb];
                piVar2 = (int *)(lVar19 + 0xc);
                do {
                  iVar13 = *piVar2;
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar11) {
                    *piVar2 = iVar13 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (iVar13 + -1 == 0) {
                  *(undefined8 *)(lVar19 + 0x18) = 0;
                  (**(code **)(*plVar31 + 0x20))(plVar31);
                  puVar16 = local_98;
                }
              }
              local_98 = puVar16;
              if (puVar16 != (undefined8 *)0x0) {
                puVar7 = puVar16;
                if (*(int *)((long)puVar16 + 0xc) != 0) {
                  piVar2 = (int *)((long)puVar16 + 0xc);
                  iVar13 = *(int *)((long)puVar16 + 0xc);
LAB_0109b2c0:
                  local_a8 = (long *)puVar16[2];
                  if (((*PTR_DAT_043796e0 & 1) != 0) ||
                     (iVar12 = __cxa_guard_acquire(PTR_DAT_043796e0), iVar12 == 0)) {
                    puVar7 = local_98;
                    if (local_a8 != (long *)0x0) goto LAB_0109b2e0;
                    goto joined_r0x0109bb10;
                  }
                  if (((*PTR_DAT_043794d0 & 1) == 0) &&
                     (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar12 != 0)) {
                    uVar15 = FUN_0087f8f0();
                    *(undefined8 *)PTR_DAT_043794d8 = uVar15;
                    __cxa_guard_release(PTR_DAT_043794d0);
                  }
                  *(undefined **)PTR_DAT_043796e8 = PTR_DAT_043794d8;
                  __cxa_guard_release(PTR_DAT_043796e0);
                  while( true ) {
                    puVar7 = local_98;
                    if (local_a8 == (long *)0x0) goto joined_r0x0109bb10;
LAB_0109b2e0:
                    if (local_a8 == (long *)PTR_DAT_043796e8) break;
                    local_a8 = (long *)*local_a8;
                  }
                  iVar12 = *piVar2;
                  puVar7 = local_98;
                  if (iVar12 == iVar13) {
                    cVar6 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar11) {
                      *piVar2 = iVar13 + 1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                    if (cVar6 == '\0') {
                      lVar19 = puVar16[3];
                      if (lVar19 == 0) goto joined_r0x0109bb10;
                      plVar17 = (long *)(lVar19 + -0x50);
                      FUN_0199d058(&local_88);
                      plVar31 = local_88;
                      if (local_88 != (long *)0x0) {
                        if (*(int *)((long)local_88 + 0xc) == 0) {
LAB_0109b740:
                          plVar33 = (long *)0x0;
                          plVar3 = local_88;
                        }
                        else {
                          piVar2 = (int *)((long)local_88 + 0xc);
                          local_b8 = *(int *)((long)local_88 + 0xc);
                          while( true ) {
                            puVar16 = (undefined8 *)plVar31[2];
                            if (((*PTR_DAT_04379d80 & 1) == 0) &&
                               (iVar13 = __cxa_guard_acquire(PTR_DAT_04379d80), iVar13 != 0)) {
                              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                                 (iVar13 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar13 != 0)) {
                                uVar15 = FUN_0087f8f0();
                                *(undefined8 *)PTR_DAT_043794d8 = uVar15;
                                __cxa_guard_release(PTR_DAT_043794d0);
                              }
                              *(undefined **)PTR_DAT_04379d88 = PTR_DAT_043794d8;
                              __cxa_guard_release(PTR_DAT_04379d80);
                            }
                            plVar33 = (long *)0x0;
                            plVar3 = local_88;
                            if (puVar16 == (undefined8 *)0x0) break;
                            while (puVar16 != (undefined8 *)PTR_DAT_04379d88) {
                              puVar16 = (undefined8 *)*puVar16;
                              if (puVar16 == (undefined8 *)0x0) {
                                plVar33 = (long *)0x0;
                                goto joined_r0x0109bb68;
                              }
                            }
                            iVar13 = *piVar2;
                            if (iVar13 == local_b8) {
                              cVar6 = '\x01';
                              bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                              if (bVar11) {
                                *piVar2 = local_b8 + 1;
                                cVar6 = ExclusiveMonitorsStatus();
                              }
                              if (cVar6 == '\0') {
                                lVar20 = plVar31[3];
                                plVar33 = (long *)0x0;
                                if (lVar20 != 0) {
                                  plVar33 = (long *)(lVar20 + -0x50);
                                }
                                break;
                              }
                            }
                            else {
                              ClearExclusiveLocal();
                            }
                            local_b8 = iVar13;
                            if (iVar13 == 0) goto LAB_0109b740;
                          }
                        }
joined_r0x0109bb68:
                        local_88 = plVar3;
                        if (plVar3 != (long *)0x0) {
                          plVar31 = plVar3 + 1;
                          do {
                            iVar13 = (int)*plVar31 + -1;
                            cVar6 = '\x01';
                            bVar11 = (bool)ExclusiveMonitorPass(plVar31,0x10);
                            if (bVar11) {
                              *(int *)plVar31 = iVar13;
                              cVar6 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar6 != '\0');
                          if (iVar13 == 0) {
                            plVar3[2] = 0;
                            if (((*PTR_DAT_04379498 & 1) == 0) &&
                               (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                              __cxa_guard_release(PTR_DAT_04379498);
                            }
                            lVar20 = *(long *)PTR_DAT_043794a0;
                            *(long *)PTR_DAT_043794a8 = lVar20;
                            local_68 = *plVar3;
                            FUN_02a44274(lVar20 + 0xd8,&local_68);
                          }
                        }
                        if (plVar33 != (long *)0x0) {
                          uVar14 = FUN_025acbdc(plVar33);
                          if (uVar14 < 2) {
                            *(undefined1 *)((long)param_1 + 5) = 1;
                          }
                          else if (uVar14 == 3) {
                            *(undefined1 *)((long)param_1 + 6) = 1;
                          }
                          else if (uVar14 == 2) {
                            *(undefined1 *)((long)param_1 + 5) = 1;
                            *(undefined1 *)((long)param_1 + 7) = 1;
                          }
                          iVar13 = FUN_025acf2c(plVar33);
                          *(bool *)((long)param_1 + 9) = iVar13 == 3;
                          lVar20 = plVar33[0xb];
                          piVar2 = (int *)(lVar20 + 0xc);
                          do {
                            iVar13 = *piVar2;
                            cVar6 = '\x01';
                            bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                            if (bVar11) {
                              *piVar2 = iVar13 + -1;
                              cVar6 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar6 != '\0');
                          if (iVar13 + -1 == 0) {
                            *(undefined8 *)(lVar20 + 0x18) = 0;
                            (**(code **)(*plVar33 + 0x20))(plVar33);
                          }
                        }
                      }
                      FUN_0199edc8(&local_88,plVar17);
                      plVar31 = local_88;
                      if (local_88 != (long *)0x0) {
                        if (*(int *)((long)local_88 + 0xc) == 0) {
LAB_0109b848:
                          plVar33 = (long *)0x0;
                          plVar3 = local_88;
                        }
                        else {
                          piVar2 = (int *)((long)local_88 + 0xc);
                          local_b8 = *(int *)((long)local_88 + 0xc);
                          while( true ) {
                            puVar16 = (undefined8 *)plVar31[2];
                            if (((*PTR_DAT_043796f0 & 1) == 0) &&
                               (iVar13 = __cxa_guard_acquire(PTR_DAT_043796f0), iVar13 != 0)) {
                              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                                 (iVar13 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar13 != 0)) {
                                uVar15 = FUN_0087f8f0();
                                *(undefined8 *)PTR_DAT_043794d8 = uVar15;
                                __cxa_guard_release(PTR_DAT_043794d0);
                              }
                              *(undefined **)PTR_DAT_043796f8 = PTR_DAT_043794d8;
                              __cxa_guard_release(PTR_DAT_043796f0);
                            }
                            plVar33 = (long *)0x0;
                            plVar3 = local_88;
                            if (puVar16 == (undefined8 *)0x0) break;
                            while (puVar16 != (undefined8 *)PTR_DAT_043796f8) {
                              puVar16 = (undefined8 *)*puVar16;
                              if (puVar16 == (undefined8 *)0x0) {
                                plVar33 = (long *)0x0;
                                goto joined_r0x0109bc30;
                              }
                            }
                            iVar13 = *piVar2;
                            if (iVar13 == local_b8) {
                              cVar6 = '\x01';
                              bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                              if (bVar11) {
                                *piVar2 = local_b8 + 1;
                                cVar6 = ExclusiveMonitorsStatus();
                              }
                              if (cVar6 == '\0') {
                                lVar20 = plVar31[3];
                                plVar33 = (long *)0x0;
                                if (lVar20 != 0) {
                                  plVar33 = (long *)(lVar20 + -0x50);
                                }
                                break;
                              }
                            }
                            else {
                              ClearExclusiveLocal();
                            }
                            local_b8 = iVar13;
                            if (iVar13 == 0) goto LAB_0109b848;
                          }
                        }
joined_r0x0109bc30:
                        local_88 = plVar3;
                        if (plVar3 != (long *)0x0) {
                          plVar31 = plVar3 + 1;
                          do {
                            iVar13 = (int)*plVar31 + -1;
                            cVar6 = '\x01';
                            bVar11 = (bool)ExclusiveMonitorPass(plVar31,0x10);
                            if (bVar11) {
                              *(int *)plVar31 = iVar13;
                              cVar6 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar6 != '\0');
                          if (iVar13 == 0) {
                            plVar3[2] = 0;
                            if (((*PTR_DAT_04379498 & 1) == 0) &&
                               (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                              __cxa_guard_release(PTR_DAT_04379498);
                            }
                            lVar20 = *(long *)PTR_DAT_043794a0;
                            *(long *)PTR_DAT_043794a8 = lVar20;
                            local_68 = *plVar3;
                            FUN_02a44274(lVar20 + 0xd8,&local_68);
                          }
                        }
                        if (plVar33 != (long *)0x0) {
                          uVar18 = FUN_01f26cf4(plVar33,&DAT_03a7d1b0);
                          if ((uVar18 & 1) != 0) {
                            FUN_0199c708(&local_88,plVar17);
                            uVar14 = FUN_025993f4(local_88);
                            if (local_88 != (long *)0x0) {
                              lVar20 = local_88[0xb];
                              piVar2 = (int *)(lVar20 + 0xc);
                              do {
                                iVar13 = *piVar2;
                                cVar6 = '\x01';
                                bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                                if (bVar11) {
                                  *piVar2 = iVar13 + -1;
                                  cVar6 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar6 != '\0');
                              if (iVar13 + -1 == 0) {
                                *(undefined8 *)(lVar20 + 0x18) = 0;
                                (**(code **)(*local_88 + 0x20))();
                              }
                            }
                            if ((uVar14 | 4) == 7) {
                              *(undefined1 *)(param_1 + 2) = 1;
                            }
                          }
                          lVar20 = plVar33[0xb];
                          piVar2 = (int *)(lVar20 + 0xc);
                          do {
                            iVar13 = *piVar2;
                            cVar6 = '\x01';
                            bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                            if (bVar11) {
                              *piVar2 = iVar13 + -1;
                              cVar6 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar6 != '\0');
                          if (iVar13 + -1 == 0) {
                            *(undefined8 *)(lVar20 + 0x18) = 0;
                            (**(code **)(*plVar33 + 0x20))(plVar33);
                          }
                        }
                      }
                      FUN_0199edc8(&local_88,plVar17);
                      plVar31 = local_88;
                      if (local_88 != (long *)0x0) {
                        if (*(int *)((long)local_88 + 0xc) == 0) {
LAB_0109b93c:
                          plVar31 = (long *)0x0;
                          plVar33 = local_88;
                        }
                        else {
                          piVar2 = (int *)((long)local_88 + 0xc);
                          iVar13 = *(int *)((long)local_88 + 0xc);
                          while( true ) {
                            plVar33 = (long *)plVar31[2];
                            if (((*PTR_DAT_043796f0 & 1) == 0) &&
                               (iVar12 = __cxa_guard_acquire(PTR_DAT_043796f0), iVar12 != 0)) {
                              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                                 (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar12 != 0)) {
                                uVar15 = FUN_0087f8f0();
                                *(undefined8 *)PTR_DAT_043794d8 = uVar15;
                                __cxa_guard_release(PTR_DAT_043794d0);
                              }
                              *(undefined **)PTR_DAT_043796f8 = PTR_DAT_043794d8;
                              __cxa_guard_release(PTR_DAT_043796f0);
                            }
                            while( true ) {
                              if (plVar33 == (long *)0x0) goto LAB_0109b93c;
                              if (plVar33 == (long *)PTR_DAT_043796f8) break;
                              plVar33 = (long *)*plVar33;
                            }
                            iVar12 = *piVar2;
                            if (iVar12 == iVar13) break;
                            ClearExclusiveLocal();
LAB_0109b934:
                            iVar13 = iVar12;
                            if (iVar12 == 0) goto LAB_0109b93c;
                          }
                          cVar6 = '\x01';
                          bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                          if (bVar11) {
                            *piVar2 = iVar13 + 1;
                            cVar6 = ExclusiveMonitorsStatus();
                          }
                          if (cVar6 != '\0') goto LAB_0109b934;
                          lVar20 = plVar31[3];
                          plVar31 = (long *)0x0;
                          plVar33 = local_88;
                          if (lVar20 != 0) {
                            plVar31 = (long *)(lVar20 + -0x50);
                          }
                        }
                        local_88 = plVar33;
                        if (plVar33 != (long *)0x0) {
                          plVar3 = plVar33 + 1;
                          do {
                            iVar13 = (int)*plVar3 + -1;
                            cVar6 = '\x01';
                            bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                            if (bVar11) {
                              *(int *)plVar3 = iVar13;
                              cVar6 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar6 != '\0');
                          if (iVar13 == 0) {
                            plVar33[2] = 0;
                            if (((*PTR_DAT_04379498 & 1) == 0) &&
                               (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                              __cxa_guard_release(PTR_DAT_04379498);
                            }
                            lVar20 = *(long *)PTR_DAT_043794a0;
                            *(long *)PTR_DAT_043794a8 = lVar20;
                            local_68 = *plVar33;
                            FUN_02a44274(lVar20 + 0xd8,&local_68);
                          }
                        }
                        if (plVar31 != (long *)0x0) {
                          lVar20 = FUN_01f25c00(plVar31,&DAT_03a7d198);
                          if (lVar20 == -0x61ab459effaf32e7) {
                            *(undefined1 *)((long)param_1 + 1) = 1;
                          }
                          else if (lVar20 == -0x7a2c7575cab44f66) {
                            *(undefined1 *)((long)param_1 + 2) = 1;
                          }
                          lVar20 = plVar31[0xb];
                          piVar2 = (int *)(lVar20 + 0xc);
                          do {
                            iVar13 = *piVar2;
                            cVar6 = '\x01';
                            bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                            if (bVar11) {
                              *piVar2 = iVar13 + -1;
                              cVar6 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar6 != '\0');
                          if (iVar13 + -1 == 0) {
                            *(undefined8 *)(lVar20 + 0x18) = 0;
                            (**(code **)(*plVar31 + 0x20))(plVar31);
                          }
                        }
                      }
                      FUN_00947cf8(&local_78,&DAT_03996322);
                      if (((*puVar8 & 1) == 0) &&
                         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379678), iVar13 != 0)) {
                        FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379678);
                      }
                      lVar20 = *(long *)puVar9;
                      *(long *)puVar10 = lVar20;
                      plVar31 = *(long **)(lVar20 + 0xc0);
                      if (plVar31 != (long *)0x0) {
                        lVar20 = plVar31[0xb];
                        if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_0109b5a4;
                        if (*(long *)(lVar20 + 0x10) == 0) {
                          uVar15 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
                          *(undefined8 *)(lVar20 + 0x10) = uVar15;
                        }
                        piVar2 = (int *)(lVar20 + 0xc);
                        do {
                          cVar6 = '\x01';
                          bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                          if (bVar11) {
                            *piVar2 = *piVar2 + 1;
                            cVar6 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar6 != '\0');
                      }
                      local_68 = plVar31[0x18];
                      local_70 = local_68 + plVar31[0x19] * 8;
                      FUN_0109c330(&local_88,&local_68,&local_70);
                      if (local_88 != (long *)(plVar31[0x18] + plVar31[0x19] * 8)) {
                        plVar33 = (long *)*local_88;
                        puVar16 = (undefined8 *)(**(code **)plVar33[10])(plVar33 + 10);
                        if (((*PTR_DAT_0437c678 & 1) == 0) &&
                           (iVar13 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar13 != 0)) {
                          uVar15 = FUN_009311a8();
                          *(undefined8 *)PTR_DAT_0437c680 = uVar15;
                          __cxa_guard_release(PTR_DAT_0437c678);
                        }
                        for (; puVar16 != (undefined8 *)0x0; puVar16 = (undefined8 *)*puVar16) {
                          if (puVar16 == (undefined8 *)PTR_DAT_0437c680) {
                            lVar20 = plVar33[0xb];
                            if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0)
                            goto LAB_0109b5a4;
                            if (*(long *)(lVar20 + 0x10) == 0) {
                              uVar15 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
                              *(undefined8 *)(lVar20 + 0x10) = uVar15;
                            }
                            piVar2 = (int *)(lVar20 + 0xc);
                            do {
                              cVar6 = '\x01';
                              bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                              if (bVar11) {
                                *piVar2 = *piVar2 + 1;
                                cVar6 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar6 != '\0');
                            if (plVar33 == (long *)0x0) break;
                            if (plVar33[0x1a] == 0) {
                              local_88 = (long *)0x0;
                              uStack_80 = 0;
                            }
                            else {
                              local_88 = (long *)0x0;
                              uStack_80 = 0;
                              FUN_019d08dc(&local_88,plVar33[0x1a] + 0x1c0);
                              plVar3 = local_88;
                              puVar8 = PTR_DAT_0437c668;
                              if (local_88 != (long *)0x0) {
                                if (*(int *)((long)local_88 + 0xc) == 0) {
LAB_0109bab0:
                                  plVar3 = (long *)0x0;
                                  plVar32 = local_88;
                                }
                                else {
                                  piVar2 = (int *)((long)local_88 + 0xc);
                                  iVar13 = *(int *)((long)local_88 + 0xc);
                                  while( true ) {
                                    plVar32 = (long *)plVar3[2];
                                    if (((*puVar8 & 1) == 0) &&
                                       (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
                                      if (((*PTR_DAT_043794d0 & 1) == 0) &&
                                         (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0),
                                         iVar12 != 0)) {
                                        uVar15 = FUN_0087f8f0();
                                        *(undefined8 *)PTR_DAT_043794d8 = uVar15;
                                        __cxa_guard_release(PTR_DAT_043794d0);
                                      }
                                      *(undefined **)PTR_DAT_0437c670 = PTR_DAT_043794d8;
                                      __cxa_guard_release(puVar8);
                                    }
                                    while( true ) {
                                      if (plVar32 == (long *)0x0) goto LAB_0109bab0;
                                      if (plVar32 == (long *)PTR_DAT_0437c670) break;
                                      plVar32 = (long *)*plVar32;
                                    }
                                    iVar12 = *piVar2;
                                    if (iVar12 == iVar13) break;
                                    ClearExclusiveLocal();
LAB_0109baa8:
                                    iVar13 = iVar12;
                                    if (iVar12 == 0) goto LAB_0109bab0;
                                  }
                                  cVar6 = '\x01';
                                  bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                                  if (bVar11) {
                                    *piVar2 = iVar13 + 1;
                                    cVar6 = ExclusiveMonitorsStatus();
                                  }
                                  if (cVar6 != '\0') goto LAB_0109baa8;
                                  lVar20 = plVar3[3];
                                  plVar3 = (long *)0x0;
                                  plVar32 = local_88;
                                  if (lVar20 != 0) {
                                    plVar3 = (long *)(lVar20 + -0x50);
                                  }
                                }
                                local_88 = plVar32;
                                if (plVar32 != (long *)0x0) {
                                  plVar4 = plVar32 + 1;
                                  do {
                                    iVar13 = (int)*plVar4 + -1;
                                    cVar6 = '\x01';
                                    bVar11 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                                    if (bVar11) {
                                      *(int *)plVar4 = iVar13;
                                      cVar6 = ExclusiveMonitorsStatus();
                                    }
                                  } while (cVar6 != '\0');
                                  if (iVar13 == 0) {
                                    plVar32[2] = 0;
                                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                                       (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)
                                       ) {
                                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,
                                                   &PTR_LOOP_0411a000);
                                      __cxa_guard_release(PTR_DAT_04379498);
                                    }
                                    lVar20 = *(long *)PTR_DAT_043794a0;
                                    *(long *)PTR_DAT_043794a8 = lVar20;
                                    local_68 = *plVar32;
                                    FUN_02a44274(lVar20 + 0xd8,&local_68);
                                  }
                                }
                                if (plVar3 != (long *)0x0) {
                                  puVar16 = (undefined8 *)FUN_0196bd2c(plVar3);
                                  plVar32 = (long *)*puVar16;
                                  if (plVar32 != (long *)0x0) {
                                    (**(code **)(*plVar32 + 0x18))(plVar32);
                                  }
                                  if (local_78 != (long *)0x0) {
                                    lVar20 = *local_78;
                                    local_78 = plVar32;
                                    (**(code **)(lVar20 + 0x20))();
                                    plVar32 = local_78;
                                  }
                                  local_78 = plVar32;
                                  lVar20 = plVar3[0xb];
                                  piVar2 = (int *)(lVar20 + 0xc);
                                  do {
                                    iVar13 = *piVar2;
                                    cVar6 = '\x01';
                                    bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                                    if (bVar11) {
                                      *piVar2 = iVar13 + -1;
                                      cVar6 = ExclusiveMonitorsStatus();
                                    }
                                  } while (cVar6 != '\0');
                                  if (iVar13 + -1 == 0) {
                                    *(undefined8 *)(lVar20 + 0x18) = 0;
                                    (**(code **)(*plVar3 + 0x20))(plVar3);
                                  }
                                }
                              }
                            }
                            lVar20 = plVar33[0xb];
                            piVar2 = (int *)(lVar20 + 0xc);
                            do {
                              iVar13 = *piVar2;
                              cVar6 = '\x01';
                              bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                              if (bVar11) {
                                *piVar2 = iVar13 + -1;
                                cVar6 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar6 != '\0');
                            if (iVar13 + -1 == 0) {
                              *(undefined8 *)(lVar20 + 0x18) = 0;
                              (**(code **)(*plVar33 + 0x20))(plVar33);
                            }
                            break;
                          }
                        }
                      }
                      plVar33 = (long *)PTR_DAT_04379c88;
                      if (local_78 != (long *)0x0) {
                        plVar33 = local_78 + 0xb;
                      }
                      lVar20 = *plVar33;
                      if (plVar31 != (long *)0x0) {
                        lVar21 = plVar31[0xb];
                        piVar2 = (int *)(lVar21 + 0xc);
                        do {
                          iVar13 = *piVar2;
                          cVar6 = '\x01';
                          bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                          if (bVar11) {
                            *piVar2 = iVar13 + -1;
                            cVar6 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar6 != '\0');
                        if (iVar13 + -1 == 0) {
                          *(undefined8 *)(lVar21 + 0x18) = 0;
                          (**(code **)(*plVar31 + 0x20))(plVar31);
                        }
                      }
                      if (local_78 != (long *)0x0) {
                        (**(code **)(*local_78 + 0x20))();
                      }
                      *(undefined1 *)((long)param_1 + 3) = 0;
                      *(bool *)param_1 = lVar20 == -0x1c4415fb859bae62;
                      lVar19 = *(long *)(lVar19 + 8);
                      piVar2 = (int *)(lVar19 + 0xc);
                      do {
                        iVar13 = *piVar2;
                        cVar6 = '\x01';
                        bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                        if (bVar11) {
                          *piVar2 = iVar13 + -1;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                      puVar7 = local_98;
                      if (iVar13 + -1 == 0) {
                        *(undefined8 *)(lVar19 + 0x18) = 0;
                        (**(code **)(*plVar17 + 0x20))();
                        puVar7 = local_98;
                      }
                      goto joined_r0x0109bb10;
                    }
                  }
                  else {
                    ClearExclusiveLocal();
                  }
                  iVar13 = iVar12;
                  if (iVar12 == 0) goto joined_r0x0109bb10;
                  goto LAB_0109b2c0;
                }
joined_r0x0109bb10:
                local_98 = puVar7;
                if (puVar7 != (undefined8 *)0x0) {
                  piVar2 = (int *)(puVar7 + 1);
                  do {
                    iVar13 = *piVar2;
                    cVar6 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar11) {
                      *piVar2 = iVar13 + -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (iVar13 + -1 == 0) {
                    puVar7[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar19 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar19;
                    local_88 = (long *)*puVar7;
                    FUN_02a44274(lVar19 + 0xd8,&local_88);
                  }
                }
              }
              lVar19 = plVar30[0xb];
              piVar2 = (int *)(lVar19 + 0xc);
              do {
                iVar13 = *piVar2;
                cVar6 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar11) {
                  *piVar2 = iVar13 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar13 + -1 == 0) {
                *(undefined8 *)(lVar19 + 0x18) = 0;
                (**(code **)(*plVar30 + 0x20))(plVar30);
              }
            }
            lVar19 = local_a0[0xb];
            piVar2 = (int *)(lVar19 + 0xc);
            do {
              iVar13 = *piVar2;
              cVar6 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar11) {
                *piVar2 = iVar13 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar13 + -1 == 0) {
              *(undefined8 *)(lVar19 + 0x18) = 0;
              (**(code **)(*local_a0 + 0x20))();
            }
          }
        }
      }
      lVar19 = plVar29[0xb];
      piVar2 = (int *)(lVar19 + 0xc);
      do {
        iVar13 = *piVar2;
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar11) {
          *piVar2 = iVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 + -1 != 0) goto LAB_0109ac48;
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*plVar29 + 0x20))(plVar29);
      if (plVar28 == (long *)0x0) {
        return;
      }
      goto LAB_0109ac4c;
    }
  }
LAB_0109ac48:
  if (plVar28 != (long *)0x0) {
LAB_0109ac4c:
    lVar19 = plVar28[0xb];
    piVar2 = (int *)(lVar19 + 0xc);
    do {
      iVar13 = *piVar2;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar11) {
        *piVar2 = iVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*plVar28 + 0x20))(plVar28);
    }
  }
  return;
LAB_0109acbc:
  puVar16 = (undefined8 *)*puVar16;
  plVar29 = (long *)0x0;
  if (puVar16 == (undefined8 *)0x0) goto LAB_0109ac08;
  goto LAB_0109abc4;
}


