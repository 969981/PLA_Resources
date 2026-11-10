/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028a3960; name: FUN_028a3960
 */


int FUN_028a3960(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  iVar5 = FUN_028a3750();
  lVar8 = *param_3;
  if (*(uint *)(*param_4 + 0x178) < *(uint *)(lVar8 + 0x178)) {
    *param_3 = 0;
    lVar7 = *param_4;
    *param_4 = 0;
    *param_3 = lVar7;
    plVar6 = (long *)*param_4;
    *param_4 = 0;
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
    *param_4 = lVar8;
    lVar8 = *param_2;
    if (*(uint *)(*param_3 + 0x178) < *(uint *)(lVar8 + 0x178)) {
      *param_2 = 0;
      lVar7 = *param_3;
      *param_3 = 0;
      *param_2 = lVar7;
      plVar6 = (long *)*param_3;
      *param_3 = 0;
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
      *param_3 = lVar8;
      lVar8 = *param_1;
      if (*(uint *)(*param_2 + 0x178) < *(uint *)(lVar8 + 0x178)) {
        *param_1 = 0;
        lVar7 = *param_2;
        *param_2 = 0;
        *param_1 = lVar7;
        plVar6 = (long *)*param_2;
        *param_2 = 0;
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
        iVar5 = iVar5 + 3;
        *param_2 = lVar8;
      }
      else {
        iVar5 = iVar5 + 2;
      }
    }
    else {
      iVar5 = iVar5 + 1;
    }
  }
  return iVar5;
}


