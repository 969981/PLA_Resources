/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a56a94; name: FUN_01a56a94
 */


void FUN_01a56a94(undefined8 *param_1,long param_2)

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
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *local_88;
  undefined8 uStack_80;
  long *local_78;
  long *local_70;
  undefined8 *local_68 [2];
  undefined8 local_58;
  
  puVar1 = (undefined8 *)(param_2 + 0x8e8);
  if (*(long *)(param_2 + 0x8e8) == 0) {
    *puVar1 = 0;
  }
  else {
    if (*(int *)(*(long *)(param_2 + 0x8e8) + 0xc) != 0) {
      *param_1 = 0;
      param_1[1] = 0;
      FUN_01a695d0(param_1,puVar1);
      return;
    }
    puVar14 = (undefined8 *)*puVar1;
    *puVar1 = 0;
    if (puVar14 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar14 + 1);
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
        puVar14[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_68[0] = (undefined8 *)*puVar14;
        FUN_02a44274(lVar10 + 0xd8,local_68);
      }
    }
  }
  *(undefined8 *)(param_2 + 0x8f0) = 0;
  puVar6 = PTR_DAT_0437a558;
  puVar5 = PTR_DAT_0437a550;
  lVar10 = *(long *)(param_2 + 0x8a8);
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0xc) != 0)) {
    piVar2 = (int *)(lVar10 + 0xc);
    iVar8 = *(int *)(lVar10 + 0xc);
    do {
      plVar15 = *(long **)(lVar10 + 0x10);
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
        uVar9 = FUN_00aa0310();
        *(undefined8 *)puVar6 = uVar9;
        __cxa_guard_release(puVar5);
      }
      while( true ) {
        if (plVar15 == (long *)0x0) goto LAB_01a56b0c;
        if (plVar15 == (long *)puVar6) break;
        plVar15 = (long *)*plVar15;
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
            plVar15 = (long *)(lVar10 + -0x50);
            FUN_00a9ecd4(local_68,plVar15);
            FUN_009983e4(&local_70,local_68);
            puVar14 = local_68[0];
            if (local_68[0] != (undefined8 *)0x0) {
              piVar2 = (int *)(local_68[0] + 1);
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
                local_68[0][2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar11 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar11;
                local_88 = (undefined8 *)*puVar14;
                FUN_02a44274(lVar11 + 0xd8,&local_88);
              }
            }
            if (local_70 != (long *)0x0) {
              plVar12 = (long *)local_70[0x4a];
              plVar13 = (long *)local_70[0x4b];
              if (plVar12 == plVar13) {
LAB_01a56d5c:
                if ((plVar12 == plVar13) || (*plVar12 == 0)) goto LAB_01a56d00;
                FUN_00aeb818(&local_78,*plVar12,local_68);
                if (local_78 != (long *)0x0) {
                  (**(code **)(*local_78 + 0x10))(local_68);
                  local_88 = (undefined8 *)0x0;
                  uStack_80 = 0;
                  FUN_01a64388(&local_88,local_68);
                  puVar14 = local_68[0];
                  if (local_68[0] != (undefined8 *)0x0) {
                    piVar2 = (int *)(local_68[0] + 1);
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
                      local_68[0][2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar11 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar11;
                      local_58 = *puVar14;
                      FUN_02a44274(lVar11 + 0xd8,&local_58);
                    }
                  }
                  FUN_01a69840(puVar1,&local_88);
                  puVar14 = local_88;
                  if (local_88 != (undefined8 *)0x0) {
                    piVar2 = (int *)(local_88 + 1);
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
                      local_88[2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar11 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar11;
                      local_68[0] = (undefined8 *)*puVar14;
                      FUN_02a44274(lVar11 + 0xd8,local_68);
                    }
                  }
                  if (local_78 != (long *)0x0) {
                    lVar11 = local_78[0xb];
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
                      (**(code **)(*local_78 + 0x20))();
                    }
                  }
                }
              }
              else {
                do {
                  if (*(undefined1 **)(*plVar12 + 0x158) == &DAT_afc4d6c05abef19e)
                  goto LAB_01a56d5c;
                  plVar12 = plVar12 + 1;
                } while (plVar13 != plVar12);
LAB_01a56d00:
                local_78 = (long *)0x0;
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
              (**(code **)(*plVar15 + 0x20))(plVar15);
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
LAB_01a56b0c:
  *param_1 = 0;
  param_1[1] = 0;
  FUN_01a695d0(param_1,puVar1);
  return;
}


