/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f1660; name: FUN_031f1660
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031f1660(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined8 *param_3,
                 undefined8 *param_4,uint param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar9;
  float fVar10;
  undefined1 auVar8 [16];
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
  float fVar21;
  float fVar22;
  int iVar23;
  undefined4 uVar27;
  ulong uVar24;
  int iVar26;
  int iVar28;
  int iVar29;
  undefined1 auVar25 [16];
  float fVar30;
  float fVar32;
  float fVar33;
  undefined1 auVar31 [16];
  float fVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  
  auVar7 = *param_1;
  auVar8 = param_1[1];
  fVar11 = auVar7._4_4_;
  fVar12 = auVar7._8_4_;
  fVar13 = auVar7._12_4_;
  fVar14 = auVar8._4_4_;
  fVar9 = auVar8._8_4_;
  fVar10 = auVar8._12_4_;
  if ((param_5 >> 2 & 1) != 0) {
    uVar35 = NEON_fmax(CONCAT44((float)((ulong)*param_4 >> 0x20) * 1.45,(float)*param_4 * 1.45),
                       *param_3,4);
    fVar15 = (float)uVar35;
    fVar17 = (float)((ulong)uVar35 >> 0x20);
    *(float *)(*param_1 + 8) = fVar12 - fVar15;
    *(float *)(*param_1 + 0xc) = fVar13 - fVar17;
    *(float *)*param_1 = auVar7._0_4_ - fVar15;
    *(float *)(*param_1 + 4) = fVar11 - fVar17;
    *(float *)(param_1[1] + 8) = fVar9 + fVar15;
    *(float *)(param_1[1] + 0xc) = fVar10 + fVar17;
    *(float *)param_1[1] = auVar8._0_4_ + fVar15;
    *(float *)(param_1[1] + 4) = fVar14 + fVar17;
    return;
  }
  if ((param_5 >> 1 & 1) != 0) {
    fVar19 = (float)*(undefined8 *)(*param_2 + 8);
    fVar21 = (float)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
    uVar35 = *(undefined8 *)*param_2;
    fVar15 = (float)uVar35;
    fVar16 = (float)((ulong)uVar35 >> 0x20);
    fVar17 = fVar15 * fVar15;
    fVar18 = fVar17 + fVar17;
    fVar20 = fVar16 * fVar16 + fVar17;
    fVar22 = fVar19 * fVar19 + fVar17;
    fVar17 = fVar21 * fVar21 + fVar17;
    auVar41._4_4_ = fVar20;
    auVar41._0_4_ = fVar18;
    auVar41._8_4_ = fVar22;
    auVar41._12_4_ = fVar17;
    auVar31 = NEON_frsqrte(auVar41,4);
    iVar23 = -(uint)(fVar18 <= 0.0);
    iVar26 = -(uint)(fVar20 <= 0.0);
    iVar28 = -(uint)(fVar22 <= 0.0);
    iVar29 = -(uint)(fVar17 <= 0.0);
    fVar30 = auVar31._0_4_;
    auVar36._0_4_ = fVar30 * fVar30;
    fVar32 = auVar31._4_4_;
    auVar36._4_4_ = fVar32 * fVar32;
    fVar33 = auVar31._8_4_;
    auVar36._8_4_ = fVar33 * fVar33;
    fVar34 = auVar31._12_4_;
    auVar36._12_4_ = fVar34 * fVar34;
    auVar4._4_4_ = fVar20;
    auVar4._0_4_ = fVar18;
    auVar4._8_4_ = fVar22;
    auVar4._12_4_ = fVar17;
    auVar31 = NEON_frsqrts(auVar4,auVar36,4);
    fVar30 = fVar30 * auVar31._0_4_;
    fVar32 = fVar32 * auVar31._4_4_;
    fVar33 = fVar33 * auVar31._8_4_;
    fVar34 = fVar34 * auVar31._12_4_;
    auVar37._0_4_ = fVar30 * fVar30;
    auVar37._4_4_ = fVar32 * fVar32;
    auVar37._8_4_ = fVar33 * fVar33;
    auVar37._12_4_ = fVar34 * fVar34;
    auVar5._4_4_ = fVar20;
    auVar5._0_4_ = fVar18;
    auVar5._8_4_ = fVar22;
    auVar5._12_4_ = fVar17;
    auVar31 = NEON_frsqrts(auVar5,auVar37,4);
    fVar30 = auVar31._0_4_ * fVar30;
    fVar32 = auVar31._4_4_ * fVar32;
    fVar33 = auVar31._8_4_ * fVar33;
    fVar34 = auVar31._12_4_ * fVar34;
    auVar40._0_12_ = SUB1612(*param_2,0);
    auVar40._12_4_ = 0;
    auVar38._8_8_ = _UNK_03889038;
    auVar38._0_8_ = _DAT_03889030;
    auVar42._8_8_ = _UNK_03889f18;
    auVar42._0_8_ = _DAT_03889f10;
    auVar25._0_8_ =
         CONCAT17((byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                  CONCAT16((byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10),
                           CONCAT15((byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar26 >> 8),
                                    CONCAT14(SUB41(fVar32,0) & ~(byte)iVar26,
                                             CONCAT13((byte)((uint)fVar30 >> 0x18) &
                                                      ~(byte)((uint)iVar23 >> 0x18),
                                                      CONCAT12((byte)((uint)fVar30 >> 0x10) &
                                                               ~(byte)((uint)iVar23 >> 0x10),
                                                               CONCAT11((byte)((uint)fVar30 >> 8) &
                                                                        ~(byte)((uint)iVar23 >> 8),
                                                                        SUB41(fVar30,0) &
                                                                        ~(byte)iVar23)))))));
    auVar25[8] = SUB41(fVar33,0) & ~(byte)iVar28;
    auVar25[9] = (byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar28 >> 8);
    auVar25[10] = (byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10);
    auVar25[0xb] = (byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18);
    auVar25[0xc] = SUB41(fVar34,0) & ~(byte)iVar29;
    auVar25[0xd] = (byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar29 >> 8);
    auVar25[0xe] = (byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10);
    auVar25[0xf] = (byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18);
    auVar31 = a64_TBL(ZEXT816(0),auVar40,auVar38);
    auVar41 = a64_TBL(ZEXT816(0),auVar40,auVar42);
    iVar23 = -(uint)(fVar22 < fVar20);
    iVar26 = -(uint)(fVar22 < fVar20);
    auVar43._4_4_ = iVar26;
    auVar43._0_4_ = iVar23;
    auVar43._12_4_ = iVar26;
    auVar43._8_4_ = iVar23;
    auVar41 = auVar41 ^ (auVar41 ^ auVar31) & auVar43;
    auVar31._12_4_ = fVar21;
    auVar31._0_12_ = *(undefined1 (*) [12])*param_2;
    auVar39._12_4_ = fVar21;
    auVar39._0_12_ = *(undefined1 (*) [12])*param_2;
    auVar39 = NEON_ext(auVar31,auVar39,8,1);
    fVar30 = -auVar41._0_4_;
    fVar32 = auVar41._4_4_;
    auVar44._4_12_ = auVar41._4_12_;
    auVar44._0_4_ = fVar30;
    uVar27 = (undefined4)((ulong)auVar25._0_8_ >> 0x20);
    auVar31 = NEON_ext(auVar25,auVar25,8,1);
    uVar24 = CONCAT44(auVar31._0_4_,auVar31._0_4_);
    uVar24 = uVar24 ^ (uVar24 ^ CONCAT44(uVar27,uVar27)) & CONCAT44(iVar26,iVar23);
    fVar20 = (float)uVar24;
    fVar22 = (float)(uVar24 >> 0x20);
    auVar31 = NEON_ext(auVar44,auVar44,4,1);
    uVar35 = NEON_ext(uVar35,auVar39._0_8_,4,1);
    fVar17 = (float)uVar35 * fVar30 - fVar15 * auVar31._0_4_;
    fVar18 = (float)((ulong)uVar35 >> 0x20) * fVar32 - fVar16 * auVar31._4_4_;
    fVar15 = fVar15 * auVar41._8_4_ - fVar19 * fVar30;
    fVar16 = fVar16 * auVar41._12_4_ - fVar21 * fVar32;
    auVar1._4_4_ = fVar18;
    auVar1._0_4_ = fVar17;
    auVar1._8_4_ = fVar15;
    auVar1._12_4_ = fVar16;
    auVar2._4_4_ = fVar18;
    auVar2._0_4_ = fVar17;
    auVar2._8_4_ = fVar15;
    auVar2._12_4_ = fVar16;
    auVar31 = NEON_ext(auVar1,auVar2,4,1);
    fVar19 = (float)*param_4 * 1.45;
    fVar21 = (float)((ulong)*param_4 >> 0x20) * 1.45;
    fVar15 = fVar19 * (ABS(fVar20 * fVar30) + ABS(fVar20 * auVar31._0_4_));
    fVar16 = fVar21 * (ABS(fVar22 * fVar32) + ABS(fVar22 * auVar31._4_4_));
    fVar19 = fVar19 * (ABS(fVar20 * auVar41._8_4_) + ABS(fVar20 * fVar17));
    fVar21 = fVar21 * (ABS(fVar22 * auVar41._12_4_) + ABS(fVar22 * fVar18));
    auVar7._0_4_ = auVar7._0_4_ - fVar15;
    auVar7._4_4_ = fVar11 - fVar16;
    auVar7._8_4_ = fVar12 - fVar19;
    auVar7._12_4_ = fVar13 - fVar21;
    auVar8._0_4_ = auVar8._0_4_ + fVar15;
    auVar8._4_4_ = fVar14 + fVar16;
    auVar8._8_4_ = fVar9 + fVar19;
    auVar8._12_4_ = fVar10 + fVar21;
  }
  if ((param_5 & 1) != 0) {
    fVar11 = -(float)*param_3;
    fVar13 = -(float)((ulong)*param_3 >> 0x20);
    fVar12 = fVar11 * (float)*(undefined8 *)*param_2;
    fVar14 = fVar13 * (float)((ulong)*(undefined8 *)*param_2 >> 0x20);
    fVar11 = fVar11 * (float)*(undefined8 *)(*param_2 + 8);
    fVar13 = fVar13 * (float)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
    auVar6._4_4_ = auVar8._4_4_ + fVar14;
    auVar6._0_4_ = auVar8._0_4_ + fVar12;
    auVar6._8_4_ = auVar8._8_4_ + fVar11;
    auVar6._12_4_ = auVar8._12_4_ + fVar13;
    auVar8 = NEON_fmax(auVar8,auVar6,4);
    auVar3._4_4_ = auVar7._4_4_ + fVar14;
    auVar3._0_4_ = auVar7._0_4_ + fVar12;
    auVar3._8_4_ = auVar7._8_4_ + fVar11;
    auVar3._12_4_ = auVar7._12_4_ + fVar13;
    auVar7 = NEON_fmin(auVar7,auVar3,4);
  }
  *(long *)(*param_1 + 8) = auVar7._8_8_;
  *(long *)*param_1 = auVar7._0_8_;
  *(long *)(param_1[1] + 8) = auVar8._8_8_;
  *(long *)param_1[1] = auVar8._0_8_;
  return;
}


