/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029476a4; name: FUN_029476a4
 */


void FUN_029476a4(long param_1,byte param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  long *plVar10;
  long *local_48;
  
  plVar10 = (long *)(param_1 + (ulong)param_2 * 8 + 0xb0);
  plVar7 = (long *)*plVar10;
  if ((plVar7 != (long *)0x0) && (*param_3 != 0)) {
    (**(code **)(*plVar7 + 0x68))(plVar7,*param_3);
    plVar7 = (long *)(param_1 + (ulong)param_2 * 8 + 0xd8);
    (**(code **)(*(long *)*plVar7 + 0x68))((long *)*plVar7,*param_3);
    plVar10 = (long *)*plVar10;
    if (plVar10 != (long *)0x0) {
      plVar8 = plVar10 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    bVar3 = *(byte *)(plVar10 + 0x11);
    if (bVar3 != 0) {
      uVar9 = 0;
      do {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x50))(plVar10,uVar9);
        if (plVar8 == (long *)0x0) {
          local_48 = (long *)0x0;
          FUN_02948a9c(&local_48);
        }
        else {
          plVar1 = plVar8 + 10;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *(int *)plVar1 = (int)*plVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *(int *)plVar1 = (int)*plVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          local_48 = plVar8;
          FUN_02948a9c(&local_48);
          if (plVar8 != (long *)0x0) {
            plVar2 = plVar8 + 10;
            do {
              iVar6 = (int)*plVar2 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *(int *)plVar2 = iVar6;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar6 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
          do {
            iVar6 = (int)*plVar1 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *(int *)plVar1 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != bVar3);
    }
    plVar8 = plVar10 + 10;
    do {
      iVar6 = (int)*plVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      plVar7 = (long *)*plVar7;
    }
    else {
      plVar7 = (long *)*plVar7;
    }
    if (plVar7 != (long *)0x0) {
      plVar10 = plVar7 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *(int *)plVar10 = (int)*plVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    bVar3 = *(byte *)(plVar7 + 0x11);
    if (bVar3 != 0) {
      uVar9 = 0;
      do {
        plVar10 = (long *)(**(code **)(*plVar7 + 0x50))(plVar7,uVar9);
        if (plVar10 == (long *)0x0) {
          local_48 = (long *)0x0;
          FUN_02948a9c(&local_48);
        }
        else {
          plVar8 = plVar10 + 10;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *(int *)plVar8 = (int)*plVar8 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *(int *)plVar8 = (int)*plVar8 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          local_48 = plVar10;
          FUN_02948a9c(&local_48);
          if (plVar10 != (long *)0x0) {
            plVar1 = plVar10 + 10;
            do {
              iVar6 = (int)*plVar1 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *(int *)plVar1 = iVar6;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar6 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
          do {
            iVar6 = (int)*plVar8 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *(int *)plVar8 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != bVar3);
    }
    plVar10 = plVar7 + 10;
    do {
      iVar6 = (int)*plVar10 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *(int *)plVar10 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02947960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x10))(plVar7);
      return;
    }
  }
  return;
}


