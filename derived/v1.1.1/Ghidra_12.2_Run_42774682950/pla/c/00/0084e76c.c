/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0084e76c; name: FUN_0084e76c
 */


void FUN_0084e76c(long param_1,uint param_2)

{
  *(long *)(param_1 + 0x4f8) = (long)(*(long *)PTR_DAT_043774c8 * (ulong)param_2) / 1000;
  return;
}


