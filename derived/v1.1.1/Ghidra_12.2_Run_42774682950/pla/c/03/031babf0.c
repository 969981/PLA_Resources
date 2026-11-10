/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031babf0; name: FUN_031babf0
 */


bool FUN_031babf0(long param_1,float *param_2,undefined8 *param_3,float *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  fVar5 = (float)*param_3 - *param_2;
  fVar7 = (float)((ulong)*param_3 >> 0x20) - param_2[1];
  fVar9 = (float)param_3[1] - param_2[2];
  fVar10 = (float)((ulong)param_3[1] >> 0x20) - param_2[3];
  auVar11._0_4_ = *param_4 - *param_2;
  auVar11._4_4_ = param_4[1] - param_2[1];
  auVar11._8_4_ = param_4[2] - param_2[2];
  auVar11._12_4_ = param_4[3] - param_2[3];
  auVar12._4_4_ = fVar7;
  auVar12._0_4_ = fVar5;
  auVar12._8_4_ = fVar9;
  auVar12._12_4_ = fVar10;
  auVar13._4_4_ = fVar7;
  auVar13._0_4_ = fVar5;
  auVar13._8_4_ = fVar9;
  auVar13._12_4_ = fVar10;
  auVar12 = NEON_ext(auVar12,auVar13,4,1);
  auVar13 = NEON_ext(auVar11,auVar11,4,1);
  fVar6 = fVar5 * auVar13._0_4_ - auVar11._0_4_ * auVar12._0_4_;
  fVar8 = fVar7 * auVar13._4_4_ - auVar11._4_4_ * auVar12._4_4_;
  fVar5 = fVar9 * auVar11._0_4_ - auVar11._8_4_ * fVar5;
  fVar7 = fVar10 * auVar11._4_4_ - auVar11._12_4_ * fVar7;
  auVar1._4_4_ = fVar8;
  auVar1._0_4_ = fVar6;
  auVar1._8_4_ = fVar5;
  auVar1._12_4_ = fVar7;
  auVar2._4_4_ = fVar8;
  auVar2._0_4_ = fVar6;
  auVar2._8_4_ = fVar5;
  auVar2._12_4_ = fVar7;
  auVar12 = NEON_ext(auVar1,auVar2,4,1);
  fVar5 = (float)*(undefined8 *)(param_1 + 0x90) * auVar12._0_4_;
  fVar7 = (float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20) * auVar12._4_4_;
  fVar6 = (float)*(undefined8 *)(param_1 + 0x98) * fVar6;
  fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) * fVar8;
  auVar3._4_4_ = fVar7;
  auVar3._0_4_ = fVar5;
  auVar3._8_4_ = fVar6;
  auVar3._12_4_ = fVar8;
  auVar4._4_4_ = fVar7;
  auVar4._0_4_ = fVar5;
  auVar4._8_4_ = fVar6;
  auVar4._12_4_ = fVar8;
  auVar12 = NEON_ext(auVar3,auVar4,8,1);
  return 0.0 < fVar5 + fVar7 + auVar12._0_4_;
}


