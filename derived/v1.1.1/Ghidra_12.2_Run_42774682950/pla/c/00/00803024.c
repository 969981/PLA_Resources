/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00803024; name: FUN_00803024
 */


void FUN_00803024(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[0xf];
  *param_1 = (long)(PTR_DAT_04377708 + 0x10);
  if (lVar1 != 0) {
    FUN_007e5c20(lVar1);
    FUN_0081a800(lVar1);
  }
  param_1[0xb] = 0;
  thunk_FUN_007e5dd4(param_1);
  return;
}


