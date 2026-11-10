/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea9800; name: FUN_02ea9800
 */


void FUN_02ea9800(long param_1,long param_2)

{
  *(long *)(param_1 + 0x50) = param_2;
  if (param_2 != 0) {
    *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
  }
  return;
}


