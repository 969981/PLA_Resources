/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a3a62c; name: FUN_01a3a62c
 */


void FUN_01a3a62c(undefined4 param_1,float param_2,float param_3,long param_4,int *param_5,
                 int param_6)

{
  long lVar1;
  undefined1 auVar2 [16];
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  
  uVar7 = *(undefined8 *)(param_4 + 0x368);
  uVar4 = *(undefined8 *)(param_4 + 0x358);
  uVar8 = *(undefined8 *)(param_4 + 0x348);
  uVar5 = *(undefined8 *)(param_4 + 0x340);
  uVar9 = *(undefined8 *)(param_4 + 0x350);
  uVar6 = *(undefined8 *)(param_4 + 0x360);
  uVar10 = *(undefined8 *)(param_4 + 0x370);
  if (param_3 == -1.0) {
    lVar1 = param_4 + 0x5b0;
    uVar11 = FUN_01904254(lVar1);
    *(int *)(param_4 + 0xdd50) = *param_5;
    if ((*param_5 == 0) && (*(char *)(param_4 + 0xe328) != '\0')) {
      lVar3 = param_4 + 0xe340;
    }
    else {
      lVar3 = param_4 + (long)*param_5 * 0x960 + 0xf10;
    }
    FUN_019039e0(lVar1,lVar3);
    param_3 = (float)FUN_01904460(uVar11,lVar1);
  }
  else {
    *(int *)(param_4 + 0xdd50) = *param_5;
    if ((*param_5 == 0) && (*(char *)(param_4 + 0xe328) != '\0')) {
      FUN_019039e0(param_4 + 0x5b0,param_4 + 0xe340);
    }
    else {
      FUN_019039e0(param_4 + 0x5b0,param_4 + (long)*param_5 * 0x960 + 0xf10);
    }
  }
  *(double *)(param_4 + 0x700) = (double)param_3;
  FUN_01903f90(&local_90,param_4 + 0x5b0);
  *(undefined8 *)(param_4 + 0xdd78) = local_78;
  *(undefined8 *)(param_4 + 0xdd88) = local_68;
  *(undefined8 *)(param_4 + 0xdd60) = local_90;
  *(undefined8 *)(param_4 + 0xdd68) = uStack_88;
  *(undefined8 *)(param_4 + 0xdd70) = local_80;
  *(undefined8 *)(param_4 + 0xdd90) = local_60;
  *(undefined8 *)(param_4 + 0xdd80) = local_70;
  *(undefined4 *)(param_4 + 0xdd94) = 1;
  *(undefined4 *)(param_4 + 0xdd80) = param_1;
  if (*(char *)(param_4 + 0x370) == '\0') {
    *(undefined4 *)(param_4 + 0x364) = *(undefined4 *)(param_4 + 0xdd84);
    *(undefined4 *)(param_4 + 0x360) = param_1;
    fVar12 = *(float *)(param_4 + 0xdd78);
    *(ulong *)(param_4 + 0x358) = (ulong)(uint)fVar12;
    *(undefined8 *)(param_4 + 0x350) = 0;
    *(undefined8 *)(param_4 + 0x340) = *(undefined8 *)(param_4 + 0xdd60);
    *(undefined8 *)(param_4 + 0x348) = *(undefined8 *)(param_4 + 0xdd68);
  }
  else {
    fVar12 = *(float *)(param_4 + 0xdd78);
  }
  fVar16 = *(float *)(param_4 + 0x468);
  *(float *)(param_4 + 0x468) = fVar12;
  fVar12 = fVar12 - fVar16;
  *(bool *)(param_4 + 0x470) = 1.1920929e-07 < fVar12;
  if (fVar16 <= *(float *)(param_4 + 0x46c)) {
    *(float *)(param_4 + 0x46c) = fVar12 + *(float *)(param_4 + 0x46c);
  }
  if (((param_6 != -1) && (0.0 < param_2)) && (param_2 < 1.0)) {
    *(undefined8 *)(param_4 + 0x498) = uVar4;
    *(undefined8 *)(param_4 + 0x4a8) = uVar7;
    *(undefined8 *)(param_4 + 0x488) = uVar8;
    *(undefined8 *)(param_4 + 0x490) = uVar9;
    *(undefined8 *)(param_4 + 0x480) = uVar5;
    *(undefined8 *)(param_4 + 0x4b0) = uVar10;
    *(undefined8 *)(param_4 + 0x4a0) = uVar6;
    *(undefined8 *)(param_4 + 0x508) = uVar8;
    *(undefined8 *)(param_4 + 0x530) = uVar10;
    *(undefined8 *)(param_4 + 0x520) = uVar6;
    *(undefined8 *)(param_4 + 0x528) = uVar7;
    *(undefined8 *)(param_4 + 0x518) = uVar4;
    *(undefined8 *)(param_4 + 0x510) = uVar9;
    *(undefined8 *)(param_4 + 0x500) = uVar5;
    *(undefined8 *)(param_4 + 0x4d0) = *(undefined8 *)(param_4 + 0x350);
    *(undefined8 *)(param_4 + 0x4c0) = *(undefined8 *)(param_4 + 0x340);
    *(undefined8 *)(param_4 + 0x4c8) = *(undefined8 *)(param_4 + 0x348);
    *(int *)(param_4 + 0x540) = param_6;
    *(undefined8 *)(param_4 + 0x4e0) = *(undefined8 *)(param_4 + 0x360);
    *(undefined8 *)(param_4 + 0x4d8) = *(undefined8 *)(param_4 + 0x358);
    *(undefined8 *)(param_4 + 0x4f0) = *(undefined8 *)(param_4 + 0x370);
    *(undefined8 *)(param_4 + 0x4e8) = *(undefined8 *)(param_4 + 0x368);
    *(float *)(param_4 + 0x544) = param_2;
    *(undefined8 *)(param_4 + 0x548) = 0;
    *(undefined4 *)(param_4 + 0x3e4) = 1;
  }
  FUN_018324c8(&local_90,0,param_4 + 0x480);
  *(undefined8 *)(param_4 + 0x358) = local_78;
  *(undefined8 *)(param_4 + 0x368) = local_68;
  *(undefined8 *)(param_4 + 0x340) = local_90;
  *(undefined8 *)(param_4 + 0x348) = uStack_88;
  *(undefined8 *)(param_4 + 0x350) = local_80;
  *(undefined8 *)(param_4 + 0x370) = local_60;
  *(undefined8 *)(param_4 + 0x360) = local_70;
  fVar12 = (float)*(undefined8 *)(param_4 + 0x358);
  if (*(char *)(param_4 + 0x370) != '\0') {
    fVar16 = (float)*(undefined8 *)(param_4 + 0x350) - *(float *)(param_4 + 0x340);
    fVar13 = (float)((ulong)*(undefined8 *)(param_4 + 0x350) >> 0x20) - *(float *)(param_4 + 0x344);
    fVar12 = fVar12 - *(float *)(param_4 + 0x348);
    fVar14 = (float)((ulong)*(undefined8 *)(param_4 + 0x358) >> 0x20) - *(float *)(param_4 + 0x34c);
    fVar16 = fVar16 * fVar16;
    fVar13 = fVar13 * fVar13;
    fVar12 = fVar12 * fVar12;
    fVar14 = fVar14 * fVar14;
    auVar15._4_4_ = fVar13;
    auVar15._0_4_ = fVar16;
    auVar15._8_4_ = fVar12;
    auVar15._12_4_ = fVar14;
    auVar2._4_4_ = fVar13;
    auVar2._0_4_ = fVar16;
    auVar2._8_4_ = fVar12;
    auVar2._12_4_ = fVar14;
    auVar15 = NEON_ext(auVar15,auVar2,8,1);
    fVar12 = SQRT(auVar15._0_4_ + fVar16 + auVar15._4_4_ + fVar13);
  }
  *(float *)(param_4 + 0x46c) = fVar12;
  *(float *)(param_4 + 0x468) = fVar12;
  return;
}


