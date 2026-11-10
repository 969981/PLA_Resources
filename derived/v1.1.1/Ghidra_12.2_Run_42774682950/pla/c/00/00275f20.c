/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00275f20; name: FUN_00275f20
 */


float FUN_00275f20(float param_1,float param_2)

{
  float fVar1;
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
  float fVar20;
  float fVar21;
  
  fVar4 = param_1 * 1.6666666;
  fVar1 = *(float *)PTR_Float1Divided2Pi_04372d20;
  fVar2 = 0.5;
  if (fVar4 < 0.0) {
    fVar2 = -0.5;
  }
  fVar3 = *(float *)PTR_Float2Pi_04372d30;
  fVar4 = fVar4 - fVar3 * (float)(int)(fVar2 + fVar4 * fVar1);
  fVar5 = *(float *)PTR_FloatPiDivided2_04372d38;
  fVar2 = -fVar5;
  if (fVar4 <= fVar5) {
    if (fVar4 < fVar2) {
      fVar6 = -*(float *)PTR_FloatPi_04372cf0;
      goto LAB_00275fb0;
    }
  }
  else {
    fVar6 = *(float *)PTR_FloatPi_04372cf0;
LAB_00275fb0:
    fVar4 = fVar6 - fVar4;
  }
  fVar11 = fVar4 * fVar4;
  fVar6 = *(float *)PTR_SinCoefficients_04372d28;
  fVar7 = *(float *)(PTR_SinCoefficients_04372d28 + 4);
  fVar8 = *(float *)(PTR_SinCoefficients_04372d28 + 8);
  fVar9 = *(float *)(PTR_SinCoefficients_04372d28 + 0xc);
  fVar10 = *(float *)(PTR_SinCoefficients_04372d28 + 0x10);
  fVar13 = param_2 * 1.6666666;
  fVar12 = 0.5;
  if (fVar13 < 0.0) {
    fVar12 = -0.5;
  }
  fVar13 = fVar13 - fVar3 * (float)(int)(fVar12 + fVar13 * fVar1);
  if (fVar13 <= fVar5) {
    if (fVar13 < fVar2) {
      fVar12 = -*(float *)PTR_FloatPi_04372cf0;
      goto LAB_00276054;
    }
  }
  else {
    fVar12 = *(float *)PTR_FloatPi_04372cf0;
LAB_00276054:
    fVar13 = fVar12 - fVar13;
  }
  fVar12 = fVar13 * fVar13;
  fVar19 = param_1 * 2.3809524;
  fVar14 = 0.5;
  if (fVar19 < 0.0) {
    fVar14 = -0.5;
  }
  fVar19 = fVar19 - fVar3 * (float)(int)(fVar14 + fVar19 * fVar1);
  if (fVar19 <= fVar5) {
    if (fVar19 < fVar2) {
      fVar14 = -*(float *)PTR_FloatPi_04372cf0;
      goto LAB_002760e8;
    }
  }
  else {
    fVar14 = *(float *)PTR_FloatPi_04372cf0;
LAB_002760e8:
    fVar19 = fVar14 - fVar19;
  }
  fVar14 = fVar19 * fVar19;
  fVar15 = param_2 * 2.3809524;
  fVar20 = 0.5;
  if (fVar15 < 0.0) {
    fVar20 = -0.5;
  }
  fVar15 = fVar15 - fVar3 * (float)(int)(fVar20 + fVar15 * fVar1);
  if (fVar15 <= fVar5) {
    if (fVar15 < fVar2) {
      fVar20 = -*(float *)PTR_FloatPi_04372cf0;
      goto LAB_00276184;
    }
  }
  else {
    fVar20 = *(float *)PTR_FloatPi_04372cf0;
LAB_00276184:
    fVar15 = fVar20 - fVar15;
  }
  fVar16 = fVar15 * fVar15;
  fVar20 = param_1 * 4.347826;
  fVar17 = 0.5;
  if (fVar20 < 0.0) {
    fVar17 = -0.5;
  }
  fVar20 = fVar20 - fVar3 * (float)(int)(fVar17 + fVar20 * fVar1);
  if (fVar20 <= fVar5) {
    if (fVar20 < fVar2) {
      fVar17 = -*(float *)PTR_FloatPi_04372cf0;
      goto LAB_00276228;
    }
  }
  else {
    fVar17 = *(float *)PTR_FloatPi_04372cf0;
LAB_00276228:
    fVar20 = fVar17 - fVar20;
  }
  fVar17 = fVar20 * fVar20;
  fVar18 = param_2 * 4.347826;
  fVar21 = 0.5;
  if (fVar18 < 0.0) {
    fVar21 = -0.5;
  }
  fVar18 = fVar18 - fVar3 * (float)(int)(fVar21 + fVar18 * fVar1);
  if (fVar18 <= fVar5) {
    if (fVar18 < fVar2) {
      fVar21 = -*(float *)PTR_FloatPi_04372cf0;
      goto LAB_002762c4;
    }
  }
  else {
    fVar21 = *(float *)PTR_FloatPi_04372cf0;
LAB_002762c4:
    fVar18 = fVar21 - fVar18;
  }
  fVar21 = fVar18 * fVar18;
  fVar17 = fVar18 * (fVar21 * (fVar21 * (fVar9 + fVar21 * (fVar21 * (fVar7 - fVar6 * fVar21) - fVar8
                                                          )) - fVar10) + 1.0) -
           fVar20 * (fVar17 * (fVar17 * (fVar9 + fVar17 * (fVar17 * (fVar7 - fVar6 * fVar17) - fVar8
                                                          )) - fVar10) + 1.0);
  param_1 = param_1 * 6.6666665;
  fVar20 = 0.5;
  if (param_1 < 0.0) {
    fVar20 = -0.5;
  }
  param_1 = param_1 - fVar3 * (float)(int)(fVar20 + param_1 * fVar1);
  if (param_1 <= fVar5) {
    if (param_1 < fVar2) {
      fVar20 = -*(float *)PTR_FloatPi_04372cf0;
      goto LAB_00276364;
    }
  }
  else {
    fVar20 = *(float *)PTR_FloatPi_04372cf0;
LAB_00276364:
    param_1 = fVar20 - param_1;
  }
  fVar18 = param_1 * param_1;
  param_2 = param_2 * 6.6666665;
  fVar20 = 0.5;
  if (param_2 < 0.0) {
    fVar20 = -0.5;
  }
  param_2 = param_2 - fVar3 * (float)(int)(fVar20 + param_2 * fVar1);
  if (param_2 <= fVar5) {
    if (fVar2 <= param_2) goto LAB_00276400;
    fVar1 = -*(float *)PTR_FloatPi_04372cf0;
  }
  else {
    fVar1 = *(float *)PTR_FloatPi_04372cf0;
  }
  param_2 = fVar1 - param_2;
LAB_00276400:
  fVar1 = param_2 * param_2;
  return (fVar13 * (fVar12 * (fVar12 * (fVar9 + fVar12 * (fVar12 * (fVar7 - fVar6 * fVar12) - fVar8)
                                       ) - fVar10) + 1.0) -
         fVar4 * (fVar11 * (fVar11 * (fVar9 + fVar11 * (fVar11 * (fVar7 - fVar6 * fVar11) - fVar8))
                           - fVar10) + 1.0)) * 4.0 +
         (fVar15 * (fVar16 * (fVar16 * (fVar9 + fVar16 * (fVar16 * (fVar7 - fVar6 * fVar16) - fVar8)
                                       ) - fVar10) + 1.0) -
         fVar19 * (fVar14 * (fVar14 * (fVar9 + fVar14 * (fVar14 * (fVar7 - fVar6 * fVar14) - fVar8))
                            - fVar10) + 1.0)) * 3.0 + fVar17 + fVar17 +
         (param_2 * (fVar1 * (fVar1 * (fVar9 + fVar1 * (fVar1 * (fVar7 - fVar6 * fVar1) - fVar8)) -
                             fVar10) + 1.0) -
         param_1 * (fVar18 * (fVar18 * (fVar9 + fVar18 * (fVar18 * (fVar7 - fVar6 * fVar18) - fVar8)
                                       ) - fVar10) + 1.0)) * 1.5;
}


