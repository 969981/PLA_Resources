/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e63f74; name: FUN_02e63f74
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_02e63f74(float *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lVar5;
  undefined1 (*pauVar6) [16];
  int iVar7;
  uint uVar8;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 auVar10 [16];
  uint uVar9;
  undefined1 auVar11 [16];
  float fVar15;
  float fVar17;
  float fVar18;
  undefined1 auVar16 [16];
  float fVar19;
  float fVar20;
  byte bVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar21 [16];
  float fVar26;
  undefined1 auVar22 [16];
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined8 uVar54;
  float fVar55;
  float fVar57;
  float fVar58;
  float fVar60;
  undefined1 auVar56 [16];
  undefined8 uVar59;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  undefined1 auStack_40 [16];
  
  if (((DAT_04409f50 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04409f50), iVar7 != 0)) {
    auVar21._8_4_ = 0x6ce3ee;
    auVar21._0_8_ = 0x6ce3ee006ce3ee;
    auVar21._12_4_ = 0x6ce3ee;
    uRam0000000004409f48 = auVar21._8_8_;
    _DAT_04409f40 = 0x6ce3ee006ce3ee;
    __cxa_guard_release(&DAT_04409f50);
  }
  pauVar6 = (undefined1 (*) [16])(param_1 + 0x30);
  auVar21 = *pauVar6;
  auVar56 = *(undefined1 (*) [16])(param_1 + 4);
  fVar64 = param_1[0x34];
  fVar35 = param_1[0x35];
  fVar20 = param_1[0x36];
  fVar61 = *param_1 * fVar64 + auVar56._0_4_ * fVar35 + param_1[8] * fVar20;
  fVar62 = param_1[1] * fVar64 + auVar56._4_4_ * fVar35 + param_1[9] * fVar20;
  fVar63 = param_1[2] * fVar64 + auVar56._8_4_ * fVar35 + param_1[10] * fVar20;
  fVar64 = param_1[3] * fVar64 + auVar56._12_4_ * fVar35 + param_1[0xb] * fVar20;
  iVar7 = -(uint)(ABS(fVar61) < (float)_DAT_04409f40);
  iVar12 = -(uint)(ABS(fVar62) < (float)((ulong)_DAT_04409f40 >> 0x20));
  iVar13 = -(uint)(ABS(fVar63) < (float)uRam0000000004409f48);
  iVar14 = -(uint)(ABS(fVar64) < (float)((ulong)uRam0000000004409f48 >> 0x20));
  bVar23 = (byte)_DAT_03889700;
  auVar56[0] = (byte)iVar7 & bVar23;
  bVar65 = (byte)((ulong)_DAT_03889700 >> 8);
  auVar56[1] = (byte)((uint)iVar7 >> 8) & bVar65;
  bVar66 = (byte)((ulong)_DAT_03889700 >> 0x10);
  auVar56[2] = (byte)((uint)iVar7 >> 0x10) & bVar66;
  bVar67 = (byte)((ulong)_DAT_03889700 >> 0x18);
  auVar56[3] = (byte)((uint)iVar7 >> 0x18) & bVar67;
  bVar68 = (byte)((ulong)_DAT_03889700 >> 0x20);
  auVar56[4] = (byte)iVar12 & bVar68;
  bVar69 = (byte)((ulong)_DAT_03889700 >> 0x28);
  auVar56[5] = (byte)((uint)iVar12 >> 8) & bVar69;
  bVar70 = (byte)((ulong)_DAT_03889700 >> 0x30);
  auVar56[6] = (byte)((uint)iVar12 >> 0x10) & bVar70;
  bVar71 = (byte)((ulong)_DAT_03889700 >> 0x38);
  auVar56[7] = (byte)((uint)iVar12 >> 0x18) & bVar71;
  bVar72 = (byte)_UNK_03889708;
  auVar56[8] = (byte)iVar13 & bVar72;
  bVar73 = (byte)((ulong)_UNK_03889708 >> 8);
  auVar56[9] = (byte)((uint)iVar13 >> 8) & bVar73;
  bVar74 = (byte)((ulong)_UNK_03889708 >> 0x10);
  auVar56[10] = (byte)((uint)iVar13 >> 0x10) & bVar74;
  bVar75 = (byte)((ulong)_UNK_03889708 >> 0x18);
  auVar56[0xb] = (byte)((uint)iVar13 >> 0x18) & bVar75;
  bVar76 = (byte)((ulong)_UNK_03889708 >> 0x20);
  auVar56[0xc] = (byte)iVar14 & bVar76;
  bVar77 = (byte)((ulong)_UNK_03889708 >> 0x28);
  auVar56[0xd] = (byte)((uint)iVar14 >> 8) & bVar77;
  bVar78 = (byte)((ulong)_UNK_03889708 >> 0x30);
  auVar56[0xe] = (byte)((uint)iVar14 >> 0x10) & bVar78;
  bVar79 = (byte)((ulong)_UNK_03889708 >> 0x38);
  auVar56[0xf] = (byte)((uint)iVar14 >> 0x18) & bVar79;
  auVar16 = NEON_ext(auVar56,auVar56,8,1);
  uVar8 = CONCAT13(auVar16[3] | auVar56[3],
                   CONCAT12(auVar16[2] | auVar56[2],
                            CONCAT11(auVar16[1] | auVar56[1],auVar16[0] | auVar56[0])));
  if (((DAT_04409f70 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04409f70), iVar7 != 0)) {
    auVar11 = NEON_fmov(0xbf800000,4);
    uRam0000000004409f68 = auVar11._8_8_;
    _DAT_04409f60 = auVar11._0_8_;
    __cxa_guard_release(&DAT_04409f70);
  }
  fVar35 = auVar21._0_4_;
  uVar28 = auVar21._4_4_;
  auVar11._0_8_ = CONCAT44(uVar28,uVar28);
  auVar11._8_4_ = uVar28;
  auVar11._12_4_ = uVar28;
  uVar28 = auVar21._8_4_;
  auVar52._4_4_ = uVar28;
  auVar52._0_4_ = uVar28;
  auVar52._8_4_ = uVar28;
  auVar52._12_4_ = uVar28;
  if ((DAT_04409f90 & 1) == 0) {
    uVar59 = auVar11._8_8_;
    uVar54 = auVar52._8_8_;
    iVar7 = __cxa_guard_acquire(&DAT_04409f90);
    auVar11._8_8_ = uVar59;
    auVar52._8_8_ = uVar54;
    if (iVar7 != 0) {
      auVar21 = NEON_fmov(0x3f800000,4);
      uRam0000000004409f88 = auVar21._8_8_;
      _DAT_04409f80 = auVar21._0_8_;
      __cxa_guard_release(&DAT_04409f90);
    }
  }
  fVar20 = (float)((ulong)_DAT_04409f80 >> 0x20);
  fVar24 = (float)((ulong)uRam0000000004409f88 >> 0x20);
  uVar1 = 0xf >> (ulong)(4U - (int)param_1[0x39] & 0x1f);
  fVar15 = (float)_DAT_04409f80 * param_1[0xc] +
           (float)_DAT_04409f60 *
           (*param_1 * fVar35 + auVar11._0_4_ * param_1[4] +
           auVar52._0_4_ * (float)*(undefined8 *)(param_1 + 8));
  fVar17 = fVar20 * param_1[0xd] +
           (float)((ulong)_DAT_04409f60 >> 0x20) *
           (param_1[1] * fVar35 + auVar11._4_4_ * param_1[5] +
           auVar52._4_4_ * (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20));
  fVar18 = (float)uRam0000000004409f88 * param_1[0xe] +
           (float)uRam0000000004409f68 *
           (param_1[2] * fVar35 + auVar11._8_4_ * param_1[6] +
           auVar52._8_4_ * (float)*(undefined8 *)(param_1 + 10));
  fVar19 = fVar24 * param_1[0xf] +
           (float)((ulong)uRam0000000004409f68 >> 0x20) *
           (param_1[3] * fVar35 + auVar11._12_4_ * param_1[7] +
           auVar52._12_4_ * (float)((ulong)*(undefined8 *)(param_1 + 10) >> 0x20));
  bVar36 = (char)((byte)((uint)(-fVar15 + fVar61 * (float)_DAT_04409f80) >> 0x18) ^
                 (byte)((uint)fVar15 >> 0x18)) >> 7;
  auVar10[0] = bVar36 & bVar23;
  auVar10[1] = bVar36 & bVar65;
  auVar10[2] = bVar36 & bVar66;
  auVar10[3] = bVar36 & bVar67;
  bVar36 = (char)((byte)((uint)(-fVar17 + fVar62 * fVar20) >> 0x18) ^ (byte)((uint)fVar17 >> 0x18))
           >> 7;
  auVar10[4] = bVar36 & bVar68;
  auVar10[5] = bVar36 & bVar69;
  auVar10[6] = bVar36 & bVar70;
  auVar10[7] = bVar36 & bVar71;
  bVar36 = (char)((byte)((uint)(-fVar18 + fVar63 * (float)uRam0000000004409f88) >> 0x18) ^
                 (byte)((uint)fVar18 >> 0x18)) >> 7;
  auVar10[8] = bVar36 & bVar72;
  auVar10[9] = bVar36 & bVar73;
  auVar10[10] = bVar36 & bVar74;
  auVar10[0xb] = bVar36 & bVar75;
  bVar36 = (char)((byte)((uint)(-fVar19 + fVar64 * fVar24) >> 0x18) ^ (byte)((uint)fVar19 >> 0x18))
           >> 7;
  auVar10[0xc] = bVar36 & bVar76;
  auVar10[0xd] = bVar36 & bVar77;
  auVar10[0xe] = bVar36 & bVar78;
  auVar10[0xf] = bVar36 & bVar79;
  auVar21 = NEON_ext(auVar10,auVar10,8,1);
  uVar9 = CONCAT13(auVar21[3] | auVar10[3],
                   CONCAT12(auVar21[2] | auVar10[2],
                            CONCAT11(auVar21[1] | auVar10[1],auVar21[0] | auVar10[0])));
  uVar8 = uVar8 | (uint)(CONCAT17(auVar16[7] | auVar56[7],
                                  CONCAT16(auVar16[6] | auVar56[6],
                                           CONCAT15(auVar16[5] | auVar56[5],
                                                    CONCAT14(auVar16[4] | auVar56[4],uVar8)))) >>
                        0x20) |
          (uVar9 | (uint)(CONCAT17(auVar21[7] | auVar10[7],
                                   CONCAT16(auVar21[6] | auVar10[6],
                                            CONCAT15(auVar21[5] | auVar10[5],
                                                     CONCAT14(auVar21[4] | auVar10[4],uVar9)))) >>
                         0x20)) & uVar1;
  if (uVar8 != uVar1) {
    auVar21 = *(undefined1 (*) [16])(param_1 + 0x34);
    fVar20 = auVar21._0_4_;
    fVar27 = fVar61 * fVar35 + fVar15 * fVar20;
    fVar29 = fVar62 * fVar35 + fVar17 * fVar20;
    fVar30 = fVar63 * fVar35 + fVar18 * fVar20;
    fVar31 = fVar64 * fVar35 + fVar19 * fVar20;
    fVar35 = auVar21._4_4_;
    fVar20 = fVar61 * auVar11._0_4_ + fVar15 * fVar35;
    fVar24 = fVar62 * auVar11._4_4_ + fVar17 * fVar35;
    fVar25 = fVar63 * auVar11._8_4_ + fVar18 * fVar35;
    fVar26 = fVar64 * auVar11._12_4_ + fVar19 * fVar35;
    fVar35 = auVar21._8_4_;
    fVar32 = fVar61 * auVar52._0_4_ + fVar15 * fVar35;
    fVar33 = fVar62 * auVar52._4_4_ + fVar17 * fVar35;
    fVar34 = fVar63 * auVar52._8_4_ + fVar18 * fVar35;
    fVar35 = fVar64 * auVar52._12_4_ + fVar19 * fVar35;
    fVar55 = fVar27 * (float)*(undefined8 *)(param_1 + 0x10) + param_1[0x14] * fVar20 +
             (float)*(undefined8 *)(param_1 + 0x18) * fVar32 +
             fVar61 * (float)*(undefined8 *)(param_1 + 0x1c);
    fVar57 = fVar29 * (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
             param_1[0x15] * fVar24 +
             (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) * fVar33 +
             fVar62 * (float)((ulong)*(undefined8 *)(param_1 + 0x1c) >> 0x20);
    fVar58 = fVar30 * (float)*(undefined8 *)(param_1 + 0x12) + param_1[0x16] * fVar25 +
             (float)*(undefined8 *)(param_1 + 0x1a) * fVar34 +
             fVar63 * (float)*(undefined8 *)(param_1 + 0x1e);
    fVar60 = fVar31 * (float)((ulong)*(undefined8 *)(param_1 + 0x12) >> 0x20) +
             param_1[0x17] * fVar26 +
             (float)((ulong)*(undefined8 *)(param_1 + 0x1a) >> 0x20) * fVar35 +
             fVar64 * (float)((ulong)*(undefined8 *)(param_1 + 0x1e) >> 0x20);
    iVar7 = -(uint)(fVar55 == 0.0);
    iVar12 = -(uint)(fVar57 == 0.0);
    iVar13 = -(uint)(fVar58 == 0.0);
    iVar14 = -(uint)(fVar60 == 0.0);
    bVar36 = (byte)iVar7 & bVar23;
    bVar37 = (byte)((uint)iVar7 >> 8) & bVar65;
    bVar38 = (byte)((uint)iVar7 >> 0x10) & bVar66;
    bVar39 = (byte)((uint)iVar7 >> 0x18) & bVar67;
    bVar40 = (byte)iVar12 & bVar68;
    bVar41 = (byte)((uint)iVar12 >> 8) & bVar69;
    bVar42 = (byte)((uint)iVar12 >> 0x10) & bVar70;
    bVar43 = (byte)((uint)iVar12 >> 0x18) & bVar71;
    bVar44 = (byte)iVar13 & bVar72;
    bVar45 = (byte)((uint)iVar13 >> 8) & bVar73;
    bVar46 = (byte)((uint)iVar13 >> 0x10) & bVar74;
    bVar47 = (byte)((uint)iVar13 >> 0x18) & bVar75;
    bVar48 = (byte)iVar14 & bVar76;
    bVar49 = (byte)((uint)iVar14 >> 8) & bVar77;
    bVar50 = (byte)((uint)iVar14 >> 0x10) & bVar78;
    bVar51 = (byte)((uint)iVar14 >> 0x18) & bVar79;
    auVar16[1] = bVar37;
    auVar16[0] = bVar36;
    auVar16[2] = bVar38;
    auVar16[3] = bVar39;
    auVar16[4] = bVar40;
    auVar16[5] = bVar41;
    auVar16[6] = bVar42;
    auVar16[7] = bVar43;
    auVar16[8] = bVar44;
    auVar16[9] = bVar45;
    auVar16[10] = bVar46;
    auVar16[0xb] = bVar47;
    auVar16[0xc] = bVar48;
    auVar16[0xd] = bVar49;
    auVar16[0xe] = bVar50;
    auVar16[0xf] = bVar51;
    auVar2[1] = bVar37;
    auVar2[0] = bVar36;
    auVar2[2] = bVar38;
    auVar2[3] = bVar39;
    auVar2[4] = bVar40;
    auVar2[5] = bVar41;
    auVar2[6] = bVar42;
    auVar2[7] = bVar43;
    auVar2[8] = bVar44;
    auVar2[9] = bVar45;
    auVar2[10] = bVar46;
    auVar2[0xb] = bVar47;
    auVar2[0xc] = bVar48;
    auVar2[0xd] = bVar49;
    auVar2[0xe] = bVar50;
    auVar2[0xf] = bVar51;
    auVar21 = NEON_ext(auVar16,auVar2,8,1);
    bVar44 = (char)((byte)((uint)(fVar61 - fVar55) >> 0x18) ^ (byte)((uint)fVar55 >> 0x18)) >> 7;
    auVar53[0] = bVar44 & bVar23;
    auVar53[1] = bVar44 & bVar65;
    auVar53[2] = bVar44 & bVar66;
    auVar53[3] = bVar44 & bVar67;
    bVar44 = (char)((byte)((uint)(fVar62 - fVar57) >> 0x18) ^ (byte)((uint)fVar57 >> 0x18)) >> 7;
    auVar53[4] = bVar44 & bVar68;
    auVar53[5] = bVar44 & bVar69;
    auVar53[6] = bVar44 & bVar70;
    auVar53[7] = bVar44 & bVar71;
    bVar44 = (char)((byte)((uint)(fVar63 - fVar58) >> 0x18) ^ (byte)((uint)fVar58 >> 0x18)) >> 7;
    auVar53[8] = bVar44 & bVar72;
    auVar53[9] = bVar44 & bVar73;
    auVar53[10] = bVar44 & bVar74;
    auVar53[0xb] = bVar44 & bVar75;
    bVar44 = (char)((byte)((uint)(fVar64 - fVar60) >> 0x18) ^ (byte)((uint)fVar60 >> 0x18)) >> 7;
    auVar53[0xc] = bVar44 & bVar76;
    auVar53[0xd] = bVar44 & bVar77;
    auVar53[0xe] = bVar44 & bVar78;
    auVar53[0xf] = bVar44 & bVar79;
    auVar56 = NEON_ext(auVar53,auVar53,8,1);
    uVar9 = CONCAT13(auVar56[3] | auVar53[3],
                     CONCAT12(auVar56[2] | auVar53[2],
                              CONCAT11(auVar56[1] | auVar53[1],auVar56[0] | auVar53[0])));
    uVar8 = uVar1 & ((CONCAT13(auVar21[3] | bVar39,
                               CONCAT12(auVar21[2] | bVar38,
                                        CONCAT11(auVar21[1] | bVar37,auVar21[0] | bVar36))) |
                     CONCAT13(auVar21[7] | bVar43,
                              CONCAT12(auVar21[6] | bVar42,
                                       CONCAT11(auVar21[5] | bVar41,auVar21[4] | bVar40)))) ^
                    0xffffffff) &
            (uVar9 | (uint)(CONCAT17(auVar56[7] | auVar53[7],
                                     CONCAT16(auVar56[6] | auVar53[6],
                                              CONCAT15(auVar56[5] | auVar53[5],
                                                       CONCAT14(auVar56[4] | auVar53[4],uVar9)))) >>
                           0x20)) | uVar8;
    if (uVar8 != uVar1) {
      auVar21 = *(undefined1 (*) [16])(param_1 + 0x24);
      auVar56 = *(undefined1 (*) [16])(param_1 + 0x28);
      fVar20 = param_1[0x20] * fVar27 + fVar20 * auVar21._0_4_ + fVar32 * auVar56._0_4_ +
               fVar61 * (float)*(undefined8 *)(param_1 + 0x2c);
      fVar24 = param_1[0x21] * fVar29 + fVar24 * auVar21._4_4_ + fVar33 * auVar56._4_4_ +
               fVar62 * (float)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20);
      fVar25 = param_1[0x22] * fVar30 + fVar25 * auVar21._8_4_ + fVar34 * auVar56._8_4_ +
               fVar63 * (float)*(undefined8 *)(param_1 + 0x2e);
      fVar35 = param_1[0x23] * fVar31 + fVar26 * auVar21._12_4_ + fVar35 * auVar56._12_4_ +
               fVar64 * (float)((ulong)*(undefined8 *)(param_1 + 0x2e) >> 0x20);
      bVar36 = (char)((byte)((uint)((fVar61 - fVar55) - fVar20) >> 0x18) ^
                     (byte)((uint)fVar20 >> 0x18)) >> 7;
      auVar22[0] = bVar36 & bVar23;
      auVar22[1] = bVar36 & bVar65;
      auVar22[2] = bVar36 & bVar66;
      auVar22[3] = bVar36 & bVar67;
      bVar23 = (char)((byte)((uint)((fVar62 - fVar57) - fVar24) >> 0x18) ^
                     (byte)((uint)fVar24 >> 0x18)) >> 7;
      auVar22[4] = bVar23 & bVar68;
      auVar22[5] = bVar23 & bVar69;
      auVar22[6] = bVar23 & bVar70;
      auVar22[7] = bVar23 & bVar71;
      bVar23 = (char)((byte)((uint)((fVar63 - fVar58) - fVar25) >> 0x18) ^
                     (byte)((uint)fVar25 >> 0x18)) >> 7;
      auVar22[8] = bVar23 & bVar72;
      auVar22[9] = bVar23 & bVar73;
      auVar22[10] = bVar23 & bVar74;
      auVar22[0xb] = bVar23 & bVar75;
      bVar23 = (char)((byte)((uint)((fVar64 - fVar60) - fVar35) >> 0x18) ^
                     (byte)((uint)fVar35 >> 0x18)) >> 7;
      auVar22[0xc] = bVar23 & bVar76;
      auVar22[0xd] = bVar23 & bVar77;
      auVar22[0xe] = bVar23 & bVar78;
      auVar22[0xf] = bVar23 & bVar79;
      auVar21 = NEON_ext(auVar22,auVar22,8,1);
      uVar9 = CONCAT13(auVar21[3] | auVar22[3],
                       CONCAT12(auVar21[2] | auVar22[2],
                                CONCAT11(auVar21[1] | auVar22[1],auVar21[0] | auVar22[0])));
      uVar8 = (uVar9 | (uint)(CONCAT17(auVar21[7] | auVar22[7],
                                       CONCAT16(auVar21[6] | auVar22[6],
                                                CONCAT15(auVar21[5] | auVar22[5],
                                                         CONCAT14(auVar21[4] | auVar22[4],uVar9))))
                             >> 0x20)) & uVar1 | uVar8;
      if (uVar8 != uVar1) {
        auVar3._4_4_ = fVar62;
        auVar3._0_4_ = fVar61;
        auVar3._8_4_ = fVar63;
        auVar3._12_4_ = fVar64;
        auVar21 = NEON_frecpe(auVar3,4);
        uVar1 = uVar1 & (uVar8 ^ 0xffffffff);
        auVar4._4_4_ = fVar62;
        auVar4._0_4_ = fVar61;
        auVar4._8_4_ = fVar63;
        auVar4._12_4_ = fVar64;
        auVar56 = NEON_frecps(auVar4,auVar21,4);
        if (((uVar1 & 1) != 0) &&
           (((*(long *)(param_1 + 0x3e) == 0 ||
             (lVar5 = FUN_02e4e640(*(long *)(*(long *)(param_1 + 0x3e) + 0x38) + 0x20,pauVar6,
                                   auStack_40), lVar5 == 0)) &&
            (fVar64 = (float)NEON_fminnm(auVar21._0_4_ * fVar15 * auVar56._0_4_,0x7f7fffff),
            fVar64 < param_1[0x3b])))) {
          param_1[0x3b] = fVar64;
          *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_1 + 0x3e);
          param_1[0x4a] = param_1[0x32] + param_1[0x36] * fVar64;
          param_1[0x4b] = param_1[0x33] + param_1[0x37] * fVar64;
          param_1[0x48] = param_1[0x30] + param_1[0x34] * fVar64;
          param_1[0x49] = param_1[0x31] + param_1[0x35] * fVar64;
        }
        if ((((uVar1 >> 1 & 1) != 0) &&
            ((*(long *)(param_1 + 0x40) == 0 ||
             (lVar5 = FUN_02e4e640(*(undefined1 (*) [16])(param_1 + 0x34),
                                   *(long *)(*(long *)(param_1 + 0x40) + 0x38) + 0x20,pauVar6,
                                   auStack_40), lVar5 == 0)))) &&
           (fVar64 = (float)NEON_fminnm(auVar21._4_4_ * fVar17 * auVar56._4_4_,0x7f7fffff),
           fVar64 < param_1[0x3b])) {
          param_1[0x3b] = fVar64;
          *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_1 + 0x40);
          param_1[0x4a] = param_1[0x32] + param_1[0x36] * fVar64;
          param_1[0x4b] = param_1[0x33] + param_1[0x37] * fVar64;
          param_1[0x48] = param_1[0x30] + param_1[0x34] * fVar64;
          param_1[0x49] = param_1[0x31] + param_1[0x35] * fVar64;
        }
        if ((((uVar1 >> 2 & 1) != 0) &&
            ((*(long *)(param_1 + 0x42) == 0 ||
             (lVar5 = FUN_02e4e640(*(undefined1 (*) [16])(param_1 + 0x34),
                                   *(long *)(*(long *)(param_1 + 0x42) + 0x38) + 0x20,pauVar6,
                                   auStack_40), lVar5 == 0)))) &&
           (fVar64 = (float)NEON_fminnm(auVar21._8_4_ * fVar18 * auVar56._8_4_,0x7f7fffff),
           fVar64 < param_1[0x3b])) {
          param_1[0x3b] = fVar64;
          *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_1 + 0x42);
          param_1[0x4a] = param_1[0x32] + param_1[0x36] * fVar64;
          param_1[0x4b] = param_1[0x33] + param_1[0x37] * fVar64;
          param_1[0x48] = param_1[0x30] + param_1[0x34] * fVar64;
          param_1[0x49] = param_1[0x31] + param_1[0x35] * fVar64;
        }
        if (((uVar1 >> 3 & 1) != 0) &&
           (((*(long *)(param_1 + 0x44) == 0 ||
             (lVar5 = FUN_02e4e640(*(undefined1 (*) [16])(param_1 + 0x34),
                                   *(long *)(*(long *)(param_1 + 0x44) + 0x38) + 0x20,pauVar6,
                                   auStack_40), lVar5 == 0)) &&
            (fVar64 = (float)NEON_fminnm(auVar21._12_4_ * fVar19 * auVar56._12_4_,0x7f7fffff),
            fVar64 < param_1[0x3b])))) {
          param_1[0x3b] = fVar64;
          *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_1 + 0x44);
          param_1[0x4a] = param_1[0x32] + param_1[0x36] * fVar64;
          param_1[0x4b] = param_1[0x33] + param_1[0x37] * fVar64;
          param_1[0x48] = param_1[0x30] + param_1[0x34] * fVar64;
          param_1[0x49] = param_1[0x31] + param_1[0x35] * fVar64;
        }
        return *(long *)(param_1 + 0x3c) != 0;
      }
    }
  }
  return false;
}


