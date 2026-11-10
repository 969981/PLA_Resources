/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0153d8e4; name: FUN_0153d8e4
 */


void FUN_0153d8e4(long *param_1)

{
  long lVar1;
  
  lVar1 = FUN_02c436cc(*(undefined8 *)(*param_1 + 0x578),&DAT_038f95fa);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 1;
  return;
}


