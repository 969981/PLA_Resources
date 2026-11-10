/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032babe0; name: FUN_032babe0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032babe0(float param_1,float param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  ulong uVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  byte bVar43;
  byte bVar44;
  byte bVar49;
  byte bVar50;
  undefined8 uVar39;
  undefined8 uVar40;
  byte bVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  byte bVar51;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar52;
  int iVar53;
  int iVar59;
  undefined8 uVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined8 uVar60;
  undefined8 uVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar64;
  float fVar67;
  undefined8 uVar65;
  undefined1 auVar66 [16];
  
  uVar6 = param_3[1];
  uVar40 = *param_3;
  uVar5 = param_3[3];
  uVar4 = param_3[2];
  uVar13 = param_4[2];
  fVar8 = (float)uVar4 - (float)uVar40;
  fVar9 = (float)((ulong)uVar4 >> 0x20) - (float)((ulong)uVar40 >> 0x20);
  fVar10 = (float)uVar5 - (float)uVar6;
  fVar11 = (float)((ulong)uVar5 >> 0x20) - (float)((ulong)uVar6 >> 0x20);
  fVar33 = (float)*param_4;
  fVar12 = (float)uVar13 - fVar33;
  fVar34 = (float)((ulong)*param_4 >> 0x20);
  fVar14 = (float)((ulong)uVar13 >> 0x20) - fVar34;
  fVar64 = (float)param_4[1];
  fVar15 = (float)param_4[3] - fVar64;
  fVar67 = (float)((ulong)param_4[1] >> 0x20);
  fVar16 = (float)((ulong)param_4[3] >> 0x20) - fVar67;
  fVar17 = fVar8 * fVar12 + fVar9 * fVar14 + fVar10 * fVar15;
  fVar18 = fVar8 * fVar12 + fVar9 * fVar14 + fVar10 * fVar15;
  if (fVar17 < 0.0) {
    fVar17 = -fVar17;
    fVar18 = -fVar18;
    fVar8 = -fVar8;
    fVar9 = -fVar9;
    fVar10 = -fVar10;
    fVar11 = -fVar11;
    uVar13 = uVar40;
    uVar7 = uVar6;
  }
  else {
    uVar13 = uVar4;
    uVar7 = uVar5;
    uVar4 = uVar40;
    uVar5 = uVar6;
  }
  fVar23 = fVar33 - (float)uVar4;
  fVar37 = (float)((ulong)uVar4 >> 0x20);
  fVar24 = fVar34 - fVar37;
  fVar26 = fVar64 - (float)uVar5;
  fVar52 = fVar17 * fVar17;
  fVar19 = fVar23 * fVar8;
  fVar21 = fVar24 * fVar9;
  fVar22 = fVar26 * fVar10;
  fVar23 = fVar12 * fVar23;
  fVar24 = fVar14 * fVar24;
  fVar26 = fVar15 * fVar26;
  fVar20 = fVar19 + fVar21 + fVar22;
  fVar22 = fVar19 + fVar21 + fVar22;
  fVar19 = fVar26 + fVar23 + fVar24;
  fVar26 = fVar26 + fVar23 + fVar24;
  fVar21 = fVar8 * fVar8 + fVar9 * fVar9;
  fVar23 = fVar8 * fVar8 + fVar9 * fVar9;
  fVar24 = fVar10 * fVar10 + fVar21;
  fVar25 = fVar10 * fVar10 + fVar23;
  uVar40 = CONCAT44(fVar25,fVar24);
  fVar27 = fVar15 * fVar15 + fVar12 * fVar12 + fVar14 * fVar14;
  fVar28 = fVar15 * fVar15 + fVar12 * fVar12 + fVar14 * fVar14;
  fVar29 = fVar24 * fVar27;
  fVar30 = fVar25 * fVar28;
  uVar6 = CONCAT44(fVar30,fVar29);
  fVar31 = ABS(fVar29 - fVar52);
  uVar60 = CONCAT44(ABS(fVar30 - fVar18 * fVar18),fVar31);
  fVar36 = fVar20 * fVar27 - fVar17 * fVar19;
  uVar39 = NEON_fmov(0x3f800000,4);
  if (fVar36 * fVar31 < (fVar29 - fVar52) * (fVar29 - fVar52)) {
    if (0.0 < fVar36) {
      fVar52 = (fVar52 + ABS(fVar29)) * 9.536743e-07;
      uVar61 = NEON_fmov(0x3f800000,4);
      uVar54 = NEON_frecpe(uVar60,4);
      bVar2 = fVar31 <= fVar52;
      uVar65 = NEON_frecps(uVar60,uVar54,4);
      fVar46 = (float)uVar54 * (float)uVar65;
      fVar38 = (float)((ulong)uVar54 >> 0x20) * (float)((ulong)uVar65 >> 0x20);
      uVar60 = NEON_frecps(uVar60,CONCAT44(fVar38,fVar46),4);
      if (fVar52 < fVar31) {
        uVar61 = CONCAT44((fVar22 * fVar28 - fVar18 * fVar26) *
                          fVar38 * (float)((ulong)uVar60 >> 0x20),fVar36 * fVar46 * (float)uVar60);
      }
    }
    else {
      bVar2 = 2;
      uVar61 = 0;
    }
  }
  else {
    bVar2 = 1;
    uVar61 = uVar39;
  }
  fVar36 = fVar17 * (float)uVar61 - fVar19;
  if (fVar27 <= fVar36) {
    bVar2 = 4;
  }
  else {
    if (0.0 < fVar36) {
      uVar40 = NEON_frecpe(CONCAT44(fVar28,fVar27),4);
      uVar60 = NEON_frecps(CONCAT44(fVar28,fVar27),uVar40,4);
      fVar52 = (float)uVar40 * (float)uVar60;
      fVar46 = (float)((ulong)uVar40 >> 0x20) * (float)((ulong)uVar60 >> 0x20);
      uVar40 = NEON_frecps(CONCAT44(fVar28,fVar27),CONCAT44(fVar46,fVar52),4);
      uVar39 = CONCAT44((fVar18 * (float)((ulong)uVar61 >> 0x20) - fVar26) *
                        fVar46 * (float)((ulong)uVar40 >> 0x20),fVar36 * fVar52 * (float)uVar40);
      goto LAB_032bacc4;
    }
    uVar39 = 0;
    bVar2 = 8;
  }
  fVar36 = fVar20 + fVar17 * (float)uVar39;
  if (fVar36 <= 0.0) {
    bVar2 = bVar2 | 2;
    uVar61 = 0;
  }
  else if (fVar24 <= fVar36) {
    bVar2 = bVar2 | 1;
    uVar61 = NEON_fmov(0x3f800000,4);
  }
  else {
    uVar60 = NEON_frecpe(uVar40,4);
    uVar61 = NEON_frecps(uVar40,uVar60,4);
    fVar52 = (float)uVar60 * (float)uVar61;
    fVar46 = (float)((ulong)uVar60 >> 0x20) * (float)((ulong)uVar61 >> 0x20);
    uVar40 = NEON_frecps(uVar40,CONCAT44(fVar46,fVar52),4);
    uVar61 = CONCAT44((fVar22 + fVar18 * (float)((ulong)uVar39 >> 0x20)) *
                      fVar46 * (float)((ulong)uVar40 >> 0x20),fVar36 * fVar52 * (float)uVar40);
  }
LAB_032bacc4:
  param_1 = param_1 + param_2;
  fVar52 = (float)((ulong)uVar61 >> 0x20);
  fVar47 = (float)((ulong)uVar39 >> 0x20);
  fVar36 = (float)uVar4 + fVar8 * (float)uVar61;
  fVar37 = fVar37 + fVar9 * fVar52;
  fVar46 = (float)uVar5 + fVar10 * (float)uVar61;
  fVar52 = (float)((ulong)uVar5 >> 0x20) + fVar11 * fVar52;
  fVar38 = fVar36 - (fVar33 + fVar12 * (float)uVar39);
  fVar48 = fVar37 - (fVar34 + fVar14 * fVar47);
  auVar57._0_8_ = CONCAT44(fVar48,fVar38);
  auVar57._8_4_ = fVar46 - (fVar64 + fVar15 * (float)uVar39);
  auVar57._12_4_ = fVar52 - (fVar67 + fVar16 * fVar47);
  uVar35 = (undefined4)((ulong)param_5[3] >> 0x20);
  uVar60 = NEON_fmax(CONCAT44(uVar35,uVar35),0x3400000034000000,4);
  fVar33 = fVar38 * fVar38 + fVar48 * fVar48 + auVar57._8_4_ * auVar57._8_4_;
  fVar34 = fVar38 * fVar38 + fVar48 * fVar48 + auVar57._8_4_ * auVar57._8_4_;
  uVar40 = CONCAT44(fVar34,fVar33);
  uVar39 = NEON_frsqrte(uVar40,4);
  param_5[3] = auVar57._8_8_;
  param_5[2] = auVar57._0_8_;
  fVar64 = (float)uVar39;
  fVar67 = (float)((ulong)uVar39 >> 0x20);
  uVar39 = NEON_frsqrts(uVar40,CONCAT44(fVar67 * fVar67,fVar64 * fVar64),4);
  fVar64 = fVar64 * (float)uVar39;
  fVar67 = fVar67 * (float)((ulong)uVar39 >> 0x20);
  uVar40 = NEON_frsqrts(uVar40,CONCAT44(fVar67 * fVar67,fVar64 * fVar64),4);
  iVar53 = -(uint)(fVar33 <= 0.0);
  iVar59 = -(uint)(fVar34 <= 0.0);
  fVar33 = fVar33 * (float)uVar40 * fVar64;
  fVar34 = fVar34 * (float)((ulong)uVar40 >> 0x20) * fVar67;
  fVar64 = (float)CONCAT13((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar53 >> 0x18),
                           CONCAT12((byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar53 >> 0x10),
                                    CONCAT11((byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar53 >> 8),
                                             SUB41(fVar33,0) & ~(byte)iVar53)));
  uVar40 = CONCAT17((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18),
                    CONCAT16((byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10),
                             CONCAT15((byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar59 >> 8),
                                      CONCAT14(SUB41(fVar34,0) & ~(byte)iVar59,fVar64))));
  fVar33 = fVar64 - param_1;
  if (fVar33 < (float)uVar60) {
    if (fVar64 < 1.1920929e-07) {
      auVar55._12_4_ = fVar11;
      auVar55._8_4_ = fVar10;
      auVar55._4_4_ = fVar9;
      auVar55._0_4_ = fVar8;
      auVar56._0_12_ = auVar55._0_12_;
      auVar56._12_4_ = 0;
      auVar62._8_8_ = _UNK_03889038;
      auVar62._0_8_ = _DAT_03889030;
      auVar62 = a64_TBL(ZEXT816(0),auVar56,auVar62);
      auVar66._8_8_ = _UNK_03889f18;
      auVar66._0_8_ = _DAT_03889f10;
      auVar57 = a64_TBL(ZEXT816(0),auVar56,auVar66);
      fVar64 = auVar57._0_4_;
      auVar41._0_4_ = fVar64 * fVar64;
      auVar41._4_4_ = auVar57._4_4_ * auVar57._4_4_;
      auVar41._8_4_ = auVar57._8_4_ * auVar57._8_4_;
      auVar41._12_4_ = auVar57._12_4_ * auVar57._12_4_;
      auVar66 = NEON_ext(auVar41,auVar41,8,1);
      fVar34 = auVar66._0_4_ + auVar66._4_4_;
      auVar63._4_12_ = auVar62._4_12_;
      auVar63._0_4_ = -auVar62._0_4_;
      auVar58._4_12_ = auVar57._4_12_;
      auVar58._0_4_ = -fVar64;
      auVar42._0_8_ =
           CONCAT44(-(uint)(fVar23 < auVar41._0_4_ + auVar41._4_4_ + fVar34),
                    -(uint)(fVar21 < auVar41._0_4_ + auVar41._4_4_ + fVar34));
      auVar42._8_8_ = auVar42._0_8_;
      auVar57 = auVar63 ^ (auVar63 ^ auVar58) & auVar42;
      fVar34 = auVar57._0_4_ * auVar57._0_4_;
      fVar67 = auVar57._4_4_ * auVar57._4_4_;
      fVar21 = auVar57._8_4_ * auVar57._8_4_;
      fVar64 = fVar34 + fVar67 + fVar21;
      fVar21 = fVar34 + fVar67 + fVar21;
      uVar60 = CONCAT44(fVar21,fVar64);
      uVar40 = 0;
      uVar39 = NEON_frsqrte(uVar60,4);
      fVar34 = (float)uVar39;
      fVar67 = (float)((ulong)uVar39 >> 0x20);
      uVar39 = NEON_frsqrts(uVar60,CONCAT44(fVar67 * fVar67,fVar34 * fVar34),4);
      fVar34 = fVar34 * (float)uVar39;
      fVar67 = fVar67 * (float)((ulong)uVar39 >> 0x20);
      iVar53 = -(uint)(fVar64 <= 0.0);
      iVar59 = -(uint)(fVar21 <= 0.0);
      uVar60 = NEON_frsqrts(uVar60,CONCAT44(fVar67 * fVar67,fVar34 * fVar34),4);
      fVar34 = (float)uVar60 * fVar34;
      fVar67 = (float)((ulong)uVar60 >> 0x20) * fVar67;
      uVar60 = CONCAT17((byte)((uint)fVar67 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18),
                        CONCAT16((byte)((uint)fVar67 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10),
                                 CONCAT15((byte)((uint)fVar67 >> 8) & ~(byte)((uint)iVar59 >> 8),
                                          CONCAT14(SUB41(fVar67,0) & ~(byte)iVar59,
                                                   CONCAT13((byte)((uint)fVar34 >> 0x18) &
                                                            ~(byte)((uint)iVar53 >> 0x18),
                                                            CONCAT12((byte)((uint)fVar34 >> 0x10) &
                                                                     ~(byte)((uint)iVar53 >> 0x10),
                                                                     CONCAT11((byte)((uint)fVar34 >>
                                                                                    8) &
                                                                              ~(byte)((uint)iVar53
                                                                                     >> 8),
                                                                              SUB41(fVar34,0) &
                                                                              ~(byte)iVar53)))))));
    }
    else {
      uVar60 = NEON_frecpe(uVar40,4);
      uVar39 = NEON_frecps(uVar40,uVar60,4);
      fVar34 = (float)uVar60 * (float)uVar39;
      fVar64 = (float)((ulong)uVar60 >> 0x20) * (float)((ulong)uVar39 >> 0x20);
      uVar60 = NEON_frecps(uVar40,CONCAT44(fVar64,fVar34),4);
      uVar60 = CONCAT44(fVar64 * (float)((ulong)uVar60 >> 0x20),fVar34 * (float)uVar60);
    }
    fVar23 = param_2 - (float)uVar40;
    fVar38 = param_2 - (float)((ulong)uVar40 >> 0x20);
    fVar64 = (float)((ulong)uVar60 >> 0x20);
    fVar34 = auVar57._0_4_ * (float)uVar60;
    fVar67 = auVar57._4_4_ * fVar64;
    fVar21 = auVar57._8_4_ * (float)uVar60;
    param_5[1] = CONCAT44(fVar52 + auVar57._12_4_ * fVar64 * fVar38,fVar46 + fVar21 * fVar23);
    *param_5 = CONCAT44(fVar37 + fVar67 * fVar38,fVar36 + fVar34 * fVar23);
    param_5[3] = CONCAT44(fVar33,fVar21);
    param_5[2] = CONCAT44(fVar67,fVar34);
    if (fVar31 <= fVar27 * fVar24 * 0.2) {
      uVar40 = NEON_frecpe(uVar6,4);
      uVar60 = NEON_frecps(uVar6,uVar40,4);
      fVar33 = (float)uVar40 * (float)uVar60;
      fVar34 = (float)((ulong)uVar40 >> 0x20) * (float)((ulong)uVar60 >> 0x20);
      iVar53 = -(uint)(fVar29 == 0.0);
      iVar59 = -(uint)(fVar30 == 0.0);
      uVar40 = NEON_frecps(uVar6,CONCAT44(fVar34,fVar33),4);
      uVar32 = CONCAT44(fVar34 * (float)((ulong)uVar40 >> 0x20),fVar33 * (float)uVar40) &
               CONCAT17(~(byte)((uint)iVar59 >> 0x18),
                        CONCAT16(~(byte)((uint)iVar59 >> 0x10),
                                 CONCAT15(~(byte)((uint)iVar59 >> 8),
                                          CONCAT14(~(byte)iVar59,
                                                   CONCAT13(~(byte)((uint)iVar53 >> 0x18),
                                                            CONCAT12(~(byte)((uint)iVar53 >> 0x10),
                                                                     CONCAT11(~(byte)((uint)iVar53
                                                                                     >> 8),
                                                                              ~(byte)iVar53)))))));
      fVar34 = (float)uVar32;
      fVar33 = fVar24 * fVar34;
      fVar64 = (float)(uVar32 >> 0x20);
      fVar34 = fVar27 * fVar34;
      fVar19 = -fVar19;
      fVar26 = -fVar26;
      lVar3 = 0;
      bVar43 = bVar2 & 10;
      puVar1 = param_4;
      do {
        if (bVar43 == 0) {
          uVar6 = puVar1[1];
          uVar40 = *puVar1;
          if (fVar19 <= 0.0) {
            if (0.0 < fVar20) {
              if (fVar24 < fVar20) goto joined_r0x032baf1c;
LAB_032bafb4:
              fVar67 = fVar34 * fVar20;
              fVar21 = fVar28 * fVar64 * fVar22;
              uVar4 = CONCAT44((float)((ulong)uVar4 >> 0x20) + fVar21 * fVar9,
                               (float)uVar4 + fVar67 * fVar8);
              uVar5 = CONCAT44((float)((ulong)uVar5 >> 0x20) + fVar21 * fVar11,
                               (float)uVar5 + fVar67 * fVar10);
            }
          }
          else {
            if (fVar27 < fVar19) goto joined_r0x032baf1c;
            if (0.0 < fVar20) {
              if (fVar24 < fVar20) goto joined_r0x032baf1c;
              if (fVar34 * fVar20 * fVar20 < fVar33 * fVar19 * fVar19) goto LAB_032bafb4;
            }
            fVar67 = fVar33 * fVar19;
            fVar21 = fVar25 * fVar64 * fVar26;
            uVar40 = CONCAT44(fVar21 * fVar14 + (float)((ulong)uVar40 >> 0x20),
                              fVar67 * fVar12 + (float)uVar40);
            uVar6 = CONCAT44(fVar21 * fVar16 + (float)((ulong)uVar6 >> 0x20),
                             fVar67 * fVar15 + (float)uVar6);
          }
          fVar23 = (float)uVar4 - (float)uVar40;
          fVar67 = (float)((ulong)uVar4 >> 0x20);
          fVar37 = fVar67 - (float)((ulong)uVar40 >> 0x20);
          fVar29 = (float)uVar5 - (float)uVar6;
          fVar21 = (float)((ulong)uVar5 >> 0x20);
          fVar30 = param_1 + (float)((ulong)*(undefined8 *)((long)param_5 + lVar3 + 0x38) >> 0x20);
          fVar36 = fVar23 * fVar23 + fVar37 * fVar37 + fVar29 * fVar29;
          fVar31 = fVar23 * fVar23 + fVar37 * fVar37 + fVar29 * fVar29;
          uVar40 = CONCAT44(fVar31,fVar36);
          if (fVar36 < fVar30 * fVar30) {
            uVar60 = NEON_frsqrte(uVar40,4);
            fVar30 = (float)uVar60;
            fVar46 = (float)((ulong)uVar60 >> 0x20);
            uVar60 = NEON_frsqrts(uVar40,CONCAT44(fVar46 * fVar46,fVar30 * fVar30),4);
            fVar30 = fVar30 * (float)uVar60;
            fVar46 = fVar46 * (float)((ulong)uVar60 >> 0x20);
            uVar40 = NEON_frsqrts(uVar40,CONCAT44(fVar46 * fVar46,fVar30 * fVar30),4);
            fVar30 = (float)uVar40 * fVar30;
            fVar46 = (float)((ulong)uVar40 >> 0x20) * fVar46;
            iVar53 = -(uint)(fVar36 <= 0.0);
            iVar59 = -(uint)(fVar31 <= 0.0);
            fVar52 = fVar36 * fVar30;
            fVar31 = fVar31 * fVar46;
            bVar43 = (byte)((uint)iVar53 >> 8);
            bVar44 = (byte)((uint)iVar53 >> 0x10);
            bVar45 = (byte)((uint)iVar53 >> 0x18);
            bVar49 = (byte)((uint)iVar59 >> 8);
            bVar50 = (byte)((uint)iVar59 >> 0x10);
            bVar51 = (byte)((uint)iVar59 >> 0x18);
            fVar52 = (float)CONCAT13((byte)((uint)fVar52 >> 0x18) & ~bVar45,
                                     CONCAT12((byte)((uint)fVar52 >> 0x10) & ~bVar44,
                                              CONCAT11((byte)((uint)fVar52 >> 8) & ~bVar43,
                                                       SUB41(fVar52,0) & ~(byte)iVar53)));
            if (fVar36 <= 1.1920929e-07) {
              uVar6 = param_5[3];
              uVar40 = param_5[2];
            }
            else {
              fVar30 = (float)CONCAT13((byte)((uint)fVar30 >> 0x18) & ~bVar45,
                                       CONCAT12((byte)((uint)fVar30 >> 0x10) & ~bVar44,
                                                CONCAT11((byte)((uint)fVar30 >> 8) & ~bVar43,
                                                         SUB41(fVar30,0) & ~(byte)iVar53)));
              fVar36 = (float)(CONCAT17((byte)((uint)fVar46 >> 0x18) & ~bVar51,
                                        CONCAT16((byte)((uint)fVar46 >> 0x10) & ~bVar50,
                                                 CONCAT15((byte)((uint)fVar46 >> 8) & ~bVar49,
                                                          CONCAT14(SUB41(fVar46,0) & ~(byte)iVar59,
                                                                   fVar30)))) >> 0x20);
              uVar40 = CONCAT44(fVar37 * fVar36,fVar23 * fVar30);
              uVar6 = CONCAT44((fVar21 - (float)((ulong)uVar6 >> 0x20)) * fVar36,fVar29 * fVar30);
            }
            fVar23 = param_2 - (float)(CONCAT17((byte)((uint)fVar31 >> 0x18) & ~bVar51,
                                                CONCAT16((byte)((uint)fVar31 >> 0x10) & ~bVar50,
                                                         CONCAT15((byte)((uint)fVar31 >> 8) &
                                                                  ~bVar49,CONCAT14(SUB41(fVar31,0) &
                                                                                   ~(byte)iVar59,
                                                                                   fVar52)))) >>
                                      0x20);
            *(ulong *)((long)param_5 + lVar3 + 0x28) =
                 CONCAT44(fVar21 + fVar23 * (float)((ulong)uVar6 >> 0x20),
                          (float)uVar5 + (param_2 - fVar52) * (float)uVar6);
            *(ulong *)((long)param_5 + lVar3 + 0x20) =
                 CONCAT44(fVar67 + fVar23 * (float)((ulong)uVar40 >> 0x20),
                          (float)uVar4 + (param_2 - fVar52) * (float)uVar40);
            *(ulong *)((long)param_5 + lVar3 + 0x38) = CONCAT44(fVar52 - param_1,(float)uVar6);
            *(undefined8 *)((long)param_5 + lVar3 + 0x30) = uVar40;
          }
        }
joined_r0x032baf1c:
        if ((int)lVar3 == 0x20) {
          return;
        }
        lVar3 = lVar3 + 0x20;
        fVar12 = -fVar12;
        fVar14 = -fVar14;
        fVar15 = -fVar15;
        fVar16 = -fVar16;
        fVar20 = (fVar24 - fVar20) - fVar17;
        fVar22 = (fVar25 - fVar22) - fVar18;
        fVar19 = (fVar27 - fVar19) - fVar17;
        fVar26 = (fVar28 - fVar26) - fVar18;
        fVar8 = -fVar8;
        fVar9 = -fVar9;
        fVar10 = -fVar10;
        fVar11 = -fVar11;
        bVar43 = bVar2 & 5;
        uVar4 = uVar13;
        uVar5 = uVar7;
        puVar1 = param_4 + 2;
      } while( true );
    }
  }
  else {
    uVar4 = NEON_frecpe(uVar40,4);
    uVar5 = NEON_frecps(uVar40,uVar4,4);
    fVar12 = (float)uVar4 * (float)uVar5;
    fVar14 = (float)((ulong)uVar4 >> 0x20) * (float)((ulong)uVar5 >> 0x20);
    uVar4 = NEON_frecps(uVar40,CONCAT44(fVar14,fVar12),4);
    fVar12 = fVar12 * (float)uVar4;
    param_5[3] = CONCAT44(fVar33,auVar57._8_4_ * fVar12);
    param_5[2] = CONCAT44(fVar48 * fVar14 * (float)((ulong)uVar4 >> 0x20),fVar38 * fVar12);
  }
  return;
}


