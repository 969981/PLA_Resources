/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00c47d48; name: FUN_00c47d48
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_00c47d48(long param_1,float *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  uint uVar10;
  float fVar13;
  uint uVar15;
  undefined1 auVar11 [16];
  uint uVar14;
  uint uVar16;
  undefined1 auVar12 [16];
  float fVar17;
  float fVar19;
  undefined1 auVar18 [16];
  float fVar20;
  uint uVar21;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auVar22 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  fVar6 = (float)FUN_00c481b0(0x43b40000);
  fVar7 = *(float *)PTR_FloatPi_04372cf0;
  fVar6 = fVar6 * (fVar7 / *(float *)PTR_FloatDegree180_04372ce0);
  fVar9 = *(float *)PTR_Float1Divided2Pi_04372d20;
  fVar13 = fVar6 * fVar9;
  fVar20 = *(float *)PTR_Float2Pi_04372d30;
  auVar22._0_4_ =
       (int)(fVar9 * 0.0 + (float)(-(uint)(0.0 <= fVar9 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar22._4_4_ = (int)(fVar13 + (float)(-(uint)(0.0 <= fVar13) & 0x80000000 ^ 0xbf000000));
  auVar22._8_4_ =
       (int)(fVar9 * 0.0 + (float)(-(uint)(0.0 <= fVar9 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar22._12_4_ =
       (int)(fVar9 * 0.0 + (float)(-(uint)(0.0 <= fVar9 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar11 = NEON_scvtf(auVar22,4);
  fVar17 = 0.0 - auVar11._0_4_ * fVar20;
  fVar6 = fVar6 - auVar11._4_4_ * fVar20;
  fVar19 = 0.0 - auVar11._8_4_ * fVar20;
  fVar20 = 0.0 - auVar11._12_4_ * fVar20;
  fVar9 = *(float *)PTR_FloatPiDivided2_04372d38;
  fVar13 = -fVar9;
  uVar21 = -(uint)(fVar9 < fVar17);
  uVar23 = -(uint)(fVar9 < fVar6);
  uVar24 = -(uint)(fVar9 < fVar19);
  uVar25 = -(uint)(fVar9 < fVar20);
  fVar9 = -fVar7;
  fVar17 = (float)((uint)fVar17 ^ ((uint)fVar17 ^ (uint)(fVar7 - fVar17)) & uVar21);
  fVar6 = (float)((uint)fVar6 ^ ((uint)fVar6 ^ (uint)(fVar7 - fVar6)) & uVar23);
  fVar19 = (float)((uint)fVar19 ^ ((uint)fVar19 ^ (uint)(fVar7 - fVar19)) & uVar24);
  fVar20 = (float)((uint)fVar20 ^ ((uint)fVar20 ^ (uint)(fVar7 - fVar20)) & uVar25);
  uVar10 = -(uint)(fVar17 < fVar13);
  uVar14 = -(uint)(fVar6 < fVar13);
  uVar15 = -(uint)(fVar19 < fVar13);
  uVar16 = -(uint)(fVar20 < fVar13);
  auVar18[0] = (byte)uVar10 | (byte)uVar21;
  auVar18[1] = (byte)(uVar10 >> 8) | (byte)(uVar21 >> 8);
  auVar18[2] = (byte)(uVar10 >> 0x10) | (byte)(uVar21 >> 0x10);
  auVar18[3] = (byte)(uVar10 >> 0x18) | (byte)(uVar21 >> 0x18);
  auVar18[4] = (byte)uVar14 | (byte)uVar23;
  auVar18[5] = (byte)(uVar14 >> 8) | (byte)(uVar23 >> 8);
  auVar18[6] = (byte)(uVar14 >> 0x10) | (byte)(uVar23 >> 0x10);
  auVar18[7] = (byte)(uVar14 >> 0x18) | (byte)(uVar23 >> 0x18);
  auVar18[8] = (byte)uVar15 | (byte)uVar24;
  auVar18[9] = (byte)(uVar15 >> 8) | (byte)(uVar24 >> 8);
  auVar18[10] = (byte)(uVar15 >> 0x10) | (byte)(uVar24 >> 0x10);
  auVar18[0xb] = (byte)(uVar15 >> 0x18) | (byte)(uVar24 >> 0x18);
  auVar18[0xc] = (byte)uVar16 | (byte)uVar25;
  auVar18[0xd] = (byte)(uVar16 >> 8) | (byte)(uVar25 >> 8);
  auVar18[0xe] = (byte)(uVar16 >> 0x10) | (byte)(uVar25 >> 0x10);
  auVar18[0xf] = (byte)(uVar16 >> 0x18) | (byte)(uVar25 >> 0x18);
  fVar17 = (float)((uint)fVar17 ^ ((uint)fVar17 ^ (uint)(fVar9 - fVar17)) & uVar10);
  fVar6 = (float)((uint)fVar6 ^ ((uint)fVar6 ^ (uint)(fVar9 - fVar6)) & uVar14);
  fVar19 = (float)((uint)fVar19 ^ ((uint)fVar19 ^ (uint)(fVar9 - fVar19)) & uVar15);
  fVar20 = (float)((uint)fVar20 ^ ((uint)fVar20 ^ (uint)(fVar9 - fVar20)) & uVar16);
  auVar22 = NEON_fmov(0x3f800000,4);
  auVar11 = NEON_fmov(0xbf800000,4);
  fVar29 = *(float *)PTR_SinCoefficients_04372d28;
  auVar11 = auVar22 ^ (auVar22 ^ auVar11) & auVar18;
  fVar7 = *(float *)(PTR_SinCoefficients_04372d28 + 4);
  fVar13 = fVar17 * fVar17;
  fVar26 = fVar6 * fVar6;
  fVar27 = fVar19 * fVar19;
  fVar28 = fVar20 * fVar20;
  fVar30 = -*(float *)(PTR_SinCoefficients_04372d28 + 8);
  fVar9 = *(float *)(PTR_SinCoefficients_04372d28 + 0xc);
  fVar31 = -*(float *)(PTR_SinCoefficients_04372d28 + 0x10);
  auVar8._0_4_ = fVar17 * (auVar22._0_4_ +
                          fVar13 * (fVar31 + fVar13 * (fVar9 + fVar13 * (fVar30 + fVar13 * (fVar7 - 
                                                  fVar13 * fVar29)))));
  auVar8._4_4_ = fVar6 * (auVar22._4_4_ +
                         fVar26 * (fVar31 + fVar26 * (fVar9 + fVar26 * (fVar30 + fVar26 * (fVar7 - 
                                                  fVar26 * fVar29)))));
  auVar8._8_4_ = fVar19 * (auVar22._8_4_ +
                          fVar27 * (fVar31 + fVar27 * (fVar9 + fVar27 * (fVar30 + fVar27 * (fVar7 - 
                                                  fVar27 * fVar29)))));
  auVar8._12_4_ =
       fVar20 * (auVar22._12_4_ +
                fVar28 * (fVar31 + fVar28 * (fVar9 + fVar28 * (fVar30 + fVar28 * (fVar7 - fVar28 * 
                                                  fVar29)))));
  fVar7 = *(float *)(PTR_CosCoefficients_04372d40 + 4);
  fVar6 = *(float *)PTR_CosCoefficients_04372d40;
  fVar17 = -*(float *)(PTR_CosCoefficients_04372d40 + 8);
  fVar9 = *(float *)(PTR_CosCoefficients_04372d40 + 0xc);
  fVar19 = -*(float *)(PTR_CosCoefficients_04372d40 + 0x10);
  auVar12._0_4_ =
       auVar11._0_4_ *
       (auVar22._0_4_ +
       fVar13 * (fVar19 + fVar13 * (fVar9 + fVar13 * (fVar17 + fVar13 * (fVar7 - fVar13 * fVar6)))))
  ;
  auVar12._4_4_ =
       auVar11._4_4_ *
       (auVar22._4_4_ +
       fVar26 * (fVar19 + fVar26 * (fVar9 + fVar26 * (fVar17 + fVar26 * (fVar7 - fVar26 * fVar6)))))
  ;
  auVar12._8_4_ =
       auVar11._8_4_ *
       (auVar22._8_4_ +
       fVar27 * (fVar19 + fVar27 * (fVar9 + fVar27 * (fVar17 + fVar27 * (fVar7 - fVar27 * fVar6)))))
  ;
  auVar12._12_4_ =
       auVar11._12_4_ *
       (auVar22._12_4_ +
       fVar28 * (fVar19 + fVar28 * (fVar9 + fVar28 * (fVar17 + fVar28 * (fVar7 - fVar28 * fVar6)))))
  ;
  auVar11 = NEON_ext(auVar8,auVar8,8,1);
  auVar22 = NEON_ext(auVar12,auVar12,8,1);
  fVar7 = auVar22._0_4_;
  fVar9 = auVar11._0_4_;
  fVar28 = (float)DAT_0388a870;
  uVar1 = (ulong)DAT_0388a870 >> 0x20;
  fVar13 = auVar12._4_4_ * (float)DAT_0388a618;
  fVar19 = (float)((ulong)DAT_0388a618 >> 0x20) * 0.0;
  fVar26 = (float)_DAT_03889200;
  uVar2 = (ulong)_DAT_03889200 >> 0x20;
  fVar27 = (float)_UNK_03889208;
  uVar3 = (ulong)_UNK_03889208 >> 0x20;
  fVar17 = (float)_DAT_03889d50;
  uVar4 = (ulong)_DAT_03889d50 >> 0x20;
  fVar20 = (float)_UNK_03889d58;
  uVar5 = (ulong)_UNK_03889d58 >> 0x20;
  fVar6 = (float)FUN_00c481b0(*(undefined4 *)(param_1 + 0xc4));
  auVar11._0_4_ =
       *param_2 +
       (fVar9 * auVar8._0_4_ * fVar17 + fVar7 * auVar8._4_4_ * auVar12._0_4_ +
       fVar7 * auVar12._4_4_ * 0.0 +
       (fVar9 * auVar12._0_4_ * fVar26 + fVar7 * auVar8._4_4_ * auVar8._0_4_) * 0.0) * fVar6;
  auVar11._4_4_ =
       param_2[1] +
       (fVar7 * auVar8._0_4_ * (float)uVar4 + fVar9 * auVar8._4_4_ * auVar12._0_4_ +
       fVar9 * auVar12._4_4_ * 0.0 +
       (fVar7 * auVar12._0_4_ * (float)uVar2 + fVar9 * auVar8._4_4_ * auVar8._0_4_) * 0.0) * fVar6;
  auVar11._8_4_ =
       param_2[2] +
       (auVar8._0_4_ * 0.0 * fVar20 + fVar13 * auVar12._0_4_ +
       auVar8._4_4_ * fVar28 * 0.0 + (auVar12._0_4_ * 0.0 * fVar27 + fVar13 * auVar8._0_4_) * 0.0) *
       fVar6;
  auVar11._12_4_ =
       param_2[3] +
       (auVar8._0_4_ * 0.0 * (float)uVar5 + fVar19 * auVar12._0_4_ +
       (float)uVar1 * 0.0 * 0.0 + (auVar12._0_4_ * 0.0 * (float)uVar3 + fVar19 * auVar8._0_4_) * 0.0
       ) * fVar6;
  return auVar11;
}


