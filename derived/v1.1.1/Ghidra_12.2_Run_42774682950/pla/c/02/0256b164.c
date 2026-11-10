/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0256b164; name: FUN_0256b164
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0256b164(long param_1)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  byte bVar12;
  byte bVar13;
  float fVar9;
  float extraout_s0;
  byte bVar17;
  byte bVar18;
  float fVar15;
  float extraout_var;
  float fVar16;
  byte bVar23;
  byte bVar24;
  float fVar20;
  float fVar21;
  float extraout_var_00;
  float fVar22;
  byte bVar29;
  byte bVar30;
  float fVar26;
  float fVar27;
  float extraout_var_01;
  float fVar28;
  undefined1 auVar10 [16];
  byte bVar14;
  byte bVar19;
  byte bVar25;
  byte bVar31;
  undefined1 auVar11 [16];
  int iVar32;
  float fVar38;
  int iVar40;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  int iVar39;
  float fVar41;
  int iVar42;
  undefined1 auVar37 [16];
  uint uVar43;
  float fVar44;
  uint uVar53;
  undefined1 auVar45 [12];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  uint uVar54;
  uint uVar55;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar56;
  undefined1 auVar52 [16];
  float fVar57;
  undefined1 auVar58 [12];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar65;
  undefined1 auVar64 [16];
  float fVar66;
  int iVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  byte bVar73;
  byte bVar74;
  byte bVar77;
  byte bVar78;
  float fVar80;
  byte bVar82;
  byte bVar83;
  byte bVar86;
  byte bVar87;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  byte bVar75;
  int iVar76;
  byte bVar79;
  int iVar81;
  byte bVar84;
  int iVar85;
  byte bVar88;
  undefined1 auVar72 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  float fVar94;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined8 uVar95;
  float fVar99;
  long lVar96;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  float fVar100;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  float fVar104;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  float fVar109;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  float fVar110;
  uint uVar111;
  uint uVar117;
  uint uVar118;
  uint uVar119;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  undefined8 uVar142;
  undefined8 uVar143;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar7 = FUN_02b11e64(DAT_043ef5a8,DAT_043ef5a8 + 0x1a0);
  if (lVar7 != 0) {
    auVar90 = *(undefined1 (*) [16])(lVar7 + 0x50);
    auVar107 = *(undefined1 (*) [16])(lVar7 + 0x60);
    auVar113 = *(undefined1 (*) [16])(lVar7 + 0x70);
    fVar41 = *(float *)(lVar7 + 0x80);
    fVar44 = *(float *)(lVar7 + 0x84);
    fVar56 = *(float *)(lVar7 + 0x88);
    fVar57 = *(float *)(lVar7 + 0x8c);
    bVar12 = (byte)_DAT_038897c0;
    bVar13 = (byte)((ulong)_DAT_038897c0 >> 8);
    bVar14 = (byte)((ulong)_DAT_038897c0 >> 0x10);
    bVar17 = (byte)((ulong)_DAT_038897c0 >> 0x18);
    fVar21 = (float)CONCAT13(auVar90[7] & bVar17,
                             CONCAT12(auVar90[6] & bVar14,
                                      CONCAT11(auVar90[5] & bVar13,auVar90[4] & bVar12)));
    bVar18 = (byte)((ulong)_DAT_038897c0 >> 0x20);
    bVar19 = (byte)((ulong)_DAT_038897c0 >> 0x28);
    bVar23 = (byte)((ulong)_DAT_038897c0 >> 0x30);
    bVar24 = (byte)((ulong)_DAT_038897c0 >> 0x38);
    auVar45._0_8_ =
         CONCAT17(auVar107[7] & bVar24,
                  CONCAT16(auVar107[6] & bVar23,
                           CONCAT15(auVar107[5] & bVar19,CONCAT14(auVar107[4] & bVar18,fVar21))));
    bVar25 = (byte)_UNK_038897c8;
    auVar45[8] = auVar113[4] & bVar25;
    bVar29 = (byte)((ulong)_UNK_038897c8 >> 8);
    auVar45[9] = auVar113[5] & bVar29;
    bVar30 = (byte)((ulong)_UNK_038897c8 >> 0x10);
    auVar45[10] = auVar113[6] & bVar30;
    bVar31 = (byte)((ulong)_UNK_038897c8 >> 0x18);
    auVar45[0xb] = auVar113[7] & bVar31;
    auVar58._0_8_ =
         CONCAT17(auVar107[0xb] & bVar24,
                  CONCAT16(auVar107[10] & bVar23,
                           CONCAT15(auVar107[9] & bVar19,
                                    CONCAT14(auVar107[8] & bVar18,
                                             CONCAT13(auVar90[0xb] & bVar17,
                                                      CONCAT12(auVar90[10] & bVar14,
                                                               CONCAT11(auVar90[9] & bVar13,
                                                                        auVar90[8] & bVar12)))))));
    auVar58[8] = auVar113[8] & bVar25;
    auVar58[9] = auVar113[9] & bVar29;
    auVar58[10] = auVar113[10] & bVar30;
    auVar58[0xb] = auVar113[0xb] & bVar31;
    fVar26 = (float)CONCAT13(auVar90[3] & bVar17,
                             CONCAT12(auVar90[2] & bVar14,
                                      CONCAT11(auVar90[1] & bVar13,auVar90[0] & bVar12)));
    auVar72._0_8_ =
         CONCAT17(auVar107[3] & bVar24,
                  CONCAT16(auVar107[2] & bVar23,
                           CONCAT15(auVar107[1] & bVar19,CONCAT14(auVar107[0] & bVar18,fVar26))));
    auVar72[8] = auVar113[0] & bVar25;
    auVar72[9] = auVar113[1] & bVar29;
    auVar72[10] = auVar113[2] & bVar30;
    auVar72[0xb] = auVar113[3] & bVar31;
    auVar72._12_4_ = 0;
    fVar27 = (float)((ulong)auVar45._0_8_ >> 0x20);
    fVar38 = auVar58._8_4_;
    auVar70 = NEON_fmov(0x3f800000,4);
    fVar65 = auVar70._0_4_;
    fVar9 = (float)_DAT_03889820 * fVar26 + (float)_DAT_0388a450 * fVar27 +
            (float)_DAT_03889eb0 * fVar38 + fVar65;
    fVar66 = auVar70._4_4_;
    fVar15 = (float)((ulong)_DAT_03889820 >> 0x20) * fVar26 +
             (float)((ulong)_DAT_0388a450 >> 0x20) * fVar27 +
             (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar38 + fVar66;
    fVar80 = auVar70._8_4_;
    fVar20 = (float)_UNK_03889828 * fVar26 + (float)_UNK_0388a458 * fVar27 +
             (float)_UNK_03889eb8 * fVar38 + fVar80;
    fVar104 = auVar70._12_4_;
    fVar26 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar26 +
             (float)((ulong)_UNK_0388a458 >> 0x20) * fVar27 +
             (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar38 + fVar104;
    uVar68 = NEON_ext(auVar72._0_8_,auVar58._0_8_,4,1);
    auVar33 = NEON_ext(auVar72,auVar72,8,1);
    fVar27 = (float)((ulong)auVar58._0_8_ >> 0x20);
    auVar46._0_4_ = (float)uVar68 + fVar21;
    fVar38 = (float)((ulong)uVar68 >> 0x20);
    auVar46._4_4_ = fVar38 + auVar33._0_4_;
    auVar46._8_4_ = auVar45._8_4_ + fVar27;
    auVar46._12_4_ = 0;
    auVar59._0_4_ = (float)uVar68 - fVar21;
    auVar59._4_4_ = fVar38 - auVar33._0_4_;
    auVar59._8_4_ = auVar45._8_4_ - fVar27;
    auVar59._12_4_ = 0;
    uVar68 = a64_TBL(ZEXT816(0),auVar46,auVar59,DAT_0388a888);
    uVar69 = a64_TBL(ZEXT816(0),auVar46,auVar59,DAT_0388a710);
    auVar89._8_8_ = uVar69;
    auVar89._0_8_ = uVar68;
    uVar69 = a64_TBL(ZEXT816(0),auVar46,auVar59,DAT_0388a758);
    auVar102._4_12_ = auVar89._4_12_;
    auVar102._0_4_ = fVar9;
    auVar71._0_8_ = a64_TBL(ZEXT816(0),auVar46,auVar59,DAT_0388a880);
    uVar95 = a64_TBL(ZEXT816(0),auVar46,auVar59,DAT_0388a640);
    auVar93._0_4_ = (undefined4)uVar68;
    auVar93._4_4_ = fVar15;
    auVar93._8_8_ = uVar69;
    auVar97._0_8_ = a64_TBL(ZEXT816(0),auVar46,auVar59,DAT_0388a700);
    uVar68 = a64_TBL(ZEXT816(0),auVar46,auVar59,DAT_0388a590);
    auVar60._4_4_ = fVar15;
    auVar60._0_4_ = fVar15;
    auVar60._8_4_ = fVar15;
    auVar60._12_4_ = fVar15;
    auVar71._12_4_ = (undefined4)((ulong)uVar95 >> 0x20);
    auVar71._8_4_ = fVar20;
    auVar97._8_8_ = uVar68;
    auVar106._4_4_ = fVar9;
    auVar106._0_4_ = fVar9;
    auVar106._8_4_ = fVar9;
    auVar106._12_4_ = fVar9;
    auVar101._0_8_ = CONCAT44(-(uint)(fVar9 <= fVar15),-(uint)(fVar9 <= fVar15));
    auVar101._8_4_ = -(uint)(fVar9 <= fVar15);
    auVar101._12_4_ = -(uint)(fVar9 <= fVar15);
    auVar105._8_8_ = auVar101._8_8_;
    auVar105._0_8_ = auVar101._0_8_;
    auVar102 = auVar102 ^ (auVar102 ^ auVar93) & auVar101;
    auVar34._4_4_ = fVar20;
    auVar34._0_4_ = fVar20;
    auVar34._8_4_ = fVar20;
    auVar34._12_4_ = fVar20;
    auVar98._0_12_ = auVar97._0_12_;
    auVar98._12_4_ = fVar26;
    auVar106 = auVar106 ^ (auVar106 ^ auVar60) & auVar105;
    auVar47._0_8_ = CONCAT44(-(uint)(auVar106._4_4_ <= fVar20),-(uint)(auVar106._0_4_ <= fVar20));
    auVar47._8_4_ = -(uint)(auVar106._8_4_ <= fVar20);
    auVar47._12_4_ = -(uint)(auVar106._12_4_ <= fVar20);
    auVar61._8_8_ = auVar47._8_8_;
    auVar61._0_8_ = auVar47._0_8_;
    auVar102 = auVar102 ^ (auVar102 ^ auVar71) & auVar47;
    auVar106 = auVar106 ^ (auVar106 ^ auVar34) & auVar61;
    auVar33._0_4_ = -(uint)(auVar106._0_4_ <= fVar26);
    auVar33._4_4_ = -(uint)(auVar106._4_4_ <= fVar26);
    auVar33._8_4_ = -(uint)(auVar106._8_4_ <= fVar26);
    auVar33._12_4_ = -(uint)(auVar106._12_4_ <= fVar26);
    auVar102 = auVar102 ^ (auVar102 ^ auVar98) & auVar33;
    fVar20 = auVar102._0_4_;
    auVar35._0_4_ = fVar20 * fVar20;
    fVar26 = auVar102._4_4_;
    auVar35._4_4_ = fVar26 * fVar26;
    fVar21 = auVar102._8_4_;
    auVar35._8_4_ = fVar21 * fVar21;
    fVar27 = auVar102._12_4_;
    auVar35._12_4_ = fVar27 * fVar27;
    auVar33 = NEON_ext(auVar35,auVar35,8,1);
    fVar15 = auVar33._0_4_ + auVar35._0_4_;
    fVar38 = auVar33._4_4_ + auVar35._4_4_;
    fVar9 = fVar15 + fVar38;
    fVar15 = fVar15 + fVar38;
    auVar36._8_8_ = CONCAT44(fVar15,fVar9);
    auVar36._0_8_ = CONCAT44(fVar15,fVar9);
    auVar33 = NEON_frsqrte(auVar36,4);
    auVar62._0_4_ = auVar33._0_4_ * fVar9;
    auVar62._4_4_ = auVar33._4_4_ * fVar15;
    auVar62._8_4_ = auVar33._8_4_ * fVar9;
    auVar62._12_4_ = auVar33._12_4_ * fVar15;
    auVar102 = NEON_frsqrts(auVar33,auVar62,4);
    auVar48._0_4_ = auVar33._0_4_ * auVar102._0_4_;
    auVar48._4_4_ = auVar33._4_4_ * auVar102._4_4_;
    auVar48._8_4_ = auVar33._8_4_ * auVar102._8_4_;
    auVar48._12_4_ = auVar33._12_4_ * auVar102._12_4_;
    auVar63._0_4_ = fVar9 * auVar48._0_4_;
    auVar63._4_4_ = fVar15 * auVar48._4_4_;
    auVar63._8_4_ = fVar9 * auVar48._8_4_;
    auVar63._12_4_ = fVar15 * auVar48._12_4_;
    iVar32 = -(uint)(fVar9 == 0.0);
    iVar39 = -(uint)(fVar15 == 0.0);
    iVar40 = -(uint)(fVar9 == 0.0);
    iVar42 = -(uint)(fVar15 == 0.0);
    auVar33 = NEON_frsqrts(auVar48,auVar63,4);
    fVar20 = auVar48._0_4_ * auVar33._0_4_ * fVar20;
    fVar26 = auVar48._4_4_ * auVar33._4_4_ * fVar26;
    fVar21 = auVar48._8_4_ * auVar33._8_4_ * fVar21;
    fVar27 = auVar48._12_4_ * auVar33._12_4_ * fVar27;
    auVar103._0_8_ =
         CONCAT17((byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18),
                  CONCAT16((byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar39 >> 0x10),
                           CONCAT15((byte)((uint)fVar26 >> 8) & ~(byte)((uint)iVar39 >> 8),
                                    CONCAT14(SUB41(fVar26,0) & ~(byte)iVar39,
                                             CONCAT13((byte)((uint)fVar20 >> 0x18) &
                                                      ~(byte)((uint)iVar32 >> 0x18),
                                                      CONCAT12((byte)((uint)fVar20 >> 0x10) &
                                                               ~(byte)((uint)iVar32 >> 0x10),
                                                               CONCAT11((byte)((uint)fVar20 >> 8) &
                                                                        ~(byte)((uint)iVar32 >> 8),
                                                                        SUB41(fVar20,0) &
                                                                        ~(byte)iVar32)))))));
    auVar103[8] = SUB41(fVar21,0) & ~(byte)iVar40;
    auVar103[9] = (byte)((uint)fVar21 >> 8) & ~(byte)((uint)iVar40 >> 8);
    auVar103[10] = (byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10);
    auVar103[0xb] = (byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18);
    auVar103[0xc] = SUB41(fVar27,0) & ~(byte)iVar42;
    auVar103[0xd] = (byte)((uint)fVar27 >> 8) & ~(byte)((uint)iVar42 >> 8);
    auVar103[0xe] = (byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar42 >> 0x10);
    auVar103[0xf] = (byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar42 >> 0x18);
    uStack_48 = auVar103._8_8_;
    local_50 = auVar103._0_8_;
    FUN_0098fad4(&local_50);
    uVar69 = DAT_0388a870;
    uVar68 = DAT_0388a618;
    fVar26 = ABS(extraout_s0);
    fVar21 = *(float *)PTR_Float1Divided2Pi_04372d20;
    auVar33 = NEON_fmov(0xbf800000,4);
    fVar9 = *(float *)(PTR_SinCoefficients_04372d28 + 4);
    fVar15 = *(float *)(PTR_SinCoefficients_04372d28 + 0xc);
    fVar20 = *(float *)(PTR_CosCoefficients_04372d40 + 4);
    if (1.4137167 < fVar26) {
      fVar26 = 1.4137167;
    }
    fVar120 = *(float *)PTR_FloatPi_04372cf0;
    fVar38 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_04372cd8);
    fVar27 = *(float *)(PTR_CosCoefficients_04372d40 + 0xc);
    uVar8 = (ulong)(fVar26 * (fVar38 / fVar120));
    auVar49._0_4_ =
         (int)(fVar21 * 0.0 + (float)(-(uint)(0.0 <= fVar21 * 0.0) & 0x80000000 ^ 0xbf000000));
    auVar49._4_4_ =
         (int)(extraout_var * fVar21 +
              (float)(-(uint)(0.0 <= extraout_var * fVar21) & 0x80000000 ^ 0xbf000000));
    auVar49._8_4_ =
         (int)(extraout_var_00 * fVar21 +
              (float)(-(uint)(0.0 <= extraout_var_00 * fVar21) & 0x80000000 ^ 0xbf000000));
    auVar49._12_4_ =
         (int)(extraout_var_01 * fVar21 +
              (float)(-(uint)(0.0 <= extraout_var_01 * fVar21) & 0x80000000 ^ 0xbf000000));
    auVar102 = NEON_scvtf(auVar49,4);
    fVar21 = *(float *)PTR_Float2Pi_04372d30;
    fVar38 = *(float *)PTR_FloatPiDivided2_04372d38;
    fVar26 = 0.0 - auVar102._0_4_ * fVar21;
    fVar16 = extraout_var - auVar102._4_4_ * fVar21;
    fVar22 = extraout_var_00 - auVar102._8_4_ * fVar21;
    fVar28 = extraout_var_01 - auVar102._12_4_ * fVar21;
    fVar121 = -fVar120;
    fVar21 = -fVar38;
    uVar43 = -(uint)(fVar38 < fVar26);
    uVar53 = -(uint)(fVar38 < fVar16);
    uVar54 = -(uint)(fVar38 < fVar22);
    uVar55 = -(uint)(fVar38 < fVar28);
    fVar26 = (float)((uint)fVar26 ^ ((uint)fVar26 ^ (uint)(fVar120 - fVar26)) & uVar43);
    fVar16 = (float)((uint)fVar16 ^ ((uint)fVar16 ^ (uint)(fVar120 - fVar16)) & uVar53);
    fVar22 = (float)((uint)fVar22 ^ ((uint)fVar22 ^ (uint)(fVar120 - fVar22)) & uVar54);
    fVar28 = (float)((uint)fVar28 ^ ((uint)fVar28 ^ (uint)(fVar120 - fVar28)) & uVar55);
    fVar123 = *(float *)PTR_SinCoefficients_04372d28;
    uVar111 = -(uint)(fVar26 < fVar21);
    uVar117 = -(uint)(fVar16 < fVar21);
    uVar118 = -(uint)(fVar22 < fVar21);
    uVar119 = -(uint)(fVar28 < fVar21);
    auVar50[0] = (byte)uVar111 | (byte)uVar43;
    auVar50[1] = (byte)(uVar111 >> 8) | (byte)(uVar43 >> 8);
    auVar50[2] = (byte)(uVar111 >> 0x10) | (byte)(uVar43 >> 0x10);
    auVar50[3] = (byte)(uVar111 >> 0x18) | (byte)(uVar43 >> 0x18);
    auVar50[4] = (byte)uVar117 | (byte)uVar53;
    auVar50[5] = (byte)(uVar117 >> 8) | (byte)(uVar53 >> 8);
    auVar50[6] = (byte)(uVar117 >> 0x10) | (byte)(uVar53 >> 0x10);
    auVar50[7] = (byte)(uVar117 >> 0x18) | (byte)(uVar53 >> 0x18);
    auVar50[8] = (byte)uVar118 | (byte)uVar54;
    auVar50[9] = (byte)(uVar118 >> 8) | (byte)(uVar54 >> 8);
    auVar50[10] = (byte)(uVar118 >> 0x10) | (byte)(uVar54 >> 0x10);
    auVar50[0xb] = (byte)(uVar118 >> 0x18) | (byte)(uVar54 >> 0x18);
    auVar50[0xc] = (byte)uVar119 | (byte)uVar55;
    auVar50[0xd] = (byte)(uVar119 >> 8) | (byte)(uVar55 >> 8);
    auVar50[0xe] = (byte)(uVar119 >> 0x10) | (byte)(uVar55 >> 0x10);
    auVar50[0xf] = (byte)(uVar119 >> 0x18) | (byte)(uVar55 >> 0x18);
    fVar26 = (float)((uint)fVar26 ^ ((uint)fVar26 ^ (uint)(fVar121 - fVar26)) & uVar111);
    fVar16 = (float)((uint)fVar16 ^ ((uint)fVar16 ^ (uint)(fVar121 - fVar16)) & uVar117);
    fVar22 = (float)((uint)fVar22 ^ ((uint)fVar22 ^ (uint)(fVar121 - fVar22)) & uVar118);
    fVar28 = (float)((uint)fVar28 ^ ((uint)fVar28 ^ (uint)(fVar121 - fVar28)) & uVar119);
    fVar122 = *(float *)PTR_CosCoefficients_04372d40;
    fVar125 = fVar26 * fVar26;
    fVar126 = fVar16 * fVar16;
    fVar127 = fVar22 * fVar22;
    fVar129 = fVar28 * fVar28;
    fVar124 = -*(float *)(PTR_CosCoefficients_04372d40 + 8);
    fVar21 = -*(float *)(PTR_SinCoefficients_04372d28 + 8);
    fVar100 = -*(float *)(PTR_CosCoefficients_04372d40 + 0x10);
    fVar121 = -*(float *)(PTR_SinCoefficients_04372d28 + 0x10);
    fVar94 = *(float *)(lVar7 + 0xa4);
    uVar95 = *(undefined8 *)(lVar7 + 0xb8);
    auVar70 = auVar70 ^ (auVar70 ^ auVar33) & auVar50;
    pfVar1 = (float *)(PTR_SinCosSampleTable_04372ce8 + (uVar8 >> 0x18 & 0xff) * 0x10);
    fVar38 = *(float *)(lVar7 + 0x90);
    uVar143 = *(undefined8 *)(lVar7 + 200);
    uVar142 = *(undefined8 *)(lVar7 + 0xc0);
    fVar120 = (float)((uint)uVar8 & 0xffffff) * 5.9604645e-08;
    auVar10._0_4_ =
         fVar26 * (fVar65 + fVar125 * (fVar121 +
                                      fVar125 * (fVar15 + fVar125 * (fVar21 + fVar125 * (fVar9 - 
                                                  fVar125 * fVar123)))));
    auVar10._4_4_ =
         fVar16 * (fVar66 + fVar126 * (fVar121 +
                                      fVar126 * (fVar15 + fVar126 * (fVar21 + fVar126 * (fVar9 - 
                                                  fVar126 * fVar123)))));
    auVar10._8_4_ =
         fVar22 * (fVar80 + fVar127 * (fVar121 +
                                      fVar127 * (fVar15 + fVar127 * (fVar21 + fVar127 * (fVar9 - 
                                                  fVar127 * fVar123)))));
    auVar10._12_4_ =
         fVar28 * (fVar104 +
                  fVar129 * (fVar121 +
                            fVar129 * (fVar15 + fVar129 * (fVar21 + fVar129 * (fVar9 - fVar129 * 
                                                  fVar123)))));
    auVar102 = NEON_ext(auVar10,auVar10,8,1);
    auVar51._0_4_ =
         auVar70._0_4_ *
         (fVar65 + fVar125 * (fVar100 +
                             fVar125 * (fVar27 + fVar125 * (fVar124 +
                                                           fVar125 * (fVar20 - fVar125 * fVar122))))
         );
    auVar51._4_4_ =
         auVar70._4_4_ *
         (fVar66 + fVar126 * (fVar100 +
                             fVar126 * (fVar27 + fVar126 * (fVar124 +
                                                           fVar126 * (fVar20 - fVar126 * fVar122))))
         );
    auVar51._8_4_ =
         auVar70._8_4_ *
         (fVar80 + fVar127 * (fVar100 +
                             fVar127 * (fVar27 + fVar127 * (fVar124 +
                                                           fVar127 * (fVar20 - fVar127 * fVar122))))
         );
    auVar51._12_4_ =
         auVar70._12_4_ *
         (fVar104 +
         fVar129 * (fVar100 +
                   fVar129 * (fVar27 + fVar129 * (fVar124 + fVar129 * (fVar20 - fVar129 * fVar122)))
                   ));
    auVar103 = NEON_ext(auVar51,auVar51,8,1);
    fVar9 = auVar103._0_4_;
    fVar15 = auVar102._0_4_;
    fVar104 = (float)DAT_0388a618;
    fVar16 = (float)((ulong)DAT_0388a618 >> 0x20);
    fVar28 = (float)DAT_0388a870;
    fVar22 = auVar10._4_4_ * fVar28;
    fVar100 = (float)((ulong)DAT_0388a870 >> 0x20);
    fVar121 = fVar100 * 0.0;
    fVar122 = fVar9 * auVar51._4_4_;
    fVar123 = fVar15 * auVar51._4_4_;
    fVar27 = (float)_DAT_03889200;
    uVar8 = (ulong)_DAT_03889200 >> 0x20;
    fVar65 = (float)_UNK_03889208;
    uVar4 = (ulong)_UNK_03889208 >> 0x20;
    fVar66 = (float)_DAT_03889d50;
    uVar5 = (ulong)_DAT_03889d50 >> 0x20;
    fVar80 = (float)_UNK_03889d58;
    uVar6 = (ulong)_UNK_03889d58 >> 0x20;
    fVar20 = pfVar1[1] + pfVar1[3] * fVar120;
    fVar26 = fVar20 / (*pfVar1 + pfVar1[2] * fVar120);
    fVar21 = fVar26 * fVar26 + 1.0;
    fVar26 = SQRT(fVar21);
    if (NAN(fVar26)) {
      fVar26 = sqrtf(fVar21);
    }
    fVar26 = (fVar38 * fVar20 * -0.5 + 1.0) / fVar26;
    fVar38 = fVar38 * fVar26;
    fVar20 = 0.0 - (auVar90._0_4_ * fVar41 + auVar90._4_4_ * fVar44 + auVar90._8_4_ * fVar56 +
                   auVar90._12_4_ * fVar57);
    fVar21 = 0.0 - (auVar107._0_4_ * fVar41 + auVar107._4_4_ * fVar44 + auVar107._8_4_ * fVar56 +
                   auVar107._12_4_ * fVar57);
    fVar41 = 0.0 - (auVar113._0_4_ * fVar41 + auVar113._4_4_ * fVar44 + auVar113._8_4_ * fVar56 +
                   auVar113._12_4_ * fVar57);
    fVar26 = fVar26 * fVar94;
    fVar57 = fVar15 * auVar51._0_4_ * fVar27 + fVar9 * auVar10._4_4_ * auVar10._0_4_;
    fVar27 = fVar9 * auVar51._0_4_ * (float)uVar8 + fVar15 * auVar10._4_4_ * auVar10._0_4_;
    fVar65 = auVar51._0_4_ * 0.0 * fVar65 + auVar51._4_4_ * fVar104 * auVar10._0_4_;
    fVar120 = auVar51._0_4_ * 0.0 * (float)uVar4 + fVar16 * 0.0 * auVar10._0_4_;
    fVar44 = fVar15 * auVar10._0_4_ * fVar66 + fVar9 * auVar10._4_4_ * auVar51._0_4_;
    fVar9 = fVar9 * auVar10._0_4_ * (float)uVar5 + fVar15 * auVar10._4_4_ * auVar51._0_4_;
    fVar15 = auVar10._0_4_ * 0.0 * fVar80 + auVar51._4_4_ * fVar104 * auVar51._0_4_;
    fVar56 = auVar10._0_4_ * 0.0 * (float)uVar6 + fVar16 * 0.0 * auVar51._0_4_;
    fVar66 = (float)uVar95;
    fVar80 = (float)uVar143;
    if ((float)((ulong)uVar95 >> 0x20) == 0.0) {
      fVar104 = (float)uVar142;
      fVar16 = (float)((ulong)uVar142 >> 0x20);
      lVar96 = (ulong)(uint)((fVar104 + 1.0) / fVar38) << 0x20;
      lVar7 = (ulong)(uint)((1.0 - fVar104) / fVar38) << 0x20;
      auVar90._8_8_ = (ulong)(uint)((fVar16 + 1.0) / fVar26) << 0x20;
      auVar90._0_8_ = DAT_0388a7e8;
      fVar38 = (1.0 - fVar80) / fVar66;
      auVar107._8_8_ = (ulong)(uint)((1.0 - fVar16) / fVar26) << 0x20;
      auVar107._0_8_ = DAT_0388a868;
    }
    else {
      fVar38 = -1.0 / fVar38;
      fVar26 = -1.0 / fVar26;
      fVar126 = fVar38 * fVar38 + fVar104;
      fVar124 = fVar126 + fVar16 + 0.0;
      fVar126 = fVar126 + fVar16 + 0.0;
      fVar127 = fVar26 * fVar26 + (float)DAT_0388a7e8;
      fVar99 = (float)((ulong)DAT_0388a7e8 >> 0x20);
      fVar129 = fVar99 + 0.0;
      auVar113._8_8_ = CONCAT44(fVar126,fVar124);
      auVar113._0_8_ = CONCAT44(fVar126,fVar124);
      fVar125 = fVar127 + fVar129;
      fVar127 = fVar127 + fVar129;
      auVar70._8_8_ = CONCAT44(fVar127,fVar125);
      auVar70._0_8_ = CONCAT44(fVar127,fVar125);
      auVar90 = NEON_frsqrte(auVar113,4);
      auVar107 = NEON_frsqrte(auVar70,4);
      auVar112._0_4_ = auVar90._0_4_ * fVar124;
      auVar112._4_4_ = auVar90._4_4_ * fVar126;
      auVar112._8_4_ = auVar90._8_4_ * fVar124;
      auVar112._12_4_ = auVar90._12_4_ * fVar126;
      auVar113 = NEON_frsqrts(auVar90,auVar112,4);
      auVar91._0_4_ = auVar90._0_4_ * auVar113._0_4_;
      auVar91._4_4_ = auVar90._4_4_ * auVar113._4_4_;
      auVar91._8_4_ = auVar90._8_4_ * auVar113._8_4_;
      auVar91._12_4_ = auVar90._12_4_ * auVar113._12_4_;
      auVar114._0_4_ = auVar107._0_4_ * fVar125;
      auVar114._4_4_ = auVar107._4_4_ * fVar127;
      auVar114._8_4_ = auVar107._8_4_ * fVar125;
      auVar114._12_4_ = auVar107._12_4_ * fVar127;
      auVar90 = NEON_frsqrts(auVar107,auVar114,4);
      auVar108._0_4_ = auVar107._0_4_ * auVar90._0_4_;
      auVar108._4_4_ = auVar107._4_4_ * auVar90._4_4_;
      auVar108._8_4_ = auVar107._8_4_ * auVar90._8_4_;
      auVar108._12_4_ = auVar107._12_4_ * auVar90._12_4_;
      auVar115._0_4_ = fVar124 * auVar91._0_4_;
      auVar115._4_4_ = fVar126 * auVar91._4_4_;
      auVar115._8_4_ = fVar124 * auVar91._8_4_;
      auVar115._12_4_ = fVar126 * auVar91._12_4_;
      iVar32 = -(uint)(fVar124 == 0.0);
      iVar39 = -(uint)(fVar126 == 0.0);
      iVar40 = -(uint)(fVar124 == 0.0);
      iVar42 = -(uint)(fVar126 == 0.0);
      bVar12 = ~(byte)((uint)iVar32 >> 8);
      bVar13 = ~(byte)((uint)iVar32 >> 0x10);
      bVar14 = ~(byte)((uint)iVar32 >> 0x18);
      bVar17 = ~(byte)((uint)iVar39 >> 8);
      bVar18 = ~(byte)((uint)iVar39 >> 0x10);
      bVar19 = ~(byte)((uint)iVar39 >> 0x18);
      bVar23 = ~(byte)((uint)iVar40 >> 8);
      bVar24 = ~(byte)((uint)iVar40 >> 0x10);
      bVar25 = ~(byte)((uint)iVar40 >> 0x18);
      bVar29 = ~(byte)((uint)iVar42 >> 8);
      bVar30 = ~(byte)((uint)iVar42 >> 0x10);
      bVar31 = ~(byte)((uint)iVar42 >> 0x18);
      auVar90 = NEON_frsqrts(auVar91,auVar115,4);
      fVar124 = auVar91._0_4_ * auVar90._0_4_;
      fVar126 = auVar91._4_4_ * auVar90._4_4_;
      fVar129 = auVar91._8_4_ * auVar90._8_4_;
      fVar94 = auVar91._12_4_ * auVar90._12_4_;
      auVar116._0_4_ = fVar125 * auVar108._0_4_;
      auVar116._4_4_ = fVar127 * auVar108._4_4_;
      auVar116._8_4_ = fVar125 * auVar108._8_4_;
      auVar116._12_4_ = fVar127 * auVar108._12_4_;
      iVar67 = -(uint)(fVar125 == 0.0);
      iVar76 = -(uint)(fVar127 == 0.0);
      iVar81 = -(uint)(fVar125 == 0.0);
      iVar85 = -(uint)(fVar127 == 0.0);
      bVar73 = ~(byte)((uint)iVar67 >> 8);
      bVar74 = ~(byte)((uint)iVar67 >> 0x10);
      bVar75 = ~(byte)((uint)iVar67 >> 0x18);
      bVar77 = ~(byte)((uint)iVar76 >> 8);
      bVar78 = ~(byte)((uint)iVar76 >> 0x10);
      bVar79 = ~(byte)((uint)iVar76 >> 0x18);
      bVar82 = ~(byte)((uint)iVar81 >> 8);
      bVar83 = ~(byte)((uint)iVar81 >> 0x10);
      bVar84 = ~(byte)((uint)iVar81 >> 0x18);
      bVar86 = ~(byte)((uint)iVar85 >> 8);
      bVar87 = ~(byte)((uint)iVar85 >> 0x10);
      bVar88 = ~(byte)((uint)iVar85 >> 0x18);
      auVar90 = NEON_frsqrts(auVar108,auVar116,4);
      fVar104 = fVar104 * fVar124;
      fVar16 = fVar16 * fVar126;
      fVar125 = fVar38 * fVar129;
      fVar127 = fVar94 * 0.0;
      uVar68 = CONCAT17((byte)((uint)fVar16 >> 0x18) & bVar19,
                        CONCAT16((byte)((uint)fVar16 >> 0x10) & bVar18,
                                 CONCAT15((byte)((uint)fVar16 >> 8) & bVar17,
                                          CONCAT14(SUB41(fVar16,0) & ~(byte)iVar39,
                                                   CONCAT13((byte)((uint)fVar104 >> 0x18) & bVar14,
                                                            CONCAT12((byte)((uint)fVar104 >> 0x10) &
                                                                     bVar13,CONCAT11((byte)((uint)
                                                  fVar104 >> 8) & bVar12,
                                                  SUB41(fVar104,0) & ~(byte)iVar32)))))));
      lVar96 = CONCAT17((byte)((uint)fVar127 >> 0x18) & bVar31,
                        CONCAT16((byte)((uint)fVar127 >> 0x10) & bVar30,
                                 CONCAT15((byte)((uint)fVar127 >> 8) & bVar29,
                                          CONCAT14(SUB41(fVar127,0) & ~(byte)iVar42,
                                                   CONCAT13((byte)((uint)fVar125 >> 0x18) & bVar25,
                                                            CONCAT12((byte)((uint)fVar125 >> 0x10) &
                                                                     bVar24,CONCAT11((byte)((uint)
                                                  fVar125 >> 8) & bVar23,
                                                  SUB41(fVar125,0) & ~(byte)iVar40)))))));
      fVar125 = auVar108._0_4_ * auVar90._0_4_;
      fVar127 = auVar108._4_4_ * auVar90._4_4_;
      fVar109 = auVar108._8_4_ * auVar90._8_4_;
      fVar110 = auVar108._12_4_ * auVar90._12_4_;
      fVar28 = fVar28 * fVar124;
      fVar100 = fVar100 * fVar126;
      fVar38 = fVar38 * fVar129;
      fVar94 = fVar94 * 0.0;
      uVar69 = CONCAT17((byte)((uint)fVar100 >> 0x18) & bVar19,
                        CONCAT16((byte)((uint)fVar100 >> 0x10) & bVar18,
                                 CONCAT15((byte)((uint)fVar100 >> 8) & bVar17,
                                          CONCAT14(SUB41(fVar100,0) & ~(byte)iVar39,
                                                   CONCAT13((byte)((uint)fVar28 >> 0x18) & bVar14,
                                                            CONCAT12((byte)((uint)fVar28 >> 0x10) &
                                                                     bVar13,CONCAT11((byte)((uint)
                                                  fVar28 >> 8) & bVar12,
                                                  SUB41(fVar28,0) & ~(byte)iVar32)))))));
      lVar7 = CONCAT17((byte)((uint)fVar94 >> 0x18) & bVar31,
                       CONCAT16((byte)((uint)fVar94 >> 0x10) & bVar30,
                                CONCAT15((byte)((uint)fVar94 >> 8) & bVar29,
                                         CONCAT14(SUB41(fVar94,0) & ~(byte)iVar42,
                                                  CONCAT13((byte)((uint)fVar38 >> 0x18) & bVar25,
                                                           CONCAT12((byte)((uint)fVar38 >> 0x10) &
                                                                    bVar24,CONCAT11((byte)((uint)
                                                  fVar38 >> 8) & bVar23,
                                                  SUB41(fVar38,0) & ~(byte)iVar40)))))));
      fVar38 = (float)DAT_0388a7e8 * fVar125;
      fVar99 = fVar99 * fVar127;
      fVar104 = fVar26 * fVar109;
      fVar16 = fVar110 * 0.0;
      auVar90[0] = SUB41(fVar38,0) & ~(byte)iVar67;
      auVar90[1] = (byte)((uint)fVar38 >> 8) & bVar73;
      auVar90[2] = (byte)((uint)fVar38 >> 0x10) & bVar74;
      auVar90[3] = (byte)((uint)fVar38 >> 0x18) & bVar75;
      auVar90[4] = SUB41(fVar99,0) & ~(byte)iVar76;
      auVar90[5] = (byte)((uint)fVar99 >> 8) & bVar77;
      auVar90[6] = (byte)((uint)fVar99 >> 0x10) & bVar78;
      auVar90[7] = (byte)((uint)fVar99 >> 0x18) & bVar79;
      auVar90[8] = SUB41(fVar104,0) & ~(byte)iVar81;
      auVar90[9] = (byte)((uint)fVar104 >> 8) & bVar82;
      auVar90[10] = (byte)((uint)fVar104 >> 0x10) & bVar83;
      auVar90[0xb] = (byte)((uint)fVar104 >> 0x18) & bVar84;
      auVar90[0xc] = SUB41(fVar16,0) & ~(byte)iVar85;
      auVar90[0xd] = (byte)((uint)fVar16 >> 8) & bVar86;
      auVar90[0xe] = (byte)((uint)fVar16 >> 0x10) & bVar87;
      auVar90[0xf] = (byte)((uint)fVar16 >> 0x18) & bVar88;
      fVar125 = (float)DAT_0388a868 * fVar125;
      fVar127 = (float)((ulong)DAT_0388a868 >> 0x20) * fVar127;
      fVar26 = fVar26 * fVar109;
      fVar110 = fVar110 * 0.0;
      auVar107[0] = SUB41(fVar125,0) & ~(byte)iVar67;
      auVar107[1] = (byte)((uint)fVar125 >> 8) & bVar73;
      auVar107[2] = (byte)((uint)fVar125 >> 0x10) & bVar74;
      auVar107[3] = (byte)((uint)fVar125 >> 0x18) & bVar75;
      auVar107[4] = SUB41(fVar127,0) & ~(byte)iVar76;
      auVar107[5] = (byte)((uint)fVar127 >> 8) & bVar77;
      auVar107[6] = (byte)((uint)fVar127 >> 0x10) & bVar78;
      auVar107[7] = (byte)((uint)fVar127 >> 0x18) & bVar79;
      auVar107[8] = SUB41(fVar26,0) & ~(byte)iVar81;
      auVar107[9] = (byte)((uint)fVar26 >> 8) & bVar82;
      auVar107[10] = (byte)((uint)fVar26 >> 0x10) & bVar83;
      auVar107[0xb] = (byte)((uint)fVar26 >> 0x18) & bVar84;
      auVar107[0xc] = SUB41(fVar110,0) & ~(byte)iVar85;
      auVar107[0xd] = (byte)((uint)fVar110 >> 8) & bVar86;
      auVar107[0xe] = (byte)((uint)fVar110 >> 0x10) & bVar87;
      auVar107[0xf] = (byte)((uint)fVar110 >> 0x18) & bVar88;
      fVar38 = ((fVar80 / fVar66) * fVar66) / (fVar66 + 1.0);
    }
    fVar125 = fVar122 * 0.0 + fVar57 * 0.0 + auVar33._0_4_ * fVar44 + fVar20 * 0.0;
    fVar126 = fVar123 * 0.0 + fVar27 * 0.0 + auVar33._4_4_ * fVar9 + fVar21 * 0.0;
    fVar127 = fVar22 * 0.0 + fVar65 * 0.0 + auVar33._8_4_ * fVar15 + fVar41 * 0.0;
    fVar138 = (float)lVar96;
    fVar141 = (float)lVar7;
    fVar26 = auVar90._0_4_;
    fVar104 = auVar90._4_4_;
    fVar136 = (float)uVar68;
    fVar137 = (float)((ulong)uVar68 >> 0x20);
    fVar28 = auVar107._0_4_;
    fVar100 = auVar107._4_4_;
    fVar139 = (float)uVar69;
    fVar140 = (float)((ulong)uVar69 >> 0x20);
    fVar16 = auVar90._8_4_;
    fVar124 = auVar107._8_4_;
    fVar130 = fVar122 * fVar26 + fVar57 * fVar104 + fVar44 * fVar16 + fVar20 * 0.0;
    fVar131 = fVar123 * fVar26 + fVar27 * fVar104 + fVar9 * fVar16 + fVar21 * 0.0;
    fVar132 = fVar22 * fVar26 + fVar65 * fVar104 + fVar15 * fVar16 + fVar41 * 0.0;
    auVar11._0_4_ = fVar20 * fVar125;
    auVar11._4_4_ = fVar21 * fVar126;
    auVar11._8_4_ = fVar41 * fVar127;
    auVar11._12_4_ = (fVar121 * 0.0 + fVar120 * 0.0 + auVar33._12_4_ * fVar56 + 0.0) * 1.0;
    fVar129 = fVar122 * fVar136 + fVar57 * fVar137 + fVar44 * fVar138 + fVar20 * 0.0;
    fVar94 = fVar123 * fVar136 + fVar27 * fVar137 + fVar9 * fVar138 + fVar21 * 0.0;
    fVar99 = fVar22 * fVar136 + fVar65 * fVar137 + fVar15 * fVar138 + fVar41 * 0.0;
    fVar133 = fVar122 * fVar28 + fVar57 * fVar100 + fVar44 * fVar124 + fVar20 * 0.0;
    fVar134 = fVar123 * fVar28 + fVar27 * fVar100 + fVar9 * fVar124 + fVar21 * 0.0;
    fVar135 = fVar22 * fVar28 + fVar65 * fVar100 + fVar15 * fVar124 + fVar41 * 0.0;
    auVar33 = NEON_ext(auVar11,auVar11,8,1);
    fVar110 = fVar122 * fVar139 + fVar57 * fVar140 + fVar44 * fVar141 + fVar20 * 0.0;
    fVar109 = fVar123 * fVar139 + fVar27 * fVar140 + fVar9 * fVar141 + fVar21 * 0.0;
    fVar128 = fVar22 * fVar139 + fVar65 * fVar140 + fVar15 * fVar141 + fVar41 * 0.0;
    fVar44 = fVar122 * 0.0 + fVar57 * 0.0 + fVar44 * 1.0 + fVar20 * 0.0;
    fVar9 = fVar123 * 0.0 + fVar27 * 0.0 + fVar9 * 1.0 + fVar21 * 0.0;
    fVar15 = fVar22 * 0.0 + fVar65 * 0.0 + fVar15 * 1.0 + fVar41 * 0.0;
    auVar52._0_4_ = fVar20 * fVar129;
    auVar52._4_4_ = fVar21 * fVar94;
    auVar52._8_4_ = fVar41 * fVar99;
    auVar52._12_4_ = (fVar121 * fVar136 + fVar120 * fVar137 + fVar56 * fVar138 + 0.0) * 1.0;
    auVar102 = NEON_ext(auVar52,auVar52,8,1);
    auVar64._0_4_ = fVar20 * fVar110;
    auVar64._4_4_ = fVar21 * fVar109;
    auVar64._8_4_ = fVar41 * fVar128;
    auVar64._12_4_ = (fVar121 * fVar139 + fVar120 * fVar140 + fVar56 * fVar141 + 0.0) * 1.0;
    auVar92._0_4_ = fVar20 * fVar130;
    auVar92._4_4_ = fVar21 * fVar131;
    auVar92._8_4_ = fVar41 * fVar132;
    auVar92._12_4_ = (fVar121 * fVar26 + fVar120 * fVar104 + fVar56 * fVar16 + 0.0) * 1.0;
    auVar103 = NEON_ext(auVar64,auVar64,8,1);
    fVar57 = fVar20 * fVar133;
    fVar26 = fVar21 * fVar134;
    fVar27 = fVar41 * fVar135;
    fVar65 = (fVar121 * fVar28 + fVar120 * fVar100 + fVar56 * fVar124 + 0.0) * 1.0;
    auVar37._0_4_ = fVar20 * fVar44;
    auVar37._4_4_ = fVar21 * fVar9;
    auVar37._8_4_ = fVar41 * fVar15;
    auVar37._12_4_ = (fVar121 * 0.0 + fVar120 * 0.0 + fVar56 * 1.0 + 0.0) * 1.0;
    auVar113 = NEON_ext(auVar37,auVar37,8,1);
    auVar72 = NEON_ext(auVar92,auVar92,8,1);
    auVar2._4_4_ = fVar26;
    auVar2._0_4_ = fVar57;
    auVar2._8_4_ = fVar27;
    auVar2._12_4_ = fVar65;
    auVar3._4_4_ = fVar26;
    auVar3._0_4_ = fVar57;
    auVar3._8_4_ = fVar27;
    auVar3._12_4_ = fVar65;
    auVar93 = NEON_ext(auVar2,auVar3,8,1);
    *(float *)(param_1 + 0x418) = fVar127;
    *(float *)(param_1 + 0x41c) =
         fVar38 - (auVar33._0_4_ + auVar11._0_4_ + auVar33._4_4_ + auVar11._4_4_);
    *(float *)(param_1 + 0x410) = fVar125;
    *(float *)(param_1 + 0x414) = fVar126;
    *(ulong *)(param_1 + 0x3d8) =
         CONCAT44((float)((ulong)lVar96 >> 0x20) -
                  (auVar102._0_4_ + auVar52._0_4_ + auVar102._4_4_ + auVar52._4_4_),fVar99);
    *(ulong *)(param_1 + 0x3d0) = CONCAT44(fVar94,fVar129);
    *(float *)(param_1 + 1000) = fVar128;
    *(float *)(param_1 + 0x3ec) =
         (float)((ulong)lVar7 >> 0x20) -
         (auVar103._0_4_ + auVar64._0_4_ + auVar103._4_4_ + auVar64._4_4_);
    *(float *)(param_1 + 0x3e0) = fVar110;
    *(float *)(param_1 + 0x3e4) = fVar109;
    *(ulong *)(param_1 + 0x428) =
         CONCAT44(fVar80 / fVar66 -
                  (auVar113._0_4_ + auVar37._0_4_ + auVar113._4_4_ + auVar37._4_4_),fVar15);
    *(ulong *)(param_1 + 0x420) = CONCAT44(fVar9,fVar44);
    *(ulong *)(param_1 + 0x3f8) =
         CONCAT44(auVar90._12_4_ - (auVar72._0_4_ + auVar92._0_4_ + auVar72._4_4_ + auVar92._4_4_),
                  fVar132);
    *(ulong *)(param_1 + 0x3f0) = CONCAT44(fVar131,fVar130);
    *(ulong *)(param_1 + 0x408) =
         CONCAT44(auVar107._12_4_ - (auVar93._0_4_ + fVar57 + auVar93._4_4_ + fVar26),fVar135);
    *(ulong *)(param_1 + 0x400) = CONCAT44(fVar134,fVar133);
  }
  return;
}


