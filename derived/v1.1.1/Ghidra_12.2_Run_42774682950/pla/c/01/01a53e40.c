/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a53e40; name: FUN_01a53e40
 */


void FUN_01a53e40(undefined8 param_1,long *param_2,ulong param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if ((param_3 & 1) == 0) {
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    FUN_01a68600(&local_68,param_2 + 0x110);
    puVar12 = local_68;
    puVar6 = PTR_DAT_04382480;
    puVar5 = PTR_DAT_04382478;
    if (local_68 != (undefined8 *)0x0) {
      puVar4 = local_68;
      if (*(int *)((long)local_68 + 0xc) != 0) {
        piVar1 = (int *)((long)local_68 + 0xc);
        iVar8 = *(int *)((long)local_68 + 0xc);
        do {
          plVar13 = (long *)puVar12[2];
          if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
            uVar9 = FUN_009cdcc0();
            *(undefined8 *)puVar6 = uVar9;
            __cxa_guard_release(puVar5);
          }
          while( true ) {
            puVar4 = local_68;
            if (plVar13 == (long *)0x0) goto joined_r0x01a540fc;
            if (plVar13 == (long *)puVar6) break;
            plVar13 = (long *)*plVar13;
          }
          iVar7 = *piVar1;
          if (iVar7 == iVar8) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar8 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar11 = puVar12[3];
              if (lVar11 != 0) {
                plVar13 = (long *)(lVar11 + -0x50);
                if (*(int *)(lVar11 + 0x40) != 0) {
                  FUN_02dddd6c(plVar13,0);
                  puVar12 = (undefined8 *)param_2[0x120];
                  param_2[0x120] = 0;
                  if (puVar12 != (undefined8 *)0x0) {
                    piVar1 = (int *)(puVar12 + 1);
                    do {
                      iVar8 = *piVar1;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar3) {
                        *piVar1 = iVar8 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (iVar8 + -1 == 0) {
                      puVar12[2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar10 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar10;
                      local_58 = *puVar12;
                      FUN_02a44274(lVar10 + 0xd8,&local_58);
                    }
                  }
                  param_2[0x121] = 0;
                }
                lVar11 = *(long *)(lVar11 + 8);
                piVar1 = (int *)(lVar11 + 0xc);
                do {
                  iVar8 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar8 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                puVar4 = local_68;
                if (iVar8 + -1 == 0) {
                  *(undefined8 *)(lVar11 + 0x18) = 0;
                  (**(code **)(*plVar13 + 0x20))(plVar13);
                  puVar4 = local_68;
                }
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar8 = iVar7;
        } while (iVar7 != 0);
      }
joined_r0x01a540fc:
      if (puVar4 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar4 + 1);
        do {
          iVar8 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar8 + -1 == 0) {
          puVar4[2] = 0;
          local_68 = puVar4;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_58 = *puVar4;
          FUN_02a44274(lVar11 + 0xd8,&local_58);
        }
      }
    }
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    FUN_01a68600(&local_68,param_2 + 0x112);
    puVar12 = local_68;
    puVar6 = PTR_DAT_04382480;
    puVar5 = PTR_DAT_04382478;
    if (local_68 == (undefined8 *)0x0) {
      return;
    }
    if (*(int *)((long)local_68 + 0xc) != 0) {
      piVar1 = (int *)((long)local_68 + 0xc);
      iVar8 = *(int *)((long)local_68 + 0xc);
      do {
        plVar13 = (long *)puVar12[2];
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          uVar9 = FUN_009cdcc0();
          *(undefined8 *)puVar6 = uVar9;
          __cxa_guard_release(puVar5);
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto joined_r0x01a544e8;
          if (plVar13 == (long *)puVar6) break;
          plVar13 = (long *)*plVar13;
        }
        iVar7 = *piVar1;
        if (iVar7 == iVar8) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar11 = puVar12[3];
            if (lVar11 != 0) {
              plVar13 = (long *)(lVar11 + -0x50);
              if (*(int *)(lVar11 + 0x40) != 0) {
                FUN_02dddd6c(plVar13,0);
                puVar12 = (undefined8 *)param_2[0x120];
                param_2[0x120] = 0;
                if (puVar12 != (undefined8 *)0x0) {
                  piVar1 = (int *)(puVar12 + 1);
                  do {
                    iVar8 = *piVar1;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                      *piVar1 = iVar8 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (iVar8 + -1 == 0) {
                    puVar12[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar10 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar10;
                    local_58 = *puVar12;
                    FUN_02a44274(lVar10 + 0xd8,&local_58);
                  }
                }
                param_2[0x121] = 0;
              }
              lVar11 = *(long *)(lVar11 + 8);
              piVar1 = (int *)(lVar11 + 0xc);
              do {
                iVar8 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar8 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar8 + -1 == 0) {
                *(undefined8 *)(lVar11 + 0x18) = 0;
                (**(code **)(*plVar13 + 0x20))(plVar13);
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = iVar7;
      } while (iVar7 != 0);
    }
joined_r0x01a544e8:
    if (local_68 == (undefined8 *)0x0) {
      return;
    }
    piVar1 = (int *)(local_68 + 1);
    do {
      iVar8 = *piVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    FUN_01a5476c(param_2);
    (**(code **)(*param_2 + 0x2c8))(param_1,param_2);
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    FUN_01a68600(&local_68,param_2 + 0x110);
    puVar12 = local_68;
    puVar6 = PTR_DAT_04382480;
    puVar5 = PTR_DAT_04382478;
    if (local_68 != (undefined8 *)0x0) {
      puVar4 = local_68;
      if (*(int *)((long)local_68 + 0xc) != 0) {
        piVar1 = (int *)((long)local_68 + 0xc);
        iVar8 = *(int *)((long)local_68 + 0xc);
        do {
          plVar13 = (long *)puVar12[2];
          if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
            uVar9 = FUN_009cdcc0();
            *(undefined8 *)puVar6 = uVar9;
            __cxa_guard_release(puVar5);
          }
          while( true ) {
            puVar4 = local_68;
            if (plVar13 == (long *)0x0) goto joined_r0x01a54314;
            if (plVar13 == (long *)puVar6) break;
            plVar13 = (long *)*plVar13;
          }
          iVar7 = *piVar1;
          if (iVar7 == iVar8) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar8 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar11 = puVar12[3];
              if (lVar11 != 0) {
                plVar13 = (long *)(lVar11 + -0x50);
                if (1 < *(uint *)(lVar11 + 0x40)) {
                  FUN_02dddd6c(plVar13,1);
                  puVar12 = (undefined8 *)param_2[0x120];
                  param_2[0x120] = 0;
                  if (puVar12 != (undefined8 *)0x0) {
                    piVar1 = (int *)(puVar12 + 1);
                    do {
                      iVar8 = *piVar1;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar3) {
                        *piVar1 = iVar8 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (iVar8 + -1 == 0) {
                      puVar12[2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar10 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar10;
                      local_58 = *puVar12;
                      FUN_02a44274(lVar10 + 0xd8,&local_58);
                    }
                  }
                  param_2[0x121] = 0;
                }
                lVar11 = *(long *)(lVar11 + 8);
                piVar1 = (int *)(lVar11 + 0xc);
                do {
                  iVar8 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar8 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                puVar4 = local_68;
                if (iVar8 + -1 == 0) {
                  *(undefined8 *)(lVar11 + 0x18) = 0;
                  (**(code **)(*plVar13 + 0x20))(plVar13);
                  puVar4 = local_68;
                }
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar8 = iVar7;
        } while (iVar7 != 0);
      }
joined_r0x01a54314:
      if (puVar4 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar4 + 1);
        do {
          iVar8 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar8 + -1 == 0) {
          puVar4[2] = 0;
          local_68 = puVar4;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_58 = *puVar4;
          FUN_02a44274(lVar11 + 0xd8,&local_58);
        }
      }
    }
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    FUN_01a68600(&local_68,param_2 + 0x112);
    puVar12 = local_68;
    puVar6 = PTR_DAT_04382480;
    puVar5 = PTR_DAT_04382478;
    if (local_68 == (undefined8 *)0x0) {
      return;
    }
    if (*(int *)((long)local_68 + 0xc) != 0) {
      piVar1 = (int *)((long)local_68 + 0xc);
      iVar8 = *(int *)((long)local_68 + 0xc);
      do {
        plVar13 = (long *)puVar12[2];
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          uVar9 = FUN_009cdcc0();
          *(undefined8 *)puVar6 = uVar9;
          __cxa_guard_release(puVar5);
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto joined_r0x01a54704;
          if (plVar13 == (long *)puVar6) break;
          plVar13 = (long *)*plVar13;
        }
        iVar7 = *piVar1;
        if (iVar7 == iVar8) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar11 = puVar12[3];
            if (lVar11 != 0) {
              plVar13 = (long *)(lVar11 + -0x50);
              if (1 < *(uint *)(lVar11 + 0x40)) {
                FUN_02dddd6c(plVar13,1);
                puVar12 = (undefined8 *)param_2[0x120];
                param_2[0x120] = 0;
                if (puVar12 != (undefined8 *)0x0) {
                  piVar1 = (int *)(puVar12 + 1);
                  do {
                    iVar8 = *piVar1;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                      *piVar1 = iVar8 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (iVar8 + -1 == 0) {
                    puVar12[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar10 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar10;
                    local_58 = *puVar12;
                    FUN_02a44274(lVar10 + 0xd8,&local_58);
                  }
                }
                param_2[0x121] = 0;
              }
              lVar11 = *(long *)(lVar11 + 8);
              piVar1 = (int *)(lVar11 + 0xc);
              do {
                iVar8 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar8 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar8 + -1 == 0) {
                *(undefined8 *)(lVar11 + 0x18) = 0;
                (**(code **)(*plVar13 + 0x20))(plVar13);
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = iVar7;
      } while (iVar7 != 0);
    }
joined_r0x01a54704:
    if (local_68 == (undefined8 *)0x0) {
      return;
    }
    piVar1 = (int *)(local_68 + 1);
    do {
      iVar8 = *piVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar12 = local_68;
  if (iVar8 == 0) {
    local_68[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar11 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar11;
    local_58 = *puVar12;
    FUN_02a44274(lVar11 + 0xd8,&local_58);
  }
  return;
}


