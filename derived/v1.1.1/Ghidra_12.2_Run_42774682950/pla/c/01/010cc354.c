/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010cc354; name: FUN_010cc354
 */


void FUN_010cc354(long param_1,ulong param_2)

{
  *(ulong *)(param_1 + 0x60) = *(ulong *)(param_1 + 0x60) | 1L << (param_2 & 0x3f);
  return;
}


