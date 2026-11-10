/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e26470; name: FUN_02e26470
 */


void FUN_02e26470(long param_1,long *param_2)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  float *pfVar13;
  long lVar14;
  float *pfVar15;
  float *pfVar16;
  ulong uVar17;
  float *pfVar18;
  float *pfVar19;
  float fVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  
  lVar11 = *(long *)(param_1 + 0x18);
  fVar25 = *(float *)(lVar11 + 8);
  fVar26 = *(float *)(lVar11 + 0xc);
  fVar3 = *(float *)(param_1 + 0x40);
  uVar4 = *(uint *)(param_1 + 0x58);
  uVar5 = *(uint *)(param_1 + 0x38);
  if ((*(char *)(lVar11 + 0x20) == '\0') && ((*(uint *)(param_2 + 1) >> 0xf & 1) != 0)) {
    pfVar18 = (float *)(*param_2 +
                       (ulong)((*(uint *)(param_2 + 1) & 0xff) - 1) *
                       (ulong)*(ushort *)(param_2 + 2) * 4);
    pfVar1 = pfVar18 + *(ushort *)((long)param_2 + 0x12);
    pfVar15 = (float *)(*(long *)(param_1 + 0x50) + (ulong)(uVar5 * (int)fVar3) * 4);
    pfVar16 = pfVar15 + uVar4;
    if (pfVar18 < pfVar1) {
      pfVar13 = pfVar16;
      do {
        lVar11 = (long)pfVar1 - (long)pfVar18 >> 2;
        lVar12 = (long)(pfVar15 + (uint)fVar3) - (long)pfVar13 >> 2;
        uVar10 = (uint)lVar11;
        if (lVar12 <= lVar11) {
          uVar10 = (uint)lVar12;
        }
        if (uVar10 != 0) {
          uVar7 = uVar10 - 1;
          for (uVar2 = uVar10 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            fVar20 = *pfVar13;
            uVar10 = uVar10 - 1;
            *pfVar13 = *pfVar18;
            *pfVar18 = fVar20;
            pfVar13 = pfVar13 + 1;
            pfVar18 = pfVar18 + 1;
          }
          pfVar16 = pfVar13;
          pfVar19 = pfVar18;
          if (2 < uVar7) {
            do {
              pfVar13 = pfVar16 + 4;
              uVar10 = uVar10 - 4;
              fVar20 = *pfVar16;
              *pfVar16 = *pfVar19;
              *pfVar19 = fVar20;
              fVar20 = pfVar16[1];
              pfVar16[1] = pfVar19[1];
              pfVar19[1] = fVar20;
              fVar20 = pfVar16[2];
              pfVar16[2] = pfVar19[2];
              pfVar19[2] = fVar20;
              fVar20 = pfVar16[3];
              pfVar16[3] = pfVar19[3];
              pfVar18 = pfVar19 + 4;
              pfVar19[3] = fVar20;
              pfVar16 = pfVar13;
              pfVar19 = pfVar18;
            } while (uVar10 != 0);
          }
        }
        pfVar16 = pfVar15;
        if (pfVar13 != pfVar15 + (uint)fVar3) {
          pfVar16 = pfVar13;
        }
        pfVar13 = pfVar16;
      } while (pfVar18 < pfVar1);
    }
  }
  else {
    pfVar15 = (float *)0x0;
    pfVar16 = (float *)0x0;
  }
  if (uVar5 != 0) {
    lVar11 = 0;
    uVar17 = 0;
    do {
      uVar23 = (ulong)*(ushort *)(param_2 + 2);
      lVar22 = *param_2;
      lVar12 = *(long *)(param_1 + 0x48);
      uVar6 = *(ushort *)((long)param_2 + 0x12);
      pfVar15 = (float *)(*(long *)(param_1 + 0x50) + (ulong)(uint)((int)fVar3 * (int)uVar17) * 4);
      pfVar16 = pfVar15 + uVar4;
      pfVar18 = (float *)(lVar22 + uVar17 * uVar23 * 4);
      pfVar1 = (float *)(lVar12 + uVar17 * 0x10);
      fVar28 = pfVar1[2];
      fVar27 = *pfVar1;
      fVar29 = pfVar1[1];
      fVar20 = pfVar1[3];
      pfVar1 = pfVar18 + uVar6;
      if (*(char *)(param_1 + 0x6c) != '\0') {
        fVar31 = fVar3;
        if ((uint)uVar6 <= (uint)fVar3) {
          fVar31 = (float)(uint)uVar6;
        }
        if (fVar31 != 0.0) {
          uVar24 = (ulong)(uint)fVar31;
          uVar21 = uVar24 & 3;
          if (uVar24 - 1 < 3) {
            lVar14 = 0;
          }
          else {
            lVar14 = 0;
            pfVar13 = (float *)(lVar22 + lVar11 * uVar23 + 8);
            do {
              fVar32 = ABS(pfVar13[-2]);
              fVar30 = fVar32;
              if (fVar32 <= fVar29) {
                fVar30 = fVar29;
              }
              fVar33 = ABS(pfVar13[-1]);
              iVar9 = (int)lVar14;
              if (fVar29 <= fVar32) {
                fVar20 = (float)((int)fVar31 + iVar9);
              }
              fVar29 = fVar33;
              if (fVar33 <= fVar30) {
                fVar29 = fVar30;
              }
              if (fVar30 <= fVar33) {
                fVar20 = (float)(((int)fVar31 - 1U) + iVar9);
              }
              fVar32 = ABS(*pfVar13);
              fVar30 = fVar32;
              if (fVar32 <= fVar29) {
                fVar30 = fVar29;
              }
              fVar33 = ABS(pfVar13[1]);
              if (fVar29 <= fVar32) {
                fVar20 = (float)(((int)fVar31 - 2U) + iVar9);
              }
              fVar29 = fVar33;
              if (fVar33 <= fVar30) {
                fVar29 = fVar30;
              }
              lVar14 = lVar14 + -4;
              if (fVar30 <= fVar33) {
                fVar20 = (float)(((int)fVar31 - 3U) + iVar9);
              }
              pfVar13 = pfVar13 + 4;
            } while (uVar21 - uVar24 != lVar14);
            lVar14 = -lVar14;
          }
          if (((uint)fVar31 & 3) != 0) {
            fVar31 = (float)((int)fVar31 - (int)lVar14);
            pfVar13 = (float *)(lVar22 + lVar11 * uVar23 + lVar14 * 4);
            do {
              fVar30 = ABS(*pfVar13);
              bVar8 = fVar29 <= fVar30;
              if (fVar30 <= fVar29) {
                fVar30 = fVar29;
              }
              fVar29 = fVar30;
              if (bVar8) {
                fVar20 = fVar31;
              }
              fVar31 = (float)((int)fVar31 - 1);
              uVar21 = uVar21 - 1;
              pfVar13 = pfVar13 + 1;
            } while (uVar21 != 0);
          }
        }
        if (uVar17 == uVar5 - 1) {
          *(undefined1 *)(param_1 + 0x6c) = 0;
        }
      }
      if (pfVar18 < pfVar1) {
        fVar31 = (float)((uint)fVar29 & 0x7fffff | 0x3f800000);
        fVar30 = fVar31 + 1.0;
        fVar31 = ((float)((uint)fVar29 >> 0x17 & 0xff) * 0.30103 + -38.230812 +
                 (fVar31 * fVar31 * fVar31 * 1.1581186 + -1.1581186) / (fVar30 * fVar30 * fVar30)) *
                 20.0 - fVar25;
        if (fVar31 <= 0.0) {
          fVar31 = 0.0;
        }
        do {
          lVar12 = (long)pfVar1 - (long)pfVar18 >> 2;
          lVar22 = (long)(pfVar15 + (uint)fVar3) - (long)pfVar16 >> 2;
          iVar9 = (int)lVar12;
          pfVar13 = pfVar16;
          if (lVar22 <= lVar12) {
            iVar9 = (int)lVar22;
          }
          while (iVar9 != 0) {
            fVar32 = *pfVar18;
            fVar30 = *pfVar13;
            *pfVar13 = fVar32;
            fVar32 = ABS(fVar32);
            if ((fVar20 == 0.0) || (fVar29 < fVar32)) {
              fVar20 = (float)((uint)fVar32 & 0x7fffff | 0x3f800000);
              fVar28 = fVar20 + 1.0;
              fVar31 = ((float)((uint)fVar32 >> 0x17 & 0xff) * 0.30103 + -38.230812 +
                       (fVar20 * fVar20 * fVar20 * 1.1581186 + -1.1581186) /
                       (fVar28 * fVar28 * fVar28)) * 20.0 - fVar25;
              if (fVar31 <= 0.0) {
                fVar31 = 0.0;
              }
              fVar28 = 0.0;
              fVar20 = fVar3;
              fVar29 = fVar32;
            }
            else {
              fVar20 = (float)((int)fVar20 - 1);
              fVar28 = fVar32;
            }
            pfVar16 = (float *)(param_1 + 0x68);
            if (fVar31 - fVar27 < 0.0) {
              pfVar16 = (float *)(param_1 + 100);
            }
            fVar27 = fVar31 + (fVar27 - fVar31) * *pfVar16;
            fVar33 = fVar27 * (0.05 / fVar26 + -0.05);
            fVar32 = 0.0;
            iVar9 = iVar9 + -1;
            if (-37.0 <= fVar33) {
              uVar10 = (uint)(fVar33 * 27866352.0 + 1.0653532e+09);
              fVar32 = (float)(uVar10 & 0x7fffff | 0x3f800000);
              fVar32 = (fVar32 * (fVar32 * 0.32518977 + 0.020805772) + 0.65304345) *
                       (float)(uVar10 & 0xff800000);
            }
            *pfVar18 = fVar32 * fVar30;
            pfVar13 = pfVar13 + 1;
            pfVar18 = pfVar18 + 1;
          }
          pfVar16 = pfVar15;
          if (pfVar13 != pfVar15 + (uint)fVar3) {
            pfVar16 = pfVar13;
          }
        } while (pfVar18 < pfVar1);
        lVar12 = *(long *)(param_1 + 0x48);
      }
      lVar22 = uVar17 * 0x10;
      uVar17 = uVar17 + 1;
      lVar11 = lVar11 + 4;
      *(float *)(lVar12 + lVar22) = fVar27;
      *(float *)(*(long *)(param_1 + 0x48) + lVar22 + 4) = fVar29;
      *(float *)(*(long *)(param_1 + 0x48) + lVar22 + 8) = fVar28;
      *(float *)(*(long *)(param_1 + 0x48) + lVar22 + 0xc) = fVar20;
    } while (uVar17 != uVar5);
  }
  *(int *)(param_1 + 0x58) = (int)((ulong)((long)pfVar16 - (long)pfVar15) >> 2);
  return;
}


