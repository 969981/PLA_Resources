/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cb3d8; name: FUN_032cb3d8
 */


void FUN_032cb3d8(undefined8 *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float local_60 [4];
  
  fVar13 = *param_2;
  fVar15 = param_2[5];
  fVar18 = fVar13 + fVar15 + param_2[10];
  if (fVar18 <= 0.0) {
    pfVar2 = param_2 + (ulong)(fVar13 < fVar15) * 4 + 1;
    if (fVar15 <= fVar13) {
      pfVar2 = param_2 + (ulong)(fVar13 < fVar15) * 4;
    }
    uVar7 = 2;
    if (param_2[10] <= *pfVar2) {
      uVar7 = (uint)(fVar13 < fVar15);
    }
    uVar11 = (ulong)uVar7;
    pfVar2 = param_2 + uVar11 * 4;
    iVar4 = *(int *)((long)&DAT_039c3370 + uVar11 * 4);
    lVar12 = (long)iVar4;
    pfVar3 = param_2 + lVar12 * 4;
    iVar5 = *(int *)((long)&DAT_039c3370 + lVar12 * 4);
    lVar10 = (long)iVar5;
    pfVar8 = pfVar2 + 1;
    if (uVar7 != 1) {
      pfVar8 = pfVar2 + 3;
    }
    pfVar9 = pfVar2 + 2;
    if (uVar7 != 2) {
      pfVar9 = pfVar8;
    }
    pfVar8 = pfVar2;
    if (uVar7 != 0) {
      pfVar8 = pfVar9;
    }
    fVar13 = *pfVar8;
    pfVar8 = pfVar3 + 1;
    if (iVar4 != 1) {
      pfVar8 = pfVar3 + 3;
    }
    pfVar9 = pfVar3 + 2;
    if (iVar4 != 2) {
      pfVar9 = pfVar8;
    }
    pfVar8 = pfVar3;
    if (iVar4 != 0) {
      pfVar8 = pfVar9;
    }
    fVar18 = *pfVar8;
    if (iVar5 == 0) {
      fVar18 = (fVar13 - (fVar18 + *param_2)) + 1.0;
      fVar13 = SQRT(fVar18);
      if (NAN(fVar13)) {
        fVar13 = sqrtf(fVar18);
      }
      *(float *)((ulong)local_60 | uVar11 << 2) = fVar13 * 0.5;
      pfVar8 = pfVar3;
    }
    else if (iVar5 == 2) {
      fVar18 = (fVar13 - (fVar18 + param_2[10])) + 1.0;
      fVar13 = SQRT(fVar18);
      if (NAN(fVar13)) {
        fVar13 = sqrtf(fVar18);
      }
      *(float *)((ulong)local_60 | uVar11 << 2) = fVar13 * 0.5;
      pfVar8 = pfVar3 + 2;
    }
    else if (iVar5 == 1) {
      fVar18 = (fVar13 - (fVar18 + param_2[5])) + 1.0;
      fVar13 = SQRT(fVar18);
      if (NAN(fVar13)) {
        fVar13 = sqrtf(fVar18);
      }
      *(float *)((ulong)local_60 | uVar11 << 2) = fVar13 * 0.5;
      pfVar8 = pfVar3 + 1;
    }
    else {
      fVar18 = (fVar13 - (fVar18 + param_2[lVar10 * 4 + 3])) + 1.0;
      fVar13 = SQRT(fVar18);
      if (NAN(fVar13)) {
        fVar13 = sqrtf(fVar18);
      }
      *(float *)((ulong)local_60 | uVar11 << 2) = fVar13 * 0.5;
      pfVar8 = pfVar3 + 3;
    }
    fVar13 = 0.5 / fVar13;
    if (iVar4 == 0) {
      fVar18 = param_2[lVar10 * 4];
      pfVar9 = pfVar2;
    }
    else if (iVar4 == 2) {
      fVar18 = param_2[lVar10 * 4 + 2];
      pfVar9 = pfVar2 + 2;
    }
    else if (iVar4 == 1) {
      fVar18 = param_2[lVar10 * 4 + 1];
      pfVar9 = pfVar2 + 1;
    }
    else {
      fVar18 = param_2[lVar10 * 4 + 3];
      pfVar9 = pfVar2 + 3;
    }
    local_60[3] = fVar13 * (*pfVar8 - fVar18);
    pfVar8 = pfVar3 + 1;
    if (uVar7 != 1) {
      pfVar8 = pfVar3 + 3;
    }
    pfVar1 = pfVar3 + 2;
    if (uVar7 != 2) {
      pfVar1 = pfVar8;
    }
    if (uVar7 != 0) {
      pfVar3 = pfVar1;
    }
    pfVar8 = pfVar2 + 1;
    if (iVar5 != 1) {
      pfVar8 = pfVar2 + 3;
    }
    local_60[lVar12] = fVar13 * (*pfVar9 + *pfVar3);
    pfVar3 = pfVar2 + 2;
    if (iVar5 != 2) {
      pfVar3 = pfVar8;
    }
    if (iVar5 != 0) {
      pfVar2 = pfVar3;
    }
    param_2 = param_2 + lVar10 * 4;
    pfVar3 = param_2 + 1;
    if (uVar7 != 1) {
      pfVar3 = param_2 + 3;
    }
    pfVar8 = param_2 + 2;
    if (uVar7 != 2) {
      pfVar8 = pfVar3;
    }
    if (uVar7 != 0) {
      param_2 = pfVar8;
    }
    fVar13 = fVar13 * (*pfVar2 + *param_2);
  }
  else {
    fVar18 = fVar18 + 1.0;
    fVar13 = SQRT(fVar18);
    if (NAN(fVar13)) {
      fVar13 = sqrtf(fVar18);
    }
    fVar18 = 0.5 / fVar13;
    local_60[0] = fVar18 * (param_2[6] - param_2[9]);
    local_60[1] = fVar18 * (param_2[8] - param_2[2]);
    local_60[2] = fVar18 * (param_2[1] - param_2[4]);
    fVar13 = fVar13 * 0.5;
    lVar10 = 3;
  }
  local_60[lVar10] = fVar13;
  fVar15 = local_60[0] * local_60[0];
  fVar14 = local_60[1] * local_60[1];
  auVar17._4_4_ = fVar14;
  auVar17._0_4_ = fVar15;
  auVar17._8_4_ = local_60[2] * local_60[2];
  auVar17._12_4_ = local_60[3] * local_60[3];
  auVar6._4_4_ = fVar14;
  auVar6._0_4_ = fVar15;
  auVar6._8_4_ = local_60[2] * local_60[2];
  auVar6._12_4_ = local_60[3] * local_60[3];
  auVar17 = NEON_ext(auVar17,auVar6,8,1);
  fVar18 = auVar17._0_4_ + auVar17._4_4_;
  fVar13 = fVar15 + fVar14 + fVar18;
  fVar18 = fVar15 + fVar14 + fVar18;
  uVar16 = NEON_frsqrte(CONCAT44(fVar18,fVar13),4);
  fVar15 = (float)uVar16;
  fVar14 = (float)((ulong)uVar16 >> 0x20);
  uVar16 = NEON_frsqrts(CONCAT44(fVar18,fVar13),CONCAT44(fVar14 * fVar14,fVar15 * fVar15),4);
  fVar15 = fVar15 * (float)uVar16;
  fVar14 = fVar14 * (float)((ulong)uVar16 >> 0x20);
  uVar16 = NEON_frsqrts(CONCAT44(fVar18,fVar13),CONCAT44(fVar14 * fVar14,fVar15 * fVar15),4);
  fVar15 = (float)uVar16 * fVar15;
  fVar14 = (float)((ulong)uVar16 >> 0x20) * fVar14;
  param_1[1] = CONCAT44(local_60[3] * fVar14,local_60[2] * fVar15);
  *param_1 = CONCAT44(local_60[1] * fVar14,local_60[0] * fVar15);
  return;
}


