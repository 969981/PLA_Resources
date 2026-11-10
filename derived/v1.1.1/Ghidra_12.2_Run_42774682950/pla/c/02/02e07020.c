/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e07020; name: FUN_02e07020
 */


void FUN_02e07020(float *param_1,int param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  float *pfVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar16;
  float fVar17;
  undefined1 auVar15 [16];
  float fVar18;
  float fVar19;
  undefined1 auVar20 [12];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  int iVar27;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar28;
  float fVar31;
  float fVar32;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar44;
  int iVar45;
  int iVar46;
  undefined1 auVar43 [16];
  
  if (param_2 << 1 != 0) {
    auVar11 = NEON_fmov(0xbf800000,4);
    auVar12 = NEON_fmov(0x3f800000,4);
    pfVar9 = param_1;
    do {
      pfVar10 = pfVar9 + 8;
      fVar5 = pfVar9[1];
      fVar6 = pfVar9[3];
      fVar14 = pfVar9[4];
      fVar7 = pfVar9[5];
      fVar8 = pfVar9[7];
      auVar21._4_4_ = pfVar9[2];
      auVar21._0_4_ = *pfVar9;
      auVar21._8_4_ = fVar14;
      auVar21._12_4_ = pfVar9[6];
      auVar29._0_4_ = -(uint)(1e-18 < ABS(*pfVar9));
      auVar29._4_4_ = -(uint)(1e-18 < ABS(pfVar9[2]));
      auVar29._8_4_ = -(uint)(1e-18 < ABS(fVar14));
      auVar29._12_4_ = -(uint)(1e-18 < ABS(pfVar9[6]));
      auVar15._8_4_ = 0x219392ef;
      auVar15._0_8_ = 0x219392ef219392ef;
      auVar15._12_4_ = 0x219392ef;
      auVar30._8_4_ = 0x219392ef;
      auVar30._0_8_ = 0x219392ef219392ef;
      auVar30._12_4_ = 0x219392ef;
      auVar30 = auVar30 ^ (auVar15 ^ auVar21) & auVar29;
      auVar22 = NEON_frecpe(auVar30,4);
      fVar28 = auVar30._0_4_;
      fVar31 = auVar30._4_4_;
      iVar44 = -(uint)(fVar31 < 0.0);
      fVar32 = auVar30._8_4_;
      iVar45 = -(uint)(fVar32 < 0.0);
      fVar33 = auVar30._12_4_;
      iVar46 = -(uint)(fVar33 < 0.0);
      auVar43._0_8_ =
           CONCAT17((char)((uint)iVar44 >> 0x18),
                    CONCAT16((char)((uint)iVar44 >> 0x10),
                             CONCAT15((char)((uint)iVar44 >> 8),
                                      CONCAT14((char)iVar44,-(uint)(fVar28 < 0.0))))) &
           0x40490fdb40490fdb;
      auVar43[8] = (byte)iVar45 & 0xdb;
      auVar43[9] = (byte)((uint)iVar45 >> 8) & 0xf;
      auVar43[10] = (byte)((uint)iVar45 >> 0x10) & 0x49;
      auVar43[0xb] = (byte)((uint)iVar45 >> 0x18) & 0x40;
      auVar43[0xc] = (byte)iVar46 & 0xdb;
      auVar43[0xd] = (byte)((uint)iVar46 >> 8) & 0xf;
      auVar43[0xe] = (byte)((uint)iVar46 >> 0x10) & 0x49;
      auVar43[0xf] = (byte)((uint)iVar46 >> 0x18) & 0x40;
      auVar15 = NEON_frecps(auVar30,auVar22,4);
      iVar39 = -(uint)(fVar5 < 0.0);
      iVar40 = -(uint)(fVar6 < 0.0);
      iVar41 = -(uint)(fVar7 < 0.0);
      iVar42 = -(uint)(fVar8 < 0.0);
      fVar14 = auVar22._0_4_ * fVar5 * auVar15._0_4_;
      fVar16 = auVar22._4_4_ * fVar6 * auVar15._4_4_;
      fVar17 = auVar22._8_4_ * fVar7 * auVar15._8_4_;
      fVar18 = auVar22._12_4_ * fVar8 * auVar15._12_4_;
      auVar37._0_8_ = CONCAT44(-(uint)(ABS(fVar16) <= 1.0),-(uint)(ABS(fVar14) <= 1.0));
      auVar37._8_4_ = -(uint)(ABS(fVar17) <= 1.0);
      auVar37._12_4_ = -(uint)(ABS(fVar18) <= 1.0);
      auVar1._8_4_ = 0x3e8f5c29;
      auVar1._0_8_ = 0x3e8f5c293e8f5c29;
      auVar1._12_4_ = 0x3e8f5c29;
      auVar3._8_4_ = 0x40649249;
      auVar3._0_8_ = 0x4064924940649249;
      auVar3._12_4_ = 0x40649249;
      auVar23._8_4_ = 0x3e8f5c29;
      auVar23._0_8_ = 0x3e8f5c293e8f5c29;
      auVar23._12_4_ = 0x3e8f5c29;
      auVar23 = auVar23 ^ (auVar1 ^ auVar3) & auVar37;
      auVar34._8_8_ = auVar37._8_8_;
      auVar34._0_8_ = auVar37._0_8_;
      auVar2._8_4_ = 0x3e8f5c29;
      auVar2._0_8_ = 0x3e8f5c293e8f5c29;
      auVar2._12_4_ = 0x3e8f5c29;
      auVar15 = auVar11 ^ (auVar11 ^ auVar2) & auVar34;
      auVar24._0_4_ = (auVar23._0_4_ + fVar14 * fVar14) * auVar15._0_4_;
      auVar24._4_4_ = (auVar23._4_4_ + fVar16 * fVar16) * auVar15._4_4_;
      auVar24._8_4_ = (auVar23._8_4_ + fVar17 * fVar17) * auVar15._8_4_;
      auVar24._12_4_ = (auVar23._12_4_ + fVar18 * fVar18) * auVar15._12_4_;
      auVar4._8_4_ = 0x3fc90fdb;
      auVar4._0_8_ = 0x3fc90fdb3fc90fdb;
      auVar4._12_4_ = 0x3fc90fdb;
      auVar38._8_4_ = 0x3fc90fdb;
      auVar38._0_8_ = 0x3fc90fdb3fc90fdb;
      auVar38._12_4_ = 0x3fc90fdb;
      auVar38 = auVar38 ^ (auVar4 ^ auVar43) & auVar37;
      auVar35._0_4_ = -(uint)(1e-18 < ABS(auVar24._0_4_));
      auVar35._4_4_ = -(uint)(1e-18 < ABS(auVar24._4_4_));
      auVar35._8_4_ = -(uint)(1e-18 < ABS(auVar24._8_4_));
      auVar35._12_4_ = -(uint)(1e-18 < ABS(auVar24._12_4_));
      auVar22._8_4_ = 0x219392ef;
      auVar22._0_8_ = 0x219392ef219392ef;
      auVar22._12_4_ = 0x219392ef;
      auVar36._8_4_ = 0x219392ef;
      auVar36._0_8_ = 0x219392ef219392ef;
      auVar36._12_4_ = 0x219392ef;
      auVar36 = auVar36 ^ (auVar22 ^ auVar24) & auVar35;
      iVar44 = -(uint)(0.0 <= fVar5);
      iVar45 = -(uint)(0.0 <= fVar6);
      iVar46 = -(uint)(0.0 <= fVar7);
      iVar27 = -(uint)(0.0 <= fVar8);
      auVar22 = NEON_frecpe(auVar36,4);
      fVar19 = (float)CONCAT13((byte)((uint)iVar39 >> 0x18) & auVar11[3] |
                               (byte)((uint)iVar44 >> 0x18) & auVar12[3],
                               CONCAT12((byte)((uint)iVar39 >> 0x10) & auVar11[2] |
                                        (byte)((uint)iVar44 >> 0x10) & auVar12[2],
                                        CONCAT11((byte)((uint)iVar39 >> 8) & auVar11[1] |
                                                 (byte)((uint)iVar44 >> 8) & auVar12[1],
                                                 (byte)iVar39 & auVar11[0] |
                                                 (byte)iVar44 & auVar12[0])));
      auVar20._0_8_ =
           CONCAT17((byte)((uint)iVar40 >> 0x18) & auVar11[7] |
                    (byte)((uint)iVar45 >> 0x18) & auVar12[7],
                    CONCAT16((byte)((uint)iVar40 >> 0x10) & auVar11[6] |
                             (byte)((uint)iVar45 >> 0x10) & auVar12[6],
                             CONCAT15((byte)((uint)iVar40 >> 8) & auVar11[5] |
                                      (byte)((uint)iVar45 >> 8) & auVar12[5],
                                      CONCAT14((byte)iVar40 & auVar11[4] | (byte)iVar45 & auVar12[4]
                                               ,fVar19))));
      auVar20[8] = (byte)iVar41 & auVar11[8] | (byte)iVar46 & auVar12[8];
      auVar20[9] = (byte)((uint)iVar41 >> 8) & auVar11[9] | (byte)((uint)iVar46 >> 8) & auVar12[9];
      auVar20[10] = (byte)((uint)iVar41 >> 0x10) & auVar11[10] |
                    (byte)((uint)iVar46 >> 0x10) & auVar12[10];
      auVar20[0xb] = (byte)((uint)iVar41 >> 0x18) & auVar11[0xb] |
                     (byte)((uint)iVar46 >> 0x18) & auVar12[0xb];
      auVar25[0xc] = (byte)iVar42 & auVar11[0xc] | (byte)iVar27 & auVar12[0xc];
      auVar25._0_12_ = auVar20;
      auVar25[0xd] = (byte)((uint)iVar42 >> 8) & auVar11[0xd] |
                     (byte)((uint)iVar27 >> 8) & auVar12[0xd];
      auVar25[0xe] = (byte)((uint)iVar42 >> 0x10) & auVar11[0xe] |
                     (byte)((uint)iVar27 >> 0x10) & auVar12[0xe];
      auVar25[0xf] = (byte)((uint)iVar42 >> 0x18) & auVar11[0xf] |
                     (byte)((uint)iVar27 >> 0x18) & auVar12[0xf];
      auVar13._0_4_ = fVar5 * fVar5 + fVar28 * fVar28;
      auVar13._4_4_ = fVar6 * fVar6 + fVar31 * fVar31;
      auVar13._8_4_ = fVar7 * fVar7 + fVar32 * fVar32;
      auVar13._12_4_ = fVar8 * fVar8 + fVar33 * fVar33;
      auVar30 = NEON_frecps(auVar36,auVar22,4);
      auVar15 = NEON_frsqrte(auVar13,4);
      auVar26._0_4_ = -(auVar38._0_4_ * fVar19 + auVar30._0_4_ * auVar22._0_4_ * fVar14);
      auVar26._4_4_ =
           -(auVar38._4_4_ * (float)((ulong)auVar20._0_8_ >> 0x20) +
            auVar30._4_4_ * auVar22._4_4_ * fVar16);
      auVar26._8_4_ = -(auVar38._8_4_ * auVar20._8_4_ + auVar30._8_4_ * auVar22._8_4_ * fVar17);
      auVar26._12_4_ = -(auVar38._12_4_ * auVar25._12_4_ + auVar30._12_4_ * auVar22._12_4_ * fVar18)
      ;
      auVar15 = NEON_frecpe(auVar15,4);
      auVar30 = NEON_ext(auVar15,auVar15,8,1);
      auVar22 = NEON_ext(auVar26,auVar26,8,1);
      *pfVar9 = auVar15._0_4_;
      pfVar9[1] = auVar26._0_4_;
      pfVar9[2] = auVar15._4_4_;
      pfVar9[3] = auVar26._4_4_;
      pfVar9[4] = auVar30._0_4_;
      pfVar9[5] = auVar22._0_4_;
      pfVar9[6] = auVar30._4_4_;
      pfVar9[7] = auVar22._4_4_;
      pfVar9 = pfVar10;
    } while (pfVar10 < param_1 + (uint)(param_2 << 1));
  }
  return;
}


