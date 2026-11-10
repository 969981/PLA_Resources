/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022d180; name: FUN_0022d180
 */


long FUN_0022d180(long param_1,ushort param_2)

{
  return *(long *)(param_1 + 0x10) +
         (ulong)*(uint *)(*(long *)(param_1 + 0x10) + (ulong)param_2 * 4 + 0xc);
}


