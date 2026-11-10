/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c9ce4; name: FUN_032c9ce4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_032c9ce4(undefined8 *param_1,undefined1 (*param_2) [16],undefined8 *param_3)

{
  float fVar4;
  undefined1 auVar1 [12];
  float fVar3;
  undefined1 auVar2 [16];
  float fVar5;
  float fVar6;
  byte bVar9;
  ulong uVar7;
  byte bVar10;
  byte bVar11;
  undefined1 auVar8 [12];
  byte bVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar17;
  undefined8 uVar15;
  float fVar18;
  undefined1 auVar16 [16];
  float fVar19;
  float fVar20;
  float fVar24;
  undefined1 auVar21 [12];
  float fVar23;
  undefined1 auVar22 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar32;
  float fVar33;
  undefined1 auVar29 [12];
  undefined8 uVar28;
  undefined1 auVar30 [16];
  float fVar34;
  undefined1 auVar31 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  float fVar45;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar46 [16];
  float fVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined8 uVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  
  auVar46 = param_2[3];
  auVar13 = NEON_ext(auVar46,auVar46,8,1);
  auVar2 = NEON_ext(param_2[2],param_2[2],4,1);
  auVar16 = NEON_ext(auVar46,auVar46,0xc,1);
  fVar6 = auVar2._0_4_;
  auVar41._0_4_ = auVar46._0_4_ * fVar6;
  fVar3 = auVar2._4_4_;
  auVar41._4_4_ = auVar46._4_4_ * fVar3;
  fVar4 = auVar2._8_4_;
  auVar41._8_4_ = auVar46._8_4_ * fVar4;
  fVar5 = auVar2._12_4_;
  auVar41._12_4_ = auVar46._12_4_ * fVar5;
  auVar30 = NEON_ext(auVar41,auVar41,8,1);
  auVar57._0_4_ = auVar13._0_4_ * fVar6;
  auVar57._4_4_ = auVar13._4_4_ * fVar3;
  auVar57._8_4_ = auVar13._8_4_ * fVar4;
  auVar57._12_4_ = auVar13._12_4_ * fVar5;
  auVar22 = NEON_ext(auVar57,auVar57,4,1);
  auVar56._0_4_ = auVar16._0_4_ * fVar6;
  auVar56._4_4_ = auVar16._4_4_ * fVar3;
  auVar56._8_4_ = auVar16._8_4_ * fVar4;
  auVar56._12_4_ = auVar16._12_4_ * fVar5;
  auVar16 = NEON_ext(auVar41,auVar41,4,1);
  auVar13 = *param_2;
  auVar41 = param_2[1];
  auVar42 = NEON_ext(auVar41,auVar41,8,1);
  auVar53 = NEON_ext(auVar41,auVar41,0xc,1);
  fVar44 = auVar22._0_4_ - auVar30._0_4_;
  fVar47 = auVar22._4_4_ - auVar30._4_4_;
  fVar49 = auVar22._8_4_ - auVar30._8_4_;
  fVar51 = auVar22._12_4_ - auVar30._12_4_;
  auVar22 = NEON_ext(auVar56,auVar56,8,1);
  fVar35 = auVar57._0_4_ - auVar16._0_4_;
  fVar36 = auVar57._4_4_ - auVar16._4_4_;
  fVar37 = auVar57._8_4_ - auVar16._8_4_;
  fVar38 = auVar57._12_4_ - auVar16._12_4_;
  auVar16 = NEON_ext(auVar41,auVar41,4,1);
  fVar20 = auVar22._0_4_ - auVar56._0_4_;
  fVar23 = auVar22._4_4_ - auVar56._4_4_;
  fVar24 = auVar22._8_4_ - auVar56._8_4_;
  fVar25 = auVar22._12_4_ - auVar56._12_4_;
  fVar26 = auVar53._0_4_ * fVar35 + auVar16._0_4_ * fVar44 + auVar42._0_4_ * fVar20;
  fVar32 = auVar53._4_4_ * fVar36 + auVar16._4_4_ * fVar47 + auVar42._4_4_ * fVar23;
  fVar33 = auVar53._8_4_ * fVar37 + auVar16._8_4_ * fVar49 + auVar42._8_4_ * fVar24;
  fVar34 = auVar53._12_4_ * fVar38 + auVar16._12_4_ * fVar51 + auVar42._12_4_ * fVar25;
  fVar14 = auVar13._0_4_ * fVar26;
  fVar17 = auVar13._4_4_ * fVar32;
  fVar18 = auVar13._8_4_ * fVar33;
  fVar19 = auVar13._12_4_ * fVar34;
  uVar7 = CONCAT17((char)((ulong)_DAT_043498b0 >> 0x38),
                   (uint7)((byte)((ulong)_DAT_043498b0 >> 0x18) & 0x80) << 0x18) &
          0x80ffffffffffffff;
  bVar11 = (byte)((ulong)uRam00000000043498b8 >> 0x18) & 0x80;
  bVar12 = (byte)((ulong)uRam00000000043498b8 >> 0x38) & 0x80;
  bVar9 = (byte)(uVar7 >> 0x18);
  fVar14 = (float)CONCAT13(bVar9 ^ (byte)((uint)fVar14 >> 0x18),SUB43(fVar14,0));
  bVar10 = (byte)(uVar7 >> 0x38);
  auVar16._0_8_ =
       CONCAT17(bVar10 ^ (byte)((uint)fVar17 >> 0x18),
                CONCAT16((char)((uint)fVar17 >> 0x10),
                         CONCAT15((char)((uint)fVar17 >> 8),CONCAT14(SUB41(fVar17,0),fVar14))));
  auVar16[8] = SUB41(fVar18,0);
  auVar16[9] = (undefined1)((uint)fVar18 >> 8);
  auVar16[10] = (undefined1)((uint)fVar18 >> 0x10);
  auVar16[0xb] = bVar11 ^ (byte)((uint)fVar18 >> 0x18);
  auVar16[0xc] = SUB41(fVar19,0);
  auVar16[0xd] = (undefined1)((uint)fVar19 >> 8);
  auVar16[0xe] = (undefined1)((uint)fVar19 >> 0x10);
  auVar16[0xf] = bVar12 ^ (byte)((uint)fVar19 >> 0x18);
  auVar57 = NEON_ext(auVar16,auVar16,8,1);
  fVar14 = fVar14 + (float)((ulong)auVar16._0_8_ >> 0x20);
  fVar18 = auVar57._0_4_ + auVar57._4_4_;
  fVar17 = fVar14 + fVar18;
  uVar15 = CONCAT44(fVar14 + fVar18,fVar17);
  if ((float)*param_3 < ABS(fVar17)) {
    auVar16 = NEON_ext(auVar13,auVar13,4,1);
    fVar14 = auVar16._0_4_;
    fVar17 = auVar16._4_4_;
    fVar18 = auVar16._8_4_;
    fVar19 = auVar16._12_4_;
    auVar43._0_4_ = auVar42._0_4_ * fVar14;
    auVar43._4_4_ = auVar42._4_4_ * fVar17;
    auVar43._8_4_ = auVar42._8_4_ * fVar18;
    auVar43._12_4_ = auVar42._12_4_ * fVar19;
    auVar13 = NEON_ext(auVar46,auVar46,4,1);
    auVar54._0_4_ = auVar53._0_4_ * fVar14;
    auVar54._4_4_ = auVar53._4_4_ * fVar17;
    auVar54._8_4_ = auVar53._8_4_ * fVar18;
    auVar54._12_4_ = auVar53._12_4_ * fVar19;
    fVar27 = (float)CONCAT13(bVar9 ^ (byte)((uint)fVar26 >> 0x18),SUB43(fVar26,0));
    auVar29._0_8_ =
         CONCAT17(bVar10 ^ (byte)((uint)fVar32 >> 0x18),
                  CONCAT16((char)((uint)fVar32 >> 0x10),
                           CONCAT15((char)((uint)fVar32 >> 8),CONCAT14(SUB41(fVar32,0),fVar27))));
    auVar29[8] = SUB41(fVar33,0);
    auVar29[9] = (undefined1)((uint)fVar33 >> 8);
    auVar29[10] = (undefined1)((uint)fVar33 >> 0x10);
    auVar29[0xb] = bVar11 ^ (byte)((uint)fVar33 >> 0x18);
    auVar53[0xc] = SUB41(fVar34,0);
    auVar53._0_12_ = auVar29;
    auVar53[0xd] = (undefined1)((uint)fVar34 >> 8);
    auVar53[0xe] = (undefined1)((uint)fVar34 >> 0x10);
    auVar53[0xf] = bVar12 ^ (byte)((uint)fVar34 >> 0x18);
    auVar40._0_4_ = auVar41._0_4_ * fVar14;
    auVar40._4_4_ = auVar41._4_4_ * fVar17;
    auVar40._8_4_ = auVar41._8_4_ * fVar18;
    auVar40._12_4_ = auVar41._12_4_ * fVar19;
    auVar16 = NEON_ext(auVar16,auVar16,4,1);
    auVar57 = NEON_ext(auVar16,auVar16,4,1);
    auVar56 = NEON_ext(auVar43,auVar43,4,1);
    auVar46 = NEON_ext(auVar40,auVar40,8,1);
    auVar41 = NEON_ext(auVar40,auVar40,4,1);
    fVar45 = auVar56._0_4_ - auVar46._0_4_;
    fVar48 = auVar56._4_4_ - auVar46._4_4_;
    fVar50 = auVar56._8_4_ - auVar46._8_4_;
    fVar52 = auVar56._12_4_ - auVar46._12_4_;
    auVar46 = NEON_ext(auVar54,auVar54,8,1);
    fVar26 = fVar14 * fVar44 + fVar20 * auVar16._0_4_ + fVar35 * auVar57._0_4_;
    fVar32 = fVar17 * fVar47 + fVar23 * auVar16._4_4_ + fVar36 * auVar57._4_4_;
    fVar33 = fVar18 * fVar49 + fVar24 * auVar16._8_4_ + fVar37 * auVar57._8_4_;
    fVar25 = fVar19 * fVar51 + fVar25 * auVar16._12_4_ + fVar38 * auVar57._12_4_;
    fVar38 = auVar46._0_4_ - auVar54._0_4_;
    fVar44 = auVar46._4_4_ - auVar54._4_4_;
    fVar47 = auVar46._8_4_ - auVar54._8_4_;
    fVar49 = auVar46._12_4_ - auVar54._12_4_;
    auVar16 = NEON_ext(auVar13,auVar13,4,1);
    auVar46 = NEON_ext(auVar2,auVar2,4,1);
    fVar34 = auVar43._0_4_ - auVar41._0_4_;
    fVar35 = auVar43._4_4_ - auVar41._4_4_;
    fVar36 = auVar43._8_4_ - auVar41._8_4_;
    fVar37 = auVar43._12_4_ - auVar41._12_4_;
    auVar2 = NEON_ext(auVar16,auVar16,4,1);
    auVar41 = NEON_ext(auVar46,auVar46,4,1);
    uVar7 = CONCAT17(PTR_DAT_04388890[0xa7],(uint7)(PTR_DAT_04388890[0xa3] & 0x80) << 0x18) &
            0x80ffffffffffffff;
    uVar39 = NEON_frecpe(uVar15,4);
    uVar55 = NEON_frecps(uVar15,uVar39,4);
    fVar23 = (float)uVar39 * (float)uVar55;
    fVar24 = (float)((ulong)uVar39 >> 0x20) * (float)((ulong)uVar55 >> 0x20);
    fVar14 = auVar2._0_4_ * fVar34 + auVar13._0_4_ * fVar45 + auVar16._0_4_ * fVar38;
    fVar17 = auVar2._4_4_ * fVar35 + auVar13._4_4_ * fVar48 + auVar16._4_4_ * fVar44;
    fVar18 = auVar2._8_4_ * fVar36 + auVar13._8_4_ * fVar50 + auVar16._8_4_ * fVar47;
    fVar20 = auVar2._12_4_ * fVar37 + auVar13._12_4_ * fVar52 + auVar16._12_4_ * fVar49;
    fVar19 = (float)CONCAT13(bVar9 ^ (byte)((uint)fVar14 >> 0x18),SUB43(fVar14,0));
    auVar8._0_8_ = CONCAT17(bVar10 ^ (byte)((uint)fVar17 >> 0x18),
                            CONCAT16((char)((uint)fVar17 >> 0x10),
                                     CONCAT15((char)((uint)fVar17 >> 8),
                                              CONCAT14(SUB41(fVar17,0),fVar19))));
    auVar8[8] = SUB41(fVar18,0);
    auVar8[9] = (char)((uint)fVar18 >> 8);
    auVar8[10] = (char)((uint)fVar18 >> 0x10);
    auVar8[0xb] = bVar11 ^ (byte)((uint)fVar18 >> 0x18);
    auVar2[0xc] = SUB41(fVar20,0);
    auVar2._0_12_ = auVar8;
    auVar2[0xd] = (char)((uint)fVar20 >> 8);
    auVar2[0xe] = (char)((uint)fVar20 >> 0x10);
    auVar2[0xf] = bVar12 ^ (byte)((uint)fVar20 >> 0x18);
    fVar14 = auVar41._0_4_ * fVar34 + fVar6 * fVar45 + auVar46._0_4_ * fVar38;
    fVar17 = auVar41._4_4_ * fVar35 + fVar3 * fVar48 + auVar46._4_4_ * fVar44;
    fVar18 = auVar41._8_4_ * fVar36 + fVar4 * fVar50 + auVar46._8_4_ * fVar47;
    fVar6 = auVar41._12_4_ * fVar37 + fVar5 * fVar52 + auVar46._12_4_ * fVar49;
    bVar9 = (byte)(uVar7 >> 0x18);
    fVar14 = (float)CONCAT13(bVar9 ^ (byte)((uint)fVar14 >> 0x18),SUB43(fVar14,0));
    bVar10 = (byte)(uVar7 >> 0x38);
    auVar1._0_8_ = CONCAT17(bVar10 ^ (byte)((uint)fVar17 >> 0x18),
                            CONCAT16((char)((uint)fVar17 >> 0x10),
                                     CONCAT15((char)((uint)fVar17 >> 8),
                                              CONCAT14(SUB41(fVar17,0),fVar14))));
    auVar1[8] = SUB41(fVar18,0);
    auVar1[9] = (undefined1)((uint)fVar18 >> 8);
    auVar1[10] = (undefined1)((uint)fVar18 >> 0x10);
    auVar1[0xb] = PTR_DAT_04388890[0xab] & 0x80 ^ (byte)((uint)fVar18 >> 0x18);
    auVar46[0xc] = SUB41(fVar6,0);
    auVar46._0_12_ = auVar1;
    auVar46[0xd] = (undefined1)((uint)fVar6 >> 8);
    auVar46[0xe] = (undefined1)((uint)fVar6 >> 0x10);
    auVar46[0xf] = PTR_DAT_04388890[0xaf] & 0x80 ^ (byte)((uint)fVar6 >> 0x18);
    uVar15 = NEON_frecps(uVar15,CONCAT44(fVar24,fVar23),4);
    fVar23 = fVar23 * (float)uVar15;
    fVar24 = fVar24 * (float)((ulong)uVar15 >> 0x20);
    fVar17 = (float)CONCAT13(bVar9 ^ (byte)((uint)fVar26 >> 0x18),SUB43(fVar26,0));
    auVar21._0_8_ =
         CONCAT17(bVar10 ^ (byte)((uint)fVar32 >> 0x18),
                  CONCAT16((char)((uint)fVar32 >> 0x10),
                           CONCAT15((char)((uint)fVar32 >> 8),CONCAT14(SUB41(fVar32,0),fVar17))));
    auVar21[8] = SUB41(fVar33,0);
    auVar21[9] = (undefined1)((uint)fVar33 >> 8);
    auVar21[10] = (undefined1)((uint)fVar33 >> 0x10);
    auVar21[0xb] = PTR_DAT_04388890[0xab] & 0x80 ^ (byte)((uint)fVar33 >> 0x18);
    auVar30[0xc] = SUB41(fVar25,0);
    auVar30._0_12_ = auVar21;
    auVar30[0xd] = (undefined1)((uint)fVar25 >> 8);
    auVar30[0xe] = (undefined1)((uint)fVar25 >> 0x10);
    auVar30[0xf] = PTR_DAT_04388890[0xaf] & 0x80 ^ (byte)((uint)fVar25 >> 0x18);
    auVar31._0_4_ = fVar23 * fVar27;
    auVar31._4_4_ = fVar24 * (float)((ulong)auVar29._0_8_ >> 0x20);
    auVar31._8_4_ = fVar23 * auVar29._8_4_;
    auVar31._12_4_ = fVar24 * auVar53._12_4_;
    auVar42._0_4_ = fVar23 * fVar17;
    auVar42._4_4_ = fVar24 * (float)((ulong)auVar21._0_8_ >> 0x20);
    auVar42._8_4_ = fVar23 * auVar21._8_4_;
    auVar42._12_4_ = fVar24 * auVar30._12_4_;
    uVar39 = CONCAT44(auVar42._0_4_,auVar31._0_4_);
    auVar22._0_4_ = fVar23 * fVar19;
    auVar22._4_4_ = fVar24 * (float)((ulong)auVar8._0_8_ >> 0x20);
    auVar22._8_4_ = fVar23 * auVar8._8_4_;
    auVar22._12_4_ = fVar24 * auVar2._12_4_;
    uVar55 = CONCAT44(auVar42._4_4_,auVar31._4_4_);
    auVar13._0_4_ = fVar23 * fVar14;
    auVar13._4_4_ = fVar24 * (float)((ulong)auVar1._0_8_ >> 0x20);
    auVar13._8_4_ = fVar23 * auVar1._8_4_;
    auVar13._12_4_ = fVar24 * auVar46._12_4_;
    auVar46 = NEON_ext(auVar31,auVar31,8,1);
    uVar28 = CONCAT44(auVar13._4_4_,auVar22._4_4_);
    auVar2 = NEON_ext(auVar13,auVar13,8,1);
    uVar15 = CONCAT44(auVar13._0_4_,auVar22._0_4_);
    auVar13 = NEON_ext(auVar22,auVar22,8,1);
    auVar41 = NEON_ext(auVar42,auVar42,8,1);
    param_1[1] = uVar15;
    *param_1 = uVar39;
    param_1[3] = uVar28;
    param_1[2] = uVar55;
    param_1[5] = CONCAT44(auVar2._0_4_,auVar13._0_4_);
    param_1[4] = CONCAT44(auVar41._0_4_,auVar46._0_4_);
    param_1[7] = CONCAT44(auVar2._4_4_,auVar13._4_4_);
    param_1[6] = CONCAT44(auVar41._4_4_,auVar46._4_4_);
    return 0;
  }
  return 0x80040200;
}


