/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083fbc0; name: FUN_0083fbc0
 */


void FUN_0083fbc0(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04377f80;
  *(undefined2 *)(param_1 + 2) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  FUN_007f0ce0(param_1 + 3);
  *(undefined1 *)(param_1 + 7) = 0;
  FUN_007f0d34(param_1 + 3);
  return;
}


