/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03098e64; name: FUN_03098e64
 */


void FUN_03098e64(long *param_1)

{
  *param_1 = (long)&PTR_LAB_042b41c0;
  param_1[4] = (long)&PTR_LAB_042b4208;
  if (param_1[5] != 0) {
    FUN_0333c57c(param_1 + 9);
    (**(code **)(*(long *)param_1[5] + 0x20))((long *)param_1[5],param_1 + 8,1,8);
  }
  FUN_0333af6c(param_1 + 9);
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


