/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03269cec; name: FUN_03269cec
 */


undefined1  [16] FUN_03269cec(long param_1)

{
  float fVar1;
  float fVar3;
  float fVar4;
  undefined1 auVar2 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  int iVar22;
  ulong uVar18;
  undefined1 auVar19 [16];
  float fVar21;
  undefined1 auVar20 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar25 [16];
  ulong uVar29;
  ulong uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar38;
  undefined8 uVar34;
  float fVar39;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 uVar40;
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  undefined8 uVar44;
  float fVar47;
  int iVar48;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  int iVar49;
  undefined8 uVar50;
  undefined1 auVar51 [16];
  
  fVar5 = (float)*(undefined8 *)(param_1 + 0x80);
  fVar12 = (float)*(undefined8 *)(param_1 + 0x90) - fVar5;
  fVar6 = (float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20);
  fVar13 = (float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20) - fVar6;
  fVar7 = (float)*(undefined8 *)(param_1 + 0x88);
  fVar14 = (float)*(undefined8 *)(param_1 + 0x98) - fVar7;
  fVar16 = (float)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20);
  fVar15 = (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) - fVar16;
  auVar19._4_4_ = fVar13;
  auVar19._0_4_ = fVar12;
  auVar19._8_4_ = fVar14;
  auVar19._12_4_ = fVar15;
  auVar46._4_4_ = fVar13;
  auVar46._0_4_ = fVar12;
  auVar46._8_4_ = fVar14;
  auVar46._12_4_ = fVar15;
  auVar19 = NEON_ext(auVar19,auVar46,4,1);
  fVar1 = (float)*(undefined8 *)(param_1 + 0xa0);
  fVar8 = (float)*(undefined8 *)(param_1 + 0xb0) - fVar1;
  fVar3 = (float)((ulong)*(undefined8 *)(param_1 + 0xa0) >> 0x20);
  fVar9 = (float)((ulong)*(undefined8 *)(param_1 + 0xb0) >> 0x20) - fVar3;
  fVar4 = (float)*(undefined8 *)(param_1 + 0xa8);
  fVar10 = (float)*(undefined8 *)(param_1 + 0xb8) - fVar4;
  fVar28 = (float)((ulong)*(undefined8 *)(param_1 + 0xa8) >> 0x20);
  fVar11 = (float)((ulong)*(undefined8 *)(param_1 + 0xb8) >> 0x20) - fVar28;
  auVar23._4_4_ = fVar9;
  auVar23._0_4_ = fVar8;
  auVar23._8_4_ = fVar10;
  auVar23._12_4_ = fVar11;
  auVar31._4_4_ = fVar9;
  auVar31._0_4_ = fVar8;
  auVar31._8_4_ = fVar10;
  auVar31._12_4_ = fVar11;
  auVar31 = NEON_ext(auVar23,auVar31,4,1);
  fVar24 = fVar1 - fVar5;
  fVar26 = fVar3 - fVar6;
  fVar27 = fVar4 - fVar7;
  fVar28 = fVar28 - fVar16;
  fVar16 = fVar8 * auVar19._0_4_ - fVar12 * auVar31._0_4_;
  fVar21 = fVar9 * auVar19._4_4_ - fVar13 * auVar31._4_4_;
  auVar20._0_8_ = CONCAT44(fVar21,fVar16);
  auVar20._8_4_ = fVar10 * fVar12 - fVar14 * fVar8;
  auVar20._12_4_ = fVar11 * fVar13 - fVar15 * fVar9;
  auVar23 = NEON_ext(auVar20,auVar20,4,1);
  fVar39 = auVar23._0_4_;
  fVar42 = auVar23._4_4_;
  uVar40 = NEON_ext(auVar23._0_8_,auVar20._0_8_,4,1);
  fVar33 = fVar39 * fVar39 + fVar42 * fVar42 + fVar16 * fVar16;
  fVar38 = fVar39 * fVar39 + fVar42 * fVar42 + fVar16 * fVar16;
  uVar34 = CONCAT44(fVar38,fVar33);
  uVar44 = NEON_frecpe(uVar34,4);
  uVar50 = NEON_frecps(uVar34,uVar44,4);
  fVar43 = (float)uVar44 * (float)uVar50;
  fVar47 = (float)((ulong)uVar44 >> 0x20) * (float)((ulong)uVar50 >> 0x20);
  auVar32._0_4_ = auVar31._0_4_ * fVar39 - fVar8 * (float)uVar40;
  auVar32._4_4_ = auVar31._4_4_ * fVar42 - fVar9 * (float)((ulong)uVar40 >> 0x20);
  auVar32._8_4_ = fVar8 * fVar16 - fVar10 * fVar39;
  auVar32._12_4_ = fVar9 * fVar21 - fVar11 * fVar42;
  iVar17 = -(uint)(fVar33 == 0.0);
  iVar22 = -(uint)(fVar38 == 0.0);
  uVar34 = NEON_frecps(uVar34,CONCAT44(fVar47,fVar43),4);
  auVar23 = NEON_ext(auVar32,auVar32,4,1);
  uVar18 = CONCAT17(~(byte)((uint)iVar22 >> 0x18),
                    CONCAT16(~(byte)((uint)iVar22 >> 0x10),
                             CONCAT15(~(byte)((uint)iVar22 >> 8),
                                      CONCAT14(~(byte)iVar22,
                                               CONCAT13(~(byte)((uint)iVar17 >> 0x18),
                                                        CONCAT12(~(byte)((uint)iVar17 >> 0x10),
                                                                 CONCAT11(~(byte)((uint)iVar17 >> 8)
                                                                          ,~(byte)iVar17)))))));
  uVar40 = NEON_fmov(0x3f800000,4);
  auVar45._0_4_ = fVar12 * fVar12;
  auVar45._4_4_ = fVar13 * fVar13;
  auVar45._8_4_ = fVar14 * fVar14;
  auVar45._12_4_ = fVar15 * fVar15;
  uVar29 = CONCAT44(fVar47 * (float)((ulong)uVar34 >> 0x20),fVar43 * (float)uVar34) & uVar18;
  fVar21 = fVar24 * auVar23._0_4_;
  fVar39 = fVar26 * auVar23._4_4_;
  auVar41._0_4_ = fVar12 * fVar24;
  auVar41._4_4_ = fVar13 * fVar26;
  auVar41._8_4_ = fVar14 * fVar27;
  auVar41._12_4_ = fVar15 * fVar28;
  auVar35._0_4_ = fVar8 * fVar8;
  auVar35._4_4_ = fVar9 * fVar9;
  auVar35._8_4_ = fVar10 * fVar10;
  auVar35._12_4_ = fVar11 * fVar11;
  auVar25._0_4_ = fVar8 * fVar24;
  auVar25._4_4_ = fVar9 * fVar26;
  auVar25._8_4_ = fVar10 * fVar27;
  auVar25._12_4_ = fVar11 * fVar28;
  auVar46 = NEON_ext(auVar45,auVar45,8,1);
  auVar19 = NEON_ext(auVar41,auVar41,8,1);
  auVar31 = NEON_ext(auVar35,auVar35,8,1);
  auVar23 = NEON_ext(auVar25,auVar25,8,1);
  auVar36._0_4_ = auVar46._0_4_ + auVar45._0_4_ + auVar45._4_4_;
  auVar36._4_4_ = auVar19._0_4_ + auVar41._0_4_ + auVar41._4_4_;
  fVar28 = auVar31._0_4_ + auVar35._0_4_ + auVar35._4_4_;
  fVar16 = auVar23._0_4_ + auVar25._0_4_ + auVar25._4_4_;
  auVar36._12_4_ = fVar16;
  auVar36._8_4_ = fVar28;
  auVar23 = NEON_frecpe(auVar36,4);
  auVar31 = NEON_frecps(auVar36,auVar23,4);
  uVar34 = NEON_fminnm(CONCAT44((float)(uVar29 >> 0x20) * (fVar21 + fVar39 + fVar27 * auVar32._0_4_)
                                ,(float)uVar29 * (fVar21 + fVar39 + fVar27 * auVar32._0_4_)),uVar40,
                       4);
  iVar17 = -(uint)(auVar36._0_4_ == 0.0);
  iVar22 = -(uint)(auVar36._4_4_ == 0.0);
  iVar48 = -(uint)(fVar28 == 0.0);
  iVar49 = -(uint)(fVar16 == 0.0);
  auVar51._0_4_ = auVar23._0_4_ * auVar31._0_4_;
  auVar51._4_4_ = auVar23._4_4_ * auVar31._4_4_;
  auVar51._8_4_ = auVar23._8_4_ * auVar31._8_4_;
  auVar51._12_4_ = auVar23._12_4_ * auVar31._12_4_;
  auVar23 = NEON_frecps(auVar36,auVar51,4);
  uVar30 = NEON_fmax(uVar34,0,4);
  fVar39 = fVar14 * fVar10 + fVar12 * fVar8 + fVar13 * fVar9;
  fVar42 = fVar14 * fVar10 + fVar12 * fVar8 + fVar13 * fVar9;
  fVar28 = auVar51._0_4_ * auVar23._0_4_;
  fVar11 = auVar51._4_4_ * auVar23._4_4_;
  fVar15 = auVar51._8_4_ * auVar23._8_4_;
  fVar21 = auVar51._12_4_ * auVar23._12_4_;
  auVar37._0_4_ =
       (float)CONCAT13((byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18),
                       CONCAT12((byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar17 >> 0x10),
                                CONCAT11((byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar17 >> 8),
                                         SUB41(fVar28,0) & ~(byte)iVar17)));
  auVar37[4] = SUB41(fVar11,0) & ~(byte)iVar22;
  auVar37[5] = (byte)((uint)fVar11 >> 8) & ~(byte)((uint)iVar22 >> 8);
  auVar37[6] = (byte)((uint)fVar11 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10);
  auVar37[7] = (byte)((uint)fVar11 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18);
  auVar37[8] = SUB41(fVar15,0) & ~(byte)iVar48;
  auVar37[9] = (byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar48 >> 8);
  auVar37[10] = (byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10);
  auVar37[0xb] = (byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18);
  auVar37[0xc] = SUB41(fVar21,0) & ~(byte)iVar49;
  auVar37[0xd] = (byte)((uint)fVar21 >> 8) & ~(byte)((uint)iVar49 >> 8);
  auVar37[0xe] = (byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar49 >> 0x10);
  auVar37[0xf] = (byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18);
  auVar23 = NEON_ext(auVar37,auVar37,8,1);
  fVar28 = ((float)uVar30 * fVar39 - fVar16) * auVar23._0_4_;
  fVar16 = ((float)(uVar30 >> 0x20) * fVar42 - fVar16) * auVar23._0_4_;
  uVar34 = NEON_fminnm(CONCAT44(fVar16,fVar28),uVar40,4);
  uVar34 = NEON_fmax(uVar34,0,4);
  fVar11 = (float)uVar34;
  fVar15 = (float)((ulong)uVar34 >> 0x20);
  uVar34 = NEON_fminnm(CONCAT44((auVar36._4_4_ + fVar42 * fVar15) * auVar37._0_4_,
                                (auVar36._4_4_ + fVar39 * fVar11) * auVar37._0_4_),uVar40,4);
  uVar29 = NEON_fmax(uVar34,0,4);
  uVar29 = uVar29 ^ (uVar29 ^ uVar30) &
                    CONCAT44(-(uint)(fVar15 == fVar16),-(uint)(fVar11 == fVar28)) & uVar18;
  fVar28 = (float)uVar29;
  fVar1 = (fVar5 + fVar12 * fVar28) - (fVar1 + fVar8 * fVar11);
  fVar3 = (fVar6 + fVar13 * (float)(uVar29 >> 0x20)) - (fVar3 + fVar9 * fVar15);
  fVar4 = (fVar7 + fVar14 * fVar28) - (fVar4 + fVar10 * fVar11);
  fVar1 = fVar1 * fVar1;
  fVar3 = fVar3 * fVar3;
  fVar4 = fVar4 * fVar4;
  auVar2._0_4_ = fVar1 + fVar3 + fVar4;
  auVar2._4_4_ = fVar1 + fVar3 + fVar4;
  auVar2._8_8_ = 0;
  return auVar2;
}


