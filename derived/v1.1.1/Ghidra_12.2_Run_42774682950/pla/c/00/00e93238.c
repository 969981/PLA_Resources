/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e93238; name: FUN_00e93238
 */


void FUN_00e93238(undefined4 param_1,undefined4 param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  long *local_40;
  long *local_38;
  
  uVar6 = FUN_00e931c4();
  FUN_00e92288(&local_38,param_1,param_2);
  plVar2 = local_38;
  FUN_02c60a58(local_38,uVar6);
  FUN_02c61688(plVar2);
  local_40 = plVar2;
  if (plVar2 == (long *)0x0) {
    FUN_00e927fc(&local_40,param_1,param_2);
  }
  else {
    plVar1 = plVar2 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_00e927fc(&local_40,param_1,param_2);
    if (plVar2 != (long *)0x0) {
      plVar1 = plVar2 + 10;
      do {
        iVar5 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_38 != (long *)0x0) {
    plVar2 = local_38 + 10;
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
      (**(code **)(*local_38 + 0x10))();
    }
  }
  return;
}


