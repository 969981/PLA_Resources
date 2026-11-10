/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030f50d0; name: FUN_030f50d0
 */


void FUN_030f50d0(undefined1 (*param_1) [12],float *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar12 [12];
  undefined8 uVar11;
  undefined1 auVar13 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar14 [16];
  float fVar20;
  undefined8 uVar21;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  undefined1 uVar30;
  byte bVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  byte bVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  byte bVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  byte bVar40;
  undefined1 uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar50;
  undefined1 auVar48 [16];
  float fVar51;
  undefined1 auVar49 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  int iVar59;
  float fVar60;
  int iVar61;
  float fVar62;
  undefined1 auVar63 [16];
  int iVar64;
  float fVar65;
  int iVar66;
  float fVar67;
  undefined8 uVar68;
  float fVar69;
  float fVar70;
  
  fVar16 = (float)*(undefined8 *)(*param_1 + 8);
  fVar18 = (float)((ulong)*(undefined8 *)(*param_1 + 8) >> 0x20);
  uVar11 = *(undefined8 *)*param_1;
  fVar54 = (float)uVar11;
  fVar10 = (float)((ulong)uVar11 >> 0x20);
  auVar63 = *(undefined1 (*) [16])(param_1[1] + 4);
  auVar13._12_4_ = fVar18;
  auVar13._0_12_ = *param_1;
  auVar48._12_4_ = fVar18;
  auVar48._0_12_ = *param_1;
  auVar13 = NEON_ext(auVar13,auVar48,8,1);
  uVar21 = NEON_ext(uVar11,auVar13._0_8_,4,1);
  auVar13 = NEON_ext(auVar63,auVar63,8,1);
  uVar11 = NEON_ext(auVar63._0_8_,auVar13._0_8_,4,1);
  fVar20 = auVar63._0_4_ * (float)uVar21;
  fVar23 = auVar63._4_4_ * (float)((ulong)uVar21 >> 0x20);
  fVar24 = auVar63._8_4_ * fVar54;
  fVar25 = auVar63._12_4_ * fVar10;
  fVar9 = fVar54 * (float)uVar11;
  fVar15 = fVar10 * (float)((ulong)uVar11 >> 0x20);
  fVar17 = fVar16 * auVar63._0_4_;
  fVar19 = fVar18 * auVar63._4_4_;
  fVar8 = fVar9 - fVar20;
  fVar42 = fVar15 - fVar23;
  uVar30 = SUB41(fVar42,0);
  uVar33 = (undefined1)((uint)fVar42 >> 8);
  uVar36 = (undefined1)((uint)fVar42 >> 0x10);
  uVar39 = (undefined1)((uint)fVar42 >> 0x18);
  fVar42 = fVar17 - fVar24;
  fVar44 = fVar19 - fVar25;
  auVar63[4] = uVar30;
  auVar63._0_4_ = fVar8;
  auVar63[5] = uVar33;
  auVar63[6] = uVar36;
  auVar63[7] = uVar39;
  auVar63._8_4_ = fVar42;
  auVar63._12_4_ = fVar44;
  auVar3[4] = uVar30;
  auVar3._0_4_ = fVar8;
  auVar3[5] = uVar33;
  auVar3[6] = uVar36;
  auVar3[7] = uVar39;
  auVar3._8_4_ = fVar42;
  auVar3._12_4_ = fVar44;
  auVar13 = NEON_ext(auVar63,auVar3,4,1);
  fVar42 = auVar13._0_4_;
  fVar44 = auVar13._4_4_;
  fVar46 = fVar42 * fVar42 + fVar44 * fVar44 + fVar8 * fVar8;
  fVar50 = fVar42 * fVar42 + fVar44 * fVar44 + fVar8 * fVar8;
  uVar11 = CONCAT44(fVar50,fVar46);
  if (1.1920929e-07 <= fVar46) {
    uVar21 = NEON_frsqrte(uVar11,4);
    fVar52 = (float)uVar21;
    fVar55 = (float)((ulong)uVar21 >> 0x20);
    iVar64 = -(uint)(fVar46 <= 0.0);
    iVar66 = -(uint)(fVar50 <= 0.0);
    uVar21 = NEON_frsqrts(uVar11,CONCAT44(fVar55 * fVar55,fVar52 * fVar52),4);
    fVar52 = fVar52 * (float)uVar21;
    fVar55 = fVar55 * (float)((ulong)uVar21 >> 0x20);
    uVar11 = NEON_frsqrts(uVar11,CONCAT44(fVar55 * fVar55,fVar52 * fVar52),4);
    fVar52 = (float)uVar11 * fVar52;
    fVar55 = (float)((ulong)uVar11 >> 0x20) * fVar55;
    bVar26 = SUB41(fVar52,0) & ~(byte)iVar64;
    bVar27 = (byte)((uint)fVar52 >> 8) & ~(byte)((uint)iVar64 >> 8);
    bVar28 = (byte)((uint)fVar52 >> 0x10) & ~(byte)((uint)iVar64 >> 0x10);
    bVar29 = (byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18);
    bVar31 = SUB41(fVar55,0) & ~(byte)iVar66;
    bVar34 = (byte)((uint)fVar55 >> 8) & ~(byte)((uint)iVar66 >> 8);
    bVar37 = (byte)((uint)fVar55 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10);
    bVar40 = (byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18);
    fVar46 = (float)CONCAT13(bVar29,CONCAT12(bVar28,CONCAT11(bVar27,bVar26)));
    fVar42 = fVar42 * (float)CONCAT13(bVar29,CONCAT12(bVar28,CONCAT11(bVar27,bVar26)));
    fVar44 = fVar44 * (float)CONCAT13(bVar40,CONCAT12(bVar37,CONCAT11(bVar34,bVar31)));
    uVar32 = SUB41(fVar44,0);
    uVar35 = (undefined1)((uint)fVar44 >> 8);
    uVar38 = (undefined1)((uint)fVar44 >> 0x10);
    uVar41 = (undefined1)((uint)fVar44 >> 0x18);
    fVar43 = fVar8 * fVar46;
    fVar45 = (float)(CONCAT17(uVar39,CONCAT16(uVar36,CONCAT15(uVar33,CONCAT14(uVar30,fVar8)))) >>
                    0x20) *
             (float)(CONCAT17(bVar40,CONCAT16(bVar37,CONCAT15(bVar34,CONCAT14(bVar31,fVar46)))) >>
                    0x20);
    auVar4[4] = uVar32;
    auVar4._0_4_ = fVar42;
    auVar4[5] = uVar35;
    auVar4[6] = uVar38;
    auVar4[7] = uVar41;
    auVar4._8_4_ = fVar43;
    auVar4._12_4_ = fVar45;
    auVar5[4] = uVar32;
    auVar5._0_4_ = fVar42;
    auVar5[5] = uVar35;
    auVar5[6] = uVar38;
    auVar5[7] = uVar41;
    auVar5._8_4_ = fVar43;
    auVar5._12_4_ = fVar45;
    auVar48 = NEON_ext(auVar4,auVar5,4,1);
    auVar13 = *(undefined1 (*) [16])(param_1[2] + 8);
    auVar63 = NEON_ext(auVar13,auVar13,8,1);
    uVar21 = NEON_ext(auVar13._0_8_,auVar63._0_8_,4,1);
    fVar46 = auVar13._0_4_;
    fVar50 = auVar13._4_4_;
    fVar52 = auVar13._8_4_;
    fVar55 = auVar13._12_4_;
    fVar53 = (float)((ulong)uVar21 >> 0x20);
    fVar8 = (float)uVar21 * fVar42 - fVar46 * auVar48._0_4_;
    fVar44 = fVar53 * fVar44 - fVar50 * auVar48._4_4_;
    uVar30 = SUB41(fVar44,0);
    uVar33 = (undefined1)((uint)fVar44 >> 8);
    uVar36 = (undefined1)((uint)fVar44 >> 0x10);
    uVar39 = (undefined1)((uint)fVar44 >> 0x18);
    fVar43 = fVar46 * fVar43 - fVar52 * fVar42;
    fVar42 = fVar50 * fVar45 -
             fVar55 * (float)(CONCAT17(uVar41,CONCAT16(uVar38,CONCAT15(uVar35,CONCAT14(uVar32,fVar42
                                                                                      )))) >> 0x20);
    auVar6[4] = uVar30;
    auVar6._0_4_ = fVar8;
    auVar6[5] = uVar33;
    auVar6[6] = uVar36;
    auVar6[7] = uVar39;
    auVar6._8_4_ = fVar43;
    auVar6._12_4_ = fVar42;
    auVar7[4] = uVar30;
    auVar7._0_4_ = fVar8;
    auVar7[5] = uVar33;
    auVar7[6] = uVar36;
    auVar7[7] = uVar39;
    auVar7._8_4_ = fVar43;
    auVar7._12_4_ = fVar42;
    auVar13 = NEON_ext(auVar6,auVar7,4,1);
    fVar47 = auVar13._0_4_;
    fVar51 = auVar13._4_4_;
    fVar42 = fVar47 * fVar47 + fVar51 * fVar51 + fVar8 * fVar8;
    fVar45 = fVar47 * fVar47 + fVar51 * fVar51 + fVar8 * fVar8;
    uVar11 = CONCAT44(fVar45,fVar42);
    uVar68 = NEON_frsqrte(uVar11,4);
    fVar43 = (float)uVar68;
    fVar69 = (float)((ulong)uVar68 >> 0x20);
    uVar68 = NEON_frsqrts(uVar11,CONCAT44(fVar69 * fVar69,fVar43 * fVar43),4);
    fVar43 = fVar43 * (float)uVar68;
    fVar69 = fVar69 * (float)((ulong)uVar68 >> 0x20);
    iVar64 = -(uint)(fVar42 <= 0.0);
    iVar66 = -(uint)(fVar45 <= 0.0);
    uVar11 = NEON_frsqrts(uVar11,CONCAT44(fVar69 * fVar69,fVar43 * fVar43),4);
    fVar43 = (float)uVar11 * fVar43;
    fVar69 = (float)((ulong)uVar11 >> 0x20) * fVar69;
    fVar56 = (float)CONCAT13((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18),
                             CONCAT12((byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar64 >> 0x10),
                                      CONCAT11((byte)((uint)fVar43 >> 8) &
                                               ~(byte)((uint)iVar64 >> 8),
                                               SUB41(fVar43,0) & ~(byte)iVar64)));
    fVar65 = fVar47 * fVar56;
    fVar58 = (float)(CONCAT17((byte)((uint)fVar69 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18),
                              CONCAT16((byte)((uint)fVar69 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10),
                                       CONCAT15((byte)((uint)fVar69 >> 8) &
                                                ~(byte)((uint)iVar66 >> 8),
                                                CONCAT14(SUB41(fVar69,0) & ~(byte)iVar66,fVar56))))
                    >> 0x20);
    fVar67 = fVar51 * fVar58;
    fVar45 = (float)(CONCAT17(uVar39,CONCAT16(uVar36,CONCAT15(uVar33,CONCAT14(uVar30,fVar8)))) >>
                    0x20) * fVar58;
    uVar11 = NEON_ext(CONCAT44(fVar67,fVar65),CONCAT44(fVar44 * fVar58,fVar8 * fVar56),4,1);
    auVar49._0_4_ = (float)uVar21 * fVar47 * fVar56 - fVar46 * (float)uVar11;
    auVar49._4_4_ = fVar53 * fVar51 * fVar58 - fVar50 * (float)((ulong)uVar11 >> 0x20);
    auVar49._8_4_ = fVar46 * fVar8 * fVar56 - fVar52 * fVar65;
    auVar49._12_4_ = fVar50 * fVar45 - fVar55 * fVar67;
    auVar13 = NEON_ext(auVar49,auVar49,4,1);
    fVar53 = auVar13._0_4_;
    fVar69 = auVar13._4_4_;
    fVar42 = fVar53 * fVar53 + fVar69 * fVar69 + auVar49._0_4_ * auVar49._0_4_;
    fVar43 = fVar53 * fVar53 + fVar69 * fVar69 + auVar49._0_4_ * auVar49._0_4_;
    uVar11 = CONCAT44(fVar43,fVar42);
    uVar21 = NEON_frsqrte(uVar11,4);
    fVar44 = (float)uVar21;
    fVar70 = (float)((ulong)uVar21 >> 0x20);
    uVar21 = NEON_frsqrts(uVar11,CONCAT44(fVar70 * fVar70,fVar44 * fVar44),4);
    fVar44 = fVar44 * (float)uVar21;
    fVar70 = fVar70 * (float)((ulong)uVar21 >> 0x20);
    iVar64 = -(uint)(fVar42 <= 0.0);
    iVar66 = -(uint)(fVar43 <= 0.0);
    uVar11 = NEON_frsqrts(uVar11,CONCAT44(fVar70 * fVar70,fVar44 * fVar44),4);
    fVar44 = (float)uVar11 * fVar44;
    fVar70 = (float)((ulong)uVar11 >> 0x20) * fVar70;
    fVar57 = (float)CONCAT13((byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18),
                             CONCAT12((byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar64 >> 0x10),
                                      CONCAT11((byte)((uint)fVar44 >> 8) &
                                               ~(byte)((uint)iVar64 >> 8),
                                               SUB41(fVar44,0) & ~(byte)iVar64)));
    fVar43 = *(float *)param_1[4] - (float)*(undefined8 *)(param_1[6] + 8);
    fVar60 = *(float *)(param_1[4] + 4) - (float)((ulong)*(undefined8 *)(param_1[6] + 8) >> 0x20);
    fVar62 = *(float *)(param_1[4] + 8) - (float)*(undefined8 *)(param_1[7] + 4);
    fVar70 = (float)(CONCAT17((byte)((uint)fVar70 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18),
                              CONCAT16((byte)((uint)fVar70 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10),
                                       CONCAT15((byte)((uint)fVar70 >> 8) &
                                                ~(byte)((uint)iVar66 >> 8),
                                                CONCAT14(SUB41(fVar70,0) & ~(byte)iVar66,fVar57))))
                    >> 0x20);
    fVar42 = fVar8 * fVar56 * fVar62 + fVar65 * fVar43 + fVar67 * fVar60;
    fVar44 = auVar49._0_4_ * fVar57 * fVar62 + fVar53 * fVar57 * fVar43 + fVar69 * fVar70 * fVar60;
    fVar43 = auVar63._0_4_ * fVar62 + fVar46 * fVar43 + fVar50 * fVar60;
    if (param_1[8][8] == '\0') {
      auVar12 = SUB1612(*(undefined1 (*) [16])(param_1[5] + 4),0);
    }
    else {
      auVar14._0_4_ = fVar20 - fVar9;
      auVar14._4_4_ = fVar23 - fVar15;
      auVar14._8_4_ = fVar24 - fVar17;
      auVar14._12_4_ = fVar25 - fVar19;
      auVar13 = NEON_ext(auVar14,auVar14,4,1);
      fVar9 = *(float *)(param_1[5] + 4);
      fVar15 = *(float *)(param_1[5] + 8);
      fVar17 = *(float *)param_1[6];
      fVar54 = fVar54 * fVar9;
      fVar10 = fVar10 * fVar15;
      fVar16 = fVar16 * fVar17;
      fVar18 = fVar18 * *(float *)(param_1[6] + 4);
      auVar1._4_4_ = fVar10;
      auVar1._0_4_ = fVar54;
      auVar1._8_4_ = fVar16;
      auVar1._12_4_ = fVar18;
      auVar2._4_4_ = fVar10;
      auVar2._0_4_ = fVar54;
      auVar2._8_4_ = fVar16;
      auVar2._12_4_ = fVar18;
      auVar48 = NEON_ext(auVar1,auVar2,8,1);
      auVar22._0_4_ = auVar13._0_4_ * fVar9;
      auVar22._4_4_ = auVar13._4_4_ * fVar15;
      auVar22._8_4_ = auVar14._0_4_ * fVar17;
      auVar22._12_4_ = auVar14._4_4_ * *(float *)(param_1[6] + 4);
      auVar13 = NEON_ext(auVar22,auVar22,8,1);
      fVar19 = auVar22._0_4_ + auVar22._4_4_ + auVar13._0_4_;
      fVar16 = fVar17 * fVar17 + fVar9 * fVar9 + fVar15 * fVar15;
      fVar18 = fVar17 * fVar17 + fVar9 * fVar9 + fVar15 * fVar15;
      uVar11 = CONCAT44(fVar18,fVar16);
      uVar21 = NEON_frsqrte(uVar11,4);
      fVar20 = (float)uVar21;
      fVar23 = (float)((ulong)uVar21 >> 0x20);
      uVar21 = NEON_frsqrts(uVar11,CONCAT44(fVar23 * fVar23,fVar20 * fVar20),4);
      fVar54 = -(fVar54 + fVar10 + auVar48._0_4_);
      iVar59 = -(uint)(fVar16 <= 0.0);
      iVar61 = -(uint)(fVar18 <= 0.0);
      fVar20 = fVar20 * (float)uVar21;
      fVar23 = fVar23 * (float)((ulong)uVar21 >> 0x20);
      fVar10 = fVar54 * fVar54 + fVar19 * fVar19 + 0.0;
      fVar9 = fVar54 * fVar54 + fVar19 * fVar19 + 0.0;
      uVar21 = CONCAT44(fVar9,fVar10);
      uVar68 = NEON_frsqrte(uVar21,4);
      uVar11 = NEON_frsqrts(uVar11,CONCAT44(fVar23 * fVar23,fVar20 * fVar20),4);
      fVar15 = (float)uVar68;
      fVar17 = (float)((ulong)uVar68 >> 0x20);
      uVar68 = NEON_frsqrts(uVar21,CONCAT44(fVar17 * fVar17,fVar15 * fVar15),4);
      fVar15 = fVar15 * (float)uVar68;
      fVar17 = fVar17 * (float)((ulong)uVar68 >> 0x20);
      uVar21 = NEON_frsqrts(uVar21,CONCAT44(fVar17 * fVar17,fVar15 * fVar15),4);
      iVar64 = -(uint)(fVar10 <= 0.0);
      iVar66 = -(uint)(fVar9 <= 0.0);
      fVar15 = (float)uVar21 * fVar15;
      fVar17 = (float)((ulong)uVar21 >> 0x20) * fVar17;
      fVar9 = (float)CONCAT13((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18),
                              CONCAT12((byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar64 >> 0x10),
                                       CONCAT11((byte)((uint)fVar15 >> 8) &
                                                ~(byte)((uint)iVar64 >> 8),
                                                SUB41(fVar15,0) & ~(byte)iVar64)));
      fVar16 = fVar16 * (float)uVar11 * fVar20;
      fVar18 = fVar18 * (float)((ulong)uVar11 >> 0x20) * fVar23;
      fVar10 = (float)CONCAT13((byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18),
                               CONCAT12((byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar16 >> 8) &
                                                  ~(byte)((uint)iVar59 >> 8),
                                                  SUB41(fVar16,0) & ~(byte)iVar59)));
      auVar12._0_4_ = fVar10 * fVar54 * fVar9;
      auVar12._4_4_ =
           (float)(CONCAT17((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18),
                            CONCAT16((byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10),
                                     CONCAT15((byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar61 >> 8)
                                              ,CONCAT14(SUB41(fVar18,0) & ~(byte)iVar61,fVar10))))
                  >> 0x20) *
           fVar19 * (float)(CONCAT17((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18),
                                     CONCAT16((byte)((uint)fVar17 >> 0x10) &
                                              ~(byte)((uint)iVar66 >> 0x10),
                                              CONCAT15((byte)((uint)fVar17 >> 8) &
                                                       ~(byte)((uint)iVar66 >> 8),
                                                       CONCAT14(SUB41(fVar17,0) & ~(byte)iVar66,
                                                                fVar9)))) >> 0x20);
      auVar12._8_4_ = fVar10 * fVar9 * 0.0;
    }
    fVar10 = auVar12._0_4_ - fVar42;
    fVar16 = auVar12._4_4_ - fVar44;
    fVar18 = auVar12._8_4_ - fVar43;
    fVar9 = fVar10 * fVar10 + fVar16 * fVar16 + fVar18 * fVar18;
    fVar17 = fVar10 * fVar10 + fVar16 * fVar16 + fVar18 * fVar18;
    uVar11 = CONCAT44(fVar17,fVar9);
    fVar15 = *(float *)param_1[8];
    fVar54 = *(float *)(param_1[8] + 4);
    if (fVar54 * fVar54 < fVar15 * fVar15 * fVar9) {
      uVar21 = NEON_frsqrte(uVar11,4);
      fVar15 = (float)uVar21;
      fVar19 = (float)((ulong)uVar21 >> 0x20);
      uVar21 = NEON_frsqrts(uVar11,CONCAT44(fVar19 * fVar19,fVar15 * fVar15),4);
      fVar15 = fVar15 * (float)uVar21;
      fVar19 = fVar19 * (float)((ulong)uVar21 >> 0x20);
      iVar64 = -(uint)(fVar9 <= 0.0);
      iVar66 = -(uint)(fVar17 <= 0.0);
      uVar11 = NEON_frsqrts(uVar11,CONCAT44(fVar19 * fVar19,fVar15 * fVar15),4);
      fVar15 = (float)uVar11 * fVar15;
      fVar19 = (float)((ulong)uVar11 >> 0x20) * fVar19;
      fVar9 = (float)CONCAT13((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18),
                              CONCAT12((byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar64 >> 0x10),
                                       CONCAT11((byte)((uint)fVar15 >> 8) &
                                                ~(byte)((uint)iVar64 >> 8),
                                                SUB41(fVar15,0) & ~(byte)iVar64)));
      fVar15 = fVar9 * fVar54;
      fVar54 = (float)(CONCAT17((byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18),
                                CONCAT16((byte)((uint)fVar19 >> 0x10) &
                                         ~(byte)((uint)iVar66 >> 0x10),
                                         CONCAT15((byte)((uint)fVar19 >> 8) &
                                                  ~(byte)((uint)iVar66 >> 8),
                                                  CONCAT14(SUB41(fVar19,0) & ~(byte)iVar66,fVar9))))
                      >> 0x20) * fVar54;
    }
    else {
      fVar54 = fVar15;
    }
    fVar42 = fVar42 + fVar10 * fVar15;
    fVar44 = fVar44 + fVar16 * fVar54;
    fVar43 = fVar43 + fVar18 * fVar15;
    fVar54 = fVar46 * fVar43 + fVar47 * fVar56 * fVar42 + fVar53 * fVar57 * fVar44;
    fVar10 = fVar50 * fVar43 + fVar51 * fVar58 * fVar42 + fVar69 * fVar70 * fVar44;
    fVar8 = fVar52 * fVar43 + fVar8 * fVar56 * fVar42 + auVar49._0_4_ * fVar57 * fVar44;
    fVar42 = fVar55 * fVar43 + fVar45 * fVar42 + auVar49._4_4_ * fVar70 * fVar44;
    param_2[2] = fVar8;
    param_2[3] = fVar42;
    *param_2 = fVar54;
    param_2[1] = fVar10;
    uVar21 = *(undefined8 *)(param_1[7] + 4);
    uVar11 = *(undefined8 *)(param_1[6] + 8);
    param_2[2] = (float)uVar21 + fVar8;
    param_2[3] = (float)((ulong)uVar21 >> 0x20) + fVar42;
    *param_2 = (float)uVar11 + fVar54;
    param_2[1] = (float)((ulong)uVar11 >> 0x20) + fVar10;
  }
  return;
}


