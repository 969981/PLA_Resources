/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010e2508; name: FUN_010e2508
 */


void FUN_010e2508(undefined8 param_1,undefined4 param_2,undefined4 param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *local_38;
  
  FUN_02c5d39c(*param_4);
  param_4 = (long *)*param_4;
  local_38 = param_4;
  if (param_4 == (long *)0x0) {
    FUN_010e2158(param_1,&local_38,param_2,param_3);
  }
  else {
    plVar1 = param_4 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_010e2158(param_1,&local_38,param_2,param_3);
    if (param_4 != (long *)0x0) {
      plVar1 = param_4 + 10;
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
                    /* WARNING: Could not recover jumptable at 0x010e25b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_4 + 0x10))(param_4);
        return;
      }
    }
  }
  return;
}


