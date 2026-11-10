/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00816ab4; name: FUN_00816ab4
 */


void FUN_00816ab4(long *param_1)

{
  FUN_00800008();
  *param_1 = (long)(PTR_DAT_04377a70 + 0x10);
  FUN_008192a0(param_1 + 0x1a);
  FUN_007f260c(param_1 + 0x61);
  param_1[0x61] = (long)(PTR_DAT_04377a38 + 0x10);
  FUN_007f2a34(param_1 + 100);
  param_1[100] = (long)(PTR_DAT_04377a78 + 0x10);
  FUN_008154b4(param_1 + 0x68);
  param_1[0x65] = (long)(param_1 + 0x68);
  FUN_0081a6a0(param_1 + 0xc3);
  param_1[0x107] = 0;
  return;
}


