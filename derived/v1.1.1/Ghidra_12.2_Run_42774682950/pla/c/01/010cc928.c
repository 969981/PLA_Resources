/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010cc928; name: FUN_010cc928
 */


void FUN_010cc928(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  
  local_48 = param_2;
  FUN_010cca70(&local_90,param_2,&local_48);
  local_70 = local_90;
  local_90 = 0;
  local_68 = uStack_88;
  uStack_60 = local_80;
  local_58 = uStack_78;
  FUN_010ccb80(param_1,param_3,&local_70,&local_48);
  lVar1 = local_70;
  local_70 = 0;
  if (lVar1 != 0) {
    FUN_010cfcc8(&local_68);
  }
  *param_1 = &PTR_FUN_041f04d0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = param_2;
  param_1[0x1f] = 0xfffffffffffffff;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = param_2;
  param_1[0x26] = 0x1ffffffffffffff;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = param_2;
  param_1[0x2d] = 0x1ffffffffffffff;
  param_1[0x2e] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = param_2;
  param_1[0x34] = 0x1ffffffffffffff;
  param_1[0x35] = 0;
  FUN_010ccc1c(param_1 + 0x1b,param_4);
  FUN_010cccd4(param_1 + 0x22,param_5);
  FUN_010cccd4(param_1 + 0x29,param_5);
  FUN_010cccd4(param_1 + 0x30,param_5);
  return;
}


