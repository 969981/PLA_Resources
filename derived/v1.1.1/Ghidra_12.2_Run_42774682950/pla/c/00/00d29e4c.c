/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d29e4c; name: FUN_00d29e4c
 */


void FUN_00d29e4c(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*param_2;
  *param_1 = (long)plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  plVar1 = (long *)param_2[4];
  param_1[4] = (long)plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  *(int *)(param_1 + 5) = (int)param_2[5];
  lVar2 = *param_3;
  param_1[7] = 0;
  param_1[6] = lVar2;
  param_1[8] = 0;
  FUN_0093b3f4(param_1 + 7,param_3 + 1);
  return;
}


