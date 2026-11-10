/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a5581c; name: FUN_01a5581c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01a5581c(undefined8 *param_1,long param_2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined8 *puVar18;
  long *local_80;
  long *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  
  puVar6 = PTR_DAT_0437a558;
  puVar5 = PTR_DAT_0437a550;
  lVar15 = *(long *)(param_2 + 0x8a8);
  if ((lVar15 != 0) && (*(int *)(lVar15 + 0xc) != 0)) {
    piVar1 = (int *)(lVar15 + 0xc);
    iVar9 = *(int *)(lVar15 + 0xc);
    do {
      plVar17 = *(long **)(lVar15 + 0x10);
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
        uVar16 = FUN_00aa0310();
        *(undefined8 *)puVar6 = uVar16;
        __cxa_guard_release(puVar5);
      }
      while( true ) {
        if (plVar17 == (long *)0x0) goto LAB_01a55840;
        if (plVar17 == (long *)puVar6) break;
        plVar17 = (long *)*plVar17;
      }
      iVar8 = *piVar1;
      if (iVar8 == iVar9) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar15 = *(long *)(lVar15 + 0x18);
          if (lVar15 != 0) {
            plVar17 = (long *)(lVar15 + -0x50);
            FUN_00a9ecd4(&local_70,plVar17);
            FUN_009983e4(&local_78,&local_70);
            puVar18 = local_70;
            if (local_70 != (undefined8 *)0x0) {
              piVar1 = (int *)(local_70 + 1);
              do {
                iVar9 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar9 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar9 + -1 == 0) {
                local_70[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar11 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar11;
                local_58 = *puVar18;
                FUN_02a44274(lVar11 + 0xd8,&local_58);
              }
            }
            if (local_78 == (long *)0x0) {
LAB_01a55c38:
              bVar4 = false;
            }
            else {
              plVar12 = (long *)local_78[0x4a];
              plVar14 = (long *)local_78[0x4b];
              if (plVar12 == plVar14) {
LAB_01a559f0:
                if ((plVar12 == plVar14) || (*plVar12 == 0)) goto LAB_01a55994;
                FUN_01a05488(&local_80,*plVar12,&local_70);
                if (local_80 == (long *)0x0) goto joined_r0x01a55e3c;
                (**(code **)(*local_80 + 0x10))(&local_70);
                *param_1 = 0;
                param_1[1] = 0;
                puVar5 = PTR_DAT_04379498;
                do {
                  uVar16 = local_68;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(&local_68,0x10);
                  if (bVar4) {
                    local_68 = 0;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                puVar7 = PTR_DAT_043794a8;
                puVar6 = PTR_DAT_043794a0;
                uVar10 = *(undefined8 *)PTR_DAT_043794a0;
                *(undefined8 *)PTR_DAT_043794a8 = uVar10;
                FUN_02a44e0c(&local_60,uVar10,uVar16);
                puVar18 = local_70;
                local_70 = (undefined8 *)0x0;
                if (puVar18 != (undefined8 *)0x0) {
                  piVar1 = (int *)(puVar18 + 1);
                  do {
                    iVar9 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar9 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar9 + -1 == 0) {
                    puVar18[2] = 0;
                    if (((*puVar5 & 1) == 0) &&
                       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar11 = *(long *)puVar6;
                    *(long *)puVar7 = lVar11;
                    local_58 = *puVar18;
                    FUN_02a44274(lVar11 + 0xd8,&local_58);
                  }
                }
                puVar18 = (undefined8 *)*param_1;
                *param_1 = 0;
                if (local_60 == (undefined8 *)0x0) {
                  if (puVar18 != (undefined8 *)0x0) {
                    piVar1 = (int *)(puVar18 + 1);
                    do {
                      iVar9 = *piVar1;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar4) {
                        *piVar1 = iVar9 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar9 == 1) {
                      puVar18[2] = 0;
                      if (((*puVar5 & 1) == 0) &&
                         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar11 = *(long *)puVar6;
                      *(long *)puVar7 = lVar11;
                      local_58 = *puVar18;
                      FUN_02a44274(lVar11 + 0xd8,&local_58);
                    }
                  }
                  uVar16 = 0;
                }
                else {
                  puVar13 = local_60;
                  if (puVar18 != (undefined8 *)0x0) {
                    piVar1 = (int *)(puVar18 + 1);
                    do {
                      iVar9 = *piVar1;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar4) {
                        *piVar1 = iVar9 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar9 + -1 == 0) {
                      puVar18[2] = 0;
                      if (((*puVar5 & 1) == 0) &&
                         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar11 = *(long *)puVar6;
                      *(long *)puVar7 = lVar11;
                      local_58 = *puVar18;
                      FUN_02a44274(lVar11 + 0xd8,&local_58);
                    }
                    puVar13 = local_60;
                  }
                  local_60 = (undefined8 *)0x0;
                  *param_1 = puVar13;
                }
                puVar18 = local_60;
                param_1[1] = uVar16;
                if (local_60 != (undefined8 *)0x0) {
                  piVar1 = (int *)(local_60 + 1);
                  do {
                    iVar9 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar9 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar9 + -1 == 0) {
                    local_60[2] = 0;
                    if (((*puVar5 & 1) == 0) &&
                       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar11 = *(long *)puVar6;
                    *(long *)puVar7 = lVar11;
                    local_58 = *puVar18;
                    FUN_02a44274(lVar11 + 0xd8,&local_58);
                  }
                }
                puVar18 = local_70;
                if (local_70 != (undefined8 *)0x0) {
                  piVar1 = (int *)(local_70 + 1);
                  do {
                    iVar9 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar9 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar9 + -1 == 0) {
                    local_70[2] = 0;
                    if (((*puVar5 & 1) == 0) &&
                       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar11 = *(long *)puVar6;
                    *(long *)puVar7 = lVar11;
                    local_58 = *puVar18;
                    FUN_02a44274(lVar11 + 0xd8,&local_58);
                  }
                }
                if (local_80 != (long *)0x0) {
                  lVar11 = local_80[0xb];
                  piVar1 = (int *)(lVar11 + 0xc);
                  do {
                    iVar9 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar9 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar9 == 1) {
                    *(undefined8 *)(lVar11 + 0x18) = 0;
                    (**(code **)(*local_80 + 0x20))();
                  }
                }
                bVar4 = true;
              }
              else {
                do {
                  if (*(undefined1 **)(*plVar12 + 0x158) == &DAT_afc4d6c05abef19e)
                  goto LAB_01a559f0;
                  plVar12 = plVar12 + 1;
                } while (plVar14 != plVar12);
LAB_01a55994:
                local_80 = (long *)0x0;
joined_r0x01a55e3c:
                bVar4 = false;
              }
              if (local_78 != (long *)0x0) {
                lVar11 = local_78[0xb];
                piVar1 = (int *)(lVar11 + 0xc);
                do {
                  iVar9 = *piVar1;
                  cVar3 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar2) {
                    *piVar1 = iVar9 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar9 + -1 == 0) {
                  *(undefined8 *)(lVar11 + 0x18) = 0;
                  (**(code **)(*local_78 + 0x20))();
                }
              }
              if (!bVar4) goto LAB_01a55c38;
              bVar4 = true;
            }
            lVar15 = *(long *)(lVar15 + 8);
            piVar1 = (int *)(lVar15 + 0xc);
            do {
              iVar9 = *piVar1;
              cVar3 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar2) {
                *piVar1 = iVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar9 + -1 == 0) {
              *(undefined8 *)(lVar15 + 0x18) = 0;
              (**(code **)(*plVar17 + 0x20))(plVar17);
            }
            if (bVar4) {
              return;
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar9 = iVar8;
    } while (iVar8 != 0);
  }
LAB_01a55840:
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


