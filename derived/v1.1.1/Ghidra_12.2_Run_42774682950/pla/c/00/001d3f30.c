/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001d3f30; name: FUN_001d3f30
 */


undefined8
FUN_001d3f30(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 *param_5,undefined8 *param_6,float *param_7)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  float fVar13;
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
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  int iVar47;
  undefined8 uVar48;
  int iVar54;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar53;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar55;
  undefined8 uVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar67 [16];
  undefined1 auVar66 [16];
  undefined1 auVar65 [16];
  undefined1 auVar64 [16];
  undefined1 auVar71 [16];
  undefined1 auVar70 [16];
  undefined1 auVar69 [16];
  undefined1 auVar68 [16];
  undefined1 auVar72 [16];
  undefined8 uVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  undefined1 auVar84 [16];
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar95;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  float fVar96;
  float fVar100;
  undefined8 uVar97;
  ulong uVar98;
  float fVar101;
  undefined1 auVar99 [16];
  
  fVar13 = (float)*param_4;
  fVar17 = (float)*param_3;
  fVar21 = fVar13 - fVar17;
  fVar14 = (float)((ulong)*param_4 >> 0x20);
  fVar18 = (float)((ulong)*param_3 >> 0x20);
  fVar22 = fVar14 - fVar18;
  fVar15 = (float)param_4[1];
  fVar19 = (float)param_3[1];
  fVar23 = fVar15 - fVar19;
  fVar16 = (float)((ulong)param_4[1] >> 0x20);
  fVar20 = (float)((ulong)param_3[1] >> 0x20);
  fVar24 = fVar16 - fVar20;
  fVar25 = (float)*param_5;
  fVar29 = fVar25 - fVar13;
  fVar26 = (float)((ulong)*param_5 >> 0x20);
  fVar30 = fVar26 - fVar14;
  fVar27 = (float)param_5[1];
  fVar31 = fVar27 - fVar15;
  fVar28 = (float)((ulong)param_5[1] >> 0x20);
  fVar32 = fVar28 - fVar16;
  auVar38._4_4_ = fVar30;
  auVar38._0_4_ = fVar29;
  auVar38._8_4_ = fVar31;
  auVar38._12_4_ = fVar32;
  auVar75._4_4_ = fVar30;
  auVar75._0_4_ = fVar29;
  auVar75._8_4_ = fVar31;
  auVar75._12_4_ = fVar32;
  auVar38 = NEON_ext(auVar38,auVar75,4,1);
  auVar37._4_4_ = fVar22;
  auVar37._0_4_ = fVar21;
  auVar37._8_4_ = fVar23;
  auVar37._12_4_ = fVar24;
  auVar74._4_4_ = fVar22;
  auVar74._0_4_ = fVar21;
  auVar74._8_4_ = fVar23;
  auVar74._12_4_ = fVar24;
  auVar37 = NEON_ext(auVar37,auVar74,4,1);
  pauVar1 = (undefined1 (*) [12])(PTR_DAT_04372370 + 0x60);
  fVar85 = (float)((ulong)*(undefined8 *)(PTR_DAT_04372370 + 0x68) >> 0x20);
  uVar12 = *(undefined8 *)(PTR_DAT_04372370 + 0x50);
  fVar80 = fVar21 * fVar21;
  fVar83 = fVar29 * fVar29;
  fVar33 = fVar17 - fVar25;
  fVar34 = fVar18 - fVar26;
  fVar35 = fVar19 - fVar27;
  fVar36 = fVar20 - fVar28;
  fVar76 = fVar21 * auVar38._0_4_ - fVar29 * auVar37._0_4_;
  fVar77 = fVar22 * auVar38._4_4_ - fVar30 * auVar37._4_4_;
  fVar78 = fVar23 * fVar29 - fVar31 * fVar21;
  fVar79 = fVar24 * fVar30 - fVar32 * fVar22;
  auVar60._4_4_ = fVar77;
  auVar60._0_4_ = fVar76;
  auVar60._8_4_ = fVar78;
  auVar60._12_4_ = fVar79;
  auVar62._4_4_ = fVar77;
  auVar62._0_4_ = fVar76;
  auVar62._8_4_ = fVar78;
  auVar62._12_4_ = fVar79;
  auVar74 = NEON_ext(auVar60,auVar62,4,1);
  auVar84._4_4_ = fVar34;
  auVar84._0_4_ = fVar33;
  auVar84._8_4_ = fVar35;
  auVar84._12_4_ = fVar36;
  auVar57._4_4_ = fVar34;
  auVar57._0_4_ = fVar33;
  auVar57._8_4_ = fVar35;
  auVar57._12_4_ = fVar36;
  auVar75 = NEON_ext(auVar84,auVar57,4,1);
  auVar8._4_4_ = fVar83;
  auVar8._0_4_ = fVar80;
  auVar8._8_4_ = fVar23 * fVar23;
  auVar8._12_4_ = fVar31 * fVar31;
  auVar9._4_4_ = fVar83;
  auVar9._0_4_ = fVar80;
  auVar9._8_4_ = fVar23 * fVar23;
  auVar9._12_4_ = fVar31 * fVar31;
  auVar84 = NEON_ext(auVar8,auVar9,8,1);
  auVar61._4_4_ = auVar84._4_4_ + fVar30 * fVar30 + fVar83;
  auVar61._0_4_ = auVar84._0_4_ + fVar22 * fVar22 + fVar80;
  uVar73 = *(undefined8 *)(PTR_DAT_04372370 + 0x240);
  uVar56 = param_1[1];
  uVar48 = *param_1;
  fVar81 = (float)param_1[3];
  fVar82 = (float)((ulong)param_1[3] >> 0x20);
  fVar80 = (float)param_1[2];
  fVar83 = (float)((ulong)param_1[2] >> 0x20);
  fVar78 = auVar74._0_4_;
  fVar79 = auVar74._4_4_;
  auVar91._12_4_ = fVar77;
  auVar91._8_4_ = fVar76;
  do {
    fVar86 = (float)uVar48;
    auVar90._0_4_ = fVar86 - fVar17;
    fVar87 = (float)((ulong)uVar48 >> 0x20);
    auVar90._4_4_ = fVar87 - fVar18;
    fVar88 = (float)uVar56;
    auVar90._8_4_ = fVar88 - fVar19;
    fVar89 = (float)((ulong)uVar56 >> 0x20);
    auVar90._12_4_ = fVar89 - fVar20;
    auVar84 = NEON_ext(auVar90,auVar90,4,1);
    fVar77 = fVar86 - fVar13;
    fVar100 = fVar87 - fVar14;
    uVar39 = SUB41(fVar100,0);
    uVar40 = (undefined1)((uint)fVar100 >> 8);
    uVar41 = (undefined1)((uint)fVar100 >> 0x10);
    uVar42 = (undefined1)((uint)fVar100 >> 0x18);
    fVar43 = fVar88 - fVar15;
    fVar44 = fVar89 - fVar16;
    auVar99._0_4_ = fVar86 - fVar25;
    auVar99._4_4_ = fVar87 - fVar26;
    auVar99._8_4_ = fVar88 - fVar27;
    auVar99._12_4_ = fVar89 - fVar28;
    auVar49._0_4_ = fVar21 * auVar84._0_4_ - auVar90._0_4_ * auVar37._0_4_;
    auVar49._4_4_ = fVar22 * auVar84._4_4_ - auVar90._4_4_ * auVar37._4_4_;
    auVar49._8_4_ = fVar23 * auVar90._0_4_ - auVar90._8_4_ * fVar21;
    auVar49._12_4_ = fVar24 * auVar90._4_4_ - auVar90._12_4_ * fVar22;
    auVar57 = NEON_ext(auVar49,auVar49,4,1);
    auVar2[4] = uVar39;
    auVar2._0_4_ = fVar77;
    auVar2[5] = uVar40;
    auVar2[6] = uVar41;
    auVar2[7] = uVar42;
    auVar2._8_4_ = fVar43;
    auVar2._12_4_ = fVar44;
    auVar3[4] = uVar39;
    auVar3._0_4_ = fVar77;
    auVar3[5] = uVar40;
    auVar3[6] = uVar41;
    auVar3[7] = uVar42;
    auVar3._8_4_ = fVar43;
    auVar3._12_4_ = fVar44;
    auVar84 = NEON_ext(auVar2,auVar3,4,1);
    auVar50._0_4_ = fVar29 * auVar84._0_4_ - fVar77 * auVar38._0_4_;
    auVar50._4_4_ = fVar30 * auVar84._4_4_ - fVar100 * auVar38._4_4_;
    auVar50._8_4_ = fVar31 * fVar77 - fVar43 * fVar29;
    auVar50._12_4_ =
         fVar32 * (float)(CONCAT17(uVar42,CONCAT16(uVar41,CONCAT15(uVar40,CONCAT14(uVar39,fVar77))))
                         >> 0x20) - fVar44 * fVar30;
    auVar60 = NEON_ext(auVar50,auVar50,4,1);
    auVar84 = NEON_ext(auVar99,auVar99,4,1);
    fVar45 = fVar33 * auVar84._0_4_ - auVar99._0_4_ * auVar75._0_4_;
    fVar53 = fVar34 * auVar84._4_4_ - auVar99._4_4_ * auVar75._4_4_;
    auVar51._0_8_ = CONCAT44(fVar53,fVar45);
    auVar51._8_4_ = fVar35 * auVar99._0_4_ - auVar99._8_4_ * fVar33;
    auVar51._12_4_ = fVar36 * auVar99._4_4_ - auVar99._12_4_ * fVar34;
    auVar62 = NEON_ext(auVar51,auVar51,4,1);
    auVar63._0_8_ = auVar62._0_8_;
    auVar63._8_8_ = auVar51._0_8_;
    fVar46 = auVar57._0_4_ * fVar78;
    fVar55 = fVar78 * auVar60._0_4_;
    auVar64._4_12_ = auVar63._4_12_;
    auVar64._0_4_ = fVar46;
    auVar66._0_8_ = auVar64._0_8_;
    auVar66._8_4_ = auVar49._0_4_ * fVar76;
    auVar66._12_4_ = fVar53;
    auVar65._8_8_ = auVar66._8_8_;
    auVar65._4_4_ = fVar55;
    auVar65._0_4_ = fVar46;
    auVar67._0_12_ = auVar65._0_12_;
    auVar67._12_4_ = fVar76 * auVar50._0_4_;
    auVar84 = NEON_ext(auVar67,auVar67,8,1);
    if (fVar78 * auVar62._0_4_ + fVar79 * auVar62._4_4_ + fVar76 * fVar45 <= 0.0 ||
        (auVar84._0_4_ + auVar57._4_4_ * fVar79 + fVar46 <= 0.0 ||
        auVar84._4_4_ + fVar79 * auVar60._4_4_ + fVar55 <= 0.0)) {
      fVar45 = fVar21 * auVar90._0_4_;
      auVar68._4_12_ = auVar67._4_12_;
      auVar68._0_4_ = fVar45;
      auVar70._0_8_ = auVar68._0_8_;
      auVar70._8_4_ = fVar23 * auVar90._8_4_;
      auVar70._12_4_ = fVar76 * auVar50._0_4_;
      auVar69._8_8_ = auVar70._8_8_;
      auVar69._4_4_ = fVar77 * fVar29;
      auVar69._0_4_ = fVar45;
      auVar71._0_12_ = auVar69._0_12_;
      auVar71._12_4_ = fVar43 * fVar31;
      auVar84 = NEON_ext(auVar71,auVar71,8,1);
      auVar61._12_4_ = fVar35 * fVar35 + fVar33 * fVar33 + fVar34 * fVar34;
      auVar61._8_4_ = fVar35 * fVar35 + fVar33 * fVar33 + fVar34 * fVar34;
      auVar57 = NEON_frecpe(auVar61,4);
      auVar60 = NEON_frecps(auVar61,auVar57,4);
      auVar58._0_4_ = auVar57._0_4_ * auVar60._0_4_;
      auVar58._4_4_ = auVar57._4_4_ * auVar60._4_4_;
      auVar58._8_4_ = auVar57._8_4_ * auVar60._8_4_;
      auVar58._12_4_ = auVar57._12_4_ * auVar60._12_4_;
      auVar57 = NEON_frecps(auVar61,auVar58,4);
      auVar52._0_4_ =
           (auVar84._0_4_ + fVar22 * auVar90._4_4_ + fVar45) * auVar58._0_4_ * auVar57._0_4_;
      auVar52._4_4_ =
           (auVar84._4_4_ + fVar100 * fVar30 + fVar77 * fVar29) * auVar58._4_4_ * auVar57._4_4_;
      auVar52._8_4_ =
           (fVar35 * auVar99._8_4_ + fVar33 * auVar99._0_4_ + fVar34 * auVar99._4_4_) *
           auVar58._8_4_ * auVar57._8_4_;
      auVar52._12_4_ =
           (fVar35 * auVar99._8_4_ + fVar33 * auVar99._0_4_ + fVar34 * auVar99._4_4_) *
           auVar58._12_4_ * auVar57._12_4_;
      auVar59._0_4_ = -(uint)(auVar52._0_4_ < (float)*(undefined8 *)*pauVar1);
      auVar59._4_4_ = -(uint)(auVar52._4_4_ < (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20));
      auVar59._8_4_ = -(uint)(auVar52._8_4_ < (float)*(undefined8 *)(PTR_DAT_04372370 + 0x68));
      auVar59._12_4_ = -(uint)(auVar52._12_4_ < fVar85);
      auVar10._12_4_ = fVar85;
      auVar10._0_12_ = *pauVar1;
      auVar11._12_4_ = fVar85;
      auVar11._0_12_ = *pauVar1;
      auVar84 = NEON_fmax(auVar11 ^ (auVar10 ^ auVar52) & auVar59,ZEXT816(0),4);
      fVar45 = auVar84._0_4_;
      auVar92._0_4_ = auVar90._0_4_ - fVar21 * fVar45;
      auVar92._4_4_ = auVar90._4_4_ - fVar22 * fVar45;
      auVar92._8_4_ = auVar90._8_4_ - fVar23 * fVar45;
      auVar92._12_4_ = auVar90._12_4_ - fVar24 * fVar45;
      fVar45 = auVar84._4_4_;
      fVar46 = auVar84._8_4_;
      fVar77 = fVar77 - fVar29 * fVar45;
      fVar100 = fVar100 - fVar30 * fVar45;
      uVar39 = (undefined1)((uint)fVar100 >> 8);
      uVar40 = (undefined1)((uint)fVar100 >> 0x10);
      uVar41 = (undefined1)((uint)fVar100 >> 0x18);
      fVar43 = fVar43 - fVar31 * fVar45;
      fVar44 = fVar44 - fVar32 * fVar45;
      auVar94._0_4_ = auVar99._0_4_ - fVar33 * fVar46;
      auVar94._4_4_ = auVar99._4_4_ - fVar34 * fVar46;
      auVar94._8_4_ = auVar99._8_4_ - fVar35 * fVar46;
      auVar94._12_4_ = auVar99._12_4_ - fVar36 * fVar46;
      fVar45 = auVar92._0_4_ * auVar92._0_4_ + auVar92._4_4_ * auVar92._4_4_ +
               auVar92._8_4_ * auVar92._8_4_;
      fVar46 = auVar92._0_4_ * auVar92._0_4_ + auVar92._4_4_ * auVar92._4_4_ +
               auVar92._8_4_ * auVar92._8_4_;
      fVar53 = fVar77 * fVar77 + fVar100 * fVar100 + fVar43 * fVar43;
      fVar55 = fVar77 * fVar77 + fVar100 * fVar100 + fVar43 * fVar43;
      auVar72._0_8_ = CONCAT44(-(uint)(fVar46 < fVar55),-(uint)(fVar45 < fVar53));
      auVar72._8_8_ = auVar72._0_8_;
      auVar6[4] = SUB41(fVar100,0);
      auVar6._0_4_ = fVar77;
      auVar6[5] = uVar39;
      auVar6[6] = uVar40;
      auVar6[7] = uVar41;
      auVar6._8_4_ = fVar43;
      auVar6._12_4_ = fVar44;
      auVar7[4] = SUB41(fVar100,0);
      auVar7._0_4_ = fVar77;
      auVar7[5] = uVar39;
      auVar7[6] = uVar40;
      auVar7[7] = uVar41;
      auVar7._8_4_ = fVar43;
      auVar7._12_4_ = fVar44;
      uVar48 = NEON_fmin(CONCAT44(fVar46,fVar45),CONCAT44(fVar55,fVar53),4);
      auVar93._0_8_ =
           CONCAT44(-(uint)((float)((ulong)uVar48 >> 0x20) <
                           auVar94._0_4_ * auVar94._0_4_ + auVar94._4_4_ * auVar94._4_4_ +
                           auVar94._8_4_ * auVar94._8_4_),
                    -(uint)((float)uVar48 <
                           auVar94._0_4_ * auVar94._0_4_ + auVar94._4_4_ * auVar94._4_4_ +
                           auVar94._8_4_ * auVar94._8_4_));
      auVar93._8_8_ = auVar93._0_8_;
      auVar94 = auVar94 ^ (auVar94 ^ auVar7 ^ (auVar6 ^ auVar92) & auVar72) & auVar93;
      uVar48 = SUB128(*pauVar1,0);
    }
    else {
      fVar77 = fVar76 * fVar76 + fVar78 * fVar78 + fVar79 * fVar79;
      fVar100 = fVar76 * fVar76 + fVar78 * fVar78 + fVar79 * fVar79;
      uVar97 = CONCAT44(fVar100,fVar77);
      uVar48 = NEON_frecpe(uVar97,4);
      iVar47 = -(uint)(fVar77 == 0.0);
      iVar54 = -(uint)(fVar100 == 0.0);
      uVar56 = NEON_frecps(uVar97,uVar48,4);
      fVar77 = (float)uVar48 * (float)uVar56;
      fVar100 = (float)((ulong)uVar48 >> 0x20) * (float)((ulong)uVar56 >> 0x20);
      uVar48 = NEON_frecps(uVar97,CONCAT44(fVar100,fVar77),4);
      uVar98 = CONCAT44(fVar100 * (float)((ulong)uVar48 >> 0x20),fVar77 * (float)uVar48) &
               CONCAT17(~(byte)((uint)iVar54 >> 0x18),
                        CONCAT16(~(byte)((uint)iVar54 >> 0x10),
                                 CONCAT15(~(byte)((uint)iVar54 >> 8),
                                          CONCAT14(~(byte)iVar54,
                                                   CONCAT13(~(byte)((uint)iVar47 >> 0x18),
                                                            CONCAT12(~(byte)((uint)iVar47 >> 0x10),
                                                                     CONCAT11(~(byte)((uint)iVar47
                                                                                     >> 8),
                                                                              ~(byte)iVar47)))))));
      uVar48 = CONCAT44((auVar90._8_4_ * fVar76 + auVar90._0_4_ * fVar78 + auVar90._4_4_ * fVar79) *
                        (float)(uVar98 >> 0x20),
                        (auVar90._8_4_ * fVar76 + auVar90._0_4_ * fVar78 + auVar90._4_4_ * fVar79) *
                        (float)uVar98);
      auVar91._0_8_ = auVar74._0_8_;
      auVar94 = auVar91;
    }
    fVar44 = (float)((ulong)uVar48 >> 0x20);
    fVar77 = fVar86 - (float)uVar48 * auVar94._0_4_;
    fVar100 = fVar87 - fVar44 * auVar94._4_4_;
    fVar43 = fVar88 - (float)uVar48 * auVar94._8_4_;
    fVar44 = fVar89 - fVar44 * auVar94._12_4_;
    fVar53 = fVar86 - fVar77;
    fVar55 = fVar87 - fVar100;
    fVar95 = fVar88 - fVar43;
    fVar96 = fVar53 * fVar53 + fVar55 * fVar55 + fVar95 * fVar95;
    fVar101 = fVar53 * fVar53 + fVar55 * fVar55 + fVar95 * fVar95;
    uVar56 = CONCAT44(fVar101,fVar96);
    uVar48 = NEON_frsqrte(uVar56,4);
    fVar45 = (float)uVar48;
    fVar46 = (float)((ulong)uVar48 >> 0x20);
    uVar48 = NEON_frsqrts(uVar56,CONCAT44(fVar46 * fVar46,fVar45 * fVar45),4);
    fVar45 = fVar45 * (float)uVar48;
    fVar46 = fVar46 * (float)((ulong)uVar48 >> 0x20);
    uVar48 = NEON_frsqrts(uVar56,CONCAT44(fVar46 * fVar46,fVar45 * fVar45),4);
    iVar47 = -(uint)(fVar96 <= 0.0);
    iVar54 = -(uint)(fVar101 <= 0.0);
    fVar45 = (float)uVar48 * fVar45;
    fVar46 = (float)((ulong)uVar48 >> 0x20) * fVar46;
    fVar45 = (float)CONCAT13((byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar47 >> 0x18),
                             CONCAT12((byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar47 >> 0x10),
                                      CONCAT11((byte)((uint)fVar45 >> 8) &
                                               ~(byte)((uint)iVar47 >> 8),
                                               SUB41(fVar45,0) & ~(byte)iVar47)));
    fVar46 = (float)(CONCAT17((byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar54 >> 0x18),
                              CONCAT16((byte)((uint)fVar46 >> 0x10) & ~(byte)((uint)iVar54 >> 0x10),
                                       CONCAT15((byte)((uint)fVar46 >> 8) &
                                                ~(byte)((uint)iVar54 >> 8),
                                                CONCAT14(SUB41(fVar46,0) & ~(byte)iVar54,fVar45))))
                    >> 0x20);
    fVar96 = fVar96 * fVar45 - (float)*param_2;
    fVar101 = fVar101 * fVar46 - (float)((ulong)*param_2 >> 0x20);
    fVar53 = fVar53 * fVar45;
    fVar55 = fVar55 * fVar46;
    fVar95 = fVar95 * fVar45;
    fVar77 = fVar77 * fVar53;
    fVar100 = fVar100 * fVar55;
    uVar39 = (undefined1)((uint)fVar100 >> 8);
    uVar40 = (undefined1)((uint)fVar100 >> 0x10);
    uVar41 = (undefined1)((uint)fVar100 >> 0x18);
    fVar43 = fVar43 * fVar95;
    fVar44 = fVar44 * (fVar89 - fVar44) * fVar46;
    auVar4[4] = SUB41(fVar100,0);
    auVar4._0_4_ = fVar77;
    auVar4[5] = uVar39;
    auVar4[6] = uVar40;
    auVar4[7] = uVar41;
    auVar4._8_4_ = fVar43;
    auVar4._12_4_ = fVar44;
    auVar5[4] = SUB41(fVar100,0);
    auVar5._0_4_ = fVar77;
    auVar5[5] = uVar39;
    auVar5[6] = uVar40;
    auVar5[7] = uVar41;
    auVar5._8_4_ = fVar43;
    auVar5._12_4_ = fVar44;
    auVar84 = NEON_ext(auVar4,auVar5,8,1);
    fVar77 = -(fVar77 + fVar100 + auVar84._0_4_);
    if (fVar96 <= 0.0) break;
    fVar100 = fVar53 * fVar80;
    fVar44 = fVar55 * fVar83;
    fVar45 = fVar95 * fVar81;
    fVar43 = fVar100 + fVar44 + fVar45;
    fVar45 = fVar100 + fVar44 + fVar45;
    uVar39 = SUB41(fVar45,0);
    uVar40 = (undefined1)((uint)fVar45 >> 8);
    uVar41 = (undefined1)((uint)fVar45 >> 0x10);
    uVar42 = (undefined1)((uint)fVar45 >> 0x18);
    if (0.0 <= fVar43) {
      param_7[2] = fVar95;
      param_7[3] = fVar77;
      *param_7 = fVar53;
      param_7[1] = fVar55;
      return 0;
    }
    uVar48 = NEON_frecpe(CONCAT17(uVar42,CONCAT16(uVar41,CONCAT15(uVar40,CONCAT14(uVar39,fVar43)))),
                         4);
    uVar56 = NEON_frecps(CONCAT17(uVar42,CONCAT16(uVar41,CONCAT15(uVar40,CONCAT14(uVar39,fVar43)))),
                         uVar48,4);
    fVar100 = (float)uVar48 * (float)uVar56;
    fVar44 = (float)((ulong)uVar48 >> 0x20) * (float)((ulong)uVar56 >> 0x20);
    uVar48 = NEON_frecps(CONCAT17(uVar42,CONCAT16(uVar41,CONCAT15(uVar40,CONCAT14(uVar39,fVar43)))),
                         CONCAT44(fVar44,fVar100),4);
    fVar100 = fVar96 * fVar100 * (float)uVar48;
    fVar43 = fVar101 * fVar44 * (float)((ulong)uVar48 >> 0x20);
    fVar44 = -fVar100;
    fVar45 = -fVar43;
    fVar43 = (float)((ulong)uVar12 >> 0x20) - fVar43;
    uVar12 = CONCAT17((char)((uint)fVar43 >> 0x18),
                      CONCAT16((char)((uint)fVar43 >> 0x10),
                               CONCAT15((char)((uint)fVar43 >> 8),
                                        CONCAT14(SUB41(fVar43,0),(float)uVar12 - fVar100))));
    fVar100 = (float)uVar73;
    uVar48 = CONCAT44(fVar87 + fVar83 * fVar45,fVar86 + fVar80 * fVar44);
    uVar56 = CONCAT44(fVar89 + fVar82 * fVar45,fVar88 + fVar81 * fVar44);
    uVar73 = NEON_fmin(uVar73,CONCAT44(fVar101,fVar96),4);
  } while (*(float *)(PTR_DAT_04372370 + 0x260) <= fVar100 - fVar96);
  param_7[2] = fVar95;
  param_7[3] = fVar77;
  *param_7 = fVar53;
  param_7[1] = fVar55;
  if (fVar82 < (float)uVar12) {
    return 0;
  }
  *param_6 = uVar12;
  return 1;
}


