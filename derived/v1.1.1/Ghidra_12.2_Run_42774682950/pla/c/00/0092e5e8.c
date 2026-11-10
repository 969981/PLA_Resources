/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0092e5e8; name: FUN_0092e5e8
 */


undefined8 FUN_0092e5e8(undefined8 param_1,long *param_2,int param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  int *piVar6;
  int *piVar7;
  long *local_28;
  long *local_18;
  
  uVar5 = 1;
  piVar6 = &DAT_041c2068;
  for (piVar7 = &DAT_041b8860; *piVar7 != param_3; piVar7 = piVar7 + 0x14) {
    if (uVar5 == 0x3cd) goto LAB_0092e650;
    if (piVar7[10] == param_3) goto LAB_0092e640;
    uVar5 = uVar5 + 2;
  }
  uVar5 = uVar5 - 1;
LAB_0092e640:
  piVar6 = (int *)((uVar5 & 0xffffffff) * 0x28 + 0x41b8868);
LAB_0092e650:
  if (*piVar6 == 2) {
    param_2 = (long *)*param_2;
    local_28 = param_2;
    if (param_2 == (long *)0x0) {
      FUN_0092ea10(param_1,&local_28);
      return 1;
    }
    plVar1 = param_2 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_0092ea10(param_1,&local_28);
    if (param_2 == (long *)0x0) {
      return 1;
    }
    plVar1 = param_2 + 10;
    do {
      iVar4 = (int)*plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    if (*piVar6 != 1) {
      return 0;
    }
    param_2 = (long *)*param_2;
    local_18 = param_2;
    if (param_2 == (long *)0x0) {
      FUN_0092e740(param_1,&local_18);
      return 1;
    }
    plVar1 = param_2 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_0092e740(param_1,&local_18);
    if (param_2 == (long *)0x0) {
      return 1;
    }
    plVar1 = param_2 + 10;
    do {
      iVar4 = (int)*plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (iVar4 == 1) {
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  return 1;
}


