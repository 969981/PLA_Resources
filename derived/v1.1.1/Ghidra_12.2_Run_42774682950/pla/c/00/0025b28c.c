/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0025b28c; name: FUN_0025b28c
 */


int FUN_0025b28c(long *param_1,float *param_2,int *param_3,long param_4,uint *param_5)

{
  float *pfVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  float *pfVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  
  fVar21 = *(float *)(param_1 + 1);
  fVar22 = *(float *)((long)param_1 + 0xc);
  iVar9 = *param_3;
  uVar5 = (**(code **)(*param_1 + 0x50))();
  fVar14 = *(float *)(param_1 + 2);
  uVar5 = iVar9 - (~uVar5 & 1);
  if (fVar14 == 0.0 && 0 < (int)uVar5) {
    uVar10 = (ulong)uVar5;
    pfVar12 = param_2;
    do {
      fVar14 = *pfVar12 - pfVar12[2];
      fVar16 = fVar14 * fVar14 + (pfVar12[1] - pfVar12[3]) * (pfVar12[1] - pfVar12[3]);
      fVar14 = SQRT(fVar16);
      if (NAN(fVar14)) {
        fVar14 = sqrtf(fVar16);
      }
      fVar14 = fVar14 + *(float *)(param_1 + 2);
      uVar10 = uVar10 - 1;
      *(float *)(param_1 + 2) = fVar14;
      pfVar12 = pfVar12 + 2;
    } while (uVar10 != 0);
  }
  fVar22 = fVar22 * fVar14;
  lVar11 = 0;
  iVar9 = -1;
  fVar16 = 0.0;
  lVar6 = 0;
  pfVar12 = param_2;
  fVar19 = 0.0;
  if ((long)(int)uVar5 < 1) {
    return -1;
  }
  while( true ) {
    fVar17 = (*pfVar12 - pfVar12[2]) * (*pfVar12 - pfVar12[2]) +
             (pfVar12[1] - pfVar12[3]) * (pfVar12[1] - pfVar12[3]);
    fVar15 = SQRT(fVar17);
    if (NAN(fVar15)) {
      fVar15 = sqrtf(fVar17);
    }
    fVar17 = fVar19 + fVar15;
    lVar2 = lVar6 + 1;
    iVar13 = (int)lVar6;
    if ((iVar9 < 0) && (fVar21 * fVar14 <= fVar17)) {
      fVar16 = (fVar21 * fVar14 - fVar19) / fVar15;
      iVar9 = iVar13;
    }
    lVar11 = lVar11 + 0x100000000;
    if (fVar22 <= fVar17) break;
    lVar6 = lVar2;
    pfVar12 = pfVar12 + 2;
    fVar19 = fVar17;
    if ((int)uVar5 <= lVar2) {
      return iVar9;
    }
  }
  fVar15 = (fVar22 - (fVar17 - fVar15)) / fVar15;
  pfVar1 = param_2 + (long)iVar9 * 2;
  lVar6 = (long)iVar9;
  fVar14 = (float)*(undefined8 *)pfVar1;
  fVar21 = (float)((ulong)*(undefined8 *)pfVar1 >> 0x20);
  if (iVar13 == iVar9) {
    uVar18 = *(undefined8 *)((long)param_2 + (lVar11 >> 0x1d));
    fVar22 = (float)uVar18 - fVar14;
    fVar19 = (float)((ulong)uVar18 >> 0x20) - fVar21;
    uVar18 = CONCAT44(fVar19 * fVar15 + fVar21,fVar22 * fVar15 + fVar14);
    *pfVar1 = fVar22 * fVar16 + fVar14;
    param_2[lVar6 * 2 + 1] = fVar19 * fVar16 + fVar21;
    lVar11 = lVar11 >> 0x20;
  }
  else {
    uVar20 = *(undefined8 *)(param_2 + lVar6 * 2 + 2);
    uVar18 = *(undefined8 *)pfVar12;
    *pfVar1 = ((float)uVar20 - fVar14) * fVar16 + fVar14;
    param_2[lVar6 * 2 + 1] = ((float)((ulong)uVar20 >> 0x20) - fVar21) * fVar16 + fVar21;
    uVar20 = *(undefined8 *)(pfVar12 + 2);
    fVar14 = (float)uVar18;
    fVar21 = (float)((ulong)uVar18 >> 0x20);
    uVar18 = CONCAT44(fVar21 + ((float)((ulong)uVar20 >> 0x20) - fVar21) * fVar15,
                      fVar14 + ((float)uVar20 - fVar14) * fVar15);
    lVar11 = lVar2;
  }
  *(undefined8 *)(param_2 + lVar11 * 2) = uVar18;
  *param_3 = (int)lVar2;
  uVar5 = *param_5;
  if (0 < (int)uVar5) {
    uVar10 = 0;
    piVar7 = (int *)(param_4 + 0x10);
    iVar8 = 0;
    do {
      iVar4 = *piVar7;
      iVar3 = iVar4 + iVar8;
      if ((iVar8 <= iVar9) && (iVar9 < iVar3)) {
        *(undefined8 *)(piVar7 + -4) = *(undefined8 *)pfVar1;
        *piVar7 = iVar4 - (iVar9 - iVar8);
        *(long *)(piVar7 + -2) = *(long *)(piVar7 + -2) + (long)(iVar9 - iVar8) * 8;
      }
      if (iVar3 <= iVar9) {
        *(undefined1 *)(piVar7 + 1) = 1;
      }
      if (iVar13 < iVar3) {
        param_4 = param_4 + (uVar10 & 0xffffffff) * 0x18;
        *(int *)(param_4 + 0x10) = ((*(int *)(param_4 + 0x10) - iVar8) - iVar4) + (int)lVar2;
        uVar5 = (int)uVar10 + 1;
        break;
      }
      uVar10 = uVar10 + 1;
      piVar7 = piVar7 + 6;
      iVar8 = iVar3;
    } while (uVar5 != uVar10);
  }
  *param_5 = uVar5;
  return iVar9;
}


