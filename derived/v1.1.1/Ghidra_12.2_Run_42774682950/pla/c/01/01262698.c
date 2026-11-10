/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01262698; name: FUN_01262698
 */


long FUN_01262698(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x98) + (ulong)param_2 * 0x20;
  if ((uint)((ulong)(*(long *)(param_1 + 0xa0) - *(long *)(param_1 + 0x98)) >> 5) <= param_2) {
    lVar1 = param_1 + 0xd0;
  }
  return lVar1;
}


