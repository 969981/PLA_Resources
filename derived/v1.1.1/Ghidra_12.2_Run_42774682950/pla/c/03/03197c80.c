/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03197c80; name: FUN_03197c80
 */


undefined8 FUN_03197c80(float *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  float fVar3;
  int iVar5;
  undefined8 uVar4;
  float fVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar22;
  undefined8 uVar21;
  int iVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int iVar29;
  float fVar30;
  int iVar31;
  float fVar32;
  int iVar33;
  float fVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined1 auVar37 [12];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar45;
  undefined1 auVar41 [12];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined8 uVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined8 uVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  
  fVar11 = *param_1;
  fVar13 = param_1[1];
  fVar15 = param_1[2];
  fVar14 = (float)*(undefined8 *)(param_1 + 6);
  fVar16 = (float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  fVar17 = (float)*(undefined8 *)(param_1 + 4);
  fVar12 = (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  uVar52 = param_2[1];
  uVar46 = *param_2;
  fVar25 = (float)uVar46;
  iVar18 = -(uint)(fVar25 <= fVar17);
  fVar26 = (float)((ulong)uVar46 >> 0x20);
  iVar22 = -(uint)(fVar26 <= fVar12);
  fVar27 = (float)uVar52;
  iVar23 = -(uint)(fVar27 <= fVar14);
  iVar2 = -(uint)(fVar11 <= fVar25);
  iVar5 = -(uint)(fVar13 <= fVar26);
  iVar7 = -(uint)(fVar15 <= fVar27);
  uVar19 = CONCAT13((byte)((uint)iVar18 >> 0x18) & (byte)((uint)iVar2 >> 0x18),
                    CONCAT12((byte)((uint)iVar18 >> 0x10) & (byte)((uint)iVar2 >> 0x10),
                             CONCAT11((byte)((uint)iVar18 >> 8) & (byte)((uint)iVar2 >> 8),
                                      (byte)iVar18 & (byte)iVar2)));
  uVar35 = param_3[1];
  uVar4 = *param_3;
  fVar3 = (float)uVar4;
  iVar29 = -(uint)(fVar11 <= fVar3);
  fVar6 = (float)((ulong)uVar4 >> 0x20);
  iVar31 = -(uint)(fVar13 <= fVar6);
  fVar8 = (float)uVar35;
  iVar33 = -(uint)(fVar15 <= fVar8);
  iVar2 = -(uint)(fVar3 <= fVar17);
  iVar18 = -(uint)(fVar6 <= fVar12);
  iVar24 = -(uint)(fVar8 <= fVar14);
  uVar20 = CONCAT13((byte)((uint)iVar2 >> 0x18) & (byte)((uint)iVar29 >> 0x18),
                    CONCAT12((byte)((uint)iVar2 >> 0x10) & (byte)((uint)iVar29 >> 0x10),
                             CONCAT11((byte)((uint)iVar2 >> 8) & (byte)((uint)iVar29 >> 8),
                                      (byte)iVar2 & (byte)iVar29)));
  uVar19 = uVar19 & (uint)(CONCAT17((byte)((uint)iVar22 >> 0x18) & (byte)((uint)iVar5 >> 0x18),
                                    CONCAT16((byte)((uint)iVar22 >> 0x10) &
                                             (byte)((uint)iVar5 >> 0x10),
                                             CONCAT15((byte)((uint)iVar22 >> 8) &
                                                      (byte)((uint)iVar5 >> 8),
                                                      CONCAT14((byte)iVar22 & (byte)iVar5,uVar19))))
                          >> 0x20) &
           CONCAT13((byte)((uint)iVar23 >> 0x18) & (byte)((uint)iVar7 >> 0x18),
                    CONCAT12((byte)((uint)iVar23 >> 0x10) & (byte)((uint)iVar7 >> 0x10),
                             CONCAT11((byte)((uint)iVar23 >> 8) & (byte)((uint)iVar7 >> 8),
                                      (byte)iVar23 & (byte)iVar7)));
  uVar20 = uVar20 & (uint)(CONCAT17((byte)((uint)iVar18 >> 0x18) & (byte)((uint)iVar31 >> 0x18),
                                    CONCAT16((byte)((uint)iVar18 >> 0x10) &
                                             (byte)((uint)iVar31 >> 0x10),
                                             CONCAT15((byte)((uint)iVar18 >> 8) &
                                                      (byte)((uint)iVar31 >> 8),
                                                      CONCAT14((byte)iVar18 & (byte)iVar31,uVar20)))
                                   ) >> 0x20) &
           CONCAT13((byte)((uint)iVar24 >> 0x18) & (byte)((uint)iVar33 >> 0x18),
                    CONCAT12((byte)((uint)iVar24 >> 0x10) & (byte)((uint)iVar33 >> 0x10),
                             CONCAT11((byte)((uint)iVar24 >> 8) & (byte)((uint)iVar33 >> 8),
                                      (byte)iVar24 & (byte)iVar33)));
  if (uVar19 != 0 && uVar20 != 0) {
    return 1;
  }
  auVar50 = ZEXT816(0x3f800000);
  uVar21 = NEON_fmov(0x3f800000,4);
  fVar9 = (float)((ulong)uVar35 >> 0x20);
  fVar28 = (float)((ulong)uVar52 >> 0x20);
  if (uVar19 == 0) {
    fVar30 = fVar3 - fVar25;
    fVar32 = fVar6 - fVar26;
    fVar34 = fVar8 - fVar27;
    iVar2 = -(uint)(fVar30 == 0.0);
    iVar5 = -(uint)(fVar32 == 0.0);
    iVar7 = -(uint)(fVar34 == 0.0);
    iVar18 = -(uint)(auVar50._0_4_ == 0.0);
    fVar40 = (float)CONCAT13((byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar2 >> 0x18),
                             CONCAT12((byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar2 >> 0x10),
                                      CONCAT11((byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar2 >> 8)
                                               ,SUB41(fVar30,0) & ~(byte)iVar2)));
    auVar41._0_8_ =
         CONCAT17((byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18),
                  CONCAT16((byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar5 >> 0x10),
                           CONCAT15((byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar5 >> 8),
                                    CONCAT14(SUB41(fVar32,0) & ~(byte)iVar5,fVar40))));
    auVar41[8] = SUB41(fVar34,0) & ~(byte)iVar7;
    auVar41[9] = (byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar7 >> 8);
    auVar41[10] = (byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar7 >> 0x10);
    auVar41[0xb] = (byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18);
    auVar42._12_2_ = 0;
    auVar42._0_12_ = auVar41;
    auVar42[0xe] = auVar50[2] & ~(byte)((uint)iVar18 >> 0x10);
    auVar42[0xf] = auVar50[3] & ~(byte)((uint)iVar18 >> 0x18);
    auVar53 = NEON_frecpe(auVar42,4);
    iVar2 = -(uint)(fVar40 == 0.0);
    iVar5 = -(uint)((float)((ulong)auVar41._0_8_ >> 0x20) == 0.0);
    iVar7 = -(uint)(auVar41._8_4_ == 0.0);
    iVar18 = -(uint)(auVar42._12_4_ == 0.0);
    auVar47[0] = ~(byte)iVar2;
    auVar47[1] = ~(byte)((uint)iVar2 >> 8);
    auVar47[2] = ~(byte)((uint)iVar2 >> 0x10);
    auVar47[3] = ~(byte)((uint)iVar2 >> 0x18);
    auVar47[4] = ~(byte)iVar5;
    auVar47[5] = ~(byte)((uint)iVar5 >> 8);
    auVar47[6] = ~(byte)((uint)iVar5 >> 0x10);
    auVar47[7] = ~(byte)((uint)iVar5 >> 0x18);
    auVar47[8] = ~(byte)iVar7;
    auVar47[9] = ~(byte)((uint)iVar7 >> 8);
    auVar47[10] = ~(byte)((uint)iVar7 >> 0x10);
    auVar47[0xb] = ~(byte)((uint)iVar7 >> 0x18);
    auVar47[0xc] = ~(byte)iVar18;
    auVar47[0xd] = ~(byte)((uint)iVar18 >> 8);
    auVar47[0xe] = ~(byte)((uint)iVar18 >> 0x10);
    auVar47[0xf] = ~(byte)((uint)iVar18 >> 0x18);
    auVar55 = NEON_frecps(auVar42,auVar53,4);
    auVar54._0_4_ = auVar53._0_4_ * auVar55._0_4_;
    auVar54._4_4_ = auVar53._4_4_ * auVar55._4_4_;
    auVar54._8_4_ = auVar53._8_4_ * auVar55._8_4_;
    auVar54._12_4_ = auVar53._12_4_ * auVar55._12_4_;
    auVar42 = NEON_frecps(auVar42,auVar54,4);
    auVar53._0_4_ = auVar54._0_4_ * auVar42._0_4_;
    auVar53._4_4_ = auVar54._4_4_ * auVar42._4_4_;
    auVar53._8_4_ = auVar54._8_4_ * auVar42._8_4_;
    auVar53._12_4_ = auVar54._12_4_ * auVar42._12_4_;
    auVar48._8_4_ = 0x7f7fffee;
    auVar48._0_8_ = 0x7f7fffee7f7fffee;
    auVar48._12_4_ = 0x7f7fffee;
    auVar48 = auVar48 ^ (auVar48 ^ auVar53) & auVar47;
    auVar55._0_4_ = (fVar11 - fVar25) * auVar48._0_4_;
    auVar55._4_4_ = (fVar13 - fVar26) * auVar48._4_4_;
    auVar55._8_4_ = (fVar15 - fVar27) * auVar48._8_4_;
    auVar55._12_4_ = (param_1[3] - fVar28) * auVar48._12_4_;
    auVar49._0_4_ = (fVar17 - fVar25) * auVar48._0_4_;
    auVar49._4_4_ = (fVar12 - fVar26) * auVar48._4_4_;
    auVar49._8_4_ = (fVar14 - fVar27) * auVar48._8_4_;
    auVar49._12_4_ = (fVar16 - fVar28) * auVar48._12_4_;
    auVar53 = NEON_fmin(auVar55,auVar49,4);
    auVar42 = NEON_fmax(auVar55,auVar49,4);
    uVar46 = NEON_fmaxp(auVar53._0_8_,auVar53._0_8_,4);
    uVar46 = NEON_fmax(CONCAT44(auVar53._8_4_,auVar53._8_4_),uVar46,4);
    uVar52 = NEON_fminp(auVar42._0_8_,auVar42._0_8_,4);
    uVar52 = NEON_fmin(CONCAT44(auVar42._8_4_,auVar42._8_4_),uVar52,4);
    uVar46 = NEON_fmax(uVar46,0,4);
    uVar52 = NEON_fmin(uVar52,uVar21,4);
    fVar40 = (float)uVar46;
    if ((float)uVar52 < fVar40) {
      return 0;
    }
    fVar45 = (float)((ulong)uVar46 >> 0x20);
    uVar46 = CONCAT44(fVar26 + fVar32 * fVar45,fVar25 + fVar30 * fVar40);
    uVar52 = CONCAT44(fVar28 + (fVar9 - fVar28) * fVar45,fVar27 + fVar34 * fVar40);
  }
  if (uVar20 == 0) {
    fVar25 = fVar25 - fVar3;
    fVar26 = fVar26 - fVar6;
    fVar27 = fVar27 - fVar8;
    iVar2 = -(uint)(fVar25 == 0.0);
    iVar5 = -(uint)(fVar26 == 0.0);
    iVar7 = -(uint)(fVar27 == 0.0);
    iVar18 = -(uint)(auVar50._0_4_ == 0.0);
    fVar30 = (float)CONCAT13((byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar2 >> 0x18),
                             CONCAT12((byte)((uint)fVar25 >> 0x10) & ~(byte)((uint)iVar2 >> 0x10),
                                      CONCAT11((byte)((uint)fVar25 >> 8) & ~(byte)((uint)iVar2 >> 8)
                                               ,SUB41(fVar25,0) & ~(byte)iVar2)));
    auVar37._0_8_ =
         CONCAT17((byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18),
                  CONCAT16((byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar5 >> 0x10),
                           CONCAT15((byte)((uint)fVar26 >> 8) & ~(byte)((uint)iVar5 >> 8),
                                    CONCAT14(SUB41(fVar26,0) & ~(byte)iVar5,fVar30))));
    auVar37[8] = SUB41(fVar27,0) & ~(byte)iVar7;
    auVar37[9] = (byte)((uint)fVar27 >> 8) & ~(byte)((uint)iVar7 >> 8);
    auVar37[10] = (byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar7 >> 0x10);
    auVar37[0xb] = (byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18);
    auVar38._12_2_ = 0;
    auVar38._0_12_ = auVar37;
    auVar38[0xe] = auVar50[2] & ~(byte)((uint)iVar18 >> 0x10);
    auVar38[0xf] = auVar50[3] & ~(byte)((uint)iVar18 >> 0x18);
    auVar50 = NEON_frecpe(auVar38,4);
    iVar2 = -(uint)(fVar30 == 0.0);
    iVar5 = -(uint)((float)((ulong)auVar37._0_8_ >> 0x20) == 0.0);
    iVar7 = -(uint)(auVar37._8_4_ == 0.0);
    iVar18 = -(uint)(auVar38._12_4_ == 0.0);
    auVar43[0] = ~(byte)iVar2;
    auVar43[1] = ~(byte)((uint)iVar2 >> 8);
    auVar43[2] = ~(byte)((uint)iVar2 >> 0x10);
    auVar43[3] = ~(byte)((uint)iVar2 >> 0x18);
    auVar43[4] = ~(byte)iVar5;
    auVar43[5] = ~(byte)((uint)iVar5 >> 8);
    auVar43[6] = ~(byte)((uint)iVar5 >> 0x10);
    auVar43[7] = ~(byte)((uint)iVar5 >> 0x18);
    auVar43[8] = ~(byte)iVar7;
    auVar43[9] = ~(byte)((uint)iVar7 >> 8);
    auVar43[10] = ~(byte)((uint)iVar7 >> 0x10);
    auVar43[0xb] = ~(byte)((uint)iVar7 >> 0x18);
    auVar43[0xc] = ~(byte)iVar18;
    auVar43[0xd] = ~(byte)((uint)iVar18 >> 8);
    auVar43[0xe] = ~(byte)((uint)iVar18 >> 0x10);
    auVar43[0xf] = ~(byte)((uint)iVar18 >> 0x18);
    auVar42 = NEON_frecps(auVar38,auVar50,4);
    auVar51._0_4_ = auVar50._0_4_ * auVar42._0_4_;
    auVar51._4_4_ = auVar50._4_4_ * auVar42._4_4_;
    auVar51._8_4_ = auVar50._8_4_ * auVar42._8_4_;
    auVar51._12_4_ = auVar50._12_4_ * auVar42._12_4_;
    auVar50 = NEON_frecps(auVar38,auVar51,4);
    auVar39._0_4_ = auVar51._0_4_ * auVar50._0_4_;
    auVar39._4_4_ = auVar51._4_4_ * auVar50._4_4_;
    auVar39._8_4_ = auVar51._8_4_ * auVar50._8_4_;
    auVar39._12_4_ = auVar51._12_4_ * auVar50._12_4_;
    auVar44._8_4_ = 0x7f7fffee;
    auVar44._0_8_ = 0x7f7fffee7f7fffee;
    auVar44._12_4_ = 0x7f7fffee;
    auVar44 = auVar44 ^ (auVar44 ^ auVar39) & auVar43;
    auVar10._0_4_ = (fVar11 - fVar3) * auVar44._0_4_;
    auVar10._4_4_ = (fVar13 - fVar6) * auVar44._4_4_;
    auVar10._8_4_ = (fVar15 - fVar8) * auVar44._8_4_;
    auVar10._12_4_ = (param_1[3] - fVar9) * auVar44._12_4_;
    fVar11 = (fVar17 - fVar3) * auVar44._0_4_;
    fVar13 = (fVar12 - fVar6) * auVar44._4_4_;
    fVar15 = (fVar14 - fVar8) * auVar44._8_4_;
    fVar17 = (fVar16 - fVar9) * auVar44._12_4_;
    auVar50._4_4_ = fVar13;
    auVar50._0_4_ = fVar11;
    auVar50._8_4_ = fVar15;
    auVar50._12_4_ = fVar17;
    auVar42 = NEON_fmin(auVar10,auVar50,4);
    auVar1._4_4_ = fVar13;
    auVar1._0_4_ = fVar11;
    auVar1._8_4_ = fVar15;
    auVar1._12_4_ = fVar17;
    auVar50 = NEON_fmax(auVar10,auVar1,4);
    uVar4 = NEON_fmaxp(auVar42._0_8_,auVar42._0_8_,4);
    uVar4 = NEON_fmax(CONCAT44(auVar42._8_4_,auVar42._8_4_),uVar4,4);
    uVar35 = NEON_fminp(auVar50._0_8_,auVar50._0_8_,4);
    uVar36 = NEON_fmin(CONCAT44(auVar50._8_4_,auVar50._8_4_),uVar35,4);
    uVar35 = NEON_fmax(uVar4,0,4);
    uVar4 = NEON_fmin(uVar36,uVar21,4);
    fVar11 = (float)uVar35;
    if ((float)uVar4 < fVar11) {
      return 0;
    }
    fVar13 = (float)((ulong)uVar35 >> 0x20);
    uVar4 = CONCAT44(fVar6 + fVar26 * fVar13,fVar3 + fVar25 * fVar11);
    uVar35 = CONCAT44(fVar9 + (fVar28 - fVar9) * fVar13,fVar8 + fVar27 * fVar11);
  }
  param_2[1] = uVar52;
  *param_2 = uVar46;
  param_3[1] = uVar35;
  *param_3 = uVar4;
  return 1;
}


