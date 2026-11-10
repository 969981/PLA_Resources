/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010b9e20; name: FUN_010b9e20
 */


byte FUN_010b9e20(long param_1)

{
  if (*(long *)(param_1 + 0x58) == 0) {
    return 1;
  }
  return *(byte *)(*(long *)(param_1 + 0x58) + 0xd8) & 1;
}


