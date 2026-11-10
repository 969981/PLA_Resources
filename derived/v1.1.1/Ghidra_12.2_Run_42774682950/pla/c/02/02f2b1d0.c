/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2b1d0; name: FUN_02f2b1d0
 */


float FUN_02f2b1d0(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined8 local_b0;
  undefined8 uStack_a8;
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
  undefined8 uStack_38;
  
  uStack_38 = 0x4f0000004f000000;
  local_40 = 0x4f0000004f000000;
  uStack_48 = 0xcf000000cf000000;
  local_50 = 0xcf000000cf000000;
  local_b0 = *param_2;
  uStack_a8 = param_2[1];
  local_a0 = param_2[2];
  uStack_98 = param_2[3];
  local_90 = param_2[4];
  uStack_88 = param_2[5];
  local_70 = param_1[2];
  uStack_68 = param_1[3];
  local_60 = param_1[4];
  uStack_58 = param_1[5];
  local_80 = *param_1;
  uStack_78 = param_1[1];
  FUN_02f2b2c0(&local_b0,&local_80,&local_40,&local_50);
  uVar4 = (param_3 & 0xffffffff) >> 2;
  FUN_02f2b2c0(param_1,param_1 + uVar4 * 2 + -6,&local_40,&local_50);
  uVar1 = param_1[uVar4 * 2 + -5];
  *param_2 = param_1[uVar4 * 2 + -6];
  param_2[1] = uVar1;
  uVar1 = param_1[uVar4 * 2 + -4];
  uVar2 = param_1[uVar4 * 2 + -3];
  uVar3 = param_1[uVar4 * 2 + -1];
  param_2[4] = param_1[uVar4 * 2 + -2];
  param_2[5] = uVar3;
  param_2[2] = uVar1;
  param_2[3] = uVar2;
  uVar5 = NEON_fminnm((undefined4)local_40,local_40._4_4_);
  uVar5 = NEON_fminnm(uVar5,(undefined4)uStack_38);
  if ((float)local_50 <= (float)uStack_48) {
    local_50._0_4_ = (float)uStack_48;
  }
  fVar6 = (float)NEON_fminnm(uVar5,uStack_38._4_4_);
  if ((float)local_50 <= uStack_48._4_4_) {
    local_50._0_4_ = uStack_48._4_4_;
  }
  fVar7 = ABS(fVar6);
  if (ABS(fVar6) <= (float)local_50) {
    fVar7 = (float)local_50;
  }
  return fVar7;
}


