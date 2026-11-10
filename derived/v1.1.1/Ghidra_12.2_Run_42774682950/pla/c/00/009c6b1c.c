/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009c6b1c; name: FUN_009c6b1c
 */


undefined1  [16] FUN_009c6b1c(float param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  float fVar4;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar5 [16];
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  puVar3 = PTR_FloatPiDivided2_04372d38;
  puVar2 = PTR_FloatPi_04372cf0;
  fVar22 = (float)*param_3;
  fVar26 = (float)*param_2;
  fVar4 = fVar26 * fVar22;
  fVar23 = (float)((ulong)*param_3 >> 0x20);
  fVar27 = (float)((ulong)*param_2 >> 0x20);
  fVar6 = fVar27 * fVar23;
  fVar24 = (float)param_3[1];
  fVar28 = (float)param_2[1];
  fVar7 = fVar28 * fVar24;
  fVar25 = (float)((ulong)param_3[1] >> 0x20);
  fVar29 = (float)((ulong)param_2[1] >> 0x20);
  fVar8 = fVar29 * fVar25;
  auVar10._4_4_ = fVar6;
  auVar10._0_4_ = fVar4;
  auVar10._8_4_ = fVar7;
  auVar10._12_4_ = fVar8;
  auVar1._4_4_ = fVar6;
  auVar1._0_4_ = fVar4;
  auVar1._8_4_ = fVar7;
  auVar1._12_4_ = fVar8;
  auVar10 = NEON_ext(auVar10,auVar1,8,1);
  fVar6 = auVar10._0_4_ + fVar4 + auVar10._4_4_ + fVar6;
  fVar4 = fVar6;
  if (fVar6 < 0.0) {
    fVar4 = -fVar6;
  }
  fVar7 = 1.0;
  if (fVar6 < 0.0) {
    fVar7 = -1.0;
  }
  if (fVar4 < 0.0) {
    if (-0.70710677 <= fVar4) {
      fVar14 = 1.0 - fVar4 * fVar4;
      fVar8 = SQRT(fVar14);
      fVar6 = *(float *)PTR_FloatPiDivided2_04372d38;
      if (NAN(fVar8)) {
        fVar8 = sqrtf(fVar14);
      }
      fVar8 = -fVar4 / fVar8;
      fVar14 = fVar8 * fVar8;
      fVar6 = fVar6 + fVar8 * (fVar14 * (fVar14 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x18)
                                                  + fVar14 * (fVar14 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 0x10) +
                                                  fVar14 * (fVar14 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar14 * (*(float *)PTR_AtanCoefficients_04372e40
                                                            * fVar14 -
                                                           *(float *)(PTR_AtanCoefficients_04372e40
                                                                     + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_04372e40 + 0x14)
                                                  )) -
                                        *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c)) + 1.0);
      goto LAB_009c6c2c;
    }
    fVar14 = 1.0 - fVar4 * fVar4;
    fVar8 = SQRT(fVar14);
    fVar6 = *(float *)PTR_FloatPi_04372cf0;
    if (NAN(fVar8)) {
      fVar8 = sqrtf(fVar14);
    }
    fVar8 = -fVar8 / fVar4;
  }
  else {
    if (0.70710677 < fVar4) {
      fVar8 = 1.0 - fVar4 * fVar4;
      fVar6 = SQRT(fVar8);
      if (NAN(fVar6)) {
        fVar6 = sqrtf(fVar8);
      }
      fVar6 = fVar6 / fVar4;
      fVar8 = fVar6 * fVar6;
      fVar6 = fVar6 * (fVar8 * (fVar8 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x18) +
                                        fVar8 * (fVar8 * (*(float *)(PTR_AtanCoefficients_04372e40 +
                                                                    0x10) +
                                                         fVar8 * (fVar8 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar8 * (*(float *)PTR_AtanCoefficients_04372e40 *
                                                           fVar8 - *(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0xc)))
                                                - *(float *)(PTR_AtanCoefficients_04372e40 + 0x14)))
                               - *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c)) + 1.0);
      goto LAB_009c6c2c;
    }
    fVar14 = 1.0 - fVar4 * fVar4;
    fVar8 = SQRT(fVar14);
    fVar6 = *(float *)PTR_FloatPiDivided2_04372d38;
    if (NAN(fVar8)) {
      fVar8 = sqrtf(fVar14);
    }
    fVar8 = fVar4 / fVar8;
  }
  fVar14 = fVar8 * fVar8;
  fVar6 = fVar6 - fVar8 * (fVar14 * (fVar14 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x18) +
                                              fVar14 * (fVar14 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 0x10) +
                                                  fVar14 * (fVar14 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar14 * (*(float *)PTR_AtanCoefficients_04372e40
                                                            * fVar14 -
                                                           *(float *)(PTR_AtanCoefficients_04372e40
                                                                     + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_04372e40 + 0x14)
                                                  )) -
                                    *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c)) + 1.0);
LAB_009c6c2c:
  fVar14 = *(float *)PTR_Float1Divided2Pi_04372d20;
  fVar8 = 0.5;
  if (fVar6 < 0.0) {
    fVar8 = -0.5;
  }
  fVar11 = *(float *)PTR_Float2Pi_04372d30;
  fVar17 = fVar6 - fVar11 * (float)(int)(fVar8 + fVar6 * fVar14);
  fVar8 = *(float *)puVar3;
  if (fVar8 < fVar17) {
    fVar9 = *(float *)puVar2;
    fVar17 = fVar9 - fVar17;
  }
  else {
    fVar9 = *(float *)puVar2;
    if (fVar17 < -fVar8) {
      fVar17 = -fVar9 - fVar17;
    }
  }
  fVar12 = fVar17 * fVar17;
  fVar18 = *(float *)PTR_SinCoefficients_04372d28;
  fVar19 = *(float *)(PTR_SinCoefficients_04372d28 + 4);
  fVar21 = *(float *)(PTR_SinCoefficients_04372d28 + 0xc);
  fVar13 = 1.0 - param_1;
  fVar15 = fVar13 * fVar6 * fVar14;
  fVar14 = param_1 * fVar6 * fVar14;
  uVar20 = CONCAT44(-(uint)(0.0 <= fVar14),-(uint)(0.0 <= fVar15)) & 0x8000000080000000 ^
           0xbf000000bf000000;
  uVar16 = NEON_scvtf(CONCAT44((int)(fVar14 + (float)(uVar20 >> 0x20)),(int)(fVar15 + (float)uVar20)
                              ),4);
  fVar14 = fVar13 * fVar6 - (float)uVar16 * fVar11;
  fVar6 = param_1 * fVar6 - (float)((ulong)uVar16 >> 0x20) * fVar11;
  uVar20 = CONCAT44(fVar6,fVar14) ^
           (CONCAT44(fVar6,fVar14) ^ CONCAT44(fVar9 - fVar6,fVar9 - fVar14)) &
           CONCAT44(-(uint)(fVar8 < fVar6),-(uint)(fVar8 < fVar14));
  fVar6 = (float)(uVar20 >> 0x20);
  uVar20 = uVar20 ^ (uVar20 ^ CONCAT44(-fVar9 - fVar6,-fVar9 - (float)uVar20)) &
                    CONCAT44(-(uint)(fVar6 < -fVar8),-(uint)((float)uVar20 < -fVar8));
  fVar6 = (float)uVar20;
  fVar8 = (float)(uVar20 >> 0x20);
  fVar14 = fVar6 * fVar6;
  fVar11 = fVar8 * fVar8;
  fVar9 = -*(float *)(PTR_SinCoefficients_04372d28 + 8);
  fVar15 = -*(float *)(PTR_SinCoefficients_04372d28 + 0x10);
  uVar16 = NEON_fmov(0x3f800000,4);
  fVar17 = 1.0 / (fVar17 * (fVar12 * (fVar12 * (fVar21 + fVar12 * (fVar12 * (fVar19 - fVar18 * 
                                                  fVar12) - *(float *)(PTR_SinCoefficients_04372d28
                                                                      + 8))) -
                                     *(float *)(PTR_SinCoefficients_04372d28 + 0x10)) + 1.0));
  if (fVar4 <= 1.0 - *(float *)PTR_FloatQuaternionEpsilon_0437a118) {
    fVar7 = fVar17 * fVar7 * fVar8 * ((float)((ulong)uVar16 >> 0x20) +
                                     fVar11 * (fVar15 + fVar11 * (fVar21 + fVar11 * (fVar9 + fVar11 
                                                  * (fVar19 - fVar11 * fVar18)))));
    fVar13 = fVar17 * fVar6 * ((float)uVar16 +
                              fVar14 * (fVar15 + fVar14 * (fVar21 + fVar14 * (fVar9 + fVar14 * (
                                                  fVar19 - fVar14 * fVar18)))));
  }
  else {
    fVar7 = fVar7 * param_1;
  }
  auVar5._0_4_ = fVar26 * fVar13 + fVar22 * fVar7;
  auVar5._4_4_ = fVar27 * fVar13 + fVar23 * fVar7;
  auVar5._8_4_ = fVar28 * fVar13 + fVar24 * fVar7;
  auVar5._12_4_ = fVar29 * fVar13 + fVar25 * fVar7;
  return auVar5;
}


