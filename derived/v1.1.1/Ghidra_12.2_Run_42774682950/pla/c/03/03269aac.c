/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03269aac; name: FUN_03269aac
 */


undefined1  [16] FUN_03269aac(long param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar2 [16];
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
  float fVar17;
  float fVar18;
  int iVar19;
  int iVar24;
  ulong uVar20;
  undefined1 auVar21 [16];
  float fVar23;
  undefined1 auVar22 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar28;
  float fVar29;
  undefined1 auVar27 [16];
  ulong uVar30;
  ulong uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  float fVar40;
  undefined8 uVar36;
  float fVar41;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined8 uVar42;
  undefined1 auVar43 [16];
  float fVar44;
  undefined8 uVar45;
  float fVar48;
  int iVar49;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  int iVar50;
  undefined8 uVar51;
  undefined1 auVar52 [16];
  
  fVar6 = (float)*(undefined8 *)(param_1 + 0x40);
  fVar14 = (float)*(undefined8 *)(param_1 + 0x50) - fVar6;
  fVar7 = (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
  fVar15 = (float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20) - fVar7;
  fVar8 = (float)*(undefined8 *)(param_1 + 0x48);
  fVar16 = (float)*(undefined8 *)(param_1 + 0x58) - fVar8;
  fVar9 = (float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20);
  fVar17 = (float)((ulong)*(undefined8 *)(param_1 + 0x58) >> 0x20) - fVar9;
  auVar21._4_4_ = fVar15;
  auVar21._0_4_ = fVar14;
  auVar21._8_4_ = fVar16;
  auVar21._12_4_ = fVar17;
  auVar47._4_4_ = fVar15;
  auVar47._0_4_ = fVar14;
  auVar47._8_4_ = fVar16;
  auVar47._12_4_ = fVar17;
  auVar21 = NEON_ext(auVar21,auVar47,4,1);
  fVar1 = (float)*(undefined8 *)(param_1 + 0x60);
  fVar10 = (float)*(undefined8 *)(param_1 + 0x70) - fVar1;
  fVar3 = (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20);
  fVar11 = (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20) - fVar3;
  fVar4 = (float)*(undefined8 *)(param_1 + 0x68);
  fVar12 = (float)*(undefined8 *)(param_1 + 0x78) - fVar4;
  fVar5 = (float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20);
  fVar13 = (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20) - fVar5;
  auVar25._4_4_ = fVar11;
  auVar25._0_4_ = fVar10;
  auVar25._8_4_ = fVar12;
  auVar25._12_4_ = fVar13;
  auVar32._4_4_ = fVar11;
  auVar32._0_4_ = fVar10;
  auVar32._8_4_ = fVar12;
  auVar32._12_4_ = fVar13;
  auVar32 = NEON_ext(auVar25,auVar32,4,1);
  fVar26 = fVar1 - fVar6;
  fVar28 = fVar3 - fVar7;
  fVar29 = fVar4 - fVar8;
  fVar18 = fVar10 * auVar21._0_4_ - fVar14 * auVar32._0_4_;
  fVar23 = fVar11 * auVar21._4_4_ - fVar15 * auVar32._4_4_;
  auVar22._0_8_ = CONCAT44(fVar23,fVar18);
  auVar22._8_4_ = fVar12 * fVar14 - fVar16 * fVar10;
  auVar22._12_4_ = fVar13 * fVar15 - fVar17 * fVar11;
  auVar25 = NEON_ext(auVar22,auVar22,4,1);
  fVar35 = auVar25._0_4_;
  fVar41 = auVar25._4_4_;
  uVar42 = NEON_ext(auVar25._0_8_,auVar22._0_8_,4,1);
  fVar34 = fVar35 * fVar35 + fVar41 * fVar41 + fVar18 * fVar18;
  fVar40 = fVar35 * fVar35 + fVar41 * fVar41 + fVar18 * fVar18;
  uVar36 = CONCAT44(fVar40,fVar34);
  uVar45 = NEON_frecpe(uVar36,4);
  uVar51 = NEON_frecps(uVar36,uVar45,4);
  fVar44 = (float)uVar45 * (float)uVar51;
  fVar48 = (float)((ulong)uVar45 >> 0x20) * (float)((ulong)uVar51 >> 0x20);
  auVar33._0_4_ = auVar32._0_4_ * fVar35 - fVar10 * (float)uVar42;
  auVar33._4_4_ = auVar32._4_4_ * fVar41 - fVar11 * (float)((ulong)uVar42 >> 0x20);
  auVar33._8_4_ = fVar10 * fVar18 - fVar12 * fVar35;
  auVar33._12_4_ = fVar11 * fVar23 - fVar13 * fVar41;
  iVar19 = -(uint)(fVar34 == 0.0);
  iVar24 = -(uint)(fVar40 == 0.0);
  uVar36 = NEON_frecps(uVar36,CONCAT44(fVar48,fVar44),4);
  auVar25 = NEON_ext(auVar33,auVar33,4,1);
  uVar20 = CONCAT17(~(byte)((uint)iVar24 >> 0x18),
                    CONCAT16(~(byte)((uint)iVar24 >> 0x10),
                             CONCAT15(~(byte)((uint)iVar24 >> 8),
                                      CONCAT14(~(byte)iVar24,
                                               CONCAT13(~(byte)((uint)iVar19 >> 0x18),
                                                        CONCAT12(~(byte)((uint)iVar19 >> 0x10),
                                                                 CONCAT11(~(byte)((uint)iVar19 >> 8)
                                                                          ,~(byte)iVar19)))))));
  uVar42 = NEON_fmov(0x3f800000,4);
  auVar46._0_4_ = fVar14 * fVar14;
  auVar46._4_4_ = fVar15 * fVar15;
  auVar46._8_4_ = fVar16 * fVar16;
  auVar46._12_4_ = fVar17 * fVar17;
  uVar30 = CONCAT44(fVar48 * (float)((ulong)uVar36 >> 0x20),fVar44 * (float)uVar36) & uVar20;
  fVar35 = fVar26 * auVar25._0_4_;
  fVar41 = fVar28 * auVar25._4_4_;
  auVar43._0_4_ = fVar14 * fVar26;
  auVar43._4_4_ = fVar15 * fVar28;
  auVar43._8_4_ = fVar16 * fVar29;
  auVar43._12_4_ = fVar17 * (fVar5 - fVar9);
  auVar37._0_4_ = fVar10 * fVar10;
  auVar37._4_4_ = fVar11 * fVar11;
  auVar37._8_4_ = fVar12 * fVar12;
  auVar37._12_4_ = fVar13 * fVar13;
  auVar27._0_4_ = fVar10 * fVar26;
  auVar27._4_4_ = fVar11 * fVar28;
  auVar27._8_4_ = fVar12 * fVar29;
  auVar27._12_4_ = fVar13 * (fVar5 - fVar9);
  auVar47 = NEON_ext(auVar46,auVar46,8,1);
  auVar21 = NEON_ext(auVar43,auVar43,8,1);
  auVar32 = NEON_ext(auVar37,auVar37,8,1);
  auVar25 = NEON_ext(auVar27,auVar27,8,1);
  auVar38._0_4_ = auVar47._0_4_ + auVar46._0_4_ + auVar46._4_4_;
  auVar38._4_4_ = auVar21._0_4_ + auVar43._0_4_ + auVar43._4_4_;
  fVar18 = auVar32._0_4_ + auVar37._0_4_ + auVar37._4_4_;
  fVar23 = auVar25._0_4_ + auVar27._0_4_ + auVar27._4_4_;
  auVar38._12_4_ = fVar23;
  auVar38._8_4_ = fVar18;
  auVar25 = NEON_frecpe(auVar38,4);
  auVar32 = NEON_frecps(auVar38,auVar25,4);
  uVar36 = NEON_fminnm(CONCAT44((float)(uVar30 >> 0x20) * (fVar35 + fVar41 + fVar29 * auVar33._0_4_)
                                ,(float)uVar30 * (fVar35 + fVar41 + fVar29 * auVar33._0_4_)),uVar42,
                       4);
  iVar19 = -(uint)(auVar38._0_4_ == 0.0);
  iVar24 = -(uint)(auVar38._4_4_ == 0.0);
  iVar49 = -(uint)(fVar18 == 0.0);
  iVar50 = -(uint)(fVar23 == 0.0);
  auVar52._0_4_ = auVar25._0_4_ * auVar32._0_4_;
  auVar52._4_4_ = auVar25._4_4_ * auVar32._4_4_;
  auVar52._8_4_ = auVar25._8_4_ * auVar32._8_4_;
  auVar52._12_4_ = auVar25._12_4_ * auVar32._12_4_;
  auVar25 = NEON_frecps(auVar38,auVar52,4);
  uVar31 = NEON_fmax(uVar36,0,4);
  fVar28 = fVar16 * fVar12 + fVar14 * fVar10 + fVar15 * fVar11;
  fVar29 = fVar16 * fVar12 + fVar14 * fVar10 + fVar15 * fVar11;
  fVar18 = auVar52._0_4_ * auVar25._0_4_;
  fVar35 = auVar52._4_4_ * auVar25._4_4_;
  fVar41 = auVar52._8_4_ * auVar25._8_4_;
  fVar26 = auVar52._12_4_ * auVar25._12_4_;
  auVar39._0_4_ =
       (float)CONCAT13((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                       CONCAT12((byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10),
                                CONCAT11((byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar19 >> 8),
                                         SUB41(fVar18,0) & ~(byte)iVar19)));
  auVar39[4] = SUB41(fVar35,0) & ~(byte)iVar24;
  auVar39[5] = (byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar24 >> 8);
  auVar39[6] = (byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10);
  auVar39[7] = (byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18);
  auVar39[8] = SUB41(fVar41,0) & ~(byte)iVar49;
  auVar39[9] = (byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar49 >> 8);
  auVar39[10] = (byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar49 >> 0x10);
  auVar39[0xb] = (byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18);
  auVar39[0xc] = SUB41(fVar26,0) & ~(byte)iVar50;
  auVar39[0xd] = (byte)((uint)fVar26 >> 8) & ~(byte)((uint)iVar50 >> 8);
  auVar39[0xe] = (byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10);
  auVar39[0xf] = (byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18);
  auVar25 = NEON_ext(auVar39,auVar39,8,1);
  fVar18 = ((float)uVar31 * fVar28 - fVar23) * auVar25._0_4_;
  fVar23 = ((float)(uVar31 >> 0x20) * fVar29 - fVar23) * auVar25._0_4_;
  uVar36 = NEON_fminnm(CONCAT44(fVar23,fVar18),uVar42,4);
  uVar36 = NEON_fmax(uVar36,0,4);
  fVar35 = (float)uVar36;
  fVar41 = (float)((ulong)uVar36 >> 0x20);
  uVar36 = NEON_fminnm(CONCAT44((auVar38._4_4_ + fVar29 * fVar41) * auVar39._0_4_,
                                (auVar38._4_4_ + fVar28 * fVar35) * auVar39._0_4_),uVar42,4);
  uVar30 = NEON_fmax(uVar36,0,4);
  uVar30 = uVar30 ^ (uVar30 ^ uVar31) &
                    CONCAT44(-(uint)(fVar41 == fVar23),-(uint)(fVar35 == fVar18)) & uVar20;
  fVar18 = (float)uVar30;
  fVar23 = (float)(uVar30 >> 0x20);
  fVar1 = (fVar6 + fVar14 * fVar18) - (fVar1 + fVar10 * fVar35);
  fVar3 = (fVar7 + fVar15 * fVar23) - (fVar3 + fVar11 * fVar41);
  fVar4 = (fVar8 + fVar16 * fVar18) - (fVar4 + fVar12 * fVar35);
  param_2[1] = CONCAT44((fVar9 + fVar17 * fVar23) - (fVar5 + fVar13 * fVar41),fVar4);
  *param_2 = CONCAT44(fVar3,fVar1);
  auVar2._0_4_ = fVar1 * fVar1 + fVar3 * fVar3 + fVar4 * fVar4;
  auVar2._4_4_ = fVar1 * fVar1 + fVar3 * fVar3 + fVar4 * fVar4;
  auVar2._8_8_ = 0;
  return auVar2;
}


