/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293cf30; name: FUN_0293cf30
 */


void FUN_0293cf30(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  undefined8 local_50;
  undefined1 auStack_48 [8];
  
  memset(param_1,0,0x1310);
  *(undefined2 *)(param_1 + 4) = 10;
  param_1[0x413] = 0x3f800000;
  FUN_0293c720(param_1,param_4);
  local_50 = param_6;
  plVar5 = (long *)FUN_008c43ec(auStack_48,param_6,&local_50);
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar6 = *(long **)(param_1 + 0x2c);
  *(undefined8 *)(param_1 + 0x2c) = 0;
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
  *(long **)(param_1 + 0x2c) = plVar5;
  (**(code **)(*plVar5 + 0x68))(plVar5,param_2);
  local_50 = param_6;
  plVar5 = (long *)FUN_008c43ec(auStack_48,param_6,&local_50);
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar6 = *(long **)(param_1 + 0x2e);
  *(undefined8 *)(param_1 + 0x2e) = 0;
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
  *(long **)(param_1 + 0x2e) = plVar5;
  (**(code **)(*plVar5 + 0x68))(plVar5,param_3);
  *param_1 = 1;
  param_1[1] = param_5;
  return;
}


