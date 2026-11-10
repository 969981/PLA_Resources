/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b1e15c; name: FUN_00b1e15c
 */


long FUN_00b1e15c(long param_1)

{
  uint *puVar1;
  
  if (*(long *)(param_1 + 0xa0) == 0) {
    return 0;
  }
  puVar1 = *(uint **)(*(long *)(param_1 + 0xa0) + 0x250);
  return (long)puVar1 + (ulong)*puVar1;
}


