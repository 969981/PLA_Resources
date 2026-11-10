/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083bc1c; name: FUN_0083bc1c
 */


void FUN_0083bc1c(long *param_1,long param_2)

{
  undefined *puVar1;
  
  FUN_007ec3f0();
  param_1[0xb] = param_2;
  puVar1 = PTR_DAT_04377e98;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_007e5b70(param_1 + 0xf);
  *(undefined2 *)(param_1 + 0x15) = 0;
  FUN_0083fbc0(param_1 + 0x16);
  return;
}


