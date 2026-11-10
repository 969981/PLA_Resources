/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010e2c5c; name: FUN_010e2c5c
 */


int FUN_010e2c5c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long *local_28;
  
  param_3 = (long *)*param_3;
  local_28 = param_3;
  if (param_3 == (long *)0x0) {
    iVar5 = FUN_010e27d4(param_1,param_2,&local_28,1);
    iVar5 = 0x1e - iVar5;
  }
  else {
    plVar1 = param_3 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    iVar5 = FUN_010e27d4(param_1,param_2,&local_28,1);
    iVar5 = 0x1e - iVar5;
    if (param_3 != (long *)0x0) {
      plVar1 = param_3 + 10;
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
        (**(code **)(*param_3 + 0x10))(param_3);
      }
    }
  }
  return iVar5;
}


