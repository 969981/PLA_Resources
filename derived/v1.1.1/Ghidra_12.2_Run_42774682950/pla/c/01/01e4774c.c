/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e4774c; name: FUN_01e4774c
 */


void FUN_01e4774c(long *param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  *param_2 = (long)plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_01a0703c(param_2 + 1,param_1 + 1);
  *(int *)(param_2 + 3) = (int)param_1[3];
  return;
}


