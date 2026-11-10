/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001d42c0; name: FUN_001d42c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_001d42c0(float *param_1,undefined8 *param_2,float *param_3,undefined8 *param_4,uint param_5
                 ,undefined8 *param_6,undefined8 *param_7)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar12 [16];
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar23 [16];
  float fVar27;
  byte bVar28;
  float fVar29;
  float fVar32;
  float fVar33;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  byte bVar36;
  byte bVar37;
  byte bVar38;
  int iVar39;
  float fVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar52;
  float fVar53;
  undefined1 auVar50 [16];
  float fVar49;
  undefined1 auVar51 [16];
  float fVar54;
  float fVar56;
  float fVar57;
  undefined1 auVar55 [16];
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined1 auVar65 [16];
  
  fVar22 = *param_3;
  fVar15 = param_3[1];
  fVar16 = param_3[2];
  fVar29 = param_3[3];
  fVar53 = (float)*param_2;
  auVar34._0_4_ = fVar22 - fVar53;
  fVar54 = (float)((ulong)*param_2 >> 0x20);
  auVar34._4_4_ = fVar15 - fVar54;
  fVar56 = (float)param_2[1];
  auVar34._8_4_ = fVar16 - fVar56;
  fVar57 = (float)((ulong)param_2[1] >> 0x20);
  auVar34._12_4_ = fVar29 - fVar57;
  auVar10 = NEON_ext(auVar34,auVar34,4,1);
  fVar19 = (float)*param_4;
  auVar51._0_4_ = fVar53 - fVar19;
  fVar20 = (float)((ulong)*param_4 >> 0x20);
  auVar51._4_4_ = fVar54 - fVar20;
  fVar21 = (float)param_4[1];
  auVar51._8_4_ = fVar56 - fVar21;
  fVar52 = (float)((ulong)param_4[1] >> 0x20);
  auVar51._12_4_ = fVar57 - fVar52;
  auVar12 = NEON_ext(auVar51,auVar51,4,1);
  auVar35._0_4_ = auVar34._0_4_ * auVar12._0_4_ - auVar51._0_4_ * auVar10._0_4_;
  auVar35._4_4_ = auVar34._4_4_ * auVar12._4_4_ - auVar51._4_4_ * auVar10._4_4_;
  auVar35._8_4_ = auVar34._8_4_ * auVar51._0_4_ - auVar51._8_4_ * auVar34._0_4_;
  auVar35._12_4_ = auVar34._12_4_ * auVar51._4_4_ - auVar51._12_4_ * auVar34._4_4_;
  auVar30 = NEON_ext(auVar35,auVar35,4,1);
  fVar6 = *param_1;
  fVar7 = param_1[1];
  fVar8 = param_1[2];
  fVar32 = param_1[3];
  auVar10 = *(undefined1 (*) [16])(param_1 + 4);
  fVar11 = auVar10._0_4_;
  fVar49 = (float)*param_6;
  fVar13 = auVar10._4_4_;
  fVar40 = (float)((ulong)*param_6 >> 0x20);
  fVar14 = auVar10._8_4_;
  auVar12._0_4_ = fVar6 - fVar53;
  auVar12._4_4_ = fVar7 - fVar54;
  auVar12._8_4_ = fVar8 - fVar56;
  auVar12._12_4_ = fVar32 - fVar57;
  fVar48 = auVar12._0_4_ * auVar30._0_4_;
  fVar24 = auVar12._4_4_ * auVar30._4_4_;
  fVar25 = fVar48 + fVar24 + auVar12._8_4_ * auVar35._0_4_;
  bVar28 = (byte)((uint)(fVar48 + fVar24 + auVar12._8_4_ * auVar35._0_4_) >> 0x18);
  fVar48 = (auVar12._0_4_ + fVar49 * fVar11) * auVar30._0_4_ +
           (auVar12._4_4_ + fVar40 * fVar13) * auVar30._4_4_ +
           (auVar12._8_4_ + fVar49 * fVar14) * auVar35._0_4_;
  if (0.0 <= fVar25 * fVar48) {
    return 0;
  }
  bVar38 = (byte)((uint)fVar25 >> 0x18);
  bVar36 = bVar38 & 0x80;
  bVar37 = bVar28 & 0x80;
  bVar38 = bVar38 & 0x80;
  auVar55._0_4_ = fVar19 - fVar22;
  auVar55._4_4_ = fVar20 - fVar15;
  auVar55._8_4_ = fVar21 - fVar16;
  auVar55._12_4_ = fVar52 - fVar29;
  fVar62 = fVar6 + fVar6;
  fVar63 = fVar7 + fVar7;
  fVar64 = fVar8 + fVar8;
  auVar30._0_8_ =
       CONCAT17(bVar37 ^ auVar30[7],
                CONCAT16(auVar30[6],
                         CONCAT15(auVar30[5],
                                  CONCAT14(auVar30[4],CONCAT13(bVar36 ^ auVar30[3],auVar30._0_3_))))
               );
  auVar30[8] = SUB41(auVar35._0_4_,0);
  auVar30[9] = (undefined1)((uint)auVar35._0_4_ >> 8);
  auVar30[10] = (undefined1)((uint)auVar35._0_4_ >> 0x10);
  auVar30[0xb] = bVar38 ^ (byte)((uint)auVar35._0_4_ >> 0x18);
  auVar30[0xc] = SUB41(auVar35._4_4_,0);
  auVar30[0xd] = (undefined1)((uint)auVar35._4_4_ >> 8);
  auVar30[0xe] = (undefined1)((uint)auVar35._4_4_ >> 0x10);
  auVar30[0xf] = bVar28 & 0x80 ^ (byte)((uint)auVar35._4_4_ >> 0x18);
  param_7[1] = auVar30._8_8_;
  *param_7 = auVar30._0_8_;
  auVar35 = NEON_ext(auVar34,auVar34,8,1);
  auVar30 = NEON_ext(auVar55,auVar55,8,1);
  fVar33 = auVar35._0_4_;
  fVar24 = auVar30._0_4_;
  auVar35 = NEON_ext(auVar51,auVar51,8,1);
  auVar10 = NEON_ext(auVar10,auVar10,8,1);
  fVar26 = auVar35._0_4_;
  fVar27 = auVar10._0_4_;
  fVar58 = fVar33 * fVar33 + auVar34._0_4_ * auVar34._0_4_ + auVar34._4_4_ * auVar34._4_4_;
  fVar59 = fVar24 * fVar24 + auVar55._0_4_ * auVar55._0_4_ + auVar55._4_4_ * auVar55._4_4_;
  fVar60 = fVar26 * fVar26 + auVar51._0_4_ * auVar51._0_4_ + auVar51._4_4_ * auVar51._4_4_;
  fVar61 = fVar27 * fVar27 + fVar11 * fVar11 + fVar13 * fVar13;
  auVar65._0_4_ = fVar62 - (fVar22 + fVar53);
  auVar65._4_4_ = fVar63 - (fVar15 + fVar54);
  auVar65._8_4_ = fVar64 - (fVar16 + fVar56);
  auVar65._12_4_ = (fVar32 + fVar32) - (fVar29 + fVar57);
  auVar50._0_4_ = fVar62 - (fVar22 + fVar19);
  auVar50._4_4_ = fVar63 - (fVar15 + fVar20);
  auVar50._8_4_ = fVar64 - (fVar16 + fVar21);
  auVar50._12_4_ = (fVar32 + fVar32) - (fVar29 + fVar52);
  fVar48 = fVar25 / (fVar25 - fVar48);
  iVar39 = -(uint)(fVar58 == 0.0);
  iVar41 = -(uint)(fVar59 == 0.0);
  iVar42 = -(uint)(fVar60 == 0.0);
  iVar43 = -(uint)(fVar61 == 0.0);
  *param_6 = CONCAT44(fVar40 * fVar48,fVar49 * fVar48);
  auVar10._4_4_ = fVar59;
  auVar10._0_4_ = fVar58;
  auVar10._8_4_ = fVar60;
  auVar10._12_4_ = fVar61;
  auVar10 = NEON_frsqrte(auVar10,4);
  fVar44 = auVar10._0_4_;
  fVar58 = fVar58 * fVar44;
  fVar45 = auVar10._4_4_;
  fVar59 = fVar59 * fVar45;
  fVar46 = auVar10._8_4_;
  fVar60 = fVar60 * fVar46;
  fVar47 = auVar10._12_4_;
  fVar61 = fVar61 * fVar47;
  fVar49 = (float)CONCAT13((byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18),
                           CONCAT12((byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar39 >> 0x10),
                                    CONCAT11((byte)((uint)fVar58 >> 8) & ~(byte)((uint)iVar39 >> 8),
                                             SUB41(fVar58,0) & ~(byte)iVar39)));
  fVar52 = (float)CONCAT13((byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar42 >> 0x18),
                           CONCAT12((byte)((uint)fVar60 >> 0x10) & ~(byte)((uint)iVar42 >> 0x10),
                                    CONCAT11((byte)((uint)fVar60 >> 8) & ~(byte)((uint)iVar42 >> 8),
                                             SUB41(fVar60,0) & ~(byte)iVar42)));
  fVar57 = (float)(CONCAT17((byte)((uint)fVar61 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18),
                            CONCAT16((byte)((uint)fVar61 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10),
                                     CONCAT15((byte)((uint)fVar61 >> 8) & ~(byte)((uint)iVar43 >> 8)
                                              ,CONCAT14(SUB41(fVar61,0) & ~(byte)iVar43,fVar52))))
                  >> 0x20);
  fVar40 = auVar12._8_4_ * auVar12._8_4_ +
           auVar12._0_4_ * auVar12._0_4_ + auVar12._4_4_ * auVar12._4_4_;
  fVar48 = auVar12._8_4_ * auVar12._8_4_ +
           auVar12._0_4_ * auVar12._0_4_ + auVar12._4_4_ * auVar12._4_4_;
  uVar5 = NEON_frsqrte(CONCAT44(fVar48,fVar40),4);
  fVar40 = (float)*(undefined8 *)PTR_DAT_043724a0 +
           (float)uVar5 * fVar40 * (float)*(undefined8 *)(PTR_DAT_04372370 + 0x260);
  fVar48 = (float)((ulong)*(undefined8 *)PTR_DAT_043724a0 >> 0x20) +
           (float)((ulong)uVar5 >> 0x20) * fVar48 *
           (float)((ulong)*(undefined8 *)(PTR_DAT_04372370 + 0x260) >> 0x20);
  fVar58 = fVar49 * fVar57 * (fVar40 + fVar40);
  fVar59 = (float)(CONCAT17((byte)((uint)fVar59 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18),
                            CONCAT16((byte)((uint)fVar59 >> 0x10) & ~(byte)((uint)iVar41 >> 0x10),
                                     CONCAT15((byte)((uint)fVar59 >> 8) & ~(byte)((uint)iVar41 >> 8)
                                              ,CONCAT14(SUB41(fVar59,0) & ~(byte)iVar41,fVar49))))
                  >> 0x20) * fVar57 * (fVar48 + fVar48);
  fVar60 = fVar52 * fVar57 * (fVar40 + fVar40);
  auVar35 = NEON_ext(auVar65,auVar65,8,1);
  auVar10 = NEON_ext(auVar50,auVar50,8,1);
  fVar49 = auVar35._0_4_ * (auVar34._0_4_ * fVar13 - auVar34._4_4_ * fVar11) +
           auVar65._0_4_ * (auVar34._4_4_ * fVar14 - fVar33 * fVar13) +
           auVar65._4_4_ * (fVar33 * fVar11 - auVar34._0_4_ * fVar14);
  fVar52 = auVar10._0_4_ * (auVar55._0_4_ * fVar13 - auVar55._4_4_ * fVar11) +
           auVar50._0_4_ * (auVar55._4_4_ * fVar14 - fVar24 * fVar13) +
           auVar50._4_4_ * (fVar24 * fVar11 - auVar55._0_4_ * fVar14);
  fVar53 = (fVar64 - (fVar56 + fVar21)) * (auVar51._0_4_ * fVar13 - auVar51._4_4_ * fVar11) +
           (fVar62 - (fVar53 + fVar19)) * (auVar51._4_4_ * fVar14 - fVar26 * fVar13) +
           (fVar63 - (fVar54 + fVar20)) * (fVar26 * fVar11 - auVar51._0_4_ * fVar14);
  fVar54 = 0.0 - fVar58;
  fVar56 = 0.0 - fVar59;
  fVar57 = 0.0 - fVar60;
  uVar9 = 2;
  if (0.0 <= fVar25) {
    uVar9 = 1;
  }
  uVar9 = uVar9 & (param_5 ^ 3);
  uVar1 = (uVar9 >> (ulong)((-(uint)(fVar52 < fVar56) & 2) + (uint)(fVar49 < fVar54) |
                           -(uint)(fVar53 < fVar57) & 4) |
          uVar9 >> (ulong)((-(uint)(fVar59 < fVar52) & 2) + (uint)(fVar58 < fVar49) |
                          -(uint)(fVar60 < fVar53) & 4)) & uVar9;
  if ((uVar1 != 0) &&
     (fVar57 <= (float)CONCAT13(bVar38 ^ (byte)((uint)fVar53 >> 0x18),SUB43(fVar53,0)) ||
      (fVar54 <= (float)CONCAT13(bVar36 ^ (byte)((uint)fVar49 >> 0x18),SUB43(fVar49,0)) ||
      fVar56 <= (float)CONCAT13(bVar37 ^ (byte)((uint)fVar52 >> 0x18),SUB43(fVar52,0))))) {
    fVar25 = auVar55._0_4_ * fVar45;
    fVar52 = auVar51._0_4_ * fVar46;
    fVar53 = fVar11 * fVar47;
    auVar31._0_4_ = auVar34._4_4_ * fVar44;
    auVar31._4_4_ = auVar55._4_4_ * fVar45;
    auVar31._8_4_ = auVar51._4_4_ * fVar46;
    auVar31._12_4_ = fVar13 * fVar47;
    fVar24 = fVar24 * fVar45;
    fVar26 = fVar26 * fVar46;
    fVar27 = fVar27 * fVar47;
    auVar17._0_4_ = fVar6 - fVar22;
    auVar17._4_4_ = fVar7 - fVar15;
    auVar17._8_4_ = fVar8 - fVar16;
    auVar17._12_4_ = fVar32 - fVar29;
    auVar23._8_8_ = _UNK_03889f28;
    auVar23._0_8_ = _DAT_03889f20;
    auVar3[4] = SUB41(fVar25,0);
    auVar3._0_4_ = auVar34._0_4_ * fVar44;
    auVar3[5] = (char)((uint)fVar25 >> 8);
    auVar3[6] = (char)((uint)fVar25 >> 0x10);
    auVar3[7] = (char)((uint)fVar25 >> 0x18);
    auVar3[8] = SUB41(fVar52,0);
    auVar3[9] = (char)((uint)fVar52 >> 8);
    auVar3[10] = (char)((uint)fVar52 >> 0x10);
    auVar3[0xb] = (char)((uint)fVar52 >> 0x18);
    auVar3[0xc] = SUB41(fVar53,0);
    auVar3[0xd] = (char)((uint)fVar53 >> 8);
    auVar3[0xe] = (char)((uint)fVar53 >> 0x10);
    auVar3[0xf] = (char)((uint)fVar53 >> 0x18);
    auVar30 = a64_TBL(ZEXT816(0),auVar3,auVar23);
    auVar10 = NEON_ext(auVar12,auVar12,8,1);
    auVar35 = NEON_ext(auVar17,auVar17,8,1);
    auVar51 = a64_TBL(ZEXT816(0),auVar31,auVar23);
    fVar49 = auVar34._0_4_ * fVar44 + auVar30._0_4_;
    fVar25 = fVar25 + auVar30._4_4_;
    fVar52 = fVar52 + auVar30._8_4_;
    fVar53 = fVar53 + auVar30._12_4_;
    fVar29 = auVar31._0_4_ + auVar51._0_4_;
    fVar32 = auVar31._4_4_ + auVar51._4_4_;
    fVar57 = auVar31._8_4_ + auVar51._8_4_;
    fVar58 = auVar31._12_4_ + auVar51._12_4_;
    auVar4[4] = SUB41(fVar24,0);
    auVar4._0_4_ = fVar33 * fVar44;
    auVar4[5] = (char)((uint)fVar24 >> 8);
    auVar4[6] = (char)((uint)fVar24 >> 0x10);
    auVar4[7] = (char)((uint)fVar24 >> 0x18);
    auVar4[8] = SUB41(fVar26,0);
    auVar4[9] = (char)((uint)fVar26 >> 8);
    auVar4[10] = (char)((uint)fVar26 >> 0x10);
    auVar4[0xb] = (char)((uint)fVar26 >> 0x18);
    auVar4[0xc] = SUB41(fVar27,0);
    auVar4[0xd] = (char)((uint)fVar27 >> 8);
    auVar4[0xe] = (char)((uint)fVar27 >> 0x10);
    auVar4[0xf] = (char)((uint)fVar27 >> 0x18);
    auVar30 = a64_TBL(ZEXT816(0),auVar4,auVar23);
    fVar22 = fVar33 * fVar44 + auVar30._0_4_;
    fVar24 = fVar24 + auVar30._4_4_;
    fVar26 = fVar26 + auVar30._8_4_;
    fVar27 = fVar27 + auVar30._12_4_;
    fVar54 = fVar11 * fVar22 - fVar14 * fVar49;
    fVar56 = fVar11 * fVar24 - fVar14 * fVar25;
    fVar33 = fVar11 * fVar26 - fVar14 * fVar52;
    fVar59 = fVar11 * fVar27 - fVar14 * fVar53;
    fVar22 = fVar14 * fVar29 - fVar13 * fVar22;
    fVar24 = fVar14 * fVar32 - fVar13 * fVar24;
    fVar15 = fVar14 * fVar57 - fVar13 * fVar26;
    fVar16 = fVar14 * fVar58 - fVar13 * fVar27;
    fVar49 = fVar13 * fVar49 - fVar11 * fVar29;
    fVar25 = fVar13 * fVar25 - fVar11 * fVar32;
    fVar29 = fVar13 * fVar52 - fVar11 * fVar57;
    fVar32 = fVar13 * fVar53 - fVar11 * fVar58;
    auVar18._0_4_ = fVar49 * fVar49 + fVar22 * fVar22 + fVar54 * fVar54;
    auVar18._4_4_ = fVar25 * fVar25 + fVar24 * fVar24 + fVar56 * fVar56;
    auVar18._8_4_ = fVar29 * fVar29 + fVar15 * fVar15 + fVar33 * fVar33;
    auVar18._12_4_ = fVar32 * fVar32 + fVar16 * fVar16 + fVar59 * fVar59;
    auVar30 = NEON_frsqrte(auVar18,4);
    fVar49 = auVar30._0_4_ *
             (auVar10._0_4_ * fVar49 + auVar12._0_4_ * fVar22 + auVar12._4_4_ * fVar54);
    fVar25 = auVar30._4_4_ *
             (auVar35._0_4_ * fVar25 + auVar17._0_4_ * fVar24 + auVar17._4_4_ * fVar56);
    fVar24 = auVar30._8_4_ *
             ((fVar8 - fVar21) * fVar29 + (fVar6 - fVar19) * fVar15 + (fVar7 - fVar20) * fVar33);
    uVar2 = 0;
    if (((uVar9 >> (ulong)((-(uint)(fVar48 < fVar25) & 2) + (uint)(fVar40 < fVar49) |
                          -(uint)(fVar40 < fVar24) & 4) |
         uVar9 >> (ulong)((-(uint)(fVar25 < 0.0 - fVar48) & 2) + (uint)(fVar49 < 0.0 - fVar40) |
                         -(uint)(fVar24 < 0.0 - fVar40) & 4)) & uVar9) != 0) {
      uVar2 = uVar1;
    }
    return uVar2;
  }
  return uVar1;
}


