/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e2880; name: FUN_004e2880
 */


long FUN_004e2880(long param_1)

{
  if (*(int *)(param_1 + 0x38) == 0) {
    if (*(long *)(param_1 + 0xa8) == 0) {
      return 0;
    }
    return *(long *)(*(long *)(param_1 + 0xa8) + 0x260);
  }
  if (*(long *)(param_1 + 0x5c0) == 0) {
    return *(long *)(*(long *)(param_1 + 0x598) + 0x120);
  }
  return *(long *)(param_1 + 0x5c0);
}


