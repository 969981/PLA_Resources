/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00271b20; name: FUN_00271b20
 */


void FUN_00271b20(float param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

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
  
  fVar9 = 0.5;
  if (param_1 < 0.0) {
    fVar9 = -0.5;
  }
  param_1 = param_1 - *(float *)PTR_Float2Pi_04372d30 *
                      (float)(int)(fVar9 + *(float *)PTR_Float1Divided2Pi_04372d20 * param_1);
  fVar9 = *(float *)PTR_FloatPiDivided2_04372d38;
  if (param_1 <= fVar9) {
    fVar6 = 1.0;
    fVar5 = param_1;
    if (param_1 < -fVar9) {
      fVar5 = -*(float *)PTR_FloatPi_04372cf0;
      goto LAB_00271bb0;
    }
  }
  else {
    fVar5 = *(float *)PTR_FloatPi_04372cf0;
LAB_00271bb0:
    fVar6 = -1.0;
    fVar5 = fVar5 - param_1;
  }
  fVar5 = fVar5 * fVar5;
  fVar4 = (float)((ulong)*param_4 >> 0x20);
  fVar1 = (float)param_4[1];
  fVar6 = fVar6 * (fVar5 * (fVar5 * (*(float *)(PTR_CosCoefficients_04372d40 + 0xc) +
                                    fVar5 * (fVar5 * (*(float *)(PTR_CosCoefficients_04372d40 + 4) -
                                                     *(float *)PTR_CosCoefficients_04372d40 * fVar5)
                                            - *(float *)(PTR_CosCoefficients_04372d40 + 8))) -
                           *(float *)(PTR_CosCoefficients_04372d40 + 0x10)) + 1.0);
  if (param_1 <= fVar9) {
    if (-fVar9 <= param_1) goto LAB_00271c38;
    fVar9 = -*(float *)PTR_FloatPi_04372cf0;
  }
  else {
    fVar9 = *(float *)PTR_FloatPi_04372cf0;
  }
  param_1 = fVar9 - param_1;
LAB_00271c38:
  fVar9 = param_1 * param_1;
  fVar3 = (float)*param_4;
  param_1 = param_1 * (fVar9 * (fVar9 * (*(float *)(PTR_SinCoefficients_04372d28 + 0xc) +
                                        fVar9 * (fVar9 * (*(float *)(PTR_SinCoefficients_04372d28 +
                                                                    4) -
                                                         *(float *)PTR_SinCoefficients_04372d28 *
                                                         fVar9) -
                                                *(float *)(PTR_SinCoefficients_04372d28 + 8))) -
                               *(float *)(PTR_SinCoefficients_04372d28 + 0x10)) + 1.0);
  fVar8 = 1.0 - fVar6;
  fVar10 = fVar3 * fVar4 * fVar8;
  fVar11 = fVar1 * fVar3 * fVar8;
  fVar7 = fVar4 * fVar1 * fVar8;
  fVar9 = (float)*param_3;
  fVar5 = (float)((ulong)*param_3 >> 0x20);
  fVar2 = (float)param_3[1];
  param_2[1] = CONCAT44(fVar9 * 0.0 + fVar5 * 0.0 + fVar2 * 0.0 + 0.0,
                        (fVar11 + fVar4 * param_1) * fVar9 + (fVar7 - fVar3 * param_1) * fVar5 +
                        (fVar6 + fVar1 * fVar1 * fVar8) * fVar2 + 0.0);
  *param_2 = CONCAT44((fVar10 - fVar1 * param_1) * fVar9 + (fVar6 + fVar4 * fVar4 * fVar8) * fVar5 +
                      (fVar7 + fVar3 * param_1) * fVar2 + 0.0,
                      (fVar6 + fVar3 * fVar3 * fVar8) * fVar9 + (fVar10 + fVar1 * param_1) * fVar5 +
                      (fVar11 - fVar4 * param_1) * fVar2 + 0.0);
  return;
}


