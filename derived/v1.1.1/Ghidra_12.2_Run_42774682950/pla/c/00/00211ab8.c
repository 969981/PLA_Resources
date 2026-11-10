/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00211ab8; name: FUN_00211ab8
 */


byte FUN_00211ab8(long param_1)

{
  if (*(long *)(param_1 + 0xa8) == 0) {
    return 0;
  }
  return *(byte *)(param_1 + 0xe4) >> 2 & 1;
}


