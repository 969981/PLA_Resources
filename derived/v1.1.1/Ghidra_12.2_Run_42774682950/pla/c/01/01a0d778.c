/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a0d778; name: FUN_01a0d778
 */


void FUN_01a0d778(long param_1,undefined8 *param_2)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  long lVar4;
  float extraout_s0;
  float extraout_s0_00;
  float fVar5;
  undefined4 uVar6;
  float extraout_var;
  float extraout_var_00;
  float fVar7;
  float extraout_var_01;
  float extraout_var_02;
  float fVar8;
  float extraout_var_03;
  float extraout_var_04;
  float fVar9;
  undefined1 auVar10 [16];
  float local_24;
  
  FUN_01b7191c();
  if (*(int *)(param_1 + 0x680) == 3) {
    FUN_01b7987c(param_1 + 0x6e0);
    uVar3 = FUN_01b79f4c(param_1 + 0x6e0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    FUN_01b6ec48(param_1);
    uVar6 = 4;
  }
  else {
    if (*(int *)(param_1 + 0x680) != 2) {
      return;
    }
    FUN_01a0d8dc(param_1);
    FUN_01b77e98(param_1);
    FUN_01b778e0(param_1);
    fVar5 = (extraout_s0 - extraout_s0_00) * (extraout_s0 - extraout_s0_00);
    fVar7 = (extraout_var - extraout_var_00) * (extraout_var - extraout_var_00);
    fVar8 = (extraout_var_01 - extraout_var_02) * (extraout_var_01 - extraout_var_02);
    fVar9 = (extraout_var_03 - extraout_var_04) * (extraout_var_03 - extraout_var_04);
    auVar10._4_4_ = fVar7;
    auVar10._0_4_ = fVar5;
    auVar10._8_4_ = fVar8;
    auVar10._12_4_ = fVar9;
    auVar2._4_4_ = fVar7;
    auVar2._0_4_ = fVar5;
    auVar2._8_4_ = fVar8;
    auVar2._12_4_ = fVar9;
    auVar10 = NEON_ext(auVar10,auVar2,8,1);
    uVar6 = FUN_0191e7ac(SQRT(auVar10._0_4_ + fVar5 + auVar10._4_4_ + fVar7),param_1 + 0x6b0);
    *(undefined4 *)(param_1 + 0x774) = uVar6;
    *(undefined1 *)(param_1 + 0x770) = 1;
    FUN_01b7987c(param_1 + 0x6e0);
    lVar4 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
    local_24 = *(float *)(param_1 + 0x688) + (float)((double)*(long *)(lVar4 + 8) / 1000000000.0);
    fVar5 = *(float *)(param_1 + 0x684);
    pfVar1 = &local_24;
    if (fVar5 <= local_24) {
      pfVar1 = (float *)(param_1 + 0x684);
    }
    fVar7 = *pfVar1;
    *(float *)(param_1 + 0x688) = fVar7;
    if ((1.1920929e-07 < fVar5) && (fVar7 / fVar5 < 1.0)) {
      return;
    }
    FUN_01b79e14(param_1 + 0x6e0);
    uVar6 = 3;
  }
  *(undefined4 *)(param_1 + 0x680) = uVar6;
  return;
}


