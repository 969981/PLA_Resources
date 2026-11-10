/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0301658c; name: FUN_0301658c
 */


void FUN_0301658c(undefined1 (*param_1) [16],undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar8 [16];
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar23;
  undefined1 auVar22 [16];
  
  auVar22 = *param_1;
  fVar3 = (float)*param_2 - (float)*(double *)param_1[1];
  fVar4 = (float)((ulong)*param_2 >> 0x20) - (float)*(double *)(param_1[1] + 8);
  fVar5 = (float)param_2[1] - (float)*(double *)param_1[2];
  fVar6 = (float)((ulong)param_2[1] >> 0x20) - 0.0;
  auVar13 = NEON_ext(auVar22,auVar22,8,1);
  fVar16 = auVar13._4_4_ * auVar13._4_4_;
  uVar12 = NEON_ext(auVar22._0_8_,auVar13._0_8_,4,1);
  fVar15 = fVar16 + -0.5;
  fVar16 = fVar16 + -0.5;
  auVar13 = param_1[7];
  fVar7 = auVar22._0_4_;
  fVar17 = auVar13._0_4_;
  fVar9 = auVar22._4_4_;
  fVar18 = auVar13._4_4_;
  fVar10 = auVar22._8_4_;
  fVar19 = auVar13._8_4_;
  fVar11 = auVar22._12_4_;
  fVar20 = fVar7 * fVar17 + fVar9 * fVar18 + fVar10 * fVar19;
  fVar23 = fVar7 * fVar17 + fVar9 * fVar18 + fVar10 * fVar19;
  auVar22 = NEON_ext(auVar13,auVar13,8,1);
  uVar21 = NEON_ext(auVar13._0_8_,auVar22._0_8_,4,1);
  auVar14._0_4_ = fVar7 * (float)uVar21 - fVar17 * (float)uVar12;
  auVar14._4_4_ = fVar9 * (float)((ulong)uVar21 >> 0x20) - fVar18 * (float)((ulong)uVar12 >> 0x20);
  auVar14._8_4_ = fVar10 * fVar17 - fVar19 * fVar7;
  auVar14._12_4_ = fVar11 * fVar18 - auVar13._12_4_ * fVar9;
  auVar22 = NEON_ext(auVar14,auVar14,4,1);
  fVar7 = fVar17 * fVar15 + fVar7 * fVar20 + auVar22._0_4_ * fVar11;
  fVar9 = fVar18 * fVar16 + fVar9 * fVar23 + auVar22._4_4_ * fVar11;
  fVar10 = fVar19 * fVar15 + fVar10 * fVar20 + auVar14._0_4_ * fVar11;
  fVar11 = auVar13._12_4_ * fVar16 + fVar11 * fVar23 + auVar14._4_4_ * fVar11;
  auVar22._4_4_ = fVar4;
  auVar22._0_4_ = fVar3;
  auVar22._8_4_ = fVar5;
  auVar22._12_4_ = fVar6;
  auVar13._4_4_ = fVar4;
  auVar13._0_4_ = fVar3;
  auVar13._8_4_ = fVar5;
  auVar13._12_4_ = fVar6;
  auVar13 = NEON_ext(auVar22,auVar13,4,1);
  auVar8._0_4_ = fVar7 + fVar7;
  auVar8._4_4_ = fVar9 + fVar9;
  auVar8._8_4_ = fVar10 + fVar10;
  auVar8._12_4_ = fVar11 + fVar11;
  auVar22 = NEON_ext(auVar8,auVar8,4,1);
  fVar7 = auVar13._0_4_ * auVar8._0_4_ - fVar3 * auVar22._0_4_;
  fVar9 = auVar13._4_4_ * auVar8._4_4_ - fVar4 * auVar22._4_4_;
  fVar3 = fVar3 * auVar8._8_4_ - fVar5 * auVar8._0_4_;
  fVar4 = fVar4 * auVar8._12_4_ - fVar6 * auVar8._4_4_;
  auVar1._4_4_ = fVar9;
  auVar1._0_4_ = fVar7;
  auVar1._8_4_ = fVar3;
  auVar1._12_4_ = fVar4;
  auVar2._4_4_ = fVar9;
  auVar2._0_4_ = fVar7;
  auVar2._8_4_ = fVar3;
  auVar2._12_4_ = fVar4;
  auVar22 = NEON_ext(auVar1,auVar2,4,1);
  uVar12 = *(undefined8 *)param_1[6];
  param_3[1] = CONCAT44((float)((ulong)*(undefined8 *)(param_1[6] + 8) >> 0x20) + fVar9,
                        (float)*(undefined8 *)(param_1[6] + 8) + fVar7);
  *param_3 = CONCAT44((float)((ulong)uVar12 >> 0x20) + auVar22._4_4_,(float)uVar12 + auVar22._0_4_);
  return;
}


