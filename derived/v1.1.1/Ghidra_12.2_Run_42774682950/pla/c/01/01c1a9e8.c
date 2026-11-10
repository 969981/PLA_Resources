/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c1a9e8; name: FUN_01c1a9e8
 */


void FUN_01c1a9e8(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x1ef) = param_2 & 1;
  return;
}


