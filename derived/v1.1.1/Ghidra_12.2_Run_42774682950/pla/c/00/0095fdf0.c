/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0095fdf0; name: FUN_0095fdf0
 */


void FUN_0095fdf0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = param_1[0x10];
  if (lVar6 != 0) {
    plVar5 = (long *)*param_1;
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 10;
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
        (**(code **)(*plVar5 + 0x10))();
      }
    }
    if (lVar6 != 1) {
      plVar5 = (long *)param_1[1];
      if (plVar5 != (long *)0x0) {
        plVar1 = plVar5 + 10;
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
          (**(code **)(*plVar5 + 0x10))();
        }
      }
      if (lVar6 != 2) {
        plVar5 = (long *)param_1[2];
        if (plVar5 != (long *)0x0) {
          plVar1 = plVar5 + 10;
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
            (**(code **)(*plVar5 + 0x10))();
          }
        }
        if (lVar6 != 3) {
          plVar5 = (long *)param_1[3];
          if (plVar5 != (long *)0x0) {
            plVar1 = plVar5 + 10;
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
              (**(code **)(*plVar5 + 0x10))();
            }
          }
          if (lVar6 != 4) {
            plVar5 = (long *)param_1[4];
            if (plVar5 != (long *)0x0) {
              plVar1 = plVar5 + 10;
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
                (**(code **)(*plVar5 + 0x10))();
              }
            }
            if (lVar6 != 5) {
              plVar5 = (long *)param_1[5];
              if (plVar5 != (long *)0x0) {
                plVar1 = plVar5 + 10;
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
                  (**(code **)(*plVar5 + 0x10))();
                }
              }
              if (lVar6 != 6) {
                plVar5 = (long *)param_1[6];
                lVar6 = lVar6 + -7;
                if (plVar5 != (long *)0x0) {
                  plVar1 = plVar5 + 10;
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
                    (**(code **)(*plVar5 + 0x10))();
                  }
                }
                if (lVar6 != 0) {
                  param_1 = param_1 + 7;
                  do {
                    plVar5 = (long *)*param_1;
                    lVar6 = lVar6 + -1;
                    if (plVar5 != (long *)0x0) {
                      plVar1 = plVar5 + 10;
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
                        (**(code **)(*plVar5 + 0x10))();
                      }
                    }
                    param_1 = param_1 + 1;
                  } while (lVar6 != 0);
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}


