/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ff150; name: FUN_007ff150
 */


void FUN_007ff150(long *param_1,long param_2,long param_3)

{
  FUN_007ec3f0();
  *param_1 = (long)(PTR_DAT_04377670 + 0x10);
  FUN_007e5b70(param_1 + 0xb);
  param_1[0x11] = param_3;
  param_1[0x12] = param_2;
  return;
}


