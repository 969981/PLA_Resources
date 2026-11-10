/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022d1a0; name: FUN_0022d1a0
 */


long FUN_0022d1a0(long param_1,uint param_2)

{
  return *(long *)(param_1 + 0x18) +
         (ulong)*(uint *)(*(long *)(param_1 + 0x18) + (ulong)param_2 * 4 + 0xc);
}


