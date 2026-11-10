/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0156b86c; name: FUN_0156b86c
 */


void FUN_0156b86c(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
                 undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  
  plVar11 = (long *)param_1[4];
  lVar8 = param_2;
  if (plVar11 != param_4 && plVar11 != (long *)0x0) {
    plVar5 = plVar11;
    do {
      FUN_0156af48(param_1,lVar8,plVar5);
      plVar5 = plVar5 + 1;
      lVar8 = lVar8 + 8;
    } while (param_4 != plVar5);
  }
  FUN_0156b6d8(param_1,lVar8,param_5);
  lVar8 = lVar8 + 8;
  if (plVar11 != (long *)0x0) {
    lVar10 = param_1[5];
    if (plVar11 + lVar10 != param_4) {
      do {
        FUN_0156af48(param_1,lVar8,param_4);
        param_4 = param_4 + 1;
        lVar8 = lVar8 + 8;
      } while (plVar11 + lVar10 != param_4);
      lVar10 = param_1[5];
    }
    if (lVar10 != 0) {
      plVar5 = (long *)*plVar11;
      if (plVar5 != (long *)0x0) {
        lVar7 = plVar5[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
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
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*plVar5 + 0x20))();
        }
      }
      if (lVar10 != 1) {
        plVar5 = (long *)plVar11[1];
        if (plVar5 != (long *)0x0) {
          lVar7 = plVar5[0xb];
          piVar1 = (int *)(lVar7 + 0xc);
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
            *(undefined8 *)(lVar7 + 0x18) = 0;
            (**(code **)(*plVar5 + 0x20))();
          }
        }
        if (lVar10 != 2) {
          plVar5 = (long *)plVar11[2];
          if (plVar5 != (long *)0x0) {
            lVar7 = plVar5[0xb];
            piVar1 = (int *)(lVar7 + 0xc);
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
              *(undefined8 *)(lVar7 + 0x18) = 0;
              (**(code **)(*plVar5 + 0x20))();
            }
          }
          if (lVar10 != 3) {
            plVar5 = (long *)plVar11[3];
            if (plVar5 != (long *)0x0) {
              lVar7 = plVar5[0xb];
              piVar1 = (int *)(lVar7 + 0xc);
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
                *(undefined8 *)(lVar7 + 0x18) = 0;
                (**(code **)(*plVar5 + 0x20))();
              }
            }
            if (lVar10 != 4) {
              plVar5 = (long *)plVar11[4];
              if (plVar5 != (long *)0x0) {
                lVar7 = plVar5[0xb];
                piVar1 = (int *)(lVar7 + 0xc);
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
                  *(undefined8 *)(lVar7 + 0x18) = 0;
                  (**(code **)(*plVar5 + 0x20))();
                }
              }
              if (lVar10 != 5) {
                plVar5 = (long *)plVar11[5];
                lVar10 = lVar10 + -6;
                if (plVar5 != (long *)0x0) {
                  lVar7 = plVar5[0xb];
                  piVar1 = (int *)(lVar7 + 0xc);
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
                    *(undefined8 *)(lVar7 + 0x18) = 0;
                    (**(code **)(*plVar5 + 0x20))();
                  }
                }
                if (lVar10 != 0) {
                  plVar11 = plVar11 + 6;
                  do {
                    plVar5 = (long *)*plVar11;
                    lVar10 = lVar10 + -1;
                    if (plVar5 != (long *)0x0) {
                      lVar7 = plVar5[0xb];
                      piVar1 = (int *)(lVar7 + 0xc);
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
                        *(undefined8 *)(lVar7 + 0x18) = 0;
                        (**(code **)(*plVar5 + 0x20))();
                      }
                    }
                    plVar11 = plVar11 + 1;
                  } while (lVar10 != 0);
                }
              }
            }
          }
        }
      }
    }
    lVar10 = param_1[6];
    plVar11 = (long *)*param_1;
    uVar9 = param_1[4];
    uVar6 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar6 & 1) != 0) {
      lVar7 = tpidr_el0;
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar7 + 0x38d480)) {
        FUN_02bcc824(plVar11,uVar9,lVar10 << 3,8);
        goto LAB_0156ba58;
      }
    }
    (**(code **)(*plVar11 + 0x18))(plVar11,uVar9,lVar10 << 3,8);
  }
LAB_0156ba58:
  param_1[6] = param_3;
  param_1[4] = param_2;
  param_1[5] = lVar8 - param_2 >> 3;
  return;
}


