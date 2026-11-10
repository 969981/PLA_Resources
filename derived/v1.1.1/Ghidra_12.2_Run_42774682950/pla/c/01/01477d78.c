/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01477d78; name: FUN_01477d78
 */


void FUN_01477d78(long param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  bool bVar5;
  
  plVar4 = *(long **)(param_1 + 0x2c8);
  if (plVar4 == (long *)0x0) {
    bVar5 = true;
  }
  else {
    plVar1 = plVar4 + 10;
    do {
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar5 = false;
  }
  FUN_0284ef04(*(long *)(param_1 + 0x448) + (ulong)param_3 * 0xd0,param_2,0,1);
  FUN_01477e6c(param_1,param_2,param_3);
  FUN_01478000(param_1,param_2,param_3);
  FUN_01478244(param_1,param_2,param_3);
  FUN_01477bc4(param_1,param_3,1);
  if (!bVar5) {
    plVar1 = plVar4 + 10;
    do {
      iVar3 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar3;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01477e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))(plVar4);
      return;
    }
  }
  return;
}


