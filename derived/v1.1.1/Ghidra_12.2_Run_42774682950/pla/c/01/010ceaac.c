/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010ceaac; name: FUN_010ceaac
 */


byte FUN_010ceaac(long param_1)

{
  if (*(long *)(param_1 + 200) == 0) {
    return 0;
  }
  return *(byte *)(*(long *)(param_1 + 200) + 0x302) & 1;
}


