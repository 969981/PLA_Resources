/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02846dfc; name: FUN_02846dfc
 */


void FUN_02846dfc(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_02c436cc(*(undefined8 *)(param_1 + 0x98),&DAT_038f95fa);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 1;
  FUN_02c442ac(*(undefined8 *)(param_1 + 0x98),0);
  FUN_02846d60(param_1,2);
  FUN_02846d60(param_1,1);
  return;
}


