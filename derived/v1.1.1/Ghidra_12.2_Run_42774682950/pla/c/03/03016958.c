/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03016958; name: FUN_03016958
 */


void FUN_03016958(undefined1 (*param_1) [12],float *param_2,float *param_3)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auVar10 [16];
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
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar33;
  undefined1 auVar32 [16];
  float fVar34;
  float fVar35;
  float fVar38;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar39;
  undefined8 uVar40;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  FUN_03016774(param_1,param_3,&local_60);
  fVar25 = (float)*(undefined8 *)(*param_1 + 8);
  fVar26 = (float)((ulong)*(undefined8 *)(*param_1 + 8) >> 0x20);
  uVar22 = *(undefined8 *)*param_1;
  fVar12 = (float)uVar22;
  fVar14 = (float)((ulong)uVar22 >> 0x20);
  pauVar1 = (undefined1 (*) [12])(param_1[9] + 4);
  fVar15 = (float)*(undefined8 *)param_1[10];
  fVar9 = (float)((ulong)*(undefined8 *)param_1[10] >> 0x20);
  uVar29 = *(undefined8 *)*pauVar1;
  fVar11 = (float)uVar29;
  fVar13 = (float)((ulong)uVar29 >> 0x20);
  auVar30._12_4_ = fVar26;
  auVar30._0_12_ = *param_1;
  auVar2._12_4_ = fVar26;
  auVar2._0_12_ = *param_1;
  auVar30 = NEON_ext(auVar30,auVar2,8,1);
  auVar10._12_4_ = fVar9;
  auVar10._0_12_ = *pauVar1;
  auVar36._12_4_ = fVar9;
  auVar36._0_12_ = *pauVar1;
  auVar10 = NEON_ext(auVar10,auVar36,8,1);
  fVar38 = auVar30._4_4_ * auVar30._4_4_;
  uVar22 = NEON_ext(uVar22,auVar30._0_8_,4,1);
  uVar29 = NEON_ext(uVar29,auVar10._0_8_,4,1);
  fVar24 = fVar38 + -0.5;
  fVar38 = fVar38 + -0.5;
  fVar23 = (float)((ulong)uVar22 >> 0x20);
  fVar16 = fVar12 * fVar11 + fVar14 * fVar13 + fVar25 * fVar15;
  fVar18 = fVar12 * fVar11 + fVar14 * fVar13 + fVar25 * fVar15;
  auVar31._0_4_ = fVar12 * (float)uVar29 - fVar11 * (float)uVar22;
  auVar31._4_4_ = fVar14 * (float)((ulong)uVar29 >> 0x20) - fVar13 * fVar23;
  auVar31._8_4_ = fVar25 * fVar11 - fVar15 * fVar12;
  auVar31._12_4_ = fVar26 * fVar13 - fVar9 * fVar14;
  auVar36 = NEON_ext(auVar31,auVar31,4,1);
  auVar27._0_4_ = *param_3 - (float)*(double *)(param_1[1] + 4);
  auVar27._4_4_ = param_3[1] - (float)*(double *)param_1[2];
  auVar27._8_4_ = param_3[2] - (float)*(double *)(param_1[2] + 8);
  auVar27._12_4_ = param_3[3] - 0.0;
  auVar30 = NEON_ext(auVar27,auVar27,4,1);
  fVar17 = fVar11 * fVar24 + fVar12 * fVar16 + auVar36._0_4_ * fVar26;
  fVar19 = fVar13 * fVar38 + fVar14 * fVar18 + auVar36._4_4_ * fVar26;
  fVar20 = fVar15 * fVar24 + fVar25 * fVar16 + auVar31._0_4_ * fVar26;
  fVar21 = fVar9 * fVar38 + fVar26 * fVar18 + auVar31._4_4_ * fVar26;
  fVar17 = fVar17 + fVar17;
  fVar19 = fVar19 + fVar19;
  fVar20 = fVar20 + fVar20;
  fVar21 = fVar21 + fVar21;
  auVar3._4_4_ = fVar19;
  auVar3._0_4_ = fVar17;
  auVar3._8_4_ = fVar20;
  auVar3._12_4_ = fVar21;
  auVar4._4_4_ = fVar19;
  auVar4._0_4_ = fVar17;
  auVar4._8_4_ = fVar20;
  auVar4._12_4_ = fVar21;
  auVar36 = NEON_ext(auVar3,auVar4,4,1);
  fVar16 = auVar30._0_4_ * fVar17 - auVar27._0_4_ * auVar36._0_4_;
  fVar18 = auVar30._4_4_ * fVar19 - auVar27._4_4_ * auVar36._4_4_;
  fVar17 = auVar27._0_4_ * fVar20 - auVar27._8_4_ * fVar17;
  fVar19 = auVar27._4_4_ * fVar21 - auVar27._12_4_ * fVar19;
  auVar5._4_4_ = fVar18;
  auVar5._0_4_ = fVar16;
  auVar5._8_4_ = fVar17;
  auVar5._12_4_ = fVar19;
  auVar6._4_4_ = fVar18;
  auVar6._0_4_ = fVar16;
  auVar6._8_4_ = fVar17;
  auVar6._12_4_ = fVar19;
  auVar36 = NEON_ext(auVar5,auVar6,4,1);
  pauVar1 = param_1 + 8;
  fVar19 = (float)*(undefined8 *)(param_1[8] + 8);
  fVar20 = (float)((ulong)*(undefined8 *)(param_1[8] + 8) >> 0x20);
  fVar17 = (float)*(undefined8 *)*pauVar1;
  fVar18 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  fVar21 = *param_2 - (fVar17 + auVar36._0_4_);
  fVar33 = param_2[1] - (fVar18 + auVar36._4_4_);
  fVar16 = param_2[2] - (fVar19 + fVar16);
  uVar40 = *(undefined8 *)(param_1[5] + 4);
  auVar32._0_4_ = (float)local_40 * fVar16 + local_60 * fVar21 + (float)uStack_50 * fVar33;
  auVar32._4_4_ =
       (float)((ulong)local_40 >> 0x20) * fVar16 +
       fStack_5c * fVar21 + (float)((ulong)uStack_50 >> 0x20) * fVar33;
  auVar32._8_4_ = (float)uStack_38 * fVar16 + fStack_58 * fVar21 + (float)uStack_48 * fVar33;
  auVar32._12_4_ =
       (float)((ulong)uStack_38 >> 0x20) * fVar16 +
       fStack_54 * fVar21 + (float)((ulong)uStack_48 >> 0x20) * fVar33;
  auVar36 = NEON_ext(auVar32,auVar32,4,1);
  fVar21 = auVar27._0_4_ * auVar36._0_4_ - auVar30._0_4_ * auVar32._0_4_;
  fVar16 = auVar27._4_4_ * auVar36._4_4_ - auVar30._4_4_ * auVar32._4_4_;
  auVar28._0_8_ = CONCAT44(fVar16,fVar21);
  auVar28._8_4_ = auVar27._8_4_ * auVar32._0_4_ - auVar27._0_4_ * auVar32._8_4_;
  auVar28._12_4_ = auVar27._12_4_ * auVar32._4_4_ - auVar27._4_4_ * auVar32._12_4_;
  auVar36 = NEON_ext(auVar28,auVar28,4,1);
  uVar29 = NEON_ext(auVar36._0_8_,auVar28._0_8_,4,1);
  fVar33 = (float)((int)(short)((ulong)uVar40 >> 0x30) << 0x10);
  fVar34 = auVar36._0_4_;
  fVar35 = auVar36._4_4_;
  fVar39 = fVar12 * fVar34 + fVar14 * fVar35 + fVar25 * fVar21;
  auVar37._0_4_ = (float)uVar22 * fVar34 - fVar12 * (float)uVar29;
  auVar37._4_4_ = fVar23 * fVar35 - fVar14 * (float)((ulong)uVar29 >> 0x20);
  auVar37._8_4_ = fVar12 * fVar21 - fVar25 * fVar34;
  auVar37._12_4_ = fVar14 * fVar16 - fVar26 * fVar35;
  fVar17 = fVar17 + auVar32._0_4_ * fVar33;
  fVar18 = fVar18 + auVar32._4_4_ * fVar33;
  uVar29 = CONCAT44(fVar18,fVar17);
  fVar19 = fVar19 + auVar32._8_4_ * fVar33;
  auVar36 = NEON_ext(auVar37,auVar37,4,1);
  fVar16 = fVar24 * fVar34 + fVar12 * fVar39 + auVar36._0_4_ * fVar26;
  fVar12 = fVar38 * fVar35 + fVar14 * (fVar12 * fVar34 + fVar14 * fVar35 + fVar25 * fVar21) +
           auVar36._4_4_ * fVar26;
  fVar14 = fVar24 * fVar21 + fVar25 * fVar39 + auVar37._0_4_ * fVar26;
  fVar25 = fVar17 * fVar17 + fVar18 * fVar18 + fVar19 * fVar19;
  fVar26 = fVar17 * fVar17 + fVar18 * fVar18 + fVar19 * fVar19;
  uVar22 = CONCAT44(fVar26,fVar25);
  auVar7._12_4_ = fVar20;
  auVar7._0_12_ = *pauVar1;
  auVar8._12_4_ = fVar20;
  auVar8._0_12_ = *pauVar1;
  auVar36 = NEON_ext(auVar7,auVar8,8,1);
  fVar11 = fVar11 + (fVar16 + fVar16) * (float)((int)(short)uVar40 << 0x10);
  fVar13 = fVar13 + (fVar12 + fVar12) * (float)((int)(short)((ulong)uVar40 >> 0x10) << 0x10);
  fVar15 = fVar15 + (fVar14 + fVar14) * (float)((int)(short)((ulong)uVar40 >> 0x20) << 0x10);
  fVar12 = auVar36._4_4_ * auVar36._4_4_;
  if (fVar12 < fVar25 && fVar12 < fVar26) {
    if ((~(uint)fVar25 & 0x7fc00000) == 0) goto LAB_03016b2c;
    uVar29 = NEON_frsqrte(uVar22,4);
    fVar12 = (float)uVar29;
    fVar16 = (float)((ulong)uVar29 >> 0x20);
    uVar29 = NEON_frsqrts(uVar22,CONCAT44(fVar16 * fVar16,fVar12 * fVar12),4);
    fVar12 = fVar12 * (float)uVar29;
    fVar16 = fVar16 * (float)((ulong)uVar29 >> 0x20);
    uVar29 = NEON_frsqrts(uVar22,CONCAT44(fVar16 * fVar16,fVar12 * fVar12),4);
    fVar12 = (float)uVar29 * fVar12;
    if ((~(uint)fVar12 & 0x7fc00000) == 0) goto LAB_03016b2c;
    fVar12 = fVar20 * fVar12 * 0.99999976;
    uVar29 = CONCAT44(fVar18 * fVar20 * (float)((ulong)uVar29 >> 0x20) * fVar16 * 0.99999976,
                      fVar17 * fVar12);
    fVar19 = fVar19 * fVar12;
  }
  *(ulong *)(param_1[8] + 8) = CONCAT44(fVar20,fVar19);
  *(undefined8 *)param_1[8] = uVar29;
LAB_03016b2c:
  fVar12 = auVar10._4_4_ * auVar10._4_4_;
  fVar16 = fVar15 * fVar15 + fVar11 * fVar11 + fVar13 * fVar13;
  fVar14 = fVar15 * fVar15 + fVar11 * fVar11 + fVar13 * fVar13;
  if (fVar12 < fVar16 && fVar12 < fVar14) {
    if ((~(uint)fVar16 & 0x7fc00000) != 0) {
      uVar29 = NEON_frsqrte(CONCAT44(fVar14,fVar16),4);
      fVar12 = (float)uVar29;
      fVar25 = (float)((ulong)uVar29 >> 0x20);
      uVar29 = NEON_frsqrts(CONCAT44(fVar14,fVar16),CONCAT44(fVar25 * fVar25,fVar12 * fVar12),4);
      fVar12 = fVar12 * (float)uVar29;
      fVar25 = fVar25 * (float)((ulong)uVar29 >> 0x20);
      uVar29 = NEON_frsqrts(CONCAT44(fVar14,fVar16),CONCAT44(fVar25 * fVar25,fVar12 * fVar12),4);
      fVar12 = (float)uVar29 * fVar12;
      if ((~(uint)fVar12 & 0x7fc00000) != 0) {
        fVar12 = fVar9 * fVar12 * 0.99999976;
        *(float *)param_1[10] = fVar15 * fVar12;
        *(float *)(param_1[10] + 4) = fVar9;
        *(float *)(param_1[9] + 4) = fVar11 * fVar12;
        *(float *)(param_1[9] + 8) =
             fVar13 * fVar9 * (float)((ulong)uVar29 >> 0x20) * fVar25 * 0.99999976;
      }
    }
  }
  else {
    *(ulong *)param_1[10] = CONCAT44(fVar9,fVar15);
    *(ulong *)(param_1[9] + 4) = CONCAT44(fVar13,fVar11);
  }
  return;
}


