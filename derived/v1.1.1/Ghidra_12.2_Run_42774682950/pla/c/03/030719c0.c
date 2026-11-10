/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030719c0; name: FUN_030719c0
 */


undefined8
FUN_030719c0(undefined8 *param_1,undefined8 param_2,float *param_3,undefined8 *param_4,
            undefined8 *param_5,undefined8 *param_6,float *param_7,undefined4 *param_8,
            undefined8 *param_9,undefined4 *param_10)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
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
  float fVar23;
  ulong uVar21;
  float fVar24;
  undefined1 auVar22 [16];
  float fVar26;
  float fVar27;
  undefined1 auVar25 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  undefined8 uVar37;
  
  fVar17 = (float)param_5[1];
  fVar15 = (float)*param_5;
  fVar16 = (float)((ulong)*param_5 >> 0x20);
  fVar14 = (float)param_5[3];
  fVar12 = (float)param_5[2];
  fVar13 = (float)((ulong)param_5[2] >> 0x20);
  fVar11 = (float)*param_1;
  fVar18 = fVar11 * fVar11;
  fVar19 = (float)((ulong)*param_1 >> 0x20);
  fVar19 = fVar19 * fVar19;
  if (((fVar15 == fVar12 && fVar16 == fVar13) && fVar17 == fVar14) ||
     ((((fVar20 = (param_7[4] - fVar15) * (param_7[4] - fVar15),
        fVar23 = (param_7[5] - fVar16) * (param_7[5] - fVar16),
        fVar24 = (param_7[6] - fVar17) * (param_7[6] - fVar17),
        fVar26 = (*param_7 - fVar12) * (*param_7 - fVar12),
        fVar27 = (param_7[1] - fVar13) * (param_7[1] - fVar13),
        fVar29 = (param_7[2] - fVar14) * (param_7[2] - fVar14),
        uVar21 = CONCAT44(-(uint)(fVar20 + fVar23 + fVar24 <= fVar19),
                          -(uint)(fVar20 + fVar23 + fVar24 <= fVar18)) &
                 CONCAT44(-(uint)(fVar26 + fVar27 + fVar29 <= fVar19),
                          -(uint)(fVar26 + fVar27 + fVar29 <= fVar18)),
        (int)uVar21 == 0 && (int)(uVar21 >> 0x20) == 0 &&
        (fVar20 = (param_7[8] - fVar15) * (param_7[8] - fVar15),
        fVar23 = (param_7[9] - fVar16) * (param_7[9] - fVar16),
        fVar24 = (param_7[10] - fVar17) * (param_7[10] - fVar17),
        fVar26 = (param_7[4] - fVar12) * (param_7[4] - fVar12),
        fVar27 = (param_7[5] - fVar13) * (param_7[5] - fVar13),
        fVar29 = (param_7[6] - fVar14) * (param_7[6] - fVar14),
        uVar21 = CONCAT44(-(uint)(fVar20 + fVar23 + fVar24 <= fVar19),
                          -(uint)(fVar20 + fVar23 + fVar24 <= fVar18)) &
                 CONCAT44(-(uint)(fVar26 + fVar27 + fVar29 <= fVar19),
                          -(uint)(fVar26 + fVar27 + fVar29 <= fVar18)),
        (int)uVar21 == 0 && (int)(uVar21 >> 0x20) == 0)) &&
       (fVar20 = (param_7[0xc] - fVar15) * (param_7[0xc] - fVar15),
       fVar23 = (param_7[0xd] - fVar16) * (param_7[0xd] - fVar16),
       fVar24 = (param_7[0xe] - fVar17) * (param_7[0xe] - fVar17),
       fVar26 = (param_7[8] - fVar12) * (param_7[8] - fVar12),
       fVar27 = (param_7[9] - fVar13) * (param_7[9] - fVar13),
       fVar29 = (param_7[10] - fVar14) * (param_7[10] - fVar14),
       uVar21 = CONCAT44(-(uint)(fVar20 + fVar23 + fVar24 <= fVar19),
                         -(uint)(fVar20 + fVar23 + fVar24 <= fVar18)) &
                CONCAT44(-(uint)(fVar26 + fVar27 + fVar29 <= fVar19),
                         -(uint)(fVar26 + fVar27 + fVar29 <= fVar18)),
       (int)uVar21 == 0 && (int)(uVar21 >> 0x20) == 0)) &&
      (fVar20 = (*param_7 - fVar15) * (*param_7 - fVar15),
      fVar23 = (param_7[1] - fVar16) * (param_7[1] - fVar16),
      fVar24 = (param_7[2] - fVar17) * (param_7[2] - fVar17),
      fVar26 = (param_7[0xc] - fVar12) * (param_7[0xc] - fVar12),
      fVar27 = (param_7[0xd] - fVar13) * (param_7[0xd] - fVar13),
      fVar29 = (param_7[0xe] - fVar14) * (param_7[0xe] - fVar14),
      uVar21 = CONCAT44(-(uint)(fVar20 + fVar23 + fVar24 <= fVar19),
                        -(uint)(fVar20 + fVar23 + fVar24 <= fVar18)) &
               CONCAT44(-(uint)(fVar26 + fVar27 + fVar29 <= fVar19),
                        -(uint)(fVar26 + fVar27 + fVar29 <= fVar18)),
      (int)uVar21 == 0 && (int)(uVar21 >> 0x20) == 0)))) {
    fVar20 = *(float *)(param_5 + 4);
    fVar23 = *(float *)((long)param_5 + 0x24);
    fVar24 = *(float *)(param_5 + 5);
    if ((fVar14 == fVar24 && (fVar12 == fVar20 && fVar13 == fVar23)) ||
       (((fVar28 = (float)*(undefined8 *)param_7 - fVar20,
         fVar30 = (float)((ulong)*(undefined8 *)param_7 >> 0x20) - fVar23,
         fVar31 = (float)*(undefined8 *)(param_7 + 2) - fVar24,
         fVar26 = (param_7[4] - fVar12) * (param_7[4] - fVar12),
         fVar27 = (param_7[5] - fVar13) * (param_7[5] - fVar13),
         fVar29 = (param_7[6] - fVar14) * (param_7[6] - fVar14), fVar28 = fVar28 * fVar28,
         fVar30 = fVar30 * fVar30, fVar31 = fVar31 * fVar31,
         uVar21 = CONCAT44(-(uint)(fVar26 + fVar27 + fVar29 <= fVar19),
                           -(uint)(fVar26 + fVar27 + fVar29 <= fVar18)) &
                  CONCAT44(-(uint)(fVar28 + fVar30 + fVar31 <= fVar19),
                           -(uint)(fVar28 + fVar30 + fVar31 <= fVar18)),
         (int)uVar21 == 0 && (int)(uVar21 >> 0x20) == 0 &&
         (fVar28 = (float)*(undefined8 *)(param_7 + 4) - fVar20,
         fVar30 = (float)((ulong)*(undefined8 *)(param_7 + 4) >> 0x20) - fVar23,
         fVar31 = (float)*(undefined8 *)(param_7 + 6) - fVar24,
         fVar26 = (param_7[8] - fVar12) * (param_7[8] - fVar12),
         fVar27 = (param_7[9] - fVar13) * (param_7[9] - fVar13),
         fVar29 = (param_7[10] - fVar14) * (param_7[10] - fVar14), fVar28 = fVar28 * fVar28,
         fVar30 = fVar30 * fVar30, fVar31 = fVar31 * fVar31,
         uVar21 = CONCAT44(-(uint)(fVar26 + fVar27 + fVar29 <= fVar19),
                           -(uint)(fVar26 + fVar27 + fVar29 <= fVar18)) &
                  CONCAT44(-(uint)(fVar28 + fVar30 + fVar31 <= fVar19),
                           -(uint)(fVar28 + fVar30 + fVar31 <= fVar18)),
         (int)uVar21 == 0 && (int)(uVar21 >> 0x20) == 0)) &&
        ((fVar28 = (float)*(undefined8 *)(param_7 + 8) - fVar20,
         fVar30 = (float)((ulong)*(undefined8 *)(param_7 + 8) >> 0x20) - fVar23,
         fVar31 = (float)*(undefined8 *)(param_7 + 10) - fVar24,
         fVar26 = (param_7[0xc] - fVar12) * (param_7[0xc] - fVar12),
         fVar27 = (param_7[0xd] - fVar13) * (param_7[0xd] - fVar13),
         fVar29 = (param_7[0xe] - fVar14) * (param_7[0xe] - fVar14), fVar28 = fVar28 * fVar28,
         fVar30 = fVar30 * fVar30, fVar31 = fVar31 * fVar31,
         uVar21 = CONCAT44(-(uint)(fVar26 + fVar27 + fVar29 <= fVar19),
                           -(uint)(fVar26 + fVar27 + fVar29 <= fVar18)) &
                  CONCAT44(-(uint)(fVar28 + fVar30 + fVar31 <= fVar19),
                           -(uint)(fVar28 + fVar30 + fVar31 <= fVar18)),
         (int)uVar21 == 0 && (int)(uVar21 >> 0x20) == 0 &&
         (fVar28 = (float)*(undefined8 *)(param_7 + 0xc) - fVar20,
         fVar30 = (float)((ulong)*(undefined8 *)(param_7 + 0xc) >> 0x20) - fVar23,
         fVar31 = (float)*(undefined8 *)(param_7 + 0xe) - fVar24,
         fVar26 = (*param_7 - fVar12) * (*param_7 - fVar12),
         fVar27 = (param_7[1] - fVar13) * (param_7[1] - fVar13),
         fVar29 = (param_7[2] - fVar14) * (param_7[2] - fVar14), fVar28 = fVar28 * fVar28,
         fVar30 = fVar30 * fVar30, fVar31 = fVar31 * fVar31,
         uVar21 = CONCAT44(-(uint)(fVar26 + fVar27 + fVar29 <= fVar19),
                           -(uint)(fVar26 + fVar27 + fVar29 <= fVar18)) &
                  CONCAT44(-(uint)(fVar28 + fVar30 + fVar31 <= fVar19),
                           -(uint)(fVar28 + fVar30 + fVar31 <= fVar18)),
         (int)uVar21 == 0 && (int)(uVar21 >> 0x20) == 0)))))) {
      fVar26 = *(float *)(param_5 + 6);
      fVar27 = *(float *)((long)param_5 + 0x34);
      fVar29 = *(float *)(param_5 + 7);
      if (((fVar20 == fVar26 && fVar23 == fVar27) && fVar24 == fVar29) ||
         (((fVar28 = (float)*(undefined8 *)(param_7 + 4) - fVar20,
           fVar30 = (float)((ulong)*(undefined8 *)(param_7 + 4) >> 0x20) - fVar23,
           fVar31 = (float)*(undefined8 *)(param_7 + 6) - fVar24,
           fVar36 = (float)*(undefined8 *)param_7 - fVar26,
           fVar33 = (float)((ulong)*(undefined8 *)param_7 >> 0x20) - fVar27,
           fVar34 = (float)*(undefined8 *)(param_7 + 2) - fVar29, fVar28 = fVar28 * fVar28,
           fVar30 = fVar30 * fVar30, fVar31 = fVar31 * fVar31, fVar36 = fVar36 * fVar36,
           fVar33 = fVar33 * fVar33, fVar34 = fVar34 * fVar34,
           uVar21 = CONCAT44(-(uint)(fVar28 + fVar30 + fVar31 <= fVar19),
                             -(uint)(fVar28 + fVar30 + fVar31 <= fVar18)) &
                    CONCAT44(-(uint)(fVar36 + fVar33 + fVar34 <= fVar19),
                             -(uint)(fVar36 + fVar33 + fVar34 <= fVar18)),
           (int)uVar21 == 0 && (int)(uVar21 >> 0x20) == 0 &&
           (fVar28 = (float)*(undefined8 *)(param_7 + 8) - fVar20,
           fVar30 = (float)((ulong)*(undefined8 *)(param_7 + 8) >> 0x20) - fVar23,
           fVar31 = (float)*(undefined8 *)(param_7 + 10) - fVar24,
           fVar36 = (float)*(undefined8 *)(param_7 + 4) - fVar26,
           fVar33 = (float)((ulong)*(undefined8 *)(param_7 + 4) >> 0x20) - fVar27,
           fVar34 = (float)*(undefined8 *)(param_7 + 6) - fVar29, fVar28 = fVar28 * fVar28,
           fVar30 = fVar30 * fVar30, fVar31 = fVar31 * fVar31, fVar36 = fVar36 * fVar36,
           fVar33 = fVar33 * fVar33, fVar34 = fVar34 * fVar34,
           uVar21 = CONCAT44(-(uint)(fVar28 + fVar30 + fVar31 <= fVar19),
                             -(uint)(fVar28 + fVar30 + fVar31 <= fVar18)) &
                    CONCAT44(-(uint)(fVar36 + fVar33 + fVar34 <= fVar19),
                             -(uint)(fVar36 + fVar33 + fVar34 <= fVar18)),
           (int)uVar21 == 0 && (int)(uVar21 >> 0x20) == 0)) &&
          ((fVar28 = (float)*(undefined8 *)(param_7 + 0xc) - fVar20,
           fVar30 = (float)((ulong)*(undefined8 *)(param_7 + 0xc) >> 0x20) - fVar23,
           fVar31 = (float)*(undefined8 *)(param_7 + 0xe) - fVar24,
           fVar36 = (float)*(undefined8 *)(param_7 + 8) - fVar26,
           fVar33 = (float)((ulong)*(undefined8 *)(param_7 + 8) >> 0x20) - fVar27,
           fVar34 = (float)*(undefined8 *)(param_7 + 10) - fVar29, fVar28 = fVar28 * fVar28,
           fVar30 = fVar30 * fVar30, fVar31 = fVar31 * fVar31, fVar36 = fVar36 * fVar36,
           fVar33 = fVar33 * fVar33, fVar34 = fVar34 * fVar34,
           uVar21 = CONCAT44(-(uint)(fVar28 + fVar30 + fVar31 <= fVar19),
                             -(uint)(fVar28 + fVar30 + fVar31 <= fVar18)) &
                    CONCAT44(-(uint)(fVar36 + fVar33 + fVar34 <= fVar19),
                             -(uint)(fVar36 + fVar33 + fVar34 <= fVar18)),
           (int)uVar21 == 0 && (int)(uVar21 >> 0x20) == 0 &&
           (fVar20 = (float)*(undefined8 *)param_7 - fVar20,
           fVar23 = (float)((ulong)*(undefined8 *)param_7 >> 0x20) - fVar23,
           fVar24 = (float)*(undefined8 *)(param_7 + 2) - fVar24, fVar20 = fVar20 * fVar20,
           fVar23 = fVar23 * fVar23, fVar24 = fVar24 * fVar24,
           fVar28 = (float)*(undefined8 *)(param_7 + 0xc) - fVar26,
           fVar30 = (float)((ulong)*(undefined8 *)(param_7 + 0xc) >> 0x20) - fVar27,
           fVar31 = (float)*(undefined8 *)(param_7 + 0xe) - fVar29, fVar28 = fVar28 * fVar28,
           fVar30 = fVar30 * fVar30, fVar31 = fVar31 * fVar31,
           uVar21 = CONCAT44(-(uint)(fVar20 + fVar23 + fVar24 <= fVar19),
                             -(uint)(fVar20 + fVar23 + fVar24 <= fVar18)) &
                    CONCAT44(-(uint)(fVar28 + fVar30 + fVar31 <= fVar19),
                             -(uint)(fVar28 + fVar30 + fVar31 <= fVar18)),
           (int)uVar21 == 0 && (int)(uVar21 >> 0x20) == 0)))))) {
        if (fVar29 == fVar17 && (fVar26 == fVar15 && fVar27 == fVar16)) {
          return 0x80;
        }
        fVar28 = (float)*(undefined8 *)param_7 - fVar15;
        fVar30 = (float)((ulong)*(undefined8 *)param_7 >> 0x20) - fVar16;
        fVar31 = (float)*(undefined8 *)(param_7 + 2) - fVar17;
        fVar20 = (param_7[4] - fVar26) * (param_7[4] - fVar26);
        fVar23 = (param_7[5] - fVar27) * (param_7[5] - fVar27);
        fVar24 = (param_7[6] - fVar29) * (param_7[6] - fVar29);
        fVar28 = fVar28 * fVar28;
        fVar30 = fVar30 * fVar30;
        fVar31 = fVar31 * fVar31;
        uVar21 = CONCAT44(-(uint)(fVar20 + fVar23 + fVar24 <= fVar19),
                          -(uint)(fVar20 + fVar23 + fVar24 <= fVar18)) &
                 CONCAT44(-(uint)(fVar28 + fVar30 + fVar31 <= fVar19),
                          -(uint)(fVar28 + fVar30 + fVar31 <= fVar18));
        if (((((int)uVar21 == 0 && (int)(uVar21 >> 0x20) == 0) &&
             (fVar28 = (float)*(undefined8 *)(param_7 + 4) - fVar15,
             fVar30 = (float)((ulong)*(undefined8 *)(param_7 + 4) >> 0x20) - fVar16,
             fVar31 = (float)*(undefined8 *)(param_7 + 6) - fVar17,
             fVar20 = (param_7[8] - fVar26) * (param_7[8] - fVar26),
             fVar23 = (param_7[9] - fVar27) * (param_7[9] - fVar27),
             fVar24 = (param_7[10] - fVar29) * (param_7[10] - fVar29), fVar28 = fVar28 * fVar28,
             fVar30 = fVar30 * fVar30, fVar31 = fVar31 * fVar31,
             uVar21 = CONCAT44(-(uint)(fVar20 + fVar23 + fVar24 <= fVar19),
                               -(uint)(fVar20 + fVar23 + fVar24 <= fVar18)) &
                      CONCAT44(-(uint)(fVar28 + fVar30 + fVar31 <= fVar19),
                               -(uint)(fVar28 + fVar30 + fVar31 <= fVar18)),
             (int)uVar21 == 0 && (int)(uVar21 >> 0x20) == 0)) &&
            (fVar28 = (float)*(undefined8 *)(param_7 + 8) - fVar15,
            fVar30 = (float)((ulong)*(undefined8 *)(param_7 + 8) >> 0x20) - fVar16,
            fVar31 = (float)*(undefined8 *)(param_7 + 10) - fVar17,
            fVar20 = (param_7[0xc] - fVar26) * (param_7[0xc] - fVar26),
            fVar23 = (param_7[0xd] - fVar27) * (param_7[0xd] - fVar27),
            fVar24 = (param_7[0xe] - fVar29) * (param_7[0xe] - fVar29), fVar28 = fVar28 * fVar28,
            fVar30 = fVar30 * fVar30, fVar31 = fVar31 * fVar31,
            uVar21 = CONCAT44(-(uint)(fVar20 + fVar23 + fVar24 <= fVar19),
                              -(uint)(fVar20 + fVar23 + fVar24 <= fVar18)) &
                     CONCAT44(-(uint)(fVar28 + fVar30 + fVar31 <= fVar19),
                              -(uint)(fVar28 + fVar30 + fVar31 <= fVar18)),
            (int)uVar21 == 0 && (int)(uVar21 >> 0x20) == 0)) &&
           (fVar20 = (*param_7 - fVar26) * (*param_7 - fVar26),
           fVar23 = (param_7[1] - fVar27) * (param_7[1] - fVar27),
           fVar24 = (param_7[2] - fVar29) * (param_7[2] - fVar29),
           fVar26 = (param_7[0xc] - fVar15) * (param_7[0xc] - fVar15),
           fVar27 = (param_7[0xd] - fVar16) * (param_7[0xd] - fVar16),
           fVar29 = (param_7[0xe] - fVar17) * (param_7[0xe] - fVar17),
           uVar21 = CONCAT44(-(uint)(fVar20 + fVar23 + fVar24 <= fVar19),
                             -(uint)(fVar20 + fVar23 + fVar24 <= fVar18)) &
                    CONCAT44(-(uint)(fVar26 + fVar27 + fVar29 <= fVar19),
                             -(uint)(fVar26 + fVar27 + fVar29 <= fVar18)),
           (int)uVar21 == 0 && (int)(uVar21 >> 0x20) == 0)) {
          return 0x80;
        }
        uVar10 = 3;
      }
      else {
        uVar10 = 2;
      }
    }
    else {
      uVar10 = 1;
    }
  }
  else {
    uVar10 = 0;
  }
  pfVar1 = (float *)(param_5 + (ulong)uVar10 * 2);
  pfVar2 = (float *)(param_5 + (ulong)(uVar10 + 1 & 3) * 2);
  fVar24 = *pfVar1 - *pfVar2;
  fVar26 = pfVar1[1] - pfVar2[1];
  fVar27 = pfVar1[2] - pfVar2[2];
  fVar19 = *pfVar1 - (float)*param_4;
  fVar20 = pfVar1[1] - (float)((ulong)*param_4 >> 0x20);
  fVar23 = pfVar1[2] - (float)param_4[1];
  fVar29 = fVar24 * fVar19;
  fVar28 = fVar26 * fVar20;
  fVar30 = fVar27 * fVar23;
  uVar32 = CONCAT44(fVar24 * fVar24 + fVar26 * fVar26 + fVar27 * fVar27,
                    fVar24 * fVar24 + fVar26 * fVar26 + fVar27 * fVar27);
  uVar35 = NEON_frecpe(uVar32,4);
  uVar37 = NEON_frecps(uVar32,uVar35,4);
  fVar31 = (float)uVar35 * (float)uVar37;
  fVar36 = (float)((ulong)uVar35 >> 0x20) * (float)((ulong)uVar37 >> 0x20);
  uVar32 = NEON_frecps(uVar32,CONCAT44(fVar36,fVar31),4);
  uVar35 = NEON_fmov(0x3f800000,4);
  uVar32 = NEON_fminnm(CONCAT44((fVar29 + fVar28 + fVar30) * fVar36 * (float)((ulong)uVar32 >> 0x20)
                                ,(fVar29 + fVar28 + fVar30) * fVar31 * (float)uVar32),uVar35,4);
  uVar32 = NEON_fmax(uVar32,0,4);
  fVar29 = (float)((ulong)uVar32 >> 0x20);
  fVar19 = fVar19 - fVar24 * (float)uVar32;
  fVar20 = fVar20 - fVar26 * fVar29;
  fVar23 = fVar23 - fVar27 * (float)uVar32;
  fVar24 = (pfVar1[3] - (float)((ulong)param_4[1] >> 0x20)) - (pfVar1[3] - pfVar2[3]) * fVar29;
  auVar22._0_4_ = fVar19 * fVar19;
  auVar22._4_4_ = fVar20 * fVar20;
  auVar22._8_4_ = fVar23 * fVar23;
  auVar22._12_4_ = fVar24 * fVar24;
  auVar25 = NEON_ext(auVar22,auVar22,8,1);
  if (auVar22._0_4_ + auVar22._4_4_ + auVar25._0_4_ <= fVar18) {
    uVar35 = param_6[1];
    uVar32 = *param_6;
    fVar19 = (float)uVar32;
    fVar18 = (float)((ulong)uVar32 >> 0x20);
    fVar20 = (float)uVar35;
    fVar23 = (float)((ulong)uVar35 >> 0x20);
    if (ABS(param_3[2] - fVar20) <= 0.000100016594 &&
        (ABS(*param_3 - fVar19) <= 0.000100016594 && ABS(param_3[1] - fVar18) <= 0.000100016594)) {
      return 0x81;
    }
    fVar15 = fVar15 * fVar19;
    fVar16 = fVar16 * fVar18;
    fVar24 = (float)((ulong)param_5[1] >> 0x20) * fVar23;
    auVar25._4_4_ = fVar16;
    auVar25._0_4_ = fVar15;
    auVar25._8_4_ = fVar17 * fVar20;
    auVar25._12_4_ = fVar24;
    auVar9._4_4_ = fVar16;
    auVar9._0_4_ = fVar15;
    auVar9._8_4_ = fVar17 * fVar20;
    auVar9._12_4_ = fVar24;
    auVar22 = NEON_ext(auVar25,auVar9,8,1);
    if (fVar15 + fVar16 + auVar22._0_4_ + fVar23 <= fVar11) {
      fVar12 = fVar12 * fVar19;
      fVar13 = fVar13 * fVar18;
      fVar15 = (float)((ulong)param_5[3] >> 0x20) * fVar23;
      auVar3._4_4_ = fVar13;
      auVar3._0_4_ = fVar12;
      auVar3._8_4_ = fVar14 * fVar20;
      auVar3._12_4_ = fVar15;
      auVar4._4_4_ = fVar13;
      auVar4._0_4_ = fVar12;
      auVar4._8_4_ = fVar14 * fVar20;
      auVar4._12_4_ = fVar15;
      auVar22 = NEON_ext(auVar3,auVar4,8,1);
      if (fVar12 + fVar13 + auVar22._0_4_ + fVar23 <= fVar11) {
        fVar12 = fVar19 * (float)param_5[4];
        fVar13 = fVar18 * (float)((ulong)param_5[4] >> 0x20);
        fVar14 = fVar20 * (float)param_5[5];
        fVar15 = fVar23 * (float)((ulong)param_5[5] >> 0x20);
        auVar5._4_4_ = fVar13;
        auVar5._0_4_ = fVar12;
        auVar5._8_4_ = fVar14;
        auVar5._12_4_ = fVar15;
        auVar6._4_4_ = fVar13;
        auVar6._0_4_ = fVar12;
        auVar6._8_4_ = fVar14;
        auVar6._12_4_ = fVar15;
        auVar22 = NEON_ext(auVar5,auVar6,8,1);
        if (fVar12 + fVar13 + auVar22._0_4_ + fVar23 <= fVar11) {
          fVar19 = fVar19 * (float)param_5[6];
          fVar18 = fVar18 * (float)((ulong)param_5[6] >> 0x20);
          fVar20 = fVar20 * (float)param_5[7];
          fVar12 = fVar23 * (float)((ulong)param_5[7] >> 0x20);
          auVar7._4_4_ = fVar18;
          auVar7._0_4_ = fVar19;
          auVar7._8_4_ = fVar20;
          auVar7._12_4_ = fVar12;
          auVar8._4_4_ = fVar18;
          auVar8._0_4_ = fVar19;
          auVar8._8_4_ = fVar20;
          auVar8._12_4_ = fVar12;
          auVar22 = NEON_ext(auVar7,auVar8,8,1);
          if (fVar19 + fVar18 + auVar22._0_4_ + fVar23 <= fVar11) {
            param_9[1] = uVar35;
            *param_9 = uVar32;
            *param_10 = *param_8;
            *(undefined2 *)((long)param_10 + 1) = 0xffff;
            *(undefined1 *)((long)param_10 + 3) = 0xff;
            return 1;
          }
        }
      }
    }
  }
  return 0x80;
}


