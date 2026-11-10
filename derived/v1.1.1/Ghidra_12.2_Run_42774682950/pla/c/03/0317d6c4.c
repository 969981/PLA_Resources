/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0317d6c4; name: FUN_0317d6c4
 */


void FUN_0317d6c4(undefined1 (*param_1) [12],undefined1 (*param_2) [16],float *param_3,
                 undefined8 *param_4)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
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
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 uVar30;
  undefined1 auVar31 [16];
  
  fVar10 = (float)((ulong)*(undefined8 *)(*param_1 + 8) >> 0x20);
  fVar8 = (float)*(undefined8 *)*param_1;
  fVar9 = (float)((ulong)*(undefined8 *)*param_1 >> 0x20);
  pauVar1 = (undefined1 (*) [12])(param_1[1] + 4);
  fVar13 = (float)((ulong)*(undefined8 *)param_1[2] >> 0x20);
  fVar11 = (float)*(undefined8 *)*pauVar1;
  fVar12 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar27._12_4_ = fVar13;
  auVar27._0_12_ = *pauVar1;
  auVar28._12_4_ = fVar13;
  auVar28._0_12_ = *pauVar1;
  auVar27 = NEON_ext(auVar27,auVar28,8,1);
  pauVar1 = (undefined1 (*) [12])(param_1[2] + 8);
  fVar16 = (float)((ulong)*(undefined8 *)(param_1[3] + 4) >> 0x20);
  fVar14 = (float)*(undefined8 *)*pauVar1;
  fVar15 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar26._12_4_ = fVar10;
  auVar26._0_12_ = *param_1;
  auVar25._12_4_ = fVar10;
  auVar25._0_12_ = *param_1;
  auVar25 = NEON_ext(auVar26,auVar25,8,1);
  auVar29._12_4_ = fVar16;
  auVar29._0_12_ = *pauVar1;
  auVar31._12_4_ = fVar16;
  auVar31._0_12_ = *pauVar1;
  auVar28 = NEON_ext(auVar29,auVar31,8,1);
  fVar23 = *(float *)(param_1[5] + 4);
  fVar6 = *(float *)(param_1[5] + 8);
  fVar7 = *(float *)param_1[6];
  fVar18 = *(float *)(param_1[6] + 8);
  fVar20 = *(float *)param_1[7];
  fVar22 = *(float *)(param_1[7] + 4);
  fVar17 = auVar25._0_4_ * fVar22 + fVar8 * fVar18 + fVar9 * fVar20;
  fVar19 = auVar27._0_4_ * fVar22 + fVar11 * fVar18 + fVar12 * fVar20;
  fVar21 = auVar28._0_4_ * fVar22 + fVar14 * fVar18 + fVar15 * fVar20;
  fVar24 = auVar28._4_4_ * fVar22 + fVar15 * fVar18 + auVar28._4_4_ * fVar20;
  auVar26 = *param_2;
  auVar31 = NEON_ext(auVar26,auVar26,8,1);
  auVar2._4_4_ = fVar19;
  auVar2._0_4_ = fVar17;
  auVar2._8_4_ = fVar21;
  auVar2._12_4_ = fVar24;
  auVar3._4_4_ = fVar19;
  auVar3._0_4_ = fVar17;
  auVar3._8_4_ = fVar21;
  auVar3._12_4_ = fVar24;
  auVar29 = NEON_ext(auVar2,auVar3,4,1);
  uVar30 = NEON_ext(auVar26._0_8_,auVar31._0_8_,4,1);
  fVar18 = (float)uVar30 * fVar17 - auVar26._0_4_ * auVar29._0_4_;
  fVar20 = (float)((ulong)uVar30 >> 0x20) * fVar19 - auVar26._4_4_ * auVar29._4_4_;
  fVar22 = auVar26._0_4_ * fVar21 - auVar26._8_4_ * fVar17;
  fVar17 = auVar26._4_4_ * fVar24 - auVar26._12_4_ * fVar19;
  auVar4._4_4_ = fVar20;
  auVar4._0_4_ = fVar18;
  auVar4._8_4_ = fVar22;
  auVar4._12_4_ = fVar17;
  auVar5._4_4_ = fVar20;
  auVar5._0_4_ = fVar18;
  auVar5._8_4_ = fVar22;
  auVar5._12_4_ = fVar17;
  auVar26 = NEON_ext(auVar4,auVar5,4,1);
  fVar20 = *param_3 + auVar25._0_4_ * fVar7 + fVar8 * fVar23 + fVar9 * fVar6 + auVar26._0_4_;
  fVar22 = param_3[1] + auVar27._0_4_ * fVar7 + fVar11 * fVar23 + fVar12 * fVar6 + auVar26._4_4_;
  fVar23 = param_3[2] + auVar28._0_4_ * fVar7 + fVar14 * fVar23 + fVar15 * fVar6 + fVar18;
  param_4[1] = CONCAT44(fVar16 * fVar23 + fVar10 * fVar20 + fVar13 * fVar22,
                        (float)*(undefined8 *)(param_1[3] + 4) * fVar23 +
                        (float)*(undefined8 *)(*param_1 + 8) * fVar20 +
                        (float)*(undefined8 *)param_1[2] * fVar22);
  *param_4 = CONCAT44(fVar15 * fVar23 + fVar9 * fVar20 + fVar12 * fVar22,
                      fVar14 * fVar23 + fVar8 * fVar20 + fVar11 * fVar22);
  return;
}


