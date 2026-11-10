/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0092ebd0; name: FUN_0092ebd0
 */


void FUN_0092ebd0(long param_1,long *param_2,undefined4 param_3,undefined4 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long *local_38;
  
  uVar5 = FUN_0294749c(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x98),*param_4);
  param_2 = (long *)*param_2;
  local_38 = param_2;
  if (param_2 == (long *)0x0) {
    FUN_0092ee20(param_1,&local_38,param_3,~uVar5 & 1,param_4);
  }
  else {
    plVar1 = param_2 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_0092ee20(param_1,&local_38,param_3,~uVar5 & 1,param_4);
    if (param_2 != (long *)0x0) {
      plVar1 = param_2 + 10;
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
                    /* WARNING: Could not recover jumptable at 0x0092ec90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_2 + 0x10))(param_2);
        return;
      }
    }
  }
  return;
}


