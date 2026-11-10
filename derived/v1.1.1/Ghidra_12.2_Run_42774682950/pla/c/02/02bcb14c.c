/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bcb14c; name: FUN_02bcb14c
 */


undefined1  [16] FUN_02bcb14c(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_4_ = ((float)*param_1 + (float)param_1[2]) * 0.5;
  auVar1._4_4_ = ((float)((ulong)*param_1 >> 0x20) + (float)((ulong)param_1[2] >> 0x20)) * 0.5;
  auVar1._8_4_ = ((float)param_1[1] + (float)param_1[3]) * 0.5;
  auVar1._12_4_ = ((float)((ulong)param_1[1] >> 0x20) + (float)((ulong)param_1[3] >> 0x20)) * 0.5;
  return auVar1;
}


