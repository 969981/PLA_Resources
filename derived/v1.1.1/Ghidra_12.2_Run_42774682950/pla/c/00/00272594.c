/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00272594; name: FUN_00272594
 */


void FUN_00272594(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4,
                 long param_5,int param_6)

{
  undefined *puVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_80 [4];
  float local_70 [4];
  
  puVar1 = PTR_FloatPi_04372cf0;
  pfVar4 = *(float **)(*(long *)(param_4 + 0x238) + 0x260);
  fVar12 = *(float *)(param_4 + 0x4c);
  fVar13 = *(float *)(*(long *)(param_5 + 0x18) + (long)param_6 * 0x10 + 0xc);
  if (pfVar4[3] == 0.0) {
    local_70[0] = *pfVar4;
    pfVar3 = pfVar4 + 0x28;
    if (*pfVar3 == 0.0) goto LAB_00272664;
LAB_00272634:
    fVar5 = local_70[0];
    FUN_00271d84(param_1,param_2,local_80,param_4,pfVar3,param_6);
  }
  else {
    param_2 = FUN_00271d84(param_1,param_2,local_70,param_4,pfVar4 + 3,param_6);
    local_70[0] = local_70[0] * (*(float *)puVar1 / *(float *)PTR_FloatDegree180_04372ce0);
    pfVar3 = (float *)(*(long *)(*(long *)(param_4 + 0x238) + 0x260) + 0xa0);
    if (*pfVar3 != 0.0) goto LAB_00272634;
LAB_00272664:
    local_80[0] = pfVar4[2];
    fVar5 = local_70[0];
  }
  fVar2 = local_80[0];
  fVar5 = fVar12 * fVar13 * fVar5;
  fVar9 = 0.5;
  if (fVar5 < 0.0) {
    fVar9 = -0.5;
  }
  fVar5 = fVar5 - *(float *)PTR_Float2Pi_04372d30 *
                  (float)(int)(*(float *)PTR_Float1Divided2Pi_04372d20 * fVar5 + fVar9);
  if (fVar5 <= *(float *)PTR_FloatPiDivided2_04372d38) {
    if (-*(float *)PTR_FloatPiDivided2_04372d38 <= fVar5) {
      fVar9 = 1.0;
      goto LAB_002726f8;
    }
    fVar9 = -*(float *)puVar1;
  }
  else {
    fVar9 = *(float *)puVar1;
  }
  fVar5 = fVar9 - fVar5;
  fVar9 = -1.0;
LAB_002726f8:
  fVar10 = fVar5 * fVar5;
  fVar6 = pfVar4[1];
  fVar5 = fVar5 * (fVar10 * (fVar10 * (*(float *)(PTR_SinCoefficients_04372d28 + 0xc) +
                                      fVar10 * (fVar10 * (*(float *)(PTR_SinCoefficients_04372d28 +
                                                                    4) -
                                                         *(float *)PTR_SinCoefficients_04372d28 *
                                                         fVar10) -
                                               *(float *)(PTR_SinCoefficients_04372d28 + 8))) -
                            *(float *)(PTR_SinCoefficients_04372d28 + 0x10)) + 1.0);
  fVar9 = fVar9 * (fVar10 * (fVar10 * (*(float *)(PTR_CosCoefficients_04372d40 + 0xc) +
                                      fVar10 * (fVar10 * (*(float *)(PTR_CosCoefficients_04372d40 +
                                                                    4) -
                                                         fVar10 * *(float *)
                                                  PTR_CosCoefficients_04372d40) -
                                               *(float *)(PTR_CosCoefficients_04372d40 + 8))) -
                            *(float *)(PTR_CosCoefficients_04372d40 + 0x10)) + 1.0);
  if (fVar6 == 2.8026e-45) {
    fVar6 = (float)*param_3;
    fVar10 = (float)((ulong)*param_3 >> 0x20);
    fVar11 = fVar9 * fVar6 + fVar5 * fVar10;
    fVar5 = fVar9 * fVar10 - fVar5 * fVar6;
    param_3[1] = param_3[1];
    *param_3 = CONCAT44(fVar5,fVar11);
    if (local_80[0] == 0.0) {
      return;
    }
    fVar9 = fVar11 * fVar11 + fVar5 * fVar5;
    if (fVar9 <= 0.0) {
      return;
    }
    fVar6 = SQRT(fVar9);
    if (NAN(fVar6)) {
      fVar6 = sqrtf(fVar9);
    }
    uVar8 = param_3[1];
    fVar12 = fVar12 * fVar13 * fVar2 * (1.0 / fVar6);
    uVar7 = CONCAT44((float)((ulong)*param_3 >> 0x20) + fVar5 * fVar12,
                     (float)*param_3 + fVar11 * fVar12);
  }
  else if (fVar6 == 1.4013e-45) {
    fVar6 = (float)*param_3;
    fVar10 = fVar9 * fVar6 - fVar5 * (float)param_3[1];
    fVar5 = fVar9 * (float)param_3[1] + fVar5 * fVar6;
    param_3[1] = (ulong)(uint)fVar5;
    *param_3 = CONCAT44((int)((ulong)*param_3 >> 0x20),fVar10);
    if (local_80[0] == 0.0) {
      return;
    }
    fVar9 = fVar5 * fVar5 + fVar10 * fVar10;
    if (fVar9 <= 0.0) {
      return;
    }
    fVar6 = SQRT(fVar9);
    if (NAN(fVar6)) {
      fVar6 = sqrtf(fVar9);
    }
    fVar12 = fVar12 * fVar13 * fVar2 * (1.0 / fVar6);
    uVar7 = CONCAT44((int)((ulong)*param_3 >> 0x20),(float)*param_3 + fVar10 * fVar12);
    uVar8 = (ulong)(uint)((float)param_3[1] + fVar5 * fVar12);
  }
  else {
    if (fVar6 != 0.0) {
      return;
    }
    fVar6 = (float)((ulong)*param_3 >> 0x20);
    fVar10 = fVar9 * fVar6 + fVar5 * (float)param_3[1];
    fVar5 = fVar9 * (float)param_3[1] - fVar5 * fVar6;
    param_3[1] = (ulong)(uint)fVar5;
    *param_3 = CONCAT44(fVar10,(int)*param_3);
    if (local_80[0] == 0.0) {
      return;
    }
    fVar9 = fVar10 * fVar10 + fVar5 * fVar5;
    if (fVar9 <= 0.0) {
      return;
    }
    fVar6 = SQRT(fVar9);
    if (NAN(fVar6)) {
      fVar6 = sqrtf(fVar9);
    }
    fVar12 = fVar12 * fVar13 * fVar2 * (1.0 / fVar6);
    uVar7 = CONCAT44((float)((ulong)*param_3 >> 0x20) + fVar10 * fVar12,(int)*param_3);
    uVar8 = (ulong)(uint)((float)param_3[1] + fVar5 * fVar12);
  }
  param_3[1] = uVar8;
  *param_3 = uVar7;
  return;
}


