/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5f894; name: FUN_02e5f894
 */


uint FUN_02e5f894(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uStack_88 = param_2[1];
  local_90 = *param_2;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  uStack_80 = CONCAT44((float)((ulong)*param_3 >> 0x20) - (float)((ulong)local_90 >> 0x20),
                       (float)*param_3 - (float)local_90);
  uStack_78 = CONCAT44((float)((ulong)param_3[1] >> 0x20) - (float)((ulong)uStack_88 >> 0x20),
                       (float)param_3[1] - (float)uStack_88);
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_70 = *param_4;
  uStack_68 = param_4[1];
  local_60 = 0;
  local_38 = 0;
  local_30 = uStack_80;
  uStack_28 = uStack_78;
  FUN_02e63578(*param_1,param_2,&local_30,&local_150);
  uVar1 = FUN_02e6363c(&local_150);
  return uVar1 & 1;
}


