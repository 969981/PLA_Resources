/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00229f1c; name: FUN_00229f1c
 */


byte FUN_00229f1c(long param_1)

{
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0;
  }
  return *(byte *)(*(long *)(param_1 + 0x10) + 0x1c) & 1;
}


