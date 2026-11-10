/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031b9bf0; name: FUN_031b9bf0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_031b9bf0(float *param_1,undefined1 (*param_2) [16],float *param_3,undefined1 (*param_4) [16]
                ,undefined8 *param_5)

{
  ulong uVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  float fVar8;
  int iVar9;
  undefined1 auVar6 [12];
  undefined1 auVar7 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar13;
  float fVar14;
  undefined1 auVar12 [16];
  float fVar17;
  float fVar18;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar19;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar33;
  undefined8 uVar31;
  float fVar34;
  int iVar35;
  undefined1 auVar32 [16];
  int iVar36;
  undefined8 uVar37;
  float fVar38;
  undefined8 uVar39;
  float fVar43;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined8 uVar44;
  
  fVar11 = *param_3 - *param_1;
  fVar13 = param_3[1] - param_1[1];
  fVar14 = param_3[2] - param_1[2];
  auVar10 = *param_4;
  auVar21 = *param_2;
  auVar7 = NEON_ext(auVar10,auVar10,8,1);
  uVar31 = NEON_ext(auVar10._0_8_,auVar7._0_8_,4,1);
  fVar26 = (float)((ulong)uVar31 >> 0x20);
  auVar7 = NEON_ext(auVar21,auVar21,8,1);
  uVar5 = NEON_ext(auVar21._0_8_,auVar7._0_8_,4,1);
  fVar27 = auVar10._0_4_;
  fVar28 = auVar10._4_4_;
  fVar19 = auVar21._0_4_;
  fVar22 = auVar21._4_4_;
  fVar23 = auVar21._8_4_;
  fVar24 = auVar21._12_4_;
  fVar17 = auVar10._8_4_;
  fVar18 = auVar10._12_4_;
  fVar2 = fVar27 * (float)uVar5 - fVar19 * (float)uVar31;
  fVar8 = fVar28 * (float)((ulong)uVar5 >> 0x20) - fVar22 * fVar26;
  auVar7._0_8_ = CONCAT44(fVar8,fVar2);
  auVar7._8_4_ = fVar17 * fVar19 - fVar23 * fVar27;
  auVar7._12_4_ = fVar18 * fVar22 - fVar24 * fVar28;
  auVar10 = NEON_ext(auVar7,auVar7,4,1);
  fVar30 = auVar10._0_4_;
  fVar34 = auVar10._4_4_;
  uVar37 = NEON_ext(auVar10._0_8_,auVar7._0_8_,4,1);
  fVar29 = fVar30 * fVar30 + fVar34 * fVar34 + fVar2 * fVar2;
  fVar33 = fVar30 * fVar30 + fVar34 * fVar34 + fVar2 * fVar2;
  uVar5 = CONCAT44(fVar33,fVar29);
  uVar39 = NEON_frecpe(uVar5,4);
  uVar44 = NEON_frecps(uVar5,uVar39,4);
  fVar38 = (float)uVar39 * (float)uVar44;
  fVar43 = (float)((ulong)uVar39 >> 0x20) * (float)((ulong)uVar44 >> 0x20);
  fVar25 = (float)uVar31 * fVar30 - fVar27 * (float)uVar37;
  fVar26 = fVar26 * fVar34 - fVar28 * (float)((ulong)uVar37 >> 0x20);
  fVar2 = fVar27 * fVar2 - fVar17 * fVar30;
  fVar8 = fVar28 * fVar8 - fVar18 * fVar34;
  iVar3 = -(uint)(fVar29 == 0.0);
  iVar9 = -(uint)(fVar33 == 0.0);
  uVar31 = NEON_frecps(uVar5,CONCAT44(fVar43,fVar38),4);
  auVar10._4_4_ = fVar26;
  auVar10._0_4_ = fVar25;
  auVar10._8_4_ = fVar2;
  auVar10._12_4_ = fVar8;
  auVar21._4_4_ = fVar26;
  auVar21._0_4_ = fVar25;
  auVar21._8_4_ = fVar2;
  auVar21._12_4_ = fVar8;
  auVar10 = NEON_ext(auVar10,auVar21,4,1);
  uVar4 = CONCAT13(~(byte)((uint)iVar3 >> 0x18),
                   CONCAT12(~(byte)((uint)iVar3 >> 0x10),
                            CONCAT11(~(byte)((uint)iVar3 >> 8),~(byte)iVar3)));
  auVar40._0_4_ = fVar19 * fVar19;
  auVar40._4_4_ = fVar22 * fVar22;
  auVar40._8_4_ = fVar23 * fVar23;
  auVar40._12_4_ = fVar24 * fVar24;
  uVar1 = CONCAT44(fVar43 * (float)((ulong)uVar31 >> 0x20),fVar38 * (float)uVar31) &
          CONCAT17(~(byte)((uint)iVar9 >> 0x18),
                   CONCAT16(~(byte)((uint)iVar9 >> 0x10),
                            CONCAT15(~(byte)((uint)iVar9 >> 8),CONCAT14(~(byte)iVar9,uVar4))));
  fVar30 = fVar11 * auVar10._0_4_;
  fVar34 = fVar13 * auVar10._4_4_;
  auVar20._0_4_ = fVar11 * fVar19;
  auVar20._4_4_ = fVar13 * fVar22;
  auVar20._8_4_ = fVar14 * fVar23;
  auVar20._12_4_ = (param_3[3] - param_1[3]) * fVar24;
  auVar32._0_4_ = fVar27 * fVar27;
  auVar32._4_4_ = fVar28 * fVar28;
  auVar32._8_4_ = fVar17 * fVar17;
  auVar32._12_4_ = fVar18 * fVar18;
  uVar39 = NEON_fmov(0x3f800000,4);
  auVar12._0_4_ = fVar27 * fVar11;
  auVar12._4_4_ = fVar28 * fVar13;
  auVar12._8_4_ = fVar17 * fVar14;
  auVar12._12_4_ = fVar18 * (param_3[3] - param_1[3]);
  auVar41 = NEON_ext(auVar40,auVar40,8,1);
  auVar21 = NEON_ext(auVar20,auVar20,8,1);
  auVar7 = NEON_ext(auVar32,auVar32,8,1);
  auVar10 = NEON_ext(auVar12,auVar12,8,1);
  auVar15._0_4_ = auVar41._0_4_ + auVar40._0_4_ + auVar40._4_4_;
  auVar15._4_4_ = auVar21._0_4_ + auVar20._0_4_ + auVar20._4_4_;
  fVar2 = auVar7._0_4_ + auVar32._0_4_ + auVar32._4_4_;
  fVar8 = auVar10._0_4_ + auVar12._0_4_ + auVar12._4_4_;
  auVar15._12_4_ = fVar8;
  auVar15._8_4_ = fVar2;
  auVar10 = NEON_frecpe(auVar15,4);
  auVar21 = NEON_frecps(auVar15,auVar10,4);
  uVar31 = NEON_fminnm(CONCAT44((float)(uVar1 >> 0x20) * (fVar30 + fVar34 + fVar14 * fVar25),
                                (float)uVar1 * (fVar30 + fVar34 + fVar14 * fVar25)),uVar39,4);
  iVar3 = -(uint)(auVar15._0_4_ == 0.0);
  iVar9 = -(uint)(auVar15._4_4_ == 0.0);
  iVar35 = -(uint)(fVar2 == 0.0);
  iVar36 = -(uint)(fVar8 == 0.0);
  auVar42._0_4_ = auVar10._0_4_ * auVar21._0_4_;
  auVar42._4_4_ = auVar10._4_4_ * auVar21._4_4_;
  auVar42._8_4_ = auVar10._8_4_ * auVar21._8_4_;
  auVar42._12_4_ = auVar10._12_4_ * auVar21._12_4_;
  auVar10 = NEON_frecps(auVar15,auVar42,4);
  uVar31 = NEON_fmax(uVar31,0,4);
  fVar13 = fVar17 * fVar23 + fVar27 * fVar19 + fVar28 * fVar22;
  fVar14 = fVar17 * fVar23 + fVar27 * fVar19 + fVar28 * fVar22;
  fVar2 = auVar42._0_4_ * auVar10._0_4_;
  fVar30 = auVar42._4_4_ * auVar10._4_4_;
  fVar34 = auVar42._8_4_ * auVar10._8_4_;
  fVar11 = auVar42._12_4_ * auVar10._12_4_;
  auVar16._0_4_ =
       (float)CONCAT13((byte)((uint)fVar2 >> 0x18) & ~(byte)((uint)iVar3 >> 0x18),
                       CONCAT12((byte)((uint)fVar2 >> 0x10) & ~(byte)((uint)iVar3 >> 0x10),
                                CONCAT11((byte)((uint)fVar2 >> 8) & ~(byte)((uint)iVar3 >> 8),
                                         SUB41(fVar2,0) & ~(byte)iVar3)));
  auVar16[4] = SUB41(fVar30,0) & ~(byte)iVar9;
  auVar16[5] = (byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar9 >> 8);
  auVar16[6] = (byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10);
  auVar16[7] = (byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18);
  auVar16[8] = SUB41(fVar34,0) & ~(byte)iVar35;
  auVar16[9] = (byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar35 >> 8);
  auVar16[10] = (byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10);
  auVar16[0xb] = (byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18);
  auVar16[0xc] = SUB41(fVar11,0) & ~(byte)iVar36;
  auVar16[0xd] = (byte)((uint)fVar11 >> 8) & ~(byte)((uint)iVar36 >> 8);
  auVar16[0xe] = (byte)((uint)fVar11 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10);
  auVar16[0xf] = (byte)((uint)fVar11 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18);
  auVar10 = NEON_ext(auVar16,auVar16,8,1);
  fVar2 = ((float)uVar31 * fVar13 - fVar8) * auVar10._0_4_;
  uVar5 = NEON_fminnm(CONCAT44(((float)((ulong)uVar31 >> 0x20) * fVar14 - fVar8) * auVar10._0_4_,
                               fVar2),uVar39,4);
  uVar37 = NEON_fmax(uVar5,0,4);
  fVar8 = (float)uVar37;
  uVar5 = NEON_fminnm(CONCAT44((auVar15._4_4_ + fVar14 * (float)((ulong)uVar37 >> 0x20)) *
                               auVar16._0_4_,(auVar15._4_4_ + fVar13 * fVar8) * auVar16._0_4_),
                      uVar39,4);
  *param_5 = uVar37;
  uVar5 = NEON_fmax(uVar5,0,4);
  fVar2 = (float)((uint)uVar5 ^
                 ((uint)uVar5 ^ (uint)(float)uVar31) & -(uint)(fVar8 == fVar2) & uVar4);
  iVar3 = -(uint)(fVar2 == (float)_DAT_03888e30);
  iVar9 = -(uint)(fVar2 == (float)((ulong)_DAT_03888e30 >> 0x20));
  iVar35 = -(uint)(fVar8 == (float)_UNK_03888e38);
  iVar36 = -(uint)(fVar8 == (float)((ulong)_UNK_03888e38 >> 0x20));
  iVar3 = CONCAT13((byte)((uint)iVar3 >> 0x18) & (byte)((ulong)_DAT_03889700 >> 0x18),
                   CONCAT12((byte)((uint)iVar3 >> 0x10) & (byte)((ulong)_DAT_03889700 >> 0x10),
                            CONCAT11((byte)((uint)iVar3 >> 8) & (byte)((ulong)_DAT_03889700 >> 8),
                                     (byte)iVar3 & (byte)_DAT_03889700)));
  auVar6._0_8_ = CONCAT17((byte)((uint)iVar9 >> 0x18) & (byte)((ulong)_DAT_03889700 >> 0x38),
                          CONCAT16((byte)((uint)iVar9 >> 0x10) &
                                   (byte)((ulong)_DAT_03889700 >> 0x30),
                                   CONCAT15((byte)((uint)iVar9 >> 8) &
                                            (byte)((ulong)_DAT_03889700 >> 0x28),
                                            CONCAT14((byte)iVar9 &
                                                     (byte)((ulong)_DAT_03889700 >> 0x20),iVar3))));
  auVar6[8] = (byte)iVar35 & (byte)_UNK_03889708;
  auVar6[9] = (byte)((uint)iVar35 >> 8) & (byte)((ulong)_UNK_03889708 >> 8);
  auVar6[10] = (byte)((uint)iVar35 >> 0x10) & (byte)((ulong)_UNK_03889708 >> 0x10);
  auVar6[0xb] = (byte)((uint)iVar35 >> 0x18) & (byte)((ulong)_UNK_03889708 >> 0x18);
  auVar41[0xc] = (byte)iVar36 & (byte)((ulong)_UNK_03889708 >> 0x20);
  auVar41._0_12_ = auVar6;
  auVar41[0xd] = (byte)((uint)iVar36 >> 8) & (byte)((ulong)_UNK_03889708 >> 0x28);
  auVar41[0xe] = (byte)((uint)iVar36 >> 0x10) & (byte)((ulong)_UNK_03889708 >> 0x30);
  auVar41[0xf] = (byte)((uint)iVar36 >> 0x18) & (byte)((ulong)_UNK_03889708 >> 0x38);
  return iVar3 + (int)((ulong)auVar6._0_8_ >> 0x20) + auVar6._8_4_ + auVar41._12_4_;
}


