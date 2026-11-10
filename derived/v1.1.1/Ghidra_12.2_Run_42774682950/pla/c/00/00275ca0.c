/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00275ca0; name: FUN_00275ca0
 */


float FUN_00275ca0(float param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6)

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
  
  param_1 = param_1 * param_5;
  fVar1 = *(float *)PTR_Float1Divided2Pi_04372d20;
  fVar2 = 0.5;
  if (param_1 < 0.0) {
    fVar2 = -0.5;
  }
  fVar3 = *(float *)PTR_Float2Pi_04372d30;
  param_1 = param_1 - fVar3 * (float)(int)(fVar2 + param_1 * fVar1);
  fVar4 = *(float *)PTR_FloatPiDivided2_04372d38;
  fVar2 = -fVar4;
  if (param_1 <= fVar4) {
    if (param_1 < fVar2) {
      fVar5 = -*(float *)PTR_FloatPi_04372cf0;
      goto LAB_00275d24;
    }
  }
  else {
    fVar5 = *(float *)PTR_FloatPi_04372cf0;
LAB_00275d24:
    param_1 = fVar5 - param_1;
  }
  fVar11 = param_1 * param_1;
  fVar6 = *(float *)PTR_SinCoefficients_04372d28;
  fVar7 = *(float *)(PTR_SinCoefficients_04372d28 + 4);
  fVar8 = *(float *)(PTR_SinCoefficients_04372d28 + 8);
  fVar9 = *(float *)(PTR_SinCoefficients_04372d28 + 0xc);
  fVar10 = *(float *)(PTR_SinCoefficients_04372d28 + 0x10);
  param_2 = param_2 * param_5;
  fVar5 = 0.5;
  if (param_2 < 0.0) {
    fVar5 = -0.5;
  }
  param_2 = param_2 - fVar3 * (float)(int)(fVar5 + param_2 * fVar1);
  if (param_2 <= fVar4) {
    if (param_2 < fVar2) {
      fVar5 = -*(float *)PTR_FloatPi_04372cf0;
      goto LAB_00275dc4;
    }
  }
  else {
    fVar5 = *(float *)PTR_FloatPi_04372cf0;
LAB_00275dc4:
    param_2 = fVar5 - param_2;
  }
  fVar13 = param_2 * param_2;
  param_3 = param_3 * param_5;
  fVar5 = 0.5;
  if (param_3 < 0.0) {
    fVar5 = -0.5;
  }
  param_3 = param_3 - fVar3 * (float)(int)(fVar5 + param_3 * fVar1);
  if (param_3 <= fVar4) {
    if (param_3 < fVar2) {
      fVar5 = -*(float *)PTR_FloatPi_04372cf0;
      goto LAB_00275e50;
    }
  }
  else {
    fVar5 = *(float *)PTR_FloatPi_04372cf0;
LAB_00275e50:
    param_3 = fVar5 - param_3;
  }
  fVar12 = param_3 * param_3;
  param_4 = param_4 * param_5;
  fVar5 = 0.5;
  if (param_4 < 0.0) {
    fVar5 = -0.5;
  }
  param_4 = param_4 - fVar3 * (float)(int)(fVar5 + param_4 * fVar1);
  if (param_4 <= fVar4) {
    if (fVar2 <= param_4) goto LAB_00275ee0;
    fVar1 = -*(float *)PTR_FloatPi_04372cf0;
  }
  else {
    fVar1 = *(float *)PTR_FloatPi_04372cf0;
  }
  param_4 = fVar1 - param_4;
LAB_00275ee0:
  fVar1 = param_4 * param_4;
  return (((param_2 * (fVar13 * (fVar13 * (fVar9 + fVar13 * (fVar13 * (fVar7 - fVar6 * fVar13) -
                                                            fVar8)) - fVar10) + 1.0) -
           param_1 * (fVar11 * (fVar11 * (fVar9 + fVar11 * (fVar11 * (fVar7 - fVar6 * fVar11) -
                                                           fVar8)) - fVar10) + 1.0)) +
          param_3 * (fVar12 * (fVar12 * (fVar9 + fVar12 * (fVar12 * (fVar7 - fVar6 * fVar12) - fVar8
                                                          )) - fVar10) + 1.0)) -
         param_4 * (fVar1 * (fVar1 * (fVar9 + fVar1 * (fVar1 * (fVar7 - fVar6 * fVar1) - fVar8)) -
                            fVar10) + 1.0)) * param_6;
}


