/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02588198; name: FUN_02588198
 */


long FUN_02588198(long param_1)

{
  return *(long *)(*(long *)(param_1 + 0x60) + (*(ulong *)(param_1 + 0x98) / 0x55) * 8) +
         (*(ulong *)(param_1 + 0x98) % 0x55) * 0x30;
}


