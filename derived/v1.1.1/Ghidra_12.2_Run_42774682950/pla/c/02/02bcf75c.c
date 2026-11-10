/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bcf75c; name: FUN_02bcf75c
 */


void FUN_02bcf75c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  uint uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  uint uStack_24;
  
  local_58 = 0;
  local_68 = 0x38e38e38e38e38e;
  uStack_60 = 0;
  local_30 = 0;
  local_28 = 0;
  uStack_38 = 0x38e38e38e38e38e;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = (ulong)uStack_54 << 0x20;
  param_1[4] = param_2;
  param_1[5] = 0x38e38e38e38e38e;
  local_80 = 0;
  local_78 = 0;
  local_90 = 0;
  local_88 = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = (ulong)uStack_24 << 0x20;
  param_1[10] = param_2;
  param_1[0xb] = 0x38e38e38e38e38e;
  local_50 = 0;
  local_48 = 0;
  uStack_70 = param_2;
  local_40 = param_2;
  FUN_00949b90(&local_90);
  puVar1 = param_1 + 0x10;
  *puVar1 = 0;
  param_1[0x12] = puVar1;
  param_1[0x13] = 0;
  param_1[0x11] = puVar1;
  param_1[0xf] = 0;
  param_1[0x16] = param_1 + 0x15;
  param_1[0x14] = 0;
  param_1[0x15] = param_1 + 0x15;
  return;
}


