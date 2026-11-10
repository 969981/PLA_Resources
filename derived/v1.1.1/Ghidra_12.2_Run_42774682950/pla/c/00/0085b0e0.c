/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085b0e0; name: FUN_0085b0e0
 */


bool FUN_0085b0e0(long param_1)

{
  if (*(int *)(param_1 + 0x13d8) == 2) {
    return *(int *)(param_1 + 0x13a8) - 2U < 3;
  }
  return false;
}


