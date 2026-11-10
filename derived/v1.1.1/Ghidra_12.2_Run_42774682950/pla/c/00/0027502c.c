/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0027502c; name: FUN_0027502c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0027502c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
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
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  fVar7 = (float)*param_2;
  fVar9 = *(float *)PTR_Float1Divided2Pi_04372d20;
  fVar3 = 0.5;
  if (fVar7 < 0.0) {
    fVar3 = -0.5;
  }
  fVar12 = *(float *)PTR_Float2Pi_04372d30;
  fVar7 = fVar7 - fVar12 * (float)(int)(fVar9 * fVar7 + fVar3);
  fVar4 = *(float *)PTR_FloatPiDivided2_04372d38;
  fVar3 = -fVar4;
  if (fVar7 <= fVar4) {
    fVar5 = fVar7;
    if (fVar7 < fVar3) {
      fVar5 = -*(float *)PTR_FloatPi_04372cf0;
      goto LAB_002750bc;
    }
  }
  else {
    fVar5 = *(float *)PTR_FloatPi_04372cf0;
LAB_002750bc:
    fVar5 = fVar5 - fVar7;
  }
  fVar23 = fVar5 * fVar5;
  fVar15 = *(float *)PTR_SinCoefficients_04372d28;
  fVar16 = *(float *)(PTR_SinCoefficients_04372d28 + 4);
  fVar17 = *(float *)(PTR_SinCoefficients_04372d28 + 8);
  fVar18 = *(float *)(PTR_SinCoefficients_04372d28 + 0xc);
  fVar20 = *(float *)(PTR_SinCoefficients_04372d28 + 0x10);
  if (fVar7 <= fVar4) {
    if (fVar7 < fVar3) {
      fVar13 = -*(float *)PTR_FloatPi_04372cf0;
      goto LAB_00275128;
    }
    fVar13 = 1.0;
  }
  else {
    fVar13 = *(float *)PTR_FloatPi_04372cf0;
LAB_00275128:
    fVar7 = fVar13 - fVar7;
    fVar13 = -1.0;
  }
  fVar7 = fVar7 * fVar7;
  fVar26 = (float)((ulong)*param_2 >> 0x20);
  fVar19 = *(float *)PTR_CosCoefficients_04372d40;
  fVar21 = *(float *)(PTR_CosCoefficients_04372d40 + 4);
  fVar8 = *(float *)(PTR_CosCoefficients_04372d40 + 8);
  fVar11 = *(float *)(PTR_CosCoefficients_04372d40 + 0xc);
  fVar22 = 0.5;
  if (fVar26 < 0.0) {
    fVar22 = -0.5;
  }
  fVar14 = *(float *)(PTR_CosCoefficients_04372d40 + 0x10);
  fVar26 = fVar26 - fVar12 * (float)(int)(fVar9 * fVar26 + fVar22);
  if (fVar26 <= fVar4) {
    fVar22 = fVar26;
    if (fVar26 < fVar3) {
      fVar22 = -*(float *)PTR_FloatPi_04372cf0;
      goto LAB_002751cc;
    }
  }
  else {
    fVar22 = *(float *)PTR_FloatPi_04372cf0;
LAB_002751cc:
    fVar22 = fVar22 - fVar26;
  }
  fVar24 = fVar22 * fVar22;
  if (fVar26 <= fVar4) {
    if (fVar26 < fVar3) {
      fVar25 = -*(float *)PTR_FloatPi_04372cf0;
      goto LAB_00275234;
    }
    fVar25 = 1.0;
  }
  else {
    fVar25 = *(float *)PTR_FloatPi_04372cf0;
LAB_00275234:
    fVar26 = fVar25 - fVar26;
    fVar25 = -1.0;
  }
  fVar26 = fVar26 * fVar26;
  fVar10 = (float)param_2[1];
  fVar6 = 0.5;
  if (fVar10 < 0.0) {
    fVar6 = -0.5;
  }
  fVar10 = fVar10 - fVar12 * (float)(int)(fVar9 * fVar10 + fVar6);
  if (fVar10 <= fVar4) {
    fVar9 = fVar10;
    if (fVar10 < fVar3) {
      fVar9 = -*(float *)PTR_FloatPi_04372cf0;
      goto LAB_002752d4;
    }
  }
  else {
    fVar9 = *(float *)PTR_FloatPi_04372cf0;
LAB_002752d4:
    fVar9 = fVar9 - fVar10;
  }
  fVar13 = fVar13 * (fVar7 * (fVar7 * (fVar11 + fVar7 * (fVar7 * (fVar21 - fVar19 * fVar7) - fVar8))
                             - fVar14) + 1.0);
  fVar7 = fVar9 * fVar9;
  fVar5 = fVar5 * (fVar23 * (fVar23 * (fVar18 + fVar23 * (fVar23 * (fVar16 - fVar15 * fVar23) -
                                                         fVar17)) - fVar20) + 1.0);
  fVar22 = fVar22 * (fVar24 * (fVar24 * (fVar18 + fVar24 * (fVar24 * (fVar16 - fVar15 * fVar24) -
                                                           fVar17)) - fVar20) + 1.0);
  fVar25 = fVar25 * (fVar26 * (fVar26 * (fVar11 + fVar26 * (fVar26 * (fVar21 - fVar19 * fVar26) -
                                                           fVar8)) - fVar14) + 1.0);
  fVar9 = fVar9 * (fVar7 * (fVar7 * (fVar18 + fVar7 * (fVar7 * (fVar16 - fVar15 * fVar7) - fVar17))
                           - fVar20) + 1.0);
  if (fVar10 <= fVar4) {
    if (fVar3 <= fVar10) {
      fVar3 = 1.0;
      goto LAB_0027535c;
    }
    fVar3 = -*(float *)PTR_FloatPi_04372cf0;
  }
  else {
    fVar3 = *(float *)PTR_FloatPi_04372cf0;
  }
  fVar10 = fVar3 - fVar10;
  fVar3 = -1.0;
LAB_0027535c:
  fVar10 = fVar10 * fVar10;
  fVar3 = fVar3 * (fVar10 * (fVar10 * (fVar11 + fVar10 * (fVar10 * (fVar21 - fVar19 * fVar10) -
                                                         fVar8)) - fVar14) + 1.0);
  param_1[1] = (ulong)(uint)-fVar22;
  *param_1 = CONCAT44(fVar25 * fVar9,fVar25 * fVar3);
  param_1[3] = (ulong)(uint)(fVar5 * fVar25);
  param_1[2] = CONCAT44(fVar22 * fVar5 * fVar9 + fVar13 * fVar3,
                        fVar22 * fVar5 * fVar3 - fVar13 * fVar9);
  uVar2 = _UNK_0388a138;
  uVar1 = _DAT_0388a130;
  param_1[5] = (ulong)(uint)(fVar13 * fVar25);
  param_1[4] = CONCAT44(fVar22 * fVar13 * fVar9 - fVar5 * fVar3,
                        fVar5 * fVar9 + fVar22 * fVar13 * fVar3);
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return;
}


