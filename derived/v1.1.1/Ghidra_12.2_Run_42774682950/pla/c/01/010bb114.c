/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010bb114; name: FUN_010bb114
 */


byte FUN_010bb114(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_010badf8(param_1 + 0x58);
  if (*(long *)(*plVar1 + 0x58) == 0) {
    return 1;
  }
  return *(byte *)(*(long *)(*plVar1 + 0x58) + 0xd8) & 1;
}


