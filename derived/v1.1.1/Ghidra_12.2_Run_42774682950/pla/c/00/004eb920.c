/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004eb920; name: FUN_004eb920
 */


long FUN_004eb920(long param_1)

{
  long lVar1;
  
  if ((param_1 == 0) ||
     ((lVar1 = *(long *)(param_1 + 0x730), lVar1 == 0 &&
      ((*(long *)(param_1 + 0x598) == 0 ||
       (lVar1 = *(long *)(*(long *)(param_1 + 0x598) + 0x368), lVar1 == 0)))))) {
    return 0;
  }
  return lVar1;
}


