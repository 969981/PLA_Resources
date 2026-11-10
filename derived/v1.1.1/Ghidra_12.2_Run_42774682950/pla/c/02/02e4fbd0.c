/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4fbd0; name: FUN_02e4fbd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02e4fbd0(float *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  long lVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 auVar9 [16];
  uint uVar8;
  undefined1 auVar10 [16];
  float fVar14;
  byte bVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar21;
  undefined1 auVar17 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  undefined8 uVar31;
  float fVar32;
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
  byte bVar48;
  undefined1 auVar49 [16];
  float fVar50;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar51 [16];
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
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
  byte bVar73;
  undefined1 auStack_40 [16];
  
  puVar3 = PTR_DAT_04388708;
  if (((*PTR_DAT_04388700 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04388700), iVar6 != 0))
  {
    auVar15._8_4_ = 0x6ce3ee;
    auVar15._0_8_ = 0x6ce3ee006ce3ee;
    auVar15._12_4_ = 0x6ce3ee;
    *(long *)(puVar3 + 8) = auVar15._8_8_;
    *(undefined8 *)puVar3 = 0x6ce3ee006ce3ee;
    __cxa_guard_release(PTR_DAT_04388700);
  }
  pfVar5 = param_1 + 0x30;
  uVar31 = *(undefined8 *)(param_1 + 0x32);
  uVar27 = *(undefined8 *)pfVar5;
  auVar15 = *(undefined1 (*) [16])(param_1 + 4);
  fVar58 = param_1[0x34];
  fVar32 = param_1[0x35];
  fVar21 = param_1[0x36];
  fVar55 = *param_1 * fVar58 + auVar15._0_4_ * fVar32 + param_1[8] * fVar21;
  fVar56 = param_1[1] * fVar58 + auVar15._4_4_ * fVar32 + param_1[9] * fVar21;
  fVar57 = param_1[2] * fVar58 + auVar15._8_4_ * fVar32 + param_1[10] * fVar21;
  fVar58 = param_1[3] * fVar58 + auVar15._12_4_ * fVar32 + param_1[0xb] * fVar21;
  iVar6 = -(uint)(ABS(fVar55) < *(float *)puVar3);
  iVar11 = -(uint)(ABS(fVar56) < *(float *)(puVar3 + 4));
  iVar12 = -(uint)(ABS(fVar57) < *(float *)(puVar3 + 8));
  iVar13 = -(uint)(ABS(fVar58) < *(float *)(puVar3 + 0xc));
  bVar18 = (byte)_DAT_03889700;
  auVar51[0] = (byte)iVar6 & bVar18;
  bVar59 = (byte)((ulong)_DAT_03889700 >> 8);
  auVar51[1] = (byte)((uint)iVar6 >> 8) & bVar59;
  bVar60 = (byte)((ulong)_DAT_03889700 >> 0x10);
  auVar51[2] = (byte)((uint)iVar6 >> 0x10) & bVar60;
  bVar61 = (byte)((ulong)_DAT_03889700 >> 0x18);
  auVar51[3] = (byte)((uint)iVar6 >> 0x18) & bVar61;
  bVar62 = (byte)((ulong)_DAT_03889700 >> 0x20);
  auVar51[4] = (byte)iVar11 & bVar62;
  bVar63 = (byte)((ulong)_DAT_03889700 >> 0x28);
  auVar51[5] = (byte)((uint)iVar11 >> 8) & bVar63;
  bVar64 = (byte)((ulong)_DAT_03889700 >> 0x30);
  auVar51[6] = (byte)((uint)iVar11 >> 0x10) & bVar64;
  bVar65 = (byte)((ulong)_DAT_03889700 >> 0x38);
  auVar51[7] = (byte)((uint)iVar11 >> 0x18) & bVar65;
  bVar66 = (byte)_UNK_03889708;
  auVar51[8] = (byte)iVar12 & bVar66;
  bVar67 = (byte)((ulong)_UNK_03889708 >> 8);
  auVar51[9] = (byte)((uint)iVar12 >> 8) & bVar67;
  bVar68 = (byte)((ulong)_UNK_03889708 >> 0x10);
  auVar51[10] = (byte)((uint)iVar12 >> 0x10) & bVar68;
  bVar69 = (byte)((ulong)_UNK_03889708 >> 0x18);
  auVar51[0xb] = (byte)((uint)iVar12 >> 0x18) & bVar69;
  bVar70 = (byte)((ulong)_UNK_03889708 >> 0x20);
  auVar51[0xc] = (byte)iVar13 & bVar70;
  bVar71 = (byte)((ulong)_UNK_03889708 >> 0x28);
  auVar51[0xd] = (byte)((uint)iVar13 >> 8) & bVar71;
  bVar72 = (byte)((ulong)_UNK_03889708 >> 0x30);
  auVar51[0xe] = (byte)((uint)iVar13 >> 0x10) & bVar72;
  bVar73 = (byte)((ulong)_UNK_03889708 >> 0x38);
  auVar51[0xf] = (byte)((uint)iVar13 >> 0x18) & bVar73;
  auVar15 = NEON_ext(auVar51,auVar51,8,1);
  uVar7 = CONCAT13(auVar15[3] | auVar51[3],
                   CONCAT12(auVar15[2] | auVar51[2],
                            CONCAT11(auVar15[1] | auVar51[1],auVar15[0] | auVar51[0])));
  if (((*PTR_DAT_04388710 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04388710), puVar3 = PTR_DAT_04388718, iVar6 != 0)) {
    auVar10 = NEON_fmov(0xbf800000,4);
    *(long *)(PTR_DAT_04388718 + 8) = auVar10._8_8_;
    *(long *)puVar3 = auVar10._0_8_;
    __cxa_guard_release(PTR_DAT_04388710);
  }
  fVar32 = (float)uVar27;
  fVar21 = (float)((ulong)uVar27 >> 0x20);
  uVar29 = (undefined4)uVar31;
  auVar10._4_4_ = uVar29;
  auVar10._0_4_ = uVar29;
  auVar10._8_4_ = uVar29;
  auVar10._12_4_ = uVar29;
  if ((*PTR_DAT_04388720 & 1) == 0) {
    uVar27 = auVar10._8_8_;
    iVar6 = __cxa_guard_acquire(PTR_DAT_04388720);
    puVar3 = PTR_DAT_04388728;
    auVar10._8_8_ = uVar27;
    if (iVar6 != 0) {
      auVar10 = NEON_fmov(0x3f800000,4);
      *(long *)(PTR_DAT_04388728 + 8) = auVar10._8_8_;
      *(long *)puVar3 = auVar10._0_8_;
      __cxa_guard_release(PTR_DAT_04388720);
    }
  }
  uVar1 = 0xf >> (ulong)(4U - (int)param_1[0x3e] & 0x1f);
  fVar26 = *(float *)PTR_DAT_04388728 * (float)*(undefined8 *)(param_1 + 0xc) +
           *(float *)PTR_DAT_04388718 *
           (*param_1 * fVar32 + fVar21 * param_1[4] +
           auVar10._0_4_ * (float)*(undefined8 *)(param_1 + 8));
  fVar28 = *(float *)(PTR_DAT_04388728 + 4) * (float)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20)
           + *(float *)(PTR_DAT_04388718 + 4) *
             (param_1[1] * fVar32 + fVar21 * param_1[5] +
             auVar10._4_4_ * (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20));
  fVar30 = *(float *)(PTR_DAT_04388728 + 8) * (float)*(undefined8 *)(param_1 + 0xe) +
           *(float *)(PTR_DAT_04388718 + 8) *
           (param_1[2] * fVar32 + fVar21 * param_1[6] +
           auVar10._8_4_ * (float)*(undefined8 *)(param_1 + 10));
  fVar50 = *(float *)(PTR_DAT_04388728 + 0xc) *
           (float)((ulong)*(undefined8 *)(param_1 + 0xe) >> 0x20) +
           *(float *)(PTR_DAT_04388718 + 0xc) *
           (param_1[3] * fVar32 + fVar21 * param_1[7] +
           auVar10._12_4_ * (float)((ulong)*(undefined8 *)(param_1 + 10) >> 0x20));
  bVar33 = (char)((byte)((uint)(-fVar26 + fVar55 * *(float *)PTR_DAT_04388728) >> 0x18) ^
                 (byte)((uint)fVar26 >> 0x18)) >> 7;
  auVar9[0] = bVar33 & bVar18;
  auVar9[1] = bVar33 & bVar59;
  auVar9[2] = bVar33 & bVar60;
  auVar9[3] = bVar33 & bVar61;
  bVar33 = (char)((byte)((uint)(-fVar28 + fVar56 * *(float *)(PTR_DAT_04388728 + 4)) >> 0x18) ^
                 (byte)((uint)fVar28 >> 0x18)) >> 7;
  auVar9[4] = bVar33 & bVar62;
  auVar9[5] = bVar33 & bVar63;
  auVar9[6] = bVar33 & bVar64;
  auVar9[7] = bVar33 & bVar65;
  bVar33 = (char)((byte)((uint)(-fVar30 + fVar57 * *(float *)(PTR_DAT_04388728 + 8)) >> 0x18) ^
                 (byte)((uint)fVar30 >> 0x18)) >> 7;
  auVar9[8] = bVar33 & bVar66;
  auVar9[9] = bVar33 & bVar67;
  auVar9[10] = bVar33 & bVar68;
  auVar9[0xb] = bVar33 & bVar69;
  bVar33 = (char)((byte)((uint)(-fVar50 + fVar58 * *(float *)(PTR_DAT_04388728 + 0xc)) >> 0x18) ^
                 (byte)((uint)fVar50 >> 0x18)) >> 7;
  auVar9[0xc] = bVar33 & bVar70;
  auVar9[0xd] = bVar33 & bVar71;
  auVar9[0xe] = bVar33 & bVar72;
  auVar9[0xf] = bVar33 & bVar73;
  auVar16 = NEON_ext(auVar9,auVar9,8,1);
  uVar8 = CONCAT13(auVar16[3] | auVar9[3],
                   CONCAT12(auVar16[2] | auVar9[2],
                            CONCAT11(auVar16[1] | auVar9[1],auVar16[0] | auVar9[0])));
  uVar7 = uVar7 | (uint)(CONCAT17(auVar15[7] | auVar51[7],
                                  CONCAT16(auVar15[6] | auVar51[6],
                                           CONCAT15(auVar15[5] | auVar51[5],
                                                    CONCAT14(auVar15[4] | auVar51[4],uVar7)))) >>
                        0x20) |
          (uVar8 | (uint)(CONCAT17(auVar16[7] | auVar9[7],
                                   CONCAT16(auVar16[6] | auVar9[6],
                                            CONCAT15(auVar16[5] | auVar9[5],
                                                     CONCAT14(auVar16[4] | auVar9[4],uVar8)))) >>
                         0x20)) & uVar1;
  if (uVar7 != uVar1) {
    auVar15 = *(undefined1 (*) [16])(param_1 + 0x34);
    fVar14 = auVar15._0_4_;
    fVar22 = fVar55 * fVar32 + fVar26 * fVar14;
    fVar23 = fVar56 * fVar32 + fVar28 * fVar14;
    fVar24 = fVar57 * fVar32 + fVar30 * fVar14;
    fVar25 = fVar58 * fVar32 + fVar50 * fVar14;
    fVar32 = auVar15._4_4_;
    fVar14 = fVar55 * fVar21 + fVar26 * fVar32;
    fVar19 = fVar56 * fVar21 + fVar28 * fVar32;
    fVar20 = fVar57 * fVar21 + fVar30 * fVar32;
    fVar21 = fVar58 * fVar21 + fVar50 * fVar32;
    fVar32 = auVar15._8_4_;
    fVar26 = fVar55 * auVar10._0_4_ + fVar26 * fVar32;
    fVar28 = fVar56 * auVar10._4_4_ + fVar28 * fVar32;
    fVar30 = fVar57 * auVar10._8_4_ + fVar30 * fVar32;
    fVar32 = fVar58 * auVar10._12_4_ + fVar50 * fVar32;
    fVar50 = fVar22 * (float)*(undefined8 *)(param_1 + 0x10) + param_1[0x14] * fVar14 +
             (float)*(undefined8 *)(param_1 + 0x18) * fVar26 +
             fVar55 * (float)*(undefined8 *)(param_1 + 0x1c);
    fVar52 = fVar23 * (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
             param_1[0x15] * fVar19 +
             (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) * fVar28 +
             fVar56 * (float)((ulong)*(undefined8 *)(param_1 + 0x1c) >> 0x20);
    fVar53 = fVar24 * (float)*(undefined8 *)(param_1 + 0x12) + param_1[0x16] * fVar20 +
             (float)*(undefined8 *)(param_1 + 0x1a) * fVar30 +
             fVar57 * (float)*(undefined8 *)(param_1 + 0x1e);
    fVar54 = fVar25 * (float)((ulong)*(undefined8 *)(param_1 + 0x12) >> 0x20) +
             param_1[0x17] * fVar21 +
             (float)((ulong)*(undefined8 *)(param_1 + 0x1a) >> 0x20) * fVar32 +
             fVar58 * (float)((ulong)*(undefined8 *)(param_1 + 0x1e) >> 0x20);
    iVar6 = -(uint)(fVar50 == 0.0);
    iVar11 = -(uint)(fVar52 == 0.0);
    iVar12 = -(uint)(fVar53 == 0.0);
    iVar13 = -(uint)(fVar54 == 0.0);
    bVar33 = (byte)iVar6 & bVar18;
    bVar34 = (byte)((uint)iVar6 >> 8) & bVar59;
    bVar35 = (byte)((uint)iVar6 >> 0x10) & bVar60;
    bVar36 = (byte)((uint)iVar6 >> 0x18) & bVar61;
    bVar37 = (byte)iVar11 & bVar62;
    bVar38 = (byte)((uint)iVar11 >> 8) & bVar63;
    bVar39 = (byte)((uint)iVar11 >> 0x10) & bVar64;
    bVar40 = (byte)((uint)iVar11 >> 0x18) & bVar65;
    bVar41 = (byte)iVar12 & bVar66;
    bVar42 = (byte)((uint)iVar12 >> 8) & bVar67;
    bVar43 = (byte)((uint)iVar12 >> 0x10) & bVar68;
    bVar44 = (byte)((uint)iVar12 >> 0x18) & bVar69;
    bVar45 = (byte)iVar13 & bVar70;
    bVar46 = (byte)((uint)iVar13 >> 8) & bVar71;
    bVar47 = (byte)((uint)iVar13 >> 0x10) & bVar72;
    bVar48 = (byte)((uint)iVar13 >> 0x18) & bVar73;
    auVar16[1] = bVar34;
    auVar16[0] = bVar33;
    auVar16[2] = bVar35;
    auVar16[3] = bVar36;
    auVar16[4] = bVar37;
    auVar16[5] = bVar38;
    auVar16[6] = bVar39;
    auVar16[7] = bVar40;
    auVar16[8] = bVar41;
    auVar16[9] = bVar42;
    auVar16[10] = bVar43;
    auVar16[0xb] = bVar44;
    auVar16[0xc] = bVar45;
    auVar16[0xd] = bVar46;
    auVar16[0xe] = bVar47;
    auVar16[0xf] = bVar48;
    auVar2[1] = bVar34;
    auVar2[0] = bVar33;
    auVar2[2] = bVar35;
    auVar2[3] = bVar36;
    auVar2[4] = bVar37;
    auVar2[5] = bVar38;
    auVar2[6] = bVar39;
    auVar2[7] = bVar40;
    auVar2[8] = bVar41;
    auVar2[9] = bVar42;
    auVar2[10] = bVar43;
    auVar2[0xb] = bVar44;
    auVar2[0xc] = bVar45;
    auVar2[0xd] = bVar46;
    auVar2[0xe] = bVar47;
    auVar2[0xf] = bVar48;
    auVar15 = NEON_ext(auVar16,auVar2,8,1);
    bVar41 = (char)((byte)((uint)(fVar55 - fVar50) >> 0x18) ^ (byte)((uint)fVar50 >> 0x18)) >> 7;
    auVar49[0] = bVar41 & bVar18;
    auVar49[1] = bVar41 & bVar59;
    auVar49[2] = bVar41 & bVar60;
    auVar49[3] = bVar41 & bVar61;
    bVar41 = (char)((byte)((uint)(fVar56 - fVar52) >> 0x18) ^ (byte)((uint)fVar52 >> 0x18)) >> 7;
    auVar49[4] = bVar41 & bVar62;
    auVar49[5] = bVar41 & bVar63;
    auVar49[6] = bVar41 & bVar64;
    auVar49[7] = bVar41 & bVar65;
    bVar41 = (char)((byte)((uint)(fVar57 - fVar53) >> 0x18) ^ (byte)((uint)fVar53 >> 0x18)) >> 7;
    auVar49[8] = bVar41 & bVar66;
    auVar49[9] = bVar41 & bVar67;
    auVar49[10] = bVar41 & bVar68;
    auVar49[0xb] = bVar41 & bVar69;
    bVar41 = (char)((byte)((uint)(fVar58 - fVar54) >> 0x18) ^ (byte)((uint)fVar54 >> 0x18)) >> 7;
    auVar49[0xc] = bVar41 & bVar70;
    auVar49[0xd] = bVar41 & bVar71;
    auVar49[0xe] = bVar41 & bVar72;
    auVar49[0xf] = bVar41 & bVar73;
    auVar51 = NEON_ext(auVar49,auVar49,8,1);
    uVar8 = CONCAT13(auVar51[3] | auVar49[3],
                     CONCAT12(auVar51[2] | auVar49[2],
                              CONCAT11(auVar51[1] | auVar49[1],auVar51[0] | auVar49[0])));
    uVar7 = uVar1 & ((CONCAT13(auVar15[3] | bVar36,
                               CONCAT12(auVar15[2] | bVar35,
                                        CONCAT11(auVar15[1] | bVar34,auVar15[0] | bVar33))) |
                     CONCAT13(auVar15[7] | bVar40,
                              CONCAT12(auVar15[6] | bVar39,
                                       CONCAT11(auVar15[5] | bVar38,auVar15[4] | bVar37)))) ^
                    0xffffffff) &
            (uVar8 | (uint)(CONCAT17(auVar51[7] | auVar49[7],
                                     CONCAT16(auVar51[6] | auVar49[6],
                                              CONCAT15(auVar51[5] | auVar49[5],
                                                       CONCAT14(auVar51[4] | auVar49[4],uVar8)))) >>
                           0x20)) | uVar7;
    if (uVar7 != uVar1) {
      auVar15 = *(undefined1 (*) [16])(param_1 + 0x24);
      auVar51 = *(undefined1 (*) [16])(param_1 + 0x28);
      fVar26 = param_1[0x20] * fVar22 + fVar14 * auVar15._0_4_ + fVar26 * auVar51._0_4_ +
               fVar55 * (float)*(undefined8 *)(param_1 + 0x2c);
      fVar28 = param_1[0x21] * fVar23 + fVar19 * auVar15._4_4_ + fVar28 * auVar51._4_4_ +
               fVar56 * (float)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20);
      fVar30 = param_1[0x22] * fVar24 + fVar20 * auVar15._8_4_ + fVar30 * auVar51._8_4_ +
               fVar57 * (float)*(undefined8 *)(param_1 + 0x2e);
      fVar32 = param_1[0x23] * fVar25 + fVar21 * auVar15._12_4_ + fVar32 * auVar51._12_4_ +
               fVar58 * (float)((ulong)*(undefined8 *)(param_1 + 0x2e) >> 0x20);
      bVar33 = (char)((byte)((uint)((fVar55 - fVar50) - fVar26) >> 0x18) ^
                     (byte)((uint)fVar26 >> 0x18)) >> 7;
      auVar17[0] = bVar33 & bVar18;
      auVar17[1] = bVar33 & bVar59;
      auVar17[2] = bVar33 & bVar60;
      auVar17[3] = bVar33 & bVar61;
      bVar18 = (char)((byte)((uint)((fVar56 - fVar52) - fVar28) >> 0x18) ^
                     (byte)((uint)fVar28 >> 0x18)) >> 7;
      auVar17[4] = bVar18 & bVar62;
      auVar17[5] = bVar18 & bVar63;
      auVar17[6] = bVar18 & bVar64;
      auVar17[7] = bVar18 & bVar65;
      bVar18 = (char)((byte)((uint)((fVar57 - fVar53) - fVar30) >> 0x18) ^
                     (byte)((uint)fVar30 >> 0x18)) >> 7;
      auVar17[8] = bVar18 & bVar66;
      auVar17[9] = bVar18 & bVar67;
      auVar17[10] = bVar18 & bVar68;
      auVar17[0xb] = bVar18 & bVar69;
      bVar18 = (char)((byte)((uint)((fVar58 - fVar54) - fVar32) >> 0x18) ^
                     (byte)((uint)fVar32 >> 0x18)) >> 7;
      auVar17[0xc] = bVar18 & bVar70;
      auVar17[0xd] = bVar18 & bVar71;
      auVar17[0xe] = bVar18 & bVar72;
      auVar17[0xf] = bVar18 & bVar73;
      auVar15 = NEON_ext(auVar17,auVar17,8,1);
      uVar8 = CONCAT13(auVar15[3] | auVar17[3],
                       CONCAT12(auVar15[2] | auVar17[2],
                                CONCAT11(auVar15[1] | auVar17[1],auVar15[0] | auVar17[0])));
      uVar7 = (uVar8 | (uint)(CONCAT17(auVar15[7] | auVar17[7],
                                       CONCAT16(auVar15[6] | auVar17[6],
                                                CONCAT15(auVar15[5] | auVar17[5],
                                                         CONCAT14(auVar15[4] | auVar17[4],uVar8))))
                             >> 0x20)) & uVar1 | uVar7;
      if ((uVar7 != uVar1) &&
         (((((uVar1 = uVar1 & (uVar7 ^ 0xffffffff), (uVar1 & 1) != 0 &&
             ((*(long *)(param_1 + 0x40) == 0 ||
              (lVar4 = FUN_02e4e640(*(long *)(param_1 + 0x40),pfVar5,auStack_40), lVar4 == 0)))) ||
            (((uVar1 >> 1 & 1) != 0 &&
             ((*(long *)(param_1 + 0x42) == 0 ||
              (lVar4 = FUN_02e4e640(*(undefined1 (*) [16])(param_1 + 0x34),*(long *)(param_1 + 0x42)
                                    ,pfVar5,auStack_40), lVar4 == 0)))))) ||
           (((uVar1 >> 2 & 1) != 0 &&
            ((*(long *)(param_1 + 0x44) == 0 ||
             (lVar4 = FUN_02e4e640(*(undefined1 (*) [16])(param_1 + 0x34),*(long *)(param_1 + 0x44),
                                   pfVar5,auStack_40), lVar4 == 0)))))) ||
          (((uVar1 >> 3 & 1) != 0 &&
           ((*(long *)(param_1 + 0x46) == 0 ||
            (lVar4 = FUN_02e4e640(*(undefined1 (*) [16])(param_1 + 0x34),*(long *)(param_1 + 0x46),
                                  pfVar5,auStack_40), lVar4 == 0)))))))) {
        return 1;
      }
    }
  }
  return 0;
}


