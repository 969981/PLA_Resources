/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0328fa78; name: FUN_0328fa78
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0328fa78(float param_1,float param_2,undefined8 *param_3,undefined8 *param_4,undefined8 param_5)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined1 auVar6 [16];
  byte bVar9;
  byte bVar10;
  int iVar7;
  byte bVar11;
  byte bVar13;
  byte bVar14;
  int iVar12;
  byte bVar15;
  undefined1 auVar8 [16];
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar21;
  int iVar22;
  undefined1 auVar20 [16];
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  undefined1 auVar41 [16];
  float fVar42;
  undefined8 uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar56;
  float fVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined8 *local_250;
  undefined8 local_248;
  undefined8 local_240 [2];
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  float local_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  float local_1b0;
  float local_1ac;
  undefined8 local_1a0;
  ulong uStack_198;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float local_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float local_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float local_120;
  float local_11c;
  undefined8 local_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  uVar2 = DAT_0388a148;
  uVar43 = DAT_0388a140;
  fVar53 = _UNK_03889a8c;
  fVar52 = _UNK_03889a88;
  fVar35 = _UNK_03889a84;
  fVar5 = _DAT_03889a80;
  uVar4 = 0x80040200;
  if ((0.0 < param_2) && (0.0 < param_1)) {
    uVar25 = param_4[1];
    uVar23 = *param_4;
    uVar28 = param_3[1];
    uVar27 = *param_3;
    fVar29 = (float)uVar23 - (float)uVar27;
    fVar30 = (float)((ulong)uVar23 >> 0x20) - (float)((ulong)uVar27 >> 0x20);
    fVar32 = (float)uVar25 - (float)uVar28;
    fVar19 = fVar29 * fVar29 + fVar30 * fVar30 + fVar32 * fVar32;
    fVar21 = fVar29 * fVar29 + fVar30 * fVar30 + fVar32 * fVar32;
    uVar24 = CONCAT44(fVar21,fVar19);
    uVar17 = NEON_frsqrte(uVar24,4);
    fVar16 = (float)uVar17;
    fVar18 = (float)((ulong)uVar17 >> 0x20);
    uVar17 = NEON_frsqrts(uVar24,CONCAT44(fVar18 * fVar18,fVar16 * fVar16),4);
    fVar16 = fVar16 * (float)uVar17;
    fVar18 = fVar18 * (float)((ulong)uVar17 >> 0x20);
    uVar17 = NEON_frsqrts(uVar24,CONCAT44(fVar18 * fVar18,fVar16 * fVar16),4);
    fVar16 = (float)uVar17 * fVar16;
    fVar18 = (float)((ulong)uVar17 >> 0x20) * fVar18;
    iVar7 = -(uint)(fVar19 <= 0.0);
    iVar12 = -(uint)(fVar21 <= 0.0);
    fVar19 = fVar19 * fVar16;
    fVar21 = fVar21 * fVar18;
    bVar9 = (byte)((uint)iVar7 >> 8);
    bVar10 = (byte)((uint)iVar7 >> 0x10);
    bVar11 = (byte)((uint)iVar7 >> 0x18);
    bVar13 = (byte)((uint)iVar12 >> 8);
    bVar14 = (byte)((uint)iVar12 >> 0x10);
    bVar15 = (byte)((uint)iVar12 >> 0x18);
    fVar26 = (float)CONCAT13((byte)((uint)fVar19 >> 0x18) & ~bVar11,
                             CONCAT12((byte)((uint)fVar19 >> 0x10) & ~bVar10,
                                      CONCAT11((byte)((uint)fVar19 >> 8) & ~bVar9,
                                               SUB41(fVar19,0) & ~(byte)iVar7)));
    auVar20._8_8_ = _UNK_03888d18;
    auVar20._0_8_ = _DAT_03888d10;
    auVar8._8_8_ = DAT_0388a148;
    auVar8._0_8_ = DAT_0388a140;
    fVar56 = (float)_DAT_03888d10;
    fVar38 = (float)((ulong)_DAT_03888d10 >> 0x20);
    fVar42 = (float)_UNK_03888d18;
    fVar57 = (float)((ulong)_UNK_03888d18 >> 0x20);
    local_1f0 = _DAT_03889a80;
    fStack_1ec = _UNK_03889a84;
    fStack_1e8 = _UNK_03889a88;
    fStack_1e4 = _UNK_03889a8c;
    fVar19 = param_2;
    if (0.0 < fVar26) {
      fVar16 = (float)CONCAT13((byte)((uint)fVar16 >> 0x18) & ~bVar11,
                               CONCAT12((byte)((uint)fVar16 >> 0x10) & ~bVar10,
                                        CONCAT11((byte)((uint)fVar16 >> 8) & ~bVar9,
                                                 SUB41(fVar16,0) & ~(byte)iVar7)));
      auVar54._0_4_ = fVar29 * fVar16;
      fVar18 = (float)(CONCAT17((byte)((uint)fVar18 >> 0x18) & ~bVar15,
                                CONCAT16((byte)((uint)fVar18 >> 0x10) & ~bVar14,
                                         CONCAT15((byte)((uint)fVar18 >> 8) & ~bVar13,
                                                  CONCAT14(SUB41(fVar18,0) & ~(byte)iVar12,fVar16)))
                               ) >> 0x20);
      auVar54._4_4_ = fVar30 * fVar18;
      auVar54._8_4_ = fVar32 * fVar16;
      auVar54._12_4_ = ((float)((ulong)uVar25 >> 0x20) - (float)((ulong)uVar28 >> 0x20)) * fVar18;
      if (ABS(auVar54._8_4_) < 0.99999) {
        auVar8 = NEON_ext(auVar54,auVar54,4,1);
        auVar58._0_4_ = auVar8._0_4_ * fVar56 + auVar54._0_4_ * (float)_DAT_03889960;
        auVar58._4_4_ =
             auVar8._4_4_ * fVar38 + auVar54._4_4_ * (float)((ulong)_DAT_03889960 >> 0x20);
        auVar58._8_4_ = auVar54._0_4_ * fVar42 + auVar54._8_4_ * (float)_UNK_03889968;
        auVar58._12_4_ =
             auVar54._4_4_ * fVar57 + auVar54._12_4_ * (float)((ulong)_UNK_03889968 >> 0x20);
        auVar8 = NEON_ext(auVar58,auVar58,4,1);
        fVar32 = auVar8._0_4_;
        fVar31 = auVar8._4_4_;
        fVar16 = auVar58._0_4_ * auVar58._0_4_ + fVar32 * fVar32 + fVar31 * fVar31;
        fVar29 = auVar58._0_4_ * auVar58._0_4_ + fVar32 * fVar32 + fVar31 * fVar31;
        uVar17 = CONCAT44(fVar29,fVar16);
        uVar24 = NEON_frsqrte(uVar17,4);
        fVar18 = (float)uVar24;
        fVar30 = (float)((ulong)uVar24 >> 0x20);
        uVar24 = NEON_frsqrts(uVar17,CONCAT44(fVar30 * fVar30,fVar18 * fVar18),4);
        fVar18 = fVar18 * (float)uVar24;
        fVar30 = fVar30 * (float)((ulong)uVar24 >> 0x20);
        iVar7 = -(uint)(fVar16 <= 0.0);
        iVar22 = -(uint)(fVar29 <= 0.0);
        uVar17 = NEON_frsqrts(uVar17,CONCAT44(fVar30 * fVar30,fVar18 * fVar18),4);
        fVar18 = (float)uVar17 * fVar18;
        fVar30 = (float)((ulong)uVar17 >> 0x20) * fVar30;
        fVar16 = (float)CONCAT13((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18),
                                 CONCAT12((byte)((uint)fVar18 >> 0x10) &
                                          ~(byte)((uint)iVar7 >> 0x10),
                                          CONCAT11((byte)((uint)fVar18 >> 8) &
                                                   ~(byte)((uint)iVar7 >> 8),
                                                   SUB41(fVar18,0) & ~(byte)iVar7)));
        if (1.0 <= ABS(auVar54._8_4_)) {
          fVar18 = 0.0;
          if (auVar54._8_4_ <= 0.0) {
            fVar18 = 3.1415927;
          }
        }
        else {
          fVar18 = acosf(auVar54._8_4_);
        }
        fVar18 = fVar18 * 0.5;
        fVar29 = sinf(fVar18);
        fVar18 = cosf(fVar18);
        auVar60._0_4_ = fVar32 * fVar16 * fVar29;
        auVar60._4_4_ =
             fVar31 * (float)(CONCAT17((byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                                       CONCAT16((byte)((uint)fVar30 >> 0x10) &
                                                ~(byte)((uint)iVar22 >> 0x10),
                                                CONCAT15((byte)((uint)fVar30 >> 8) &
                                                         ~(byte)((uint)iVar22 >> 8),
                                                         CONCAT14(SUB41(fVar30,0) & ~(byte)iVar22,
                                                                  fVar16)))) >> 0x20) * fVar29;
        auVar60._8_4_ = auVar58._0_4_ * fVar16 * fVar29;
        uVar17 = NEON_fmov(0x3f800000,4);
        auVar60._12_4_ = fVar18;
        auVar8 = NEON_ext(auVar60,auVar60,8,1);
        auVar45._0_4_ = auVar60._0_4_ + auVar60._0_4_;
        auVar45._4_4_ = auVar60._4_4_ + auVar60._4_4_;
        auVar45._8_4_ = auVar60._8_4_ + auVar60._8_4_;
        auVar45._12_4_ = fVar18 + fVar18;
        auVar20 = NEON_ext(auVar45,auVar45,8,1);
        fVar16 = auVar8._0_4_ * auVar20._0_4_;
        fVar29 = (float)uVar17;
        uVar28 = param_3[1];
        uVar27 = *param_3;
        auVar8._4_4_ = fVar29 - (auVar45._0_4_ * auVar60._0_4_ + fVar16);
        auVar8._0_4_ = auVar45._4_4_ * auVar60._0_4_ - auVar45._8_4_ * fVar18;
        auVar20._4_4_ = auVar45._8_4_ * auVar60._4_4_ - auVar45._0_4_ * fVar18;
        auVar20._0_4_ = auVar45._8_4_ * auVar60._0_4_ + auVar45._4_4_ * fVar18;
        auVar8._8_4_ = auVar45._8_4_ * auVar60._4_4_ + auVar45._0_4_ * fVar18;
        auVar8._12_4_ = 0;
        auVar20._8_4_ = fVar29 - (auVar45._0_4_ * auVar60._0_4_ + auVar45._4_4_ * auVar60._4_4_);
        auVar20._12_4_ = 0;
        uVar25 = param_4[1];
        uVar23 = *param_4;
        local_1f0 = fVar29 - (auVar45._4_4_ * auVar60._4_4_ + fVar16);
        fStack_1ec = auVar45._4_4_ * auVar60._0_4_ + auVar45._8_4_ * fVar18;
        fStack_1e8 = auVar45._8_4_ * auVar60._0_4_ - auVar45._4_4_ * fVar18;
        fStack_1e4 = 0.0;
      }
    }
    fVar32 = param_1 * param_1 * 3.1415927 * fVar26;
    fVar31 = param_1 * param_1 * 3.1415927 *
             (float)(CONCAT17((byte)((uint)fVar21 >> 0x18) & ~bVar15,
                              CONCAT16((byte)((uint)fVar21 >> 0x10) & ~bVar14,
                                       CONCAT15((byte)((uint)fVar21 >> 8) & ~bVar13,
                                                CONCAT14(SUB41(fVar21,0) & ~(byte)iVar12,fVar26))))
                    >> 0x20);
    local_1b0 = param_1 * param_1 * param_1 * 4.1887903;
    fVar16 = param_1 * param_1 * param_1 * 4.1887903;
    uStack_1d8 = auVar8._8_8_;
    uStack_1e0 = auVar8._0_8_;
    uVar17 = CONCAT44(fVar16 + fVar31,local_1b0 + fVar32);
    uVar24 = NEON_frecpe(uVar17,4);
    uVar40 = NEON_frecps(uVar17,uVar24,4);
    fVar33 = param_1 * param_1 * 0.5;
    local_250 = local_240;
    fVar36 = (float)uVar24 * (float)uVar40;
    fVar37 = (float)((ulong)uVar24 >> 0x20) * (float)((ulong)uVar40 >> 0x20);
    uVar24 = NEON_fmov(0x3e800000,4);
    fVar34 = (param_1 * param_1 + fVar26 * fVar26 * 0.33333334) * (float)uVar24;
    uVar17 = NEON_frecps(uVar17,CONCAT44(fVar37,fVar36),4);
    fVar18 = ((float)uVar23 + (float)uVar27) * 0.5;
    fVar21 = ((float)((ulong)uVar23 >> 0x20) + (float)((ulong)uVar27 >> 0x20)) * 0.5;
    uStack_1c0 = CONCAT44(fVar21,fVar18);
    fVar29 = ((float)uVar25 + (float)uVar28) * 0.5;
    fVar30 = ((float)((ulong)uVar25 >> 0x20) + (float)((ulong)uVar28 >> 0x20)) * 0.5;
    uStack_1b8 = CONCAT44(fVar30,fVar29);
    local_228 = 0;
    fVar36 = fVar36 * (float)uVar17;
    fVar37 = fVar37 * (float)((ulong)uVar17 >> 0x20);
    local_248._4_4_ = 0x80000003;
    fVar39 = param_2 * fVar32 * fVar36;
    fVar31 = fVar19 * fVar31 * fVar37;
    uStack_1c8 = auVar20._8_8_;
    local_1d0 = auVar20._0_8_;
    local_240[0] = CONCAT44(fVar39,fVar32);
    local_230 = 0;
    local_220 = CONCAT44(fVar34 * fVar35 * fVar31,fVar34 * fVar5 * fVar39);
    uStack_218 = CONCAT44(fVar53 * 0.25 * fVar31,fVar33 * fVar52 * fVar39);
    uStack_208 = CONCAT44((float)((ulong)uVar2 >> 0x20) * 0.25 * fVar31,
                          fVar33 * (float)uVar2 * fVar39);
    uStack_210 = CONCAT44(fVar34 * (float)((ulong)uVar43 >> 0x20) * fVar31,
                          fVar34 * (float)uVar43 * fVar39);
    fVar36 = param_2 * local_1b0 * fVar36;
    local_200 = CONCAT44(fVar34 * fVar38 * fVar31,fVar34 * fVar56 * fVar39);
    uStack_1f8 = CONCAT44(fVar57 * 0.25 * fVar31,fVar33 * fVar42 * fVar39);
    if (0.0 < fVar36) {
      uVar43 = NEON_fmov(0x3ec00000,4);
      fVar42 = param_1 * (float)uVar43;
      local_1ac = fVar36 * 0.5;
      fVar35 = fVar19 * fVar16 * fVar37 * 0.5;
      auVar51._8_8_ = _UNK_038897b8;
      auVar51._0_8_ = _DAT_038897b0;
      auVar46._8_8_ = _UNK_03889f48;
      auVar46._0_8_ = _DAT_03889f40;
      auVar54 = ZEXT416((uint)(fVar42 * fVar42)) << 0x40;
      auVar48._8_8_ = _UNK_03889f38;
      auVar48._0_8_ = _DAT_03889f30;
      fVar52 = -local_1ac;
      auVar58 = a64_TBL(ZEXT816(0),ZEXT416((uint)fVar42) << 0x40,auVar48);
      auVar60 = a64_TBL(ZEXT816(0),auVar54,auVar51);
      auVar54 = a64_TBL(ZEXT816(0),auVar54,auVar46);
      auVar50._8_8_ = _UNK_03889e68;
      auVar50._0_8_ = _DAT_03889e60;
      auVar44._8_8_ = _UNK_038895e8;
      auVar44._0_8_ = _DAT_038895e0;
      auVar59._0_4_ = local_1ac * auVar58._0_4_ * 0.0;
      auVar59._4_4_ = fVar35 * auVar58._4_4_ * 0.0;
      auVar59._8_4_ = local_1ac * fVar42 * auVar58._8_4_;
      auVar59._12_4_ = fVar35 * auVar58._12_4_ * 0.0;
      auVar55._0_4_ = fVar52 * (auVar60._0_4_ + auVar54._0_4_);
      auVar55._4_4_ = -fVar35 * (auVar60._4_4_ + auVar54._4_4_);
      auVar55._8_4_ = fVar52 * (auVar60._8_4_ + auVar54._8_4_);
      auVar54 = a64_TBL(ZEXT816(0),auVar59,auVar50);
      auVar58 = a64_TBL(ZEXT816(0),auVar59,auVar44);
      auVar47._8_8_ = _UNK_03888e58;
      auVar47._0_8_ = _DAT_03888e50;
      auVar60 = a64_TBL(ZEXT816(0),auVar59,auVar47);
      auVar55._12_4_ = 0;
      fVar26 = fVar26 * 0.5;
      auVar54 = auVar54 ^ (auVar54 ^ auVar55) & *(undefined1 (*) [16])(PTR_DAT_043723a0 + 0x90);
      auVar58 = auVar58 ^ (auVar58 ^ auVar55) & *(undefined1 (*) [16])(PTR_DAT_043723a0 + 0xa0);
      auVar60 = auVar60 ^ (auVar60 ^ auVar55) & *(undefined1 (*) [16])(PTR_DAT_043723a0 + 0xc0);
      fVar53 = local_1f0 * 0.0 + auVar8._0_4_ * 0.0;
      fVar19 = fStack_1ec * 0.0 + auVar8._4_4_ * 0.0;
      fVar16 = fStack_1e8 * 0.0 + auVar8._8_4_ * 0.0;
      fVar56 = fStack_1e4 * 0.0 + auVar8._12_4_ * 0.0;
      uVar43 = NEON_fmov(0xbec00000,4);
      fVar57 = param_1 * (float)uVar43;
      fVar5 = -fVar26;
      local_1b0 = local_1b0 * 0.5;
      auVar8 = a64_TBL(ZEXT816(0),ZEXT416((uint)fVar57) << 0x40,auVar48);
      local_130 = auVar20._0_4_ * fVar26 + fVar53 + fVar18;
      fStack_12c = auVar20._4_4_ * fVar26 + fVar19 + fVar21;
      fStack_128 = auVar20._8_4_ * fVar26 + fVar16 + fVar29;
      fStack_124 = auVar20._12_4_ * fVar26 + fVar56 + fVar30;
      auVar6._0_8_ = CONCAT44(auVar20._4_4_ * fVar5 + fVar19 + fVar21,
                              auVar20._0_4_ * fVar5 + fVar53 + fVar18);
      auVar6._8_4_ = auVar20._8_4_ * fVar5 + fVar16 + fVar29;
      auVar6._12_4_ = auVar20._12_4_ * fVar5 + fVar56 + fVar30;
      auVar45 = ZEXT416((uint)(fVar57 * fVar57)) << 0x40;
      auVar49._0_4_ = local_1ac * auVar8._0_4_ * 0.0;
      auVar49._4_4_ = fVar35 * auVar8._4_4_ * 0.0;
      auVar49._8_4_ = local_1ac * fVar57 * auVar8._8_4_;
      auVar49._12_4_ = fVar35 * auVar8._12_4_ * 0.0;
      auVar20 = a64_TBL(ZEXT816(0),auVar45,auVar51);
      auVar47 = a64_TBL(ZEXT816(0),auVar45,auVar46);
      auVar51 = a64_TBL(ZEXT816(0),auVar49,auVar50);
      auVar45 = a64_TBL(ZEXT816(0),auVar49,auVar44);
      auVar1._8_8_ = _UNK_03888e58;
      auVar1._0_8_ = _DAT_03888e50;
      auVar8 = a64_TBL(ZEXT816(0),auVar49,auVar1);
      auVar41._0_4_ = fVar52 * (auVar20._0_4_ + auVar47._0_4_);
      auVar41._4_4_ = -fVar35 * (auVar20._4_4_ + auVar47._4_4_);
      auVar41._8_4_ = fVar52 * (auVar20._8_4_ + auVar47._8_4_);
      fVar19 = param_1 * param_1 * fVar36 * 0.4;
      auVar41._12_4_ = 0;
      auVar51 = auVar51 ^ (auVar51 ^ auVar41) & *(undefined1 (*) [16])(PTR_DAT_043723a0 + 0x90);
      auVar45 = auVar45 ^ (auVar45 ^ auVar41) & *(undefined1 (*) [16])(PTR_DAT_043723a0 + 0xa0);
      auVar8 = auVar8 ^ (auVar8 ^ auVar41) & *(undefined1 (*) [16])(PTR_DAT_043723a0 + 0xc0);
      fVar5 = _DAT_03889a80 * fVar19 * 0.5;
      fVar35 = _UNK_03889a84 * fVar19 * 0.5;
      fVar52 = _UNK_03889a88 * fVar19 * 0.5;
      fVar53 = _UNK_03889a8c * fVar19 * 0.5;
      fStack_190 = fVar5 + auVar54._0_4_;
      fStack_18c = fVar35 + auVar54._4_4_;
      fStack_188 = fVar52 + auVar54._8_4_;
      fStack_184 = fVar53 + auVar54._12_4_;
      uStack_100 = CONCAT44(fVar35 + auVar51._4_4_,fVar5 + auVar51._0_4_);
      uStack_f8 = CONCAT44(fVar53 + auVar51._12_4_,fVar52 + auVar51._8_4_);
      fVar16 = (float)DAT_0388a140 * fVar19 * 0.5;
      fVar56 = (float)((ulong)DAT_0388a140 >> 0x20) * fVar19 * 0.5;
      fVar18 = (float)DAT_0388a148 * fVar19 * 0.5;
      fVar38 = (float)((ulong)DAT_0388a148 >> 0x20) * fVar19 * 0.5;
      fVar5 = (float)_DAT_03888d10 * fVar19 * 0.5;
      fVar35 = (float)((ulong)_DAT_03888d10 >> 0x20) * fVar19 * 0.5;
      fVar52 = (float)_UNK_03888d18 * fVar19 * 0.5;
      fVar53 = (float)((ulong)_UNK_03888d18 >> 0x20) * fVar19 * 0.5;
      uStack_198 = (ulong)(uint)fVar42;
      local_1a0 = 0;
      local_170 = fVar5 + auVar60._0_4_;
      fStack_16c = fVar35 + auVar60._4_4_;
      fStack_168 = fVar52 + auVar60._8_4_;
      fStack_164 = fVar53 + auVar60._12_4_;
      uStack_e0 = CONCAT44(fVar35 + auVar8._4_4_,fVar5 + auVar8._0_4_);
      uStack_d8 = CONCAT44(fVar53 + auVar8._12_4_,fVar52 + auVar8._8_4_);
      local_180 = fVar16 + auVar58._0_4_;
      fStack_17c = fVar56 + auVar58._4_4_;
      fStack_178 = fVar18 + auVar58._8_4_;
      fStack_174 = fVar38 + auVar58._12_4_;
      local_f0 = CONCAT44(fVar56 + auVar45._4_4_,fVar16 + auVar45._0_4_);
      uStack_e8 = CONCAT44(fVar38 + auVar45._12_4_,fVar18 + auVar45._8_4_);
      uStack_108 = (ulong)(uint)fVar57;
      local_110 = 0;
      uStack_98 = auVar6._8_8_;
      local_248._0_4_ = 3;
      fStack_160 = local_1f0;
      fStack_15c = fStack_1ec;
      fStack_158 = fStack_1e8;
      fStack_154 = fStack_1e4;
      local_150 = uStack_1e0;
      uStack_148 = uStack_1d8;
      uStack_140 = local_1d0;
      uStack_138 = uStack_1c8;
      local_120 = local_1b0;
      local_11c = local_1ac;
      local_d0 = local_1f0;
      fStack_cc = fStack_1ec;
      fStack_c8 = fStack_1e8;
      fStack_c4 = fStack_1e4;
      uStack_c0 = uStack_1e0;
      uStack_b8 = uStack_1d8;
      local_b0 = local_1d0;
      uStack_a8 = uStack_1c8;
      uStack_a0 = auVar6._0_8_;
      uVar4 = FUN_03290038(&local_250,param_5);
      uVar3 = local_248._4_4_;
      local_248 = (ulong)local_248._4_4_ << 0x20;
      if ((-1 < (int)uVar3) && (local_250 != (undefined8 *)0x0)) {
        FUN_032cf244(PTR_PTR_0434a080,local_250,0x90,uVar3 & 0x3fffffff);
      }
    }
  }
  return uVar4;
}


