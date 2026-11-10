/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0260f1a4; name: FUN_0260f1a4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0260f1a4(long param_1,ulong param_2)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  float fVar15;
  undefined8 *local_68;
  char *pcStack_60;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  
  if ((((param_2 & 1) == 0) && (lVar12 = *(long *)(param_1 + 0x3d0), lVar12 != 0)) &&
     (*(int *)(lVar12 + 0xc) != 0)) {
    piVar1 = (int *)(lVar12 + 0xc);
    iVar9 = *(int *)(lVar12 + 0xc);
    do {
      plVar13 = *(long **)(lVar12 + 0x10);
      lVar10 = FUN_00ab5048();
      while( true ) {
        if (plVar13 == (long *)0x0) {
          return;
        }
        if (plVar13 == (long *)lVar10) break;
        plVar13 = (long *)*plVar13;
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
          lVar12 = *(long *)(lVar12 + 0x18);
          if (lVar12 == 0) {
            return;
          }
          cVar3 = *(char *)(lVar12 + 0x230);
          plVar13 = (long *)(lVar12 + -0x50);
          fVar15 = (float)FUN_00d8326c(plVar13,2);
          lVar12 = *(long *)(lVar12 + 8);
          piVar1 = (int *)(lVar12 + 0xc);
          do {
            iVar9 = *piVar1;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*plVar13 + 0x20))(plVar13);
          }
          if (cVar3 == '\0') {
            return;
          }
          if ((*(char *)(param_1 + 0x37c) != '\0') &&
             ((((*(long *)(param_1 + 0x348) == 0 ||
                (*(int *)(*(long *)(param_1 + 0x348) + 0xc) == 0)) ||
               ((*(long *)(param_1 + 0x318) == 0 ||
                ((*(int *)(*(long *)(param_1 + 0x318) + 0xc) == 0 ||
                 (*(long *)(param_1 + 0x328) == 0)))))) ||
              ((*(int *)(*(long *)(param_1 + 0x328) + 0xc) == 0 ||
               (((((*(long *)(param_1 + 0x338) == 0 ||
                   (*(int *)(*(long *)(param_1 + 0x338) + 0xc) == 0)) ||
                  (*(long *)(param_1 + 0x358) == 0)) ||
                 ((*(int *)(*(long *)(param_1 + 0x358) + 0xc) == 0 ||
                  (*(long *)(param_1 + 0x368) == 0)))) ||
                (*(int *)(*(long *)(param_1 + 0x368) + 0xc) == 0)))))))) {
            FUN_0260ca3c(param_1);
          }
          puVar7 = PTR_DAT_0437a6e0;
          puVar6 = PTR_DAT_0437a6d8;
          lVar12 = *(long *)(param_1 + 0x358);
          if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc) != 0)) {
            piVar1 = (int *)(lVar12 + 0xc);
            iVar9 = *(int *)(lVar12 + 0xc);
            do {
              plVar13 = *(long **)(lVar12 + 0x10);
              if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
                uVar11 = FUN_00ad3750();
                *(undefined8 *)puVar7 = uVar11;
                __cxa_guard_release(puVar6);
              }
              while( true ) {
                if (plVar13 == (long *)0x0) goto LAB_0260f2b0;
                if (plVar13 == (long *)puVar7) break;
                plVar13 = (long *)*plVar13;
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
                  lVar12 = *(long *)(lVar12 + 0x18);
                  if (lVar12 != 0) {
                    plVar13 = (long *)(lVar12 + -0x50);
                    FUN_02c90b50(plVar13,0);
                    lVar10 = FUN_02c90d14(plVar13);
                    if (lVar10 != 0) {
                      *(ulong *)(lVar10 + 0x128) = (ulong)(uint)fVar15;
                      *(ulong *)(lVar10 + 0x120) = CONCAT44(fVar15,fVar15);
                      *(ulong *)(lVar10 + 0x148) =
                           CONCAT44((float)((ulong)*(undefined8 *)(lVar10 + 0xf8) >> 0x20) * 0.0,
                                    fVar15 * (float)*(undefined8 *)(lVar10 + 0xf8));
                      *(ulong *)(lVar10 + 0x140) =
                           CONCAT44(fVar15 * (float)((ulong)*(undefined8 *)(lVar10 + 0xf0) >> 0x20),
                                    fVar15 * (float)*(undefined8 *)(lVar10 + 0xf0));
                    }
                    lVar12 = *(long *)(lVar12 + 8);
                    piVar1 = (int *)(lVar12 + 0xc);
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
                      *(undefined8 *)(lVar12 + 0x18) = 0;
                      (**(code **)(*plVar13 + 0x20))(plVar13);
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
LAB_0260f2b0:
          puVar7 = PTR_DAT_0437f498;
          puVar6 = PTR_DAT_0437f490;
          lVar12 = *(long *)(param_1 + 0x3c0);
          if (lVar12 == 0) {
            return;
          }
          if (*(int *)(lVar12 + 0xc) == 0) {
            return;
          }
          piVar1 = (int *)(lVar12 + 0xc);
          iVar9 = *(int *)(lVar12 + 0xc);
          do {
            plVar13 = *(long **)(lVar12 + 0x10);
            if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
              uVar11 = FUN_01443f54();
              *(undefined8 *)puVar7 = uVar11;
              __cxa_guard_release(puVar6);
            }
            while( true ) {
              if (plVar13 == (long *)0x0) {
                return;
              }
              if (plVar13 == (long *)puVar7) break;
              plVar13 = (long *)*plVar13;
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
                lVar12 = *(long *)(lVar12 + 0x18);
                if (lVar12 == 0) {
                  return;
                }
                plVar13 = (long *)(lVar12 + -0x50);
                FUN_0152d920(&local_68,plVar13);
                puVar5 = local_68;
                if (local_68 == (undefined8 *)0x0) goto LAB_0260f4e0;
                if (*(int *)((long)local_68 + 0xc) == 0) {
LAB_0260f598:
                  plVar14 = (long *)0x0;
                  puVar5 = local_68;
                }
                else {
                  piVar1 = (int *)((long)local_68 + 0xc);
                  iVar9 = *(int *)((long)local_68 + 0xc);
                  while( true ) {
                    plVar14 = (long *)puVar5[2];
                    lVar10 = FUN_01091efc();
                    while( true ) {
                      if (plVar14 == (long *)0x0) goto LAB_0260f598;
                      if (plVar14 == (long *)lVar10) break;
                      plVar14 = (long *)*plVar14;
                    }
                    iVar8 = *piVar1;
                    if (iVar8 == iVar9) break;
                    ClearExclusiveLocal();
LAB_0260f558:
                    iVar9 = iVar8;
                    if (iVar8 == 0) goto LAB_0260f598;
                  }
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar9 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  if (cVar3 != '\0') goto LAB_0260f558;
                  lVar10 = puVar5[3];
                  plVar14 = (long *)0x0;
                  puVar5 = local_68;
                  if (lVar10 != 0) {
                    plVar14 = (long *)(lVar10 + -0x50);
                  }
                }
                local_68 = puVar5;
                if (puVar5 != (undefined8 *)0x0) {
                  piVar1 = (int *)(puVar5 + 1);
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
                    puVar5[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar10 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar10;
                    local_48 = *puVar5;
                    FUN_02a44274(lVar10 + 0xd8,&local_48);
                  }
                }
                if (plVar14 != (long *)0x0) {
                  local_68 = (undefined8 *)0x5c75e54a061040d9;
                  pcStack_60 = "PLAY_PM_SPECIAL_COLOR_S";
                  local_58 = 0x17;
                  local_50 = (long *)0x0;
                  FUN_0290b66c(plVar14,&local_68,0);
                  if (local_50 != (long *)0x0) {
                    (**(code **)(*local_50 + 0x20))();
                  }
                  lVar10 = plVar14[0xb];
                  piVar1 = (int *)(lVar10 + 0xc);
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
                    *(undefined8 *)(lVar10 + 0x18) = 0;
                    (**(code **)(*plVar14 + 0x20))(plVar14);
                  }
                }
LAB_0260f4e0:
                lVar12 = *(long *)(lVar12 + 8);
                piVar1 = (int *)(lVar12 + 0xc);
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
                  *(undefined8 *)(lVar12 + 0x18) = 0;
                  (**(code **)(*plVar13 + 0x20))(plVar13);
                  return;
                }
                return;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar9 = iVar8;
            if (iVar8 == 0) {
              return;
            }
          } while( true );
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar9 = iVar8;
    } while (iVar8 != 0);
  }
  return;
}


