/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ff5d8; name: FUN_007ff5d8
 */


void FUN_007ff5d8(long *param_1)

{
  undefined *puVar1;
  
  *param_1 = (long)(PTR_DAT_043776a8 + 0x10);
  FUN_007f01f4(param_1 + 1);
  puVar1 = PTR_DAT_043776b0;
  param_1[0xb] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = (long)(puVar1 + 0x48);
  FUN_007e60f4(param_1 + 0xc,0x10);
  *(undefined2 *)(param_1 + 0x10) = 0;
  return;
}


