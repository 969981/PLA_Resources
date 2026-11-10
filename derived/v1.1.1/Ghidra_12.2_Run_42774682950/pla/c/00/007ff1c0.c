/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ff1c0; name: FUN_007ff1c0
 */


void FUN_007ff1c0(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04377670 + 0x10);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  FUN_007e5c20(param_1 + 0xb);
  thunk_FUN_007e5dd4(param_1);
  operator_delete(param_1);
  return;
}


