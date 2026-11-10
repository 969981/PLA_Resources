/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a55fe8; name: FUN_01a55fe8
 */


void FUN_01a55fe8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 *local_88;
  undefined8 uStack_80;
  long *local_78;
  undefined8 *local_70 [2];
  undefined8 local_58;
  
  puVar7 = PTR_DAT_0437a558;
  puVar6 = PTR_DAT_0437a550;
  puVar1 = (undefined8 *)(param_2 + 0x8b8);
  if ((*(long *)(param_2 + 0x8b8) == 0) || (*(int *)(*(long *)(param_2 + 0x8b8) + 0xc) == 0)) {
    lVar14 = *(long *)(param_2 + 0x8a8);
    if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
      piVar2 = (int *)(lVar14 + 0xc);
      iVar8 = *(int *)(lVar14 + 0xc);
      do {
        plVar15 = *(long **)(lVar14 + 0x10);
        if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
          uVar10 = FUN_00aa0310();
          *(undefined8 *)puVar7 = uVar10;
          __cxa_guard_release(puVar6);
        }
        while( true ) {
          if (plVar15 == (long *)0x0) goto LAB_01a56060;
          if (plVar15 == (long *)puVar7) break;
          plVar15 = (long *)*plVar15;
        }
        iVar9 = *piVar2;
        if (iVar9 == iVar8) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar14 = *(long *)(lVar14 + 0x18);
            if (lVar14 != 0) {
              plVar15 = (long *)(lVar14 + -0x50);
              FUN_00a9ecd4(local_70,plVar15);
              FUN_009983e4(&local_78,local_70);
              puVar13 = local_70[0];
              if (local_70[0] != (undefined8 *)0x0) {
                piVar2 = (int *)(local_70[0] + 1);
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
                  local_70[0][2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar11 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar11;
                  local_88 = (undefined8 *)*puVar13;
                  FUN_02a44274(lVar11 + 0xd8,&local_88);
                }
              }
              if (local_78 == (long *)0x0) {
                bVar4 = false;
              }
              else {
                plVar12 = (long *)local_78[0x4a];
                if (plVar12 == (long *)local_78[0x4b]) {
                  lVar11 = *plVar12;
                }
                else {
                  do {
                    lVar11 = *plVar12;
                    plVar12 = plVar12 + 1;
                  } while (*(undefined1 **)(lVar11 + 0x158) != &DAT_afc4d6c05abef19e);
                }
                plVar12 = *(long **)(lVar11 + 0x68);
                bVar4 = false;
                if (plVar12 != (long *)0x0) {
                  (**(code **)(*plVar12 + 0x10))(plVar12);
                  (**(code **)(*plVar12 + 0x20))(local_70,plVar12);
                  local_88 = (undefined8 *)0x0;
                  uStack_80 = 0;
                  FUN_00af8910(&local_88,local_70);
                  puVar13 = local_70[0];
                  if (local_70[0] != (undefined8 *)0x0) {
                    piVar2 = (int *)(local_70[0] + 1);
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
                      local_70[0][2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar11 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar11;
                      local_58 = *puVar13;
                      FUN_02a44274(lVar11 + 0xd8,&local_58);
                    }
                  }
                  FUN_00af8c10(puVar1,&local_88);
                  *param_1 = 0;
                  param_1[1] = 0;
                  FUN_01a68b78(param_1,puVar1);
                  puVar13 = local_88;
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
                      local_70[0] = (undefined8 *)*puVar13;
                      FUN_02a44274(lVar11 + 0xd8,local_70);
                    }
                  }
                  (**(code **)(*plVar12 + 0x18))(plVar12);
                  bVar4 = true;
                }
                if (local_78 != (long *)0x0) {
                  lVar11 = local_78[0xb];
                  piVar2 = (int *)(lVar11 + 0xc);
                  do {
                    iVar8 = *piVar2;
                    cVar3 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar5) {
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
              lVar14 = *(long *)(lVar14 + 8);
              piVar2 = (int *)(lVar14 + 0xc);
              do {
                iVar8 = *piVar2;
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = iVar8 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar8 + -1 == 0) {
                *(undefined8 *)(lVar14 + 0x18) = 0;
                (**(code **)(*plVar15 + 0x20))(plVar15);
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
        iVar8 = iVar9;
      } while (iVar9 != 0);
    }
LAB_01a56060:
    puVar13 = (undefined8 *)*puVar1;
    *puVar1 = 0;
    if (puVar13 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar13 + 1);
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
        puVar13[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_70[0] = (undefined8 *)*puVar13;
        FUN_02a44274(lVar14 + 0xd8,local_70);
      }
    }
    *(undefined8 *)(param_2 + 0x8c0) = 0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  FUN_01a68b78(param_1,puVar1);
  return;
}


