/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008036f0; name: FUN_008036f0
 */


void FUN_008036f0(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04377728;
  param_1[0x1e] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_007e5c20(param_1 + 0xc);
  thunk_FUN_007e5dd4(param_1);
  return;
}


