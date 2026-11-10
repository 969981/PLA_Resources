/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f2058; name: FUN_007f2058
 */


void FUN_007f2058(long *param_1)

{
  undefined *puVar1;
  
  param_1[2] = -1;
  param_1[3] = 0xffffffffffff;
  puVar1 = PTR_DAT_04377558;
  param_1[4] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_007e8190(param_1 + 6);
  return;
}


