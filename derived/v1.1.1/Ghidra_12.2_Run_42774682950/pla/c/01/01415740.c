/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01415740; name: FUN_01415740
 */


int FUN_01415740(long param_1)

{
  return (int)((ulong)(*(long *)(param_1 + 0xa0) - *(long *)(param_1 + 0x98)) >> 3) * -0x55555555;
}


