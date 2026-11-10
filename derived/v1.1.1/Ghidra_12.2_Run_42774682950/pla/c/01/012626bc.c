/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012626bc; name: FUN_012626bc
 */


ulong FUN_012626bc(long param_1)

{
  return (ulong)(*(long *)(param_1 + 0xa0) - *(long *)(param_1 + 0x98)) >> 5;
}


