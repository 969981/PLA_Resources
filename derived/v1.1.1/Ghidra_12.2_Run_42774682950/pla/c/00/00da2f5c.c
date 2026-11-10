/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00da2f5c; name: FUN_00da2f5c
 */


void FUN_00da2f5c(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = &PTR_FUN_041ed828;
  param_1[1] = 0;
  FUN_00da183c(param_1 + 2);
  param_1[0x1c] = 0;
  puVar1 = PTR_DAT_0437a888;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x1f] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x10] = puVar1 + 0x10;
  param_1[0x11] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  FUN_00da4374(param_1 + 0x1c);
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(undefined8 *)((long)param_1 + 0x104) = 0;
  param_1[0xd] = 0x3f8000003f800000;
  param_1[0xe] = 0x3f8000003f800000;
  return;
}


