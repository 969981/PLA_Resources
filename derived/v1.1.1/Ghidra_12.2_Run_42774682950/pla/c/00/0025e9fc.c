/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0025e9fc; name: FUN_0025e9fc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0025e9fc(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ushort *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float *pfVar5;
  float *pfVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
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
  
  uVar4 = _DAT_03889a80;
  uVar3 = _UNK_03888d18;
  uVar2 = _DAT_03888d10;
  fVar15 = (float)param_1;
  if ((ulong)param_4[8] < 2) {
    fVar17 = *(float *)(param_4 + 0xc);
    fVar10 = *(float *)(param_4 + 0xe);
  }
  else {
    fVar10 = 0.0;
    lVar8 = (ulong)param_4[8] - 1;
    if ((int)lVar8 < 1) {
      fVar17 = 0.0;
    }
    else {
      lVar9 = 1;
      pfVar5 = *(float **)(param_4 + 0xc);
      do {
        pfVar6 = pfVar5;
        pfVar5 = pfVar6 + 0xe;
        fVar11 = *pfVar6;
        if (lVar8 <= lVar9) break;
        lVar9 = lVar9 + 1;
      } while (*pfVar5 <= fVar15 || fVar15 < fVar11);
      fVar17 = 0.0;
      if (pfVar5 != (float *)&DAT_00000038) {
        uVar1 = *(undefined8 *)(pfVar6 + 7);
        fVar10 = (fVar15 - fVar11) / (*pfVar5 - fVar11);
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
        if (1.0 < fVar10) {
          fVar10 = 1.0;
        }
        fVar11 = 1.0 - fVar10;
        fVar13 = fVar11 * fVar11 * fVar11;
        fVar12 = fVar11 * fVar10 * 3.0 * fVar11;
        fVar11 = fVar11 * fVar10 * fVar10 * 3.0;
        fVar10 = fVar10 * fVar10 * fVar10;
        fVar17 = (float)uVar1 * fVar10 +
                 pfVar6[5] * fVar13 + (pfVar6[5] + pfVar6[9]) * fVar12 +
                 (pfVar6[7] + pfVar6[0xb]) * fVar11;
        fVar10 = (float)((ulong)uVar1 >> 0x20) * fVar10 +
                 pfVar6[6] * fVar13 + (pfVar6[6] + pfVar6[10]) * fVar12 +
                 (pfVar6[8] + pfVar6[0xc]) * fVar11;
      }
    }
  }
  fVar17 = -fVar17;
  fVar16 = (float)_UNK_03889a88;
  fVar10 = -fVar10;
  fVar11 = (float)FUN_0025ae80(param_1,param_4 + 0x10);
  fVar12 = (float)FUN_0025ae80(param_1,param_4 + 0x18);
  fVar13 = (float)FUN_0025ae80(param_1,param_4 + 0x28);
  if ((ulong)*param_4 < 2) {
    fVar14 = *(float *)(param_4 + 4);
    fVar18 = *(float *)(param_4 + 6);
  }
  else {
    lVar8 = (ulong)*param_4 - 1;
    if ((int)lVar8 < 1) {
      fVar18 = 0.0;
      fVar14 = 0.0;
    }
    else {
      fVar18 = 0.0;
      lVar9 = 1;
      pfVar5 = *(float **)(param_4 + 4);
      do {
        pfVar6 = pfVar5;
        pfVar5 = pfVar6 + 0xe;
        fVar19 = *pfVar6;
        if (lVar8 <= lVar9) break;
        lVar9 = lVar9 + 1;
      } while (*pfVar5 <= fVar15 || fVar15 < fVar19);
      fVar14 = 0.0;
      if (pfVar5 != (float *)&DAT_00000038) {
        uVar1 = *(undefined8 *)(pfVar6 + 7);
        fVar15 = (fVar15 - fVar19) / (*pfVar5 - fVar19);
        if (fVar15 <= 0.0) {
          fVar15 = 0.0;
        }
        if (1.0 < fVar15) {
          fVar15 = 1.0;
        }
        fVar18 = 1.0 - fVar15;
        fVar19 = fVar18 * fVar18 * fVar18;
        fVar20 = fVar18 * fVar15 * 3.0 * fVar18;
        fVar18 = fVar18 * fVar15 * fVar15 * 3.0;
        fVar15 = fVar15 * fVar15 * fVar15;
        fVar14 = (float)uVar1 * fVar15 +
                 pfVar6[5] * fVar19 + (pfVar6[5] + pfVar6[9]) * fVar20 +
                 (pfVar6[7] + pfVar6[0xb]) * fVar18;
        fVar18 = (float)((ulong)uVar1 >> 0x20) * fVar15 +
                 pfVar6[6] * fVar19 + (pfVar6[6] + pfVar6[10]) * fVar20 +
                 (pfVar6[8] + pfVar6[0xc]) * fVar18;
      }
    }
  }
  fVar15 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_04372cd8);
  uVar7 = (ulong)(fVar13 * (fVar15 / *(float *)PTR_FloatDegree180_04372ce0));
  pfVar5 = (float *)(PTR_SinCosSampleTable_04372ce8 + (uVar7 >> 0x18 & 0xff) * 0x10);
  fVar15 = (float)((uint)uVar7 & 0xffffff) * 5.9604645e-08;
  fVar13 = pfVar5[1] + pfVar5[3] * fVar15;
  fVar15 = *pfVar5 + pfVar5[2] * fVar15;
  fVar19 = fVar11 * fVar15;
  fVar11 = fVar11 * fVar13;
  fVar20 = (float)uVar4;
  fVar21 = (float)((ulong)uVar4 >> 0x20);
  fVar13 = fVar12 * fVar13;
  fVar12 = fVar12 * fVar15;
  fVar15 = (float)uVar2;
  fVar22 = (float)((ulong)uVar2 >> 0x20);
  fVar23 = (float)uVar3;
  param_3[5] = CONCAT44(fVar17 * 0.0 + fVar10 * 0.0 + 0.0 + 0.0,fVar23 + fVar16 * 0.0 + 0.0 + 0.0);
  param_3[4] = CONCAT44(fVar22 + fVar21 * 0.0 + 0.0 + 0.0,fVar15 + fVar20 * 0.0 + 0.0 + 0.0);
  param_3[1] = CONCAT44(fVar14 + (fVar17 * fVar19 - fVar10 * fVar13) + 0.0,
                        (fVar16 * fVar19 - fVar13 * 0.0) + fVar23 * 0.0 + 0.0);
  *param_3 = CONCAT44((fVar21 * fVar19 - fVar13 * 1.0) + fVar22 * 0.0 + 0.0,
                      (fVar20 * fVar19 - fVar13 * 0.0) + fVar15 * 0.0 + 0.0);
  param_3[3] = CONCAT44(fVar18 + fVar17 * fVar11 + fVar10 * fVar12 + 0.0,
                        fVar16 * fVar11 + fVar12 * 0.0 + fVar23 * 0.0 + 0.0);
  param_3[2] = CONCAT44(fVar21 * fVar11 + fVar12 * 1.0 + fVar22 * 0.0 + 0.0,
                        fVar20 * fVar11 + fVar12 * 0.0 + fVar15 * 0.0 + 0.0);
  return;
}


