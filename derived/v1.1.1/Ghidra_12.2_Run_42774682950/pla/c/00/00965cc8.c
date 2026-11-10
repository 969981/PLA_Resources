/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00965cc8; name: FUN_00965cc8
 */


void FUN_00965cc8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = param_1[0x10];
  if (lVar7 != 0) {
    plVar5 = (long *)*param_1;
    if (plVar5 != (long *)0x0) {
      plVar6 = plVar5 + 10;
      do {
        iVar4 = (int)*plVar6 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *(int *)plVar6 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
    }
    if (lVar7 != 1) {
      plVar5 = (long *)param_1[1];
      if (plVar5 != (long *)0x0) {
        plVar6 = plVar5 + 10;
        do {
          iVar4 = (int)*plVar6 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *(int *)plVar6 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar5 + 0x10))();
        }
      }
      if (lVar7 != 2) {
        plVar5 = (long *)param_1[2];
        if (plVar5 != (long *)0x0) {
          plVar6 = plVar5 + 10;
          do {
            iVar4 = (int)*plVar6 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *(int *)plVar6 = iVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 == 0) {
            (**(code **)(*plVar5 + 0x10))();
          }
        }
        if (lVar7 != 3) {
          plVar5 = (long *)param_1[3];
          if (plVar5 != (long *)0x0) {
            plVar6 = plVar5 + 10;
            do {
              iVar4 = (int)*plVar6 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar3) {
                *(int *)plVar6 = iVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar4 == 0) {
              (**(code **)(*plVar5 + 0x10))();
            }
          }
          if (lVar7 != 4) {
            plVar5 = (long *)param_1[4];
            if (plVar5 != (long *)0x0) {
              plVar6 = plVar5 + 10;
              do {
                iVar4 = (int)*plVar6 + -1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar3) {
                  *(int *)plVar6 = iVar4;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar4 == 0) {
                (**(code **)(*plVar5 + 0x10))();
              }
            }
            if (lVar7 != 5) {
              plVar5 = (long *)param_1[5];
              if (plVar5 != (long *)0x0) {
                plVar6 = plVar5 + 10;
                do {
                  iVar4 = (int)*plVar6 + -1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                  if (bVar3) {
                    *(int *)plVar6 = iVar4;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar4 == 0) {
                  (**(code **)(*plVar5 + 0x10))();
                }
              }
              if (lVar7 != 6) {
                plVar5 = (long *)param_1[6];
                lVar7 = lVar7 + -7;
                if (plVar5 != (long *)0x0) {
                  plVar6 = plVar5 + 10;
                  do {
                    iVar4 = (int)*plVar6 + -1;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                    if (bVar3) {
                      *(int *)plVar6 = iVar4;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (iVar4 == 0) {
                    (**(code **)(*plVar5 + 0x10))();
                  }
                }
                if (lVar7 != 0) {
                  plVar5 = param_1 + 7;
                  do {
                    plVar6 = (long *)*plVar5;
                    lVar7 = lVar7 + -1;
                    if (plVar6 != (long *)0x0) {
                      plVar1 = plVar6 + 10;
                      do {
                        iVar4 = (int)*plVar1 + -1;
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                        if (bVar3) {
                          *(int *)plVar1 = iVar4;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                      if (iVar4 == 0) {
                        (**(code **)(*plVar6 + 0x10))();
                      }
                    }
                    plVar5 = plVar5 + 1;
                  } while (lVar7 != 0);
                }
              }
            }
          }
        }
      }
    }
  }
  param_1[0x10] = 0;
  return;
}


