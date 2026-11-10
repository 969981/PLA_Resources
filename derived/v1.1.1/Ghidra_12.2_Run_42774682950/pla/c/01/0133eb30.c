/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0133eb30; name: FUN_0133eb30
 */


ulong FUN_0133eb30(long *param_1,uint param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  long *extraout_x10;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  long *local_5a0;
  long *local_590 [2];
  undefined8 *local_580;
  undefined8 uStack_578;
  char local_80;
  long *local_70 [2];
  
  if (6 < (int)param_2) {
    param_1 = (long *)0x0;
    goto LAB_0133eea0;
  }
  FUN_0131e6e0(&local_580,param_2);
  if (local_80 == '\0') {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(PTR_DAT_04379558), iVar15 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar18 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar18;
    plVar25 = *(long **)(lVar18 + 0x228);
    if (plVar25 == (long *)0x0) {
      bVar4 = true;
    }
    else {
      lVar18 = plVar25[0xb];
      if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_0133f9b4;
      if (*(long *)(lVar18 + 0x10) == 0) {
        uVar16 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
        *(undefined8 *)(lVar18 + 0x10) = uVar16;
      }
      piVar1 = (int *)(lVar18 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      uVar20 = ((long *)plVar25[0x37])[1];
      if (uVar20 != 0) {
        uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
        uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
        uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar21 < 2) {
          uVar22 = uVar20 - 1 & 0x226c40e88a0e7419;
        }
        else if (uVar20 < 0x226c40e88a0e741a) {
          uVar22 = 0;
          if (uVar20 != 0) {
            uVar22 = 0x226c40e88a0e7419 / uVar20;
          }
          uVar22 = 0x226c40e88a0e7419 - uVar22 * uVar20;
        }
        else {
          uVar22 = 0x226c40e88a0e7419;
        }
        plVar24 = *(long **)(*(long *)plVar25[0x37] + uVar22 * 8);
        if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
          if (uVar21 < 2) {
            do {
              if (plVar24[1] == 0x226c40e88a0e7419) {
                if (plVar24[2] == 0x226c40e88a0e7419) goto LAB_0133ed48;
              }
              else if ((plVar24[1] & uVar20 - 1) != uVar22) goto LAB_0133ed80;
              plVar24 = (long *)*plVar24;
              bVar4 = false;
            } while (plVar24 != (long *)0x0);
            goto LAB_0133ed84;
          }
          do {
            uVar21 = plVar24[1];
            if (uVar21 == 0x226c40e88a0e7419) {
              if (plVar24[2] == 0x226c40e88a0e7419) goto LAB_0133ed48;
            }
            else {
              if (uVar20 <= uVar21) {
                uVar8 = 0;
                if (uVar20 != 0) {
                  uVar8 = uVar21 / uVar20;
                }
                uVar21 = uVar21 - uVar8 * uVar20;
              }
              if (uVar21 != uVar22) break;
            }
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
      }
LAB_0133ed80:
      bVar4 = false;
    }
LAB_0133ed84:
    if (*(uint *)((long)param_1 + 0x8c) == param_2) {
      if (((*PTR_DAT_04379678 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379678), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379678);
      }
      lVar18 = *(long *)PTR_DAT_04379680;
      *(long *)PTR_DAT_04379688 = lVar18;
      param_1 = *(long **)(lVar18 + 0xc0);
      if (param_1 == (long *)0x0) {
        FUN_00e8b8e8(local_70,0);
joined_r0x0133f004:
        if (local_70[0] == (long *)0x0) goto LAB_0133ef18;
LAB_0133ee28:
        if (local_70[0][0x1a] == 0) {
          local_580 = (undefined8 *)0x0;
          uStack_578 = 0;
LAB_0133ee48:
          bVar5 = false;
        }
        else {
          local_580 = (undefined8 *)0x0;
          uStack_578 = 0;
          FUN_019d08dc(&local_580,local_70[0][0x1a] + 0x1c0);
          puVar17 = local_580;
          puVar12 = PTR_DAT_0437c670;
          puVar11 = PTR_DAT_0437c668;
          puVar10 = PTR_DAT_043794d8;
          puVar9 = PTR_DAT_043794d0;
          if (local_580 == (undefined8 *)0x0) goto LAB_0133ee48;
          if (*(int *)((long)local_580 + 0xc) != 0) {
            piVar1 = (int *)((long)local_580 + 0xc);
            iVar15 = *(int *)((long)local_580 + 0xc);
            do {
              plVar24 = (long *)puVar17[2];
              if (((*puVar11 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar11), iVar14 != 0)) {
                if (((*puVar9 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar9), iVar14 != 0)) {
                  uVar16 = FUN_0087f8f0();
                  *(undefined8 *)puVar10 = uVar16;
                  __cxa_guard_release(puVar9);
                }
                *(undefined **)puVar12 = puVar10;
                __cxa_guard_release(puVar11);
              }
              while( true ) {
                if (plVar24 == (long *)0x0) goto LAB_0133f3c8;
                if (plVar24 == (long *)puVar12) break;
                plVar24 = (long *)*plVar24;
              }
              iVar14 = *piVar1;
              if (iVar14 == iVar15) {
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar15 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') {
                  lVar18 = puVar17[3];
                  param_1 = (long *)0x0;
                  puVar17 = local_580;
                  if (lVar18 != 0) {
                    param_1 = (long *)(lVar18 + -0x50);
                  }
                  goto joined_r0x0133f0e8;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              iVar15 = iVar14;
            } while (iVar14 != 0);
          }
LAB_0133f3c8:
          param_1 = (long *)0x0;
          puVar17 = local_580;
joined_r0x0133f0e8:
          local_580 = puVar17;
          if (puVar17 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar17 + 1);
            do {
              iVar15 = *piVar1;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar15 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar15 + -1 == 0) {
              puVar17[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar18 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar18;
              local_590[0] = (long *)*puVar17;
              FUN_02a44274(lVar18 + 0xd8,local_590);
            }
          }
          if (param_1 == (long *)0x0) {
            bVar5 = false;
          }
          else {
            plVar24 = (long *)param_1[0xe];
            if (plVar24 == (long *)0x0) {
              bVar5 = false;
            }
            else {
              lVar18 = plVar24[0xb];
              if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_0133f9b4;
              if (*(long *)(lVar18 + 0x10) == 0) {
                uVar16 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
                *(undefined8 *)(lVar18 + 0x10) = uVar16;
              }
              piVar1 = (int *)(lVar18 + 0xc);
              do {
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = *piVar1 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              FUN_0199c220(&local_580,plVar24);
              puVar17 = local_580;
              puVar10 = PTR_DAT_0437a0f0;
              puVar9 = PTR_DAT_0437a0e8;
              if (local_580 == (undefined8 *)0x0) {
LAB_0133f19c:
                bVar5 = false;
              }
              else {
                if (*(int *)((long)local_580 + 0xc) != 0) {
                  piVar1 = (int *)((long)local_580 + 0xc);
                  iVar15 = *(int *)((long)local_580 + 0xc);
                  do {
                    plVar26 = (long *)puVar17[2];
                    if (((*puVar9 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar9), iVar14 != 0))
                    {
                      if (((*PTR_DAT_043794d0 & 1) == 0) &&
                         (iVar14 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar14 != 0)) {
                        uVar16 = FUN_0087f8f0();
                        *(undefined8 *)PTR_DAT_043794d8 = uVar16;
                        __cxa_guard_release(PTR_DAT_043794d0);
                      }
                      *(undefined **)puVar10 = PTR_DAT_043794d8;
                      __cxa_guard_release(puVar9);
                    }
                    while( true ) {
                      if (plVar26 == (long *)0x0) goto LAB_0133f524;
                      if (plVar26 == (long *)puVar10) break;
                      plVar26 = (long *)*plVar26;
                    }
                    iVar14 = *piVar1;
                    if (iVar14 == iVar15) {
                      cVar3 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar5) {
                        *piVar1 = iVar15 + 1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                      if (cVar3 == '\0') {
                        lVar18 = puVar17[3];
                        local_5a0 = (long *)0x0;
                        puVar17 = local_580;
                        if (lVar18 != 0) {
                          local_5a0 = (long *)(lVar18 + -0x50);
                        }
                        goto joined_r0x0133f54c;
                      }
                    }
                    else {
                      ClearExclusiveLocal();
                    }
                    iVar15 = iVar14;
                  } while (iVar14 != 0);
                }
LAB_0133f524:
                local_5a0 = (long *)0x0;
                puVar17 = local_580;
joined_r0x0133f54c:
                local_580 = puVar17;
                if (puVar17 != (undefined8 *)0x0) {
                  piVar1 = (int *)(puVar17 + 1);
                  do {
                    iVar15 = *piVar1;
                    cVar3 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar5) {
                      *piVar1 = iVar15 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar15 + -1 == 0) {
                    puVar17[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar18 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar18;
                    local_590[0] = (long *)*puVar17;
                    FUN_02a44274(lVar18 + 0xd8,local_590);
                  }
                }
                if (local_5a0 == (long *)0x0) goto LAB_0133f19c;
                plVar26 = (long *)local_5a0[0x45];
                if (plVar26 == (long *)0x0) {
                  bVar5 = false;
                }
                else {
                  lVar18 = plVar26[0xb];
                  if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) {
LAB_0133f9b4:
                    /* WARNING: Subroutine does not return */
                    nn::diag::detail::AbortImpl("","","",0);
                  }
                  if (*(long *)(lVar18 + 0x10) == 0) {
                    uVar16 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
                    *(undefined8 *)(lVar18 + 0x10) = uVar16;
                  }
                  piVar1 = (int *)(lVar18 + 0xc);
                  do {
                    cVar3 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar5) {
                      *piVar1 = *piVar1 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  uVar20 = plVar26[0x28];
                  if (uVar20 != 0) {
                    uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
                    uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
                    uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                             0x38;
                    if (uVar21 < 2) {
                      uVar22 = (ulong)((uint)uVar20 - 1) & 6;
                    }
                    else {
                      uVar22 = 6;
                      if (uVar20 < 7) {
                        uVar13 = (uint)uVar20 & 0xff;
                        uVar7 = 0;
                        if ((uVar20 & 0xff) != 0) {
                          uVar7 = 6 / uVar13;
                        }
                        uVar22 = (ulong)(6 - uVar7 * uVar13);
                      }
                    }
                    plVar23 = *(long **)(plVar26[0x27] + uVar22 * 8);
                    if ((plVar23 != (long *)0x0) &&
                       (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
                      if (uVar21 < 2) {
                        do {
                          if (plVar23[1] == 6) {
                            if ((int)plVar23[2] == 6) goto LAB_0133f6fc;
                          }
                          else if ((plVar23[1] & uVar20 - 1) != uVar22) break;
                          plVar23 = (long *)*plVar23;
                        } while (plVar23 != (long *)0x0);
                      }
                      else {
                        do {
                          uVar21 = plVar23[1];
                          if (uVar21 == 6) {
                            if ((int)plVar23[2] == 6) goto LAB_0133f6fc;
                          }
                          else {
                            if (uVar20 <= uVar21) {
                              uVar8 = 0;
                              if (uVar20 != 0) {
                                uVar8 = uVar21 / uVar20;
                              }
                              uVar21 = uVar21 - uVar8 * uVar20;
                            }
                            if (uVar21 != uVar22) break;
                          }
                          plVar23 = (long *)*plVar23;
                        } while (plVar23 != (long *)0x0);
                      }
                    }
                  }
                  FUN_01340780();
                  plVar23 = extraout_x10;
LAB_0133f6fc:
                  plVar23 = (long *)plVar23[3];
                  if (plVar23 != (long *)0x0) {
                    lVar18 = plVar23[0xb];
                    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_0133f9b4;
                    if (*(long *)(lVar18 + 0x10) == 0) {
                      uVar16 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
                      *(undefined8 *)(lVar18 + 0x10) = uVar16;
                    }
                    piVar1 = (int *)(lVar18 + 0xc);
                    do {
                      cVar3 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar5) {
                        *piVar1 = *piVar1 + 1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                  }
                  puVar17 = (undefined8 *)(**(code **)plVar23[10])(plVar23 + 10);
                  puVar9 = PTR_DAT_0437eef0;
                  if (((*PTR_DAT_0437eee8 & 1) == 0) &&
                     (iVar15 = __cxa_guard_acquire(PTR_DAT_0437eee8), puVar10 = PTR_DAT_0437ef00,
                     iVar15 != 0)) {
                    if (((*PTR_DAT_0437eef8 & 1) == 0) &&
                       (iVar15 = __cxa_guard_acquire(PTR_DAT_0437eef8), iVar15 != 0)) {
                      if (((*PTR_DAT_043794d0 & 1) == 0) &&
                         (iVar15 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar15 != 0)) {
                        uVar16 = FUN_0087f8f0();
                        *(undefined8 *)PTR_DAT_043794d8 = uVar16;
                        __cxa_guard_release(PTR_DAT_043794d0);
                      }
                      *(undefined **)puVar10 = PTR_DAT_043794d8;
                      __cxa_guard_release(PTR_DAT_0437eef8);
                    }
                    *(undefined **)puVar9 = puVar10;
                    __cxa_guard_release(PTR_DAT_0437eee8);
                  }
                  for (; puVar17 != (undefined8 *)puVar9; puVar17 = (undefined8 *)*puVar17) {
                  }
                  plVar29 = (long *)plVar23[0x13];
                  if (plVar29 == (long *)0x0) {
                    bVar5 = false;
                  }
                  else {
                    bVar5 = false;
                    do {
                      while( true ) {
                        plVar27 = (long *)plVar29[3];
                        if (plVar27 != (long *)0x0) {
                          lVar18 = plVar27[0xb];
                          if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0)
                          goto LAB_0133f9b4;
                          if (*(long *)(lVar18 + 0x10) == 0) {
                            uVar16 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
                            *(undefined8 *)(lVar18 + 0x10) = uVar16;
                          }
                          piVar1 = (int *)(lVar18 + 0xc);
                          do {
                            cVar3 = '\x01';
                            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                            if (bVar6) {
                              *piVar1 = *piVar1 + 1;
                              cVar3 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar3 != '\0');
                          lVar18 = plVar27[0xb];
                          if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0)
                          goto LAB_0133f9b4;
                          if (*(long *)(lVar18 + 0x10) == 0) {
                            uVar16 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
                            *(undefined8 *)(lVar18 + 0x10) = uVar16;
                          }
                          piVar1 = (int *)(lVar18 + 0xc);
                          do {
                            cVar3 = '\x01';
                            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                            if (bVar6) {
                              *piVar1 = *piVar1 + 1;
                              cVar3 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar3 != '\0');
                        }
                        plVar28 = (long *)plVar27[0xbd];
                        if (plVar28 != (long *)0x0) {
                          plVar2 = plVar28 + 10;
                          do {
                            cVar3 = '\x01';
                            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                            if (bVar6) {
                              *(int *)plVar2 = (int)*plVar2 + 1;
                              cVar3 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar3 != '\0');
                          iVar15 = FUN_02c6849c(plVar28[0x13]);
                          if (iVar15 - 0x281U < 2) {
                            bVar5 = true;
                          }
                          do {
                            iVar15 = (int)*plVar2 + -1;
                            cVar3 = '\x01';
                            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                            if (bVar6) {
                              *(int *)plVar2 = iVar15;
                              cVar3 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar3 != '\0');
                          if (iVar15 == 0) {
                            (**(code **)(*plVar28 + 0x10))(plVar28);
                          }
                        }
                        lVar18 = plVar27[0xb];
                        piVar1 = (int *)(lVar18 + 0xc);
                        do {
                          iVar15 = *piVar1;
                          cVar3 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                          if (bVar6) {
                            *piVar1 = iVar15 + -1;
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar3 != '\0');
                        if (iVar15 + -1 == 0) {
                          *(undefined8 *)(lVar18 + 0x18) = 0;
                          (**(code **)(*plVar27 + 0x20))(plVar27);
                        }
                        lVar18 = plVar27[0xb];
                        piVar1 = (int *)(lVar18 + 0xc);
                        do {
                          iVar15 = *piVar1;
                          cVar3 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                          if (bVar6) {
                            *piVar1 = iVar15 + -1;
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar3 != '\0');
                        if (iVar15 + -1 == 0) break;
                        plVar29 = (long *)*plVar29;
                        if (plVar29 == (long *)0x0) goto LAB_0133f9d0;
                      }
                      *(undefined8 *)(lVar18 + 0x18) = 0;
                      (**(code **)(*plVar27 + 0x20))(plVar27);
                      plVar29 = (long *)*plVar29;
                    } while (plVar29 != (long *)0x0);
                  }
LAB_0133f9d0:
                  if (plVar23 != (long *)0x0) {
                    lVar18 = plVar23[0xb];
                    piVar1 = (int *)(lVar18 + 0xc);
                    do {
                      iVar15 = *piVar1;
                      cVar3 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar6) {
                        *piVar1 = iVar15 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar15 + -1 == 0) {
                      *(undefined8 *)(lVar18 + 0x18) = 0;
                      (**(code **)(*plVar23 + 0x20))(plVar23);
                    }
                  }
                  lVar18 = plVar26[0xb];
                  piVar1 = (int *)(lVar18 + 0xc);
                  do {
                    iVar15 = *piVar1;
                    cVar3 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar6) {
                      *piVar1 = iVar15 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar15 + -1 == 0) {
                    *(undefined8 *)(lVar18 + 0x18) = 0;
                    (**(code **)(*plVar26 + 0x20))();
                  }
                }
                lVar18 = local_5a0[0xb];
                piVar1 = (int *)(lVar18 + 0xc);
                do {
                  iVar15 = *piVar1;
                  cVar3 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = iVar15 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar15 + -1 == 0) {
                  *(undefined8 *)(lVar18 + 0x18) = 0;
                  (**(code **)(*local_5a0 + 0x20))();
                }
              }
              lVar18 = plVar24[0xb];
              piVar1 = (int *)(lVar18 + 0xc);
              do {
                iVar15 = *piVar1;
                cVar3 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = iVar15 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar15 + -1 == 0) {
                *(undefined8 *)(lVar18 + 0x18) = 0;
                (**(code **)(*plVar24 + 0x20))(plVar24);
              }
            }
            lVar18 = param_1[0xb];
            piVar1 = (int *)(lVar18 + 0xc);
            do {
              iVar15 = *piVar1;
              cVar3 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar15 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar15 + -1 == 0) {
              *(undefined8 *)(lVar18 + 0x18) = 0;
              (**(code **)(*param_1 + 0x20))(param_1);
            }
          }
        }
        if (local_70[0] != (long *)0x0) {
          lVar18 = local_70[0][0xb];
          piVar1 = (int *)(lVar18 + 0xc);
          do {
            iVar15 = *piVar1;
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar15 + -1 == 0) {
            *(undefined8 *)(lVar18 + 0x18) = 0;
            (**(code **)(*local_70[0] + 0x20))();
          }
        }
        if (!bVar5) goto LAB_0133ef18;
        uVar20 = FUN_013401f0(param_2);
        param_1 = (long *)(uVar20 & 0xffffffff);
      }
      else {
        lVar18 = param_1[0xb];
        if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_0133f9b4;
        if (*(long *)(lVar18 + 0x10) == 0) {
          uVar16 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
          *(undefined8 *)(lVar18 + 0x10) = uVar16;
        }
        piVar1 = (int *)(lVar18 + 0xc);
        do {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        FUN_00e8b8e8(local_70,param_1);
        lVar18 = param_1[0xb];
        piVar1 = (int *)(lVar18 + 0xc);
        do {
          iVar15 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar15 + -1 == 0) {
          *(undefined8 *)(lVar18 + 0x18) = 0;
          (**(code **)(*param_1 + 0x20))(param_1);
          goto joined_r0x0133f004;
        }
        if (local_70[0] != (long *)0x0) goto LAB_0133ee28;
LAB_0133ef18:
        FUN_0131ddc4(&local_580);
        if ((int)local_580 == 0) {
          uVar13 = FUN_013401f0(param_2);
          goto joined_r0x0133ee98;
        }
        FUN_02599804(local_590);
        plVar24 = local_590[0];
        puVar11 = PTR_DAT_0437eee0;
        puVar10 = PTR_DAT_0437eed8;
        puVar9 = PTR_DAT_043794d0;
        if (local_590[0] == (long *)0x0) {
          param_1 = (long *)0x0;
        }
        else {
          if (*(int *)((long)local_590[0] + 0xc) != 0) {
            piVar1 = (int *)((long)local_590[0] + 0xc);
            iVar15 = *(int *)((long)local_590[0] + 0xc);
            do {
              plVar26 = (long *)plVar24[2];
              if (((*puVar10 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar10), iVar14 != 0)) {
                if (((*puVar9 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar9), iVar14 != 0)) {
                  uVar16 = FUN_0087f8f0();
                  *(undefined8 *)PTR_DAT_043794d8 = uVar16;
                  __cxa_guard_release(puVar9);
                }
                *(undefined **)puVar11 = PTR_DAT_043794d8;
                __cxa_guard_release(puVar10);
              }
              while( true ) {
                if (plVar26 == (long *)0x0) goto LAB_0133f3a0;
                if (plVar26 == (long *)puVar11) break;
                plVar26 = (long *)*plVar26;
              }
              iVar14 = *piVar1;
              if (iVar14 == iVar15) {
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar15 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') {
                  lVar18 = plVar24[3];
                  if (lVar18 == 0) {
                    param_1 = (long *)0x0;
                    plVar24 = local_590[0];
                  }
                  else {
                    uVar13 = *(int *)(lVar18 + 0x68) - 1;
                    param_1 = (long *)(ulong)uVar13;
                    if (7 < uVar13) {
                      uVar20 = FUN_01340430(param_2);
                      param_1 = (long *)(uVar20 & 0xffffffff);
                    }
                    lVar19 = *(long *)(lVar18 + 8);
                    piVar1 = (int *)(lVar19 + 0xc);
                    do {
                      iVar15 = *piVar1;
                      cVar3 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar5) {
                        *piVar1 = iVar15 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    plVar24 = local_590[0];
                    if (iVar15 + -1 == 0) {
                      *(undefined8 *)(lVar19 + 0x18) = 0;
                      (**(code **)(*(long *)(lVar18 + -0x50) + 0x20))((long *)(lVar18 + -0x50));
                      plVar24 = local_590[0];
                    }
                  }
                  goto joined_r0x0133f33c;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              iVar15 = iVar14;
            } while (iVar14 != 0);
          }
LAB_0133f3a0:
          param_1 = (long *)0x0;
          plVar24 = local_590[0];
joined_r0x0133f33c:
          local_590[0] = plVar24;
          if (plVar24 != (long *)0x0) {
            plVar26 = plVar24 + 1;
            do {
              iVar15 = (int)*plVar26 + -1;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar26,0x10);
              if (bVar5) {
                *(int *)plVar26 = iVar15;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar15 == 0) {
              plVar24[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar18 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar18;
              local_70[0] = (long *)*plVar24;
              FUN_02a44274(lVar18 + 0xd8,local_70);
            }
          }
        }
      }
      if (bVar4) goto LAB_0133eea0;
      uVar13 = 0;
      bVar4 = true;
    }
    else {
      uVar13 = FUN_01340430(param_2);
joined_r0x0133ee98:
      if (bVar4) goto LAB_0133ee9c;
      bVar4 = false;
    }
LAB_0133ed5c:
    lVar18 = plVar25[0xb];
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      iVar15 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*plVar25 + 0x20))(plVar25);
    }
    if (bVar4) goto LAB_0133eea0;
  }
  else if (param_1 == (long *)0x0) {
    uVar13 = 0;
  }
  else if (((int)param_1[0x10] == 1) || (*(int *)((long)param_1 + 0x8c) == 5)) {
    if (param_2 < 5) {
      uVar13 = *(uint *)(&DAT_03a7b1fc + (long)(int)param_2 * 4);
    }
    else {
      uVar13 = FUN_01340430(param_2);
    }
  }
  else {
    uVar13 = FUN_013401f0(param_2);
  }
LAB_0133ee9c:
  param_1 = (long *)(ulong)uVar13;
LAB_0133eea0:
  return (ulong)param_1 & 0xffffffff;
LAB_0133ed48:
  if ((char)plVar24[3] == '\0') goto LAB_0133ed80;
  uVar13 = 0;
  bVar4 = true;
  param_1 = (long *)&DAT_00000008;
  goto LAB_0133ed5c;
}


