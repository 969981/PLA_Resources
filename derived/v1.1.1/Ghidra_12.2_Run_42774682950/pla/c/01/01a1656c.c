/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a1656c; name: FUN_01a1656c
 */


void FUN_01a1656c(undefined4 param_1,float param_2,float param_3,long param_4,int param_5,
                 int param_6,uint param_7)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  long lVar3;
  undefined4 extraout_s0;
  float fVar4;
  undefined4 extraout_var;
  float fVar5;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  float fVar6;
  undefined1 auVar7 [16];
  undefined4 uVar8;
  float fVar9;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  
  local_98 = *(undefined8 *)(param_4 + 0x358);
  local_90 = *(undefined4 *)(param_4 + 0x360);
  local_a8 = *(undefined8 *)(param_4 + 0x348);
  local_b0 = *(undefined8 *)(param_4 + 0x340);
  local_a0 = *(undefined8 *)(param_4 + 0x350);
  local_b8 = *(undefined8 *)(param_4 + 0x378);
  uVar8 = *(undefined4 *)(param_4 + 0x364);
  uVar1 = *(undefined4 *)(param_4 + 0x368);
  fVar9 = *(float *)(param_4 + 0x36c);
  local_c0 = *(undefined8 *)(param_4 + 0x370);
  FUN_019039e0(param_4 + 0x5b0,param_4 + (long)*(int *)(param_4 + 0xdd50) * 0x960 + 0xf10);
  if (param_2 == -1.0) {
    param_2 = (float)FUN_01904460(uVar8,param_4 + 0x5b0);
  }
  *(double *)(param_4 + 0x700) = (double)param_2;
  *(float *)(param_4 + 0xdd8c) = fVar9;
  fVar4 = fVar9;
  if ((param_7 & 1) != 0) {
    fVar4 = param_3;
    if (param_3 <= 0.0) {
      fVar4 = DAT_043d2580;
    }
    *(float *)(param_4 + 0xdd8c) = fVar4;
  }
  FUN_01a1aa00(param_1,param_4,*(undefined4 *)(param_4 + 0xece8));
  *(float *)(param_4 + 0xdd8c) = fVar4;
  *(float *)(param_4 + 0x36c) = fVar4;
  if (param_5 == 0) {
    *(undefined4 *)(param_4 + 0x3e4) = 0;
    FUN_01a4b7e0(param_4);
    lVar3 = *(long *)(param_4 + 0xe2b0);
    *(undefined8 *)(lVar3 + 0xe4) = 0;
    *(undefined8 *)(lVar3 + 0x44) = 0;
    *(undefined8 *)(lVar3 + 0x94) = 0;
    *(undefined8 *)(lVar3 + 0x58) = 0;
    *(undefined8 *)(lVar3 + 0x50) = 0;
    *(undefined8 *)(lVar3 + 0xf0) = 0;
    *(undefined8 *)(lVar3 + 0x128) = 0;
    *(undefined8 *)(lVar3 + 0x130) = 0;
    *(undefined8 *)(lVar3 + 0x118) = 0;
    *(undefined8 *)(lVar3 + 0x120) = 0;
    *(undefined8 *)(lVar3 + 0x108) = 0;
    *(undefined8 *)(lVar3 + 0x110) = 0;
    *(undefined8 *)(lVar3 + 0xf8) = 0;
    *(undefined8 *)(lVar3 + 0x100) = 0;
    *(undefined8 *)(lVar3 + 0xa8) = 0;
    *(undefined8 *)(lVar3 + 0xa0) = 0;
    if (*(char *)(lVar3 + 0x140) != '\0') {
      *(undefined1 *)(lVar3 + 0x140) = 0;
    }
    lVar3 = *(long *)(param_4 + 0xe2d0);
    *(undefined4 *)(lVar3 + 0x74) = 0;
    *(undefined4 *)(lVar3 + 0x34) = *(undefined4 *)(lVar3 + 0x50);
    *(undefined4 *)(lVar3 + 0x38) = *(undefined4 *)(lVar3 + 0x40);
    *(undefined4 *)(lVar3 + 0x30) = *(undefined4 *)(lVar3 + 0x40);
    *(ulong *)(lVar3 + 0x18) = CONCAT44(extraout_var_01,extraout_var_00);
    *(ulong *)(lVar3 + 0x10) = CONCAT44(extraout_var,extraout_s0);
    *(ulong *)(lVar3 + 0x28) = CONCAT44(extraout_var_01,extraout_var_00);
    *(ulong *)(lVar3 + 0x20) = CONCAT44(extraout_var,extraout_s0);
    fVar9 = 0.0;
    fVar4 = 0.0;
    if (0 < *(int *)(lVar3 + 0x58)) {
      fVar4 = ABS(1.0 / (float)*(int *)(lVar3 + 0x58));
    }
    *(float *)(lVar3 + 0x78) = fVar4;
    *(undefined4 *)(lVar3 + 0x7c) = 0;
    if (0 < *(int *)(lVar3 + 0x6c)) {
      fVar9 = ABS(1.0 / (float)*(int *)(lVar3 + 0x6c));
    }
    *(float *)(lVar3 + 0x80) = fVar9;
  }
  else {
    if (param_5 < 1) {
      fVar4 = 1.0;
    }
    else {
      fVar4 = 1.0 / (float)param_5;
    }
    if (((param_6 != -1) && (0.0 < fVar4)) && (fVar4 < 1.0)) {
      *(undefined8 *)(param_4 + 0x480) = local_b0;
      *(undefined8 *)(param_4 + 0x490) = local_a0;
      *(undefined4 *)(param_4 + 0x4a0) = local_90;
      *(undefined8 *)(param_4 + 0x488) = local_a8;
      *(undefined8 *)(param_4 + 0x498) = local_98;
      *(undefined4 *)(param_4 + 0x4a4) = uVar8;
      *(undefined4 *)(param_4 + 0x4a8) = uVar1;
      *(float *)(param_4 + 0x4ac) = fVar9;
      *(undefined8 *)(param_4 + 0x4b0) = local_c0;
      *(undefined4 *)(param_4 + 0x520) = local_90;
      *(undefined8 *)(param_4 + 0x518) = local_98;
      *(undefined8 *)(param_4 + 0x510) = local_a0;
      *(undefined8 *)(param_4 + 0x508) = local_a8;
      *(undefined8 *)(param_4 + 0x500) = local_b0;
      *(undefined4 *)(param_4 + 0x524) = uVar8;
      *(undefined4 *)(param_4 + 0x528) = uVar1;
      *(float *)(param_4 + 0x52c) = fVar9;
      *(undefined8 *)(param_4 + 0x530) = local_c0;
      *(undefined8 *)(param_4 + 0x4d0) = *(undefined8 *)(param_4 + 0x350);
      *(undefined8 *)(param_4 + 0x4c0) = *(undefined8 *)(param_4 + 0x340);
      *(undefined8 *)(param_4 + 0x4c8) = *(undefined8 *)(param_4 + 0x348);
      *(int *)(param_4 + 0x540) = param_6;
      *(undefined8 *)(param_4 + 0x4d8) = *(undefined8 *)(param_4 + 0x358);
      *(undefined8 *)(param_4 + 0x4f0) = *(undefined8 *)(param_4 + 0x370);
      *(undefined8 *)(param_4 + 0x4e0) = *(undefined8 *)(param_4 + 0x360);
      *(undefined8 *)(param_4 + 0x4e8) = *(undefined8 *)(param_4 + 0x368);
      *(float *)(param_4 + 0x544) = fVar4;
      *(undefined8 *)(param_4 + 0x548) = 0;
      *(undefined4 *)(param_4 + 0x3e4) = 1;
    }
    FUN_018324c8(&local_100,0,param_4 + 0x480);
    *(undefined8 *)(param_4 + 0x358) = local_e8;
    *(undefined8 *)(param_4 + 0x368) = local_d8;
    *(undefined8 *)(param_4 + 0x340) = local_100;
    *(undefined8 *)(param_4 + 0x348) = uStack_f8;
    *(undefined8 *)(param_4 + 0x350) = local_f0;
    *(undefined8 *)(param_4 + 0x370) = local_d0;
    *(undefined8 *)(param_4 + 0x360) = local_e0;
  }
  fVar9 = (float)*(undefined8 *)(param_4 + 0x358);
  if (*(char *)(param_4 + 0x370) != '\0') {
    fVar4 = (float)*(undefined8 *)(param_4 + 0x350) - *(float *)(param_4 + 0x340);
    fVar5 = (float)((ulong)*(undefined8 *)(param_4 + 0x350) >> 0x20) - *(float *)(param_4 + 0x344);
    fVar9 = fVar9 - *(float *)(param_4 + 0x348);
    fVar6 = (float)((ulong)*(undefined8 *)(param_4 + 0x358) >> 0x20) - *(float *)(param_4 + 0x34c);
    fVar4 = fVar4 * fVar4;
    fVar5 = fVar5 * fVar5;
    fVar9 = fVar9 * fVar9;
    fVar6 = fVar6 * fVar6;
    auVar7._4_4_ = fVar5;
    auVar7._0_4_ = fVar4;
    auVar7._8_4_ = fVar9;
    auVar7._12_4_ = fVar6;
    auVar2._4_4_ = fVar5;
    auVar2._0_4_ = fVar4;
    auVar2._8_4_ = fVar9;
    auVar2._12_4_ = fVar6;
    auVar7 = NEON_ext(auVar7,auVar2,8,1);
    fVar9 = SQRT(auVar7._0_4_ + fVar4 + auVar7._4_4_ + fVar5);
  }
  *(float *)(param_4 + 0x46c) = fVar9;
  *(float *)(param_4 + 0x468) = fVar9;
  return;
}


