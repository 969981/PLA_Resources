/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4924c; name: FUN_02e4924c
 */


bool FUN_02e4924c(float *param_1,float *param_2,float *param_3,float *param_4)

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
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar10 = *param_2;
  fVar12 = param_2[1];
  fVar5 = param_3[2];
  fVar14 = param_2[2];
  fVar3 = *param_4;
  fVar4 = param_4[1];
  fVar6 = param_4[2];
  fVar7 = (fVar1 - fVar10) * (fVar1 - fVar10) + (fVar2 - fVar12) * (fVar2 - fVar12) +
          (fVar5 - fVar14) * (fVar5 - fVar14);
  fVar8 = (fVar3 - fVar1) * (fVar3 - fVar1) + (fVar4 - fVar2) * (fVar4 - fVar2) +
          (fVar6 - fVar5) * (fVar6 - fVar5);
  fVar9 = (fVar3 - fVar10) * (fVar3 - fVar10) + (fVar4 - fVar12) * (fVar4 - fVar12) +
          (fVar6 - fVar14) * (fVar6 - fVar14);
  if (fVar8 <= fVar9) {
    fVar8 = fVar9;
  }
  if (fVar7 <= fVar8) {
    fVar7 = fVar8;
  }
  fVar7 = SQRT(fVar7) * 0.005;
  fVar8 = *param_1;
  fVar9 = param_1[1];
  fVar11 = param_1[2];
  fVar13 = param_1[3];
  if ((ABS((fVar8 * fVar10 + fVar12 * fVar9 + fVar14 * fVar11) - fVar13) < fVar7) &&
     (ABS((fVar8 * fVar1 + fVar2 * fVar9 + fVar5 * fVar11) - fVar13) < fVar7)) {
    return ABS((fVar8 * fVar3 + fVar4 * fVar9 + fVar6 * fVar11) - fVar13) < fVar7;
  }
  return false;
}


