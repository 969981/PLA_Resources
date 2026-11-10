/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d47948; name: FUN_00d47948
 */


void FUN_00d47948(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0x18cd1891cbc1757a;
  pcStack_38 = "common_context_menu";
  local_30 = 0x13;
  local_28 = (long *)0x0;
  uVar6 = FUN_00d472a0(*(undefined8 *)(param_1 + 0x10),&local_40);
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (*(long *)(param_1 + 8) != 0) {
    lVar7 = FUN_00d48784(&local_40,*(undefined8 *)(*(long *)(param_1 + 8) + 8),&DAT_03a78374);
    if (lVar7 != 0) {
      piVar1 = (int *)(lVar7 + 0x50);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar8 = *(long **)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (plVar8 != (long *)0x0) {
      plVar2 = plVar8 + 10;
      do {
        iVar5 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    *(long *)(param_1 + 0x20) = lVar7;
    if (*(long *)(param_1 + 8) != 0) {
      lVar7 = FUN_00d48784(&local_40,*(undefined8 *)(*(long *)(param_1 + 8) + 8),&DAT_03a78374);
      if (lVar7 != 0) {
        piVar1 = (int *)(lVar7 + 0x50);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar8 = *(long **)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x28) = 0;
      if (plVar8 != (long *)0x0) {
        plVar2 = plVar8 + 10;
        do {
          iVar5 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
      }
      *(long *)(param_1 + 0x28) = lVar7;
      if (*(long *)(param_1 + 8) != 0) {
        lVar7 = FUN_00d48784(&local_40,*(undefined8 *)(*(long *)(param_1 + 8) + 8),&DAT_03a78374);
        if (lVar7 != 0) {
          piVar1 = (int *)(lVar7 + 0x50);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        plVar8 = *(long **)(param_1 + 0x30);
        *(undefined8 *)(param_1 + 0x30) = 0;
        if (plVar8 != (long *)0x0) {
          plVar2 = plVar8 + 10;
          do {
            iVar5 = (int)*plVar2 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *(int *)plVar2 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar8 + 0x10))();
          }
        }
        *(long *)(param_1 + 0x30) = lVar7;
        if (*(long *)(param_1 + 8) != 0) {
          lVar7 = FUN_00d48784(&local_40,*(undefined8 *)(*(long *)(param_1 + 8) + 8),&DAT_03a78374);
          if (lVar7 != 0) {
            piVar1 = (int *)(lVar7 + 0x50);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          plVar8 = *(long **)(param_1 + 0x38);
          *(undefined8 *)(param_1 + 0x38) = 0;
          if (plVar8 != (long *)0x0) {
            plVar2 = plVar8 + 10;
            do {
              iVar5 = (int)*plVar2 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar4) {
                *(int *)plVar2 = iVar5;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar5 == 0) {
              (**(code **)(*plVar8 + 0x10))();
            }
          }
          *(long *)(param_1 + 0x38) = lVar7;
          if (*(long *)(param_1 + 8) != 0) {
            lVar7 = FUN_00d48784(&local_40,*(undefined8 *)(*(long *)(param_1 + 8) + 8),&DAT_03a78374
                                );
            if (lVar7 != 0) {
              piVar1 = (int *)(lVar7 + 0x50);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = *piVar1 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            plVar8 = *(long **)(param_1 + 0x40);
            *(undefined8 *)(param_1 + 0x40) = 0;
            if (plVar8 != (long *)0x0) {
              plVar2 = plVar8 + 10;
              do {
                iVar5 = (int)*plVar2 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar4) {
                  *(int *)plVar2 = iVar5;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar5 == 0) {
                (**(code **)(*plVar8 + 0x10))();
              }
            }
            *(long *)(param_1 + 0x40) = lVar7;
            if (*(long *)(param_1 + 8) != 0) {
              lVar7 = FUN_00d48784(&local_40,*(undefined8 *)(*(long *)(param_1 + 8) + 8),
                                   &DAT_03a78374);
              if (lVar7 != 0) {
                piVar1 = (int *)(lVar7 + 0x50);
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = *piVar1 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              plVar8 = *(long **)(param_1 + 0x48);
              *(undefined8 *)(param_1 + 0x48) = 0;
              if (plVar8 != (long *)0x0) {
                plVar2 = plVar8 + 10;
                do {
                  iVar5 = (int)*plVar2 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar4) {
                    *(int *)plVar2 = iVar5;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar5 == 0) {
                  (**(code **)(*plVar8 + 0x10))();
                }
              }
              *(long *)(param_1 + 0x48) = lVar7;
              if (*(long *)(param_1 + 8) != 0) {
                lVar7 = FUN_00d48784(&local_40,*(undefined8 *)(*(long *)(param_1 + 8) + 8),
                                     &DAT_03a78374);
                if (lVar7 != 0) {
                  piVar1 = (int *)(lVar7 + 0x50);
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = *piVar1 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                plVar8 = *(long **)(param_1 + 0x50);
                *(undefined8 *)(param_1 + 0x50) = 0;
                if (plVar8 != (long *)0x0) {
                  plVar2 = plVar8 + 10;
                  do {
                    iVar5 = (int)*plVar2 + -1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                    if (bVar4) {
                      *(int *)plVar2 = iVar5;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar5 == 0) {
                    (**(code **)(*plVar8 + 0x10))();
                  }
                }
                *(long *)(param_1 + 0x50) = lVar7;
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


