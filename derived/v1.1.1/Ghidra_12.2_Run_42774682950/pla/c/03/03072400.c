/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03072400; name: FUN_03072400
 */


uint FUN_03072400(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,ulong param_6,undefined8 param_7,undefined8 *param_8,
                 undefined8 *param_9)

{
  uint uVar1;
  float fVar2;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  float fStack_c8;
  undefined8 uStack_c0;
  float fStack_b8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  
  fVar2 = *(float *)(param_1 + 0x14) + *(float *)(param_2 + 0x14);
  local_40 = CONCAT44(fVar2,fVar2);
  uStack_98 = param_4[1];
  local_a0 = *param_4;
  uStack_88 = param_3[1];
  local_90 = *param_3;
  uStack_34 = 3;
  if ((param_6 & 1) == 0) {
    uStack_34 = 1;
  }
  uStack_78 = param_3[3];
  local_80 = param_3[2];
  uStack_68 = param_3[5];
  local_70 = param_3[4];
  uStack_58 = param_3[7];
  local_60 = param_3[6];
  local_50 = 0x3727c5ac3727c5ac;
  uStack_48 = 0;
  local_38 = 0x14;
  local_e0 = *param_5;
  uVar1 = FUN_001cca90(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10),
                       *(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10),&local_a0,
                       &local_e0,0,param_7);
  *(undefined4 *)(param_8 + 3) = local_d8;
  fVar2 = *(float *)(param_1 + 0x14);
  *param_8 = CONCAT44((float)((ulong)local_d0 >> 0x20) - (float)((ulong)uStack_c0 >> 0x20) * fVar2,
                      (float)local_d0 - (float)uStack_c0 * fVar2);
  *(float *)(param_8 + 1) = fStack_c8 - fStack_b8 * fVar2;
  *(undefined8 *)((long)param_8 + 0xc) = uStack_c0;
  *(float *)((long)param_8 + 0x14) = fStack_b8;
  *param_9 = local_e0;
  return uVar1 & 1;
}


