/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0028d0f0; name: FUN_0028d0f0
 */


long FUN_0028d0f0(long param_1)

{
  return *(long *)PTR_DAT_04373038 +
         ((ulong)*(byte *)(param_1 + 9) + (ulong)*(byte *)(param_1 + 8) * 4 +
         (ulong)*(byte *)(param_1 + 10) * 0x10) * 0xa8;
}


