/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cb060; name: FUN_032cb060
 */


void FUN_032cb060(undefined8 *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_60 [4];
  
  fVar12 = *param_2;
  fVar13 = param_2[5];
  fVar14 = fVar12 + fVar13 + param_2[10];
  if (fVar14 <= 0.0) {
    pfVar2 = param_2 + (ulong)(fVar12 < fVar13) * 4 + 1;
    if (fVar13 <= fVar12) {
      pfVar2 = param_2 + (ulong)(fVar12 < fVar13) * 4;
    }
    uVar6 = 2;
    if (param_2[10] <= *pfVar2) {
      uVar6 = (uint)(fVar12 < fVar13);
    }
    uVar10 = (ulong)uVar6;
    pfVar2 = param_2 + uVar10 * 4;
    iVar4 = *(int *)((long)&DAT_039c3370 + uVar10 * 4);
    lVar11 = (long)iVar4;
    pfVar3 = param_2 + lVar11 * 4;
    iVar5 = *(int *)((long)&DAT_039c3370 + lVar11 * 4);
    lVar9 = (long)iVar5;
    pfVar7 = pfVar2 + 1;
    if (uVar6 != 1) {
      pfVar7 = pfVar2 + 3;
    }
    pfVar8 = pfVar2 + 2;
    if (uVar6 != 2) {
      pfVar8 = pfVar7;
    }
    pfVar7 = pfVar2;
    if (uVar6 != 0) {
      pfVar7 = pfVar8;
    }
    fVar12 = *pfVar7;
    pfVar7 = pfVar3 + 1;
    if (iVar4 != 1) {
      pfVar7 = pfVar3 + 3;
    }
    pfVar8 = pfVar3 + 2;
    if (iVar4 != 2) {
      pfVar8 = pfVar7;
    }
    pfVar7 = pfVar3;
    if (iVar4 != 0) {
      pfVar7 = pfVar8;
    }
    fVar14 = *pfVar7;
    if (iVar5 == 0) {
      fVar14 = (fVar12 - (fVar14 + *param_2)) + 1.0;
      fVar12 = SQRT(fVar14);
      if (NAN(fVar12)) {
        fVar12 = sqrtf(fVar14);
      }
      *(float *)((ulong)local_60 | uVar10 << 2) = fVar12 * 0.5;
      pfVar7 = pfVar3;
    }
    else if (iVar5 == 2) {
      fVar14 = (fVar12 - (fVar14 + param_2[10])) + 1.0;
      fVar12 = SQRT(fVar14);
      if (NAN(fVar12)) {
        fVar12 = sqrtf(fVar14);
      }
      *(float *)((ulong)local_60 | uVar10 << 2) = fVar12 * 0.5;
      pfVar7 = pfVar3 + 2;
    }
    else if (iVar5 == 1) {
      fVar14 = (fVar12 - (fVar14 + param_2[5])) + 1.0;
      fVar12 = SQRT(fVar14);
      if (NAN(fVar12)) {
        fVar12 = sqrtf(fVar14);
      }
      *(float *)((ulong)local_60 | uVar10 << 2) = fVar12 * 0.5;
      pfVar7 = pfVar3 + 1;
    }
    else {
      fVar14 = (fVar12 - (fVar14 + param_2[lVar9 * 4 + 3])) + 1.0;
      fVar12 = SQRT(fVar14);
      if (NAN(fVar12)) {
        fVar12 = sqrtf(fVar14);
      }
      *(float *)((ulong)local_60 | uVar10 << 2) = fVar12 * 0.5;
      pfVar7 = pfVar3 + 3;
    }
    fVar12 = 0.5 / fVar12;
    if (iVar4 == 0) {
      fVar14 = param_2[lVar9 * 4];
      pfVar8 = pfVar2;
    }
    else if (iVar4 == 2) {
      fVar14 = param_2[lVar9 * 4 + 2];
      pfVar8 = pfVar2 + 2;
    }
    else if (iVar4 == 1) {
      fVar14 = param_2[lVar9 * 4 + 1];
      pfVar8 = pfVar2 + 1;
    }
    else {
      fVar14 = param_2[lVar9 * 4 + 3];
      pfVar8 = pfVar2 + 3;
    }
    local_60[3] = fVar12 * (*pfVar7 - fVar14);
    pfVar7 = pfVar3 + 1;
    if (uVar6 != 1) {
      pfVar7 = pfVar3 + 3;
    }
    pfVar1 = pfVar3 + 2;
    if (uVar6 != 2) {
      pfVar1 = pfVar7;
    }
    if (uVar6 != 0) {
      pfVar3 = pfVar1;
    }
    pfVar7 = pfVar2 + 1;
    if (iVar5 != 1) {
      pfVar7 = pfVar2 + 3;
    }
    local_60[lVar11] = fVar12 * (*pfVar8 + *pfVar3);
    pfVar3 = pfVar2 + 2;
    if (iVar5 != 2) {
      pfVar3 = pfVar7;
    }
    if (iVar5 != 0) {
      pfVar2 = pfVar3;
    }
    param_2 = param_2 + lVar9 * 4;
    pfVar3 = param_2 + 1;
    if (uVar6 != 1) {
      pfVar3 = param_2 + 3;
    }
    pfVar7 = param_2 + 2;
    if (uVar6 != 2) {
      pfVar7 = pfVar3;
    }
    if (uVar6 != 0) {
      param_2 = pfVar7;
    }
    fVar12 = fVar12 * (*pfVar2 + *param_2);
  }
  else {
    fVar14 = fVar14 + 1.0;
    fVar12 = SQRT(fVar14);
    if (NAN(fVar12)) {
      fVar12 = sqrtf(fVar14);
    }
    fVar14 = 0.5 / fVar12;
    local_60[0] = fVar14 * (param_2[6] - param_2[9]);
    local_60[1] = fVar14 * (param_2[8] - param_2[2]);
    local_60[2] = fVar14 * (param_2[1] - param_2[4]);
    fVar12 = fVar12 * 0.5;
    lVar9 = 3;
  }
  local_60[lVar9] = fVar12;
  param_1[1] = CONCAT44(local_60[3],local_60[2]);
  *param_1 = CONCAT44(local_60[1],local_60[0]);
  return;
}


