/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e5830; name: FUN_007e5830
 */


void FUN_007e5830(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04377438 + 0x10);
  FUN_007e5c20(param_1 + 0xb);
  thunk_FUN_007e5dd4(param_1);
  operator_delete(param_1);
  return;
}


