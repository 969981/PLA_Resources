/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009960a0; name: FUN_009960a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_009960a0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar12;
  float fVar13;
  undefined1 auVar6 [12];
  undefined8 uVar5;
  float fVar14;
  undefined1 auVar9 [16];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar15;
  int iVar16;
  undefined1 auVar17 [12];
  float fVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar33 [12];
  undefined8 uVar32;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar45;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar46;
  float fVar56;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined8 uVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  
  fVar3 = *param_1;
  fVar12 = param_1[1];
  fVar13 = param_1[2];
  fVar14 = param_1[3];
  auVar48._0_4_ = fVar3 * fVar3;
  auVar48._4_4_ = fVar12 * fVar12;
  auVar48._8_4_ = fVar13 * fVar13;
  auVar48._12_4_ = fVar14 * fVar14;
  auVar34 = NEON_ext(auVar48,auVar48,8,1);
  fVar15 = auVar34._0_4_ + auVar48._0_4_;
  fVar28 = auVar34._4_4_ + auVar48._4_4_;
  fVar1 = fVar15 + fVar28;
  fVar15 = fVar15 + fVar28;
  auVar64._8_8_ = CONCAT44(fVar15,fVar1);
  auVar64._0_8_ = CONCAT44(fVar15,fVar1);
  auVar34 = NEON_frsqrte(auVar64,4);
  auVar47._0_4_ = auVar34._0_4_ * fVar1;
  auVar47._4_4_ = auVar34._4_4_ * fVar15;
  auVar47._8_4_ = auVar34._8_4_ * fVar1;
  auVar47._12_4_ = auVar34._12_4_ * fVar15;
  auVar48 = NEON_frsqrts(auVar34,auVar47,4);
  auVar35._0_4_ = auVar34._0_4_ * auVar48._0_4_;
  auVar35._4_4_ = auVar34._4_4_ * auVar48._4_4_;
  auVar35._8_4_ = auVar34._8_4_ * auVar48._8_4_;
  auVar35._12_4_ = auVar34._12_4_ * auVar48._12_4_;
  auVar49._0_4_ = fVar1 * auVar35._0_4_;
  auVar49._4_4_ = fVar15 * auVar35._4_4_;
  auVar49._8_4_ = fVar1 * auVar35._8_4_;
  auVar49._12_4_ = fVar15 * auVar35._12_4_;
  iVar16 = -(uint)(fVar1 == 0.0);
  iVar29 = -(uint)(fVar15 == 0.0);
  iVar30 = -(uint)(fVar1 == 0.0);
  iVar31 = -(uint)(fVar15 == 0.0);
  auVar34 = NEON_frsqrts(auVar35,auVar49,4);
  fVar3 = fVar3 * auVar35._0_4_ * auVar34._0_4_;
  fVar12 = fVar12 * auVar35._4_4_ * auVar34._4_4_;
  fVar13 = fVar13 * auVar35._8_4_ * auVar34._8_4_;
  fVar14 = fVar14 * auVar35._12_4_ * auVar34._12_4_;
  fVar1 = *param_2;
  fVar15 = param_2[1];
  fVar28 = param_2[2];
  fVar45 = param_2[3];
  auVar50._0_4_ = fVar1 * fVar1;
  auVar50._4_4_ = fVar15 * fVar15;
  auVar50._8_4_ = fVar28 * fVar28;
  auVar50._12_4_ = fVar45 * fVar45;
  auVar34 = NEON_ext(auVar50,auVar50,8,1);
  fVar46 = auVar34._0_4_ + auVar50._0_4_;
  fVar56 = auVar34._4_4_ + auVar50._4_4_;
  fVar2 = fVar46 + fVar56;
  fVar46 = fVar46 + fVar56;
  fVar56 = (float)CONCAT13((byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                           CONCAT12((byte)((uint)fVar3 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                                    CONCAT11((byte)((uint)fVar3 >> 8) & ~(byte)((uint)iVar16 >> 8),
                                             SUB41(fVar3,0) & ~(byte)iVar16)));
  auVar6._0_8_ = CONCAT17((byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18),
                          CONCAT16((byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10),
                                   CONCAT15((byte)((uint)fVar12 >> 8) & ~(byte)((uint)iVar29 >> 8),
                                            CONCAT14(SUB41(fVar12,0) & ~(byte)iVar29,fVar56))));
  auVar6[8] = SUB41(fVar13,0) & ~(byte)iVar30;
  auVar6[9] = (byte)((uint)fVar13 >> 8) & ~(byte)((uint)iVar30 >> 8);
  auVar6[10] = (byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10);
  auVar6[0xb] = (byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18);
  auVar34[0xc] = SUB41(fVar14,0) & ~(byte)iVar31;
  auVar34._0_12_ = auVar6;
  auVar34[0xd] = (byte)((uint)fVar14 >> 8) & ~(byte)((uint)iVar31 >> 8);
  auVar34[0xe] = (byte)((uint)fVar14 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10);
  auVar34[0xf] = (byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18);
  auVar51._8_8_ = CONCAT44(fVar46,fVar2);
  auVar51._0_8_ = CONCAT44(fVar46,fVar2);
  auVar48 = NEON_frsqrte(auVar51,4);
  auVar63._0_4_ = auVar48._0_4_ * fVar2;
  auVar63._4_4_ = auVar48._4_4_ * fVar46;
  auVar63._8_4_ = auVar48._8_4_ * fVar2;
  auVar63._12_4_ = auVar48._12_4_ * fVar46;
  auVar64 = NEON_frsqrts(auVar48,auVar63,4);
  auVar58._0_4_ = auVar48._0_4_ * auVar64._0_4_;
  auVar58._4_4_ = auVar48._4_4_ * auVar64._4_4_;
  auVar58._8_4_ = auVar48._8_4_ * auVar64._8_4_;
  auVar58._12_4_ = auVar48._12_4_ * auVar64._12_4_;
  auVar65._0_4_ = fVar2 * auVar58._0_4_;
  auVar65._4_4_ = fVar46 * auVar58._4_4_;
  auVar65._8_4_ = fVar2 * auVar58._8_4_;
  auVar65._12_4_ = fVar46 * auVar58._12_4_;
  iVar16 = -(uint)(fVar2 == 0.0);
  iVar29 = -(uint)(fVar46 == 0.0);
  iVar30 = -(uint)(fVar2 == 0.0);
  iVar31 = -(uint)(fVar46 == 0.0);
  auVar48 = NEON_frsqrts(auVar58,auVar65,4);
  fVar1 = fVar1 * auVar58._0_4_ * auVar48._0_4_;
  fVar15 = fVar15 * auVar58._4_4_ * auVar48._4_4_;
  fVar28 = fVar28 * auVar58._8_4_ * auVar48._8_4_;
  fVar45 = fVar45 * auVar58._12_4_ * auVar48._12_4_;
  fVar3 = (float)CONCAT13((byte)((uint)fVar1 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                          CONCAT12((byte)((uint)fVar1 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                                   CONCAT11((byte)((uint)fVar1 >> 8) & ~(byte)((uint)iVar16 >> 8),
                                            SUB41(fVar1,0) & ~(byte)iVar16)));
  auVar33._0_8_ =
       CONCAT17((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18),
                CONCAT16((byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10),
                         CONCAT15((byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar29 >> 8),
                                  CONCAT14(SUB41(fVar15,0) & ~(byte)iVar29,fVar3))));
  auVar33[8] = SUB41(fVar28,0) & ~(byte)iVar30;
  auVar33[9] = (byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar30 >> 8);
  auVar33[10] = (byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10);
  auVar33[0xb] = (byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18);
  auVar36[0xc] = SUB41(fVar45,0) & ~(byte)iVar31;
  auVar36._0_12_ = auVar33;
  auVar36[0xd] = (byte)((uint)fVar45 >> 8) & ~(byte)((uint)iVar31 >> 8);
  auVar36[0xe] = (byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10);
  auVar36[0xf] = (byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18);
  auVar18._0_4_ = fVar56 * fVar3;
  fVar13 = (float)((ulong)auVar6._0_8_ >> 0x20);
  auVar18._4_4_ = fVar13 * (float)((ulong)auVar33._0_8_ >> 0x20);
  fVar14 = auVar6._8_4_;
  auVar18._8_4_ = fVar14 * auVar33._8_4_;
  fVar1 = auVar34._12_4_;
  auVar18._12_4_ = fVar1 * auVar36._12_4_;
  auVar48 = NEON_ext(auVar18,auVar18,8,1);
  fVar12 = auVar48._0_4_ + auVar18._0_4_;
  fVar15 = auVar48._4_4_ + auVar18._4_4_;
  fVar3 = fVar12 + fVar15;
  fVar12 = fVar12 + fVar15;
  if (ABS(fVar3) < 0.999999) {
    uVar57 = a64_TBL(ZEXT816(0),auVar34,DAT_0388a880);
    uVar66 = a64_TBL(ZEXT816(0),auVar34,DAT_0388a6f0);
    uVar68 = a64_TBL(ZEXT816(0),auVar36,DAT_0388a680);
    uVar69 = a64_TBL(ZEXT816(0),auVar36,DAT_0388a6d8);
    uVar67 = a64_TBL(ZEXT816(0),auVar34,DAT_0388a680);
    uVar4 = a64_TBL(ZEXT816(0),auVar34,DAT_0388a6d8);
    uVar5 = a64_TBL(ZEXT816(0),auVar36,DAT_0388a880);
    uVar32 = a64_TBL(ZEXT816(0),auVar36,DAT_0388a6f0);
    auVar34 = NEON_fmov(0x3f800000,4);
    fVar14 = fVar3 + auVar34._0_4_;
    fVar1 = fVar12 + auVar34._4_4_;
    fVar3 = fVar3 + auVar34._8_4_;
    fVar12 = fVar12 + auVar34._12_4_;
    fVar28 = ((float)uVar57 * (float)uVar68 - (float)uVar67 * (float)uVar5) / SQRT(fVar14 + fVar14);
    fVar45 = ((float)((ulong)uVar57 >> 0x20) * (float)((ulong)uVar68 >> 0x20) -
             (float)((ulong)uVar67 >> 0x20) * (float)((ulong)uVar5 >> 0x20)) / SQRT(fVar1 + fVar1);
    fVar2 = ((float)uVar66 * (float)uVar69 - (float)uVar4 * (float)uVar32) / SQRT(fVar3 + fVar3);
    fVar15 = SQRT(fVar12 + fVar12) * 0.5;
    fVar13 = *(float *)PTR_FloatUlp_04372e58;
    fVar14 = (float)((uint)fVar28 ^ ((uint)fVar28 ^ _DAT_03889a80) & -(uint)(fVar14 <= fVar13));
    fVar1 = (float)((uint)fVar45 ^ ((uint)fVar45 ^ _UNK_03889a84) & -(uint)(fVar1 <= fVar13));
    fVar3 = (float)((uint)fVar2 ^ ((uint)fVar2 ^ _UNK_03889a88) & -(uint)(fVar3 <= fVar13));
    fVar12 = (float)((uint)fVar15 ^ ((uint)fVar15 ^ _UNK_03889a8c) & -(uint)(fVar12 <= fVar13));
    goto LAB_009961e8;
  }
  if (0.0 < fVar3) {
    fVar14 = _DAT_0388a130;
    fVar1 = _UNK_0388a134;
    fVar3 = _UNK_0388a138;
    fVar12 = _UNK_0388a13c;
    goto LAB_009961e8;
  }
  fVar3 = *param_3;
  fVar12 = param_3[1];
  fVar15 = param_3[2];
  fVar28 = param_3[3];
  auVar37._0_4_ = fVar3 * fVar3;
  auVar37._4_4_ = fVar12 * fVar12;
  auVar37._8_4_ = fVar15 * fVar15;
  auVar37._12_4_ = fVar28 * fVar28;
  auVar34 = NEON_ext(auVar37,auVar37,8,1);
  fVar2 = auVar34._0_4_ + auVar37._0_4_;
  fVar46 = auVar34._4_4_ + auVar37._4_4_;
  fVar45 = fVar2 + fVar46;
  fVar2 = fVar2 + fVar46;
  auVar38._8_8_ = CONCAT44(fVar2,fVar45);
  auVar38._0_8_ = CONCAT44(fVar2,fVar45);
  auVar34 = NEON_frsqrte(auVar38,4);
  auVar60._0_4_ = auVar34._0_4_ * fVar45;
  auVar60._4_4_ = auVar34._4_4_ * fVar2;
  auVar60._8_4_ = auVar34._8_4_ * fVar45;
  auVar60._12_4_ = auVar34._12_4_ * fVar2;
  auVar48 = NEON_frsqrts(auVar34,auVar60,4);
  auVar53._0_4_ = auVar34._0_4_ * auVar48._0_4_;
  auVar53._4_4_ = auVar34._4_4_ * auVar48._4_4_;
  auVar53._8_4_ = auVar34._8_4_ * auVar48._8_4_;
  auVar53._12_4_ = auVar34._12_4_ * auVar48._12_4_;
  auVar61._0_4_ = fVar45 * auVar53._0_4_;
  auVar61._4_4_ = fVar2 * auVar53._4_4_;
  auVar61._8_4_ = fVar45 * auVar53._8_4_;
  auVar61._12_4_ = fVar2 * auVar53._12_4_;
  iVar16 = -(uint)(fVar45 == 0.0);
  iVar29 = -(uint)(fVar2 == 0.0);
  iVar30 = -(uint)(fVar45 == 0.0);
  iVar31 = -(uint)(fVar2 == 0.0);
  auVar34 = NEON_frsqrts(auVar53,auVar61,4);
  fVar3 = fVar3 * auVar53._0_4_ * auVar34._0_4_;
  fVar12 = fVar12 * auVar53._4_4_ * auVar34._4_4_;
  fVar15 = fVar15 * auVar53._8_4_ * auVar34._8_4_;
  fVar28 = fVar28 * auVar53._12_4_ * auVar34._12_4_;
  fVar45 = (float)CONCAT13((byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                           CONCAT12((byte)((uint)fVar3 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                                    CONCAT11((byte)((uint)fVar3 >> 8) & ~(byte)((uint)iVar16 >> 8),
                                             SUB41(fVar3,0) & ~(byte)iVar16)));
  auVar17._0_8_ =
       CONCAT17((byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18),
                CONCAT16((byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10),
                         CONCAT15((byte)((uint)fVar12 >> 8) & ~(byte)((uint)iVar29 >> 8),
                                  CONCAT14(SUB41(fVar12,0) & ~(byte)iVar29,fVar45))));
  auVar17[8] = SUB41(fVar15,0) & ~(byte)iVar30;
  auVar17[9] = (byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar30 >> 8);
  auVar17[10] = (byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10);
  auVar17[0xb] = (byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18);
  auVar22[0xc] = SUB41(fVar28,0) & ~(byte)iVar31;
  auVar22._0_12_ = auVar17;
  auVar22[0xd] = (byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar31 >> 8);
  auVar22[0xe] = (byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10);
  auVar22[0xf] = (byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18);
  auVar39._0_4_ = fVar56 * fVar45;
  fVar15 = (float)((ulong)auVar17._0_8_ >> 0x20);
  auVar39._4_4_ = fVar13 * fVar15;
  auVar39._8_4_ = fVar14 * auVar17._8_4_;
  auVar39._12_4_ = fVar1 * auVar22._12_4_;
  auVar34 = NEON_ext(auVar39,auVar39,8,1);
  fVar3 = auVar34._0_4_ + auVar39._0_4_ + auVar34._4_4_ + auVar39._4_4_;
  fVar45 = fVar45 - fVar56 * fVar3;
  fVar15 = fVar15 - fVar13 * fVar3;
  fVar14 = auVar17._8_4_ - fVar14 * fVar3;
  fVar1 = auVar22._12_4_ - fVar1 * fVar3;
  auVar23._0_4_ = fVar45 * fVar45;
  auVar23._4_4_ = fVar15 * fVar15;
  auVar23._8_4_ = fVar14 * fVar14;
  auVar23._12_4_ = fVar1 * fVar1;
  auVar34 = NEON_ext(auVar23,auVar23,8,1);
  fVar12 = auVar34._0_4_ + auVar23._0_4_;
  fVar13 = auVar34._4_4_ + auVar23._4_4_;
  fVar3 = fVar12 + fVar13;
  fVar12 = fVar12 + fVar13;
  auVar24._8_8_ = CONCAT44(fVar12,fVar3);
  auVar24._0_8_ = CONCAT44(fVar12,fVar3);
  auVar34 = NEON_frsqrte(auVar24,4);
  auVar54._0_4_ = auVar34._0_4_ * fVar3;
  auVar54._4_4_ = auVar34._4_4_ * fVar12;
  auVar54._8_4_ = auVar34._8_4_ * fVar3;
  auVar54._12_4_ = auVar34._12_4_ * fVar12;
  auVar48 = NEON_frsqrts(auVar34,auVar54,4);
  auVar40._0_4_ = auVar34._0_4_ * auVar48._0_4_;
  auVar40._4_4_ = auVar34._4_4_ * auVar48._4_4_;
  auVar40._8_4_ = auVar34._8_4_ * auVar48._8_4_;
  auVar40._12_4_ = auVar34._12_4_ * auVar48._12_4_;
  auVar55._0_4_ = fVar3 * auVar40._0_4_;
  auVar55._4_4_ = fVar12 * auVar40._4_4_;
  auVar55._8_4_ = fVar3 * auVar40._8_4_;
  auVar55._12_4_ = fVar12 * auVar40._12_4_;
  iVar16 = -(uint)(fVar3 == 0.0);
  iVar29 = -(uint)(fVar12 == 0.0);
  iVar30 = -(uint)(fVar3 == 0.0);
  iVar31 = -(uint)(fVar12 == 0.0);
  auVar34 = NEON_frsqrts(auVar40,auVar55,4);
  fVar45 = fVar45 * auVar40._0_4_ * auVar34._0_4_;
  fVar15 = fVar15 * auVar40._4_4_ * auVar34._4_4_;
  fVar14 = fVar14 * auVar40._8_4_ * auVar34._8_4_;
  fVar1 = fVar1 * auVar40._12_4_ * auVar34._12_4_;
  fVar13 = (float)CONCAT13((byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                           CONCAT12((byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                                    CONCAT11((byte)((uint)fVar45 >> 8) & ~(byte)((uint)iVar16 >> 8),
                                             SUB41(fVar45,0) & ~(byte)iVar16)));
  auVar7._0_8_ = CONCAT17((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18),
                          CONCAT16((byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10),
                                   CONCAT15((byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar29 >> 8),
                                            CONCAT14(SUB41(fVar15,0) & ~(byte)iVar29,fVar13))));
  auVar7[8] = SUB41(fVar14,0) & ~(byte)iVar30;
  auVar7[9] = (byte)((uint)fVar14 >> 8) & ~(byte)((uint)iVar30 >> 8);
  auVar7[10] = (byte)((uint)fVar14 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10);
  auVar7[0xb] = (byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18);
  auVar10[0xc] = SUB41(fVar1,0) & ~(byte)iVar31;
  auVar10._0_12_ = auVar7;
  auVar10[0xd] = (byte)((uint)fVar1 >> 8) & ~(byte)((uint)iVar31 >> 8);
  auVar10[0xe] = (byte)((uint)fVar1 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10);
  auVar10[0xf] = (byte)((uint)fVar1 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18);
  auVar25._0_4_ = fVar13 * fVar13;
  fVar1 = (float)((ulong)auVar7._0_8_ >> 0x20);
  auVar25._4_4_ = fVar1 * fVar1;
  fVar15 = auVar7._8_4_;
  auVar25._8_4_ = fVar15 * fVar15;
  auVar25._12_4_ = auVar10._12_4_ * auVar10._12_4_;
  auVar34 = NEON_ext(auVar25,auVar25,8,1);
  fVar12 = auVar34._0_4_ + auVar25._0_4_;
  fVar14 = auVar34._4_4_ + auVar25._4_4_;
  fVar3 = fVar12 + fVar14;
  fVar12 = fVar12 + fVar14;
  auVar26._8_8_ = CONCAT44(fVar12,fVar3);
  auVar26._0_8_ = CONCAT44(fVar12,fVar3);
  auVar34 = NEON_frsqrte(auVar26,4);
  iVar16 = -(uint)(fVar3 == 0.0);
  iVar29 = -(uint)(fVar12 == 0.0);
  iVar30 = -(uint)(fVar3 == 0.0);
  auVar62._0_4_ = auVar34._0_4_ * fVar3;
  auVar62._4_4_ = auVar34._4_4_ * fVar12;
  auVar62._8_4_ = auVar34._8_4_ * fVar3;
  auVar62._12_4_ = auVar34._12_4_ * fVar12;
  auVar48 = NEON_frsqrts(auVar34,auVar62,4);
  auVar41._0_4_ = auVar34._0_4_ * auVar48._0_4_;
  auVar41._4_4_ = auVar34._4_4_ * auVar48._4_4_;
  auVar41._8_4_ = auVar34._8_4_ * auVar48._8_4_;
  auVar41._12_4_ = auVar34._12_4_ * auVar48._12_4_;
  auVar27._0_4_ = fVar3 * auVar41._0_4_;
  auVar27._4_4_ = fVar12 * auVar41._4_4_;
  auVar27._8_4_ = fVar3 * auVar41._8_4_;
  auVar27._12_4_ = fVar12 * auVar41._12_4_;
  auVar34 = NEON_frsqrts(auVar41,auVar27,4);
  fVar13 = fVar13 * auVar41._0_4_ * auVar34._0_4_;
  fVar1 = fVar1 * auVar41._4_4_ * auVar34._4_4_;
  fVar15 = fVar15 * auVar41._8_4_ * auVar34._8_4_;
  fVar14 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                           CONCAT12((byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                                    CONCAT11((byte)((uint)fVar13 >> 8) & ~(byte)((uint)iVar16 >> 8),
                                             SUB41(fVar13,0) & ~(byte)iVar16)));
  auVar8._0_8_ = CONCAT17((byte)((uint)fVar1 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18),
                          CONCAT16((byte)((uint)fVar1 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10),
                                   CONCAT15((byte)((uint)fVar1 >> 8) & ~(byte)((uint)iVar29 >> 8),
                                            CONCAT14(SUB41(fVar1,0) & ~(byte)iVar29,fVar14))));
  auVar8[8] = SUB41(fVar15,0) & ~(byte)iVar30;
  auVar8[9] = (byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar30 >> 8);
  auVar8[10] = (byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10);
  auVar8[0xb] = (byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18);
  fVar3 = 1.5707964 -
          *(float *)PTR_Float2Pi_04372d30 *
          (float)(int)(*(float *)PTR_Float1Divided2Pi_04372d20 * 1.5707964 + 0.5);
  if (*(float *)PTR_FloatPiDivided2_04372d38 < fVar3) {
    fVar12 = *(float *)PTR_FloatPi_04372cf0;
LAB_00996454:
    fVar3 = fVar12 - fVar3;
    fVar12 = -1.0;
  }
  else {
    if (fVar3 < -*(float *)PTR_FloatPiDivided2_04372d38) {
      fVar12 = -*(float *)PTR_FloatPi_04372cf0;
      goto LAB_00996454;
    }
    fVar12 = 1.0;
  }
  fVar13 = fVar3 * fVar3;
  fVar3 = fVar3 * (fVar13 * (fVar13 * (*(float *)(PTR_SinCoefficients_04372d28 + 0xc) +
                                      fVar13 * (fVar13 * (*(float *)(PTR_SinCoefficients_04372d28 +
                                                                    4) -
                                                         *(float *)PTR_SinCoefficients_04372d28 *
                                                         fVar13) -
                                               *(float *)(PTR_SinCoefficients_04372d28 + 8))) -
                            *(float *)(PTR_SinCoefficients_04372d28 + 0x10)) + 1.0);
  fVar14 = fVar14 * fVar3;
  fVar1 = (float)((ulong)auVar8._0_8_ >> 0x20) * fVar3;
  fVar3 = auVar8._8_4_ * fVar3;
  fVar12 = fVar12 * (fVar13 * (fVar13 * (*(float *)(PTR_CosCoefficients_04372d40 + 0xc) +
                                        fVar13 * (fVar13 * (*(float *)(PTR_CosCoefficients_04372d40
                                                                      + 4) -
                                                           fVar13 * *(float *)
                                                  PTR_CosCoefficients_04372d40) -
                                                 *(float *)(PTR_CosCoefficients_04372d40 + 8))) -
                              *(float *)(PTR_CosCoefficients_04372d40 + 0x10)) + 1.0);
LAB_009961e8:
  auVar19._0_4_ = fVar14 * fVar14;
  auVar19._4_4_ = fVar1 * fVar1;
  auVar19._8_4_ = fVar3 * fVar3;
  auVar19._12_4_ = fVar12 * fVar12;
  auVar34 = NEON_ext(auVar19,auVar19,8,1);
  fVar28 = auVar34._0_4_ + auVar19._0_4_;
  fVar45 = auVar34._4_4_ + auVar19._4_4_;
  fVar13 = *(float *)PTR_FloatQuaternionEpsilon_0437a118;
  fVar15 = fVar28 + fVar45;
  fVar28 = fVar28 + fVar45;
  auVar20._8_8_ = CONCAT44(fVar28,fVar15);
  auVar20._0_8_ = CONCAT44(fVar28,fVar15);
  iVar16 = -(uint)(fVar15 < fVar13);
  iVar29 = -(uint)(fVar28 < fVar13);
  iVar30 = -(uint)(fVar15 < fVar13);
  iVar31 = -(uint)(fVar28 < fVar13);
  bVar42 = (byte)((uint)iVar16 >> 8);
  bVar43 = (byte)((uint)iVar16 >> 0x10);
  bVar44 = (byte)((uint)iVar16 >> 0x18);
  if ((float)CONCAT13((byte)((uint)fVar15 >> 0x18) & ~bVar44,
                      CONCAT12((byte)((uint)fVar15 >> 0x10) & ~bVar43,
                               CONCAT11((byte)((uint)fVar15 >> 8) & ~bVar42,
                                        SUB41(fVar15,0) & ~(byte)iVar16))) == 0.0) {
    auVar11._12_4_ = _UNK_0388a13c;
    auVar11._8_4_ = _UNK_0388a138;
    auVar11._4_4_ = _UNK_0388a134;
    auVar11._0_4_ = _DAT_0388a130;
    return auVar11;
  }
  auVar34 = NEON_frsqrte(auVar20,4);
  auVar59._0_4_ = auVar34._0_4_ * fVar15;
  auVar59._4_4_ = auVar34._4_4_ * fVar28;
  auVar59._8_4_ = auVar34._8_4_ * fVar15;
  auVar59._12_4_ = auVar34._12_4_ * fVar28;
  auVar48 = NEON_frsqrts(auVar34,auVar59,4);
  auVar52._0_4_ = auVar34._0_4_ * auVar48._0_4_;
  auVar52._4_4_ = auVar34._4_4_ * auVar48._4_4_;
  auVar52._8_4_ = auVar34._8_4_ * auVar48._8_4_;
  auVar52._12_4_ = auVar34._12_4_ * auVar48._12_4_;
  auVar21._0_4_ = fVar15 * auVar52._0_4_;
  auVar21._4_4_ = fVar28 * auVar52._4_4_;
  auVar21._8_4_ = fVar15 * auVar52._8_4_;
  auVar21._12_4_ = fVar28 * auVar52._12_4_;
  auVar34 = NEON_frsqrts(auVar52,auVar21,4);
  fVar14 = fVar14 * auVar52._0_4_ * auVar34._0_4_;
  fVar1 = fVar1 * auVar52._4_4_ * auVar34._4_4_;
  fVar3 = fVar3 * auVar52._8_4_ * auVar34._8_4_;
  fVar12 = fVar12 * auVar52._12_4_ * auVar34._12_4_;
  auVar9[0] = SUB41(fVar14,0) & ~(byte)iVar16;
  auVar9[1] = (byte)((uint)fVar14 >> 8) & ~bVar42;
  auVar9[2] = (byte)((uint)fVar14 >> 0x10) & ~bVar43;
  auVar9[3] = (byte)((uint)fVar14 >> 0x18) & ~bVar44;
  auVar9[4] = SUB41(fVar1,0) & ~(byte)iVar29;
  auVar9[5] = (byte)((uint)fVar1 >> 8) & ~(byte)((uint)iVar29 >> 8);
  auVar9[6] = (byte)((uint)fVar1 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10);
  auVar9[7] = (byte)((uint)fVar1 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18);
  auVar9[8] = SUB41(fVar3,0) & ~(byte)iVar30;
  auVar9[9] = (byte)((uint)fVar3 >> 8) & ~(byte)((uint)iVar30 >> 8);
  auVar9[10] = (byte)((uint)fVar3 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10);
  auVar9[0xb] = (byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18);
  auVar9[0xc] = SUB41(fVar12,0) & ~(byte)iVar31;
  auVar9[0xd] = (byte)((uint)fVar12 >> 8) & ~(byte)((uint)iVar31 >> 8);
  auVar9[0xe] = (byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10);
  auVar9[0xf] = (byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18);
  return auVar9;
}


