/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001bed24; name: FUN_001bed24
 */


byte FUN_001bed24(long param_1)

{
  if (*(char *)(*(long *)(param_1 + 0x18) + 0x1fc) == '\0') {
    return 0;
  }
  return *(byte *)(*(long *)(param_1 + 0x18) + 0x1fd) ^ 1;
}


