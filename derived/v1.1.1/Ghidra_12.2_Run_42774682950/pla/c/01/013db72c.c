/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013db72c; name: FUN_013db72c
 */


bool FUN_013db72c(long param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 8) - 1;
  if (uVar1 < 5) {
    return (uVar1 & 1) == 0;
  }
  return false;
}


