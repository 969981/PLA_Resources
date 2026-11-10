/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7c340; name: FUN_02e7c340
 */


int FUN_02e7c340(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x4c) + 1;
  *(int *)(param_1 + 0x4c) = iVar1;
  return iVar1;
}


