/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b4a830; name: _INIT_314
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_314(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined2 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 extraout_var;
  undefined1 uVar18;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 uVar19;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 auVar25 [12];
  float fVar36;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar42;
  float fVar43;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar26 [12];
  float fVar40;
  float fVar41;
  float fVar44;
  float fVar45;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar27 [12];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  int iVar46;
  undefined1 auVar47 [12];
  int iVar59;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  int iVar60;
  int iVar61;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  int iVar62;
  int iVar69;
  int iVar70;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  int iVar71;
  
  uVar11 = _UNK_0388a2c8;
  uVar10 = _DAT_0388a2c0;
  DAT_043d29d0 = 0x402ccccd40a00000;
  DAT_043d2a24 = 0;
  DAT_043d29f0 = 0;
  DAT_043d29f8 = 0;
  DAT_043d2a00 = 0;
  DAT_043d2a08 = 0;
  DAT_043d2a20 = 0;
  DAT_043d29e8 = _UNK_0388a2c8;
  DAT_043d29e0 = _DAT_0388a2c0;
  DAT_043d2a10 = 0;
  DAT_043d2a18 = 0;
  fVar14 = (float)((ulong)DAT_0388a7a0 >> 0x20);
  fVar12 = (float)DAT_0388a7a0 + fVar14;
  fVar14 = (float)DAT_0388a7a0 + fVar14;
  if (fVar12 == 0.0) {
    uVar16 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar17 = 0;
  }
  else {
    fVar15 = (float)((ulong)DAT_0388a678 >> 0x20);
    fVar13 = (float)DAT_0388a678 + fVar15;
    fVar15 = (float)DAT_0388a678 + fVar15;
    uVar16 = SUB41(fVar15,0);
    uVar18 = (undefined1)((uint)fVar15 >> 8);
    uVar19 = (undefined1)((uint)fVar15 >> 0x10);
    uVar17 = (undefined1)((uint)fVar15 >> 0x18);
    auVar28[4] = uVar16;
    auVar28._0_4_ = fVar13;
    auVar28[5] = uVar18;
    auVar28[6] = uVar19;
    auVar28[7] = uVar17;
    auVar28[8] = SUB41(fVar13,0);
    auVar28[9] = (char)((uint)fVar13 >> 8);
    auVar28[10] = (char)((uint)fVar13 >> 0x10);
    auVar28[0xb] = (char)((uint)fVar13 >> 0x18);
    auVar28[0xc] = uVar16;
    auVar28[0xd] = uVar18;
    auVar28[0xe] = uVar19;
    auVar28[0xf] = uVar17;
    auVar28 = NEON_frsqrte(auVar28,4);
    auVar48._0_4_ = auVar28._0_4_ * fVar13;
    auVar48._4_4_ = auVar28._4_4_ * fVar15;
    auVar48._8_4_ = auVar28._8_4_ * fVar13;
    uVar6 = (undefined2)(CONCAT15(uVar18,CONCAT14(uVar16,fVar13)) >> 0x20);
    auVar48._12_4_ = auVar28._12_4_ * (float)CONCAT13(uVar17,CONCAT12(uVar19,uVar6));
    auVar49 = NEON_frsqrts(auVar28,auVar48,4);
    auVar29._0_4_ = auVar28._0_4_ * auVar49._0_4_;
    auVar29._4_4_ = auVar28._4_4_ * auVar49._4_4_;
    auVar29._8_4_ = auVar28._8_4_ * auVar49._8_4_;
    auVar29._12_4_ = auVar28._12_4_ * auVar49._12_4_;
    auVar50._0_4_ = fVar13 * auVar29._0_4_;
    auVar50._4_4_ = fVar15 * auVar29._4_4_;
    auVar50._8_4_ = fVar13 * auVar29._8_4_;
    auVar50._12_4_ = (float)CONCAT13(uVar17,CONCAT12(uVar19,uVar6)) * auVar29._12_4_;
    iVar62 = -(uint)(fVar13 == 0.0);
    iVar69 = -(uint)(fVar15 == 0.0);
    iVar70 = -(uint)(fVar13 == 0.0);
    iVar71 = -(uint)((float)CONCAT13(uVar17,CONCAT12(uVar19,uVar6)) == 0.0);
    auVar28 = NEON_frsqrts(auVar29,auVar50,4);
    fVar15 = auVar29._0_4_ * auVar28._0_4_ * (float)_DAT_03889780;
    fVar36 = auVar29._4_4_ * auVar28._4_4_ * (float)((ulong)_DAT_03889780 >> 0x20);
    fVar38 = auVar29._8_4_ * auVar28._8_4_ * (float)_UNK_03889788;
    fVar42 = auVar29._12_4_ * auVar28._12_4_ * (float)((ulong)_UNK_03889788 >> 0x20);
    auVar7._4_4_ = fVar14;
    auVar7._0_4_ = fVar12;
    auVar7._8_4_ = fVar12;
    auVar7._12_4_ = fVar14;
    auVar28 = NEON_frsqrte(auVar7,4);
    auVar63._0_4_ = fVar12 * auVar28._0_4_;
    auVar63._4_4_ = fVar14 * auVar28._4_4_;
    auVar63._8_4_ = fVar12 * auVar28._8_4_;
    auVar63._12_4_ = fVar14 * auVar28._12_4_;
    auVar49 = NEON_frsqrts(auVar28,auVar63,4);
    auVar51._0_4_ = auVar28._0_4_ * auVar49._0_4_;
    auVar51._4_4_ = auVar28._4_4_ * auVar49._4_4_;
    auVar51._8_4_ = auVar28._8_4_ * auVar49._8_4_;
    auVar51._12_4_ = auVar28._12_4_ * auVar49._12_4_;
    auVar64._0_4_ = fVar12 * auVar51._0_4_;
    auVar64._4_4_ = fVar14 * auVar51._4_4_;
    auVar64._8_4_ = fVar12 * auVar51._8_4_;
    auVar64._12_4_ = fVar14 * auVar51._12_4_;
    auVar28 = NEON_frsqrts(auVar51,auVar64,4);
    fVar13 = auVar51._0_4_ * auVar28._0_4_ * (float)_DAT_0388a4e0;
    fVar37 = auVar51._4_4_ * auVar28._4_4_ * (float)((ulong)_DAT_0388a4e0 >> 0x20);
    fVar39 = auVar51._8_4_ * auVar28._8_4_ * (float)_UNK_0388a4e8;
    fVar43 = auVar51._12_4_ * auVar28._12_4_ * (float)((ulong)_UNK_0388a4e8 >> 0x20);
    iVar46 = -(uint)(fVar12 == 0.0);
    iVar59 = -(uint)(fVar14 == 0.0);
    iVar60 = -(uint)(fVar12 == 0.0);
    iVar61 = -(uint)(fVar14 == 0.0);
    fVar14 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18),
                             CONCAT12((byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar46 >> 0x10),
                                      CONCAT11((byte)((uint)fVar13 >> 8) &
                                               ~(byte)((uint)iVar46 >> 8),
                                               SUB41(fVar13,0) & ~(byte)iVar46)));
    auVar25._0_8_ =
         CONCAT17((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18),
                  CONCAT16((byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10),
                           CONCAT15((byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar59 >> 8),
                                    CONCAT14(SUB41(fVar37,0) & ~(byte)iVar59,fVar14))));
    auVar25[8] = SUB41(fVar39,0) & ~(byte)iVar60;
    auVar25[9] = (byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar60 >> 8);
    auVar25[10] = (byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar60 >> 0x10);
    auVar25[0xb] = (byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar60 >> 0x18);
    auVar30[0xc] = SUB41(fVar43,0) & ~(byte)iVar61;
    auVar30._0_12_ = auVar25;
    auVar30[0xd] = (byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar61 >> 8);
    auVar30[0xe] = (byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10);
    auVar30[0xf] = (byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18);
    fVar14 = (float)CONCAT13((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar62 >> 0x18),
                             CONCAT12((byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar62 >> 0x10),
                                      CONCAT11((byte)((uint)fVar15 >> 8) &
                                               ~(byte)((uint)iVar62 >> 8),
                                               SUB41(fVar15,0) & ~(byte)iVar62))) * fVar14;
    fVar15 = (float)CONCAT13((byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18),
                             CONCAT12((byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10),
                                      CONCAT11((byte)((uint)fVar36 >> 8) &
                                               ~(byte)((uint)iVar69 >> 8),
                                               SUB41(fVar36,0) & ~(byte)iVar69))) *
             (float)((ulong)auVar25._0_8_ >> 0x20);
    uVar16 = (undefined1)((uint)fVar15 >> 8);
    uVar18 = (undefined1)((uint)fVar15 >> 0x10);
    uVar19 = (undefined1)((uint)fVar15 >> 0x18);
    fVar13 = (float)CONCAT13((byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18),
                             CONCAT12((byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10),
                                      CONCAT11((byte)((uint)fVar38 >> 8) &
                                               ~(byte)((uint)iVar70 >> 8),
                                               SUB41(fVar38,0) & ~(byte)iVar70))) * auVar25._8_4_;
    uVar17 = (undefined1)((uint)fVar13 >> 8);
    uVar20 = (undefined1)((uint)fVar13 >> 0x10);
    uVar21 = (undefined1)((uint)fVar13 >> 0x18);
    fVar36 = (float)CONCAT13((byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar71 >> 0x18),
                             CONCAT12((byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar71 >> 0x10),
                                      CONCAT11((byte)((uint)fVar42 >> 8) &
                                               ~(byte)((uint)iVar71 >> 8),
                                               SUB41(fVar42,0) & ~(byte)iVar71))) * auVar30._12_4_;
    uVar22 = (undefined1)((uint)fVar36 >> 8);
    uVar23 = (undefined1)((uint)fVar36 >> 0x10);
    uVar24 = (undefined1)((uint)fVar36 >> 0x18);
    auVar49[4] = SUB41(fVar15,0);
    auVar49._0_4_ = fVar14;
    auVar49[5] = uVar16;
    auVar49[6] = uVar18;
    auVar49[7] = uVar19;
    auVar49[8] = SUB41(fVar13,0);
    auVar49[9] = uVar17;
    auVar49[10] = uVar20;
    auVar49[0xb] = uVar21;
    auVar49[0xc] = SUB41(fVar36,0);
    auVar49[0xd] = uVar22;
    auVar49[0xe] = uVar23;
    auVar49[0xf] = uVar24;
    auVar1[4] = SUB41(fVar15,0);
    auVar1._0_4_ = fVar14;
    auVar1[5] = uVar16;
    auVar1[6] = uVar18;
    auVar1[7] = uVar19;
    auVar1[8] = SUB41(fVar13,0);
    auVar1[9] = uVar17;
    auVar1[10] = uVar20;
    auVar1[0xb] = uVar21;
    auVar1[0xc] = SUB41(fVar36,0);
    auVar1[0xd] = uVar22;
    auVar1[0xe] = uVar23;
    auVar1[0xf] = uVar24;
    auVar28 = NEON_ext(auVar49,auVar1,8,1);
    fVar14 = auVar28._0_4_ + fVar14 + auVar28._4_4_ + fVar15;
    uVar16 = 0;
    if ((-1.0 <= fVar14) && (uVar16 = SUB41(fVar14,0), 1.0 < fVar14)) {
      uVar16 = 0;
    }
    uVar16 = FUN_01009610(uVar16);
    fVar14 = -(float)CONCAT13(extraout_var_05,
                              CONCAT12(extraout_var_02,CONCAT11(extraout_var,uVar16)));
    uVar16 = SUB41(fVar14,0);
    uVar18 = (undefined1)((uint)fVar14 >> 8);
    uVar19 = (undefined1)((uint)fVar14 >> 0x10);
    uVar17 = (undefined1)((uint)fVar14 >> 0x18);
  }
  DAT_043d2a48 = uVar11;
  DAT_043d2a40 = uVar10;
  fVar12 = SQRT(fVar12);
  DAT_043d2a30 = 0x402ccccd40400000;
  DAT_043d2a10 = CONCAT44(CONCAT13(uVar17,CONCAT12(uVar19,CONCAT11(uVar18,uVar16))),
                          (undefined4)DAT_043d2a10);
  DAT_043d29f0 = DAT_043d29e0;
  DAT_043d29f8 = DAT_043d29e8;
  DAT_043d2a50 = 0;
  DAT_043d2a58 = 0;
  DAT_043d2a84 = 0;
  DAT_043d2a60 = 0;
  DAT_043d2a68 = 0;
  DAT_043d2a80 = 0;
  DAT_043d2a70 = 0;
  DAT_043d2a78 = 0;
  fVar13 = (float)_DAT_03888d10;
  fVar36 = (float)((ulong)_DAT_03888d10 >> 0x20);
  fVar14 = fVar36 * fVar12;
  fVar37 = (float)_UNK_03888d18;
  fVar38 = (float)((ulong)_UNK_03888d18 >> 0x20);
  fVar15 = fVar38 * fVar12;
  DAT_043d2a08 = CONCAT17((char)((uint)fVar15 >> 0x18),
                          CONCAT16((char)((uint)fVar15 >> 0x10),
                                   CONCAT15((char)((uint)fVar15 >> 8),
                                            CONCAT14(SUB41(fVar15,0),fVar37 * fVar12))));
  DAT_043d2a00 = CONCAT17((char)((uint)fVar14 >> 0x18),
                          CONCAT16((char)((uint)fVar14 >> 0x10),
                                   CONCAT15((char)((uint)fVar14 >> 8),
                                            CONCAT14(SUB41(fVar14,0),fVar13 * fVar12))));
  fVar14 = (float)((ulong)DAT_0388a630 >> 0x20);
  fVar12 = (float)DAT_0388a630 + fVar14;
  fVar14 = (float)DAT_0388a630 + fVar14;
  if (fVar12 == 0.0) {
    uVar16 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar17 = 0;
  }
  else {
    fVar15 = (float)((ulong)DAT_0388a678 >> 0x20);
    fVar39 = (float)DAT_0388a678 + fVar15;
    fVar15 = (float)DAT_0388a678 + fVar15;
    uVar16 = SUB41(fVar15,0);
    uVar18 = (undefined1)((uint)fVar15 >> 8);
    uVar19 = (undefined1)((uint)fVar15 >> 0x10);
    uVar17 = (undefined1)((uint)fVar15 >> 0x18);
    auVar2[4] = uVar16;
    auVar2._0_4_ = fVar39;
    auVar2[5] = uVar18;
    auVar2[6] = uVar19;
    auVar2[7] = uVar17;
    auVar2[8] = SUB41(fVar39,0);
    auVar2[9] = (char)((uint)fVar39 >> 8);
    auVar2[10] = (char)((uint)fVar39 >> 0x10);
    auVar2[0xb] = (char)((uint)fVar39 >> 0x18);
    auVar2[0xc] = uVar16;
    auVar2[0xd] = uVar18;
    auVar2[0xe] = uVar19;
    auVar2[0xf] = uVar17;
    auVar28 = NEON_frsqrte(auVar2,4);
    auVar52._0_4_ = auVar28._0_4_ * fVar39;
    auVar52._4_4_ = auVar28._4_4_ * fVar15;
    auVar52._8_4_ = auVar28._8_4_ * fVar39;
    uVar6 = (undefined2)(CONCAT15(uVar18,CONCAT14(uVar16,fVar39)) >> 0x20);
    auVar52._12_4_ = auVar28._12_4_ * (float)CONCAT13(uVar17,CONCAT12(uVar19,uVar6));
    auVar49 = NEON_frsqrts(auVar28,auVar52,4);
    auVar31._0_4_ = auVar28._0_4_ * auVar49._0_4_;
    auVar31._4_4_ = auVar28._4_4_ * auVar49._4_4_;
    auVar31._8_4_ = auVar28._8_4_ * auVar49._8_4_;
    auVar31._12_4_ = auVar28._12_4_ * auVar49._12_4_;
    auVar53._0_4_ = fVar39 * auVar31._0_4_;
    auVar53._4_4_ = fVar15 * auVar31._4_4_;
    auVar53._8_4_ = fVar39 * auVar31._8_4_;
    auVar53._12_4_ = (float)CONCAT13(uVar17,CONCAT12(uVar19,uVar6)) * auVar31._12_4_;
    iVar62 = -(uint)(fVar39 == 0.0);
    iVar69 = -(uint)(fVar15 == 0.0);
    iVar70 = -(uint)(fVar39 == 0.0);
    iVar71 = -(uint)((float)CONCAT13(uVar17,CONCAT12(uVar19,uVar6)) == 0.0);
    auVar28 = NEON_frsqrts(auVar31,auVar53,4);
    fVar15 = auVar31._0_4_ * auVar28._0_4_ * (float)_DAT_03889780;
    fVar42 = auVar31._4_4_ * auVar28._4_4_ * (float)((ulong)_DAT_03889780 >> 0x20);
    fVar40 = auVar31._8_4_ * auVar28._8_4_ * (float)_UNK_03889788;
    fVar44 = auVar31._12_4_ * auVar28._12_4_ * (float)((ulong)_UNK_03889788 >> 0x20);
    auVar8._4_4_ = fVar14;
    auVar8._0_4_ = fVar12;
    auVar8._8_4_ = fVar12;
    auVar8._12_4_ = fVar14;
    auVar28 = NEON_frsqrte(auVar8,4);
    auVar65._0_4_ = fVar12 * auVar28._0_4_;
    auVar65._4_4_ = fVar14 * auVar28._4_4_;
    auVar65._8_4_ = fVar12 * auVar28._8_4_;
    auVar65._12_4_ = fVar14 * auVar28._12_4_;
    auVar49 = NEON_frsqrts(auVar28,auVar65,4);
    auVar54._0_4_ = auVar28._0_4_ * auVar49._0_4_;
    auVar54._4_4_ = auVar28._4_4_ * auVar49._4_4_;
    auVar54._8_4_ = auVar28._8_4_ * auVar49._8_4_;
    auVar54._12_4_ = auVar28._12_4_ * auVar49._12_4_;
    auVar66._0_4_ = fVar12 * auVar54._0_4_;
    auVar66._4_4_ = fVar14 * auVar54._4_4_;
    auVar66._8_4_ = fVar12 * auVar54._8_4_;
    auVar66._12_4_ = fVar14 * auVar54._12_4_;
    auVar28 = NEON_frsqrts(auVar54,auVar66,4);
    fVar39 = auVar54._0_4_ * auVar28._0_4_ * (float)_DAT_03889e10;
    fVar43 = auVar54._4_4_ * auVar28._4_4_ * (float)((ulong)_DAT_03889e10 >> 0x20);
    fVar41 = auVar54._8_4_ * auVar28._8_4_ * (float)_UNK_03889e18;
    fVar45 = auVar54._12_4_ * auVar28._12_4_ * (float)((ulong)_UNK_03889e18 >> 0x20);
    iVar46 = -(uint)(fVar12 == 0.0);
    iVar59 = -(uint)(fVar14 == 0.0);
    iVar60 = -(uint)(fVar12 == 0.0);
    iVar61 = -(uint)(fVar14 == 0.0);
    fVar14 = (float)CONCAT13((byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18),
                             CONCAT12((byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar46 >> 0x10),
                                      CONCAT11((byte)((uint)fVar39 >> 8) &
                                               ~(byte)((uint)iVar46 >> 8),
                                               SUB41(fVar39,0) & ~(byte)iVar46)));
    auVar26._0_8_ =
         CONCAT17((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18),
                  CONCAT16((byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10),
                           CONCAT15((byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar59 >> 8),
                                    CONCAT14(SUB41(fVar43,0) & ~(byte)iVar59,fVar14))));
    auVar26[8] = SUB41(fVar41,0) & ~(byte)iVar60;
    auVar26[9] = (byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar60 >> 8);
    auVar26[10] = (byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar60 >> 0x10);
    auVar26[0xb] = (byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar60 >> 0x18);
    auVar32[0xc] = SUB41(fVar45,0) & ~(byte)iVar61;
    auVar32._0_12_ = auVar26;
    auVar32[0xd] = (byte)((uint)fVar45 >> 8) & ~(byte)((uint)iVar61 >> 8);
    auVar32[0xe] = (byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10);
    auVar32[0xf] = (byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18);
    fVar14 = (float)CONCAT13((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar62 >> 0x18),
                             CONCAT12((byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar62 >> 0x10),
                                      CONCAT11((byte)((uint)fVar15 >> 8) &
                                               ~(byte)((uint)iVar62 >> 8),
                                               SUB41(fVar15,0) & ~(byte)iVar62))) * fVar14;
    fVar15 = (float)CONCAT13((byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18),
                             CONCAT12((byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10),
                                      CONCAT11((byte)((uint)fVar42 >> 8) &
                                               ~(byte)((uint)iVar69 >> 8),
                                               SUB41(fVar42,0) & ~(byte)iVar69))) *
             (float)((ulong)auVar26._0_8_ >> 0x20);
    uVar16 = (undefined1)((uint)fVar15 >> 8);
    uVar18 = (undefined1)((uint)fVar15 >> 0x10);
    uVar19 = (undefined1)((uint)fVar15 >> 0x18);
    fVar39 = (float)CONCAT13((byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18),
                             CONCAT12((byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10),
                                      CONCAT11((byte)((uint)fVar40 >> 8) &
                                               ~(byte)((uint)iVar70 >> 8),
                                               SUB41(fVar40,0) & ~(byte)iVar70))) * auVar26._8_4_;
    uVar17 = (undefined1)((uint)fVar39 >> 8);
    uVar20 = (undefined1)((uint)fVar39 >> 0x10);
    uVar21 = (undefined1)((uint)fVar39 >> 0x18);
    fVar42 = (float)CONCAT13((byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar71 >> 0x18),
                             CONCAT12((byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar71 >> 0x10),
                                      CONCAT11((byte)((uint)fVar44 >> 8) &
                                               ~(byte)((uint)iVar71 >> 8),
                                               SUB41(fVar44,0) & ~(byte)iVar71))) * auVar32._12_4_;
    uVar22 = (undefined1)((uint)fVar42 >> 8);
    uVar23 = (undefined1)((uint)fVar42 >> 0x10);
    uVar24 = (undefined1)((uint)fVar42 >> 0x18);
    auVar3[4] = SUB41(fVar15,0);
    auVar3._0_4_ = fVar14;
    auVar3[5] = uVar16;
    auVar3[6] = uVar18;
    auVar3[7] = uVar19;
    auVar3[8] = SUB41(fVar39,0);
    auVar3[9] = uVar17;
    auVar3[10] = uVar20;
    auVar3[0xb] = uVar21;
    auVar3[0xc] = SUB41(fVar42,0);
    auVar3[0xd] = uVar22;
    auVar3[0xe] = uVar23;
    auVar3[0xf] = uVar24;
    auVar4[4] = SUB41(fVar15,0);
    auVar4._0_4_ = fVar14;
    auVar4[5] = uVar16;
    auVar4[6] = uVar18;
    auVar4[7] = uVar19;
    auVar4[8] = SUB41(fVar39,0);
    auVar4[9] = uVar17;
    auVar4[10] = uVar20;
    auVar4[0xb] = uVar21;
    auVar4[0xc] = SUB41(fVar42,0);
    auVar4[0xd] = uVar22;
    auVar4[0xe] = uVar23;
    auVar4[0xf] = uVar24;
    auVar28 = NEON_ext(auVar3,auVar4,8,1);
    fVar14 = auVar28._0_4_ + fVar14 + auVar28._4_4_ + fVar15;
    uVar16 = 0;
    if ((-1.0 <= fVar14) && (uVar16 = SUB41(fVar14,0), 1.0 < fVar14)) {
      uVar16 = 0;
    }
    uVar16 = FUN_01009610(uVar16);
    fVar14 = -(float)CONCAT13(extraout_var_06,
                              CONCAT12(extraout_var_03,CONCAT11(extraout_var_00,uVar16)));
    uVar16 = SUB41(fVar14,0);
    uVar18 = (undefined1)((uint)fVar14 >> 8);
    uVar19 = (undefined1)((uint)fVar14 >> 0x10);
    uVar17 = (undefined1)((uint)fVar14 >> 0x18);
  }
  DAT_043d2aa8 = uVar11;
  DAT_043d2aa0 = uVar10;
  fVar12 = SQRT(fVar12);
  DAT_043d2a70 = CONCAT44(CONCAT13(uVar17,CONCAT12(uVar19,CONCAT11(uVar18,uVar16))),
                          (undefined4)DAT_043d2a70);
  DAT_043d2a90 = 0x402ccccd3e99999a;
  DAT_043d2a50 = DAT_043d2a40;
  DAT_043d2a58 = DAT_043d2a48;
  DAT_043d2ab0 = 0;
  DAT_043d2ab8 = 0;
  DAT_043d2ae4 = 0;
  DAT_043d2ac0 = 0;
  DAT_043d2ac8 = 0;
  DAT_043d2ae0 = 0;
  DAT_043d2ad0 = 0;
  DAT_043d2ad8 = 0;
  fVar14 = fVar36 * fVar12;
  fVar15 = fVar38 * fVar12;
  DAT_043d2a68 = CONCAT17((char)((uint)fVar15 >> 0x18),
                          CONCAT16((char)((uint)fVar15 >> 0x10),
                                   CONCAT15((char)((uint)fVar15 >> 8),
                                            CONCAT14(SUB41(fVar15,0),fVar37 * fVar12))));
  DAT_043d2a60 = CONCAT17((char)((uint)fVar14 >> 0x18),
                          CONCAT16((char)((uint)fVar14 >> 0x10),
                                   CONCAT15((char)((uint)fVar14 >> 8),
                                            CONCAT14(SUB41(fVar14,0),fVar13 * fVar12))));
  fVar14 = (float)((ulong)DAT_0388a8c0 >> 0x20);
  fVar12 = (float)DAT_0388a8c0 + fVar14;
  fVar14 = (float)DAT_0388a8c0 + fVar14;
  if (fVar12 == 0.0) {
    uVar17 = 0;
    uVar16 = 0;
    uVar18 = 0;
    uVar19 = 0;
  }
  else {
    fVar15 = (float)((ulong)DAT_0388a678 >> 0x20);
    fVar39 = (float)DAT_0388a678 + fVar15;
    fVar15 = (float)DAT_0388a678 + fVar15;
    uVar16 = SUB41(fVar15,0);
    uVar18 = (undefined1)((uint)fVar15 >> 8);
    uVar19 = (undefined1)((uint)fVar15 >> 0x10);
    uVar17 = (undefined1)((uint)fVar15 >> 0x18);
    auVar5[4] = uVar16;
    auVar5._0_4_ = fVar39;
    auVar5[5] = uVar18;
    auVar5[6] = uVar19;
    auVar5[7] = uVar17;
    auVar5[8] = SUB41(fVar39,0);
    auVar5[9] = (char)((uint)fVar39 >> 8);
    auVar5[10] = (char)((uint)fVar39 >> 0x10);
    auVar5[0xb] = (char)((uint)fVar39 >> 0x18);
    auVar5[0xc] = uVar16;
    auVar5[0xd] = uVar18;
    auVar5[0xe] = uVar19;
    auVar5[0xf] = uVar17;
    auVar28 = NEON_frsqrte(auVar5,4);
    auVar55._0_4_ = auVar28._0_4_ * fVar39;
    auVar55._4_4_ = auVar28._4_4_ * fVar15;
    auVar55._8_4_ = auVar28._8_4_ * fVar39;
    uVar6 = (undefined2)(CONCAT15(uVar18,CONCAT14(uVar16,fVar39)) >> 0x20);
    auVar55._12_4_ = auVar28._12_4_ * (float)CONCAT13(uVar17,CONCAT12(uVar19,uVar6));
    auVar49 = NEON_frsqrts(auVar28,auVar55,4);
    auVar33._0_4_ = auVar28._0_4_ * auVar49._0_4_;
    auVar33._4_4_ = auVar28._4_4_ * auVar49._4_4_;
    auVar33._8_4_ = auVar28._8_4_ * auVar49._8_4_;
    auVar33._12_4_ = auVar28._12_4_ * auVar49._12_4_;
    auVar56._0_4_ = fVar39 * auVar33._0_4_;
    auVar56._4_4_ = fVar15 * auVar33._4_4_;
    auVar56._8_4_ = fVar39 * auVar33._8_4_;
    auVar56._12_4_ = (float)CONCAT13(uVar17,CONCAT12(uVar19,uVar6)) * auVar33._12_4_;
    iVar62 = -(uint)(fVar39 == 0.0);
    iVar69 = -(uint)(fVar15 == 0.0);
    iVar70 = -(uint)(fVar39 == 0.0);
    iVar71 = -(uint)((float)CONCAT13(uVar17,CONCAT12(uVar19,uVar6)) == 0.0);
    auVar28 = NEON_frsqrts(auVar33,auVar56,4);
    fVar15 = auVar33._0_4_ * auVar28._0_4_ * (float)_DAT_03889780;
    fVar39 = auVar33._4_4_ * auVar28._4_4_ * (float)((ulong)_DAT_03889780 >> 0x20);
    fVar42 = auVar33._8_4_ * auVar28._8_4_ * (float)_UNK_03889788;
    fVar43 = auVar33._12_4_ * auVar28._12_4_ * (float)((ulong)_UNK_03889788 >> 0x20);
    fVar15 = (float)CONCAT13((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar62 >> 0x18),
                             CONCAT12((byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar62 >> 0x10),
                                      CONCAT11((byte)((uint)fVar15 >> 8) &
                                               ~(byte)((uint)iVar62 >> 8),
                                               SUB41(fVar15,0) & ~(byte)iVar62)));
    auVar27._0_8_ =
         CONCAT17((byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18),
                  CONCAT16((byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10),
                           CONCAT15((byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar69 >> 8),
                                    CONCAT14(SUB41(fVar39,0) & ~(byte)iVar69,fVar15))));
    auVar27[8] = SUB41(fVar42,0) & ~(byte)iVar70;
    auVar27[9] = (byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar70 >> 8);
    auVar27[10] = (byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10);
    auVar27[0xb] = (byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18);
    auVar34[0xc] = SUB41(fVar43,0) & ~(byte)iVar71;
    auVar34._0_12_ = auVar27;
    auVar34[0xd] = (byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar71 >> 8);
    auVar34[0xe] = (byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar71 >> 0x10);
    auVar34[0xf] = (byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar71 >> 0x18);
    auVar9._4_4_ = fVar14;
    auVar9._0_4_ = fVar12;
    auVar9._8_4_ = fVar12;
    auVar9._12_4_ = fVar14;
    auVar28 = NEON_frsqrte(auVar9,4);
    uVar16 = 0;
    auVar67._0_4_ = fVar12 * auVar28._0_4_;
    auVar67._4_4_ = fVar14 * auVar28._4_4_;
    auVar67._8_4_ = fVar12 * auVar28._8_4_;
    auVar67._12_4_ = fVar14 * auVar28._12_4_;
    auVar49 = NEON_frsqrts(auVar28,auVar67,4);
    auVar57._0_4_ = auVar28._0_4_ * auVar49._0_4_;
    auVar57._4_4_ = auVar28._4_4_ * auVar49._4_4_;
    auVar57._8_4_ = auVar28._8_4_ * auVar49._8_4_;
    auVar57._12_4_ = auVar28._12_4_ * auVar49._12_4_;
    auVar68._0_4_ = fVar12 * auVar57._0_4_;
    auVar68._4_4_ = fVar14 * auVar57._4_4_;
    auVar68._8_4_ = fVar12 * auVar57._8_4_;
    auVar68._12_4_ = fVar14 * auVar57._12_4_;
    auVar28 = NEON_frsqrts(auVar57,auVar68,4);
    fVar39 = auVar57._0_4_ * auVar28._0_4_ * (float)_DAT_03888ed0;
    fVar42 = auVar57._4_4_ * auVar28._4_4_ * (float)((ulong)_DAT_03888ed0 >> 0x20);
    fVar43 = auVar57._8_4_ * auVar28._8_4_ * (float)_UNK_03888ed8;
    fVar40 = auVar57._12_4_ * auVar28._12_4_ * (float)((ulong)_UNK_03888ed8 >> 0x20);
    iVar62 = -(uint)(fVar12 == 0.0);
    iVar69 = -(uint)(fVar14 == 0.0);
    iVar70 = -(uint)(fVar12 == 0.0);
    iVar71 = -(uint)(fVar14 == 0.0);
    fVar14 = (float)CONCAT13((byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar62 >> 0x18),
                             CONCAT12((byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar62 >> 0x10),
                                      CONCAT11((byte)((uint)fVar39 >> 8) &
                                               ~(byte)((uint)iVar62 >> 8),
                                               SUB41(fVar39,0) & ~(byte)iVar62)));
    auVar47._0_8_ =
         CONCAT17((byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18),
                  CONCAT16((byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10),
                           CONCAT15((byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar69 >> 8),
                                    CONCAT14(SUB41(fVar42,0) & ~(byte)iVar69,fVar14))));
    auVar47[8] = SUB41(fVar43,0) & ~(byte)iVar70;
    auVar47[9] = (byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar70 >> 8);
    auVar47[10] = (byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10);
    auVar47[0xb] = (byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18);
    auVar58[0xc] = SUB41(fVar40,0) & ~(byte)iVar71;
    auVar58._0_12_ = auVar47;
    auVar58[0xd] = (byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar71 >> 8);
    auVar58[0xe] = (byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar71 >> 0x10);
    auVar58[0xf] = (byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar71 >> 0x18);
    auVar35._0_4_ = fVar15 * fVar14;
    auVar35._4_4_ = (float)((ulong)auVar27._0_8_ >> 0x20) * (float)((ulong)auVar47._0_8_ >> 0x20);
    auVar35._8_4_ = auVar27._8_4_ * auVar47._8_4_;
    auVar35._12_4_ = auVar34._12_4_ * auVar58._12_4_;
    auVar28 = NEON_ext(auVar35,auVar35,8,1);
    fVar14 = auVar28._0_4_ + auVar35._0_4_ + auVar28._4_4_ + auVar35._4_4_;
    if ((-1.0 <= fVar14) && (uVar16 = SUB41(fVar14,0), 1.0 < fVar14)) {
      uVar16 = 0;
    }
    uVar17 = FUN_01009610(uVar16);
    uVar16 = extraout_var_01;
    uVar18 = extraout_var_04;
    uVar19 = extraout_var_07;
  }
  fVar12 = SQRT(fVar12);
  DAT_043d2ad0 = CONCAT44(CONCAT13(uVar19,CONCAT12(uVar18,CONCAT11(uVar16,uVar17))),
                          (undefined4)DAT_043d2ad0);
  DAT_043d2ab0 = DAT_043d2aa0;
  DAT_043d2ab8 = DAT_043d2aa8;
  DAT_043d2ac8 = CONCAT44(fVar38 * fVar12,fVar37 * fVar12);
  DAT_043d2ac0 = CONCAT44(fVar36 * fVar12,fVar13 * fVar12);
  return;
}


