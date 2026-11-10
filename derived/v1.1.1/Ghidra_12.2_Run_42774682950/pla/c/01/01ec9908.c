/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ec9908; name: FUN_01ec9908
 */


undefined8 FUN_01ec9908(long param_1,long param_2,ulong param_3,uint param_4)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  int iVar13;
  
  if ((param_4 & 1) == 0) {
    lVar8 = *(long *)(param_1 + 0x250);
    lVar11 = *(long *)(param_1 + 600);
    if (lVar8 != lVar11) {
      if ((param_3 & 1) != 0) {
        while ((*(int *)(lVar8 + 0x18) - 7U < 2 || (*(long *)(lVar8 + 0x10) != param_2))) {
          lVar8 = lVar8 + 0x30;
          if (lVar11 == lVar8) {
            return 0;
          }
        }
        return 1;
      }
      do {
        if (*(long *)(lVar8 + 0x10) == param_2) {
          return 1;
        }
        lVar8 = lVar8 + 0x30;
      } while (lVar11 != lVar8);
    }
  }
  else {
    plVar9 = *(long **)(param_1 + 0x2f0);
    if (plVar9 != (long *)0x0) {
      do {
        if (plVar9[2] == param_2) {
          plVar12 = (long *)plVar9[6];
          plVar2 = (long *)plVar9[7];
          if (plVar12 != plVar2) {
            if ((param_3 & 1) == 0) {
              do {
                lVar8 = *plVar12;
                if ((lVar8 != 0) && (*(int *)(lVar8 + 0xc) != 0)) {
                  piVar1 = (int *)(lVar8 + 0xc);
                  iVar13 = *(int *)(lVar8 + 0xc);
                  do {
                    param_3 = param_3 & 0xffffffff;
                    uVar7 = FUN_01ecab44(*(undefined8 *)(lVar8 + 0x10));
                    if ((uVar7 & 1) == 0) break;
                    iVar3 = *piVar1;
                    if (iVar3 == iVar13) {
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar5) {
                        *piVar1 = iVar13 + 1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                      if (cVar4 == '\0') {
                        lVar8 = *(long *)(lVar8 + 0x18);
                        plVar10 = (long *)(lVar8 + -0x50);
                        if (lVar8 != 0) {
                          uVar7 = FUN_01ea5fcc(plVar10);
                          if ((uVar7 & 1) == 0) {
                            uVar6 = 0;
                          }
                          else {
                            uVar6 = FUN_01e9bf64(plVar10);
                            uVar6 = uVar6 & 1;
                          }
                          lVar8 = *(long *)(lVar8 + 8);
                          piVar1 = (int *)(lVar8 + 0xc);
                          do {
                            iVar13 = *piVar1;
                            cVar4 = '\x01';
                            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                            if (bVar5) {
                              *piVar1 = iVar13 + -1;
                              cVar4 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar4 != '\0');
                          if (iVar13 + -1 == 0) {
                            *(undefined8 *)(lVar8 + 0x18) = 0;
                            (**(code **)(*plVar10 + 0x20))(plVar10);
                          }
                          if (uVar6 != 0) {
                            return 1;
                          }
                        }
                        break;
                      }
                    }
                    else {
                      ClearExclusiveLocal();
                    }
                    iVar13 = iVar3;
                  } while (iVar3 != 0);
                }
                plVar12 = plVar12 + 6;
              } while (plVar12 != plVar2);
            }
            else {
              do {
                lVar8 = *plVar12;
                if ((lVar8 != 0) && (*(int *)(lVar8 + 0xc) != 0)) {
                  piVar1 = (int *)(lVar8 + 0xc);
                  iVar13 = *(int *)(lVar8 + 0xc);
                  do {
                    param_3 = param_3 & 0xffffffff;
                    uVar7 = FUN_01ecab44(*(undefined8 *)(lVar8 + 0x10));
                    if ((uVar7 & 1) == 0) break;
                    iVar3 = *piVar1;
                    if (iVar3 == iVar13) {
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar5) {
                        *piVar1 = iVar13 + 1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                      if (cVar4 == '\0') {
                        lVar8 = *(long *)(lVar8 + 0x18);
                        plVar10 = (long *)(lVar8 + -0x50);
                        if (lVar8 != 0) {
                          if ((int)plVar12[3] - 7U < 2) {
                            iVar13 = 5;
                          }
                          else {
                            uVar7 = FUN_01ea5fcc(plVar10);
                            if (((uVar7 & 1) == 0) ||
                               (uVar7 = FUN_01e9bf64(plVar10), (uVar7 & 1) == 0)) {
                              iVar13 = 0;
                            }
                            else {
                              iVar13 = 1;
                            }
                          }
                          lVar8 = *(long *)(lVar8 + 8);
                          piVar1 = (int *)(lVar8 + 0xc);
                          do {
                            iVar3 = *piVar1;
                            cVar4 = '\x01';
                            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                            if (bVar5) {
                              *piVar1 = iVar3 + -1;
                              cVar4 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar4 != '\0');
                          if (iVar3 + -1 == 0) {
                            *(undefined8 *)(lVar8 + 0x18) = 0;
                            (**(code **)(*plVar10 + 0x20))(plVar10);
                          }
                          if ((iVar13 != 5) && (iVar13 != 0)) {
                            return 1;
                          }
                        }
                        break;
                      }
                    }
                    else {
                      ClearExclusiveLocal();
                    }
                    iVar13 = iVar3;
                  } while (iVar3 != 0);
                }
                plVar12 = plVar12 + 6;
              } while (plVar12 != plVar2);
            }
          }
        }
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}


