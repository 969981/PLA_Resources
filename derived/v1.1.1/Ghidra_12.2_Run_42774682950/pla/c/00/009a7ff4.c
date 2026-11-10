/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009a7ff4; name: FUN_009a7ff4
 */


undefined1  [16] FUN_009a7ff4(float param_1,float param_2,float param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
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
  
  param_1 = param_1 * 0.5;
  fVar3 = *(float *)PTR_Float1Divided2Pi_04372d20;
  fVar4 = 0.5;
  if (param_1 < 0.0) {
    fVar4 = -0.5;
  }
  fVar5 = *(float *)PTR_Float2Pi_04372d30;
  param_1 = param_1 - fVar5 * (float)(int)(fVar4 + param_1 * fVar3);
  fVar6 = *(float *)PTR_FloatPiDivided2_04372d38;
  fVar4 = -fVar6;
  if (fVar6 < param_1) {
    fVar17 = *(float *)PTR_FloatPi_04372cf0;
LAB_009a82b0:
    param_1 = fVar17 - param_1;
    fVar17 = -1.0;
  }
  else {
    if (param_1 < fVar4) {
      fVar17 = -*(float *)PTR_FloatPi_04372cf0;
      goto LAB_009a82b0;
    }
    fVar17 = 1.0;
  }
  fVar18 = param_1 * param_1;
  fVar7 = *(float *)PTR_SinCoefficients_04372d28;
  fVar8 = *(float *)(PTR_SinCoefficients_04372d28 + 4);
  fVar9 = *(float *)(PTR_SinCoefficients_04372d28 + 8);
  fVar10 = *(float *)(PTR_SinCoefficients_04372d28 + 0xc);
  fVar11 = *(float *)(PTR_SinCoefficients_04372d28 + 0x10);
  fVar12 = *(float *)PTR_CosCoefficients_04372d40;
  fVar13 = *(float *)(PTR_CosCoefficients_04372d40 + 4);
  fVar14 = *(float *)(PTR_CosCoefficients_04372d40 + 8);
  fVar15 = *(float *)(PTR_CosCoefficients_04372d40 + 0xc);
  fVar16 = *(float *)(PTR_CosCoefficients_04372d40 + 0x10);
  param_2 = param_2 * 0.5;
  fVar2 = 0.5;
  if (param_2 < 0.0) {
    fVar2 = -0.5;
  }
  param_2 = param_2 - fVar5 * (float)(int)(fVar2 + param_2 * fVar3);
  if (fVar6 < param_2) {
    fVar2 = *(float *)PTR_FloatPi_04372cf0;
LAB_009a82c8:
    param_2 = fVar2 - param_2;
    fVar2 = -1.0;
  }
  else {
    if (param_2 < fVar4) {
      fVar2 = -*(float *)PTR_FloatPi_04372cf0;
      goto LAB_009a82c8;
    }
    fVar2 = 1.0;
  }
  fVar19 = param_2 * param_2;
  param_1 = param_1 * (fVar18 * (fVar18 * (fVar10 + fVar18 * (fVar18 * (fVar8 - fVar7 * fVar18) -
                                                             fVar9)) - fVar11) + 1.0);
  fVar17 = fVar17 * (fVar18 * (fVar18 * (fVar15 + fVar18 * (fVar18 * (fVar13 - fVar18 * fVar12) -
                                                           fVar14)) - fVar16) + 1.0);
  param_2 = param_2 * (fVar19 * (fVar19 * (fVar10 + fVar19 * (fVar19 * (fVar8 - fVar7 * fVar19) -
                                                             fVar9)) - fVar11) + 1.0);
  param_3 = param_3 * 0.5;
  fVar18 = 0.5;
  if (param_3 < 0.0) {
    fVar18 = -0.5;
  }
  fVar2 = fVar2 * (fVar19 * (fVar19 * (fVar15 + fVar19 * (fVar19 * (fVar13 - fVar12 * fVar19) -
                                                         fVar14)) - fVar16) + 1.0);
  param_3 = param_3 - fVar5 * (float)(int)(fVar18 + param_3 * fVar3);
  if (fVar6 < param_3) {
    fVar4 = *(float *)PTR_FloatPi_04372cf0;
  }
  else {
    if (fVar4 <= param_3) {
      fVar4 = 1.0;
      goto LAB_009a81b8;
    }
    fVar4 = -*(float *)PTR_FloatPi_04372cf0;
  }
  param_3 = fVar4 - param_3;
  fVar4 = -1.0;
LAB_009a81b8:
  fVar3 = param_3 * param_3;
  fVar5 = param_1 * fVar2;
  fVar2 = fVar17 * fVar2;
  param_1 = param_1 * param_2;
  param_3 = param_3 * (fVar3 * (fVar3 * (fVar10 + fVar3 * (fVar3 * (fVar8 - fVar7 * fVar3) - fVar9))
                               - fVar11) + 1.0);
  fVar4 = fVar4 * (fVar3 * (fVar3 * (fVar15 + fVar3 * (fVar3 * (fVar13 - fVar12 * fVar3) - fVar14))
                           - fVar16) + 1.0);
  fVar17 = fVar17 * param_2;
  auVar1._0_4_ = fVar17 * fVar4 + fVar5 * param_3;
  auVar1._12_4_ = fVar2 * fVar4 + param_1 * param_3;
  auVar1._8_4_ = fVar2 * param_3 - param_1 * fVar4;
  auVar1._4_4_ = fVar5 * fVar4 - fVar17 * param_3;
  return auVar1;
}


