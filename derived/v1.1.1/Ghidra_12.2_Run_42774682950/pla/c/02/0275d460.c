/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0275d460; name: FUN_0275d460
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0275d460(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long local_108;
  undefined8 *local_100 [2];
  long *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  long alStack_d0 [12];
  long *local_70 [2];
  
  uVar14 = 1;
  switch(*(undefined4 *)(param_1 + 0xa8)) {
  case 0:
    goto switchD_0275d4a8_caseD_0;
  case 1:
    if (((*PTR_DAT_0437e418 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_0437e418), iVar12 != 0)) {
      FUN_00100250(PTR_LAB_0437f2f8,PTR_DAT_0437e420,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437e418);
    }
    lVar19 = *(long *)PTR_DAT_0437e420;
    *(long *)PTR_DAT_0437f2f0 = lVar19;
    if (lVar19 != 0) {
      if ((*(int *)(lVar19 + 0x50) != 0) || ((*(byte *)(lVar19 + 0x60) & 7) != 0)) {
        FUN_0120bd20(param_1 + 0x98);
        if ((double)*(long *)(param_1 + 0xa0) / 1000000.0 < 20000.0) break;
        if (*(int *)(lVar19 + 0x50) != 0) goto LAB_0275d528;
      }
      uVar15 = 2;
      goto LAB_0275d81c;
    }
LAB_0275d528:
    *(undefined4 *)(param_1 + 0xa8) = 0;
    break;
  case 2:
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_04379678), iVar12 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar19 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar19;
    plVar18 = *(long **)(lVar19 + 0xc0);
    if (plVar18 != (long *)0x0) {
      lVar19 = plVar18[0xb];
      if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_0275dcc4;
      if (*(long *)(lVar19 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
        *(undefined8 *)(lVar19 + 0x10) = uVar14;
      }
      piVar1 = (int *)(lVar19 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_00e8b8e8(local_70,plVar18);
    if (local_70[0] != (long *)0x0) {
      if (local_70[0][0x1a] == 0) {
        local_f0 = (long *)0x0;
        local_e8 = (code *)0x0;
      }
      else {
        local_f0 = (long *)0x0;
        local_e8 = (code *)0x0;
        FUN_019d08dc(&local_f0,local_70[0][0x1a] + 0x1c0);
        plVar7 = local_f0;
        puVar11 = PTR_DAT_0437c670;
        puVar10 = PTR_DAT_0437c668;
        puVar9 = PTR_DAT_043794d8;
        puVar8 = PTR_DAT_043794d0;
        if (local_f0 != (long *)0x0) {
          if (*(int *)((long)local_f0 + 0xc) != 0) {
            piVar1 = (int *)((long)local_f0 + 0xc);
            iVar12 = *(int *)((long)local_f0 + 0xc);
            do {
              plVar22 = (long *)plVar7[2];
              if (((*puVar10 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar10), iVar13 != 0)) {
                if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
                  uVar14 = FUN_0087f8f0();
                  *(undefined8 *)puVar9 = uVar14;
                  __cxa_guard_release(puVar8);
                }
                *(undefined **)puVar11 = puVar9;
                __cxa_guard_release(puVar10);
              }
              while( true ) {
                if (plVar22 == (long *)0x0) goto LAB_0275dd48;
                if (plVar22 == (long *)puVar11) break;
                plVar22 = (long *)*plVar22;
              }
              iVar13 = *piVar1;
              if (iVar13 == iVar12) {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar12 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') {
                  lVar19 = plVar7[3];
                  plVar7 = (long *)0x0;
                  plVar22 = local_f0;
                  if (lVar19 != 0) {
                    plVar7 = (long *)(lVar19 + -0x50);
                  }
                  goto joined_r0x0275da90;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              iVar12 = iVar13;
            } while (iVar13 != 0);
          }
LAB_0275dd48:
          plVar7 = (long *)0x0;
          plVar22 = local_f0;
joined_r0x0275da90:
          local_f0 = plVar22;
          if (plVar22 != (long *)0x0) {
            plVar2 = plVar22 + 1;
            do {
              iVar12 = (int)*plVar2 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar4) {
                *(int *)plVar2 = iVar12;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar12 == 0) {
              plVar22[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar19 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar19;
              local_108 = *plVar22;
              FUN_02a44274(lVar19 + 0xd8,&local_108);
            }
          }
          if (plVar7 != (long *)0x0) {
            plVar22 = (long *)plVar7[0xe];
            if (plVar22 == (long *)0x0) {
              if (_DAT_00000210 == 2) {
                plVar22 = (long *)0x0;
LAB_0275ddf0:
                bVar4 = true;
LAB_0275db9c:
                FUN_0199edc8(&local_f0,plVar22);
                plVar2 = local_f0;
                puVar8 = PTR_DAT_043796f8;
                if (local_f0 == (long *)0x0) {
                  plVar20 = (long *)0x0;
                }
                else {
                  if (*(int *)((long)local_f0 + 0xc) != 0) {
                    piVar1 = (int *)((long)local_f0 + 0xc);
                    iVar12 = *(int *)((long)local_f0 + 0xc);
                    do {
                      plVar21 = (long *)plVar2[2];
                      if (((*PTR_DAT_043796f0 & 1) == 0) &&
                         (iVar13 = __cxa_guard_acquire(PTR_DAT_043796f0), iVar13 != 0)) {
                        if (((*PTR_DAT_043794d0 & 1) == 0) &&
                           (iVar13 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar13 != 0)) {
                          uVar14 = FUN_0087f8f0();
                          *(undefined8 *)PTR_DAT_043794d8 = uVar14;
                          __cxa_guard_release(PTR_DAT_043794d0);
                        }
                        *(undefined **)puVar8 = PTR_DAT_043794d8;
                        __cxa_guard_release(PTR_DAT_043796f0);
                      }
                      plVar20 = (long *)0x0;
                      plVar6 = local_f0;
                      if (plVar21 == (long *)0x0) goto joined_r0x0275dee4;
                      while (plVar21 != (long *)puVar8) {
                        plVar21 = (long *)*plVar21;
                        if (plVar21 == (long *)0x0) {
                          plVar20 = (long *)0x0;
                          goto joined_r0x0275dee4;
                        }
                      }
                      iVar13 = *piVar1;
                      if (iVar13 == iVar12) {
                        cVar3 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar5) {
                          *piVar1 = iVar12 + 1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                        if (cVar3 == '\0') {
                          lVar19 = plVar2[3];
                          plVar20 = (long *)0x0;
                          if (lVar19 != 0) {
                            plVar20 = (long *)(lVar19 + -0x50);
                          }
                          goto joined_r0x0275dee4;
                        }
                      }
                      else {
                        ClearExclusiveLocal();
                      }
                      iVar12 = iVar13;
                    } while (iVar13 != 0);
                  }
                  plVar20 = (long *)0x0;
                  plVar6 = local_f0;
joined_r0x0275dee4:
                  local_f0 = plVar6;
                  if (plVar6 != (long *)0x0) {
                    plVar2 = plVar6 + 1;
                    do {
                      iVar12 = (int)*plVar2 + -1;
                      cVar3 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                      if (bVar5) {
                        *(int *)plVar2 = iVar12;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar12 == 0) {
                      plVar6[2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar19 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar19;
                      local_108 = *plVar6;
                      FUN_02a44274(lVar19 + 0xd8,&local_108);
                    }
                  }
                }
                if (!bVar4) {
                  lVar19 = plVar22[0xb];
                  piVar1 = (int *)(lVar19 + 0xc);
                  do {
                    iVar12 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar12 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar12 + -1 == 0) {
                    *(undefined8 *)(lVar19 + 0x18) = 0;
                    (**(code **)(*plVar22 + 0x20))(plVar22);
                  }
                }
                if (plVar20 != (long *)0x0) {
                  lVar19 = FUN_01f26800(plVar20);
                  if (((*PTR_DAT_04379558 & 1) == 0) &&
                     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379558), iVar12 != 0)) {
                    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379558);
                  }
                  lVar17 = *(long *)PTR_DAT_04379560;
                  *(long *)PTR_DAT_04379568 = lVar17;
                  plVar22 = *(long **)(lVar17 + 0x260);
                  if (plVar22 == (long *)0x0) {
                    _DAT_000002e8 = lVar19;
                  }
                  else {
                    lVar17 = plVar22[0xb];
                    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) {
LAB_0275dcc4:
                    /* WARNING: Subroutine does not return */
                      nn::diag::detail::AbortImpl("","","",0);
                    }
                    if (*(long *)(lVar17 + 0x10) == 0) {
                      uVar14 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
                      *(undefined8 *)(lVar17 + 0x10) = uVar14;
                    }
                    piVar1 = (int *)(lVar17 + 0xc);
                    do {
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar4) {
                        *piVar1 = *piVar1 + 1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    lVar17 = plVar22[0xb];
                    piVar1 = (int *)(lVar17 + 0xc);
                    plVar22[0x5d] = lVar19;
                    do {
                      iVar12 = *piVar1;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar4) {
                        *piVar1 = iVar12 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar12 + -1 == 0) {
                      *(undefined8 *)(lVar17 + 0x18) = 0;
                      (**(code **)(*plVar22 + 0x20))(plVar22);
                    }
                  }
                  lVar19 = *(long *)((long)plVar20 + 0x58);
                  piVar1 = (int *)(lVar19 + 0xc);
                  do {
                    iVar12 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar12 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar12 + -1 == 0) {
                    *(undefined8 *)(lVar19 + 0x18) = 0;
                    (**(code **)(*plVar20 + 0x20))(plVar20);
                  }
                }
              }
            }
            else {
              lVar19 = plVar22[0xb];
              if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_0275dcc4;
              if (*(long *)(lVar19 + 0x10) == 0) {
                uVar14 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
                *(undefined8 *)(lVar19 + 0x10) = uVar14;
              }
              piVar1 = (int *)(lVar19 + 0xc);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = *piVar1 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              lVar17 = plVar22[0xb];
              piVar1 = (int *)(lVar17 + 0xc);
              lVar19 = plVar22[0x42];
              do {
                iVar12 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar12 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar12 + -1 == 0) {
                *(undefined8 *)(lVar17 + 0x18) = 0;
                (**(code **)(*plVar22 + 0x20))(plVar22);
              }
              if ((int)lVar19 == 2) {
                plVar22 = (long *)plVar7[0xe];
                if (plVar22 == (long *)0x0) goto LAB_0275ddf0;
                lVar19 = plVar22[0xb];
                if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_0275dcc4;
                if (*(long *)(lVar19 + 0x10) == 0) {
                  uVar14 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
                  *(undefined8 *)(lVar19 + 0x10) = uVar14;
                }
                piVar1 = (int *)(lVar19 + 0xc);
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = *piVar1 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                bVar4 = false;
                goto LAB_0275db9c;
              }
            }
            lVar19 = plVar7[0xb];
            piVar1 = (int *)(lVar19 + 0xc);
            do {
              iVar12 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar12 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar12 + -1 == 0) {
              *(undefined8 *)(lVar19 + 0x18) = 0;
              (**(code **)(*plVar7 + 0x20))(plVar7);
            }
          }
        }
      }
      if (local_70[0] != (long *)0x0) {
        lVar19 = local_70[0][0xb];
        piVar1 = (int *)(lVar19 + 0xc);
        do {
          iVar12 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar12 + -1 == 0) {
          *(undefined8 *)(lVar19 + 0x18) = 0;
          (**(code **)(*local_70[0] + 0x20))();
        }
      }
    }
    if (plVar18 != (long *)0x0) {
      lVar19 = plVar18[0xb];
      piVar1 = (int *)(lVar19 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar19 + 0x18) = 0;
        (**(code **)(*plVar18 + 0x20))(plVar18);
      }
    }
    FUN_0275dfa0(&local_f0,*(undefined8 *)(param_1 + 0x68),param_1 + 0x70);
    plVar18 = local_f0;
    local_f0 = (long *)0x0;
    lVar19 = *(long *)(param_1 + 0x78);
    *(long **)(param_1 + 0x78) = plVar18;
    if (lVar19 == 0) {
      *(undefined1 **)(param_1 + 0x88) = local_e0;
      *(undefined1 **)(param_1 + 0x90) = local_d8;
      *(code **)(param_1 + 0x80) = local_e8;
      local_f0 = (long *)0x0;
    }
    else {
      FUN_0275e578(param_1 + 0x80);
      plVar18 = local_f0;
      *(code **)(param_1 + 0x80) = local_e8;
      *(undefined1 **)(param_1 + 0x88) = local_e0;
      *(undefined1 **)(param_1 + 0x90) = local_d8;
      local_f0 = (long *)0x0;
      if (plVar18 != (long *)0x0) {
        FUN_0275e578(&local_e8);
      }
    }
    if (((*PTR_DAT_0437b648 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_0437b648), iVar12 != 0)) {
      FUN_00100250(PTR_LAB_0437b660,PTR_DAT_0437b650,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b648);
    }
    lVar19 = *(long *)PTR_DAT_0437b650;
    *(long *)PTR_DAT_0437b658 = lVar19;
    if (lVar19 != 0) {
      local_108 = param_1;
      FUN_0275e0b0(local_100,param_1);
      local_f0 = (long *)0x0;
      local_e8 = (code *)0x0;
      local_e0 = (undefined1 *)0x0;
      local_d8 = (undefined1 *)0x0;
      alStack_d0[0] = local_108;
      alStack_d0[1] = 0;
      alStack_d0[2] = 0;
      FUN_0275e8ec(alStack_d0 + 1,local_100);
      local_f0 = (long *)&LAB_0275e7d8;
      local_e8 = FUN_0275e82c;
      local_e0 = &LAB_0275ebec;
      local_d8 = &LAB_0275ee84;
      FUN_00db6d00(lVar19,&local_f0);
      pcVar16 = local_e8;
      if (local_e8 != (code *)0x0) {
        local_e0 = (undefined1 *)0x0;
        local_d8 = (undefined1 *)0x0;
        local_f0 = (long *)0x0;
        local_e8 = (code *)0x0;
        (*pcVar16)(alStack_d0);
      }
      if (local_100[0] != (undefined8 *)0x0) {
        piVar1 = (int *)(local_100[0] + 1);
        do {
          iVar12 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar12 + -1 == 0) {
          local_100[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar19 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar19;
          local_70[0] = (long *)*local_100[0];
          FUN_02a44274(lVar19 + 0xd8,local_70);
        }
      }
    }
    uVar15 = 3;
LAB_0275d81c:
    *(undefined4 *)(param_1 + 0xa8) = uVar15;
    break;
  case 3:
    FUN_011457e4(*(undefined8 *)(param_1 + 0x78));
    if (*(int *)(*(long *)(param_1 + 0x78) + 4) == 2) {
      if (((*PTR_DAT_0437b648 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_0437b648), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_0437b660,PTR_DAT_0437b650,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437b648);
      }
      lVar19 = *(long *)PTR_DAT_0437b650;
      *(long *)PTR_DAT_0437b658 = lVar19;
      if (lVar19 != 0) {
        nn::oe::LeaveExitRequestHandlingSection();
        pcVar16 = *(code **)(lVar19 + 0x2d8);
        if (pcVar16 != (code *)0x0) {
          *(undefined8 *)(lVar19 + 0x2e8) = 0;
          *(undefined8 *)(lVar19 + 0x2e0) = 0;
          *(undefined8 *)(lVar19 + 0x2d8) = 0;
          *(undefined8 *)(lVar19 + 0x2d0) = 0;
          (*pcVar16)(lVar19 + 0x2f0);
        }
      }
      lVar19 = *(long *)(param_1 + 0x78);
      *(undefined8 *)(param_1 + 0x78) = 0;
      if (lVar19 != 0) {
        FUN_0275e578(param_1 + 0x80);
      }
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 0xa8) = 0;
      return 1;
    }
  }
  uVar14 = 0;
switchD_0275d4a8_caseD_0:
  return uVar14;
}


