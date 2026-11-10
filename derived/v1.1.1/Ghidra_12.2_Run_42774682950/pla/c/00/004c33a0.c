/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c33a0; name: FUN_004c33a0
 */


long FUN_004c33a0(long param_1)

{
  long lVar1;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0x508) == 0)) {
    return 0;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x508) + 0x1b8);
  if (lVar1 != 0) {
    FUN_00466c20(lVar1);
  }
  return lVar1;
}


