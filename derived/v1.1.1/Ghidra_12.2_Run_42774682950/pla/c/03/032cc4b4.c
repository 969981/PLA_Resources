/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cc4b4; name: FUN_032cc4b4
 */


void FUN_032cc4b4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  fVar7 = (float)*param_3 * (float)param_2[4];
  fVar9 = (float)((ulong)*param_3 >> 0x20) * (float)((ulong)param_2[4] >> 0x20);
  fVar11 = (float)param_3[1] * (float)param_2[5];
  fVar13 = (float)((ulong)param_3[1] >> 0x20) * (float)((ulong)param_2[5] >> 0x20);
  pauVar1 = (undefined1 (*) [12])(param_2 + 2);
  fVar17 = (float)param_2[3];
  fVar18 = (float)((ulong)param_2[3] >> 0x20);
  uVar19 = *(undefined8 *)*pauVar1;
  fVar15 = (float)uVar19;
  fVar16 = (float)((ulong)uVar19 >> 0x20);
  auVar5._12_4_ = fVar18;
  auVar5._0_12_ = *pauVar1;
  auVar6._12_4_ = fVar18;
  auVar6._0_12_ = *pauVar1;
  auVar20 = NEON_ext(auVar5,auVar6,8,1);
  fVar22 = auVar20._4_4_ * auVar20._4_4_;
  uVar19 = NEON_ext(uVar19,auVar20._0_8_,4,1);
  fVar21 = fVar22 + -0.5;
  fVar22 = fVar22 + -0.5;
  fVar23 = fVar15 * fVar7 + fVar16 * fVar9 + fVar17 * fVar11;
  fVar24 = fVar15 * fVar7 + fVar16 * fVar9 + fVar17 * fVar11;
  auVar20._4_4_ = fVar9;
  auVar20._0_4_ = fVar7;
  auVar20._8_4_ = fVar11;
  auVar20._12_4_ = fVar13;
  auVar2._4_4_ = fVar9;
  auVar2._0_4_ = fVar7;
  auVar2._8_4_ = fVar11;
  auVar2._12_4_ = fVar13;
  auVar20 = NEON_ext(auVar20,auVar2,4,1);
  fVar8 = fVar15 * auVar20._0_4_ - fVar7 * (float)uVar19;
  fVar10 = fVar16 * auVar20._4_4_ - fVar9 * (float)((ulong)uVar19 >> 0x20);
  fVar12 = fVar17 * fVar7 - fVar11 * fVar15;
  fVar14 = fVar18 * fVar9 - fVar13 * fVar16;
  auVar3._4_4_ = fVar10;
  auVar3._0_4_ = fVar8;
  auVar3._8_4_ = fVar12;
  auVar3._12_4_ = fVar14;
  auVar4._4_4_ = fVar10;
  auVar4._0_4_ = fVar8;
  auVar4._8_4_ = fVar12;
  auVar4._12_4_ = fVar14;
  auVar20 = NEON_ext(auVar3,auVar4,4,1);
  uVar19 = *param_2;
  fVar7 = fVar7 * fVar21 + fVar15 * fVar23 + auVar20._0_4_ * fVar18;
  fVar9 = fVar9 * fVar22 + fVar16 * fVar24 + auVar20._4_4_ * fVar18;
  fVar8 = fVar11 * fVar21 + fVar17 * fVar23 + fVar8 * fVar18;
  fVar10 = fVar13 * fVar22 + fVar18 * fVar24 + fVar10 * fVar18;
  param_1[1] = CONCAT44((float)((ulong)param_2[1] >> 0x20) + fVar10 + fVar10,
                        (float)param_2[1] + fVar8 + fVar8);
  *param_1 = CONCAT44((float)((ulong)uVar19 >> 0x20) + fVar9 + fVar9,(float)uVar19 + fVar7 + fVar7);
  return;
}


