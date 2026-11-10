/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013f5310; name: FUN_013f5310
 */


void FUN_013f5310(long param_1,int param_2,uint param_3)

{
  param_1 = param_1 + (long)param_2 * 8;
  param_3 = param_3 & 1;
  FUN_028077c0(*(undefined8 *)(param_1 + 0x670),param_3);
  FUN_0280779c(*(undefined8 *)(param_1 + 0x670),param_3);
  FUN_0280779c(*(undefined8 *)(param_1 + 0x690),param_3);
  return;
}


