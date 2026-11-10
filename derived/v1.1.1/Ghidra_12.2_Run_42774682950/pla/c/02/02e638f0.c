/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e638f0; name: FUN_02e638f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02e638f0(float *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  long lVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar8 [16];
  uint uVar7;
  undefined1 auVar9 [16];
  float fVar13;
  byte bVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar20;
  undefined1 auVar16 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
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
  undefined1 auVar48 [16];
  float fVar49;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 auVar50 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  undefined1 auStack_40 [16];
  
  if (((DAT_04409ed0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04409ed0), iVar5 != 0)) {
    auVar14._8_4_ = 0x6ce3ee;
    auVar14._0_8_ = 0x6ce3ee006ce3ee;
    auVar14._12_4_ = 0x6ce3ee;
    uRam0000000004409ec8 = auVar14._8_8_;
    _DAT_04409ec0 = 0x6ce3ee006ce3ee;
    __cxa_guard_release(&DAT_04409ed0);
  }
  pfVar4 = param_1 + 0x30;
  uVar30 = *(undefined8 *)(param_1 + 0x32);
  uVar26 = *(undefined8 *)pfVar4;
  auVar14 = *(undefined1 (*) [16])(param_1 + 4);
  fVar57 = param_1[0x34];
  fVar31 = param_1[0x35];
  fVar20 = param_1[0x36];
  fVar54 = *param_1 * fVar57 + auVar14._0_4_ * fVar31 + param_1[8] * fVar20;
  fVar55 = param_1[1] * fVar57 + auVar14._4_4_ * fVar31 + param_1[9] * fVar20;
  fVar56 = param_1[2] * fVar57 + auVar14._8_4_ * fVar31 + param_1[10] * fVar20;
  fVar57 = param_1[3] * fVar57 + auVar14._12_4_ * fVar31 + param_1[0xb] * fVar20;
  iVar5 = -(uint)(ABS(fVar54) < (float)_DAT_04409ec0);
  iVar10 = -(uint)(ABS(fVar55) < (float)((ulong)_DAT_04409ec0 >> 0x20));
  iVar11 = -(uint)(ABS(fVar56) < (float)uRam0000000004409ec8);
  iVar12 = -(uint)(ABS(fVar57) < (float)((ulong)uRam0000000004409ec8 >> 0x20));
  bVar17 = (byte)_DAT_03889700;
  auVar50[0] = (byte)iVar5 & bVar17;
  bVar58 = (byte)((ulong)_DAT_03889700 >> 8);
  auVar50[1] = (byte)((uint)iVar5 >> 8) & bVar58;
  bVar59 = (byte)((ulong)_DAT_03889700 >> 0x10);
  auVar50[2] = (byte)((uint)iVar5 >> 0x10) & bVar59;
  bVar60 = (byte)((ulong)_DAT_03889700 >> 0x18);
  auVar50[3] = (byte)((uint)iVar5 >> 0x18) & bVar60;
  bVar61 = (byte)((ulong)_DAT_03889700 >> 0x20);
  auVar50[4] = (byte)iVar10 & bVar61;
  bVar62 = (byte)((ulong)_DAT_03889700 >> 0x28);
  auVar50[5] = (byte)((uint)iVar10 >> 8) & bVar62;
  bVar63 = (byte)((ulong)_DAT_03889700 >> 0x30);
  auVar50[6] = (byte)((uint)iVar10 >> 0x10) & bVar63;
  bVar64 = (byte)((ulong)_DAT_03889700 >> 0x38);
  auVar50[7] = (byte)((uint)iVar10 >> 0x18) & bVar64;
  bVar65 = (byte)_UNK_03889708;
  auVar50[8] = (byte)iVar11 & bVar65;
  bVar66 = (byte)((ulong)_UNK_03889708 >> 8);
  auVar50[9] = (byte)((uint)iVar11 >> 8) & bVar66;
  bVar67 = (byte)((ulong)_UNK_03889708 >> 0x10);
  auVar50[10] = (byte)((uint)iVar11 >> 0x10) & bVar67;
  bVar68 = (byte)((ulong)_UNK_03889708 >> 0x18);
  auVar50[0xb] = (byte)((uint)iVar11 >> 0x18) & bVar68;
  bVar69 = (byte)((ulong)_UNK_03889708 >> 0x20);
  auVar50[0xc] = (byte)iVar12 & bVar69;
  bVar70 = (byte)((ulong)_UNK_03889708 >> 0x28);
  auVar50[0xd] = (byte)((uint)iVar12 >> 8) & bVar70;
  bVar71 = (byte)((ulong)_UNK_03889708 >> 0x30);
  auVar50[0xe] = (byte)((uint)iVar12 >> 0x10) & bVar71;
  bVar72 = (byte)((ulong)_UNK_03889708 >> 0x38);
  auVar50[0xf] = (byte)((uint)iVar12 >> 0x18) & bVar72;
  auVar14 = NEON_ext(auVar50,auVar50,8,1);
  uVar6 = CONCAT13(auVar14[3] | auVar50[3],
                   CONCAT12(auVar14[2] | auVar50[2],
                            CONCAT11(auVar14[1] | auVar50[1],auVar14[0] | auVar50[0])));
  if (((DAT_04409ef0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04409ef0), iVar5 != 0)) {
    auVar9 = NEON_fmov(0xbf800000,4);
    uRam0000000004409ee8 = auVar9._8_8_;
    _DAT_04409ee0 = auVar9._0_8_;
    __cxa_guard_release(&DAT_04409ef0);
  }
  fVar31 = (float)uVar26;
  fVar20 = (float)((ulong)uVar26 >> 0x20);
  uVar28 = (undefined4)uVar30;
  auVar9._4_4_ = uVar28;
  auVar9._0_4_ = uVar28;
  auVar9._8_4_ = uVar28;
  auVar9._12_4_ = uVar28;
  if ((DAT_04409f10 & 1) == 0) {
    uVar26 = auVar9._8_8_;
    iVar5 = __cxa_guard_acquire(&DAT_04409f10);
    auVar9._8_8_ = uVar26;
    if (iVar5 != 0) {
      auVar9 = NEON_fmov(0x3f800000,4);
      uRam0000000004409f08 = auVar9._8_8_;
      _DAT_04409f00 = auVar9._0_8_;
      __cxa_guard_release(&DAT_04409f10);
    }
  }
  fVar13 = (float)((ulong)_DAT_04409f00 >> 0x20);
  fVar18 = (float)((ulong)uRam0000000004409f08 >> 0x20);
  uVar1 = 0xf >> (ulong)(4U - (int)param_1[0x3c] & 0x1f);
  fVar25 = (float)_DAT_04409f00 * (float)*(undefined8 *)(param_1 + 0xc) +
           (float)_DAT_04409ee0 *
           (*param_1 * fVar31 + fVar20 * param_1[4] +
           auVar9._0_4_ * (float)*(undefined8 *)(param_1 + 8));
  fVar27 = fVar13 * (float)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20) +
           (float)((ulong)_DAT_04409ee0 >> 0x20) *
           (param_1[1] * fVar31 + fVar20 * param_1[5] +
           auVar9._4_4_ * (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20));
  fVar29 = (float)uRam0000000004409f08 * (float)*(undefined8 *)(param_1 + 0xe) +
           (float)uRam0000000004409ee8 *
           (param_1[2] * fVar31 + fVar20 * param_1[6] +
           auVar9._8_4_ * (float)*(undefined8 *)(param_1 + 10));
  fVar49 = fVar18 * (float)((ulong)*(undefined8 *)(param_1 + 0xe) >> 0x20) +
           (float)((ulong)uRam0000000004409ee8 >> 0x20) *
           (param_1[3] * fVar31 + fVar20 * param_1[7] +
           auVar9._12_4_ * (float)((ulong)*(undefined8 *)(param_1 + 10) >> 0x20));
  bVar32 = (char)((byte)((uint)(-fVar25 + fVar54 * (float)_DAT_04409f00) >> 0x18) ^
                 (byte)((uint)fVar25 >> 0x18)) >> 7;
  auVar8[0] = bVar32 & bVar17;
  auVar8[1] = bVar32 & bVar58;
  auVar8[2] = bVar32 & bVar59;
  auVar8[3] = bVar32 & bVar60;
  bVar32 = (char)((byte)((uint)(-fVar27 + fVar55 * fVar13) >> 0x18) ^ (byte)((uint)fVar27 >> 0x18))
           >> 7;
  auVar8[4] = bVar32 & bVar61;
  auVar8[5] = bVar32 & bVar62;
  auVar8[6] = bVar32 & bVar63;
  auVar8[7] = bVar32 & bVar64;
  bVar32 = (char)((byte)((uint)(-fVar29 + fVar56 * (float)uRam0000000004409f08) >> 0x18) ^
                 (byte)((uint)fVar29 >> 0x18)) >> 7;
  auVar8[8] = bVar32 & bVar65;
  auVar8[9] = bVar32 & bVar66;
  auVar8[10] = bVar32 & bVar67;
  auVar8[0xb] = bVar32 & bVar68;
  bVar32 = (char)((byte)((uint)(-fVar49 + fVar57 * fVar18) >> 0x18) ^ (byte)((uint)fVar49 >> 0x18))
           >> 7;
  auVar8[0xc] = bVar32 & bVar69;
  auVar8[0xd] = bVar32 & bVar70;
  auVar8[0xe] = bVar32 & bVar71;
  auVar8[0xf] = bVar32 & bVar72;
  auVar15 = NEON_ext(auVar8,auVar8,8,1);
  uVar7 = CONCAT13(auVar15[3] | auVar8[3],
                   CONCAT12(auVar15[2] | auVar8[2],
                            CONCAT11(auVar15[1] | auVar8[1],auVar15[0] | auVar8[0])));
  uVar6 = uVar6 | (uint)(CONCAT17(auVar14[7] | auVar50[7],
                                  CONCAT16(auVar14[6] | auVar50[6],
                                           CONCAT15(auVar14[5] | auVar50[5],
                                                    CONCAT14(auVar14[4] | auVar50[4],uVar6)))) >>
                        0x20) |
          (uVar7 | (uint)(CONCAT17(auVar15[7] | auVar8[7],
                                   CONCAT16(auVar15[6] | auVar8[6],
                                            CONCAT15(auVar15[5] | auVar8[5],
                                                     CONCAT14(auVar15[4] | auVar8[4],uVar7)))) >>
                         0x20)) & uVar1;
  if (uVar6 != uVar1) {
    auVar14 = *(undefined1 (*) [16])(param_1 + 0x34);
    fVar13 = auVar14._0_4_;
    fVar21 = fVar54 * fVar31 + fVar25 * fVar13;
    fVar22 = fVar55 * fVar31 + fVar27 * fVar13;
    fVar23 = fVar56 * fVar31 + fVar29 * fVar13;
    fVar24 = fVar57 * fVar31 + fVar49 * fVar13;
    fVar31 = auVar14._4_4_;
    fVar13 = fVar54 * fVar20 + fVar25 * fVar31;
    fVar18 = fVar55 * fVar20 + fVar27 * fVar31;
    fVar19 = fVar56 * fVar20 + fVar29 * fVar31;
    fVar20 = fVar57 * fVar20 + fVar49 * fVar31;
    fVar31 = auVar14._8_4_;
    fVar25 = fVar54 * auVar9._0_4_ + fVar25 * fVar31;
    fVar27 = fVar55 * auVar9._4_4_ + fVar27 * fVar31;
    fVar29 = fVar56 * auVar9._8_4_ + fVar29 * fVar31;
    fVar31 = fVar57 * auVar9._12_4_ + fVar49 * fVar31;
    fVar49 = fVar21 * (float)*(undefined8 *)(param_1 + 0x10) + param_1[0x14] * fVar13 +
             (float)*(undefined8 *)(param_1 + 0x18) * fVar25 +
             fVar54 * (float)*(undefined8 *)(param_1 + 0x1c);
    fVar51 = fVar22 * (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
             param_1[0x15] * fVar18 +
             (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) * fVar27 +
             fVar55 * (float)((ulong)*(undefined8 *)(param_1 + 0x1c) >> 0x20);
    fVar52 = fVar23 * (float)*(undefined8 *)(param_1 + 0x12) + param_1[0x16] * fVar19 +
             (float)*(undefined8 *)(param_1 + 0x1a) * fVar29 +
             fVar56 * (float)*(undefined8 *)(param_1 + 0x1e);
    fVar53 = fVar24 * (float)((ulong)*(undefined8 *)(param_1 + 0x12) >> 0x20) +
             param_1[0x17] * fVar20 +
             (float)((ulong)*(undefined8 *)(param_1 + 0x1a) >> 0x20) * fVar31 +
             fVar57 * (float)((ulong)*(undefined8 *)(param_1 + 0x1e) >> 0x20);
    iVar5 = -(uint)(fVar49 == 0.0);
    iVar10 = -(uint)(fVar51 == 0.0);
    iVar11 = -(uint)(fVar52 == 0.0);
    iVar12 = -(uint)(fVar53 == 0.0);
    bVar32 = (byte)iVar5 & bVar17;
    bVar33 = (byte)((uint)iVar5 >> 8) & bVar58;
    bVar34 = (byte)((uint)iVar5 >> 0x10) & bVar59;
    bVar35 = (byte)((uint)iVar5 >> 0x18) & bVar60;
    bVar36 = (byte)iVar10 & bVar61;
    bVar37 = (byte)((uint)iVar10 >> 8) & bVar62;
    bVar38 = (byte)((uint)iVar10 >> 0x10) & bVar63;
    bVar39 = (byte)((uint)iVar10 >> 0x18) & bVar64;
    bVar40 = (byte)iVar11 & bVar65;
    bVar41 = (byte)((uint)iVar11 >> 8) & bVar66;
    bVar42 = (byte)((uint)iVar11 >> 0x10) & bVar67;
    bVar43 = (byte)((uint)iVar11 >> 0x18) & bVar68;
    bVar44 = (byte)iVar12 & bVar69;
    bVar45 = (byte)((uint)iVar12 >> 8) & bVar70;
    bVar46 = (byte)((uint)iVar12 >> 0x10) & bVar71;
    bVar47 = (byte)((uint)iVar12 >> 0x18) & bVar72;
    auVar15[1] = bVar33;
    auVar15[0] = bVar32;
    auVar15[2] = bVar34;
    auVar15[3] = bVar35;
    auVar15[4] = bVar36;
    auVar15[5] = bVar37;
    auVar15[6] = bVar38;
    auVar15[7] = bVar39;
    auVar15[8] = bVar40;
    auVar15[9] = bVar41;
    auVar15[10] = bVar42;
    auVar15[0xb] = bVar43;
    auVar15[0xc] = bVar44;
    auVar15[0xd] = bVar45;
    auVar15[0xe] = bVar46;
    auVar15[0xf] = bVar47;
    auVar2[1] = bVar33;
    auVar2[0] = bVar32;
    auVar2[2] = bVar34;
    auVar2[3] = bVar35;
    auVar2[4] = bVar36;
    auVar2[5] = bVar37;
    auVar2[6] = bVar38;
    auVar2[7] = bVar39;
    auVar2[8] = bVar40;
    auVar2[9] = bVar41;
    auVar2[10] = bVar42;
    auVar2[0xb] = bVar43;
    auVar2[0xc] = bVar44;
    auVar2[0xd] = bVar45;
    auVar2[0xe] = bVar46;
    auVar2[0xf] = bVar47;
    auVar14 = NEON_ext(auVar15,auVar2,8,1);
    bVar40 = (char)((byte)((uint)(fVar54 - fVar49) >> 0x18) ^ (byte)((uint)fVar49 >> 0x18)) >> 7;
    auVar48[0] = bVar40 & bVar17;
    auVar48[1] = bVar40 & bVar58;
    auVar48[2] = bVar40 & bVar59;
    auVar48[3] = bVar40 & bVar60;
    bVar40 = (char)((byte)((uint)(fVar55 - fVar51) >> 0x18) ^ (byte)((uint)fVar51 >> 0x18)) >> 7;
    auVar48[4] = bVar40 & bVar61;
    auVar48[5] = bVar40 & bVar62;
    auVar48[6] = bVar40 & bVar63;
    auVar48[7] = bVar40 & bVar64;
    bVar40 = (char)((byte)((uint)(fVar56 - fVar52) >> 0x18) ^ (byte)((uint)fVar52 >> 0x18)) >> 7;
    auVar48[8] = bVar40 & bVar65;
    auVar48[9] = bVar40 & bVar66;
    auVar48[10] = bVar40 & bVar67;
    auVar48[0xb] = bVar40 & bVar68;
    bVar40 = (char)((byte)((uint)(fVar57 - fVar53) >> 0x18) ^ (byte)((uint)fVar53 >> 0x18)) >> 7;
    auVar48[0xc] = bVar40 & bVar69;
    auVar48[0xd] = bVar40 & bVar70;
    auVar48[0xe] = bVar40 & bVar71;
    auVar48[0xf] = bVar40 & bVar72;
    auVar50 = NEON_ext(auVar48,auVar48,8,1);
    uVar7 = CONCAT13(auVar50[3] | auVar48[3],
                     CONCAT12(auVar50[2] | auVar48[2],
                              CONCAT11(auVar50[1] | auVar48[1],auVar50[0] | auVar48[0])));
    uVar6 = uVar1 & ((CONCAT13(auVar14[3] | bVar35,
                               CONCAT12(auVar14[2] | bVar34,
                                        CONCAT11(auVar14[1] | bVar33,auVar14[0] | bVar32))) |
                     CONCAT13(auVar14[7] | bVar39,
                              CONCAT12(auVar14[6] | bVar38,
                                       CONCAT11(auVar14[5] | bVar37,auVar14[4] | bVar36)))) ^
                    0xffffffff) &
            (uVar7 | (uint)(CONCAT17(auVar50[7] | auVar48[7],
                                     CONCAT16(auVar50[6] | auVar48[6],
                                              CONCAT15(auVar50[5] | auVar48[5],
                                                       CONCAT14(auVar50[4] | auVar48[4],uVar7)))) >>
                           0x20)) | uVar6;
    if (uVar6 != uVar1) {
      auVar14 = *(undefined1 (*) [16])(param_1 + 0x24);
      auVar50 = *(undefined1 (*) [16])(param_1 + 0x28);
      fVar25 = param_1[0x20] * fVar21 + fVar13 * auVar14._0_4_ + fVar25 * auVar50._0_4_ +
               fVar54 * (float)*(undefined8 *)(param_1 + 0x2c);
      fVar27 = param_1[0x21] * fVar22 + fVar18 * auVar14._4_4_ + fVar27 * auVar50._4_4_ +
               fVar55 * (float)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20);
      fVar29 = param_1[0x22] * fVar23 + fVar19 * auVar14._8_4_ + fVar29 * auVar50._8_4_ +
               fVar56 * (float)*(undefined8 *)(param_1 + 0x2e);
      fVar31 = param_1[0x23] * fVar24 + fVar20 * auVar14._12_4_ + fVar31 * auVar50._12_4_ +
               fVar57 * (float)((ulong)*(undefined8 *)(param_1 + 0x2e) >> 0x20);
      bVar32 = (char)((byte)((uint)((fVar54 - fVar49) - fVar25) >> 0x18) ^
                     (byte)((uint)fVar25 >> 0x18)) >> 7;
      auVar16[0] = bVar32 & bVar17;
      auVar16[1] = bVar32 & bVar58;
      auVar16[2] = bVar32 & bVar59;
      auVar16[3] = bVar32 & bVar60;
      bVar17 = (char)((byte)((uint)((fVar55 - fVar51) - fVar27) >> 0x18) ^
                     (byte)((uint)fVar27 >> 0x18)) >> 7;
      auVar16[4] = bVar17 & bVar61;
      auVar16[5] = bVar17 & bVar62;
      auVar16[6] = bVar17 & bVar63;
      auVar16[7] = bVar17 & bVar64;
      bVar17 = (char)((byte)((uint)((fVar56 - fVar52) - fVar29) >> 0x18) ^
                     (byte)((uint)fVar29 >> 0x18)) >> 7;
      auVar16[8] = bVar17 & bVar65;
      auVar16[9] = bVar17 & bVar66;
      auVar16[10] = bVar17 & bVar67;
      auVar16[0xb] = bVar17 & bVar68;
      bVar17 = (char)((byte)((uint)((fVar57 - fVar53) - fVar31) >> 0x18) ^
                     (byte)((uint)fVar31 >> 0x18)) >> 7;
      auVar16[0xc] = bVar17 & bVar69;
      auVar16[0xd] = bVar17 & bVar70;
      auVar16[0xe] = bVar17 & bVar71;
      auVar16[0xf] = bVar17 & bVar72;
      auVar14 = NEON_ext(auVar16,auVar16,8,1);
      uVar7 = CONCAT13(auVar14[3] | auVar16[3],
                       CONCAT12(auVar14[2] | auVar16[2],
                                CONCAT11(auVar14[1] | auVar16[1],auVar14[0] | auVar16[0])));
      uVar6 = (uVar7 | (uint)(CONCAT17(auVar14[7] | auVar16[7],
                                       CONCAT16(auVar14[6] | auVar16[6],
                                                CONCAT15(auVar14[5] | auVar16[5],
                                                         CONCAT14(auVar14[4] | auVar16[4],uVar7))))
                             >> 0x20)) & uVar1 | uVar6;
      if ((uVar6 != uVar1) &&
         (((((uVar1 = uVar1 & (uVar6 ^ 0xffffffff), (uVar1 & 1) != 0 &&
             ((*(long *)(param_1 + 0x3e) == 0 ||
              (lVar3 = FUN_02e4e640(*(long *)(param_1 + 0x3e),pfVar4,auStack_40), lVar3 == 0)))) ||
            (((uVar1 >> 1 & 1) != 0 &&
             ((*(long *)(param_1 + 0x40) == 0 ||
              (lVar3 = FUN_02e4e640(*(undefined1 (*) [16])(param_1 + 0x34),*(long *)(param_1 + 0x40)
                                    ,pfVar4,auStack_40), lVar3 == 0)))))) ||
           (((uVar1 >> 2 & 1) != 0 &&
            ((*(long *)(param_1 + 0x42) == 0 ||
             (lVar3 = FUN_02e4e640(*(undefined1 (*) [16])(param_1 + 0x34),*(long *)(param_1 + 0x42),
                                   pfVar4,auStack_40), lVar3 == 0)))))) ||
          (((uVar1 >> 3 & 1) != 0 &&
           ((*(long *)(param_1 + 0x44) == 0 ||
            (lVar3 = FUN_02e4e640(*(undefined1 (*) [16])(param_1 + 0x34),*(long *)(param_1 + 0x44),
                                  pfVar4,auStack_40), lVar3 == 0)))))))) {
        return 1;
      }
    }
  }
  return 0;
}


