/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01781abc; name: FUN_01781abc
 */


void FUN_01781abc(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined4 param_7,undefined8 *param_8)

{
  undefined4 local_d0 [2];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 auStack_a0 [2];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uStack_c0 = *param_2;
  local_c8 = *param_8;
  local_28 = 0xa0;
  uStack_14 = 0;
  local_40[0] = 0x24;
  local_20 = *param_3;
  local_58 = 0xa0;
  uStack_44 = 0;
  local_70[0] = 0x24;
  local_50 = *param_4;
  local_88 = 0xa0;
  local_80 = *param_5;
  local_b8 = 0xa0;
  local_d0[0] = 0x26;
  local_a4 = 2;
  auStack_a0[0] = 0x26;
  local_78 = 3000;
  uStack_74 = 2;
  local_b0 = *param_6;
  local_a8 = 3000;
  local_98 = local_c8;
  uStack_90 = uStack_c0;
  local_68 = local_c8;
  uStack_60 = uStack_c0;
  local_48 = param_7;
  local_38 = local_c8;
  uStack_30 = uStack_c0;
  local_18 = param_7;
  FUN_017889f0(*(undefined8 *)(param_1 + 0x58),local_40,local_70,auStack_a0,local_d0);
  return;
}


