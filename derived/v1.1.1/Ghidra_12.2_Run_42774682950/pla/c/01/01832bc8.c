/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01832bc8; name: FUN_01832bc8
 */


/* WARNING: Removing unreachable block (ram,0x01832c98) */

undefined4 FUN_01832bc8(undefined1 param_1 [16])

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 extraout_var;
  undefined1 uVar7;
  undefined1 extraout_var_00;
  undefined1 uVar8;
  undefined1 extraout_var_01;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  undefined1 auVar17 [12];
  float fVar21;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  int iVar22;
  int iVar23;
  int iVar24;
  undefined1 auVar20 [16];
  float fVar25;
  float fVar27;
  float fVar28;
  undefined1 auVar26 [16];
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  
  fVar25 = param_1._0_4_;
  auVar33._0_4_ = fVar25 * fVar25;
  fVar2 = param_1._4_4_;
  auVar33._4_4_ = fVar2 * fVar2;
  fVar28 = param_1._8_4_;
  auVar33._8_4_ = fVar28 * fVar28;
  fVar30 = param_1._12_4_;
  auVar33._12_4_ = fVar30 * fVar30;
  auVar18 = NEON_ext(auVar33,auVar33,8,1);
  fVar14 = auVar18._0_4_ + auVar33._0_4_;
  fVar21 = auVar18._4_4_ + auVar33._4_4_;
  fVar4 = fVar14 + fVar21;
  fVar14 = fVar14 + fVar21;
  if (fVar4 == 0.0) {
    return 0;
  }
  fVar15 = fVar28 * fVar28 + fVar25 * fVar25;
  fVar21 = fVar15 + 0.0;
  fVar15 = fVar15 + 0.0;
  auVar19._8_8_ = CONCAT44(fVar15,fVar21);
  auVar19._0_8_ = CONCAT44(fVar15,fVar21);
  auVar18 = NEON_frsqrte(auVar19,4);
  auVar32._0_4_ = auVar18._0_4_ * fVar21;
  auVar32._4_4_ = auVar18._4_4_ * fVar15;
  auVar32._8_4_ = auVar18._8_4_ * fVar21;
  auVar32._12_4_ = auVar18._12_4_ * fVar15;
  auVar33 = NEON_frsqrts(auVar18,auVar32,4);
  auVar26._0_4_ = auVar18._0_4_ * auVar33._0_4_;
  auVar26._4_4_ = auVar18._4_4_ * auVar33._4_4_;
  auVar26._8_4_ = auVar18._8_4_ * auVar33._8_4_;
  auVar26._12_4_ = auVar18._12_4_ * auVar33._12_4_;
  auVar34._0_4_ = fVar21 * auVar26._0_4_;
  auVar34._4_4_ = fVar15 * auVar26._4_4_;
  auVar34._8_4_ = fVar21 * auVar26._8_4_;
  auVar34._12_4_ = fVar15 * auVar26._12_4_;
  iVar16 = -(uint)(fVar21 == 0.0);
  iVar22 = -(uint)(fVar15 == 0.0);
  iVar23 = -(uint)(fVar21 == 0.0);
  iVar24 = -(uint)(fVar15 == 0.0);
  auVar18 = NEON_frsqrts(auVar26,auVar34,4);
  fVar21 = fVar25 * auVar26._0_4_ * auVar18._0_4_;
  fVar15 = auVar26._4_4_ * auVar18._4_4_ * 0.0;
  fVar27 = fVar28 * auVar26._8_4_ * auVar18._8_4_;
  fVar29 = auVar26._12_4_ * auVar18._12_4_ * 0.0;
  fVar21 = (float)CONCAT13((byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                           CONCAT12((byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                                    CONCAT11((byte)((uint)fVar21 >> 8) & ~(byte)((uint)iVar16 >> 8),
                                             SUB41(fVar21,0) & ~(byte)iVar16)));
  auVar17._0_8_ =
       CONCAT17((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                CONCAT16((byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10),
                         CONCAT15((byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar22 >> 8),
                                  CONCAT14(SUB41(fVar15,0) & ~(byte)iVar22,fVar21))));
  auVar17[8] = SUB41(fVar27,0) & ~(byte)iVar23;
  auVar17[9] = (byte)((uint)fVar27 >> 8) & ~(byte)((uint)iVar23 >> 8);
  auVar17[10] = (byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10);
  auVar17[0xb] = (byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18);
  auVar20[0xc] = SUB41(fVar29,0) & ~(byte)iVar24;
  auVar20._0_12_ = auVar17;
  auVar20[0xd] = (byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar24 >> 8);
  auVar20[0xe] = (byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10);
  auVar20[0xf] = (byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18);
  auVar3._4_4_ = fVar14;
  auVar3._0_4_ = fVar4;
  auVar3._8_4_ = fVar4;
  auVar3._12_4_ = fVar14;
  auVar18 = NEON_frsqrte(auVar3,4);
  auVar35._0_4_ = fVar4 * auVar18._0_4_;
  auVar35._4_4_ = fVar14 * auVar18._4_4_;
  auVar35._8_4_ = fVar4 * auVar18._8_4_;
  auVar35._12_4_ = fVar14 * auVar18._12_4_;
  auVar33 = NEON_frsqrts(auVar18,auVar35,4);
  auVar31._0_4_ = auVar18._0_4_ * auVar33._0_4_;
  auVar31._4_4_ = auVar18._4_4_ * auVar33._4_4_;
  auVar31._8_4_ = auVar18._8_4_ * auVar33._8_4_;
  auVar31._12_4_ = auVar18._12_4_ * auVar33._12_4_;
  auVar36._0_4_ = fVar4 * auVar31._0_4_;
  auVar36._4_4_ = fVar14 * auVar31._4_4_;
  auVar36._8_4_ = fVar4 * auVar31._8_4_;
  auVar36._12_4_ = fVar14 * auVar31._12_4_;
  auVar18 = NEON_frsqrts(auVar31,auVar36,4);
  fVar25 = fVar25 * auVar31._0_4_ * auVar18._0_4_;
  fVar15 = fVar2 * auVar31._4_4_ * auVar18._4_4_;
  fVar28 = fVar28 * auVar31._8_4_ * auVar18._8_4_;
  fVar30 = fVar30 * auVar31._12_4_ * auVar18._12_4_;
  iVar16 = -(uint)(fVar4 == 0.0);
  iVar22 = -(uint)(fVar14 == 0.0);
  iVar23 = -(uint)(fVar4 == 0.0);
  iVar24 = -(uint)(fVar14 == 0.0);
  fVar21 = fVar21 * (float)CONCAT13((byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                                    CONCAT12((byte)((uint)fVar25 >> 0x10) &
                                             ~(byte)((uint)iVar16 >> 0x10),
                                             CONCAT11((byte)((uint)fVar25 >> 8) &
                                                      ~(byte)((uint)iVar16 >> 8),
                                                      SUB41(fVar25,0) & ~(byte)iVar16)));
  fVar25 = (float)((ulong)auVar17._0_8_ >> 0x20) *
           (float)CONCAT13((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                           CONCAT12((byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10),
                                    CONCAT11((byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar22 >> 8),
                                             SUB41(fVar15,0) & ~(byte)iVar22)));
  uVar5 = (undefined1)((uint)fVar25 >> 8);
  uVar7 = (undefined1)((uint)fVar25 >> 0x10);
  uVar8 = (undefined1)((uint)fVar25 >> 0x18);
  fVar28 = auVar17._8_4_ *
           (float)CONCAT13((byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                           CONCAT12((byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10),
                                    CONCAT11((byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar23 >> 8),
                                             SUB41(fVar28,0) & ~(byte)iVar23)));
  uVar9 = (undefined1)((uint)fVar28 >> 8);
  uVar6 = (undefined1)((uint)fVar28 >> 0x10);
  uVar10 = (undefined1)((uint)fVar28 >> 0x18);
  fVar30 = auVar20._12_4_ *
           (float)CONCAT13((byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                           CONCAT12((byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10),
                                    CONCAT11((byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar24 >> 8),
                                             SUB41(fVar30,0) & ~(byte)iVar24)));
  uVar11 = (undefined1)((uint)fVar30 >> 8);
  uVar12 = (undefined1)((uint)fVar30 >> 0x10);
  uVar13 = (undefined1)((uint)fVar30 >> 0x18);
  auVar18[4] = SUB41(fVar25,0);
  auVar18._0_4_ = fVar21;
  auVar18[5] = uVar5;
  auVar18[6] = uVar7;
  auVar18[7] = uVar8;
  auVar18[8] = SUB41(fVar28,0);
  auVar18[9] = uVar9;
  auVar18[10] = uVar6;
  auVar18[0xb] = uVar10;
  auVar18[0xc] = SUB41(fVar30,0);
  auVar18[0xd] = uVar11;
  auVar18[0xe] = uVar12;
  auVar18[0xf] = uVar13;
  auVar1[4] = SUB41(fVar25,0);
  auVar1._0_4_ = fVar21;
  auVar1[5] = uVar5;
  auVar1[6] = uVar7;
  auVar1[7] = uVar8;
  auVar1[8] = SUB41(fVar28,0);
  auVar1[9] = uVar9;
  auVar1[10] = uVar6;
  auVar1[0xb] = uVar10;
  auVar1[0xc] = SUB41(fVar30,0);
  auVar1[0xd] = uVar11;
  auVar1[0xe] = uVar12;
  auVar1[0xf] = uVar13;
  auVar18 = NEON_ext(auVar18,auVar1,8,1);
  fVar25 = auVar18._0_4_ + fVar21 + auVar18._4_4_ + fVar25;
  uVar5 = 0;
  if (-1.0 <= fVar25) {
    uVar5 = SUB41(fVar25,0);
  }
  uVar6 = FUN_01009610(uVar5);
  fVar25 = -(float)CONCAT13(extraout_var_01,CONCAT12(extraout_var_00,CONCAT11(extraout_var,uVar6)));
  uVar7 = (undefined1)((uint)fVar25 >> 8);
  uVar8 = (undefined1)((uint)fVar25 >> 0x10);
  uVar9 = (undefined1)((uint)fVar25 >> 0x18);
  uVar5 = SUB41(fVar25,0);
  if (0.0 <= fVar2) {
    uVar5 = uVar6;
    uVar7 = extraout_var;
    uVar8 = extraout_var_00;
    uVar9 = extraout_var_01;
  }
  return CONCAT13(uVar9,CONCAT12(uVar8,CONCAT11(uVar7,uVar5)));
}


