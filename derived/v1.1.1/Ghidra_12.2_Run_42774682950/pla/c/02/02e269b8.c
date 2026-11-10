/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e269b8; name: FUN_02e269b8
 */


/* WARNING: Removing unreachable block (ram,0x02e26ff0) */

void FUN_02e269b8(long param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  float fVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  ulong uVar16;
  float fVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  float *pfVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 local_90;
  long local_88;
  float local_7c;
  ulong local_78;
  long local_70;
  float *local_68;
  
  bVar5 = *(byte *)(param_1 + 0x30);
  uVar16 = (ulong)bVar5;
  pfVar11 = *(float **)(param_1 + 0x48);
  fVar30 = pfVar11[2];
  fVar29 = *(float *)(*(long *)(param_1 + 0x18) + 8);
  fVar32 = *(float *)(*(long *)(param_1 + 0x18) + 0xc);
  fVar27 = *(float *)(param_1 + 100);
  fVar28 = *(float *)(param_1 + 0x68);
  fVar26 = *pfVar11;
  fVar31 = pfVar11[1];
  lVar10 = *(long *)(param_1 + 0x50) + (ulong)(*(int *)(param_1 + 0x58) * (uint)bVar5) * 4;
  fVar4 = *(float *)(param_1 + 0x40);
  uVar24 = (ulong)*(ushort *)(param_2 + 2);
  fVar15 = pfVar11[3];
  lVar21 = *param_2;
  lVar6 = -((ulong)((uint)bVar5 * 4 + 0xf) & 0x7f0);
  lVar7 = lVar6 + -0x90;
  local_78 = uVar16;
  local_7c = (float)(uint)*(ushort *)((long)param_2 + 0x12);
  if (*(char *)(param_1 + 0x6c) != '\0') {
    fVar17 = fVar4;
    if ((uint)local_7c <= (uint)fVar4) {
      fVar17 = (float)(uint)*(ushort *)((long)param_2 + 0x12);
    }
    if ((bVar5 != 0) && (fVar17 != 0.0)) {
      uVar18 = (ulong)(uint)fVar17;
      uVar14 = 0;
      pfVar8 = (float *)(lVar21 + 8);
      lVar9 = lVar21;
      if (2 < uVar18 - 1) goto LAB_02e26ab0;
      do {
        lVar19 = 0;
        while( true ) {
          if (((uint)fVar17 & 3) != 0) {
            fVar34 = (float)((int)fVar17 - (int)lVar19);
            lVar19 = lVar19 << 2;
            uVar20 = uVar18 & 3;
            fVar33 = fVar15;
            fVar35 = fVar31;
            do {
              pfVar22 = (float *)(lVar9 + lVar19);
              lVar19 = lVar19 + 4;
              fVar31 = ABS(*pfVar22);
              fVar15 = fVar34;
              if (fVar31 <= fVar35) {
                fVar15 = fVar33;
              }
              uVar20 = uVar20 - 1;
              fVar34 = (float)((int)fVar34 - 1);
              fVar33 = fVar15;
              fVar35 = fVar31;
            } while (uVar20 != 0);
          }
          uVar14 = uVar14 + 1;
          pfVar8 = pfVar8 + uVar24;
          lVar9 = lVar9 + uVar24 * 4;
          if (uVar14 == bVar5) goto LAB_02e26b58;
          if (uVar18 - 1 < 3) break;
LAB_02e26ab0:
          lVar19 = 0;
          pfVar22 = pfVar8;
          do {
            iVar12 = (int)lVar19;
            fVar34 = (float)((int)fVar17 + iVar12);
            if (ABS(pfVar22[-2]) <= fVar31) {
              fVar34 = fVar15;
            }
            fVar15 = (float)(((int)fVar17 - 1U) + iVar12);
            if (ABS(pfVar22[-1]) <= ABS(pfVar22[-2])) {
              fVar15 = fVar34;
            }
            fVar31 = ABS(pfVar22[1]);
            fVar34 = (float)(((int)fVar17 - 2U) + iVar12);
            if (ABS(*pfVar22) <= ABS(pfVar22[-1])) {
              fVar34 = fVar15;
            }
            lVar19 = lVar19 + -4;
            fVar15 = (float)(((int)fVar17 - 3U) + iVar12);
            if (fVar31 <= ABS(*pfVar22)) {
              fVar15 = fVar34;
            }
            pfVar22 = pfVar22 + 4;
          } while ((uVar18 & 3) - uVar18 != lVar19);
          lVar19 = -lVar19;
        }
      } while( true );
    }
LAB_02e26b58:
    *(undefined1 *)(param_1 + 0x6c) = 0;
  }
  if (local_7c == 0.0) {
    local_90 = param_1;
  }
  else {
    local_90 = param_1;
    fVar34 = (float)((uint)fVar31 & 0x7fffff | 0x3f800000);
    fVar17 = 0.0;
    local_88 = *(long *)(param_1 + 0x50) + (ulong)((int)fVar4 * (uint)bVar5) * 4;
    fVar33 = fVar34 + 1.0;
    local_68 = (float *)((long)&local_88 + lVar6);
    local_70 = uVar24 * 0xc;
    fVar34 = ((float)((uint)fVar31 >> 0x17 & 0xff) * 0.30103 + -38.230812 +
             (fVar34 * fVar34 * fVar34 * 1.1581186 + -1.1581186) / (fVar33 * fVar33 * fVar33)) *
             20.0 - fVar29;
    if (fVar34 <= 0.0) {
      fVar34 = 0.0;
    }
    do {
      lVar6 = 0;
      if (local_78 != 0) {
        lVar6 = (local_88 - lVar10 >> 2) / (long)local_78;
      }
      uVar14 = (int)local_7c - (int)fVar17;
      if (lVar6 <= (long)(ulong)uVar14) {
        uVar14 = (uint)lVar6;
      }
      if (uVar14 != 0) {
        uVar13 = uVar14 - 1;
        if ((int)local_78 == 0) {
          lVar10 = lVar10 + ((ulong)(uVar14 - 1) * 4 + 4) * local_78;
          uVar13 = uVar14;
          if (fVar30 <= fVar31) goto LAB_02e26d94;
          do {
            fVar31 = fVar30;
            fVar15 = (float)((uint)fVar31 & 0x7fffff | 0x3f800000);
            fVar34 = fVar15 + 1.0;
            fVar30 = 0.0;
            fVar34 = ((float)((uint)fVar31 >> 0x17 & 0xff) * 0.30103 + -38.230812 +
                     (fVar15 * fVar15 * fVar15 * 1.1581186 + -1.1581186) /
                     (fVar34 * fVar34 * fVar34)) * 20.0 - fVar29;
            if (fVar34 <= 0.0) {
              fVar34 = 0.0;
            }
            fVar15 = fVar4;
            while( true ) {
              fVar33 = fVar28;
              if (fVar34 - fVar26 < 0.0) {
                fVar33 = fVar27;
              }
              uVar13 = uVar13 - 1;
              fVar26 = fVar34 + (fVar26 - fVar34) * fVar33;
              if (uVar13 == 0) {
                fVar17 = (float)((int)fVar17 + uVar14);
                goto LAB_02e26c90;
              }
              if (fVar31 < fVar30) break;
LAB_02e26d94:
              if (fVar15 == 0.0) break;
              fVar15 = (float)((int)fVar15 - 1);
            }
          } while( true );
        }
        do {
          uVar18 = (ulong)(uint)fVar17;
          lVar19 = uVar18 * 4;
          lVar6 = uVar24 * 4 + lVar19;
          lVar9 = lVar21;
          if (uVar16 == 1) {
            lVar23 = 0;
LAB_02e26e24:
            lVar23 = lVar23 * 4;
            *(undefined4 *)((long)&local_90 + lVar23 + lVar7 + 0x90) =
                 *(undefined4 *)(lVar10 + lVar23);
            fVar33 = *(float *)(lVar9 + uVar18 * 4);
            *(float *)(lVar10 + lVar23) = fVar33;
            fVar33 = ABS(fVar33);
            if (fVar33 <= fVar30) {
              fVar33 = fVar30;
            }
          }
          else {
            lVar25 = 0;
            lVar23 = 0;
            do {
              puVar1 = (undefined4 *)(lVar10 + lVar25);
              puVar2 = (undefined4 *)((long)&local_90 + lVar25 + lVar7 + 0x90);
              lVar25 = lVar25 + 8;
              *puVar2 = *puVar1;
              *puVar1 = *(undefined4 *)(lVar9 + lVar19);
              puVar2[1] = puVar1[1];
              fVar30 = *(float *)(lVar9 + lVar6);
              puVar1[1] = fVar30;
              fVar30 = ABS(fVar30);
              lVar23 = lVar23 + 2;
              lVar9 = lVar9 + uVar24 * 8;
            } while (uVar16 - (uVar16 & 1) != lVar23);
            fVar33 = fVar30;
            if ((bVar5 & 1) != 0) goto LAB_02e26e24;
          }
          if ((fVar15 == 0.0) || (fVar31 < fVar33)) {
            fVar15 = (float)((uint)fVar33 & 0x7fffff | 0x3f800000);
            fVar30 = fVar15 + 1.0;
            fVar34 = ((float)((uint)fVar33 >> 0x17 & 0xff) * 0.30103 + -38.230812 +
                     (fVar15 * fVar15 * fVar15 * 1.1581186 + -1.1581186) /
                     (fVar30 * fVar30 * fVar30)) * 20.0 - fVar29;
            if (fVar34 <= 0.0) {
              fVar34 = 0.0;
            }
            fVar30 = 0.0;
            fVar15 = fVar4;
            fVar31 = fVar33;
          }
          else {
            fVar15 = (float)((int)fVar15 - 1);
            fVar30 = fVar33;
          }
          fVar33 = fVar28;
          if (fVar34 - fVar26 < 0.0) {
            fVar33 = fVar27;
          }
          fVar26 = fVar34 + (fVar26 - fVar34) * fVar33;
          fVar35 = fVar26 * (0.05 / fVar32 + -0.05);
          fVar33 = 0.0;
          if (-37.0 <= fVar35) {
            uVar14 = (uint)(fVar35 * 27866352.0 + 1.0653532e+09);
            fVar33 = (float)(uVar14 & 0x7fffff | 0x3f800000);
            fVar33 = (fVar33 * (fVar33 * 0.32518977 + 0.020805772) + 0.65304345) *
                     (float)(uVar14 & 0xff800000);
          }
          lVar10 = lVar10 + uVar16 * 4;
          lVar9 = lVar21;
          if (uVar16 - 1 < 3) {
            lVar23 = 0;
          }
          else {
            lVar23 = 0;
            pfVar11 = local_68;
            do {
              lVar23 = lVar23 + 4;
              *(float *)(lVar9 + lVar19) = pfVar11[-2] * fVar33;
              *(float *)(lVar9 + lVar6) = pfVar11[-1] * fVar33;
              *(float *)(lVar9 + uVar24 * 8 + lVar19) = *pfVar11 * fVar33;
              pfVar8 = pfVar11 + 1;
              pfVar11 = pfVar11 + 4;
              *(float *)(lVar9 + local_70 + lVar19) = *pfVar8 * fVar33;
              lVar9 = lVar9 + uVar24 * 0x10;
            } while (uVar16 - (uVar16 & 3) != lVar23);
          }
          if ((bVar5 & 3) != 0) {
            pfVar11 = (float *)(lVar9 + uVar18 * 4);
            pfVar8 = (float *)((long)&local_90 + lVar23 * 4 + lVar7 + 0x90);
            uVar18 = uVar16 & 3;
            do {
              *pfVar11 = *pfVar8 * fVar33;
              uVar18 = uVar18 - 1;
              pfVar11 = pfVar11 + uVar24;
              pfVar8 = pfVar8 + 1;
            } while (uVar18 != 0);
          }
          fVar17 = (float)((int)fVar17 + 1);
          bVar3 = uVar13 != 0;
          uVar13 = uVar13 - 1;
        } while (bVar3);
      }
LAB_02e26c90:
      if (lVar10 == local_88) {
        lVar10 = *(long *)(local_90 + 0x50);
      }
    } while ((uint)fVar17 < (uint)local_7c);
    pfVar11 = *(float **)(local_90 + 0x48);
    uVar16 = local_78;
  }
  *pfVar11 = fVar26;
  *(float *)(*(long *)(local_90 + 0x48) + 4) = fVar31;
  *(float *)(*(long *)(local_90 + 0x48) + 8) = fVar30;
  *(float *)(*(long *)(local_90 + 0x48) + 0xc) = fVar15;
  uVar14 = 0;
  if ((uint)uVar16 != 0) {
    uVar14 = (uint)((ulong)(lVar10 - *(long *)(local_90 + 0x50)) >> 2) / (uint)uVar16;
  }
  *(uint *)(local_90 + 0x58) = uVar14;
  return;
}


