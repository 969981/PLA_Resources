/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f1fe90; name: FUN_01f1fe90
 */


void FUN_01f1fe90(long param_1,long param_2)

{
  float *pfVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  float *pfVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  
  lVar7 = *(long *)(param_2 + 0x40);
  bVar4 = false;
  bVar3 = true;
  if (lVar7 == -0x259a23c268ea017d) goto LAB_01f1fecc;
  if (lVar7 == -0x7d221732069b6fa1) {
    bVar2 = true;
LAB_01f20148:
    bVar4 = true;
  }
  else if (lVar7 == -0x3b833644f85d819e) {
LAB_01f1fecc:
    bVar2 = lVar7 == 0x311437a7ba604481;
    if (lVar7 == -0x3b831d44f85d5723) goto LAB_01f20148;
  }
  else {
    bVar3 = lVar7 == 0x311437a7ba604481;
    bVar4 = lVar7 == -0x7d221732069b6fa1;
    if (lVar7 != 0x2b45a449379cbf8d) goto LAB_01f1fecc;
    bVar2 = true;
  }
  fVar13 = *(float *)(param_1 + 0x50);
  fVar8 = *(float *)(param_1 + 0x48);
  fVar11 = *(float *)(param_1 + 0x4c);
  fVar14 = -1.0;
  fVar9 = fVar11;
  if (fVar13 <= fVar11) {
    fVar14 = 0.0;
    fVar9 = fVar13;
    fVar13 = fVar11;
  }
  fVar11 = fVar8;
  fVar10 = fVar13;
  if (fVar13 <= fVar8) {
    fVar11 = fVar13;
    fVar10 = fVar8;
  }
  local_34 = *(float *)(param_1 + 0x54);
  fVar15 = -0.33333334 - fVar14;
  if (fVar13 <= fVar8) {
    fVar15 = fVar14;
  }
  fVar13 = fVar11;
  if (fVar9 <= fVar11) {
    fVar13 = fVar9;
  }
  fVar14 = (fVar10 - fVar13) / (fVar10 + 1e-20);
  local_38 = ABS(fVar15 + (fVar11 - fVar9) / ((fVar10 - fVar13) * 6.0 + 1e-20));
  if (bVar3) {
    local_38 = local_38 * *(float *)(param_2 + 0x48);
    pfVar6 = &local_40;
    if (local_38 <= 1.0) {
      pfVar6 = &local_38;
    }
    local_40 = 1.0;
    local_3c = 0.0;
    if (local_38 < 0.0) {
      pfVar6 = &local_3c;
    }
    local_38 = fVar14 * *(float *)(param_2 + 0x4c);
    fVar9 = *pfVar6;
    local_40 = 1.0;
    local_3c = 0.0;
    pfVar6 = &local_40;
    if (local_38 <= 1.0) {
      pfVar6 = &local_38;
    }
    if (local_38 < 0.0) {
      pfVar6 = &local_3c;
    }
    local_38 = *(float *)(param_2 + 0x50) * fVar10;
    fVar13 = *pfVar6;
  }
  else {
    local_38 = local_38 + *(float *)(param_2 + 0x48);
    pfVar6 = &local_40;
    if (local_38 <= 1.0) {
      pfVar6 = &local_38;
    }
    local_40 = 1.0;
    local_3c = 0.0;
    if (local_38 < 0.0) {
      pfVar6 = &local_3c;
    }
    local_38 = fVar14 + *(float *)(param_2 + 0x4c);
    fVar9 = *pfVar6;
    local_40 = 1.0;
    local_3c = 0.0;
    pfVar6 = &local_40;
    if (local_38 <= 1.0) {
      pfVar6 = &local_38;
    }
    if (local_38 < 0.0) {
      pfVar6 = &local_3c;
    }
    fVar13 = *pfVar6;
    local_38 = *(float *)(param_2 + 0x50) + fVar10;
  }
  local_40 = 1.0;
  local_3c = 0.0;
  pfVar6 = &local_40;
  if (local_38 <= 1.0) {
    pfVar6 = &local_38;
  }
  pfVar1 = &local_3c;
  if (0.0 <= local_38) {
    pfVar1 = pfVar6;
  }
  fVar8 = *pfVar1;
  fVar14 = *(float *)(param_2 + 0x54) * local_34;
  if (!bVar2) {
    fVar14 = *(float *)(param_2 + 0x54) + local_34;
  }
  local_34 = fVar14;
  if (bVar4) {
    local_3c = 1.0;
    local_38 = 0.0;
    pfVar6 = &local_3c;
    if (fVar14 <= 1.0) {
      pfVar6 = &local_34;
    }
    if (fVar14 < 0.0) {
      pfVar6 = &local_38;
    }
    fVar14 = *pfVar6;
  }
  if (fVar13 == 0.0) {
    uVar12 = CONCAT44(fVar8,fVar8);
    goto LAB_01f200c0;
  }
  local_34 = fVar14;
  fVar9 = fmodf(fVar9,1.0);
  uVar5 = (uint)(fVar9 / 0.16666667);
  fVar10 = fVar9 / 0.16666667 - (float)(int)uVar5;
  fVar9 = (1.0 - fVar13) * fVar8;
  fVar11 = fVar8 * (1.0 - fVar13 * fVar10);
  if (uVar5 == 3) {
    fVar13 = fVar8;
LAB_01f200ac:
    fVar10 = fVar11;
    fVar15 = fVar9;
    fVar9 = fVar13;
    goto switchD_01f2011c_caseD_0;
  }
  fVar15 = fVar8;
  if (uVar5 < 5) {
    fVar13 = fVar8 * (1.0 - fVar13 * (1.0 - fVar10));
    fVar10 = fVar13;
    switch(uVar5) {
    case 1:
      fVar10 = fVar8;
      fVar15 = fVar11;
      break;
    case 2:
      fVar11 = fVar8;
      goto LAB_01f200ac;
    case 3:
      goto switchD_01f2011c_caseD_3;
    case 4:
      fVar10 = fVar9;
      fVar15 = fVar13;
      fVar9 = fVar8;
    }
  }
  else {
switchD_01f2011c_caseD_3:
    fVar10 = fVar9;
    fVar9 = fVar11;
  }
switchD_01f2011c_caseD_0:
  uVar12 = CONCAT44(fVar10,fVar15);
  fVar8 = fVar9;
LAB_01f200c0:
  *(undefined8 *)(param_1 + 0x48) = uVar12;
  *(float *)(param_1 + 0x50) = fVar8;
  *(float *)(param_1 + 0x54) = fVar14;
  return;
}


