/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a3a980; name: FUN_01a3a980
 */


void FUN_01a3a980(undefined4 param_1,float param_2,long param_3,int *param_4)

{
  undefined1 auVar1 [16];
  long lVar2;
  long lVar3;
  float fVar4;
  undefined4 extraout_s0;
  undefined4 uVar5;
  undefined4 extraout_var;
  float fVar6;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  if (param_2 == -1.0) {
    lVar3 = param_3 + 0x5b0;
    uVar5 = FUN_01904254(lVar3);
    *(int *)(param_3 + 0xdd50) = *param_4;
    if ((*param_4 == 0) && (*(char *)(param_3 + 0xe328) != '\0')) {
      lVar2 = param_3 + 0xe340;
    }
    else {
      lVar2 = param_3 + (long)*param_4 * 0x960 + 0xf10;
    }
    FUN_019039e0(lVar3,lVar2);
    param_2 = (float)FUN_01904460(uVar5,lVar3);
  }
  else {
    *(int *)(param_3 + 0xdd50) = *param_4;
    if ((*param_4 == 0) && (*(char *)(param_3 + 0xe328) != '\0')) {
      lVar3 = param_3 + 0xe340;
    }
    else {
      lVar3 = param_3 + (long)*param_4 * 0x960 + 0xf10;
    }
    FUN_019039e0(param_3 + 0x5b0,lVar3);
  }
  *(double *)(param_3 + 0x700) = (double)param_2;
  FUN_01903f90(&local_80,param_3 + 0x5b0);
  *(undefined8 *)(param_3 + 0xdd78) = local_68;
  *(undefined8 *)(param_3 + 0xdd88) = local_58;
  *(undefined8 *)(param_3 + 0xdd60) = local_80;
  *(undefined8 *)(param_3 + 0xdd68) = uStack_78;
  *(undefined8 *)(param_3 + 0xdd70) = local_70;
  *(undefined8 *)(param_3 + 0xdd90) = local_50;
  *(undefined8 *)(param_3 + 0xdd80) = local_60;
  *(undefined4 *)(param_3 + 0xdd94) = 1;
  *(undefined4 *)(param_3 + 0xdd80) = param_1;
  if (*(char *)(param_3 + 0x370) == '\0') {
    *(undefined4 *)(param_3 + 0x364) = *(undefined4 *)(param_3 + 0xdd84);
    *(undefined4 *)(param_3 + 0x360) = param_1;
    fVar4 = *(float *)(param_3 + 0xdd78);
    *(ulong *)(param_3 + 0x358) = (ulong)(uint)fVar4;
    *(undefined8 *)(param_3 + 0x350) = 0;
    *(undefined8 *)(param_3 + 0x340) = *(undefined8 *)(param_3 + 0xdd60);
    *(undefined8 *)(param_3 + 0x348) = *(undefined8 *)(param_3 + 0xdd68);
  }
  else {
    fVar4 = *(float *)(param_3 + 0xdd78);
  }
  fVar9 = *(float *)(param_3 + 0x468);
  *(float *)(param_3 + 0x468) = fVar4;
  fVar4 = fVar4 - fVar9;
  *(bool *)(param_3 + 0x470) = 1.1920929e-07 < fVar4;
  if (fVar9 <= *(float *)(param_3 + 0x46c)) {
    *(float *)(param_3 + 0x46c) = fVar4 + *(float *)(param_3 + 0x46c);
  }
  *(undefined4 *)(param_3 + 0x3e4) = 0;
  FUN_01a4b7e0(param_3);
  lVar3 = *(long *)(param_3 + 0xe2b0);
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
  lVar3 = *(long *)(param_3 + 0xe2d0);
  *(undefined4 *)(lVar3 + 0x74) = 0;
  *(undefined4 *)(lVar3 + 0x34) = *(undefined4 *)(lVar3 + 0x50);
  *(undefined4 *)(lVar3 + 0x38) = *(undefined4 *)(lVar3 + 0x40);
  *(undefined4 *)(lVar3 + 0x30) = *(undefined4 *)(lVar3 + 0x40);
  *(ulong *)(lVar3 + 0x18) = CONCAT44(extraout_var_01,extraout_var_00);
  *(ulong *)(lVar3 + 0x10) = CONCAT44(extraout_var,extraout_s0);
  *(ulong *)(lVar3 + 0x28) = CONCAT44(extraout_var_01,extraout_var_00);
  *(ulong *)(lVar3 + 0x20) = CONCAT44(extraout_var,extraout_s0);
  fVar4 = 0.0;
  fVar9 = 0.0;
  if (0 < *(int *)(lVar3 + 0x58)) {
    fVar9 = ABS(1.0 / (float)*(int *)(lVar3 + 0x58));
  }
  *(float *)(lVar3 + 0x78) = fVar9;
  *(undefined4 *)(lVar3 + 0x7c) = 0;
  if (0 < *(int *)(lVar3 + 0x6c)) {
    fVar4 = ABS(1.0 / (float)*(int *)(lVar3 + 0x6c));
  }
  *(float *)(lVar3 + 0x80) = fVar4;
  fVar4 = (float)*(undefined8 *)(param_3 + 0x358);
  if (*(char *)(param_3 + 0x370) != '\0') {
    fVar9 = (float)*(undefined8 *)(param_3 + 0x350) - *(float *)(param_3 + 0x340);
    fVar6 = (float)((ulong)*(undefined8 *)(param_3 + 0x350) >> 0x20) - *(float *)(param_3 + 0x344);
    fVar4 = fVar4 - *(float *)(param_3 + 0x348);
    fVar7 = (float)((ulong)*(undefined8 *)(param_3 + 0x358) >> 0x20) - *(float *)(param_3 + 0x34c);
    fVar9 = fVar9 * fVar9;
    fVar6 = fVar6 * fVar6;
    fVar4 = fVar4 * fVar4;
    fVar7 = fVar7 * fVar7;
    auVar8._4_4_ = fVar6;
    auVar8._0_4_ = fVar9;
    auVar8._8_4_ = fVar4;
    auVar8._12_4_ = fVar7;
    auVar1._4_4_ = fVar6;
    auVar1._0_4_ = fVar9;
    auVar1._8_4_ = fVar4;
    auVar1._12_4_ = fVar7;
    auVar8 = NEON_ext(auVar8,auVar1,8,1);
    fVar4 = SQRT(auVar8._0_4_ + fVar9 + auVar8._4_4_ + fVar6);
  }
  *(float *)(param_3 + 0x46c) = fVar4;
  *(float *)(param_3 + 0x468) = fVar4;
  return;
}


