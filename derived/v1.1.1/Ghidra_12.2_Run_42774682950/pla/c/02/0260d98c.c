/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0260d98c; name: FUN_0260d98c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0260d98c(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long **local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  long ****local_58;
  long ****pppplStack_50;
  long ***local_48;
  
  puVar8 = PTR_DAT_0437a6e0;
  puVar7 = PTR_DAT_0437a6d8;
  lVar12 = *(long *)(param_1 + 0x348);
  if (lVar12 == 0) {
    local_68 = (long *)0x0;
    plVar13 = local_68;
LAB_0260d9b0:
    local_68 = plVar13;
    lVar12 = *(long *)(param_1 + 0x318);
    puVar7 = PTR_DAT_0437a6d8;
    puVar8 = PTR_DAT_0437a6e0;
  }
  else {
    if (*(int *)(lVar12 + 0xc) != 0) {
      piVar2 = (int *)(lVar12 + 0xc);
      iVar10 = *(int *)(lVar12 + 0xc);
      do {
        plVar13 = *(long **)(lVar12 + 0x10);
        if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
          uVar11 = FUN_00ad3750();
          *(undefined8 *)puVar8 = uVar11;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_0260da74;
          if (plVar13 == (long *)puVar8) break;
          plVar13 = (long *)*plVar13;
        }
        iVar9 = *piVar2;
        if (iVar9 == iVar10) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_0260da30;
          local_68 = (long *)(*(long *)(lVar12 + 0x18) + -0x50);
          plVar13 = (long *)0x0;
          if (*(long *)(lVar12 + 0x18) != 0) {
            FUN_009c69bc(&local_70,local_68);
            if (local_70 != (long *)0x0) {
              local_60 = local_70 + 0x1e;
              local_48 = &local_78;
              local_78 = &local_68;
              local_58 = &local_48;
              pppplStack_50 = local_58;
              FUN_026114b4(local_60,&pppplStack_50,&local_60);
              plVar13 = *(long **)(param_1 + 0x348);
              *(undefined8 *)(param_1 + 0x348) = 0;
              if (plVar13 != (long *)0x0) {
                plVar1 = plVar13 + 1;
                do {
                  iVar10 = (int)*plVar1 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar4) {
                    *(int *)plVar1 = iVar10;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar10 == 0) {
                  plVar13[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar12 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar12;
                  local_60 = (long *)*plVar13;
                  FUN_02a44274(lVar12 + 0xd8,&local_60);
                }
              }
              *(undefined8 *)(param_1 + 0x350) = 0;
              if (local_70 != (long *)0x0) {
                lVar12 = local_70[0xb];
                piVar2 = (int *)(lVar12 + 0xc);
                do {
                  iVar10 = *piVar2;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar4) {
                    *piVar2 = iVar10 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar10 + -1 == 0) {
                  *(undefined8 *)(lVar12 + 0x18) = 0;
                  (**(code **)(*local_70 + 0x20))();
                }
              }
            }
            plVar13 = local_68;
            if (local_68 == (long *)0x0) goto LAB_0260d9b0;
            lVar12 = local_68[0xb];
            piVar2 = (int *)(lVar12 + 0xc);
            do {
              iVar10 = *piVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar4) {
                *piVar2 = iVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar10 + -1 != 0) goto LAB_0260d9b0;
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*local_68 + 0x20))(local_68);
            lVar12 = *(long *)(param_1 + 0x318);
            puVar7 = PTR_DAT_0437a6d8;
            puVar8 = PTR_DAT_0437a6e0;
            goto joined_r0x0260dbe8;
          }
          goto LAB_0260d9b0;
        }
        ClearExclusiveLocal();
LAB_0260da30:
        iVar10 = iVar9;
      } while (iVar9 != 0);
    }
LAB_0260da74:
    local_68 = (long *)0x0;
    lVar12 = *(long *)(param_1 + 0x318);
    puVar7 = PTR_DAT_0437a6d8;
    puVar8 = PTR_DAT_0437a6e0;
  }
joined_r0x0260dbe8:
  PTR_DAT_0437a6d8 = puVar7;
  PTR_DAT_0437a6e0 = puVar8;
  if (lVar12 == 0) {
    local_68 = (long *)0x0;
    plVar13 = local_68;
LAB_0260d9bc:
    local_68 = plVar13;
    lVar12 = *(long *)(param_1 + 0x328);
    puVar7 = PTR_DAT_0437a6d8;
    puVar8 = PTR_DAT_0437a6e0;
  }
  else {
    if (*(int *)(lVar12 + 0xc) != 0) {
      piVar2 = (int *)(lVar12 + 0xc);
      iVar10 = *(int *)(lVar12 + 0xc);
      do {
        plVar13 = *(long **)(lVar12 + 0x10);
        if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
          uVar11 = FUN_00ad3750();
          *(undefined8 *)puVar8 = uVar11;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_0260dcac;
          if (plVar13 == (long *)puVar8) break;
          plVar13 = (long *)*plVar13;
        }
        iVar9 = *piVar2;
        if (iVar9 == iVar10) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_0260dc68;
          local_68 = (long *)(*(long *)(lVar12 + 0x18) + -0x50);
          plVar13 = (long *)0x0;
          if (*(long *)(lVar12 + 0x18) != 0) {
            FUN_009c69bc(&local_70,local_68);
            if (local_70 != (long *)0x0) {
              local_60 = local_70 + 0x1e;
              local_48 = &local_78;
              local_78 = &local_68;
              local_58 = &local_48;
              pppplStack_50 = local_58;
              FUN_0261286c(local_60,&pppplStack_50,&local_60);
              plVar13 = *(long **)(param_1 + 0x318);
              *(undefined8 *)(param_1 + 0x318) = 0;
              if (plVar13 != (long *)0x0) {
                plVar1 = plVar13 + 1;
                do {
                  iVar10 = (int)*plVar1 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar4) {
                    *(int *)plVar1 = iVar10;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar10 == 0) {
                  plVar13[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar12 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar12;
                  local_60 = (long *)*plVar13;
                  FUN_02a44274(lVar12 + 0xd8,&local_60);
                }
              }
              *(undefined8 *)(param_1 + 800) = 0;
              if (local_70 != (long *)0x0) {
                lVar12 = local_70[0xb];
                piVar2 = (int *)(lVar12 + 0xc);
                do {
                  iVar10 = *piVar2;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar4) {
                    *piVar2 = iVar10 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar10 + -1 == 0) {
                  *(undefined8 *)(lVar12 + 0x18) = 0;
                  (**(code **)(*local_70 + 0x20))();
                }
              }
            }
            plVar13 = local_68;
            if (local_68 == (long *)0x0) goto LAB_0260d9bc;
            lVar12 = local_68[0xb];
            piVar2 = (int *)(lVar12 + 0xc);
            do {
              iVar10 = *piVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar4) {
                *piVar2 = iVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar10 + -1 != 0) goto LAB_0260d9bc;
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*local_68 + 0x20))(local_68);
            lVar12 = *(long *)(param_1 + 0x328);
            puVar7 = PTR_DAT_0437a6d8;
            puVar8 = PTR_DAT_0437a6e0;
            goto joined_r0x0260de20;
          }
          goto LAB_0260d9bc;
        }
        ClearExclusiveLocal();
LAB_0260dc68:
        iVar10 = iVar9;
      } while (iVar9 != 0);
    }
LAB_0260dcac:
    local_68 = (long *)0x0;
    lVar12 = *(long *)(param_1 + 0x328);
    puVar7 = PTR_DAT_0437a6d8;
    puVar8 = PTR_DAT_0437a6e0;
  }
joined_r0x0260de20:
  PTR_DAT_0437a6d8 = puVar7;
  PTR_DAT_0437a6e0 = puVar8;
  if (lVar12 == 0) {
    local_68 = (long *)0x0;
    plVar13 = local_68;
LAB_0260d9c8:
    local_68 = plVar13;
    lVar12 = *(long *)(param_1 + 0x338);
    puVar7 = PTR_DAT_0437a6d8;
    puVar8 = PTR_DAT_0437a6e0;
  }
  else {
    if (*(int *)(lVar12 + 0xc) != 0) {
      piVar2 = (int *)(lVar12 + 0xc);
      iVar10 = *(int *)(lVar12 + 0xc);
      do {
        plVar13 = *(long **)(lVar12 + 0x10);
        if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
          uVar11 = FUN_00ad3750();
          *(undefined8 *)puVar8 = uVar11;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_0260dee4;
          if (plVar13 == (long *)puVar8) break;
          plVar13 = (long *)*plVar13;
        }
        iVar9 = *piVar2;
        if (iVar9 == iVar10) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_0260dea0;
          local_68 = (long *)(*(long *)(lVar12 + 0x18) + -0x50);
          plVar13 = (long *)0x0;
          if (*(long *)(lVar12 + 0x18) != 0) {
            FUN_009c69bc(&local_70,local_68);
            if (local_70 != (long *)0x0) {
              local_60 = local_70 + 0x1e;
              local_48 = &local_78;
              local_78 = &local_68;
              local_58 = &local_48;
              pppplStack_50 = local_58;
              FUN_02613b8c(local_60,&pppplStack_50,&local_60);
              plVar13 = *(long **)(param_1 + 0x328);
              *(undefined8 *)(param_1 + 0x328) = 0;
              if (plVar13 != (long *)0x0) {
                plVar1 = plVar13 + 1;
                do {
                  iVar10 = (int)*plVar1 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar4) {
                    *(int *)plVar1 = iVar10;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar10 == 0) {
                  plVar13[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar12 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar12;
                  local_60 = (long *)*plVar13;
                  FUN_02a44274(lVar12 + 0xd8,&local_60);
                }
              }
              *(undefined8 *)(param_1 + 0x330) = 0;
              if (local_70 != (long *)0x0) {
                lVar12 = local_70[0xb];
                piVar2 = (int *)(lVar12 + 0xc);
                do {
                  iVar10 = *piVar2;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar4) {
                    *piVar2 = iVar10 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar10 + -1 == 0) {
                  *(undefined8 *)(lVar12 + 0x18) = 0;
                  (**(code **)(*local_70 + 0x20))();
                }
              }
            }
            plVar13 = local_68;
            if (local_68 == (long *)0x0) goto LAB_0260d9c8;
            lVar12 = local_68[0xb];
            piVar2 = (int *)(lVar12 + 0xc);
            do {
              iVar10 = *piVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar4) {
                *piVar2 = iVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar10 + -1 != 0) goto LAB_0260d9c8;
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*local_68 + 0x20))(local_68);
            lVar12 = *(long *)(param_1 + 0x338);
            puVar7 = PTR_DAT_0437a6d8;
            puVar8 = PTR_DAT_0437a6e0;
            goto joined_r0x0260def0;
          }
          goto LAB_0260d9c8;
        }
        ClearExclusiveLocal();
LAB_0260dea0:
        iVar10 = iVar9;
      } while (iVar9 != 0);
    }
LAB_0260dee4:
    local_68 = (long *)0x0;
    lVar12 = *(long *)(param_1 + 0x338);
    puVar7 = PTR_DAT_0437a6d8;
    puVar8 = PTR_DAT_0437a6e0;
  }
joined_r0x0260def0:
  PTR_DAT_0437a6d8 = puVar7;
  PTR_DAT_0437a6e0 = puVar8;
  if (lVar12 == 0) {
    local_68 = (long *)0x0;
    plVar13 = local_68;
LAB_0260d9d4:
    local_68 = plVar13;
    lVar12 = *(long *)(param_1 + 0x358);
    pbVar5 = PTR_DAT_0437a6d8;
    puVar6 = (undefined8 *)PTR_DAT_0437a6e0;
  }
  else {
    if (*(int *)(lVar12 + 0xc) != 0) {
      piVar2 = (int *)(lVar12 + 0xc);
      iVar10 = *(int *)(lVar12 + 0xc);
      do {
        plVar13 = *(long **)(lVar12 + 0x10);
        if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
          uVar11 = FUN_00ad3750();
          *(undefined8 *)puVar8 = uVar11;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_0260e11c;
          if (plVar13 == (long *)puVar8) break;
          plVar13 = (long *)*plVar13;
        }
        iVar9 = *piVar2;
        if (iVar9 == iVar10) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_0260e0d8;
          local_68 = (long *)(*(long *)(lVar12 + 0x18) + -0x50);
          plVar13 = (long *)0x0;
          if (*(long *)(lVar12 + 0x18) != 0) {
            FUN_009c69bc(&local_70,local_68);
            if (local_70 != (long *)0x0) {
              local_60 = local_70 + 0x1e;
              local_48 = &local_78;
              local_78 = &local_68;
              local_58 = &local_48;
              pppplStack_50 = local_58;
              FUN_02614eac(local_60,&pppplStack_50,&local_60);
              plVar13 = *(long **)(param_1 + 0x338);
              *(undefined8 *)(param_1 + 0x338) = 0;
              if (plVar13 != (long *)0x0) {
                plVar1 = plVar13 + 1;
                do {
                  iVar10 = (int)*plVar1 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar4) {
                    *(int *)plVar1 = iVar10;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar10 == 0) {
                  plVar13[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar12 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar12;
                  local_60 = (long *)*plVar13;
                  FUN_02a44274(lVar12 + 0xd8,&local_60);
                }
              }
              *(undefined8 *)(param_1 + 0x340) = 0;
              if (local_70 != (long *)0x0) {
                lVar12 = local_70[0xb];
                piVar2 = (int *)(lVar12 + 0xc);
                do {
                  iVar10 = *piVar2;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar4) {
                    *piVar2 = iVar10 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar10 + -1 == 0) {
                  *(undefined8 *)(lVar12 + 0x18) = 0;
                  (**(code **)(*local_70 + 0x20))();
                }
              }
            }
            plVar13 = local_68;
            if (local_68 == (long *)0x0) goto LAB_0260d9d4;
            lVar12 = local_68[0xb];
            piVar2 = (int *)(lVar12 + 0xc);
            do {
              iVar10 = *piVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar4) {
                *piVar2 = iVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar10 + -1 != 0) goto LAB_0260d9d4;
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*local_68 + 0x20))(local_68);
            lVar12 = *(long *)(param_1 + 0x358);
            pbVar5 = PTR_DAT_0437a6d8;
            puVar6 = (undefined8 *)PTR_DAT_0437a6e0;
            goto joined_r0x0260e290;
          }
          goto LAB_0260d9d4;
        }
        ClearExclusiveLocal();
LAB_0260e0d8:
        iVar10 = iVar9;
      } while (iVar9 != 0);
    }
LAB_0260e11c:
    local_68 = (long *)0x0;
    lVar12 = *(long *)(param_1 + 0x358);
    pbVar5 = PTR_DAT_0437a6d8;
    puVar6 = (undefined8 *)PTR_DAT_0437a6e0;
  }
joined_r0x0260e290:
  PTR_DAT_0437a6d8 = pbVar5;
  PTR_DAT_0437a6e0 = (undefined *)puVar6;
  if (lVar12 == 0) {
    local_68 = (long *)0x0;
    plVar13 = local_68;
LAB_0260d9e0:
    local_68 = plVar13;
    lVar12 = *(long *)(param_1 + 0x368);
  }
  else {
    if (*(int *)(lVar12 + 0xc) != 0) {
      piVar2 = (int *)(lVar12 + 0xc);
      iVar10 = *(int *)(lVar12 + 0xc);
      do {
        plVar13 = *(long **)(lVar12 + 0x10);
        if (((*pbVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(pbVar5), iVar9 != 0)) {
          uVar11 = FUN_00ad3750();
          *puVar6 = uVar11;
          __cxa_guard_release(pbVar5);
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_0260e354;
          if (plVar13 == puVar6) break;
          plVar13 = (long *)*plVar13;
        }
        iVar9 = *piVar2;
        if (iVar9 == iVar10) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_0260e310;
          local_68 = (long *)(*(long *)(lVar12 + 0x18) + -0x50);
          plVar13 = (long *)0x0;
          if (*(long *)(lVar12 + 0x18) != 0) {
            FUN_009c69bc(&local_70,local_68);
            if (local_70 != (long *)0x0) {
              local_60 = local_70 + 0x1e;
              local_48 = &local_78;
              local_78 = &local_68;
              local_58 = &local_48;
              pppplStack_50 = local_58;
              FUN_026161cc(local_60,&pppplStack_50,&local_60);
              plVar13 = *(long **)(param_1 + 0x338);
              *(undefined8 *)(param_1 + 0x338) = 0;
              if (plVar13 != (long *)0x0) {
                plVar1 = plVar13 + 1;
                do {
                  iVar10 = (int)*plVar1 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar4) {
                    *(int *)plVar1 = iVar10;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar10 == 0) {
                  plVar13[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar12 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar12;
                  local_60 = (long *)*plVar13;
                  FUN_02a44274(lVar12 + 0xd8,&local_60);
                }
              }
              *(undefined8 *)(param_1 + 0x340) = 0;
              if (local_70 != (long *)0x0) {
                lVar12 = local_70[0xb];
                piVar2 = (int *)(lVar12 + 0xc);
                do {
                  iVar10 = *piVar2;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar4) {
                    *piVar2 = iVar10 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar10 + -1 == 0) {
                  *(undefined8 *)(lVar12 + 0x18) = 0;
                  (**(code **)(*local_70 + 0x20))();
                }
              }
            }
            plVar13 = local_68;
            if (local_68 == (long *)0x0) goto LAB_0260d9e0;
            lVar12 = local_68[0xb];
            piVar2 = (int *)(lVar12 + 0xc);
            do {
              iVar10 = *piVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar4) {
                *piVar2 = iVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar10 + -1 != 0) goto LAB_0260d9e0;
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*local_68 + 0x20))(local_68);
            lVar12 = *(long *)(param_1 + 0x368);
            if (lVar12 == 0) {
              return;
            }
            goto LAB_0260e4a8;
          }
          goto LAB_0260d9e0;
        }
        ClearExclusiveLocal();
LAB_0260e310:
        iVar10 = iVar9;
      } while (iVar9 != 0);
    }
LAB_0260e354:
    local_68 = (long *)0x0;
    lVar12 = *(long *)(param_1 + 0x368);
  }
  if (lVar12 != 0) {
LAB_0260e4a8:
    puVar8 = PTR_DAT_0437a6e0;
    puVar7 = PTR_DAT_0437a6d8;
    if (*(int *)(lVar12 + 0xc) != 0) {
      piVar2 = (int *)(lVar12 + 0xc);
      iVar10 = *(int *)(lVar12 + 0xc);
      do {
        plVar13 = *(long **)(lVar12 + 0x10);
        if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
          uVar11 = FUN_00ad3750();
          *(undefined8 *)puVar8 = uVar11;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar13 == (long *)0x0) {
            return;
          }
          if (plVar13 == (long *)puVar8) break;
          plVar13 = (long *)*plVar13;
        }
        iVar9 = *piVar2;
        if (iVar9 == iVar10) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            local_68 = (long *)(*(long *)(lVar12 + 0x18) + -0x50);
            if (*(long *)(lVar12 + 0x18) == 0) {
              return;
            }
            FUN_009c69bc(&local_70);
            if (local_70 != (long *)0x0) {
              local_60 = local_70 + 0x1e;
              local_48 = &local_78;
              local_78 = &local_68;
              local_58 = &local_48;
              pppplStack_50 = local_58;
              FUN_026174ec(local_60,&pppplStack_50,&local_60);
              plVar13 = *(long **)(param_1 + 0x338);
              *(undefined8 *)(param_1 + 0x338) = 0;
              if (plVar13 != (long *)0x0) {
                plVar1 = plVar13 + 1;
                do {
                  iVar10 = (int)*plVar1 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar4) {
                    *(int *)plVar1 = iVar10;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar10 == 0) {
                  plVar13[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar12 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar12;
                  local_60 = (long *)*plVar13;
                  FUN_02a44274(lVar12 + 0xd8,&local_60);
                }
              }
              *(undefined8 *)(param_1 + 0x340) = 0;
              if (local_70 != (long *)0x0) {
                lVar12 = local_70[0xb];
                piVar2 = (int *)(lVar12 + 0xc);
                do {
                  iVar10 = *piVar2;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar4) {
                    *piVar2 = iVar10 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar10 + -1 == 0) {
                  *(undefined8 *)(lVar12 + 0x18) = 0;
                  (**(code **)(*local_70 + 0x20))();
                }
              }
            }
            if (local_68 == (long *)0x0) {
              return;
            }
            lVar12 = local_68[0xb];
            piVar2 = (int *)(lVar12 + 0xc);
            do {
              iVar10 = *piVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar4) {
                *piVar2 = iVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar10 + -1 == 0) {
              *(undefined8 *)(lVar12 + 0x18) = 0;
              (**(code **)(*local_68 + 0x20))();
              return;
            }
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar9;
      } while (iVar9 != 0);
    }
  }
  return;
}


