/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00275a00; name: FUN_00275a00
 */


float FUN_00275a00(float param_1,float param_2,long param_3)

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
  
  param_1 = param_1 * param_2;
  fVar4 = param_1 / *(float *)(param_3 + 0x2c);
  fVar2 = *(float *)PTR_Float1Divided2Pi_04372d20;
  fVar1 = 0.5;
  if (fVar4 < 0.0) {
    fVar1 = -0.5;
  }
  fVar14 = param_1 / *(float *)(param_3 + 0x30);
  fVar3 = *(float *)PTR_Float2Pi_04372d30;
  fVar4 = fVar4 - fVar3 * (float)(int)(fVar1 + fVar4 * fVar2);
  fVar5 = *(float *)PTR_FloatPiDivided2_04372d38;
  fVar1 = -fVar5;
  if (fVar4 <= fVar5) {
    if (fVar4 < fVar1) {
      fVar6 = -*(float *)PTR_FloatPi_04372cf0;
      goto LAB_00275a9c;
    }
  }
  else {
    fVar6 = *(float *)PTR_FloatPi_04372cf0;
LAB_00275a9c:
    fVar4 = fVar6 - fVar4;
  }
  fVar11 = fVar4 * fVar4;
  fVar6 = *(float *)PTR_SinCoefficients_04372d28;
  fVar7 = *(float *)(PTR_SinCoefficients_04372d28 + 4);
  fVar8 = *(float *)(PTR_SinCoefficients_04372d28 + 8);
  fVar9 = *(float *)(PTR_SinCoefficients_04372d28 + 0xc);
  fVar10 = *(float *)(PTR_SinCoefficients_04372d28 + 0x10);
  fVar16 = 0.5;
  if (fVar14 < 0.0) {
    fVar16 = -0.5;
  }
  fVar15 = param_1 / *(float *)(param_3 + 0x34);
  fVar14 = fVar14 - fVar3 * (float)(int)(fVar16 + fVar14 * fVar2);
  if (fVar14 <= fVar5) {
    if (fVar14 < fVar1) {
      fVar16 = -*(float *)PTR_FloatPi_04372cf0;
      goto LAB_00275b40;
    }
  }
  else {
    fVar16 = *(float *)PTR_FloatPi_04372cf0;
LAB_00275b40:
    fVar14 = fVar16 - fVar14;
  }
  param_1 = param_1 / *(float *)(param_3 + 0x38);
  fVar16 = fVar14 * fVar14;
  fVar12 = 0.5;
  if (fVar15 < 0.0) {
    fVar12 = -0.5;
  }
  fVar15 = fVar15 - fVar3 * (float)(int)(fVar12 + fVar15 * fVar2);
  if (fVar15 <= fVar5) {
    if (fVar15 < fVar1) {
      fVar12 = -*(float *)PTR_FloatPi_04372cf0;
      goto LAB_00275bd0;
    }
  }
  else {
    fVar12 = *(float *)PTR_FloatPi_04372cf0;
LAB_00275bd0:
    fVar15 = fVar12 - fVar15;
  }
  fVar13 = fVar15 * fVar15;
  fVar12 = 0.5;
  if (param_1 < 0.0) {
    fVar12 = -0.5;
  }
  param_1 = param_1 - fVar3 * (float)(int)(fVar2 * param_1 + fVar12);
  if (param_1 <= fVar5) {
    if (fVar1 <= param_1) goto LAB_00275c60;
    fVar1 = -*(float *)PTR_FloatPi_04372cf0;
  }
  else {
    fVar1 = *(float *)PTR_FloatPi_04372cf0;
  }
  param_1 = fVar1 - param_1;
LAB_00275c60:
  fVar1 = param_1 * param_1;
  return *(float *)(param_3 + 0x1c) *
         fVar4 * (fVar11 * (fVar11 * (fVar9 + fVar11 * (fVar11 * (fVar7 - fVar6 * fVar11) - fVar8))
                           - fVar10) + 1.0) +
         *(float *)(param_3 + 0x20) *
         fVar14 * (fVar16 * (fVar16 * (fVar9 + fVar16 * (fVar16 * (fVar7 - fVar6 * fVar16) - fVar8))
                            - fVar10) + 1.0) +
         *(float *)(param_3 + 0x24) *
         fVar15 * (fVar13 * (fVar13 * (fVar9 + fVar13 * (fVar13 * (fVar7 - fVar6 * fVar13) - fVar8))
                            - fVar10) + 1.0) +
         *(float *)(param_3 + 0x28) *
         param_1 * (fVar1 * (fVar1 * (fVar9 + fVar1 * (fVar1 * (fVar7 - fVar6 * fVar1) - fVar8)) -
                            fVar10) + 1.0);
}


