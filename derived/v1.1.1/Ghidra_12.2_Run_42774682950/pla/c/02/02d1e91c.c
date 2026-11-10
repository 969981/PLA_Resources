/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d1e91c; name: FUN_02d1e91c
 */


void FUN_02d1e91c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04297cf0;
  param_1[0xd] = &PTR_LAB_04297e70;
  param_1[9] = &PTR_LAB_04297e00;
  param_1[10] = &PTR_FUN_04297e48;
  param_1[0x96] = &PTR_LAB_04297f10;
  param_1[0x98] = PTR_DAT_04377558 + 0x10;
  FUN_007e81d4(param_1 + 0x9e);
  param_1[0x43] = PTR_DAT_04388520 + 0x10;
  FUN_007e81d4(param_1 + 0x81);
  FUN_007e81d4(param_1 + 0x6e);
  FUN_007e81d4(param_1 + 0x5b);
  FUN_007e81d4(param_1 + 0x48);
  FUN_02ccb3f8(param_1);
  return;
}


