/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d8ed90; name: FUN_00d8ed90
 */


void FUN_00d8ed90(long *param_1,ulong param_2)

{
  long *plVar1;
  
  plVar1 = param_1;
  if ((long *)param_1[0x3b] != (long *)0x0) {
    plVar1 = (long *)param_1[0x3b];
  }
  *(int *)(param_1 + 0x73) = (int)param_2;
  if (plVar1 != param_1) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2 & 0xffffffff);
    param_2 = param_2 & 0xffffffff;
  }
  plVar1 = param_1;
  if ((long *)param_1[0x3a] != (long *)0x0) {
    plVar1 = (long *)param_1[0x3a];
  }
  if (plVar1 == param_1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00d8ede8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x60))(plVar1,param_2);
  return;
}


