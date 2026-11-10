/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cdb8e4; name: FUN_00cdb8e4
 */


void FUN_00cdb8e4(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
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
      (**(code **)(*plVar5 + 0x10))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00cdb94c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_3 + 0x50))(param_1,(long *)*param_3,param_2,param_4);
  return;
}


