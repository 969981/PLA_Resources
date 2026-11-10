/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008bc39c; name: FUN_008bc39c
 */


void FUN_008bc39c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  
  FUN_00926734();
  *param_1 = &PTR_LAB_041b61e0;
  param_1[9] = &PTR_LAB_041b6228;
  param_1[10] = &PTR_LAB_041b6270;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x16] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_008bc4a0(&local_50,param_1[1]);
  uVar1 = local_50;
  local_50 = 0;
  lVar2 = param_1[0xe];
  param_1[0xe] = uVar1;
  if (lVar2 != 0) {
    FUN_008bcd5c(param_1 + 0xf);
  }
  param_1[0x10] = uStack_40;
  param_1[0x11] = local_38;
  param_1[0xf] = local_48;
  local_28 = param_1[1];
  FUN_008bc5a0(&local_50,local_28,&local_28);
  uVar1 = local_50;
  local_50 = 0;
  lVar2 = param_1[0x13];
  param_1[0x13] = uVar1;
  if (lVar2 != 0) {
    FUN_008bcfb4(param_1 + 0x14);
  }
  param_1[0x15] = uStack_40;
  param_1[0x16] = local_38;
  param_1[0x14] = local_48;
  return;
}


