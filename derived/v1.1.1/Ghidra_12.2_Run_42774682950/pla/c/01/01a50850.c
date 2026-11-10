/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a50850; name: FUN_01a50850
 */


void FUN_01a50850(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *local_80;
  undefined8 uStack_78;
  long *local_70;
  long *local_68;
  undefined8 *local_60 [2];
  undefined8 local_48;
  
  puVar1 = (undefined8 *)(param_2 + 0x8d8);
  if (*(long *)(param_2 + 0x8d8) == 0) {
    *puVar1 = 0;
  }
  else {
    if (*(int *)(*(long *)(param_2 + 0x8d8) + 0xc) != 0) {
      *param_1 = 0;
      param_1[1] = 0;
      FUN_01a69360();
      return;
    }
    puVar15 = (undefined8 *)*puVar1;
    *puVar1 = 0;
    if (puVar15 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar15 + 1);
      do {
        iVar8 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        puVar15[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_60[0] = (undefined8 *)*puVar15;
        FUN_02a44274(lVar10 + 0xd8,local_60);
      }
    }
  }
  *(undefined8 *)(param_2 + 0x8e0) = 0;
  puVar6 = PTR_DAT_0437a558;
  puVar5 = PTR_DAT_0437a550;
  lVar10 = *(long *)(param_2 + 0x8a8);
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0xc) != 0)) {
    piVar2 = (int *)(lVar10 + 0xc);
    iVar8 = *(int *)(lVar10 + 0xc);
    do {
      puVar15 = *(undefined8 **)(lVar10 + 0x10);
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5,puVar1), iVar7 != 0)) {
        uVar9 = FUN_00aa0310();
        *(undefined8 *)puVar6 = uVar9;
        __cxa_guard_release(puVar5);
      }
      while( true ) {
        if (puVar15 == (undefined8 *)0x0) goto LAB_01a508c0;
        if (puVar15 == (undefined8 *)puVar6) break;
        puVar15 = (undefined8 *)*puVar15;
      }
      iVar7 = *piVar2;
      if (iVar7 == iVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar10 = *(long *)(lVar10 + 0x18);
          if (lVar10 != 0) {
            plVar14 = (long *)(lVar10 + -0x50);
            FUN_00a9ecd4(local_60,plVar14,puVar1);
            FUN_009983e4(&local_68,local_60);
            puVar15 = local_60[0];
            if (local_60[0] != (undefined8 *)0x0) {
              piVar2 = (int *)(local_60[0] + 1);
              do {
                iVar8 = *piVar2;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar4) {
                  *piVar2 = iVar8 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar8 + -1 == 0) {
                local_60[0][2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar11 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar11;
                local_80 = (undefined8 *)*puVar15;
                FUN_02a44274(lVar11 + 0xd8,&local_80);
              }
            }
            if (local_68 != (long *)0x0) {
              plVar12 = (long *)local_68[0x4a];
              plVar13 = (long *)local_68[0x4b];
              if (plVar12 == plVar13) {
LAB_01a50b50:
                if ((plVar12 == plVar13) || (*plVar12 == 0)) goto LAB_01a50ae4;
                FUN_009cda48(&local_70,*plVar12,local_60);
                if (local_70 != (long *)0x0) {
                  (**(code **)(*local_70 + 0x10))(local_60);
                  local_80 = (undefined8 *)0x0;
                  uStack_78 = 0;
                  FUN_00af8310(&local_80,local_60);
                  puVar15 = local_60[0];
                  if (local_60[0] != (undefined8 *)0x0) {
                    piVar2 = (int *)(local_60[0] + 1);
                    do {
                      iVar8 = *piVar2;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                      if (bVar4) {
                        *piVar2 = iVar8 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar8 + -1 == 0) {
                      local_60[0][2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar11 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar11;
                      local_48 = *puVar15;
                      FUN_02a44274(lVar11 + 0xd8,&local_48);
                    }
                  }
                  FUN_00af8610(puVar1,&local_80);
                  puVar15 = local_80;
                  if (local_80 != (undefined8 *)0x0) {
                    piVar2 = (int *)(local_80 + 1);
                    do {
                      iVar8 = *piVar2;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                      if (bVar4) {
                        *piVar2 = iVar8 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar8 + -1 == 0) {
                      local_80[2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar11 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar11;
                      local_60[0] = (undefined8 *)*puVar15;
                      FUN_02a44274(lVar11 + 0xd8,local_60);
                    }
                  }
                  if (local_70 != (long *)0x0) {
                    lVar11 = local_70[0xb];
                    piVar2 = (int *)(lVar11 + 0xc);
                    do {
                      iVar8 = *piVar2;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                      if (bVar4) {
                        *piVar2 = iVar8 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar8 + -1 == 0) {
                      *(undefined8 *)(lVar11 + 0x18) = 0;
                      (**(code **)(*local_70 + 0x20))();
                    }
                  }
                }
              }
              else {
                do {
                  if (*(undefined1 **)(*plVar12 + 0x158) == &DAT_afc4d6c05abef19e)
                  goto LAB_01a50b50;
                  plVar12 = plVar12 + 1;
                } while (plVar13 != plVar12);
LAB_01a50ae4:
                local_70 = (long *)0x0;
              }
              if (local_68 != (long *)0x0) {
                lVar11 = local_68[0xb];
                piVar2 = (int *)(lVar11 + 0xc);
                do {
                  iVar8 = *piVar2;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar4) {
                    *piVar2 = iVar8 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar8 + -1 == 0) {
                  *(undefined8 *)(lVar11 + 0x18) = 0;
                  (**(code **)(*local_68 + 0x20))();
                }
              }
            }
            lVar10 = *(long *)(lVar10 + 8);
            piVar2 = (int *)(lVar10 + 0xc);
            do {
              iVar8 = *piVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar4) {
                *piVar2 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              *(undefined8 *)(lVar10 + 0x18) = 0;
              (**(code **)(*plVar14 + 0x20))(plVar14,puVar1);
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
LAB_01a508c0:
  *param_1 = 0;
  param_1[1] = 0;
  FUN_01a69360(param_1,puVar1);
  return;
}


