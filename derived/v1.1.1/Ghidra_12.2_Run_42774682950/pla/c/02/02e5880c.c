/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5880c; name: FUN_02e5880c
 */


void FUN_02e5880c(float *param_1,float *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  float *pfVar8;
  long lVar9;
  float *pfVar10;
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
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 local_d8;
  float local_d0;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float local_bc;
  float fStack_b8;
  float local_b4;
  float fStack_b0;
  float local_ac;
  float fStack_a8;
  
  fVar13 = param_2[2];
  fVar11 = param_2[5];
  fVar29 = *param_2;
  fVar28 = param_2[1];
  fVar32 = param_2[3];
  fVar33 = param_2[4];
  param_1[0x1f] = 0.0;
  param_1[0x20] = 0.0;
  fVar16 = param_1[0x1d];
  iVar3 = (int)param_1[0x1e] + -1;
  fVar17 = param_1[0x1b];
  fVar18 = param_1[0x1c];
  fVar12 = fVar13;
  if (-1 < iVar3) {
    lVar9 = (long)iVar3;
    pfVar10 = param_1 + (long)iVar3 * 3 + 5;
    pfVar8 = param_1 + (long)((int)param_1[0x1e] + -2) * 3 + 5;
    fVar27 = fVar11;
    do {
      fVar15 = pfVar10[-2];
      fVar30 = pfVar10[-1];
      fVar21 = fVar15 - fVar17;
      fVar31 = *pfVar10;
      fVar22 = pfVar8[-2] - fVar15;
      fVar24 = *pfVar8 - fVar31;
      fVar26 = fVar30 - fVar18;
      fVar25 = fVar31 - fVar16;
      fVar23 = pfVar8[-1] - fVar30;
      fVar14 = SQRT(fVar21 * fVar21 + fVar26 * fVar26 + fVar25 * fVar25);
      fVar20 = SQRT(fVar22 * fVar22 + fVar23 * fVar23 + fVar24 * fVar24) * fVar14;
      if (0.001 < fVar20) {
        fVar16 = (float)NEON_fminnm(DAT_042a5e50,param_1[0x1f] * 3.1415927);
        fVar19 = (fVar22 * fVar21 + fVar26 * fVar23 + fVar25 * fVar24) / fVar20;
        param_1[0x20] =
             param_1[0x20] + fVar14 * ((DAT_042a5e54 * fVar16 - fVar16) / DAT_042a5e50 + 1.0);
        bVar4 = false;
        bVar5 = true;
        bVar6 = false;
        if (fVar19 < 0.999) {
          bVar4 = false;
          bVar5 = false;
          bVar6 = true;
          if (!NAN(fVar19)) {
            bVar4 = fVar19 < -0.999;
            bVar5 = fVar19 == -0.999;
            bVar6 = false;
          }
        }
        fVar17 = fVar15;
        fVar18 = fVar30;
        fVar16 = fVar31;
        if (!bVar5 && bVar4 == bVar6) {
          fVar11 = (float)NEON_fminnm(fVar19,0x3f800000);
          if (fVar11 <= -1.0) {
            fVar11 = -1.0;
          }
          fVar11 = acosf(fVar11);
          param_1[lVar9 + 0x23] = fVar11;
          fVar11 = (float)NEON_fminnm(param_1[0x1f] + fVar11 * 0.31830987,0x3f800000);
          fVar20 = 1.0 / fVar20;
          param_1[0x1f] = fVar11;
          fVar15 = fVar20 * (fVar22 * fVar25 - fVar24 * fVar21);
          fVar12 = fVar20 * (fVar23 * fVar21 - fVar22 * fVar26);
          fVar20 = fVar20 * (fVar24 * fVar26 - fVar23 * fVar25);
          fVar11 = SQRT(fVar20 * fVar20 + fVar15 * fVar15 + fVar12 * fVar12);
          if (fVar11 <= 0.0) {
            local_d0 = 0.0;
            local_d8 = 0x3f80000000000000;
          }
          else {
            local_d0 = 1.0 / fVar11;
            local_d8 = CONCAT44(local_d0 * fVar15,local_d0 * fVar20);
            local_d0 = local_d0 * fVar12;
          }
          FUN_02e58c5c(fVar11,fVar19,&local_c8,&local_d8);
          fVar12 = fVar21 + fVar32;
          fVar15 = fVar21 + fVar29;
          fVar28 = fVar26 + fVar28;
          fVar31 = fVar26 + fVar33;
          fVar30 = fVar25 + fVar13;
          fVar27 = fVar25 + fVar27;
          fVar32 = local_c8 * fVar21 + fVar26 * local_bc + fVar25 * fStack_b0;
          fVar11 = local_c0 * fVar21 + fVar26 * local_b4 + fVar25 * fStack_a8;
          fVar33 = fStack_c4 * fVar21 + fVar26 * fStack_b8 + fVar25 * local_ac;
          fVar13 = (local_c0 * fVar15 + fVar28 * local_b4 + fVar30 * fStack_a8) - fVar11;
          fVar29 = (local_c8 * fVar15 + fVar28 * local_bc + fVar30 * fStack_b0) - fVar32;
          fVar28 = (fStack_c4 * fVar15 + fVar28 * fStack_b8 + fVar30 * local_ac) - fVar33;
          fVar33 = (fStack_c4 * fVar12 + fVar31 * fStack_b8 + fVar27 * local_ac) - fVar33;
          fVar32 = (local_c8 * fVar12 + fVar31 * local_bc + fVar27 * fStack_b0) - fVar32;
          fVar11 = (local_c0 * fVar12 + fVar31 * local_b4 + fVar27 * fStack_a8) - fVar11;
          fVar27 = fVar11;
          fVar12 = fVar13;
        }
      }
      lVar9 = lVar9 + -1;
      pfVar10 = pfVar10 + -3;
      pfVar8 = pfVar8 + -3;
    } while (-1 < (int)lVar9);
  }
  fVar27 = DAT_042a5e54;
  fVar13 = DAT_042a5e50;
  fVar17 = fVar17 - *param_1;
  fVar18 = fVar18 - param_1[1];
  fVar16 = fVar16 - param_1[2];
  fVar15 = SQRT(fVar17 * fVar17 + fVar18 * fVar18 + fVar16 * fVar16);
  if (fVar15 <= 0.0) {
    *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)param_2;
    uVar1 = *(undefined8 *)(param_2 + 2);
    uVar2 = *(undefined8 *)(param_2 + 4);
    uVar7 = *(undefined8 *)(param_2 + 6);
    param_1[0x54] = param_2[8];
    *(undefined8 *)(param_1 + 0x4e) = uVar1;
    *(undefined8 *)(param_1 + 0x50) = uVar2;
    *(undefined8 *)(param_1 + 0x52) = uVar7;
  }
  else {
    param_1[0x4c] = fVar29;
    param_1[0x4d] = fVar28;
    param_1[0x4e] = fVar12;
    param_1[0x4f] = fVar32;
    fVar12 = (float)NEON_fminnm(fVar13,param_1[0x1f] * 3.1415927);
    fVar13 = param_1[0x20] + fVar15 * ((fVar27 * fVar12 - fVar12) / fVar13 + 1.0);
    param_1[0x20] = fVar13;
    fVar13 = fVar13 / fVar15;
    param_1[0x52] = *param_1 + fVar17 * fVar13;
    param_1[0x53] = param_1[1] + fVar18 * fVar13;
    param_1[0x54] = param_1[2] + fVar16 * fVar13;
    param_1[0x50] = fVar33;
    param_1[0x51] = fVar11;
  }
  return;
}


