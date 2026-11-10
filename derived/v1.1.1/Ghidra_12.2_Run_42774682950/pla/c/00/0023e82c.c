/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0023e82c; name: FUN_0023e82c
 */


long FUN_0023e82c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_2 + 200) + 0x38);
  if (lVar1 == 0) {
    return 0;
  }
  return lVar1 + (ulong)*(uint *)(param_1 + 0x30);
}


