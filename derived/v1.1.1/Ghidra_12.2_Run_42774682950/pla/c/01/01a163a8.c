/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a163a8; name: FUN_01a163a8
 */


void FUN_01a163a8(long param_1,int param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  float fVar3;
  undefined4 extraout_s0;
  float fVar4;
  undefined4 extraout_var;
  float fVar5;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  float fVar6;
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (*(int *)(param_1 + 0xece8) != param_2) {
    *(int *)(param_1 + 0xecec) = *(int *)(param_1 + 0xece8);
    *(undefined4 *)(param_1 + 0xedc8) = 0x7f7fffff;
    *(int *)(param_1 + 0xece8) = param_2;
    uVar8 = *(undefined4 *)(param_1 + 0x360);
    uVar9 = *(undefined4 *)(param_1 + 0x364);
    FUN_019039e0(param_1 + 0x5b0,param_1 + (long)*(int *)(param_1 + 0xdd50) * 0x960 + 0xf10);
    fVar3 = (float)FUN_01904460(uVar9,param_1 + 0x5b0);
    *(double *)(param_1 + 0x700) = (double)fVar3;
    uVar9 = DAT_043d2580;
    *(undefined4 *)(param_1 + 0xdd8c) = DAT_043d2580;
    FUN_01a1aa00(uVar8,param_1,*(undefined4 *)(param_1 + 0xece8));
    *(undefined4 *)(param_1 + 0xdd8c) = uVar9;
    *(undefined4 *)(param_1 + 0x36c) = uVar9;
    *(undefined4 *)(param_1 + 0x3e4) = 0;
    FUN_01a4b7e0(param_1);
    lVar2 = *(long *)(param_1 + 0xe2b0);
    *(undefined8 *)(lVar2 + 0xe4) = 0;
    *(undefined8 *)(lVar2 + 0x44) = 0;
    *(undefined8 *)(lVar2 + 0x94) = 0;
    *(undefined8 *)(lVar2 + 0x58) = 0;
    *(undefined8 *)(lVar2 + 0x50) = 0;
    *(undefined8 *)(lVar2 + 0xf0) = 0;
    *(undefined8 *)(lVar2 + 0x128) = 0;
    *(undefined8 *)(lVar2 + 0x130) = 0;
    *(undefined8 *)(lVar2 + 0x118) = 0;
    *(undefined8 *)(lVar2 + 0x120) = 0;
    *(undefined8 *)(lVar2 + 0x108) = 0;
    *(undefined8 *)(lVar2 + 0x110) = 0;
    *(undefined8 *)(lVar2 + 0xf8) = 0;
    *(undefined8 *)(lVar2 + 0x100) = 0;
    *(undefined8 *)(lVar2 + 0xa8) = 0;
    *(undefined8 *)(lVar2 + 0xa0) = 0;
    if (*(char *)(lVar2 + 0x140) != '\0') {
      *(undefined1 *)(lVar2 + 0x140) = 0;
    }
    lVar2 = *(long *)(param_1 + 0xe2d0);
    *(undefined4 *)(lVar2 + 0x74) = 0;
    *(undefined4 *)(lVar2 + 0x34) = *(undefined4 *)(lVar2 + 0x50);
    *(undefined4 *)(lVar2 + 0x38) = *(undefined4 *)(lVar2 + 0x40);
    *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)(lVar2 + 0x40);
    *(ulong *)(lVar2 + 0x18) = CONCAT44(extraout_var_01,extraout_var_00);
    *(ulong *)(lVar2 + 0x10) = CONCAT44(extraout_var,extraout_s0);
    *(ulong *)(lVar2 + 0x28) = CONCAT44(extraout_var_01,extraout_var_00);
    *(ulong *)(lVar2 + 0x20) = CONCAT44(extraout_var,extraout_s0);
    fVar3 = 0.0;
    fVar4 = 0.0;
    if (0 < *(int *)(lVar2 + 0x58)) {
      fVar4 = ABS(1.0 / (float)*(int *)(lVar2 + 0x58));
    }
    *(float *)(lVar2 + 0x78) = fVar4;
    *(undefined4 *)(lVar2 + 0x7c) = 0;
    if (0 < *(int *)(lVar2 + 0x6c)) {
      fVar3 = ABS(1.0 / (float)*(int *)(lVar2 + 0x6c));
    }
    *(float *)(lVar2 + 0x80) = fVar3;
    fVar3 = (float)*(undefined8 *)(param_1 + 0x358);
    if (*(char *)(param_1 + 0x370) != '\0') {
      fVar4 = (float)*(undefined8 *)(param_1 + 0x350) - *(float *)(param_1 + 0x340);
      fVar5 = (float)((ulong)*(undefined8 *)(param_1 + 0x350) >> 0x20) - *(float *)(param_1 + 0x344)
      ;
      fVar3 = fVar3 - *(float *)(param_1 + 0x348);
      fVar6 = (float)((ulong)*(undefined8 *)(param_1 + 0x358) >> 0x20) - *(float *)(param_1 + 0x34c)
      ;
      fVar4 = fVar4 * fVar4;
      fVar5 = fVar5 * fVar5;
      fVar3 = fVar3 * fVar3;
      fVar6 = fVar6 * fVar6;
      auVar7._4_4_ = fVar5;
      auVar7._0_4_ = fVar4;
      auVar7._8_4_ = fVar3;
      auVar7._12_4_ = fVar6;
      auVar1._4_4_ = fVar5;
      auVar1._0_4_ = fVar4;
      auVar1._8_4_ = fVar3;
      auVar1._12_4_ = fVar6;
      auVar7 = NEON_ext(auVar7,auVar1,8,1);
      fVar3 = SQRT(auVar7._0_4_ + fVar4 + auVar7._4_4_ + fVar5);
    }
    *(float *)(param_1 + 0x46c) = fVar3;
    *(float *)(param_1 + 0x468) = fVar3;
  }
  return;
}


