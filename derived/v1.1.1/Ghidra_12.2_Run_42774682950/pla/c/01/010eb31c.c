/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010eb31c; name: FUN_010eb31c
 */


uint FUN_010eb31c(long param_1)

{
  return *(uint *)(param_1 + 0x68) >> 0xe & 0xf;
}


