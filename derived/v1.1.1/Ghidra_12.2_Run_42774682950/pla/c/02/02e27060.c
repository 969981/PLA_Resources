/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e27060; name: FUN_02e27060
 */


void FUN_02e27060(long param_1,long *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  float fVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  long lVar7;
  float *pfVar8;
  long lVar9;
  float *pfVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  float *pfVar18;
  float *pfVar19;
  float fVar20;
  ulong uVar21;
  ulong uVar22;
  float *pfVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  float *unaff_x25;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 local_a0;
  ulong local_98;
  float *local_90;
  float local_84;
  ulong local_80;
  long local_78;
  float *pfStack_70;
  ulong local_68;
  
  bVar5 = *(byte *)(param_1 + 0x30);
  uVar16 = (ulong)bVar5;
  pfVar10 = *(float **)(param_1 + 0x48);
  fVar32 = pfVar10[2];
  fVar30 = *(float *)(*(long *)(param_1 + 0x18) + 8);
  fVar33 = *(float *)(*(long *)(param_1 + 0x18) + 0xc);
  pfVar23 = (float *)(*(long *)(param_1 + 0x50) +
                     (ulong)(*(int *)(param_1 + 0x58) * (uint)bVar5) * 4);
  uVar14 = (ulong)*(ushort *)(param_2 + 2);
  fVar3 = *(float *)(param_1 + 0x40);
  fVar28 = *(float *)(param_1 + 100);
  fVar29 = *(float *)(param_1 + 0x68);
  local_68 = uVar14;
  fVar27 = *pfVar10;
  fVar31 = pfVar10[1];
  uVar6 = *(ushort *)((long)param_2 + 0x12);
  fVar20 = pfVar10[3];
  uVar4 = *(uint *)(param_1 + 0x38);
  uVar24 = (ulong)uVar4;
  local_80 = uVar16;
  lVar26 = *param_2;
  lVar7 = -((ulong)((uint)bVar5 * 4 + 0xf) & 0x7f0);
  pfVar19 = (float *)((long)&local_a0 + lVar7);
  local_84 = (float)(uint)uVar6;
  if (*(char *)(param_1 + 0x6c) != '\0') {
    fVar35 = fVar3;
    if ((uint)uVar6 <= (uint)fVar3) {
      fVar35 = (float)(uint)uVar6;
    }
    if ((uVar4 != 0) && (fVar35 != 0.0)) {
      uVar21 = (ulong)(uint)fVar35;
      uVar12 = 0;
      pfVar8 = (float *)(lVar26 + 8);
      lVar9 = lVar26;
      if (2 < uVar21 - 1) goto LAB_02e27160;
      do {
        lVar17 = 0;
        while( true ) {
          if (((uint)fVar35 & 3) != 0) {
            fVar34 = (float)((int)fVar35 - (int)lVar17);
            lVar17 = lVar17 << 2;
            uVar22 = uVar21 & 3;
            fVar36 = fVar20;
            fVar37 = fVar31;
            do {
              pfVar18 = (float *)(lVar9 + lVar17);
              lVar17 = lVar17 + 4;
              fVar31 = ABS(*pfVar18);
              fVar20 = fVar34;
              if (fVar31 <= fVar37) {
                fVar20 = fVar36;
              }
              uVar22 = uVar22 - 1;
              fVar34 = (float)((int)fVar34 - 1);
              fVar36 = fVar20;
              fVar37 = fVar31;
            } while (uVar22 != 0);
          }
          uVar12 = uVar12 + 1;
          pfVar8 = pfVar8 + uVar14;
          lVar9 = lVar9 + uVar14 * 4;
          if (uVar12 == uVar4) goto LAB_02e27208;
          if (uVar21 - 1 < 3) break;
LAB_02e27160:
          lVar17 = 0;
          pfVar18 = pfVar8;
          do {
            iVar11 = (int)lVar17;
            fVar34 = (float)((int)fVar35 + iVar11);
            if (ABS(pfVar18[-2]) <= fVar31) {
              fVar34 = fVar20;
            }
            fVar20 = (float)(((int)fVar35 - 1U) + iVar11);
            if (ABS(pfVar18[-1]) <= ABS(pfVar18[-2])) {
              fVar20 = fVar34;
            }
            fVar31 = ABS(pfVar18[1]);
            fVar34 = (float)(((int)fVar35 - 2U) + iVar11);
            if (ABS(*pfVar18) <= ABS(pfVar18[-1])) {
              fVar34 = fVar20;
            }
            lVar17 = lVar17 + -4;
            fVar20 = (float)(((int)fVar35 - 3U) + iVar11);
            if (fVar31 <= ABS(*pfVar18)) {
              fVar20 = fVar34;
            }
            pfVar18 = pfVar18 + 4;
          } while ((uVar21 & 3) - uVar21 != lVar17);
          lVar17 = -lVar17;
        }
      } while( true );
    }
LAB_02e27208:
    *(undefined1 *)(param_1 + 0x6c) = 0;
  }
  if (uVar6 != 0) {
    fVar35 = (float)((uint)fVar31 & 0x7fffff | 0x3f800000);
    local_98 = uVar24;
    local_90 = (float *)(*(long *)(param_1 + 0x50) + (ulong)((int)fVar3 * (uint)bVar5) * 4);
    fVar34 = fVar35 + 1.0;
    fVar35 = ((float)((uint)fVar31 >> 0x17 & 0xff) * 0.30103 + -38.230812 +
             (fVar35 * fVar35 * fVar35 * 1.1581186 + -1.1581186) / (fVar34 * fVar34 * fVar34)) *
             20.0 - fVar30;
    if (fVar35 <= 0.0) {
      fVar35 = 0.0;
    }
    local_a0 = param_1;
    fVar34 = 0.0;
    local_78 = uVar14 * 0xc;
    pfStack_70 = (float *)((long)&local_98 + lVar7);
    do {
      lVar7 = 0;
      if (local_80 != 0) {
        lVar7 = ((long)local_90 - (long)pfVar23 >> 2) / (long)local_80;
      }
      uVar12 = (int)local_84 - (int)fVar34;
      if (lVar7 <= (long)(ulong)uVar12) {
        uVar12 = (uint)lVar7;
      }
      if (uVar12 != 0) {
        if ((int)local_98 == 0) {
          do {
            *pfVar19 = *pfVar23;
            *pfVar23 = *(float *)(lVar26 + (ulong)(uint)fVar34 * 4);
            *(float *)(lVar26 + (ulong)(uint)fVar34 * 4) = *pfVar19;
            if ((fVar31 < fVar32) || (fVar20 == 0.0)) {
              fVar20 = (float)((uint)fVar32 & 0x7fffff | 0x3f800000);
              fVar31 = fVar20 + 1.0;
              fVar35 = ((float)((uint)fVar32 >> 0x17 & 0xff) * 0.30103 + -38.230812 +
                       (fVar20 * fVar20 * fVar20 * 1.1581186 + -1.1581186) /
                       (fVar31 * fVar31 * fVar31)) * 20.0 - fVar30;
              if (fVar35 <= 0.0) {
                fVar35 = 0.0;
              }
              fVar20 = fVar3;
              fVar31 = fVar32;
              fVar32 = 0.0;
            }
            else {
              fVar20 = (float)((int)fVar20 - 1);
            }
            fVar34 = (float)((int)fVar34 + 1);
            fVar36 = fVar29;
            if (fVar35 - fVar27 < 0.0) {
              fVar36 = fVar28;
            }
            uVar12 = uVar12 - 1;
            fVar27 = fVar35 + (fVar27 - fVar35) * fVar36;
            pfVar23 = pfVar23 + uVar16;
          } while (uVar12 != 0);
        }
        else {
          do {
            uVar12 = uVar12 - 1;
            uVar21 = (ulong)(uint)fVar34;
            lVar17 = uVar21 * 4;
            lVar7 = uVar14 * 4 + lVar17;
            *pfVar19 = *pfVar23;
            lVar9 = lVar26;
            if (uVar24 == 1) {
              lVar25 = 0;
              pfVar10 = pfVar23;
              fVar36 = fVar32;
            }
            else {
              lVar25 = 0;
              lVar15 = 0;
              do {
                puVar2 = (undefined4 *)((long)pfVar23 + lVar15);
                *puVar2 = *(undefined4 *)(lVar9 + lVar17);
                *(undefined4 *)((long)pfVar19 + lVar15 + 4) = puVar2[1];
                lVar25 = lVar25 + 2;
                lVar1 = lVar15 + 8;
                fVar36 = *(float *)(lVar9 + lVar7);
                puVar2[1] = fVar36;
                fVar36 = ABS(fVar36);
                lVar9 = lVar9 + uVar14 * 8;
                *(undefined4 *)((long)pfVar19 + lVar15 + 8) = puVar2[2];
                lVar15 = lVar1;
              } while (uVar24 - (uVar24 & 1) != lVar25);
              unaff_x25 = (float *)((long)pfVar19 + lVar1);
              pfVar10 = (float *)((long)pfVar23 + lVar1);
            }
            pfVar8 = (float *)(lVar9 + lVar17);
            if ((uVar4 & 1) != 0) {
              fVar32 = *pfVar8;
              *pfVar10 = fVar32;
              fVar32 = ABS(fVar32);
              pfVar10 = pfVar23 + lVar25 + 1;
              unaff_x25 = pfVar19 + lVar25 + 1;
              if (fVar32 <= fVar36) {
                fVar32 = fVar36;
              }
              fVar36 = fVar32;
              lVar25 = local_68 * 4;
              *unaff_x25 = *pfVar10;
              pfVar8 = (float *)(lVar9 + lVar25 + uVar21 * 4);
            }
            *pfVar10 = *pfVar8;
            *pfVar8 = *unaff_x25;
            if ((fVar20 == 0.0) || (fVar31 < fVar36)) {
              fVar20 = (float)((uint)fVar36 & 0x7fffff | 0x3f800000);
              fVar31 = fVar20 + 1.0;
              fVar32 = 0.0;
              fVar35 = ((float)((uint)fVar36 >> 0x17 & 0xff) * 0.30103 + -38.230812 +
                       (fVar20 * fVar20 * fVar20 * 1.1581186 + -1.1581186) /
                       (fVar31 * fVar31 * fVar31)) * 20.0 - fVar30;
              if (fVar35 <= 0.0) {
                fVar35 = 0.0;
              }
              fVar20 = fVar3;
              fVar31 = fVar36;
            }
            else {
              fVar20 = (float)((int)fVar20 - 1);
              fVar32 = fVar36;
            }
            fVar36 = fVar29;
            if (fVar35 - fVar27 < 0.0) {
              fVar36 = fVar28;
            }
            fVar27 = fVar35 + (fVar27 - fVar35) * fVar36;
            fVar37 = fVar27 * (0.05 / fVar33 + -0.05);
            fVar36 = 0.0;
            if (-37.0 <= fVar37) {
              uVar13 = (uint)(fVar37 * 27866352.0 + 1.0653532e+09);
              fVar36 = (float)(uVar13 & 0x7fffff | 0x3f800000);
              fVar36 = (fVar36 * (fVar36 * 0.32518977 + 0.020805772) + 0.65304345) *
                       (float)(uVar13 & 0xff800000);
            }
            pfVar23 = pfVar23 + uVar16;
            lVar9 = lVar26;
            if (uVar24 - 1 < 3) {
              lVar25 = 0;
            }
            else {
              lVar25 = 0;
              unaff_x25 = pfStack_70;
              do {
                lVar25 = lVar25 + 4;
                *(float *)(lVar9 + lVar17) = unaff_x25[-2] * fVar36;
                *(float *)(lVar9 + lVar7) = unaff_x25[-1] * fVar36;
                *(float *)(lVar9 + uVar14 * 8 + lVar17) = *unaff_x25 * fVar36;
                pfVar10 = unaff_x25 + 1;
                unaff_x25 = unaff_x25 + 4;
                *(float *)(lVar9 + local_78 + lVar17) = *pfVar10 * fVar36;
                lVar9 = lVar9 + uVar14 * 0x10;
              } while (uVar24 - (uVar24 & 3) != lVar25);
            }
            if ((uVar4 & 3) != 0) {
              pfVar10 = (float *)(lVar9 + uVar21 * 4);
              pfVar8 = pfVar19 + lVar25;
              uVar21 = uVar24 & 3;
              do {
                *pfVar10 = *pfVar8 * fVar36;
                uVar21 = uVar21 - 1;
                pfVar10 = pfVar10 + uVar14;
                pfVar8 = pfVar8 + 1;
              } while (uVar21 != 0);
            }
            fVar34 = (float)((int)fVar34 + 1);
          } while (uVar12 != 0);
        }
      }
      if (pfVar23 == local_90) {
        pfVar23 = *(float **)(local_a0 + 0x50);
      }
    } while ((uint)fVar34 < (uint)local_84);
    pfVar10 = *(float **)(local_a0 + 0x48);
    param_1 = local_a0;
  }
  *pfVar10 = fVar27;
  *(float *)(*(long *)(param_1 + 0x48) + 4) = fVar31;
  *(float *)(*(long *)(param_1 + 0x48) + 8) = fVar32;
  *(float *)(*(long *)(param_1 + 0x48) + 0xc) = fVar20;
  uVar4 = 0;
  if ((uint)local_80 != 0) {
    uVar4 = (uint)((ulong)((long)pfVar23 - *(long *)(param_1 + 0x50)) >> 2) / (uint)local_80;
  }
  *(uint *)(param_1 + 0x58) = uVar4;
  return;
}


