/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0080371c; name: FUN_0080371c
 */


void FUN_0080371c(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04377728;
  param_1[0x1e] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_007e5c20(param_1 + 0xc);
  thunk_FUN_007e5dd4(param_1);
  operator_delete(param_1);
  return;
}


