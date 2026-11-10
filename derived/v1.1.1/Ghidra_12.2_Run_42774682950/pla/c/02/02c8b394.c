/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c8b394; name: FUN_02c8b394
 */


undefined1 FUN_02c8b394(ushort param_1,int param_2)

{
  if (param_2 - 1U < 5) {
    return (&DAT_03a84f04)[(ulong)(param_2 - 1U) + (ulong)param_1 + (ulong)param_1 * 4];
  }
  return 0;
}


