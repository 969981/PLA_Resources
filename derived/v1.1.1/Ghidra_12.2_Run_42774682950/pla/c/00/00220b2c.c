/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00220b2c; name: FUN_00220b2c
 */


void FUN_00220b2c(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04372898;
  *param_1 = (long)(PTR_DAT_04372908 + 0x10);
  param_1[0x3d5] = (long)(puVar1 + 0x10);
  FUN_0021f4b4(param_1 + 0x3d5,0,0xc,0,0,0,1);
  param_1[0x3d9] = -1;
  *(undefined1 *)(param_1 + 0x3d8) = 0;
  FUN_00878494(param_1 + 0x3af);
  FUN_0087ebbc(param_1 + 0x3a6);
  FUN_0087ea98(param_1 + 0x38b);
  return;
}


