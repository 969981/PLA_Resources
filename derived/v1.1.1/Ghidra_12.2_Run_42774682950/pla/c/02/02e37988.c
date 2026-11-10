/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e37988; name: FUN_02e37988
 */


void FUN_02e37988(int *param_1,long *param_2)

{
  float *pfVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  undefined2 uVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
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
  
  iVar2 = *param_1;
  if (iVar2 == 2) {
    bVar3 = *(byte *)(param_2 + 1);
    if (bVar3 != 0) {
      uVar4 = *(ushort *)((long)param_2 + 0x12);
      fVar11 = 1.0 / (float)uVar4;
      uVar9 = 0;
      do {
        fVar12 = (float)param_1[4];
        fVar15 = 0.0;
        if (-37.0 <= (float)param_1[1] * -0.01) {
          uVar8 = (uint)((float)param_1[1] * -278663.5 + 1.0653532e+09);
          fVar15 = (float)(uVar8 & 0x7fffff | 0x3f800000);
          fVar15 = (fVar15 * (fVar15 * 0.32518977 + 0.020805772) + 0.65304345) *
                   (float)(uVar8 & 0xff800000);
        }
        fVar13 = 0.0;
        if (-37.0 <= (float)param_1[2] * -0.01) {
          uVar8 = (uint)((float)param_1[2] * -278663.5 + 1.0653532e+09);
          fVar13 = (float)(uVar8 & 0x7fffff | 0x3f800000);
          fVar13 = (fVar13 * (fVar13 * 0.32518977 + 0.020805772) + 0.65304345) *
                   (float)(uVar8 & 0xff800000);
        }
        if (uVar4 != 0) {
          fVar14 = (float)param_1[3] - fVar12;
          fVar15 = fVar15 - fVar13;
          pfVar1 = (float *)(*param_2 + uVar9 * *(ushort *)(param_2 + 2) * 4);
          pfVar7 = pfVar1;
          do {
            fVar16 = ABS(*pfVar7 * fVar12);
            fVar17 = 0.0;
            if (fVar16 <= 37.0) {
              uVar8 = (uint)(fVar16 * -12102203.0 + 1.0653532e+09);
              fVar16 = (float)(uVar8 & 0x7fffff | 0x3f800000);
              fVar17 = (fVar16 * (fVar16 * 0.32518977 + 0.020805772) + 0.65304345) *
                       (float)(uVar8 & 0xff800000);
            }
            fVar16 = 1.0 - fVar17;
            if (0.0 <= *pfVar7 * fVar12) {
              fVar16 = fVar17 - 1.0;
            }
            fVar16 = fVar16 * fVar13;
            fVar12 = fVar12 + fVar14 * fVar11;
            fVar13 = fVar13 + fVar15 * fVar11;
            pfVar6 = pfVar7 + 1;
            *pfVar7 = fVar16;
            pfVar7 = pfVar6;
          } while (pfVar6 < pfVar1 + uVar4);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != bVar3);
    }
  }
  else if (iVar2 == 3) {
    bVar3 = *(byte *)(param_2 + 1);
    if (bVar3 != 0) {
      uVar4 = *(ushort *)((long)param_2 + 0x12);
      fVar11 = 1.0 / (float)uVar4;
      uVar9 = 0;
      do {
        fVar12 = (float)param_1[4];
        fVar15 = 0.0;
        if (-37.0 <= (float)param_1[1] * -0.01) {
          uVar8 = (uint)((float)param_1[1] * -278663.5 + 1.0653532e+09);
          fVar15 = (float)(uVar8 & 0x7fffff | 0x3f800000);
          fVar15 = (fVar15 * (fVar15 * 0.32518977 + 0.020805772) + 0.65304345) *
                   (float)(uVar8 & 0xff800000);
        }
        fVar13 = 0.0;
        if (-37.0 <= (float)param_1[2] * -0.01) {
          uVar8 = (uint)((float)param_1[2] * -278663.5 + 1.0653532e+09);
          fVar13 = (float)(uVar8 & 0x7fffff | 0x3f800000);
          fVar13 = (fVar13 * (fVar13 * 0.32518977 + 0.020805772) + 0.65304345) *
                   (float)(uVar8 & 0xff800000);
        }
        fVar16 = (float)param_1[5] * 0.03 + 2.0;
        fVar14 = 0.0;
        if (-37.0 <= fVar16) {
          uVar8 = (uint)(fVar16 * 8388608.0 + 1.0653532e+09);
          fVar14 = (float)(uVar8 & 0x7fffff | 0x3f800000);
          fVar14 = (fVar14 * (fVar14 * 0.32518977 + 0.020805772) + 0.65304345) *
                   (float)(uVar8 & 0xff800000);
        }
        fVar16 = 0.0;
        if (-37.0 <= fVar14 * -0.2) {
          uVar8 = (uint)(fVar14 * -2420440.8 + 1.0653532e+09);
          fVar16 = (float)(uVar8 & 0x7fffff | 0x3f800000);
          fVar16 = (fVar16 * (fVar16 * 0.32518977 + 0.020805772) + 0.65304345) *
                   (float)(uVar8 & 0xff800000);
        }
        if (uVar4 != 0) {
          fVar17 = (float)param_1[3] - fVar12;
          fVar15 = fVar15 - fVar13;
          pfVar1 = (float *)(*param_2 + uVar9 * *(ushort *)(param_2 + 2) * 4);
          pfVar7 = pfVar1;
          do {
            fVar18 = 1.0 / fVar14;
            if (*pfVar7 * fVar12 != -0.2) {
              fVar18 = *pfVar7 * fVar12 + 0.2;
              fVar19 = fVar18 * fVar14;
              fVar20 = 0.0;
              if (fVar19 <= 37.0) {
                uVar8 = (uint)(fVar19 * -12102203.0 + 1.0653532e+09);
                fVar20 = (float)(uVar8 & 0x7fffff | 0x3f800000);
                fVar20 = (fVar20 * (fVar20 * 0.32518977 + 0.020805772) + 0.65304345) *
                         (float)(uVar8 & 0xff800000);
              }
              fVar18 = fVar18 / (1.0 - fVar20);
            }
            fVar18 = (float)NEON_fminnm(fVar18 - 0.2 / (1.0 - fVar16),0x3f800000);
            if (fVar18 <= -1.0) {
              fVar18 = -1.0;
            }
            fVar18 = fVar18 * fVar13;
            fVar12 = fVar12 + fVar17 * fVar11;
            fVar13 = fVar13 + fVar15 * fVar11;
            pfVar6 = pfVar7 + 1;
            *pfVar7 = fVar18;
            pfVar7 = pfVar6;
          } while (pfVar6 < pfVar1 + uVar4);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != bVar3);
    }
  }
  else if (iVar2 == 4) {
    bVar3 = *(byte *)(param_2 + 1);
    if (bVar3 != 0) {
      uVar5 = *(undefined2 *)((long)param_2 + 0x12);
      lVar10 = 0;
      do {
        FUN_02e380e0(param_1,*param_2 + lVar10 * (ulong)*(ushort *)(param_2 + 2),uVar5);
        lVar10 = lVar10 + 4;
      } while ((ulong)bVar3 * 4 != lVar10);
    }
  }
  else if ((iVar2 == 1) && (bVar3 = *(byte *)(param_2 + 1), bVar3 != 0)) {
    uVar5 = *(undefined2 *)((long)param_2 + 0x12);
    lVar10 = 0;
    do {
      FUN_02e37f04(param_1,*param_2 + lVar10 * (ulong)*(ushort *)(param_2 + 2),uVar5);
      lVar10 = lVar10 + 4;
    } while ((ulong)bVar3 * 4 != lVar10);
  }
  param_1[2] = param_1[1];
  param_1[4] = param_1[3];
  param_1[6] = param_1[5];
  return;
}


