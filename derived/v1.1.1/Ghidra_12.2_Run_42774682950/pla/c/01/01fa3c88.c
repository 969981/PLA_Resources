/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01fa3c88; name: FUN_01fa3c88
 */


bool FUN_01fa3c88(long param_1)

{
  return *(long *)(*(long *)(param_1 + 0x68) + 0x70) != *(long *)(*(long *)(param_1 + 0x68) + 0x68);
}


