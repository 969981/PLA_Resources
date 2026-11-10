/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00806970; name: FUN_00806970
 */


void FUN_00806970(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04377830;
  param_1[0x16] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_007e5c20(param_1 + 0xc);
  thunk_FUN_007e5dd4(param_1);
  return;
}


