/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ea2b0; name: FUN_001ea2b0
 */


bool FUN_001ea2b0(long param_1)

{
  if (*(long *)(param_1 + 0x658) == 0) {
    return true;
  }
  return *(int *)(*(long *)(param_1 + 0x658) + 0x4020) == 2;
}


