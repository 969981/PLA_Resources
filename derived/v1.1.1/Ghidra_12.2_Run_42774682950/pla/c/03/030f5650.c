/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030f5650; name: FUN_030f5650
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030f5650(float param_1,long *param_2,undefined8 param_3,double *param_4,
                 undefined1 (*param_5) [16],undefined8 *param_6,undefined8 *param_7)

{
  long lVar1;
  undefined1 (*pauVar2) [16];
  byte bVar8;
  byte bVar9;
  int iVar11;
  byte bVar12;
  byte bVar13;
  undefined1 auVar4 [12];
  int iVar3;
  undefined1 auVar5 [12];
  byte bVar10;
  byte bVar14;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar15;
  float fVar16;
  float fVar18;
  float fVar19;
  undefined1 auVar17 [16];
  float fVar20;
  byte bVar23;
  ulong uVar21;
  undefined1 auVar22 [16];
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar34;
  float fVar35;
  undefined1 auVar31 [16];
  float fVar30;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined8 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined8 uVar45;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  
  lVar1 = (**(code **)(*param_2 + 0x80))();
  pauVar2 = (undefined1 (*) [16])
            (**(code **)(*param_2 + 0x100))(param_2,*(undefined4 *)(lVar1 + 0x80));
  fVar24 = *(float *)(lVar1 + 0xc);
  fVar20 = *(float *)(lVar1 + 0x1c);
  fVar29 = *(float *)(lVar1 + 0x2c);
  if ((*(float *)(lVar1 + 0xa8) == 0.0 &&
       (*(float *)(lVar1 + 0xa0) == 0.0 && *(float *)(lVar1 + 0xa4) == 0.0)) &&
     (fVar29 == 0.0 && (fVar24 == 0.0 && fVar20 == 0.0))) {
    auVar4._0_4_ = (float)(*param_4 -
                          ((double)*(float *)(lVar1 + 0x30) + (double)*(float *)(lVar1 + 0x40)));
    auVar4._4_4_ = (float)(param_4[1] -
                          ((double)*(float *)(lVar1 + 0x34) + (double)*(float *)(lVar1 + 0x44)));
    auVar4._8_4_ = (float)(param_4[2] -
                          ((double)*(float *)(lVar1 + 0x38) + (double)*(float *)(lVar1 + 0x48)));
    fVar20 = *(float *)*pauVar2;
    fVar24 = *(float *)(*pauVar2 + 4);
    fVar29 = *(float *)(*pauVar2 + 8);
    fVar15 = *(float *)(*pauVar2 + 0xc);
  }
  else {
    auVar17 = *param_5;
    fVar16 = auVar17._0_4_;
    fVar18 = auVar17._4_4_;
    fVar19 = auVar17._8_4_;
    fVar35 = auVar17._12_4_;
    auVar31 = NEON_ext(auVar17,auVar17,8,1);
    uVar45 = NEON_ext(auVar17._0_8_,auVar31._0_8_,4,1);
    fVar34 = auVar31._4_4_ * auVar31._4_4_;
    uVar36 = NEON_ext(CONCAT44(fVar20,fVar24),(ulong)(uint)fVar29,4,1);
    fVar25 = fVar24 * fVar16 + fVar20 * fVar18 + fVar29 * fVar19;
    fVar30 = fVar34 + -0.5;
    auVar37._0_4_ = (float)uVar36 * fVar16 - fVar24 * (float)uVar45;
    auVar37._4_4_ =
         (float)((ulong)uVar36 >> 0x20) * fVar18 - fVar20 * (float)((ulong)uVar45 >> 0x20);
    auVar37._8_4_ = fVar24 * fVar19 - fVar29 * fVar16;
    auVar37._12_4_ = fVar20 * fVar35 - fVar18 * 0.0;
    auVar31 = NEON_ext(auVar37,auVar37,4,1);
    auVar17._0_4_ = -*(float *)(lVar1 + 0xa0);
    auVar17._4_4_ = -*(float *)(lVar1 + 0xa4);
    auVar17._8_4_ = -*(float *)(lVar1 + 0xa8);
    auVar17._12_4_ = *(undefined4 *)(lVar1 + 0xac);
    auVar26._8_8_ = _UNK_03889108;
    auVar26._0_8_ = _DAT_03889100;
    auVar32 = a64_TBL(ZEXT816(0),auVar17,auVar26);
    auVar44._8_8_ = _UNK_03888e28;
    auVar44._0_8_ = _DAT_03888e20;
    fVar15 = fVar24 * fVar30 + fVar16 * fVar25 + auVar31._0_4_ * fVar35;
    fVar20 = fVar20 * (fVar34 + -0.5) +
             fVar18 * (fVar24 * fVar16 + fVar20 * fVar18 + fVar29 * fVar19) + auVar31._4_4_ * fVar35
    ;
    fVar24 = fVar29 * fVar30 + fVar19 * fVar25 + auVar37._0_4_ * fVar35;
    auVar42._8_8_ = _UNK_038890f8;
    auVar42._0_8_ = _DAT_038890f0;
    auVar41._8_8_ = _UNK_03888d78;
    auVar41._0_8_ = _DAT_03888d70;
    auVar37 = a64_TBL(ZEXT816(0),*pauVar2,auVar42);
    auVar26 = a64_TBL(ZEXT816(0),*pauVar2,auVar44);
    auVar42 = a64_TBL(ZEXT816(0),auVar17,auVar41);
    auVar4._0_4_ = (float)((*param_4 - *(double *)pauVar2[1]) + (double)(fVar15 + fVar15));
    auVar4._4_4_ = (float)((param_4[1] - *(double *)(pauVar2[1] + 8)) + (double)(fVar20 + fVar20));
    auVar4._8_4_ = (float)((param_4[2] - *(double *)pauVar2[2]) + (double)(fVar24 + fVar24));
    auVar28._8_8_ = _UNK_038895d8;
    auVar28._0_8_ = _DAT_038895d0;
    auVar31._0_4_ = auVar26._0_4_ * auVar32._0_4_ - auVar37._0_4_ * auVar42._0_4_;
    auVar31._4_4_ = auVar26._4_4_ * auVar32._4_4_ - auVar37._4_4_ * auVar42._4_4_;
    auVar31._8_4_ = auVar26._8_4_ * auVar32._8_4_ - auVar37._8_4_ * auVar42._8_4_;
    auVar31._12_4_ = auVar26._12_4_ * auVar32._12_4_ - auVar37._12_4_ * auVar42._12_4_;
    auVar17 = a64_TBL(ZEXT816(0),auVar31,auVar28);
    fVar15 = auVar17._12_4_ - (auVar26._12_4_ * auVar42._12_4_ + auVar37._12_4_ * auVar32._12_4_);
    fVar20 = -(auVar17._0_4_ - (auVar26._0_4_ * auVar42._0_4_ + auVar37._0_4_ * auVar32._0_4_));
    fVar24 = -(auVar17._4_4_ - (auVar26._4_4_ * auVar42._4_4_ + auVar37._4_4_ * auVar32._4_4_));
    fVar29 = -(auVar17._8_4_ - (auVar26._8_4_ * auVar42._8_4_ + auVar37._8_4_ * auVar32._8_4_));
  }
  param_6[1] = (ulong)(uint)(auVar4._8_4_ * param_1);
  *param_6 = CONCAT44(auVar4._4_4_ * param_1,auVar4._0_4_ * param_1);
  auVar32._0_4_ = -fVar20;
  auVar32._4_4_ = -fVar24;
  auVar32._8_4_ = -fVar29;
  auVar27._8_8_ = _UNK_038890f8;
  auVar27._0_8_ = _DAT_038890f0;
  auVar32._12_4_ = fVar15;
  auVar33._8_8_ = _UNK_03888d78;
  auVar33._0_8_ = _DAT_03888d70;
  auVar26 = a64_TBL(ZEXT816(0),auVar32,auVar33);
  auVar38._8_8_ = _UNK_03888e28;
  auVar38._0_8_ = _DAT_03888e20;
  auVar28 = a64_TBL(ZEXT816(0),*param_5,auVar27);
  auVar17 = a64_TBL(ZEXT816(0),*param_5,auVar38);
  auVar39._8_8_ = _UNK_03889108;
  auVar39._0_8_ = _DAT_03889100;
  auVar31 = a64_TBL(ZEXT816(0),auVar32,auVar39);
  auVar40._0_4_ = auVar17._0_4_ * auVar31._0_4_ - auVar28._0_4_ * auVar26._0_4_;
  auVar40._4_4_ = auVar17._4_4_ * auVar31._4_4_ - auVar28._4_4_ * auVar26._4_4_;
  auVar40._8_4_ = auVar17._8_4_ * auVar31._8_4_ - auVar28._8_4_ * auVar26._8_4_;
  auVar40._12_4_ = auVar17._12_4_ * auVar31._12_4_ - auVar28._12_4_ * auVar26._12_4_;
  auVar43._8_8_ = _UNK_038895d8;
  auVar43._0_8_ = _DAT_038895d0;
  auVar32 = a64_TBL(ZEXT816(0),auVar40,auVar43);
  fVar24 = auVar32._12_4_ - (auVar17._12_4_ * auVar26._12_4_ + auVar28._12_4_ * auVar31._12_4_);
  fVar20 = -(auVar32._0_4_ - (auVar17._0_4_ * auVar26._0_4_ + auVar28._0_4_ * auVar31._0_4_));
  fVar29 = -(auVar32._4_4_ - (auVar17._4_4_ * auVar26._4_4_ + auVar28._4_4_ * auVar31._4_4_));
  fVar15 = -(auVar32._8_4_ - (auVar17._8_4_ * auVar26._8_4_ + auVar28._8_4_ * auVar31._8_4_));
  if (ABS(fVar24) < 0.9396926) {
    auVar22._0_4_ = fVar20 * fVar20;
    auVar22._4_4_ = fVar29 * fVar29;
    auVar22._8_4_ = fVar15 * fVar15;
    auVar22._12_4_ = fVar24 * fVar24;
    auVar17 = NEON_ext(auVar22,auVar22,8,1);
    fVar16 = auVar17._0_4_ + auVar17._4_4_;
    uVar36 = CONCAT44(auVar22._0_4_ + auVar22._4_4_ + fVar16,auVar22._0_4_ + auVar22._4_4_ + fVar16)
    ;
    uVar45 = NEON_frsqrte(uVar36,4);
    fVar16 = (float)uVar45;
    fVar18 = (float)((ulong)uVar45 >> 0x20);
    uVar45 = NEON_frsqrts(uVar36,CONCAT44(fVar18 * fVar18,fVar16 * fVar16),4);
    fVar16 = fVar16 * (float)uVar45;
    fVar18 = fVar18 * (float)((ulong)uVar45 >> 0x20);
    uVar36 = NEON_frsqrts(uVar36,CONCAT44(fVar18 * fVar18,fVar16 * fVar16),4);
    fVar16 = (float)uVar36 * fVar16;
    fVar18 = (float)((ulong)uVar36 >> 0x20) * fVar18;
    fVar20 = fVar20 * fVar16;
    fVar29 = fVar29 * fVar18;
    fVar15 = fVar15 * fVar16;
    fVar24 = fVar24 * fVar18;
    fVar16 = fVar20 * fVar20 + fVar29 * fVar29 + fVar15 * fVar15;
    fVar18 = fVar20 * fVar20 + fVar29 * fVar29 + fVar15 * fVar15;
    uVar36 = CONCAT44(fVar18,fVar16);
    uVar45 = NEON_frsqrte(uVar36,4);
    fVar19 = (float)uVar45;
    fVar35 = (float)((ulong)uVar45 >> 0x20);
    uVar45 = NEON_frsqrts(uVar36,CONCAT44(fVar35 * fVar35,fVar19 * fVar19),4);
    fVar19 = fVar19 * (float)uVar45;
    fVar35 = fVar35 * (float)((ulong)uVar45 >> 0x20);
    uVar36 = NEON_frsqrts(uVar36,CONCAT44(fVar35 * fVar35,fVar19 * fVar19),4);
    iVar3 = -(uint)(fVar16 <= 0.0);
    iVar11 = -(uint)(fVar18 <= 0.0);
    fVar19 = (float)uVar36 * fVar19;
    fVar35 = (float)((ulong)uVar36 >> 0x20) * fVar35;
    fVar18 = (float)CONCAT13((byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar3 >> 0x18),
                             CONCAT12((byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar3 >> 0x10),
                                      CONCAT11((byte)((uint)fVar19 >> 8) & ~(byte)((uint)iVar3 >> 8)
                                               ,SUB41(fVar19,0) & ~(byte)iVar3)));
    fVar16 = (float)(CONCAT17((byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                              CONCAT16((byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10),
                                       CONCAT15((byte)((uint)fVar35 >> 8) &
                                                ~(byte)((uint)iVar11 >> 8),
                                                CONCAT14(SUB41(fVar35,0) & ~(byte)iVar11,fVar18))))
                    >> 0x20);
    fVar29 = fVar29 * fVar16;
    fVar15 = fVar15 * fVar18;
    fVar16 = fVar24 * fVar16;
    bVar8 = (byte)(-(uint)(fVar24 < 0.0) >> 0x18);
    bVar9 = (byte)(-(uint)(fVar24 < 0.0) >> 0x18);
    uVar21 = CONCAT17(bVar9,(uint7)(bVar8 & 0x80) << 0x18) & 0x80ffffffffffffff;
    fVar20 = (float)CONCAT13((byte)(uVar21 >> 0x18) ^ (byte)((uint)(fVar20 * fVar18) >> 0x18),
                             SUB43(fVar20 * fVar18,0));
    auVar5._0_8_ = CONCAT17((byte)(uVar21 >> 0x38) ^ (byte)((uint)fVar29 >> 0x18),
                            CONCAT16((char)((uint)fVar29 >> 0x10),
                                     CONCAT15((char)((uint)fVar29 >> 8),
                                              CONCAT14(SUB41(fVar29,0),fVar20))));
    auVar5[8] = SUB41(fVar15,0);
    auVar5[9] = (undefined1)((uint)fVar15 >> 8);
    auVar5[10] = (undefined1)((uint)fVar15 >> 0x10);
    auVar5[0xb] = bVar8 & 0x80 ^ (byte)((uint)fVar15 >> 0x18);
    auVar6[0xc] = SUB41(fVar16,0);
    auVar6._0_12_ = auVar5;
    auVar6[0xd] = (undefined1)((uint)fVar16 >> 8);
    auVar6[0xe] = (undefined1)((uint)fVar16 >> 0x10);
    auVar6[0xf] = bVar9 & 0x80 ^ (byte)((uint)fVar16 >> 0x18);
    fVar24 = ABS(fVar24);
    if (1.0 <= fVar24) {
      fVar29 = 0.0;
      if (fVar24 <= 0.0) {
        fVar29 = 3.1415927;
      }
    }
    else {
      fVar29 = acosf(fVar24);
    }
    param_1 = param_1 * (fVar29 + fVar29);
    fStack_5c = (float)((ulong)auVar5._0_8_ >> 0x20);
    fStack_58 = auVar5._8_4_;
    fStack_54 = auVar6._12_4_;
    auVar7._0_4_ = fVar20 * param_1;
    auVar7._4_4_ = fStack_5c * param_1;
    auVar7._8_4_ = fStack_58 * param_1;
    auVar7._12_4_ = fStack_54 * param_1;
  }
  else {
    param_1 = param_1 + param_1;
    bVar23 = (byte)((uint)fVar24 >> 0x18);
    uVar21 = CONCAT17(bVar23,(uint7)(bVar23 & 0x80) << 0x18) & 0x80ffffffffffffff;
    fVar16 = fVar20 * param_1;
    fVar18 = fVar29 * param_1;
    fVar19 = fVar15 * param_1;
    fVar24 = fVar24 * param_1;
    iVar3 = -(uint)(fVar15 * fVar15 + fVar20 * fVar20 + fVar29 * fVar29 < 5.820766e-11);
    iVar11 = -(uint)(fVar15 * fVar15 + fVar20 * fVar20 + fVar29 * fVar29 < 5.820766e-11);
    bVar8 = (byte)((uint)iVar3 >> 8);
    bVar9 = (byte)((uint)iVar3 >> 0x10);
    bVar10 = (byte)((uint)iVar3 >> 0x18);
    bVar12 = (byte)((uint)iVar11 >> 8);
    bVar13 = (byte)((uint)iVar11 >> 0x10);
    bVar14 = (byte)((uint)iVar11 >> 0x18);
    auVar7[0] = SUB41(fVar16,0) & ~(byte)iVar3;
    auVar7[1] = (byte)((uint)fVar16 >> 8) & ~bVar8;
    auVar7[2] = (byte)((uint)fVar16 >> 0x10) & ~bVar9;
    auVar7[3] = ((byte)(uVar21 >> 0x18) ^ (byte)((uint)fVar16 >> 0x18)) & ~bVar10;
    auVar7[4] = SUB41(fVar18,0) & ~(byte)iVar11;
    auVar7[5] = (byte)((uint)fVar18 >> 8) & ~bVar12;
    auVar7[6] = (byte)((uint)fVar18 >> 0x10) & ~bVar13;
    auVar7[7] = ((byte)(uVar21 >> 0x38) ^ (byte)((uint)fVar18 >> 0x18)) & ~bVar14;
    auVar7[8] = SUB41(fVar19,0) & ~(byte)iVar3;
    auVar7[9] = (byte)((uint)fVar19 >> 8) & ~bVar8;
    auVar7[10] = (byte)((uint)fVar19 >> 0x10) & ~bVar9;
    auVar7[0xb] = (bVar23 & 0x80 ^ (byte)((uint)fVar19 >> 0x18)) & ~bVar10;
    auVar7[0xc] = SUB41(fVar24,0) & ~(byte)iVar11;
    auVar7[0xd] = (byte)((uint)fVar24 >> 8) & ~bVar12;
    auVar7[0xe] = (byte)((uint)fVar24 >> 0x10) & ~bVar13;
    auVar7[0xf] = (bVar23 & 0x80 ^ (byte)((uint)fVar24 >> 0x18)) & ~bVar14;
  }
  param_7[1] = auVar7._8_8_;
  *param_7 = auVar7._0_8_;
  return;
}


