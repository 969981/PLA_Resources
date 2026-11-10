/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fe4f6c; name: FUN_02fe4f6c
 */


long FUN_02fe4f6c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  FUN_02fe50e8(lVar1);
  *(undefined8 *)(lVar1 + 8) = 0;
  *(long *)(param_1 + 8) = lVar1;
  return lVar1;
}


