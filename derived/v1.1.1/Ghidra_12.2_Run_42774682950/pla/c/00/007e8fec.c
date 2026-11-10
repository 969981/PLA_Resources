/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e8fec; name: FUN_007e8fec
 */


void FUN_007e8fec(long param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *(long *)(lVar1 + 8) = param_2[1];
  *(long *)param_2[1] = lVar1;
  *param_2 = 0;
  param_2[1] = 0;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  return;
}


