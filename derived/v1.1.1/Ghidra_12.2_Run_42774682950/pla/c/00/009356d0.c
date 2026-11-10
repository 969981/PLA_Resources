/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009356d0; name: FUN_009356d0
 */


void FUN_009356d0(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  plVar7 = *(long **)(param_1 + 8);
  if (plVar7 != param_2) {
    plVar5 = (long *)plVar7[-1];
    if (plVar5 != (long *)0x0) {
      lVar6 = plVar5[0xb];
      piVar1 = (int *)(lVar6 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*plVar5 + 0x20))();
      }
    }
    if (plVar7 + -1 != param_2) {
      plVar5 = (long *)plVar7[-2];
      if (plVar5 != (long *)0x0) {
        lVar6 = plVar5[0xb];
        piVar1 = (int *)(lVar6 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar6 + 0x18) = 0;
          (**(code **)(*plVar5 + 0x20))();
        }
      }
      if (plVar7 + -2 != param_2) {
        plVar5 = (long *)plVar7[-3];
        if (plVar5 != (long *)0x0) {
          lVar6 = plVar5[0xb];
          piVar1 = (int *)(lVar6 + 0xc);
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 == 0) {
            *(undefined8 *)(lVar6 + 0x18) = 0;
            (**(code **)(*plVar5 + 0x20))();
          }
        }
        if (plVar7 + -3 != param_2) {
          plVar5 = (long *)plVar7[-4];
          if (plVar5 != (long *)0x0) {
            lVar6 = plVar5[0xb];
            piVar1 = (int *)(lVar6 + 0xc);
            do {
              iVar2 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar2 + -1 == 0) {
              *(undefined8 *)(lVar6 + 0x18) = 0;
              (**(code **)(*plVar5 + 0x20))();
            }
          }
          if (plVar7 + -4 != param_2) {
            plVar5 = (long *)plVar7[-5];
            if (plVar5 != (long *)0x0) {
              lVar6 = plVar5[0xb];
              piVar1 = (int *)(lVar6 + 0xc);
              do {
                iVar2 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar2 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar2 + -1 == 0) {
                *(undefined8 *)(lVar6 + 0x18) = 0;
                (**(code **)(*plVar5 + 0x20))();
              }
            }
            if (plVar7 + -5 != param_2) {
              plVar5 = (long *)plVar7[-6];
              if (plVar5 != (long *)0x0) {
                lVar6 = plVar5[0xb];
                piVar1 = (int *)(lVar6 + 0xc);
                do {
                  iVar2 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar2 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar2 + -1 == 0) {
                  *(undefined8 *)(lVar6 + 0x18) = 0;
                  (**(code **)(*plVar5 + 0x20))();
                }
              }
              if (plVar7 + -6 != param_2) {
                plVar7 = plVar7 + -7;
                plVar5 = (long *)*plVar7;
                if (plVar5 != (long *)0x0) {
                  lVar6 = plVar5[0xb];
                  piVar1 = (int *)(lVar6 + 0xc);
                  do {
                    iVar2 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar2 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar2 + -1 == 0) goto LAB_00935900;
                }
LAB_009358d4:
                if (plVar7 != param_2) {
                  while( true ) {
                    plVar7 = plVar7 + -1;
                    plVar5 = (long *)*plVar7;
                    if (plVar5 == (long *)0x0) break;
                    lVar6 = plVar5[0xb];
                    piVar1 = (int *)(lVar6 + 0xc);
                    do {
                      iVar2 = *piVar1;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar4) {
                        *piVar1 = iVar2 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar2 + -1 != 0) break;
LAB_00935900:
                    *(undefined8 *)(lVar6 + 0x18) = 0;
                    (**(code **)(*plVar5 + 0x20))();
                    if (plVar7 == param_2) goto LAB_009357e4;
                  }
                  goto LAB_009358d4;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_009357e4:
  *(long **)(param_1 + 8) = param_2;
  return;
}


