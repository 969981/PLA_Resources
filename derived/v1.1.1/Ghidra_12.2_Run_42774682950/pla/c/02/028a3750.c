/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028a3750; name: FUN_028a3750
 */


undefined8 FUN_028a3750(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = *param_2;
  lVar8 = *param_1;
  uVar2 = *(uint *)(lVar9 + 0x178);
  uVar3 = *(uint *)(*param_3 + 0x178);
  if (uVar2 < *(uint *)(lVar8 + 0x178)) {
    *param_1 = 0;
    if (uVar3 < uVar2) {
      lVar9 = *param_3;
      *param_3 = 0;
      *param_1 = lVar9;
      plVar7 = (long *)*param_3;
      *param_3 = 0;
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 10;
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
          (**(code **)(*plVar7 + 0x10))();
        }
      }
      *param_3 = lVar8;
    }
    else {
      lVar9 = *param_2;
      *param_2 = 0;
      *param_1 = lVar9;
      plVar7 = (long *)*param_2;
      *param_2 = 0;
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 10;
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
          (**(code **)(*plVar7 + 0x10))();
        }
      }
      *param_2 = lVar8;
      if (*(uint *)(*param_3 + 0x178) < *(uint *)(lVar8 + 0x178)) {
        *param_2 = 0;
        lVar9 = *param_3;
        *param_3 = 0;
        *param_2 = lVar9;
        plVar7 = (long *)*param_3;
        *param_3 = 0;
        if (plVar7 != (long *)0x0) {
          plVar1 = plVar7 + 10;
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
            (**(code **)(*plVar7 + 0x10))();
          }
        }
        *param_3 = lVar8;
        return 2;
      }
    }
  }
  else {
    if (uVar2 <= uVar3) {
      return 0;
    }
    *param_2 = 0;
    lVar8 = *param_3;
    *param_3 = 0;
    *param_2 = lVar8;
    plVar7 = (long *)*param_3;
    *param_3 = 0;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 10;
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
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    *param_3 = lVar9;
    lVar8 = *param_1;
    if (*(uint *)(*param_2 + 0x178) < *(uint *)(lVar8 + 0x178)) {
      *param_1 = 0;
      lVar9 = *param_2;
      *param_2 = 0;
      *param_1 = lVar9;
      plVar7 = (long *)*param_2;
      *param_2 = 0;
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 10;
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
          (**(code **)(*plVar7 + 0x10))();
        }
      }
      *param_2 = lVar8;
      return 2;
    }
  }
  return 1;
}


