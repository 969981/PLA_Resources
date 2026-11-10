/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0257a118; name: FUN_0257a118
 */


undefined4 FUN_0257a118(long param_1)

{
  if (*(long *)(param_1 + 0x5c8) == *(long *)(param_1 + 0x5c0)) {
    return 0;
  }
  return *(undefined4 *)(*(long *)(param_1 + 0x5c0) + (ulong)*(uint *)(param_1 + 0x6f8) * 6);
}


