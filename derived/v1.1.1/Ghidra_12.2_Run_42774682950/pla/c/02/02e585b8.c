/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e585b8; name: FUN_02e585b8
 */


void FUN_02e585b8(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
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
  
  fVar10 = param_1[0x1d];
  fVar3 = param_1[0x1b];
  fVar4 = param_1[0x1c];
  param_1[0x1f] = 0.0;
  param_1[0x20] = 0.0;
  iVar5 = (int)param_1[0x1e] + -1;
  if (iVar5 < 0) {
    fVar18 = 0.0;
  }
  else {
    fVar19 = 0.0;
    fVar18 = 0.0;
    pfVar6 = param_1 + (long)iVar5 * 3 + 5;
    pfVar7 = param_1 + (long)((int)param_1[0x1e] + -2) * 3 + 5;
    do {
      fVar9 = pfVar6[-2];
      fVar1 = pfVar6[-1];
      fVar2 = *pfVar6;
      fVar8 = fVar9 - fVar3;
      fVar13 = pfVar7[-2] - fVar9;
      fVar11 = fVar1 - fVar4;
      fVar12 = fVar2 - fVar10;
      fVar14 = pfVar7[-1] - fVar1;
      fVar15 = *pfVar7 - fVar2;
      fVar16 = SQRT(fVar8 * fVar8 + fVar11 * fVar11 + fVar12 * fVar12);
      fVar17 = SQRT(fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15) * fVar16;
      if (0.001 < fVar17) {
        fVar17 = (fVar13 * fVar8 + fVar11 * fVar14 + fVar12 * fVar15) / fVar17;
        fVar18 = fVar16 + fVar18;
        param_1[0x20] = fVar18;
        fVar10 = fVar2;
        fVar3 = fVar9;
        fVar4 = fVar1;
        if (fVar17 < 0.999) {
          fVar9 = (float)NEON_fminnm(fVar17,0x3f800000);
          if (fVar9 <= -1.0) {
            fVar9 = -1.0;
          }
          fVar9 = acosf(fVar9);
          fVar19 = (float)NEON_fminnm(fVar19 + fVar9 * 0.31830987,0x3f800000);
          param_1[0x1f] = fVar19;
        }
      }
      iVar5 = iVar5 + -1;
      pfVar6 = pfVar6 + -3;
      pfVar7 = pfVar7 + -3;
    } while (-1 < iVar5);
  }
  fVar10 = SQRT((fVar3 - *param_1) * (fVar3 - *param_1) +
                (fVar4 - param_1[1]) * (fVar4 - param_1[1]) +
                (fVar10 - param_1[2]) * (fVar10 - param_1[2]));
  if (0.0 < fVar10) {
    param_1[0x20] = fVar10 + fVar18;
  }
  return;
}


