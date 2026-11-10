/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5db28; name: FUN_02e5db28
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02e5db28(float *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  float *pfVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 auVar11 [16];
  uint uVar10;
  undefined1 auVar12 [16];
  float fVar16;
  byte bVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar23;
  undefined1 auVar19 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
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
  byte bVar48;
  byte bVar49;
  undefined1 auVar50 [16];
  float fVar51;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined1 auVar52 [16];
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
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
  byte bVar73;
  byte bVar74;
  undefined1 auStack_40 [16];
  
  puVar3 = PTR_DAT_04388760;
  if (((*PTR_DAT_04388758 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04388758), iVar8 != 0))
  {
    auVar17._8_4_ = 0x6ce3ee;
    auVar17._0_8_ = 0x6ce3ee006ce3ee;
    auVar17._12_4_ = 0x6ce3ee;
    *(long *)(puVar3 + 8) = auVar17._8_8_;
    *(undefined8 *)puVar3 = 0x6ce3ee006ce3ee;
    __cxa_guard_release(PTR_DAT_04388758);
  }
  puVar4 = PTR_DAT_04388770;
  pfVar6 = param_1 + 0x30;
  uVar32 = *(undefined8 *)(param_1 + 0x32);
  uVar7 = *(undefined8 *)pfVar6;
  auVar17 = *(undefined1 (*) [16])(param_1 + 4);
  fVar59 = param_1[0x34];
  fVar33 = param_1[0x35];
  fVar23 = param_1[0x36];
  fVar56 = *param_1 * fVar59 + auVar17._0_4_ * fVar33 + param_1[8] * fVar23;
  fVar57 = param_1[1] * fVar59 + auVar17._4_4_ * fVar33 + param_1[9] * fVar23;
  fVar58 = param_1[2] * fVar59 + auVar17._8_4_ * fVar33 + param_1[10] * fVar23;
  fVar59 = param_1[3] * fVar59 + auVar17._12_4_ * fVar33 + param_1[0xb] * fVar23;
  iVar8 = -(uint)(ABS(fVar56) < *(float *)puVar3);
  iVar13 = -(uint)(ABS(fVar57) < *(float *)(puVar3 + 4));
  iVar14 = -(uint)(ABS(fVar58) < *(float *)(puVar3 + 8));
  iVar15 = -(uint)(ABS(fVar59) < *(float *)(puVar3 + 0xc));
  bVar20 = (byte)_DAT_03889700;
  auVar52[0] = (byte)iVar8 & bVar20;
  bVar60 = (byte)((ulong)_DAT_03889700 >> 8);
  auVar52[1] = (byte)((uint)iVar8 >> 8) & bVar60;
  bVar61 = (byte)((ulong)_DAT_03889700 >> 0x10);
  auVar52[2] = (byte)((uint)iVar8 >> 0x10) & bVar61;
  bVar62 = (byte)((ulong)_DAT_03889700 >> 0x18);
  auVar52[3] = (byte)((uint)iVar8 >> 0x18) & bVar62;
  bVar63 = (byte)((ulong)_DAT_03889700 >> 0x20);
  auVar52[4] = (byte)iVar13 & bVar63;
  bVar64 = (byte)((ulong)_DAT_03889700 >> 0x28);
  auVar52[5] = (byte)((uint)iVar13 >> 8) & bVar64;
  bVar65 = (byte)((ulong)_DAT_03889700 >> 0x30);
  auVar52[6] = (byte)((uint)iVar13 >> 0x10) & bVar65;
  bVar66 = (byte)((ulong)_DAT_03889700 >> 0x38);
  auVar52[7] = (byte)((uint)iVar13 >> 0x18) & bVar66;
  bVar67 = (byte)_UNK_03889708;
  auVar52[8] = (byte)iVar14 & bVar67;
  bVar68 = (byte)((ulong)_UNK_03889708 >> 8);
  auVar52[9] = (byte)((uint)iVar14 >> 8) & bVar68;
  bVar69 = (byte)((ulong)_UNK_03889708 >> 0x10);
  auVar52[10] = (byte)((uint)iVar14 >> 0x10) & bVar69;
  bVar70 = (byte)((ulong)_UNK_03889708 >> 0x18);
  auVar52[0xb] = (byte)((uint)iVar14 >> 0x18) & bVar70;
  bVar71 = (byte)((ulong)_UNK_03889708 >> 0x20);
  auVar52[0xc] = (byte)iVar15 & bVar71;
  bVar72 = (byte)((ulong)_UNK_03889708 >> 0x28);
  auVar52[0xd] = (byte)((uint)iVar15 >> 8) & bVar72;
  bVar73 = (byte)((ulong)_UNK_03889708 >> 0x30);
  auVar52[0xe] = (byte)((uint)iVar15 >> 0x10) & bVar73;
  bVar74 = (byte)((ulong)_UNK_03889708 >> 0x38);
  auVar52[0xf] = (byte)((uint)iVar15 >> 0x18) & bVar74;
  auVar17 = NEON_ext(auVar52,auVar52,8,1);
  uVar9 = CONCAT13(auVar17[3] | auVar52[3],
                   CONCAT12(auVar17[2] | auVar52[2],
                            CONCAT11(auVar17[1] | auVar52[1],auVar17[0] | auVar52[0])));
  if (((*PTR_DAT_04388768 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04388768), iVar8 != 0))
  {
    auVar12 = NEON_fmov(0xbf800000,4);
    *(long *)(puVar4 + 8) = auVar12._8_8_;
    *(long *)puVar4 = auVar12._0_8_;
    __cxa_guard_release(PTR_DAT_04388768);
  }
  fVar33 = (float)uVar7;
  fVar23 = (float)((ulong)uVar7 >> 0x20);
  uVar30 = (undefined4)uVar32;
  auVar12._4_4_ = uVar30;
  auVar12._0_4_ = uVar30;
  auVar12._8_4_ = uVar30;
  auVar12._12_4_ = uVar30;
  if ((*PTR_DAT_04388778 & 1) == 0) {
    uVar7 = auVar12._8_8_;
    iVar8 = __cxa_guard_acquire(PTR_DAT_04388778);
    puVar3 = PTR_DAT_04388780;
    auVar12._8_8_ = uVar7;
    if (iVar8 != 0) {
      auVar12 = NEON_fmov(0x3f800000,4);
      *(long *)(PTR_DAT_04388780 + 8) = auVar12._8_8_;
      *(long *)puVar3 = auVar12._0_8_;
      __cxa_guard_release(PTR_DAT_04388778);
    }
  }
  fVar28 = *(float *)PTR_DAT_04388780 * (float)*(undefined8 *)(param_1 + 0xc) +
           *(float *)puVar4 *
           (*param_1 * fVar33 + fVar23 * param_1[4] +
           auVar12._0_4_ * (float)*(undefined8 *)(param_1 + 8));
  fVar29 = *(float *)(PTR_DAT_04388780 + 4) * (float)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20)
           + *(float *)(puVar4 + 4) *
             (param_1[1] * fVar33 + fVar23 * param_1[5] +
             auVar12._4_4_ * (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20));
  fVar31 = *(float *)(PTR_DAT_04388780 + 8) * (float)*(undefined8 *)(param_1 + 0xe) +
           *(float *)(puVar4 + 8) *
           (param_1[2] * fVar33 + fVar23 * param_1[6] +
           auVar12._8_4_ * (float)*(undefined8 *)(param_1 + 10));
  fVar51 = *(float *)(PTR_DAT_04388780 + 0xc) *
           (float)((ulong)*(undefined8 *)(param_1 + 0xe) >> 0x20) +
           *(float *)(puVar4 + 0xc) *
           (param_1[3] * fVar33 + fVar23 * param_1[7] +
           auVar12._12_4_ * (float)((ulong)*(undefined8 *)(param_1 + 10) >> 0x20));
  bVar34 = (char)((byte)((uint)(-fVar28 + fVar56 * *(float *)PTR_DAT_04388780) >> 0x18) ^
                 (byte)((uint)fVar28 >> 0x18)) >> 7;
  auVar11[0] = bVar34 & bVar20;
  auVar11[1] = bVar34 & bVar60;
  auVar11[2] = bVar34 & bVar61;
  auVar11[3] = bVar34 & bVar62;
  bVar34 = (char)((byte)((uint)(-fVar29 + fVar57 * *(float *)(PTR_DAT_04388780 + 4)) >> 0x18) ^
                 (byte)((uint)fVar29 >> 0x18)) >> 7;
  auVar11[4] = bVar34 & bVar63;
  auVar11[5] = bVar34 & bVar64;
  auVar11[6] = bVar34 & bVar65;
  auVar11[7] = bVar34 & bVar66;
  bVar34 = (char)((byte)((uint)(-fVar31 + fVar58 * *(float *)(PTR_DAT_04388780 + 8)) >> 0x18) ^
                 (byte)((uint)fVar31 >> 0x18)) >> 7;
  auVar11[8] = bVar34 & bVar67;
  auVar11[9] = bVar34 & bVar68;
  auVar11[10] = bVar34 & bVar69;
  auVar11[0xb] = bVar34 & bVar70;
  bVar34 = (char)((byte)((uint)(-fVar51 + fVar59 * *(float *)(PTR_DAT_04388780 + 0xc)) >> 0x18) ^
                 (byte)((uint)fVar51 >> 0x18)) >> 7;
  auVar11[0xc] = bVar34 & bVar71;
  auVar11[0xd] = bVar34 & bVar72;
  auVar11[0xe] = bVar34 & bVar73;
  auVar11[0xf] = bVar34 & bVar74;
  auVar18 = NEON_ext(auVar11,auVar11,8,1);
  uVar10 = CONCAT13(auVar18[3] | auVar11[3],
                    CONCAT12(auVar18[2] | auVar11[2],
                             CONCAT11(auVar18[1] | auVar11[1],auVar18[0] | auVar11[0])));
  uVar1 = 0xf >> (ulong)(4U - (int)param_1[0x38] & 0x1f);
  uVar9 = uVar9 | (uint)(CONCAT17(auVar17[7] | auVar52[7],
                                  CONCAT16(auVar17[6] | auVar52[6],
                                           CONCAT15(auVar17[5] | auVar52[5],
                                                    CONCAT14(auVar17[4] | auVar52[4],uVar9)))) >>
                        0x20) |
          (uVar10 | (uint)(CONCAT17(auVar18[7] | auVar11[7],
                                    CONCAT16(auVar18[6] | auVar11[6],
                                             CONCAT15(auVar18[5] | auVar11[5],
                                                      CONCAT14(auVar18[4] | auVar11[4],uVar10)))) >>
                          0x20)) & uVar1;
  if (uVar9 != uVar1) {
    auVar17 = *(undefined1 (*) [16])(param_1 + 0x34);
    fVar16 = auVar17._0_4_;
    fVar24 = fVar56 * fVar33 + fVar28 * fVar16;
    fVar25 = fVar57 * fVar33 + fVar29 * fVar16;
    fVar26 = fVar58 * fVar33 + fVar31 * fVar16;
    fVar27 = fVar59 * fVar33 + fVar51 * fVar16;
    fVar33 = auVar17._4_4_;
    fVar16 = fVar56 * fVar23 + fVar28 * fVar33;
    fVar21 = fVar57 * fVar23 + fVar29 * fVar33;
    fVar22 = fVar58 * fVar23 + fVar31 * fVar33;
    fVar23 = fVar59 * fVar23 + fVar51 * fVar33;
    fVar33 = auVar17._8_4_;
    fVar28 = fVar56 * auVar12._0_4_ + fVar28 * fVar33;
    fVar29 = fVar57 * auVar12._4_4_ + fVar29 * fVar33;
    fVar31 = fVar58 * auVar12._8_4_ + fVar31 * fVar33;
    fVar33 = fVar59 * auVar12._12_4_ + fVar51 * fVar33;
    fVar51 = fVar24 * (float)*(undefined8 *)(param_1 + 0x10) + param_1[0x14] * fVar16 +
             (float)*(undefined8 *)(param_1 + 0x18) * fVar28 +
             fVar56 * (float)*(undefined8 *)(param_1 + 0x1c);
    fVar53 = fVar25 * (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
             param_1[0x15] * fVar21 +
             (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) * fVar29 +
             fVar57 * (float)((ulong)*(undefined8 *)(param_1 + 0x1c) >> 0x20);
    fVar54 = fVar26 * (float)*(undefined8 *)(param_1 + 0x12) + param_1[0x16] * fVar22 +
             (float)*(undefined8 *)(param_1 + 0x1a) * fVar31 +
             fVar58 * (float)*(undefined8 *)(param_1 + 0x1e);
    fVar55 = fVar27 * (float)((ulong)*(undefined8 *)(param_1 + 0x12) >> 0x20) +
             param_1[0x17] * fVar23 +
             (float)((ulong)*(undefined8 *)(param_1 + 0x1a) >> 0x20) * fVar33 +
             fVar59 * (float)((ulong)*(undefined8 *)(param_1 + 0x1e) >> 0x20);
    iVar8 = -(uint)(fVar51 == 0.0);
    iVar13 = -(uint)(fVar53 == 0.0);
    iVar14 = -(uint)(fVar54 == 0.0);
    iVar15 = -(uint)(fVar55 == 0.0);
    bVar34 = (byte)iVar8 & bVar20;
    bVar35 = (byte)((uint)iVar8 >> 8) & bVar60;
    bVar36 = (byte)((uint)iVar8 >> 0x10) & bVar61;
    bVar37 = (byte)((uint)iVar8 >> 0x18) & bVar62;
    bVar38 = (byte)iVar13 & bVar63;
    bVar39 = (byte)((uint)iVar13 >> 8) & bVar64;
    bVar40 = (byte)((uint)iVar13 >> 0x10) & bVar65;
    bVar41 = (byte)((uint)iVar13 >> 0x18) & bVar66;
    bVar42 = (byte)iVar14 & bVar67;
    bVar43 = (byte)((uint)iVar14 >> 8) & bVar68;
    bVar44 = (byte)((uint)iVar14 >> 0x10) & bVar69;
    bVar45 = (byte)((uint)iVar14 >> 0x18) & bVar70;
    bVar46 = (byte)iVar15 & bVar71;
    bVar47 = (byte)((uint)iVar15 >> 8) & bVar72;
    bVar48 = (byte)((uint)iVar15 >> 0x10) & bVar73;
    bVar49 = (byte)((uint)iVar15 >> 0x18) & bVar74;
    auVar18[1] = bVar35;
    auVar18[0] = bVar34;
    auVar18[2] = bVar36;
    auVar18[3] = bVar37;
    auVar18[4] = bVar38;
    auVar18[5] = bVar39;
    auVar18[6] = bVar40;
    auVar18[7] = bVar41;
    auVar18[8] = bVar42;
    auVar18[9] = bVar43;
    auVar18[10] = bVar44;
    auVar18[0xb] = bVar45;
    auVar18[0xc] = bVar46;
    auVar18[0xd] = bVar47;
    auVar18[0xe] = bVar48;
    auVar18[0xf] = bVar49;
    auVar2[1] = bVar35;
    auVar2[0] = bVar34;
    auVar2[2] = bVar36;
    auVar2[3] = bVar37;
    auVar2[4] = bVar38;
    auVar2[5] = bVar39;
    auVar2[6] = bVar40;
    auVar2[7] = bVar41;
    auVar2[8] = bVar42;
    auVar2[9] = bVar43;
    auVar2[10] = bVar44;
    auVar2[0xb] = bVar45;
    auVar2[0xc] = bVar46;
    auVar2[0xd] = bVar47;
    auVar2[0xe] = bVar48;
    auVar2[0xf] = bVar49;
    auVar17 = NEON_ext(auVar18,auVar2,8,1);
    bVar42 = (char)((byte)((uint)(fVar56 - fVar51) >> 0x18) ^ (byte)((uint)fVar51 >> 0x18)) >> 7;
    auVar50[0] = bVar42 & bVar20;
    auVar50[1] = bVar42 & bVar60;
    auVar50[2] = bVar42 & bVar61;
    auVar50[3] = bVar42 & bVar62;
    bVar42 = (char)((byte)((uint)(fVar57 - fVar53) >> 0x18) ^ (byte)((uint)fVar53 >> 0x18)) >> 7;
    auVar50[4] = bVar42 & bVar63;
    auVar50[5] = bVar42 & bVar64;
    auVar50[6] = bVar42 & bVar65;
    auVar50[7] = bVar42 & bVar66;
    bVar42 = (char)((byte)((uint)(fVar58 - fVar54) >> 0x18) ^ (byte)((uint)fVar54 >> 0x18)) >> 7;
    auVar50[8] = bVar42 & bVar67;
    auVar50[9] = bVar42 & bVar68;
    auVar50[10] = bVar42 & bVar69;
    auVar50[0xb] = bVar42 & bVar70;
    bVar42 = (char)((byte)((uint)(fVar59 - fVar55) >> 0x18) ^ (byte)((uint)fVar55 >> 0x18)) >> 7;
    auVar50[0xc] = bVar42 & bVar71;
    auVar50[0xd] = bVar42 & bVar72;
    auVar50[0xe] = bVar42 & bVar73;
    auVar50[0xf] = bVar42 & bVar74;
    auVar52 = NEON_ext(auVar50,auVar50,8,1);
    uVar10 = CONCAT13(auVar52[3] | auVar50[3],
                      CONCAT12(auVar52[2] | auVar50[2],
                               CONCAT11(auVar52[1] | auVar50[1],auVar52[0] | auVar50[0])));
    uVar9 = uVar1 & ((CONCAT13(auVar17[3] | bVar37,
                               CONCAT12(auVar17[2] | bVar36,
                                        CONCAT11(auVar17[1] | bVar35,auVar17[0] | bVar34))) |
                     CONCAT13(auVar17[7] | bVar41,
                              CONCAT12(auVar17[6] | bVar40,
                                       CONCAT11(auVar17[5] | bVar39,auVar17[4] | bVar38)))) ^
                    0xffffffff) &
            (uVar10 | (uint)(CONCAT17(auVar52[7] | auVar50[7],
                                      CONCAT16(auVar52[6] | auVar50[6],
                                               CONCAT15(auVar52[5] | auVar50[5],
                                                        CONCAT14(auVar52[4] | auVar50[4],uVar10))))
                            >> 0x20)) | uVar9;
    if (uVar9 != uVar1) {
      auVar17 = *(undefined1 (*) [16])(param_1 + 0x24);
      auVar52 = *(undefined1 (*) [16])(param_1 + 0x28);
      fVar28 = param_1[0x20] * fVar24 + fVar16 * auVar17._0_4_ + fVar28 * auVar52._0_4_ +
               fVar56 * (float)*(undefined8 *)(param_1 + 0x2c);
      fVar29 = param_1[0x21] * fVar25 + fVar21 * auVar17._4_4_ + fVar29 * auVar52._4_4_ +
               fVar57 * (float)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20);
      fVar31 = param_1[0x22] * fVar26 + fVar22 * auVar17._8_4_ + fVar31 * auVar52._8_4_ +
               fVar58 * (float)*(undefined8 *)(param_1 + 0x2e);
      fVar33 = param_1[0x23] * fVar27 + fVar23 * auVar17._12_4_ + fVar33 * auVar52._12_4_ +
               fVar59 * (float)((ulong)*(undefined8 *)(param_1 + 0x2e) >> 0x20);
      bVar34 = (char)((byte)((uint)((fVar56 - fVar51) - fVar28) >> 0x18) ^
                     (byte)((uint)fVar28 >> 0x18)) >> 7;
      auVar19[0] = bVar34 & bVar20;
      auVar19[1] = bVar34 & bVar60;
      auVar19[2] = bVar34 & bVar61;
      auVar19[3] = bVar34 & bVar62;
      bVar20 = (char)((byte)((uint)((fVar57 - fVar53) - fVar29) >> 0x18) ^
                     (byte)((uint)fVar29 >> 0x18)) >> 7;
      auVar19[4] = bVar20 & bVar63;
      auVar19[5] = bVar20 & bVar64;
      auVar19[6] = bVar20 & bVar65;
      auVar19[7] = bVar20 & bVar66;
      bVar20 = (char)((byte)((uint)((fVar58 - fVar54) - fVar31) >> 0x18) ^
                     (byte)((uint)fVar31 >> 0x18)) >> 7;
      auVar19[8] = bVar20 & bVar67;
      auVar19[9] = bVar20 & bVar68;
      auVar19[10] = bVar20 & bVar69;
      auVar19[0xb] = bVar20 & bVar70;
      bVar20 = (char)((byte)((uint)((fVar59 - fVar55) - fVar33) >> 0x18) ^
                     (byte)((uint)fVar33 >> 0x18)) >> 7;
      auVar19[0xc] = bVar20 & bVar71;
      auVar19[0xd] = bVar20 & bVar72;
      auVar19[0xe] = bVar20 & bVar73;
      auVar19[0xf] = bVar20 & bVar74;
      auVar17 = NEON_ext(auVar19,auVar19,8,1);
      uVar10 = CONCAT13(auVar17[3] | auVar19[3],
                        CONCAT12(auVar17[2] | auVar19[2],
                                 CONCAT11(auVar17[1] | auVar19[1],auVar17[0] | auVar19[0])));
      uVar9 = (uVar10 | (uint)(CONCAT17(auVar17[7] | auVar19[7],
                                        CONCAT16(auVar17[6] | auVar19[6],
                                                 CONCAT15(auVar17[5] | auVar19[5],
                                                          CONCAT14(auVar17[4] | auVar19[4],uVar10)))
                                       ) >> 0x20)) & uVar1 | uVar9;
      if (uVar9 != uVar1) {
        uVar1 = uVar1 & (uVar9 ^ 0xffffffff);
        if (((uVar1 & 1) == 0) ||
           ((*(long *)(param_1 + 0x3a) != 0 &&
            (lVar5 = FUN_02e4e640(*(long *)(param_1 + 0x3a),pfVar6,auStack_40), lVar5 != 0)))) {
          uVar7 = 0;
        }
        else {
          uVar7 = 1;
          fVar59 = param_1[0x46];
          if (param_1[0x46] <= param_1[0x42]) {
            fVar59 = param_1[0x42];
          }
          param_1[0x46] = fVar59;
        }
        if (((uVar1 >> 1 & 1) != 0) &&
           ((*(long *)(param_1 + 0x3c) == 0 ||
            (lVar5 = FUN_02e4e640(*(undefined1 (*) [16])(param_1 + 0x34),*(long *)(param_1 + 0x3c),
                                  pfVar6,auStack_40), lVar5 == 0)))) {
          uVar7 = 1;
          fVar59 = param_1[0x46];
          if (param_1[0x46] <= param_1[0x43]) {
            fVar59 = param_1[0x43];
          }
          param_1[0x46] = fVar59;
        }
        if (((uVar1 >> 2 & 1) != 0) &&
           ((*(long *)(param_1 + 0x3e) == 0 ||
            (lVar5 = FUN_02e4e640(*(undefined1 (*) [16])(param_1 + 0x34),*(long *)(param_1 + 0x3e),
                                  pfVar6,auStack_40), lVar5 == 0)))) {
          uVar7 = 1;
          fVar59 = param_1[0x46];
          if (param_1[0x46] <= param_1[0x44]) {
            fVar59 = param_1[0x44];
          }
          param_1[0x46] = fVar59;
        }
        if ((uVar1 >> 3 & 1) == 0) {
          return uVar7;
        }
        if ((*(long *)(param_1 + 0x40) != 0) &&
           (lVar5 = FUN_02e4e640(*(undefined1 (*) [16])(param_1 + 0x34),*(long *)(param_1 + 0x40),
                                 pfVar6,auStack_40), lVar5 != 0)) {
          return uVar7;
        }
        fVar59 = param_1[0x46];
        if (param_1[0x46] <= param_1[0x45]) {
          fVar59 = param_1[0x45];
        }
        param_1[0x46] = fVar59;
        return 1;
      }
    }
  }
  return 0;
}


