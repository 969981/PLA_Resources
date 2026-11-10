/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028d38d0; name: FUN_028d38d0
 */


void FUN_028d38d0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_04273518;
  FUN_028d4e8c(param_1 + 0x12);
  FUN_028d547c(param_1 + 0xb);
  if ((long *)param_1[10] != (long *)0x0) {
    (**(code **)(*(long *)param_1[10] + 0x20))();
  }
  if ((long *)param_1[6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 0x20))();
  }
  plVar5 = (long *)param_1[1];
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
                    /* WARNING: Could not recover jumptable at 0x028d395c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}


