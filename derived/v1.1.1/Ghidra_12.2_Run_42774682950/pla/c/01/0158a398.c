/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0158a398; name: FUN_0158a398
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0158a398(float param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar4;
  uint uVar5;
  undefined1 auVar3 [16];
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auVar12 [16];
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  fVar1 = *(float *)PTR_Float1Divided2Pi_04372d20;
  fVar10 = *(float *)PTR_Float2Pi_04372d30;
  auVar3._0_4_ = (int)(param_1 * fVar1 +
                      (float)(-(uint)(0.0 <= param_1 * fVar1) & 0x80000000 ^ 0xbf000000));
  auVar3._4_4_ = (int)(fVar1 * 0.0 + (float)(-(uint)(0.0 <= fVar1 * 0.0) & 0x80000000 ^ 0xbf000000))
  ;
  auVar3._8_4_ = (int)(fVar1 * 0.0 + (float)(-(uint)(0.0 <= fVar1 * 0.0) & 0x80000000 ^ 0xbf000000))
  ;
  auVar3._12_4_ =
       (int)(fVar1 * 0.0 + (float)(-(uint)(0.0 <= fVar1 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar3 = NEON_scvtf(auVar3,4);
  param_1 = param_1 - auVar3._0_4_ * fVar10;
  fVar7 = 0.0 - auVar3._4_4_ * fVar10;
  fVar8 = 0.0 - auVar3._8_4_ * fVar10;
  fVar9 = 0.0 - auVar3._12_4_ * fVar10;
  fVar1 = *(float *)PTR_FloatPiDivided2_04372d38;
  fVar16 = *(float *)PTR_FloatPi_04372cf0;
  fVar10 = -fVar1;
  uVar11 = -(uint)(fVar1 < param_1);
  uVar13 = -(uint)(fVar1 < fVar7);
  uVar14 = -(uint)(fVar1 < fVar8);
  uVar15 = -(uint)(fVar1 < fVar9);
  param_1 = (float)((uint)param_1 ^ ((uint)param_1 ^ (uint)(fVar16 - param_1)) & uVar11);
  fVar7 = (float)((uint)fVar7 ^ ((uint)fVar7 ^ (uint)(fVar16 - fVar7)) & uVar13);
  fVar8 = (float)((uint)fVar8 ^ ((uint)fVar8 ^ (uint)(fVar16 - fVar8)) & uVar14);
  fVar9 = (float)((uint)fVar9 ^ ((uint)fVar9 ^ (uint)(fVar16 - fVar9)) & uVar15);
  fVar16 = -fVar16;
  uVar2 = -(uint)(param_1 < fVar10);
  uVar4 = -(uint)(fVar7 < fVar10);
  uVar5 = -(uint)(fVar8 < fVar10);
  uVar6 = -(uint)(fVar9 < fVar10);
  auVar17[0] = (byte)uVar2 | (byte)uVar11;
  auVar17[1] = (byte)(uVar2 >> 8) | (byte)(uVar11 >> 8);
  auVar17[2] = (byte)(uVar2 >> 0x10) | (byte)(uVar11 >> 0x10);
  auVar17[3] = (byte)(uVar2 >> 0x18) | (byte)(uVar11 >> 0x18);
  auVar17[4] = (byte)uVar4 | (byte)uVar13;
  auVar17[5] = (byte)(uVar4 >> 8) | (byte)(uVar13 >> 8);
  auVar17[6] = (byte)(uVar4 >> 0x10) | (byte)(uVar13 >> 0x10);
  auVar17[7] = (byte)(uVar4 >> 0x18) | (byte)(uVar13 >> 0x18);
  auVar17[8] = (byte)uVar5 | (byte)uVar14;
  auVar17[9] = (byte)(uVar5 >> 8) | (byte)(uVar14 >> 8);
  auVar17[10] = (byte)(uVar5 >> 0x10) | (byte)(uVar14 >> 0x10);
  auVar17[0xb] = (byte)(uVar5 >> 0x18) | (byte)(uVar14 >> 0x18);
  auVar17[0xc] = (byte)uVar6 | (byte)uVar15;
  auVar17[0xd] = (byte)(uVar6 >> 8) | (byte)(uVar15 >> 8);
  auVar17[0xe] = (byte)(uVar6 >> 0x10) | (byte)(uVar15 >> 0x10);
  auVar17[0xf] = (byte)(uVar6 >> 0x18) | (byte)(uVar15 >> 0x18);
  auVar12 = NEON_fmov(0xbf800000,4);
  param_1 = (float)((uint)param_1 ^ ((uint)param_1 ^ (uint)(fVar16 - param_1)) & uVar2);
  fVar7 = (float)((uint)fVar7 ^ ((uint)fVar7 ^ (uint)(fVar16 - fVar7)) & uVar4);
  fVar8 = (float)((uint)fVar8 ^ ((uint)fVar8 ^ (uint)(fVar16 - fVar8)) & uVar5);
  fVar9 = (float)((uint)fVar9 ^ ((uint)fVar9 ^ (uint)(fVar16 - fVar9)) & uVar6);
  auVar3 = NEON_fmov(0x3f800000,4);
  auVar17 = auVar3 ^ (auVar3 ^ auVar12) & auVar17;
  fVar22 = *(float *)PTR_SinCoefficients_04372d28;
  fVar1 = *(float *)(PTR_SinCoefficients_04372d28 + 4);
  fVar16 = param_1 * param_1;
  fVar19 = fVar7 * fVar7;
  fVar20 = fVar8 * fVar8;
  fVar21 = fVar9 * fVar9;
  fVar23 = -*(float *)(PTR_SinCoefficients_04372d28 + 8);
  fVar10 = *(float *)(PTR_SinCoefficients_04372d28 + 0xc);
  fVar24 = -*(float *)(PTR_SinCoefficients_04372d28 + 0x10);
  auVar12._0_4_ =
       param_1 * (auVar3._0_4_ +
                 fVar16 * (fVar24 + fVar16 * (fVar10 + fVar16 * (fVar23 + fVar16 * (fVar1 - fVar16 *
                                                                                            fVar22))
                                             )));
  auVar12._4_4_ =
       fVar7 * (auVar3._4_4_ +
               fVar19 * (fVar24 + fVar19 * (fVar10 + fVar19 * (fVar23 + fVar19 * (fVar1 - fVar19 * 
                                                  fVar22)))));
  auVar12._8_4_ =
       fVar8 * (auVar3._8_4_ +
               fVar20 * (fVar24 + fVar20 * (fVar10 + fVar20 * (fVar23 + fVar20 * (fVar1 - fVar20 * 
                                                  fVar22)))));
  auVar12._12_4_ =
       fVar9 * (auVar3._12_4_ +
               fVar21 * (fVar24 + fVar21 * (fVar10 + fVar21 * (fVar23 + fVar21 * (fVar1 - fVar21 * 
                                                  fVar22)))));
  fVar1 = *(float *)(PTR_CosCoefficients_04372d40 + 4);
  fVar7 = *(float *)PTR_CosCoefficients_04372d40;
  fVar8 = -*(float *)(PTR_CosCoefficients_04372d40 + 8);
  fVar10 = *(float *)(PTR_CosCoefficients_04372d40 + 0xc);
  fVar9 = -*(float *)(PTR_CosCoefficients_04372d40 + 0x10);
  auVar18._0_4_ =
       auVar17._0_4_ *
       (auVar3._0_4_ +
       fVar16 * (fVar9 + fVar16 * (fVar10 + fVar16 * (fVar8 + fVar16 * (fVar1 - fVar16 * fVar7)))));
  auVar18._4_4_ =
       auVar17._4_4_ *
       (auVar3._4_4_ +
       fVar19 * (fVar9 + fVar19 * (fVar10 + fVar19 * (fVar8 + fVar19 * (fVar1 - fVar19 * fVar7)))));
  auVar18._8_4_ =
       auVar17._8_4_ *
       (auVar3._8_4_ +
       fVar20 * (fVar9 + fVar20 * (fVar10 + fVar20 * (fVar8 + fVar20 * (fVar1 - fVar20 * fVar7)))));
  auVar18._12_4_ =
       auVar17._12_4_ *
       (auVar3._12_4_ +
       fVar21 * (fVar9 + fVar21 * (fVar10 + fVar21 * (fVar8 + fVar21 * (fVar1 - fVar21 * fVar7)))));
  NEON_ext(auVar12,auVar12,8,1);
  NEON_ext(auVar18,auVar18,8,1);
  return;
}


