/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00606144; name: FUN_00606144
 */


long FUN_00606144(long param_1)

{
  long lVar1;
  
  lVar1 = (long)*(int *)(param_1 + 0x18);
  return lVar1 / 1000000 + *(long *)(param_1 + 0x10) * 1000 +
         (ulong)(lVar1 < -999999 && 0 < lVar1 % 1000000);
}


