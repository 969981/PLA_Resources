/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002324e8; name: FUN_002324e8
 */


void FUN_002324e8(long *param_1,undefined8 param_2)

{
  FUN_00241988();
  *param_1 = (long)(PTR_DAT_04372b10 + 0x10);
  param_1[4] = (long)(param_1 + 4);
  param_1[5] = (long)(param_1 + 4);
  FUN_0024278c(param_1,param_2,0,0,0);
  *param_1 = (long)(PTR_DAT_04372ba0 + 0x10);
  return;
}


