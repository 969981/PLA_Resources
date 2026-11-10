/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0335fbd0; name: FUN_0335fbd0
 */


void FUN_0335fbd0(undefined1 (*param_1) [12],undefined8 *param_2,undefined8 *param_3)

{
  undefined1 (*pauVar1) [12];
  char cVar2;
  long lVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  byte bVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  byte bVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  byte bVar26;
  ulong uVar27;
  undefined1 auVar28 [16];
  float fVar29;
  float fVar33;
  undefined8 uVar30;
  ulong uVar31;
  undefined1 auVar32 [16];
  float fVar34;
  float fVar36;
  float fVar37;
  undefined1 auVar35 [16];
  float fVar38;
  int iVar39;
  float fVar40;
  int iVar41;
  float fVar42;
  undefined8 uVar43;
  undefined1 auVar44 [16];
  
  pauVar1 = (undefined1 (*) [12])(param_1[2] + 8);
  fVar29 = (float)((ulong)*(undefined8 *)(param_1[3] + 4) >> 0x20);
  fVar36 = (float)((ulong)*(undefined8 *)(*param_1 + 8) >> 0x20);
  auVar4 = *(undefined1 (*) [16])(param_1[1] + 4);
  auVar32._12_4_ = fVar36;
  auVar32._0_12_ = *param_1;
  auVar35._12_4_ = fVar36;
  auVar35._0_12_ = *param_1;
  auVar32 = NEON_ext(auVar32,auVar35,8,1);
  auVar35 = NEON_ext(auVar4,auVar4,8,1);
  auVar7._12_4_ = fVar29;
  auVar7._0_12_ = *pauVar1;
  auVar8._12_4_ = fVar29;
  auVar8._0_12_ = *pauVar1;
  auVar44 = NEON_ext(auVar7,auVar8,8,1);
  fVar34 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  fVar37 = fVar36 + 0.0;
  fVar5 = auVar4._12_4_ + 0.0;
  fVar6 = fVar29 + 0.0;
  fVar38 = (float)*param_2 - (float)*(undefined8 *)param_1[4];
  fVar40 = (float)((ulong)*param_2 >> 0x20) - (float)((ulong)*(undefined8 *)param_1[4] >> 0x20);
  fVar42 = (float)param_2[1] - (float)*(undefined8 *)(param_1[4] + 8);
  fVar11 = auVar32._0_4_ * fVar42 +
           (float)*(undefined8 *)*param_1 * fVar38 +
           (float)((ulong)*(undefined8 *)*param_1 >> 0x20) * fVar40;
  fVar12 = auVar35._0_4_ * fVar42 + auVar4._0_4_ * fVar38 + auVar4._4_4_ * fVar40;
  fVar13 = auVar44._0_4_ * fVar42 + (float)*(undefined8 *)*pauVar1 * fVar38 + fVar34 * fVar40;
  fVar14 = auVar44._4_4_ * fVar42 + fVar34 * fVar38 + auVar44._4_4_ * fVar40;
  auVar44._4_4_ = fVar12;
  auVar44._0_4_ = fVar11;
  auVar44._8_4_ = fVar13;
  auVar44._12_4_ = fVar14;
  auVar9._4_4_ = 0.0 - auVar4._12_4_;
  auVar9._0_4_ = 0.0 - fVar36;
  auVar9._8_4_ = 0.0 - fVar29;
  auVar9._12_4_ = 0;
  auVar32 = NEON_fmax(auVar44,auVar9,4);
  auVar4[4] = SUB41(fVar5,0);
  auVar4._0_4_ = fVar37;
  auVar4[5] = (char)((uint)fVar5 >> 8);
  auVar4[6] = (char)((uint)fVar5 >> 0x10);
  auVar4[7] = (char)((uint)fVar5 >> 0x18);
  auVar4[8] = SUB41(fVar6,0);
  auVar4[9] = (char)((uint)fVar6 >> 8);
  auVar4[10] = (char)((uint)fVar6 >> 0x10);
  auVar4[0xb] = (char)((uint)fVar6 >> 0x18);
  auVar4._12_4_ = 0;
  auVar28 = NEON_fmin(auVar32,auVar4,4);
  fVar34 = auVar28._0_4_ - fVar11;
  fVar36 = auVar28._4_4_ - fVar12;
  fVar38 = auVar28._8_4_ - fVar13;
  fVar29 = fVar34 * fVar34 + fVar36 * fVar36 + fVar38 * fVar38;
  fVar33 = fVar34 * fVar34 + fVar36 * fVar36 + fVar38 * fVar38;
  uVar30 = CONCAT44(fVar33,fVar29);
  uVar43 = NEON_frsqrte(uVar30,4);
  fVar40 = (float)uVar43;
  fVar42 = (float)((ulong)uVar43 >> 0x20);
  uVar43 = NEON_frsqrts(uVar30,CONCAT44(fVar42 * fVar42,fVar40 * fVar40),4);
  fVar40 = fVar40 * (float)uVar43;
  fVar42 = fVar42 * (float)((ulong)uVar43 >> 0x20);
  uVar43 = NEON_frsqrts(uVar30,CONCAT44(fVar42 * fVar42,fVar40 * fVar40),4);
  iVar39 = -(uint)(fVar29 <= 0.0);
  iVar41 = -(uint)(fVar33 <= 0.0);
  fVar40 = (float)uVar43 * fVar40;
  fVar42 = (float)((ulong)uVar43 >> 0x20) * fVar42;
  fVar40 = (float)CONCAT13((byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18),
                           CONCAT12((byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar39 >> 0x10),
                                    CONCAT11((byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar39 >> 8),
                                             SUB41(fVar40,0) & ~(byte)iVar39)));
  uVar31 = (ulong)(uint)(fVar29 * fVar40);
  if (fVar29 * fVar40 < 1e-05) {
    fVar34 = ABS(auVar28._0_4_);
    fVar36 = ABS(auVar28._4_4_);
    fVar38 = ABS(auVar28._8_4_);
    fVar40 = fVar34 - fVar37;
    fVar42 = fVar36 - fVar5;
    fVar29 = fVar38 - fVar6;
    fVar33 = ABS(auVar28._12_4_) - 0.0;
    fVar37 = ABS(fVar34 - fVar37);
    fVar34 = ABS(fVar36 - fVar5);
    uVar15 = (undefined1)((uint)fVar34 >> 8);
    uVar16 = (undefined1)((uint)fVar34 >> 0x10);
    uVar17 = (undefined1)((uint)fVar34 >> 0x18);
    fVar5 = ABS(fVar38 - fVar6);
    uVar43 = NEON_fminp(CONCAT17(uVar17,CONCAT16(uVar16,CONCAT15(uVar15,CONCAT14(SUB41(fVar34,0),
                                                                                 fVar37)))),
                        CONCAT17(uVar17,CONCAT16(uVar16,CONCAT15(uVar15,CONCAT14(SUB41(fVar34,0),
                                                                                 fVar37)))),4);
    uVar43 = NEON_fmin(CONCAT44(fVar5,fVar5),uVar43,4);
    uVar27 = CONCAT17((char)(-(uint)(0.0 < fVar12) >> 0x18),
                      (uint7)((byte)(-(uint)(0.0 < fVar11) >> 0x18) & 0x80) << 0x18) &
             0x80ffffffffffffff;
    cVar2 = (&DAT_03aadfc0)
            [((byte)-(fVar34 <= (float)((ulong)uVar43 >> 0x20)) & 2) +
             (uint)(fVar37 <= (float)uVar43) | (byte)-(fVar5 <= (float)uVar43) & 4];
    uVar31 = CONCAT44(fVar29,fVar29);
    if (cVar2 != '\x02') {
      uVar31 = CONCAT44(fVar40,fVar40);
    }
    uVar10 = CONCAT44(fVar33,fVar33);
    if (cVar2 != '\x03') {
      uVar10 = uVar31;
    }
    uVar31 = CONCAT44(fVar42,fVar42);
    if (cVar2 != 1) {
      uVar31 = uVar10;
    }
    lVar3 = (long)(cVar2 + 0x20) * 0x10;
    uVar30 = *(undefined8 *)(&UNK_03aae238 + lVar3);
    uVar23 = (undefined1)uVar30;
    uVar24 = (undefined1)((ulong)uVar30 >> 8);
    uVar25 = (undefined1)((ulong)uVar30 >> 0x10);
    uVar43 = *(undefined8 *)(&DAT_03aae230 + lVar3);
    uVar15 = (undefined1)uVar43;
    uVar16 = (undefined1)((ulong)uVar43 >> 8);
    uVar17 = (undefined1)((ulong)uVar43 >> 0x10);
    uVar19 = (undefined1)((ulong)uVar43 >> 0x20);
    uVar20 = (undefined1)((ulong)uVar43 >> 0x28);
    uVar21 = (undefined1)((ulong)uVar43 >> 0x30);
    bVar18 = (byte)((ulong)uVar43 >> 0x18) ^ (byte)(uVar27 >> 0x18);
    bVar22 = (byte)((ulong)uVar43 >> 0x38) ^ (byte)(uVar27 >> 0x38);
    bVar26 = (byte)((ulong)uVar30 >> 0x18) ^ (byte)(-(uint)(0.0 < fVar13) >> 0x18) & 0x80;
    fVar37 = (float)(uVar31 >> 0x20);
    auVar28._0_4_ = fVar11 + (float)uVar31 * (float)CONCAT13(bVar18,(int3)uVar43);
    auVar28._4_4_ = fVar12 + fVar37 * (float)CONCAT13(bVar22,(int3)((ulong)uVar43 >> 0x20));
    auVar28._8_4_ = fVar13 + (float)uVar31 * (float)CONCAT13(bVar26,(int3)uVar30);
    auVar28._12_4_ =
         fVar14 + fVar37 * (float)CONCAT13((byte)((ulong)uVar30 >> 0x38) ^
                                           (byte)(-(uint)(0.0 < fVar14) >> 0x18) & 0x80,
                                           (int3)((ulong)uVar30 >> 0x20));
  }
  else {
    fVar34 = fVar34 * fVar40;
    uVar15 = SUB41(fVar34,0);
    uVar16 = (undefined1)((uint)fVar34 >> 8);
    uVar17 = (undefined1)((uint)fVar34 >> 0x10);
    bVar18 = (byte)((uint)fVar34 >> 0x18);
    fVar36 = fVar36 * (float)(CONCAT17((byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18),
                                       CONCAT16((byte)((uint)fVar42 >> 0x10) &
                                                ~(byte)((uint)iVar41 >> 0x10),
                                                CONCAT15((byte)((uint)fVar42 >> 8) &
                                                         ~(byte)((uint)iVar41 >> 8),
                                                         CONCAT14(SUB41(fVar42,0) & ~(byte)iVar41,
                                                                  fVar40)))) >> 0x20);
    uVar19 = SUB41(fVar36,0);
    uVar20 = (undefined1)((uint)fVar36 >> 8);
    uVar21 = (undefined1)((uint)fVar36 >> 0x10);
    bVar22 = (byte)((uint)fVar36 >> 0x18);
    fVar38 = fVar38 * fVar40;
    uVar23 = SUB41(fVar38,0);
    uVar24 = (undefined1)((uint)fVar38 >> 8);
    uVar25 = (undefined1)((uint)fVar38 >> 0x10);
    bVar26 = (byte)((uint)fVar38 >> 0x18);
  }
  param_3[1] = CONCAT17((char)(uVar31 >> 0x18),
                        CONCAT16((char)(uVar31 >> 0x10),
                                 CONCAT15((char)(uVar31 >> 8),
                                          CONCAT14((char)uVar31,
                                                   CONCAT13(bVar26,CONCAT12(uVar25,CONCAT11(uVar24,
                                                  uVar23)))))));
  *param_3 = CONCAT17(bVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(bVar18,
                                                  CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))))));
  param_3[3] = auVar28._8_8_;
  param_3[2] = auVar28._0_8_;
  *(undefined4 *)((long)param_3 + 0x1c) = 0x3f00001e;
  return;
}


