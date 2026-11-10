/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011445b0; name: FUN_011445b0
 */


byte FUN_011445b0(long param_1)

{
  if (*(long *)(param_1 + 0x58) == 0) {
    return 0;
  }
  return *(byte *)(*(long *)(param_1 + 0x58) + 0x302) & 1;
}


