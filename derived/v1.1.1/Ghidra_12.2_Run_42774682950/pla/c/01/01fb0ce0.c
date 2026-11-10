/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01fb0ce0; name: FUN_01fb0ce0
 */


void FUN_01fb0ce0(long param_1,byte param_2)

{
  if (*(long *)(param_1 + 0x68) != 0) {
    *(byte *)(*(long *)(param_1 + 0x68) + 0x192) = param_2 & 1;
  }
  return;
}


