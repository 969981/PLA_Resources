/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ffe20c; name: FUN_02ffe20c
 */


void FUN_02ffe20c(undefined8 *param_1,uint param_2,int param_3,undefined1 (*param_4) [16],
                 float *param_5,float *param_6)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  long lVar11;
  undefined4 *puVar12;
  float fVar13;
  float fVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  int iVar21;
  undefined1 auVar22 [12];
  undefined1 uVar26;
  int iVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 auVar23 [16];
  int iVar30;
  int iVar31;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  
  auVar10 = *param_4;
  auVar16._8_4_ = 0x3a83126f;
  auVar16._0_8_ = 0x3a83126f3a83126f;
  auVar16._12_4_ = 0x3a83126f;
  auVar38._0_4_ = ABS(auVar10._0_4_);
  auVar38._4_4_ = ABS(auVar10._4_4_);
  auVar38._8_4_ = ABS(auVar10._8_4_);
  auVar38._12_4_ = ABS(auVar10._12_4_);
  auVar38 = NEON_fmax(auVar38,auVar16,4);
  uVar15 = CONCAT17(auVar10[7],(uint7)(auVar10[3] & 0x80) << 0x18) & 0x80ffffffffffffff;
  uVar32 = auVar38[0];
  uVar33 = auVar38[1];
  uVar34 = auVar38[2];
  bVar35 = (byte)(uVar15 >> 0x18) ^ auVar38[3];
  uVar26 = auVar38[4];
  uVar28 = auVar38[5];
  uVar29 = auVar38[6];
  bVar36 = (byte)(uVar15 >> 0x38) ^ auVar38[7];
  auVar22[8] = auVar38[8];
  auVar22[9] = auVar38[9];
  auVar22[10] = auVar38[10];
  auVar22[0xb] = auVar10[0xb] & 0x80 ^ auVar38[0xb];
  bVar37 = auVar10[0xf] & 0x80 ^ auVar38[0xf];
  if ((int)param_2 < 3) {
    *param_5 = *param_5 * auVar38._0_4_;
    uVar26 = uVar32;
    uVar28 = uVar33;
    uVar29 = uVar34;
    bVar36 = bVar35;
    auVar22[8] = uVar32;
    auVar22[9] = uVar33;
    auVar22[10] = uVar34;
    auVar22[0xb] = bVar35;
  }
  else if (param_3 == 0) {
    fVar13 = *param_5;
    fVar6 = (float)CONCAT13(auVar22[0xb],auVar38._8_3_);
    fVar3 = (float)CONCAT13(bVar35,auVar38._0_3_);
    fVar14 = (float)FUN_032c8ef0();
    if (1e-05 < fVar14) {
      auVar16 = NEON_fmov(0xbf800000,4);
      fVar14 = (float)(CONCAT17(bVar36,CONCAT16(uVar29,CONCAT15(uVar28,CONCAT14(uVar26,fVar3)))) >>
                      0x20);
      if (1.1920929e-07 < ABS(fVar6 + auVar16._8_4_) ||
          (1.1920929e-07 < ABS(fVar3 + auVar16._0_4_) || 1.1920929e-07 < ABS(fVar14 + auVar16._4_4_)
          )) {
        uVar18 = CONCAT44(*(undefined4 *)(param_1 + 1),*(undefined4 *)(param_1 + 1));
        auVar17._0_8_ = *param_1;
        lVar11 = (ulong)param_2 - 1;
        auVar17._8_8_ = uVar18;
        auVar19._8_8_ = uVar18;
        auVar19._0_8_ = auVar17._0_8_;
        puVar12 = (undefined4 *)((long)param_1 + 0x14);
        do {
          uVar2 = *puVar12;
          lVar11 = lVar11 + -1;
          puVar1 = (undefined8 *)(puVar12 + -2);
          puVar12 = puVar12 + 3;
          uVar26 = (undefined1)uVar2;
          uVar28 = (undefined1)((uint)uVar2 >> 8);
          uVar29 = (undefined1)((uint)uVar2 >> 0x10);
          auVar22[8] = (undefined1)((uint)uVar2 >> 0x18);
          auVar40[8] = uVar26;
          auVar40._0_8_ = *puVar1;
          auVar40[9] = uVar28;
          auVar40[10] = uVar29;
          auVar40[0xb] = auVar22[8];
          auVar40[0xc] = uVar26;
          auVar40[0xd] = uVar28;
          auVar40[0xe] = uVar29;
          auVar40[0xf] = auVar22[8];
          auVar19 = NEON_fmin(auVar19,auVar40,4);
          auVar4[8] = uVar26;
          auVar4._0_8_ = *puVar1;
          auVar4[9] = uVar28;
          auVar4[10] = uVar29;
          auVar4[0xb] = auVar22[8];
          auVar4[0xc] = uVar26;
          auVar4[0xd] = uVar28;
          auVar4[0xe] = uVar29;
          auVar4[0xf] = auVar22[8];
          auVar17 = NEON_fmax(auVar17,auVar4,4);
        } while (lVar11 != 0);
        fStack_7c = auVar38._4_4_;
        fStack_78 = auVar38._8_4_;
        fStack_74 = auVar38._12_4_;
        auVar23._0_4_ = (auVar17._0_4_ - auVar19._0_4_) * 0.5;
        auVar23._4_4_ = (auVar17._4_4_ - auVar19._4_4_) * 0.5;
        auVar23._8_4_ = (auVar17._8_4_ - auVar19._8_4_) * 0.5;
        auVar23._12_4_ = (auVar17._12_4_ - auVar19._12_4_) * 0.5;
        auVar20._4_4_ = fVar13;
        auVar20._0_4_ = fVar13;
        auVar20._8_4_ = fVar13;
        auVar20._12_4_ = fVar13;
        fVar7 = auVar38._0_4_ * (fVar13 + auVar23._0_4_);
        fStack_7c = fStack_7c * (fVar13 + auVar23._4_4_);
        uVar26 = (undefined1)((uint)fStack_7c >> 8);
        uVar28 = (undefined1)((uint)fStack_7c >> 0x10);
        uVar29 = (undefined1)((uint)fStack_7c >> 0x18);
        fStack_78 = fStack_78 * (fVar13 + auVar23._8_4_);
        if (fStack_78 <= fVar13 || (fVar7 <= fVar13 || fStack_7c <= fVar13)) {
          uVar18 = NEON_fminp(CONCAT17(uVar29,CONCAT16(uVar28,CONCAT15(uVar26,CONCAT14(SUB41(
                                                  fStack_7c,0),fVar7)))),
                              CONCAT17(uVar29,CONCAT16(uVar28,CONCAT15(uVar26,CONCAT14(SUB41(
                                                  fStack_7c,0),fVar7)))),4);
          auVar20._0_8_ = NEON_fmin(CONCAT44(fStack_78,fStack_78),uVar18,4);
          auVar20._8_8_ = auVar20._0_8_;
        }
        auVar16 = NEON_frecpe(auVar23,4);
        auVar40 = NEON_frecps(auVar23,auVar16,4);
        auVar39._0_4_ = auVar16._0_4_ * auVar40._0_4_;
        auVar39._4_4_ = auVar16._4_4_ * auVar40._4_4_;
        auVar39._8_4_ = auVar16._8_4_ * auVar40._8_4_;
        auVar39._12_4_ = auVar16._12_4_ * auVar40._12_4_;
        auVar16 = NEON_frecps(auVar23,auVar39,4);
        iVar21 = -(uint)(auVar23._0_4_ == 0.0);
        iVar27 = -(uint)(auVar23._4_4_ == 0.0);
        iVar30 = -(uint)(auVar23._8_4_ == 0.0);
        iVar31 = -(uint)(auVar23._12_4_ == 0.0);
        fVar7 = (fVar7 - auVar20._0_4_) * auVar39._0_4_ * auVar16._0_4_;
        fVar8 = (fStack_7c - auVar20._4_4_) * auVar39._4_4_ * auVar16._4_4_;
        fVar9 = (fStack_78 - auVar20._8_4_) * auVar39._8_4_ * auVar16._8_4_;
        fVar13 = (fStack_74 * (fVar13 + auVar23._12_4_) - auVar20._12_4_) *
                 auVar39._12_4_ * auVar16._12_4_;
        auVar24[0] = SUB41(fVar7,0) & ~(byte)iVar21;
        auVar24[1] = (byte)((uint)fVar7 >> 8) & ~(byte)((uint)iVar21 >> 8);
        auVar24[2] = (byte)((uint)fVar7 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10);
        auVar24[3] = (byte)((uint)fVar7 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18);
        auVar24[4] = SUB41(fVar8,0) & ~(byte)iVar27;
        auVar24[5] = (byte)((uint)fVar8 >> 8) & ~(byte)((uint)iVar27 >> 8);
        auVar24[6] = (byte)((uint)fVar8 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10);
        auVar24[7] = (byte)((uint)fVar8 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18);
        auVar24[8] = SUB41(fVar9,0) & ~(byte)iVar30;
        auVar24[9] = (byte)((uint)fVar9 >> 8) & ~(byte)((uint)iVar30 >> 8);
        auVar24[10] = (byte)((uint)fVar9 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10);
        auVar24[0xb] = (byte)((uint)fVar9 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18);
        auVar24[0xc] = SUB41(fVar13,0) & ~(byte)iVar31;
        auVar24[0xd] = (byte)((uint)fVar13 >> 8) & ~(byte)((uint)iVar31 >> 8);
        auVar24[0xe] = (byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10);
        auVar24[0xf] = (byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18);
        auVar5[8] = 0x6f;
        auVar5._0_8_ = 0x3a83126f3a83126f;
        auVar5[9] = 0x12;
        auVar5[10] = 0x83;
        auVar5[0xb] = 0x3a;
        auVar5[0xc] = 0x6f;
        auVar5[0xd] = 0x12;
        auVar5[0xe] = 0x83;
        auVar5[0xf] = 0x3a;
        auVar16 = NEON_fmax(auVar24,auVar5,4);
        bVar35 = bVar35 & 0x80 ^ auVar16[3];
        fVar13 = (float)CONCAT13(bVar35,auVar16._0_3_);
        uVar26 = auVar16[4];
        uVar28 = auVar16[5];
        uVar29 = auVar16[6];
        bVar36 = bVar36 & 0x80 ^ auVar16[7];
        auVar22._0_8_ = CONCAT17(bVar36,CONCAT16(uVar29,CONCAT15(uVar28,CONCAT14(uVar26,fVar13))));
        auVar22[8] = auVar16[8];
        auVar22[9] = auVar16[9];
        auVar22[10] = auVar16[10];
        auVar22[0xb] = auVar22[0xb] & 0x80 ^ auVar16[0xb];
        auVar25[0xc] = auVar16[0xc];
        auVar25._0_12_ = auVar22;
        auVar25[0xd] = auVar16[0xd];
        auVar25[0xe] = auVar16[0xe];
        auVar25[0xf] = bVar37 & 0x80 ^ auVar16[0xf];
        uVar32 = auVar16[0];
        uVar33 = auVar16[1];
        uVar34 = auVar16[2];
        param_6[2] = (auVar19._8_4_ + auVar17._8_4_) * 0.5 * (fVar6 - auVar22._8_4_);
        param_6[3] = (auVar19._12_4_ + auVar17._12_4_) * 0.5 *
                     ((float)(CONCAT17(bVar37,CONCAT16(auVar38[0xe],
                                                       CONCAT15(auVar38[0xd],
                                                                CONCAT14(auVar38[0xc],fVar6)))) >>
                             0x20) - auVar25._12_4_);
        *param_6 = (auVar19._0_4_ + auVar17._0_4_) * 0.5 * (fVar3 - fVar13);
        param_6[1] = (auVar19._4_4_ + auVar17._4_4_) * 0.5 *
                     (fVar14 - (float)((ulong)auVar22._0_8_ >> 0x20));
        *param_5 = auVar20._0_4_;
        goto LAB_02ffe258;
      }
    }
  }
  param_6[0] = 0.0;
  param_6[1] = 0.0;
  param_6[2] = 0.0;
  param_6[3] = 0.0;
LAB_02ffe258:
  *(ulong *)(*param_4 + 8) =
       CONCAT17(auVar10[0xf],
                CONCAT16(auVar10[0xe],
                         CONCAT15(auVar10[0xd],
                                  CONCAT14(auVar10[0xc],
                                           CONCAT13(auVar22[0xb],
                                                    CONCAT12(auVar22[10],
                                                             CONCAT11(auVar22[9],auVar22[8])))))));
  *(ulong *)*param_4 =
       CONCAT17(bVar36,CONCAT16(uVar29,CONCAT15(uVar28,CONCAT14(uVar26,CONCAT13(bVar35,CONCAT12(
                                                  uVar34,CONCAT11(uVar33,uVar32)))))));
  return;
}


