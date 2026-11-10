/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0319e50c; name: FUN_0319e50c
 */


void FUN_0319e50c(float param_1,long *param_2,long *param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  uint *puVar3;
  uint uVar4;
  undefined *puVar5;
  bool bVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  undefined8 uVar27;
  int iVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  
  fVar16 = cosf(3.1415927 / (float)param_4);
  puVar5 = PTR_PTR_0434a080;
  iVar21 = (int)param_3[1];
  uVar11 = iVar21 * 2;
  puVar10 = (uint *)((long)param_2 + 0xc);
  uVar13 = *puVar10;
  iVar28 = iVar21;
  if ((int)uVar11 <= (int)(uVar13 & 0x3fffffff)) goto joined_r0x0319ec0c;
  lVar9 = *param_2;
  lVar7 = param_2[1];
  if (0x1fffffff < iVar21) {
    FUN_032bd0a8(uVar11);
    uVar13 = *puVar10;
  }
  uVar13 = (uVar13 & 0x3fffffff) * 2;
  if (uVar13 < 0x3fffffff) {
    if ((int)uVar11 <= (int)uVar13) {
LAB_0319ef1c:
      uVar11 = uVar13;
    }
  }
  else {
    uVar13 = 0x3fffffff;
    if ((int)uVar11 < 0x40000000) goto LAB_0319ef1c;
  }
  lVar7 = FUN_032bd1d4(puVar5,uVar11,8,lVar9,(int)lVar7,puVar10);
  *param_2 = lVar7;
  iVar28 = (int)param_3[1];
joined_r0x0319ec0c:
  if (iVar28 < 1) {
    return;
  }
  lVar9 = *param_3;
  iVar28 = iVar21 + -1;
  pfVar1 = (float *)(lVar9 + (long)(iVar21 + -2) * 8);
  pfVar2 = (float *)(lVar9 + (long)iVar28 * 8);
  fVar19 = pfVar2[1] - pfVar1[1];
  fVar17 = *pfVar2 - *pfVar1;
  fVar39 = (1.0 / fVar16) * (1.0 / fVar16);
  puVar3 = (uint *)(param_2 + 1);
  fVar16 = fVar17 * fVar17 + fVar19 * fVar19;
  fVar14 = fVar17 * fVar17 + fVar19 * fVar19;
  uVar27 = CONCAT44(fVar14,fVar16);
  uVar25 = NEON_frsqrte(uVar27,4);
  fVar23 = (float)uVar25;
  fVar26 = (float)((ulong)uVar25 >> 0x20);
  uVar25 = NEON_frsqrts(uVar27,CONCAT44(fVar26 * fVar26,fVar23 * fVar23),4);
  fVar23 = fVar23 * (float)uVar25;
  fVar26 = fVar26 * (float)((ulong)uVar25 >> 0x20);
  uVar27 = NEON_frsqrts(uVar27,CONCAT44(fVar26 * fVar26,fVar23 * fVar23),4);
  iVar21 = -(uint)(fVar16 <= 0.0);
  iVar22 = -(uint)(fVar14 <= 0.0);
  fVar23 = (float)uVar27 * fVar23;
  fVar26 = (float)((ulong)uVar27 >> 0x20) * fVar26;
  fVar23 = (float)CONCAT13((byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                           CONCAT12((byte)((uint)fVar23 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10),
                                    CONCAT11((byte)((uint)fVar23 >> 8) & ~(byte)((uint)iVar21 >> 8),
                                             SUB41(fVar23,0) & ~(byte)iVar21)));
  fVar16 = fVar16 * fVar23;
  lVar7 = 0;
  fVar14 = fVar17 * fVar23;
  fVar17 = fVar19 * (float)(CONCAT17((byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                                     CONCAT16((byte)((uint)fVar26 >> 0x10) &
                                              ~(byte)((uint)iVar22 >> 0x10),
                                              CONCAT15((byte)((uint)fVar26 >> 8) &
                                                       ~(byte)((uint)iVar22 >> 8),
                                                       CONCAT14(SUB41(fVar26,0) & ~(byte)iVar22,
                                                                fVar23)))) >> 0x20);
  do {
    pfVar1 = (float *)(lVar9 + (long)iVar28 * 8);
    fVar19 = *pfVar1;
    fVar23 = pfVar1[1];
    pfVar1 = (float *)(lVar9 + lVar7 * 8);
    fVar18 = *pfVar1 - fVar19;
    fVar20 = pfVar1[1] - fVar23;
    fVar26 = fVar18 * fVar18 + fVar20 * fVar20;
    fVar15 = fVar18 * fVar18 + fVar20 * fVar20;
    uVar27 = CONCAT44(fVar15,fVar26);
    uVar25 = NEON_frsqrte(uVar27,4);
    fVar30 = (float)uVar25;
    fVar32 = (float)((ulong)uVar25 >> 0x20);
    uVar25 = NEON_frsqrts(uVar27,CONCAT44(fVar32 * fVar32,fVar30 * fVar30),4);
    fVar30 = fVar30 * (float)uVar25;
    fVar32 = fVar32 * (float)((ulong)uVar25 >> 0x20);
    uVar27 = NEON_frsqrts(uVar27,CONCAT44(fVar32 * fVar32,fVar30 * fVar30),4);
    iVar21 = -(uint)(fVar26 <= 0.0);
    iVar28 = -(uint)(fVar15 <= 0.0);
    fVar30 = (float)uVar27 * fVar30;
    fVar32 = (float)((ulong)uVar27 >> 0x20) * fVar32;
    fVar15 = (float)CONCAT13((byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                             CONCAT12((byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10),
                                      CONCAT11((byte)((uint)fVar30 >> 8) &
                                               ~(byte)((uint)iVar21 >> 8),
                                               SUB41(fVar30,0) & ~(byte)iVar21)));
    fVar35 = fVar18 * fVar15;
    fVar30 = (float)(CONCAT17((byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18),
                              CONCAT16((byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10),
                                       CONCAT15((byte)((uint)fVar32 >> 8) &
                                                ~(byte)((uint)iVar28 >> 8),
                                                CONCAT14(SUB41(fVar32,0) & ~(byte)iVar28,fVar15))))
                    >> 0x20);
    fVar32 = fVar20 * fVar30;
    fVar26 = fVar26 * fVar15;
    fVar18 = fVar18 * fVar15;
    fVar20 = fVar20 * fVar30;
    fVar15 = fVar14 * fVar32 - fVar17 * fVar35;
    if (fVar15 <= 0.0001) {
      if (-0.0001 <= fVar15) {
        if (0.0 < fVar14 * fVar35 + fVar17 * fVar32) {
          uVar12 = *puVar10;
          uVar13 = *puVar3;
          uVar11 = uVar13 + 1;
          fVar19 = fVar19 - fVar17 * param_1;
          fVar23 = fVar14 * param_1 + fVar23;
          if ((int)uVar13 < (int)(uVar12 & 0x3fffffff)) goto LAB_0319e7a4;
          goto LAB_0319eb18;
        }
        iVar21 = 1;
        fVar16 = -fVar32;
        fVar15 = fVar35;
        do {
          fVar31 = fVar15;
          fVar29 = fVar16;
          iVar28 = iVar21;
          fVar33 = fVar14 + fVar29;
          fVar24 = fVar17 + fVar31;
          fVar16 = fVar33 * fVar33 + fVar24 * fVar24;
          fVar15 = fVar33 * fVar33 + fVar24 * fVar24;
          uVar27 = CONCAT44(fVar15,fVar16);
          uVar25 = NEON_frsqrte(uVar27,4);
          fVar30 = (float)uVar25;
          fVar36 = (float)((ulong)uVar25 >> 0x20);
          uVar25 = NEON_frsqrts(uVar27,CONCAT44(fVar36 * fVar36,fVar30 * fVar30),4);
          fVar30 = fVar30 * (float)uVar25;
          fVar36 = fVar36 * (float)((ulong)uVar25 >> 0x20);
          iVar21 = -(uint)(fVar16 <= 0.0);
          iVar22 = -(uint)(fVar15 <= 0.0);
          uVar27 = NEON_frsqrts(uVar27,CONCAT44(fVar36 * fVar36,fVar30 * fVar30),4);
          fVar30 = (float)uVar27 * fVar30;
          fVar36 = (float)((ulong)uVar27 >> 0x20) * fVar36;
          fVar16 = (float)CONCAT13((byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                                   CONCAT12((byte)((uint)fVar30 >> 0x10) &
                                            ~(byte)((uint)iVar21 >> 0x10),
                                            CONCAT11((byte)((uint)fVar30 >> 8) &
                                                     ~(byte)((uint)iVar21 >> 8),
                                                     SUB41(fVar30,0) & ~(byte)iVar21)));
          fVar38 = fVar33 * fVar16;
          fVar15 = (float)(CONCAT17((byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                                    CONCAT16((byte)((uint)fVar36 >> 0x10) &
                                             ~(byte)((uint)iVar22 >> 0x10),
                                             CONCAT15((byte)((uint)fVar36 >> 8) &
                                                      ~(byte)((uint)iVar22 >> 8),
                                                      CONCAT14(SUB41(fVar36,0) & ~(byte)iVar22,
                                                               fVar16)))) >> 0x20);
          fVar34 = fVar24 * fVar15;
          fVar30 = 1.0 / (fVar14 * fVar34 - fVar17 * fVar38);
          fVar40 = (fVar38 - fVar14) * fVar30;
          fVar37 = (fVar34 - fVar17) * fVar30;
          fVar36 = fVar40 * fVar40 + fVar37 * fVar37;
          iVar21 = iVar28 * 2;
          fVar16 = fVar33 * fVar16;
          fVar15 = fVar24 * fVar15;
        } while (fVar39 < fVar36);
        if (0 < iVar28) {
          uVar11 = *puVar10;
          uVar12 = *puVar3;
          uVar13 = uVar12 + 1;
          if ((int)uVar12 < (int)(uVar11 & 0x3fffffff)) {
            lVar9 = *param_2;
            uVar11 = uVar12;
          }
          else {
            lVar9 = *param_2;
            if (0x3ffffffe < (int)uVar12) {
              FUN_032bd0a8(uVar13);
              uVar11 = *puVar10;
            }
            uVar11 = (uVar11 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar11) {
              uVar11 = 0x3fffffff;
            }
            uVar8 = uVar13;
            if ((int)uVar13 <= (int)uVar11) {
              uVar8 = uVar11;
            }
            lVar9 = FUN_032bd1d4(puVar5,uVar8,8,lVar9,uVar12,puVar10);
            uVar11 = *(uint *)(param_2 + 1);
            *param_2 = lVar9;
          }
          pfVar1 = (float *)(lVar9 + (long)(int)uVar11 * 8);
          *pfVar1 = fVar40 * param_1 + fVar19;
          pfVar1[1] = fVar37 * param_1 + fVar23;
          *puVar3 = uVar13;
          if (0 < iVar28) {
            uVar11 = uVar12 + 2;
            fVar16 = (fVar29 - fVar38) * fVar30;
            fVar30 = (fVar31 - fVar34) * fVar30;
            fVar36 = 1.0 / fVar36;
            fVar14 = (fVar16 * fVar40 + fVar30 * fVar37) * fVar36;
            fVar36 = (fVar30 * fVar40 - fVar16 * fVar37) * fVar36;
            fVar16 = fVar14 * fVar40 - fVar36 * fVar37;
            fVar17 = fVar14 * fVar37 + fVar36 * fVar40;
            uVar8 = *puVar10;
            if ((int)uVar13 < (int)(uVar8 & 0x3fffffff)) {
              lVar9 = *param_2;
            }
            else {
              lVar9 = *param_2;
              if (0x3ffffffd < (int)uVar12) {
                FUN_032bd0a8(uVar11);
                uVar8 = *puVar10;
              }
              uVar8 = (uVar8 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar8) {
                uVar8 = 0x3fffffff;
              }
              uVar4 = uVar11;
              if ((int)uVar11 <= (int)uVar8) {
                uVar4 = uVar8;
              }
              lVar9 = FUN_032bd1d4(puVar5,uVar4,8,lVar9,uVar13,puVar10);
              uVar13 = *(uint *)(param_2 + 1);
              *param_2 = lVar9;
            }
            pfVar1 = (float *)(lVar9 + (long)(int)uVar13 * 8);
            *pfVar1 = fVar16 * param_1 + fVar19;
            pfVar1[1] = fVar17 * param_1 + fVar23;
            *puVar3 = uVar11;
            if (1 < iVar28) {
              fVar15 = fVar14 * fVar16 - fVar36 * fVar17;
              fVar17 = fVar14 * fVar17 + fVar36 * fVar16;
              iVar21 = 0;
              fVar16 = fVar14;
              do {
                fVar30 = fVar15 * param_1;
                fVar29 = fVar17 * param_1;
                iVar22 = uVar12 + iVar21 + 2;
                uVar13 = uVar12 + iVar21 + 3;
                uVar11 = *puVar10;
                if (iVar22 < (int)(uVar11 & 0x3fffffff)) {
                  lVar9 = *param_2;
                }
                else {
                  lVar9 = *param_2;
                  if (0x3ffffffe < iVar22) {
                    FUN_032bd0a8(fVar30,param_1,fVar16,uVar13);
                    uVar11 = *puVar10;
                  }
                  uVar11 = (uVar11 & 0x3fffffff) << 1;
                  if (0x3ffffffe < uVar11) {
                    uVar11 = 0x3fffffff;
                  }
                  uVar8 = uVar13;
                  if ((int)uVar13 <= (int)uVar11) {
                    uVar8 = uVar11;
                  }
                  lVar9 = FUN_032bd1d4(puVar5,uVar8,8,lVar9,iVar22,puVar10);
                  iVar22 = (int)param_2[1];
                  *param_2 = lVar9;
                }
                fVar16 = fVar36 * fVar15;
                fVar15 = fVar14 * fVar15 - fVar36 * fVar17;
                fVar17 = fVar14 * fVar17 + fVar16;
                pfVar1 = (float *)(lVar9 + (long)iVar22 * 8);
                *pfVar1 = fVar30 + fVar19;
                pfVar1[1] = fVar29 + fVar23;
                iVar22 = iVar21 + 3;
                iVar21 = iVar21 + 1;
                *puVar3 = uVar13;
              } while (iVar22 < iVar28 * 2);
            }
          }
        }
        iVar21 = 1;
        fVar16 = fVar18;
        fVar14 = fVar20;
        do {
          fVar36 = fVar14;
          fVar17 = fVar16;
          iVar28 = iVar21;
          fVar24 = fVar17 - fVar32;
          fVar15 = fVar35 + fVar36;
          fVar16 = fVar24 * fVar24 + fVar15 * fVar15;
          fVar14 = fVar24 * fVar24 + fVar15 * fVar15;
          uVar27 = CONCAT44(fVar14,fVar16);
          uVar25 = NEON_frsqrte(uVar27,4);
          fVar30 = (float)uVar25;
          fVar29 = (float)((ulong)uVar25 >> 0x20);
          uVar25 = NEON_frsqrts(uVar27,CONCAT44(fVar29 * fVar29,fVar30 * fVar30),4);
          fVar30 = fVar30 * (float)uVar25;
          fVar29 = fVar29 * (float)((ulong)uVar25 >> 0x20);
          iVar21 = -(uint)(fVar16 <= 0.0);
          iVar22 = -(uint)(fVar14 <= 0.0);
          uVar27 = NEON_frsqrts(uVar27,CONCAT44(fVar29 * fVar29,fVar30 * fVar30),4);
          fVar30 = (float)uVar27 * fVar30;
          fVar29 = (float)((ulong)uVar27 >> 0x20) * fVar29;
          fVar16 = (float)CONCAT13((byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                                   CONCAT12((byte)((uint)fVar30 >> 0x10) &
                                            ~(byte)((uint)iVar21 >> 0x10),
                                            CONCAT11((byte)((uint)fVar30 >> 8) &
                                                     ~(byte)((uint)iVar21 >> 8),
                                                     SUB41(fVar30,0) & ~(byte)iVar21)));
          fVar31 = fVar24 * fVar16;
          fVar14 = (float)(CONCAT17((byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                                    CONCAT16((byte)((uint)fVar29 >> 0x10) &
                                             ~(byte)((uint)iVar22 >> 0x10),
                                             CONCAT15((byte)((uint)fVar29 >> 8) &
                                                      ~(byte)((uint)iVar22 >> 8),
                                                      CONCAT14(SUB41(fVar29,0) & ~(byte)iVar22,
                                                               fVar16)))) >> 0x20);
          fVar33 = fVar15 * fVar14;
          fVar30 = 1.0 / (-fVar32 * fVar33 - fVar35 * fVar31);
          fVar37 = (fVar32 + fVar31) * fVar30;
          fVar38 = (fVar33 - fVar35) * fVar30;
          fVar29 = fVar37 * fVar37 + fVar38 * fVar38;
          iVar21 = iVar28 * 2;
          fVar16 = fVar24 * fVar16;
          fVar14 = fVar15 * fVar14;
        } while (fVar39 < fVar29);
        if (0 < iVar28) {
          uVar11 = *puVar10;
          uVar12 = *puVar3;
          uVar13 = uVar12 + 1;
          if ((int)uVar12 < (int)(uVar11 & 0x3fffffff)) {
            lVar9 = *param_2;
            uVar11 = uVar12;
          }
          else {
            lVar9 = *param_2;
            if (0x3ffffffe < (int)uVar12) {
              FUN_032bd0a8(uVar13);
              uVar11 = *puVar10;
            }
            uVar11 = (uVar11 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar11) {
              uVar11 = 0x3fffffff;
            }
            uVar8 = uVar13;
            if ((int)uVar13 <= (int)uVar11) {
              uVar8 = uVar11;
            }
            lVar9 = FUN_032bd1d4(puVar5,uVar8,8,lVar9,uVar12,puVar10);
            uVar11 = *(uint *)(param_2 + 1);
            *param_2 = lVar9;
          }
          pfVar1 = (float *)(lVar9 + (long)(int)uVar11 * 8);
          *pfVar1 = fVar37 * param_1 + fVar19;
          pfVar1[1] = fVar38 * param_1 + fVar23;
          *puVar3 = uVar13;
          if (0 < iVar28) {
            uVar11 = uVar12 + 2;
            fVar16 = (fVar17 - fVar31) * fVar30;
            fVar30 = (fVar36 - fVar33) * fVar30;
            fVar29 = 1.0 / fVar29;
            fVar17 = (fVar16 * fVar37 + fVar30 * fVar38) * fVar29;
            fVar29 = (fVar30 * fVar37 - fVar16 * fVar38) * fVar29;
            fVar16 = fVar17 * fVar37 - fVar29 * fVar38;
            fVar14 = fVar17 * fVar38 + fVar29 * fVar37;
            uVar8 = *puVar10;
            if ((int)uVar13 < (int)(uVar8 & 0x3fffffff)) {
              lVar9 = *param_2;
            }
            else {
              lVar9 = *param_2;
              if (0x3ffffffd < (int)uVar12) {
                FUN_032bd0a8(uVar11);
                uVar8 = *puVar10;
              }
              uVar8 = (uVar8 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar8) {
                uVar8 = 0x3fffffff;
              }
              uVar4 = uVar11;
              if ((int)uVar11 <= (int)uVar8) {
                uVar4 = uVar8;
              }
              lVar9 = FUN_032bd1d4(puVar5,uVar4,8,lVar9,uVar13,puVar10);
              uVar13 = *(uint *)(param_2 + 1);
              *param_2 = lVar9;
            }
            pfVar1 = (float *)(lVar9 + (long)(int)uVar13 * 8);
            *pfVar1 = fVar16 * param_1 + fVar19;
            pfVar1[1] = fVar14 * param_1 + fVar23;
            *puVar3 = uVar11;
            if (1 < iVar28) {
              iVar21 = 0;
              fVar15 = fVar17 * fVar16 - fVar29 * fVar14;
              fVar16 = fVar17 * fVar14 + fVar29 * fVar16;
              do {
                iVar22 = uVar12 + iVar21 + 2;
                uVar13 = uVar12 + iVar21 + 3;
                uVar11 = *puVar10;
                if (iVar22 < (int)(uVar11 & 0x3fffffff)) {
                  lVar9 = *param_2;
                }
                else {
                  lVar9 = *param_2;
                  if (0x3ffffffe < iVar22) {
                    FUN_032bd0a8(uVar13);
                    uVar11 = *puVar10;
                  }
                  uVar11 = (uVar11 & 0x3fffffff) << 1;
                  if (0x3ffffffe < uVar11) {
                    uVar11 = 0x3fffffff;
                  }
                  uVar8 = uVar13;
                  if ((int)uVar13 <= (int)uVar11) {
                    uVar8 = uVar11;
                  }
                  lVar9 = FUN_032bd1d4(puVar5,uVar8,8,lVar9,iVar22,puVar10);
                  iVar22 = (int)param_2[1];
                  *param_2 = lVar9;
                }
                pfVar1 = (float *)(lVar9 + (long)iVar22 * 8);
                fVar14 = fVar29 * fVar15;
                *pfVar1 = fVar15 * param_1 + fVar19;
                pfVar1[1] = fVar16 * param_1 + fVar23;
                iVar22 = iVar21 + 3;
                iVar21 = iVar21 + 1;
                *puVar3 = uVar13;
                fVar15 = fVar17 * fVar15 - fVar29 * fVar16;
                fVar16 = fVar17 * fVar16 + fVar14;
              } while (iVar22 < iVar28 * 2);
            }
          }
        }
        fVar16 = fVar26;
      }
      else {
        fVar30 = (fVar35 - fVar14) * (1.0 / fVar15);
        fVar16 = (fVar32 - fVar17) * (1.0 / fVar15);
        if (fVar30 * fVar30 + fVar16 * fVar16 <= fVar39) {
          uVar12 = *puVar10;
          uVar13 = *puVar3;
          uVar11 = uVar13 + 1;
          fVar19 = fVar30 * param_1 + fVar19;
          fVar23 = fVar16 * param_1 + fVar23;
          if ((int)(uVar12 & 0x3fffffff) <= (int)uVar13) goto LAB_0319eb18;
LAB_0319e7a4:
          lVar9 = *param_2;
          goto LAB_0319e7a8;
        }
        iVar21 = 1;
        fVar16 = fVar18;
        fVar15 = fVar20;
        do {
          fVar29 = fVar15;
          fVar35 = fVar16;
          iVar28 = iVar21;
          fVar24 = fVar14 + fVar35;
          fVar36 = fVar17 + fVar29;
          fVar16 = fVar24 * fVar24 + fVar36 * fVar36;
          fVar15 = fVar24 * fVar24 + fVar36 * fVar36;
          uVar27 = CONCAT44(fVar15,fVar16);
          uVar25 = NEON_frsqrte(uVar27,4);
          fVar30 = (float)uVar25;
          fVar32 = (float)((ulong)uVar25 >> 0x20);
          uVar25 = NEON_frsqrts(uVar27,CONCAT44(fVar32 * fVar32,fVar30 * fVar30),4);
          fVar30 = fVar30 * (float)uVar25;
          fVar32 = fVar32 * (float)((ulong)uVar25 >> 0x20);
          iVar21 = -(uint)(fVar16 <= 0.0);
          iVar22 = -(uint)(fVar15 <= 0.0);
          uVar27 = NEON_frsqrts(uVar27,CONCAT44(fVar32 * fVar32,fVar30 * fVar30),4);
          fVar30 = (float)uVar27 * fVar30;
          fVar32 = (float)((ulong)uVar27 >> 0x20) * fVar32;
          fVar16 = (float)CONCAT13((byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                                   CONCAT12((byte)((uint)fVar30 >> 0x10) &
                                            ~(byte)((uint)iVar21 >> 0x10),
                                            CONCAT11((byte)((uint)fVar30 >> 8) &
                                                     ~(byte)((uint)iVar21 >> 8),
                                                     SUB41(fVar30,0) & ~(byte)iVar21)));
          fVar31 = fVar24 * fVar16;
          fVar15 = (float)(CONCAT17((byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                                    CONCAT16((byte)((uint)fVar32 >> 0x10) &
                                             ~(byte)((uint)iVar22 >> 0x10),
                                             CONCAT15((byte)((uint)fVar32 >> 8) &
                                                      ~(byte)((uint)iVar22 >> 8),
                                                      CONCAT14(SUB41(fVar32,0) & ~(byte)iVar22,
                                                               fVar16)))) >> 0x20);
          fVar33 = fVar36 * fVar15;
          fVar30 = 1.0 / (fVar14 * fVar33 - fVar17 * fVar31);
          fVar38 = (fVar31 - fVar14) * fVar30;
          fVar37 = (fVar33 - fVar17) * fVar30;
          fVar32 = fVar38 * fVar38 + fVar37 * fVar37;
          iVar21 = iVar28 * 2;
          fVar16 = fVar24 * fVar16;
          fVar15 = fVar36 * fVar15;
        } while (fVar39 < fVar32);
        if (0 < iVar28) {
          uVar11 = *puVar10;
          uVar12 = *puVar3;
          uVar13 = uVar12 + 1;
          if ((int)uVar12 < (int)(uVar11 & 0x3fffffff)) {
            lVar9 = *param_2;
            uVar11 = uVar12;
          }
          else {
            lVar9 = *param_2;
            if (0x3ffffffe < (int)uVar12) {
              FUN_032bd0a8(uVar13);
              uVar11 = *puVar10;
            }
            uVar11 = (uVar11 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar11) {
              uVar11 = 0x3fffffff;
            }
            uVar8 = uVar13;
            if ((int)uVar13 <= (int)uVar11) {
              uVar8 = uVar11;
            }
            lVar9 = FUN_032bd1d4(puVar5,uVar8,8,lVar9,uVar12,puVar10);
            *param_2 = lVar9;
            uVar11 = *(uint *)(param_2 + 1);
          }
          pfVar1 = (float *)(lVar9 + (long)(int)uVar11 * 8);
          *pfVar1 = fVar38 * param_1 + fVar19;
          pfVar1[1] = fVar37 * param_1 + fVar23;
          *puVar3 = uVar13;
          if (0 < iVar28) {
            uVar8 = *puVar10;
            uVar11 = uVar12 + 2;
            fVar16 = (fVar35 - fVar31) * fVar30;
            fVar30 = (fVar29 - fVar33) * fVar30;
            fVar32 = 1.0 / fVar32;
            fVar17 = (fVar16 * fVar38 + fVar30 * fVar37) * fVar32;
            fVar32 = (fVar30 * fVar38 - fVar16 * fVar37) * fVar32;
            fVar16 = fVar17 * fVar38 - fVar32 * fVar37;
            fVar14 = fVar17 * fVar37 + fVar32 * fVar38;
            if ((int)uVar13 < (int)(uVar8 & 0x3fffffff)) {
              lVar9 = *param_2;
            }
            else {
              lVar9 = *param_2;
              if (0x3ffffffd < (int)uVar12) {
                FUN_032bd0a8(uVar11);
                uVar8 = *puVar10;
              }
              uVar8 = (uVar8 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar8) {
                uVar8 = 0x3fffffff;
              }
              uVar4 = uVar11;
              if ((int)uVar11 <= (int)uVar8) {
                uVar4 = uVar8;
              }
              lVar9 = FUN_032bd1d4(puVar5,uVar4,8,lVar9,uVar13,puVar10);
              *param_2 = lVar9;
              uVar13 = *(uint *)(param_2 + 1);
            }
            pfVar1 = (float *)(lVar9 + (long)(int)uVar13 * 8);
            *pfVar1 = fVar16 * param_1 + fVar19;
            pfVar1[1] = fVar14 * param_1 + fVar23;
            *puVar3 = uVar11;
            if (1 < iVar28) {
              fVar15 = fVar17 * fVar16 - fVar32 * fVar14;
              fVar16 = fVar17 * fVar14 + fVar32 * fVar16;
              iVar21 = 0;
              do {
                fVar14 = fVar15 * param_1;
                iVar22 = uVar12 + iVar21 + 2;
                uVar13 = uVar12 + iVar21 + 3;
                uVar11 = *puVar10;
                if (iVar22 < (int)(uVar11 & 0x3fffffff)) {
                  lVar9 = *param_2;
                }
                else {
                  lVar9 = *param_2;
                  if (0x3ffffffe < iVar22) {
                    FUN_032bd0a8(uVar13);
                    uVar11 = *puVar10;
                  }
                  uVar11 = (uVar11 & 0x3fffffff) << 1;
                  if (0x3ffffffe < uVar11) {
                    uVar11 = 0x3fffffff;
                  }
                  uVar8 = uVar13;
                  if ((int)uVar13 <= (int)uVar11) {
                    uVar8 = uVar11;
                  }
                  lVar9 = FUN_032bd1d4(puVar5,uVar8,8,lVar9,iVar22,puVar10);
                  iVar22 = (int)param_2[1];
                  *param_2 = lVar9;
                }
                pfVar1 = (float *)(lVar9 + (long)iVar22 * 8);
                fVar30 = fVar32 * fVar15;
                pfVar1[1] = fVar16 * param_1 + fVar23;
                fVar15 = fVar17 * fVar15 - fVar32 * fVar16;
                fVar16 = fVar17 * fVar16 + fVar30;
                *pfVar1 = fVar14 + fVar19;
                iVar22 = iVar21 + 3;
                iVar21 = iVar21 + 1;
                *puVar3 = uVar13;
              } while (iVar22 < iVar28 * 2);
              fVar16 = fVar26;
              goto LAB_0319e724;
            }
          }
        }
        fVar16 = fVar26;
      }
    }
    else {
      fVar30 = (fVar35 - fVar14) * (param_1 / fVar15);
      fVar15 = (fVar32 - fVar17) * (param_1 / fVar15);
      fVar36 = fVar35 * fVar30 + fVar32 * fVar15;
      bVar6 = false;
      if ((fVar36 < fVar16 + -0.0001) && (bVar6 = false, !NAN(fVar36) && !NAN(fVar26 + -0.0001))) {
        bVar6 = fVar36 < fVar26 + -0.0001;
      }
      if (bVar6) {
        uVar11 = *puVar10;
        uVar12 = *puVar3;
        uVar13 = uVar12 + 1;
        if ((int)uVar12 < (int)(uVar11 & 0x3fffffff)) {
          lVar9 = *param_2;
        }
        else {
          lVar9 = *param_2;
          if (0x3ffffffe < (int)uVar12) {
            FUN_032bd0a8(uVar13);
            uVar11 = *puVar10;
          }
          uVar11 = (uVar11 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar11) {
            uVar11 = 0x3fffffff;
          }
          uVar8 = uVar13;
          if ((int)uVar13 <= (int)uVar11) {
            uVar8 = uVar11;
          }
          lVar9 = FUN_032bd1d4(puVar5,uVar8,8,lVar9,uVar12,puVar10);
          uVar12 = *(uint *)(param_2 + 1);
          *param_2 = lVar9;
        }
        pfVar1 = (float *)(lVar9 + (long)(int)uVar12 * 8);
        *pfVar1 = fVar30 + fVar19;
        pfVar1[1] = fVar15 + fVar23;
        *puVar3 = uVar13;
        fVar16 = fVar26 - fVar36;
      }
      else {
        uVar13 = *puVar10;
        uVar11 = *puVar3;
        uVar12 = uVar11 + 1;
        if ((int)uVar11 < (int)(uVar13 & 0x3fffffff)) {
          lVar9 = *param_2;
          uVar13 = uVar11;
        }
        else {
          lVar9 = *param_2;
          if (0x3ffffffe < (int)uVar11) {
            FUN_032bd0a8(uVar12);
            uVar13 = *puVar10;
          }
          uVar13 = (uVar13 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar13) {
            uVar13 = 0x3fffffff;
          }
          uVar8 = uVar12;
          if ((int)uVar12 <= (int)uVar13) {
            uVar8 = uVar13;
          }
          lVar9 = FUN_032bd1d4(puVar5,uVar8,8,lVar9,uVar11,puVar10);
          *param_2 = lVar9;
          uVar13 = *(uint *)(param_2 + 1);
        }
        pfVar1 = (float *)(lVar9 + (long)(int)uVar13 * 8);
        *pfVar1 = fVar19 - fVar17 * param_1;
        pfVar1[1] = fVar14 * param_1 + fVar23;
        *puVar3 = uVar12;
        uVar8 = *puVar10;
        uVar13 = uVar11 + 2;
        if ((int)uVar12 < (int)(uVar8 & 0x3fffffff)) {
          lVar9 = *param_2;
        }
        else {
          lVar9 = *param_2;
          if (0x3ffffffd < (int)uVar11) {
            FUN_032bd0a8(uVar13);
            uVar8 = *puVar10;
          }
          uVar8 = (uVar8 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar8) {
            uVar8 = 0x3fffffff;
          }
          uVar4 = uVar13;
          if ((int)uVar13 <= (int)uVar8) {
            uVar4 = uVar8;
          }
          lVar9 = FUN_032bd1d4(puVar5,uVar4,8,lVar9,uVar12,puVar10);
          uVar12 = *(uint *)(param_2 + 1);
          *param_2 = lVar9;
        }
        pfVar1 = (float *)(lVar9 + (long)(int)uVar12 * 8);
        *pfVar1 = fVar19;
        pfVar1[1] = fVar23;
        *puVar3 = uVar13;
        uVar12 = *puVar10;
        fVar19 = fVar19 - fVar32 * param_1;
        fVar23 = fVar35 * param_1 + fVar23;
        uVar11 = uVar11 + 3;
        if ((int)uVar13 < (int)(uVar12 & 0x3fffffff)) goto LAB_0319e7a4;
LAB_0319eb18:
        lVar9 = *param_2;
        if (0x3ffffffe < (int)uVar13) {
          FUN_032bd0a8(uVar11);
          uVar12 = *puVar10;
        }
        uVar12 = (uVar12 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar12) {
          uVar12 = 0x3fffffff;
        }
        uVar8 = uVar11;
        if ((int)uVar11 <= (int)uVar12) {
          uVar8 = uVar12;
        }
        lVar9 = FUN_032bd1d4(puVar5,uVar8,8,lVar9,uVar13,puVar10);
        *param_2 = lVar9;
        uVar13 = *(uint *)(param_2 + 1);
LAB_0319e7a8:
        pfVar1 = (float *)(lVar9 + (long)(int)uVar13 * 8);
        *pfVar1 = fVar19;
        pfVar1[1] = fVar23;
        *puVar3 = uVar11;
        fVar16 = fVar26;
      }
    }
LAB_0319e724:
    if ((long)(int)param_3[1] <= lVar7 + 1) {
      return;
    }
    lVar9 = *param_3;
    iVar28 = (int)lVar7;
    lVar7 = lVar7 + 1;
    fVar14 = fVar18;
    fVar17 = fVar20;
  } while( true );
}


