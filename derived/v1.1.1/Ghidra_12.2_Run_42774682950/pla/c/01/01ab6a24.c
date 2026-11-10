/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ab6a24; name: FUN_01ab6a24
 */


void FUN_01ab6a24(long param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  ulong uVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  undefined4 uVar22;
  long *plVar23;
  long *plVar24;
  ulong uVar25;
  long *local_c8;
  undefined8 *local_c0 [2];
  long *local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  long *local_78;
  long *local_70;
  ulong local_68;
  
  FUN_00ae8374(param_1 + 0x1f0);
  FUN_00af7e30(param_1 + 0x200,param_2 + 0x10);
  puVar7 = PTR_DAT_04379e80;
  puVar6 = PTR_DAT_04379e78;
  lVar20 = *(long *)(param_1 + 0x1f0);
  if ((lVar20 == 0) || (*(int *)(lVar20 + 0xc) == 0)) {
LAB_01ab6a68:
    lVar20 = *(long *)(param_1 + 0x200);
    if (lVar20 != 0) {
LAB_01ab6dbc:
      puVar7 = PTR_DAT_0437a558;
      puVar6 = PTR_DAT_0437a550;
      if (*(int *)(lVar20 + 0xc) != 0) {
        piVar1 = (int *)(lVar20 + 0xc);
        iVar13 = *(int *)(lVar20 + 0xc);
        do {
          plVar23 = *(long **)(lVar20 + 0x10);
          if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
            uVar15 = FUN_00aa0310();
            *(undefined8 *)puVar7 = uVar15;
            __cxa_guard_release(puVar6);
          }
          while( true ) {
            if (plVar23 == (long *)0x0) {
              return;
            }
            if (plVar23 == (long *)puVar7) break;
            plVar23 = (long *)*plVar23;
          }
          iVar12 = *piVar1;
          if (iVar12 == iVar13) {
            cVar3 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar11) {
              *piVar1 = iVar13 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar20 = *(long *)(lVar20 + 0x18);
              if (lVar20 == 0) {
                return;
              }
              plVar23 = (long *)(lVar20 + -0x50);
              if ((*(long *)(lVar20 + 0x1a0) != 0) &&
                 (*(int *)(*(long *)(lVar20 + 0x1a0) + 0xc) != 0)) {
                plVar21 = *(long **)(param_1 + 0x250);
                FUN_00a9ecd4(local_c0,plVar23);
                (**(code **)(*plVar21 + 0x40))(plVar21,local_c0);
                if (local_c0[0] != (undefined8 *)0x0) {
                  piVar1 = (int *)(local_c0[0] + 1);
                  do {
                    iVar13 = *piVar1;
                    cVar3 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar11) {
                      *piVar1 = iVar13 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar13 + -1 == 0) {
                    local_c0[0][2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar18 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar18;
                    local_78 = (long *)*local_c0[0];
                    FUN_02a44274(lVar18 + 0xd8,&local_78);
                  }
                }
              }
              (**(code **)(**(long **)(lVar20 + 0x1b0) + 0x18))(&local_78);
              local_a0 = (long *)0x0;
              local_98 = (long *)0x0;
              FUN_01a78fc0(&local_a0,&local_78);
              plVar21 = local_78;
              if (local_78 != (long *)0x0) {
                plVar24 = local_78 + 1;
                do {
                  iVar13 = (int)*plVar24 + -1;
                  cVar3 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                  if (bVar11) {
                    *(int *)plVar24 = iVar13;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar13 == 0) {
                  local_78[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar18 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar18;
                  local_b0 = (long *)*plVar21;
                  FUN_02a44274(lVar18 + 0xd8,&local_b0);
                }
              }
              local_88 = (undefined8 *)0x0;
              uStack_80 = 0;
              FUN_01a792c0(&local_88,&local_a0);
              plVar21 = local_a0;
              if (local_a0 != (long *)0x0) {
                plVar24 = local_a0 + 1;
                do {
                  iVar13 = (int)*plVar24 + -1;
                  cVar3 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                  if (bVar11) {
                    *(int *)plVar24 = iVar13;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar13 == 0) {
                  local_a0[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar18 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar18;
                  local_78 = (long *)*plVar21;
                  FUN_02a44274(lVar18 + 0xd8,&local_78);
                }
              }
              if (local_88 != (undefined8 *)0x0) {
                FUN_01a795c0(&local_78);
                plVar21 = local_78;
                puVar10 = local_88;
                if (local_88 != (undefined8 *)0x0) {
                  piVar1 = (int *)(local_88 + 1);
                  do {
                    iVar13 = *piVar1;
                    cVar3 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar11) {
                      *piVar1 = iVar13 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar13 + -1 == 0) {
                    local_88[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar18 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar18;
                    local_78 = (long *)*puVar10;
                    FUN_02a44274(lVar18 + 0xd8,&local_78);
                  }
                }
                if (plVar21 != (long *)0x0) {
                  lVar18 = 0;
                  if (*(long *)(param_1 + 0x250) != 0) {
                    lVar18 = *(long *)(param_1 + 0x250) + 0x68;
                  }
                  FUN_01a72b60(plVar21,lVar18);
                  lVar18 = plVar21[0xb];
                  piVar1 = (int *)(lVar18 + 0xc);
                  do {
                    iVar13 = *piVar1;
                    cVar3 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar11) {
                      *piVar1 = iVar13 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar13 + -1 == 0) {
                    *(undefined8 *)(lVar18 + 0x18) = 0;
                    (**(code **)(*plVar21 + 0x20))(plVar21);
                  }
                }
              }
              (**(code **)(**(long **)(lVar20 + 0x1b8) + 0x18))(&local_78);
              local_a0 = (long *)0x0;
              local_98 = (long *)0x0;
              FUN_01a78fc0(&local_a0,&local_78);
              plVar21 = local_78;
              if (local_78 != (long *)0x0) {
                plVar24 = local_78 + 1;
                do {
                  iVar13 = (int)*plVar24 + -1;
                  cVar3 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                  if (bVar11) {
                    *(int *)plVar24 = iVar13;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar13 == 0) {
                  local_78[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar18 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar18;
                  local_b0 = (long *)*plVar21;
                  FUN_02a44274(lVar18 + 0xd8,&local_b0);
                }
              }
              local_88 = (undefined8 *)0x0;
              uStack_80 = 0;
              FUN_01a792c0(&local_88,&local_a0);
              plVar21 = local_a0;
              if (local_a0 != (long *)0x0) {
                plVar24 = local_a0 + 1;
                do {
                  iVar13 = (int)*plVar24 + -1;
                  cVar3 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                  if (bVar11) {
                    *(int *)plVar24 = iVar13;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar13 == 0) {
                  local_a0[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar18 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar18;
                  local_78 = (long *)*plVar21;
                  FUN_02a44274(lVar18 + 0xd8,&local_78);
                }
              }
              if (local_88 != (undefined8 *)0x0) {
                FUN_01a795c0(&local_78);
                plVar21 = local_78;
                puVar10 = local_88;
                if (local_88 != (undefined8 *)0x0) {
                  piVar1 = (int *)(local_88 + 1);
                  do {
                    iVar13 = *piVar1;
                    cVar3 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar11) {
                      *piVar1 = iVar13 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar13 + -1 == 0) {
                    local_88[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar18 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar18;
                    local_78 = (long *)*puVar10;
                    FUN_02a44274(lVar18 + 0xd8,&local_78);
                  }
                }
                if (plVar21 != (long *)0x0) {
                  lVar18 = 0;
                  if (*(long *)(param_1 + 600) != 0) {
                    lVar18 = *(long *)(param_1 + 600) + 0x68;
                  }
                  FUN_01a72b60(plVar21,lVar18);
                  lVar18 = plVar21[0xb];
                  piVar1 = (int *)(lVar18 + 0xc);
                  do {
                    iVar13 = *piVar1;
                    cVar3 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar11) {
                      *piVar1 = iVar13 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar13 + -1 == 0) {
                    *(undefined8 *)(lVar18 + 0x18) = 0;
                    (**(code **)(*plVar21 + 0x20))(plVar21);
                  }
                }
              }
              lVar20 = *(long *)(lVar20 + 8);
              piVar1 = (int *)(lVar20 + 0xc);
              do {
                iVar13 = *piVar1;
                cVar3 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar11) {
                  *piVar1 = iVar13 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 + -1 == 0) {
                *(undefined8 *)(lVar20 + 0x18) = 0;
                (**(code **)(*plVar23 + 0x20))(plVar23);
                return;
              }
              return;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar13 = iVar12;
        } while (iVar12 != 0);
      }
    }
    return;
  }
  piVar1 = (int *)(lVar20 + 0xc);
  iVar13 = *(int *)(lVar20 + 0xc);
  while( true ) {
    plVar23 = *(long **)(lVar20 + 0x10);
    if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
      uVar15 = FUN_0095a420();
      *(undefined8 *)puVar7 = uVar15;
      __cxa_guard_release(puVar6);
    }
    while( true ) {
      if (plVar23 == (long *)0x0) goto LAB_01ab6a68;
      if (plVar23 == (long *)puVar7) break;
      plVar23 = (long *)*plVar23;
    }
    iVar12 = *piVar1;
    if (iVar12 == iVar13) break;
    ClearExclusiveLocal();
LAB_01ab6ab4:
    iVar13 = iVar12;
    if (iVar12 == 0) goto LAB_01ab6a68;
  }
  cVar3 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
  if (bVar11) {
    *piVar1 = iVar13 + 1;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 != '\0') goto LAB_01ab6ab4;
  lVar20 = *(long *)(lVar20 + 0x18);
  if (lVar20 == 0) goto LAB_01ab6a68;
  (**(code **)(**(long **)(lVar20 + 0x1b8) + 0x18))(&local_78);
  puVar6 = PTR_DAT_04379498;
  local_a0 = (long *)0x0;
  local_98 = (long *)0x0;
  do {
    plVar23 = local_70;
    cVar3 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(&local_70,0x10);
    if (bVar11) {
      local_70 = (long *)0x0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((*PTR_DAT_04379498 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  puVar8 = PTR_DAT_043794a8;
  puVar7 = PTR_DAT_043794a0;
  uVar15 = *(undefined8 *)PTR_DAT_043794a0;
  *(undefined8 *)PTR_DAT_043794a8 = uVar15;
  FUN_02a44e0c(&local_b0,uVar15,plVar23);
  plVar21 = local_78;
  local_78 = (long *)0x0;
  if (plVar21 != (long *)0x0) {
    plVar24 = plVar21 + 1;
    do {
      iVar13 = (int)*plVar24 + -1;
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar11) {
        *(int *)plVar24 = iVar13;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar13 == 0) {
      plVar21[2] = 0;
      if (((*puVar6 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)puVar7;
      *(long *)puVar8 = lVar18;
      local_88 = (undefined8 *)*plVar21;
      FUN_02a44274(lVar18 + 0xd8,&local_88);
    }
  }
  plVar21 = local_a0;
  local_a0 = (long *)0x0;
  if (local_b0 == (long *)0x0) {
    if (plVar21 != (long *)0x0) {
      plVar23 = plVar21 + 1;
      do {
        lVar18 = *plVar23;
        cVar3 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar11) {
          *(int *)plVar23 = (int)lVar18 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar18 == 1) {
        plVar21[2] = 0;
        if (((*puVar6 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar18 = *(long *)puVar7;
        *(long *)puVar8 = lVar18;
        local_88 = (undefined8 *)*plVar21;
        FUN_02a44274(lVar18 + 0xd8,&local_88);
      }
    }
    plVar23 = (long *)0x0;
  }
  else {
    plVar24 = local_b0;
    if (plVar21 != (long *)0x0) {
      plVar24 = plVar21 + 1;
      do {
        iVar13 = (int)*plVar24 + -1;
        cVar3 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar11) {
          *(int *)plVar24 = iVar13;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar13 == 0) {
        plVar21[2] = 0;
        if (((*puVar6 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar18 = *(long *)puVar7;
        *(long *)puVar8 = lVar18;
        local_88 = (undefined8 *)*plVar21;
        FUN_02a44274(lVar18 + 0xd8,&local_88);
      }
      plVar24 = local_b0;
    }
    local_b0 = (long *)0x0;
    local_a0 = plVar24;
  }
  plVar21 = local_b0;
  local_98 = plVar23;
  if (local_b0 != (long *)0x0) {
    plVar23 = local_b0 + 1;
    do {
      iVar13 = (int)*plVar23 + -1;
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar11) {
        *(int *)plVar23 = iVar13;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar13 == 0) {
      local_b0[2] = 0;
      if (((*puVar6 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)puVar7;
      *(long *)puVar8 = lVar18;
      local_88 = (undefined8 *)*plVar21;
      FUN_02a44274(lVar18 + 0xd8,&local_88);
    }
  }
  plVar23 = local_78;
  if (local_78 != (long *)0x0) {
    plVar21 = local_78 + 1;
    do {
      iVar13 = (int)*plVar21 + -1;
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar11) {
        *(int *)plVar21 = iVar13;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar13 == 0) {
      local_78[2] = 0;
      if (((*puVar6 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)puVar7;
      *(long *)puVar8 = lVar18;
      local_88 = (undefined8 *)*plVar23;
      FUN_02a44274(lVar18 + 0xd8,&local_88);
    }
  }
  do {
    plVar23 = local_98;
    cVar3 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(&local_98,0x10);
    if (bVar11) {
      local_98 = (long *)0x0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((*puVar6 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  uVar15 = *(undefined8 *)puVar7;
  *(undefined8 *)puVar8 = uVar15;
  FUN_02a44e0c(&local_88,uVar15,plVar23);
  plVar23 = local_a0;
  local_a0 = (long *)0x0;
  if (plVar23 != (long *)0x0) {
    plVar21 = plVar23 + 1;
    do {
      iVar13 = (int)*plVar21 + -1;
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar11) {
        *(int *)plVar21 = iVar13;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar13 == 0) {
      plVar23[2] = 0;
      if (((*puVar6 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)puVar7;
      *(long *)puVar8 = lVar18;
      local_78 = (long *)*plVar23;
      FUN_02a44274(lVar18 + 0xd8,&local_78);
    }
  }
  puVar10 = local_88;
  plVar23 = local_a0;
  if (local_88 != (undefined8 *)0x0) {
    local_88 = (undefined8 *)0x0;
  }
  if (local_a0 != (long *)0x0) {
    plVar21 = local_a0 + 1;
    do {
      iVar13 = (int)*plVar21 + -1;
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar11) {
        *(int *)plVar21 = iVar13;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar13 == 0) {
      local_a0[2] = 0;
      if (((*puVar6 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)puVar7;
      *(long *)puVar8 = lVar18;
      local_78 = (long *)*plVar23;
      FUN_02a44274(lVar18 + 0xd8,&local_78);
    }
  }
  if (puVar10 == (undefined8 *)0x0) goto LAB_01ab6d84;
  if (*(int *)((long)puVar10 + 0xc) == 0) {
LAB_01ab778c:
    local_c8 = (long *)0x0;
  }
  else {
    piVar1 = (int *)((long)puVar10 + 0xc);
    iVar13 = *(int *)((long)puVar10 + 0xc);
    while( true ) {
      plVar23 = (long *)puVar10[2];
      if (((*PTR_DAT_043825b0 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_043825b0), iVar12 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar12 != 0)) {
          uVar15 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar15;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)PTR_DAT_043825b8 = PTR_DAT_043794d8;
        __cxa_guard_release(PTR_DAT_043825b0);
        if (plVar23 != (long *)0x0) goto LAB_01ab70a0;
        goto LAB_01ab778c;
      }
      while( true ) {
        if (plVar23 == (long *)0x0) goto LAB_01ab778c;
LAB_01ab70a0:
        if (plVar23 == (long *)PTR_DAT_043825b8) break;
        plVar23 = (long *)*plVar23;
      }
      iVar12 = *piVar1;
      if (iVar12 == iVar13) break;
      ClearExclusiveLocal();
LAB_01ab7080:
      iVar13 = iVar12;
      if (iVar12 == 0) goto LAB_01ab778c;
    }
    cVar3 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar11) {
      *piVar1 = iVar13 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_01ab7080;
    local_c8 = (long *)0x0;
    if (puVar10[3] != 0) {
      local_c8 = (long *)(puVar10[3] + -0x50);
    }
  }
  piVar1 = (int *)(puVar10 + 1);
  do {
    iVar13 = *piVar1;
    cVar3 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar11) {
      *piVar1 = iVar13 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar13 + -1 == 0) {
    puVar10[2] = 0;
    if (((*puVar6 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar18 = *(long *)puVar7;
    *(long *)puVar8 = lVar18;
    local_78 = (long *)*puVar10;
    FUN_02a44274(lVar18 + 0xd8,&local_78);
  }
  puVar9 = PTR_LAB_04379590;
  if (local_c8 == (long *)0x0) goto LAB_01ab6d84;
  plVar23 = (long *)0x0;
  if (*(long *)(param_1 + 0x248) != 0) {
    plVar23 = (long *)(*(long *)(param_1 + 0x248) + 0x68);
  }
  plVar24 = (long *)local_c8[0x16];
  plVar21 = local_c8 + 0x10;
  while (plVar24 != (long *)0x0) {
    local_78 = (long *)0x0;
    local_70 = (long *)0x0;
    FUN_008802f0(&local_78,plVar24 + 3);
    local_68 = plVar24[5];
    if ((local_78 == (long *)0x0) || (*(int *)((long)local_78 + 0xc) == 0)) {
      plVar24 = (long *)FUN_0135c840(plVar21,plVar24);
      plVar5 = local_78;
    }
    else {
      plVar24 = (long *)*plVar24;
      plVar5 = local_78;
    }
    local_78 = plVar5;
    if (plVar5 != (long *)0x0) {
      plVar2 = plVar5 + 1;
      do {
        iVar13 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar11) {
          *(int *)plVar2 = iVar13;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar13 == 0) {
        plVar5[2] = 0;
        if (((*puVar6 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar6), iVar13 != 0)) {
          FUN_00100250(puVar9,puVar7,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar6);
        }
        lVar18 = *(long *)puVar7;
        *(long *)puVar8 = lVar18;
        local_a0 = (long *)*plVar5;
        FUN_02a44274(lVar18 + 0xd8,&local_a0);
      }
    }
  }
  lVar18 = nn::os::GetCurrentThread();
  plVar24 = local_c8 + 0xf;
  do {
    if (*plVar24 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)local_c8 + 0x6c));
        while (*plVar24 == 0) {
          cVar3 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar11) {
            *plVar24 = lVar18;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01ab71a4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar11) {
      *plVar24 = lVar18;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01ab71a4:
  (**(code **)(*plVar23 + 0x20))(&local_88,plVar23);
  if (local_88 == (undefined8 *)0x0) {
    uVar22 = 0;
  }
  else {
    uVar22 = (undefined4)*local_88;
  }
  local_b0 = (long *)0x0;
  uStack_a8 = 0;
  FUN_008802f0(&local_b0,&local_88);
  local_a0 = (long *)0x0;
  local_98 = (long *)0x0;
  FUN_008802f0(&local_a0,&local_b0);
  plVar24 = local_b0;
  local_90 = plVar23;
  if (local_b0 != (long *)0x0) {
    plVar23 = local_b0 + 1;
    do {
      iVar13 = (int)*plVar23 + -1;
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar11) {
        *(int *)plVar23 = iVar13;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar13 == 0) {
      local_b0[2] = 0;
      if (((*puVar6 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)puVar7;
      *(long *)puVar8 = lVar18;
      local_78 = (long *)*plVar24;
      FUN_02a44274(lVar18 + 0xd8,&local_78);
    }
  }
  plVar24 = local_c8 + 0x17;
  plVar23 = (long *)(**(code **)(*(long *)*plVar24 + 0x10))((long *)*plVar24,0x30,8);
  if (plVar23 == (long *)0x0) {
    (**(code **)(*(long *)*plVar24 + 0xb8))();
  }
  local_68 = local_68 & 0xffffffffffffff00;
  lVar18 = *plVar24;
  local_78 = plVar23;
  local_70 = plVar24;
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar13 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar9 = PTR_DAT_04379528;
    if (iVar13 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar14 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar14 != 0) {
    if (0xf < *(ulong *)(lVar14 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = lVar18;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
  }
  plVar23[3] = 0;
  *(undefined4 *)(plVar23 + 2) = uVar22;
  plVar23[4] = 0;
  FUN_008802f0(plVar23 + 3,&local_a0);
  plVar24 = local_78;
  plVar23[5] = (long)local_90;
  if (lVar14 != 0) {
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
  }
  local_68 = CONCAT71(local_68._1_7_,1);
  iVar13 = (int)local_78[2];
  uVar16 = (ulong)iVar13;
  *local_78 = 0;
  local_78[1] = uVar16;
  uVar25 = local_c8[0x11];
  if (uVar25 == 0) {
LAB_01ab72f4:
    if ((uVar25 == 0) || (*(float *)(local_c8 + 0x1c) * (float)uVar25 < (float)(local_c8[0x1b] + 1))
       ) {
      uVar16 = (ulong)(uVar25 < 3 || (uVar25 & uVar25 - 1) != 0) | uVar25 << 1;
      uVar19 = (ulong)((float)(local_c8[0x1b] + 1) / *(float *)(local_c8 + 0x1c));
      if (uVar19 <= uVar16) {
        uVar19 = uVar16;
      }
      if (uVar19 - 1 == 0) {
        uVar19 = 2;
LAB_01ab7354:
        bVar11 = uVar25 <= uVar19;
        uVar16 = uVar19;
        if (uVar25 < uVar19) goto LAB_01ab7364;
LAB_01ab7640:
        if (!bVar11) {
          uVar16 = (ulong)((float)(ulong)local_c8[0x1b] / *(float *)(local_c8 + 0x1c));
          if ((uVar25 < 3) ||
             (uVar17 = uVar25 - (uVar25 >> 1 & 0x5555555555555555),
             uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333),
             1 < (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
            uVar16 = std::__next_prime(uVar16);
          }
          else if (1 < uVar16) {
            uVar16 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar16 - 1) & 0x3f);
          }
          if (uVar16 <= uVar19) {
            uVar16 = uVar19;
          }
          if (uVar16 < uVar25) goto LAB_01ab7364;
        }
      }
      else {
        if ((uVar19 & uVar19 - 1) == 0) goto LAB_01ab7354;
        uVar19 = std::__next_prime(uVar19);
        uVar25 = local_c8[0x11];
        bVar11 = uVar25 <= uVar19;
        uVar16 = uVar19;
        if (uVar19 <= uVar25) goto LAB_01ab7640;
LAB_01ab7364:
        FUN_01abaf80(plVar21,uVar16);
      }
      uVar25 = local_c8[0x11];
      uVar16 = plVar24[1];
    }
    uVar19 = uVar25 - (uVar25 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      uVar16 = uVar25 - 1 & uVar16;
    }
    else if (uVar25 <= uVar16) {
      uVar17 = 0;
      if (uVar25 != 0) {
        uVar17 = uVar16 / uVar25;
      }
      uVar16 = uVar16 - uVar17 * uVar25;
    }
    plVar23 = *(long **)(*plVar21 + uVar16 * 8);
    if (plVar23 == (long *)0x0) {
      plVar23 = local_c8 + 0x16;
      *plVar24 = *plVar23;
      *plVar23 = (long)plVar24;
      *(long **)(local_c8[0x10] + uVar16 * 8) = plVar23;
      if (*plVar24 != 0) {
        uVar16 = *(ulong *)(*plVar24 + 8);
        if (uVar19 < 2) {
          uVar16 = uVar16 & uVar25 - 1;
        }
        else if (uVar25 <= uVar16) {
          uVar19 = 0;
          if (uVar25 != 0) {
            uVar19 = uVar16 / uVar25;
          }
          uVar16 = uVar16 - uVar19 * uVar25;
        }
        plVar23 = (long *)(*plVar21 + uVar16 * 8);
        goto LAB_01ab76e8;
      }
    }
    else {
      *plVar24 = *plVar23;
LAB_01ab76e8:
      *plVar23 = (long)plVar24;
    }
    local_c8[0x1b] = local_c8[0x1b] + 1;
LAB_01ab73f8:
    local_78 = (long *)0x0;
    plVar23 = local_a0;
  }
  else {
    uVar19 = uVar25 - (uVar25 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      uVar17 = uVar25 - 1 & uVar16;
    }
    else {
      uVar17 = uVar16;
      if (uVar25 <= uVar16) {
        uVar17 = 0;
        if (uVar25 != 0) {
          uVar17 = uVar16 / uVar25;
        }
        uVar17 = uVar16 - uVar17 * uVar25;
      }
    }
    plVar23 = *(long **)(*plVar21 + uVar17 * 8);
    if (plVar23 == (long *)0x0) goto LAB_01ab72f4;
    if (1 < uVar19) {
      while( true ) {
        plVar23 = (long *)*plVar23;
        if (plVar23 == (long *)0x0) break;
        uVar19 = plVar23[1];
        if (uVar25 <= uVar19) {
          uVar4 = 0;
          if (uVar25 != 0) {
            uVar4 = uVar19 / uVar25;
          }
          uVar19 = uVar19 - uVar4 * uVar25;
        }
        if (uVar19 != uVar17) break;
        if ((int)plVar23[2] == iVar13) goto LAB_01ab7550;
      }
      goto LAB_01ab72f4;
    }
    do {
      plVar23 = (long *)*plVar23;
      if ((plVar23 == (long *)0x0) || ((plVar23[1] & uVar25 - 1) != uVar17)) goto LAB_01ab72f4;
    } while (*(int *)(plVar23 + 2) != iVar13);
LAB_01ab7550:
    local_78 = (long *)0x0;
    if (plVar24 == (long *)0x0) goto LAB_01ab73f8;
    FUN_01abada8(&local_70,plVar24);
    plVar23 = local_a0;
  }
  local_a0 = plVar23;
  if (plVar23 != (long *)0x0) {
    plVar21 = plVar23 + 1;
    do {
      iVar13 = (int)*plVar21 + -1;
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar11) {
        *(int *)plVar21 = iVar13;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar13 == 0) {
      plVar23[2] = 0;
      if (((*puVar6 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)puVar7;
      *(long *)puVar8 = lVar18;
      local_78 = (long *)*plVar23;
      FUN_02a44274(lVar18 + 0xd8,&local_78);
    }
  }
  puVar10 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_88 + 1);
    do {
      iVar13 = *piVar1;
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar11) {
        *piVar1 = iVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar13 + -1 == 0) {
      local_88[2] = 0;
      if (((*puVar6 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)puVar7;
      *(long *)puVar8 = lVar18;
      local_78 = (long *)*puVar10;
      FUN_02a44274(lVar18 + 0xd8,&local_78);
    }
  }
  local_c8[0xf] = 0;
  nn::os::SignalLightEvent((LightEventType *)((long)local_c8 + 0x6c));
  lVar18 = local_c8[0xb];
  piVar1 = (int *)(lVar18 + 0xc);
  do {
    iVar13 = *piVar1;
    cVar3 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar11) {
      *piVar1 = iVar13 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar13 + -1 == 0) {
    *(undefined8 *)(lVar18 + 0x18) = 0;
    (**(code **)(*local_c8 + 0x20))();
  }
LAB_01ab6d84:
  lVar18 = *(long *)(lVar20 + 8);
  piVar1 = (int *)(lVar18 + 0xc);
  do {
    iVar13 = *piVar1;
    cVar3 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar11) {
      *piVar1 = iVar13 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar13 + -1 != 0) goto LAB_01ab6a68;
  *(undefined8 *)(lVar18 + 0x18) = 0;
  (**(code **)(*(long *)(lVar20 + -0x50) + 0x20))((long *)(lVar20 + -0x50));
  lVar20 = *(long *)(param_1 + 0x200);
  if (lVar20 == 0) {
    return;
  }
  goto LAB_01ab6dbc;
}


