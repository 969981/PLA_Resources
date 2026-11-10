/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7c354; name: FUN_02e7c354
 */


int FUN_02e7c354(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((long)param_1 + 0x4c) + -1;
  *(int *)((long)param_1 + 0x4c) = iVar1;
  if (iVar1 == 0) {
    (**(code **)*param_1)();
    FUN_02f59e60(0,param_1);
  }
  return iVar1;
}


