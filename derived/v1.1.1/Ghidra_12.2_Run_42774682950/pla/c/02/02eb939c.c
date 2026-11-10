/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb939c; name: FUN_02eb939c
 */


int FUN_02eb939c(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((long)param_1 + 0x74) + -1;
  *(int *)((long)param_1 + 0x74) = iVar1;
  if (iVar1 == 0) {
    (**(code **)*param_1)();
    (*DAT_0442d150)(0,param_1);
  }
  return iVar1;
}


