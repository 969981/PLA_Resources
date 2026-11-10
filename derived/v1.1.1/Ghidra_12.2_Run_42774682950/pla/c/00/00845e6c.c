/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00845e6c; name: FUN_00845e6c
 */


void FUN_00845e6c(long *param_1)

{
  undefined *puVar1;
  
  FUN_00843724();
  puVar1 = PTR_DAT_04377ff0;
  param_1[8] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_008489f4(param_1 + 9);
  param_1[0xf7] = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  FUN_00846fd4((long)param_1 + 0x7c4);
  memset(param_1 + 0xf9,0,4);
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  return;
}


