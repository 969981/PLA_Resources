/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e55b14; name: FUN_02e55b14
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02e55b14(float *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  float fVar5;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  byte bVar11;
  uint uVar12;
  float fVar13;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar14 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  byte bVar21;
  uint uVar22;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar35;
  byte bVar36;
  undefined4 uVar34;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar42;
  float fVar43;
  int iVar44;
  float fVar46;
  int iVar47;
  float fVar48;
  int iVar49;
  float fVar50;
  int iVar51;
  undefined1 auVar45 [16];
  uint uVar52;
  float fVar53;
  float fVar56;
  float fVar57;
  undefined1 auVar54 [16];
  float fVar58;
  undefined1 auVar55 [16];
  float fVar60;
  float fVar61;
  float fVar63;
  undefined1 auVar59 [16];
  undefined8 uVar62;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  
  fVar17 = *param_1;
  fVar42 = param_1[1];
  fVar66 = param_1[2];
  fVar67 = param_1[3];
  auVar54 = *(undefined1 (*) [16])(param_1 + 4);
  auVar18 = *(undefined1 (*) [16])(param_1 + 0x30);
  auVar59 = *(undefined1 (*) [16])(param_1 + 0x34);
  fVar5 = auVar59._0_4_;
  auVar20 = *(undefined1 (*) [16])(param_1 + 8);
  fVar8 = auVar59._4_4_;
  if (((DAT_04409d10 & 1) == 0) && (iVar44 = __cxa_guard_acquire(&DAT_04409d10), iVar44 != 0)) {
    auVar24 = NEON_fmov(0xbf800000,4);
    uRam0000000004409d08 = auVar24._8_8_;
    _DAT_04409d00 = auVar24._0_8_;
    __cxa_guard_release(&DAT_04409d10);
  }
  fVar9 = auVar59._8_4_;
  fVar64 = fVar17 * fVar5 + auVar54._0_4_ * fVar8 + auVar20._0_4_ * fVar9;
  fVar65 = fVar42 * fVar5 + auVar54._4_4_ * fVar8 + auVar20._4_4_ * fVar9;
  fVar66 = fVar66 * fVar5 + auVar54._8_4_ * fVar8 + auVar20._8_4_ * fVar9;
  fVar67 = fVar67 * fVar5 + auVar54._12_4_ * fVar8 + auVar20._12_4_ * fVar9;
  fVar17 = auVar18._0_4_;
  fVar42 = auVar18._4_4_;
  uVar34 = auVar18._8_4_;
  auVar54._0_8_ = CONCAT44(uVar34,uVar34);
  auVar54._8_4_ = uVar34;
  auVar54._12_4_ = uVar34;
  if ((DAT_04409d30 & 1) == 0) {
    uVar62 = auVar54._8_8_;
    iVar44 = __cxa_guard_acquire(&DAT_04409d30);
    auVar54._8_8_ = uVar62;
    if (iVar44 != 0) {
      auVar59 = NEON_fmov(0x3f800000,4);
      _DAT_04409d28 = auVar59._8_8_;
      _DAT_04409d20 = auVar59._0_8_;
      __cxa_guard_release(&DAT_04409d30);
    }
  }
  fVar5 = (float)_DAT_04409d20;
  fVar8 = (float)((ulong)_DAT_04409d20 >> 0x20);
  fVar9 = (float)_DAT_04409d28;
  fVar10 = (float)((ulong)_DAT_04409d28 >> 0x20);
  fVar43 = fVar5 * (float)*(undefined8 *)(param_1 + 0xc) +
           (float)_DAT_04409d00 *
           (*param_1 * fVar17 + fVar42 * param_1[4] + auVar54._0_4_ * param_1[8]);
  fVar46 = fVar8 * (float)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20) +
           (float)((ulong)_DAT_04409d00 >> 0x20) *
           (param_1[1] * fVar17 + fVar42 * param_1[5] + auVar54._4_4_ * param_1[9]);
  fVar48 = fVar9 * (float)*(undefined8 *)(param_1 + 0xe) +
           (float)uRam0000000004409d08 *
           (param_1[2] * fVar17 + fVar42 * param_1[6] + auVar54._8_4_ * param_1[10]);
  fVar50 = fVar10 * (float)((ulong)*(undefined8 *)(param_1 + 0xe) >> 0x20) +
           (float)((ulong)uRam0000000004409d08 >> 0x20) *
           (param_1[3] * fVar17 + fVar42 * param_1[7] + auVar54._12_4_ * param_1[0xb]);
  uVar1 = 0xf >> (ulong)(4U - (int)param_1[0x48] & 0x1f);
  bVar11 = (char)((byte)((uint)(-fVar43 + fVar64 * fVar5) >> 0x18) ^ (byte)((uint)fVar43 >> 0x18))
           >> 7;
  bVar21 = (byte)_DAT_03889700;
  auVar59[0] = bVar11 & bVar21;
  bVar26 = (byte)((ulong)_DAT_03889700 >> 8);
  auVar59[1] = bVar11 & bVar26;
  bVar27 = (byte)((ulong)_DAT_03889700 >> 0x10);
  auVar59[2] = bVar11 & bVar27;
  bVar28 = (byte)((ulong)_DAT_03889700 >> 0x18);
  auVar59[3] = bVar11 & bVar28;
  bVar11 = (char)((byte)((uint)(-fVar46 + fVar65 * fVar8) >> 0x18) ^ (byte)((uint)fVar46 >> 0x18))
           >> 7;
  bVar29 = (byte)((ulong)_DAT_03889700 >> 0x20);
  auVar59[4] = bVar11 & bVar29;
  bVar30 = (byte)((ulong)_DAT_03889700 >> 0x28);
  auVar59[5] = bVar11 & bVar30;
  bVar31 = (byte)((ulong)_DAT_03889700 >> 0x30);
  auVar59[6] = bVar11 & bVar31;
  bVar32 = (byte)((ulong)_DAT_03889700 >> 0x38);
  auVar59[7] = bVar11 & bVar32;
  bVar11 = (char)((byte)((uint)(-fVar48 + fVar66 * fVar9) >> 0x18) ^ (byte)((uint)fVar48 >> 0x18))
           >> 7;
  bVar33 = (byte)_UNK_03889708;
  auVar59[8] = bVar11 & bVar33;
  bVar35 = (byte)((ulong)_UNK_03889708 >> 8);
  auVar59[9] = bVar11 & bVar35;
  bVar36 = (byte)((ulong)_UNK_03889708 >> 0x10);
  auVar59[10] = bVar11 & bVar36;
  bVar37 = (byte)((ulong)_UNK_03889708 >> 0x18);
  auVar59[0xb] = bVar11 & bVar37;
  bVar11 = (char)((byte)((uint)(-fVar50 + fVar67 * fVar10) >> 0x18) ^ (byte)((uint)fVar50 >> 0x18))
           >> 7;
  bVar38 = (byte)((ulong)_UNK_03889708 >> 0x20);
  auVar59[0xc] = bVar11 & bVar38;
  bVar39 = (byte)((ulong)_UNK_03889708 >> 0x28);
  auVar59[0xd] = bVar11 & bVar39;
  bVar40 = (byte)((ulong)_UNK_03889708 >> 0x30);
  auVar59[0xe] = bVar11 & bVar40;
  bVar41 = (byte)((ulong)_UNK_03889708 >> 0x38);
  auVar59[0xf] = bVar11 & bVar41;
  auVar18 = NEON_ext(auVar59,auVar59,8,1);
  uVar12 = CONCAT13(auVar18[3] | auVar59[3],
                    CONCAT12(auVar18[2] | auVar59[2],
                             CONCAT11(auVar18[1] | auVar59[1],auVar18[0] | auVar59[0])));
  uVar12 = (uVar12 | (uint)(CONCAT17(auVar18[7] | auVar59[7],
                                     CONCAT16(auVar18[6] | auVar59[6],
                                              CONCAT15(auVar18[5] | auVar59[5],
                                                       CONCAT14(auVar18[4] | auVar59[4],uVar12))))
                           >> 0x20)) & uVar1;
  if (uVar12 != uVar1) {
    fVar60 = param_1[0x34];
    fVar61 = param_1[0x35];
    fVar63 = param_1[0x36];
    fVar13 = fVar64 * fVar17 + fVar43 * fVar60;
    fVar15 = fVar65 * fVar17 + fVar46 * fVar60;
    fVar16 = fVar66 * fVar17 + fVar48 * fVar60;
    fVar17 = fVar67 * fVar17 + fVar50 * fVar60;
    auVar18._0_4_ = fVar64 * fVar42 + fVar43 * fVar61;
    auVar18._4_4_ = fVar65 * fVar42 + fVar46 * fVar61;
    auVar18._8_4_ = fVar66 * fVar42 + fVar48 * fVar61;
    auVar18._12_4_ = fVar67 * fVar42 + fVar50 * fVar61;
    fVar42 = fVar64 * auVar54._0_4_ + fVar43 * fVar63;
    fVar43 = fVar65 * auVar54._4_4_ + fVar46 * fVar63;
    fVar46 = fVar66 * auVar54._8_4_ + fVar48 * fVar63;
    fVar48 = fVar67 * auVar54._12_4_ + fVar50 * fVar63;
    fVar50 = fVar13 * param_1[0x10] + param_1[0x14] * auVar18._0_4_ + param_1[0x18] * fVar42 +
             fVar64 * (float)*(undefined8 *)(param_1 + 0x1c);
    fVar60 = fVar15 * param_1[0x11] + param_1[0x15] * auVar18._4_4_ + param_1[0x19] * fVar43 +
             fVar65 * (float)((ulong)*(undefined8 *)(param_1 + 0x1c) >> 0x20);
    fVar61 = fVar16 * param_1[0x12] + param_1[0x16] * auVar18._8_4_ + param_1[0x1a] * fVar46 +
             fVar66 * (float)*(undefined8 *)(param_1 + 0x1e);
    fVar63 = fVar17 * param_1[0x13] + param_1[0x17] * auVar18._12_4_ + param_1[0x1b] * fVar48 +
             fVar67 * (float)((ulong)*(undefined8 *)(param_1 + 0x1e) >> 0x20);
    iVar44 = -(uint)(fVar50 == 0.0);
    iVar47 = -(uint)(fVar60 == 0.0);
    iVar49 = -(uint)(fVar61 == 0.0);
    iVar51 = -(uint)(fVar63 == 0.0);
    auVar20[0] = (byte)iVar44 & bVar21;
    auVar20[1] = (byte)((uint)iVar44 >> 8) & bVar26;
    auVar20[2] = (byte)((uint)iVar44 >> 0x10) & bVar27;
    auVar20[3] = (byte)((uint)iVar44 >> 0x18) & bVar28;
    auVar20[4] = (byte)iVar47 & bVar29;
    auVar20[5] = (byte)((uint)iVar47 >> 8) & bVar30;
    auVar20[6] = (byte)((uint)iVar47 >> 0x10) & bVar31;
    auVar20[7] = (byte)((uint)iVar47 >> 0x18) & bVar32;
    auVar20[8] = (byte)iVar49 & bVar33;
    auVar20[9] = (byte)((uint)iVar49 >> 8) & bVar35;
    auVar20[10] = (byte)((uint)iVar49 >> 0x10) & bVar36;
    auVar20[0xb] = (byte)((uint)iVar49 >> 0x18) & bVar37;
    auVar20[0xc] = (byte)iVar51 & bVar38;
    auVar20[0xd] = (byte)((uint)iVar51 >> 8) & bVar39;
    auVar20[0xe] = (byte)((uint)iVar51 >> 0x10) & bVar40;
    auVar20[0xf] = (byte)((uint)iVar51 >> 0x18) & bVar41;
    auVar54 = NEON_ext(auVar20,auVar20,8,1);
    uVar22 = CONCAT13(auVar54[3] | auVar20[3],
                      CONCAT12(auVar54[2] | auVar20[2],
                               CONCAT11(auVar54[1] | auVar20[1],auVar54[0] | auVar20[0])));
    bVar11 = (char)((byte)((uint)(fVar64 - fVar50) >> 0x18) ^ (byte)((uint)fVar50 >> 0x18)) >> 7;
    auVar24[0] = bVar11 & bVar21;
    auVar24[1] = bVar11 & bVar26;
    auVar24[2] = bVar11 & bVar27;
    auVar24[3] = bVar11 & bVar28;
    bVar11 = (char)((byte)((uint)(fVar65 - fVar60) >> 0x18) ^ (byte)((uint)fVar60 >> 0x18)) >> 7;
    auVar24[4] = bVar11 & bVar29;
    auVar24[5] = bVar11 & bVar30;
    auVar24[6] = bVar11 & bVar31;
    auVar24[7] = bVar11 & bVar32;
    bVar11 = (char)((byte)((uint)(fVar66 - fVar61) >> 0x18) ^ (byte)((uint)fVar61 >> 0x18)) >> 7;
    auVar24[8] = bVar11 & bVar33;
    auVar24[9] = bVar11 & bVar35;
    auVar24[10] = bVar11 & bVar36;
    auVar24[0xb] = bVar11 & bVar37;
    bVar11 = (char)((byte)((uint)(fVar67 - fVar63) >> 0x18) ^ (byte)((uint)fVar63 >> 0x18)) >> 7;
    auVar24[0xc] = bVar11 & bVar38;
    auVar24[0xd] = bVar11 & bVar39;
    auVar24[0xe] = bVar11 & bVar40;
    auVar24[0xf] = bVar11 & bVar41;
    auVar59 = NEON_ext(auVar24,auVar24,8,1);
    uVar52 = CONCAT13(auVar59[3] | auVar24[3],
                      CONCAT12(auVar59[2] | auVar24[2],
                               CONCAT11(auVar59[1] | auVar24[1],auVar59[0] | auVar24[0])));
    uVar12 = uVar1 & ((uVar22 | (uint)(CONCAT17(auVar54[7] | auVar20[7],
                                                CONCAT16(auVar54[6] | auVar20[6],
                                                         CONCAT15(auVar54[5] | auVar20[5],
                                                                  CONCAT14(auVar54[4] | auVar20[4],
                                                                           uVar22)))) >> 0x20)) ^
                     0xffffffff) &
             (uVar52 | (uint)(CONCAT17(auVar59[7] | auVar24[7],
                                       CONCAT16(auVar59[6] | auVar24[6],
                                                CONCAT15(auVar59[5] | auVar24[5],
                                                         CONCAT14(auVar59[4] | auVar24[4],uVar52))))
                             >> 0x20)) | uVar12;
    if (uVar12 != uVar1) {
      fVar53 = param_1[0x20] * fVar13 + auVar18._0_4_ * param_1[0x24] +
               fVar42 * (float)*(undefined8 *)(param_1 + 0x28) +
               fVar64 * (float)*(undefined8 *)(param_1 + 0x2c);
      fVar56 = param_1[0x21] * fVar15 + auVar18._4_4_ * param_1[0x25] +
               fVar43 * (float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) +
               fVar65 * (float)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20);
      fVar57 = param_1[0x22] * fVar16 + auVar18._8_4_ * param_1[0x26] +
               fVar46 * (float)*(undefined8 *)(param_1 + 0x2a) +
               fVar66 * (float)*(undefined8 *)(param_1 + 0x2e);
      fVar58 = param_1[0x23] * fVar17 + auVar18._12_4_ * param_1[0x27] +
               fVar48 * (float)((ulong)*(undefined8 *)(param_1 + 0x2a) >> 0x20) +
               fVar67 * (float)((ulong)*(undefined8 *)(param_1 + 0x2e) >> 0x20);
      bVar11 = (char)((byte)((uint)((fVar64 - fVar50) - fVar53) >> 0x18) ^
                     (byte)((uint)fVar53 >> 0x18)) >> 7;
      auVar23[0] = bVar11 & bVar21;
      auVar23[1] = bVar11 & bVar26;
      auVar23[2] = bVar11 & bVar27;
      auVar23[3] = bVar11 & bVar28;
      bVar11 = (char)((byte)((uint)((fVar65 - fVar60) - fVar56) >> 0x18) ^
                     (byte)((uint)fVar56 >> 0x18)) >> 7;
      auVar23[4] = bVar11 & bVar29;
      auVar23[5] = bVar11 & bVar30;
      auVar23[6] = bVar11 & bVar31;
      auVar23[7] = bVar11 & bVar32;
      bVar11 = (char)((byte)((uint)((fVar66 - fVar61) - fVar57) >> 0x18) ^
                     (byte)((uint)fVar57 >> 0x18)) >> 7;
      auVar23[8] = bVar11 & bVar33;
      auVar23[9] = bVar11 & bVar35;
      auVar23[10] = bVar11 & bVar36;
      auVar23[0xb] = bVar11 & bVar37;
      bVar11 = (char)((byte)((uint)((fVar67 - fVar63) - fVar58) >> 0x18) ^
                     (byte)((uint)fVar58 >> 0x18)) >> 7;
      auVar23[0xc] = bVar11 & bVar38;
      auVar23[0xd] = bVar11 & bVar39;
      auVar23[0xe] = bVar11 & bVar40;
      auVar23[0xf] = bVar11 & bVar41;
      auVar54 = NEON_ext(auVar23,auVar23,8,1);
      uVar22 = CONCAT13(auVar54[3] | auVar23[3],
                        CONCAT12(auVar54[2] | auVar23[2],
                                 CONCAT11(auVar54[1] | auVar23[1],auVar54[0] | auVar23[0])));
      uVar12 = (uVar22 | (uint)(CONCAT17(auVar54[7] | auVar23[7],
                                         CONCAT16(auVar54[6] | auVar23[6],
                                                  CONCAT15(auVar54[5] | auVar23[5],
                                                           CONCAT14(auVar54[4] | auVar23[4],uVar22))
                                                 )) >> 0x20)) & uVar1 | uVar12;
      if (uVar12 != uVar1) {
        auVar2._4_4_ = fVar65;
        auVar2._0_4_ = fVar64;
        auVar2._8_4_ = fVar66;
        auVar2._12_4_ = fVar67;
        auVar54 = NEON_frecpe(auVar2,4);
        uVar1 = uVar1 & (uVar12 ^ 0xffffffff);
        auVar3._4_4_ = fVar65;
        auVar3._0_4_ = fVar64;
        auVar3._8_4_ = fVar66;
        auVar3._12_4_ = fVar67;
        auVar59 = NEON_frecps(auVar3,auVar54,4);
        lVar4 = 0xe0;
        auVar7._0_4_ = auVar54._0_4_ * fVar5 * auVar59._0_4_;
        auVar7._4_4_ = auVar54._4_4_ * fVar8 * auVar59._4_4_;
        auVar7._8_4_ = auVar54._8_4_ * fVar9 * auVar59._8_4_;
        auVar7._12_4_ = auVar54._12_4_ * fVar10 * auVar59._12_4_;
        auVar55._0_4_ = auVar7._0_4_ * fVar13;
        auVar55._4_4_ = auVar7._4_4_ * fVar15;
        auVar55._8_4_ = auVar7._8_4_ * fVar16;
        auVar55._12_4_ = auVar7._12_4_ * fVar17;
        auVar45._0_4_ = auVar7._0_4_ * auVar18._0_4_;
        auVar45._4_4_ = auVar7._4_4_ * auVar18._4_4_;
        auVar45._8_4_ = auVar7._8_4_ * auVar18._8_4_;
        auVar45._12_4_ = auVar7._12_4_ * auVar18._12_4_;
        auVar25._0_4_ = auVar7._0_4_ * fVar42;
        auVar25._4_4_ = auVar7._4_4_ * fVar43;
        auVar25._8_4_ = auVar7._8_4_ * fVar46;
        auVar25._12_4_ = auVar7._12_4_ * fVar48;
        while( true ) {
          if ((uVar1 & 1) != 0) {
            DAT_04409d24 = (undefined4)((ulong)_DAT_04409d20 >> 0x20);
            auVar19._8_8_ = auVar18._8_8_;
            DAT_04409d2c = (undefined4)((ulong)_DAT_04409d28 >> 0x20);
            auVar19._4_4_ = DAT_04409d2c;
            auVar19._0_4_ = DAT_04409d24;
            auVar6._4_4_ = auVar45._0_4_;
            auVar6._0_4_ = auVar55._0_4_;
            auVar14._0_8_ = CONCAT44(DAT_04409d20,auVar25._0_4_);
            auVar14._8_8_ = 0;
            auVar6._8_8_ = auVar14._0_8_;
            auVar7 = FUN_02e55e00(auVar6,auVar14,auVar19,param_1,
                                  *(undefined8 *)((long)param_1 + lVar4));
          }
          uVar1 = uVar1 >> 1;
          if (uVar1 == 0) break;
          auVar54 = NEON_ext(auVar7,auVar55,0xc,1);
          auVar59 = NEON_ext(auVar55,auVar55,0xc,1);
          lVar4 = lVar4 + 8;
          auVar54 = NEON_ext(auVar54,auVar54,8,1);
          auVar7._0_8_ = auVar54._0_8_;
          auVar7._8_8_ = auVar59._0_8_;
          auVar54 = NEON_ext(auVar7,auVar45,0xc,1);
          auVar20 = NEON_ext(auVar45,auVar45,0xc,1);
          auVar55._8_8_ = auVar59._0_8_;
          auVar55._0_8_ = auVar7._0_8_;
          auVar54 = NEON_ext(auVar54,auVar54,8,1);
          auVar59 = NEON_ext(auVar7,auVar25,0xc,1);
          auVar24 = NEON_ext(auVar25,auVar25,0xc,1);
          auVar59 = NEON_ext(auVar59,auVar59,8,1);
          auVar18._0_8_ = auVar59._0_8_;
          auVar18._8_8_ = auVar24._0_8_;
          auVar45._8_8_ = auVar20._0_8_;
          auVar45._0_8_ = auVar54._0_8_;
          auVar25._8_8_ = auVar24._0_8_;
          auVar25._0_8_ = auVar18._0_8_;
        }
      }
    }
  }
  return;
}


