/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0080921c; name: FUN_0080921c
 */


void FUN_0080921c(long *param_1)

{
  FUN_007f2a34();
  *param_1 = (long)(PTR_DAT_043778f8 + 0x10);
  FUN_00809514(param_1 + 4);
  *(undefined1 *)(param_1 + 0xb3) = 0;
  memset(param_1 + 0xab,0,0x40);
  param_1[1] = (long)(param_1 + 4);
  return;
}


