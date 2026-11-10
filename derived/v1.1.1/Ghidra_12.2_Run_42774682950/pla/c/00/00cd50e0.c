/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cd50e0; name: FUN_00cd50e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00cd50e0(float param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar4 [16];
  uint uVar8;
  float fVar9;
  float fVar11;
  undefined1 auVar10 [16];
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  uint uVar15;
  uint uVar17;
  float fVar18;
  uint uVar19;
  float fVar20;
  uint uVar21;
  undefined1 auVar16 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  fVar12 = *(float *)PTR_FloatPi_04372cf0;
  fVar1 = -((fVar12 / *(float *)PTR_FloatDegree180_04372ce0) * param_1);
  fVar2 = *(float *)PTR_Float1Divided2Pi_04372d20;
  fVar5 = fVar1 * fVar2;
  fVar14 = *(float *)PTR_Float2Pi_04372d30;
  auVar4._0_4_ = (int)(fVar2 * 0.0 + (float)(-(uint)(0.0 <= fVar2 * 0.0) & 0x80000000 ^ 0xbf000000))
  ;
  auVar4._4_4_ = (int)(fVar5 + (float)(-(uint)(0.0 <= fVar5) & 0x80000000 ^ 0xbf000000));
  auVar4._8_4_ = (int)(fVar2 * 0.0 + (float)(-(uint)(0.0 <= fVar2 * 0.0) & 0x80000000 ^ 0xbf000000))
  ;
  auVar4._12_4_ =
       (int)(fVar2 * 0.0 + (float)(-(uint)(0.0 <= fVar2 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar4 = NEON_scvtf(auVar4,4);
  fVar9 = 0.0 - auVar4._0_4_ * fVar14;
  fVar1 = fVar1 - auVar4._4_4_ * fVar14;
  fVar11 = 0.0 - auVar4._8_4_ * fVar14;
  fVar14 = 0.0 - auVar4._12_4_ * fVar14;
  fVar2 = *(float *)PTR_FloatPiDivided2_04372d38;
  fVar5 = -fVar2;
  uVar15 = -(uint)(fVar2 < fVar9);
  uVar17 = -(uint)(fVar2 < fVar1);
  uVar19 = -(uint)(fVar2 < fVar11);
  uVar21 = -(uint)(fVar2 < fVar14);
  fVar9 = (float)((uint)fVar9 ^ ((uint)fVar9 ^ (uint)(fVar12 - fVar9)) & uVar15);
  fVar1 = (float)((uint)fVar1 ^ ((uint)fVar1 ^ (uint)(fVar12 - fVar1)) & uVar17);
  fVar11 = (float)((uint)fVar11 ^ ((uint)fVar11 ^ (uint)(fVar12 - fVar11)) & uVar19);
  fVar14 = (float)((uint)fVar14 ^ ((uint)fVar14 ^ (uint)(fVar12 - fVar14)) & uVar21);
  fVar12 = -fVar12;
  uVar3 = -(uint)(fVar9 < fVar5);
  uVar6 = -(uint)(fVar1 < fVar5);
  uVar7 = -(uint)(fVar11 < fVar5);
  uVar8 = -(uint)(fVar14 < fVar5);
  fVar2 = *(float *)(PTR_SinCoefficients_04372d28 + 4);
  auVar13[0] = (byte)uVar3 | (byte)uVar15;
  auVar13[1] = (byte)(uVar3 >> 8) | (byte)(uVar15 >> 8);
  auVar13[2] = (byte)(uVar3 >> 0x10) | (byte)(uVar15 >> 0x10);
  auVar13[3] = (byte)(uVar3 >> 0x18) | (byte)(uVar15 >> 0x18);
  auVar13[4] = (byte)uVar6 | (byte)uVar17;
  auVar13[5] = (byte)(uVar6 >> 8) | (byte)(uVar17 >> 8);
  auVar13[6] = (byte)(uVar6 >> 0x10) | (byte)(uVar17 >> 0x10);
  auVar13[7] = (byte)(uVar6 >> 0x18) | (byte)(uVar17 >> 0x18);
  auVar13[8] = (byte)uVar7 | (byte)uVar19;
  auVar13[9] = (byte)(uVar7 >> 8) | (byte)(uVar19 >> 8);
  auVar13[10] = (byte)(uVar7 >> 0x10) | (byte)(uVar19 >> 0x10);
  auVar13[0xb] = (byte)(uVar7 >> 0x18) | (byte)(uVar19 >> 0x18);
  auVar13[0xc] = (byte)uVar8 | (byte)uVar21;
  auVar13[0xd] = (byte)(uVar8 >> 8) | (byte)(uVar21 >> 8);
  auVar13[0xe] = (byte)(uVar8 >> 0x10) | (byte)(uVar21 >> 0x10);
  auVar13[0xf] = (byte)(uVar8 >> 0x18) | (byte)(uVar21 >> 0x18);
  auVar16 = NEON_fmov(0xbf800000,4);
  fVar9 = (float)((uint)fVar9 ^ ((uint)fVar9 ^ (uint)(fVar12 - fVar9)) & uVar3);
  fVar1 = (float)((uint)fVar1 ^ ((uint)fVar1 ^ (uint)(fVar12 - fVar1)) & uVar6);
  fVar11 = (float)((uint)fVar11 ^ ((uint)fVar11 ^ (uint)(fVar12 - fVar11)) & uVar7);
  fVar14 = (float)((uint)fVar14 ^ ((uint)fVar14 ^ (uint)(fVar12 - fVar14)) & uVar8);
  auVar4 = NEON_fmov(0x3f800000,4);
  auVar13 = auVar4 ^ (auVar4 ^ auVar16) & auVar13;
  fVar23 = *(float *)PTR_SinCoefficients_04372d28;
  fVar12 = fVar9 * fVar9;
  fVar18 = fVar1 * fVar1;
  fVar20 = fVar11 * fVar11;
  fVar22 = fVar14 * fVar14;
  fVar24 = -*(float *)(PTR_SinCoefficients_04372d28 + 8);
  fVar5 = *(float *)(PTR_SinCoefficients_04372d28 + 0xc);
  fVar25 = -*(float *)(PTR_SinCoefficients_04372d28 + 0x10);
  auVar16._0_4_ =
       fVar9 * (auVar4._0_4_ +
               fVar12 * (fVar25 + fVar12 * (fVar5 + fVar12 * (fVar24 + fVar12 * (fVar2 - fVar12 * 
                                                  fVar23)))));
  auVar16._4_4_ =
       fVar1 * (auVar4._4_4_ +
               fVar18 * (fVar25 + fVar18 * (fVar5 + fVar18 * (fVar24 + fVar18 * (fVar2 - fVar18 * 
                                                  fVar23)))));
  auVar16._8_4_ =
       fVar11 * (auVar4._8_4_ +
                fVar20 * (fVar25 + fVar20 * (fVar5 + fVar20 * (fVar24 + fVar20 * (fVar2 - fVar20 * 
                                                  fVar23)))));
  auVar16._12_4_ =
       fVar14 * (auVar4._12_4_ +
                fVar22 * (fVar25 + fVar22 * (fVar5 + fVar22 * (fVar24 + fVar22 * (fVar2 - fVar22 * 
                                                  fVar23)))));
  fVar2 = *(float *)(PTR_CosCoefficients_04372d40 + 4);
  fVar1 = *(float *)PTR_CosCoefficients_04372d40;
  fVar9 = -*(float *)(PTR_CosCoefficients_04372d40 + 8);
  fVar5 = *(float *)(PTR_CosCoefficients_04372d40 + 0xc);
  fVar11 = -*(float *)(PTR_CosCoefficients_04372d40 + 0x10);
  NEON_ext(auVar16,auVar16,8,1);
  auVar10._0_4_ =
       auVar13._0_4_ *
       (auVar4._0_4_ +
       fVar12 * (fVar11 + fVar12 * (fVar5 + fVar12 * (fVar9 + fVar12 * (fVar2 - fVar12 * fVar1)))));
  auVar10._4_4_ =
       auVar13._4_4_ *
       (auVar4._4_4_ +
       fVar18 * (fVar11 + fVar18 * (fVar5 + fVar18 * (fVar9 + fVar18 * (fVar2 - fVar18 * fVar1)))));
  auVar10._8_4_ =
       auVar13._8_4_ *
       (auVar4._8_4_ +
       fVar20 * (fVar11 + fVar20 * (fVar5 + fVar20 * (fVar9 + fVar20 * (fVar2 - fVar20 * fVar1)))));
  auVar10._12_4_ =
       auVar13._12_4_ *
       (auVar4._12_4_ +
       fVar22 * (fVar11 + fVar22 * (fVar5 + fVar22 * (fVar9 + fVar22 * (fVar2 - fVar22 * fVar1)))));
  NEON_ext(auVar10,auVar10,8,1);
  return;
}


