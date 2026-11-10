/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031b0310; name: FUN_031b0310
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_031b0310(undefined1 param_1 [16],float *param_2,undefined8 *param_3,undefined8 *param_4,
                 float *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined2 uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  uint uVar12;
  int iVar19;
  ulong uVar13;
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  byte bVar22;
  byte bVar25;
  byte bVar26;
  int iVar11;
  float fVar20;
  int iVar21;
  int iVar23;
  byte bVar27;
  int iVar28;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar24;
  undefined1 auVar18 [16];
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  float fVar41;
  float fVar43;
  undefined1 auVar42 [16];
  float fVar44;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  int iVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar57;
  byte bVar58;
  undefined1 auVar45 [16];
  int iVar56;
  byte bVar59;
  byte bVar60;
  byte bVar67;
  byte bVar68;
  float fVar61;
  float fVar62;
  float fVar63;
  int iVar64;
  byte bVar69;
  float fVar73;
  int iVar74;
  byte bVar77;
  ulong uVar65;
  byte bVar70;
  byte bVar75;
  byte bVar76;
  float fVar71;
  float fVar72;
  byte bVar78;
  byte bVar83;
  byte bVar84;
  float fVar79;
  float fVar80;
  float fVar81;
  int iVar82;
  byte bVar85;
  byte bVar86;
  byte bVar88;
  byte bVar89;
  undefined1 auVar66 [16];
  int iVar87;
  byte bVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  undefined8 uVar94;
  undefined8 uVar95;
  undefined1 auVar96 [12];
  float fVar100;
  float fVar102;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  float fVar101;
  float fVar103;
  undefined1 auVar99 [16];
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  int iVar108;
  float fVar109;
  undefined8 uVar110;
  float fVar111;
  float fVar112;
  int iVar113;
  float fVar114;
  float fVar115;
  int iVar116;
  int iVar117;
  int iVar118;
  int iVar121;
  int iVar122;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  int iVar123;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  
  fVar91 = param_1._0_4_;
  fVar92 = *param_2;
  fVar100 = param_2[1];
  fVar24 = param_2[2];
  fVar104 = param_2[3];
  fVar63 = (float)*param_3;
  fVar114 = (float)*param_4;
  fVar41 = fVar63 - fVar114;
  fVar106 = (float)((ulong)*param_3 >> 0x20);
  fVar93 = (float)((ulong)*param_4 >> 0x20);
  fVar6 = fVar106 - fVar93;
  fVar101 = (float)param_3[1];
  fVar107 = (float)param_4[1];
  fVar109 = fVar101 - fVar107;
  fVar103 = (float)((ulong)param_3[1] >> 0x20);
  fVar102 = (float)((ulong)param_4[1] >> 0x20);
  fVar61 = (fVar63 - fVar92) * fVar41;
  fVar71 = (fVar106 - fVar100) * fVar6;
  fVar79 = (fVar101 - fVar24) * fVar109;
  uVar95 = CONCAT44(fVar41 * fVar41 + fVar6 * fVar6 + fVar109 * fVar109,
                    fVar41 * fVar41 + fVar6 * fVar6 + fVar109 * fVar109);
  uVar94 = NEON_frecpe(uVar95,4);
  uVar110 = NEON_frecps(uVar95,uVar94,4);
  fVar43 = (float)uVar94 * (float)uVar110;
  fVar62 = (float)((ulong)uVar94 >> 0x20) * (float)((ulong)uVar110 >> 0x20);
  uVar94 = NEON_frecps(uVar95,CONCAT17((char)((uint)fVar62 >> 0x18),
                                       CONCAT16((char)((uint)fVar62 >> 0x10),
                                                CONCAT15((char)((uint)fVar62 >> 8),
                                                         CONCAT14(SUB41(fVar62,0),fVar43)))),4);
  uVar95 = NEON_fmov(0x3f800000,4);
  uVar94 = NEON_fminnm(CONCAT44((fVar61 + fVar71 + fVar79) * fVar62 * (float)((ulong)uVar94 >> 0x20)
                                ,(fVar61 + fVar71 + fVar79) * fVar43 * (float)uVar94),uVar95,4);
  uVar94 = NEON_fmax(uVar94,0,4);
  fVar62 = (float)((ulong)uVar94 >> 0x20);
  fVar41 = (fVar63 - fVar92) - fVar41 * (float)uVar94;
  fVar43 = (fVar106 - fVar100) - fVar6 * fVar62;
  fVar6 = (fVar101 - fVar24) - fVar109 * (float)uVar94;
  fVar109 = (fVar103 - fVar104) - (fVar103 - fVar102) * fVar62;
  fVar41 = fVar41 * fVar41;
  fVar43 = fVar43 * fVar43;
  uVar29 = (undefined1)((uint)fVar43 >> 8);
  uVar30 = (undefined1)((uint)fVar43 >> 0x10);
  uVar31 = (undefined1)((uint)fVar43 >> 0x18);
  fVar6 = fVar6 * fVar6;
  uVar32 = (undefined1)((uint)fVar6 >> 8);
  uVar33 = (undefined1)((uint)fVar6 >> 0x10);
  uVar34 = (undefined1)((uint)fVar6 >> 0x18);
  fVar109 = fVar109 * fVar109;
  uVar35 = (undefined1)((uint)fVar109 >> 8);
  uVar36 = (undefined1)((uint)fVar109 >> 0x10);
  uVar37 = (undefined1)((uint)fVar109 >> 0x18);
  auVar42[4] = SUB41(fVar43,0);
  auVar42._0_4_ = fVar41;
  auVar42[5] = uVar29;
  auVar42[6] = uVar30;
  auVar42[7] = uVar31;
  auVar42[8] = SUB41(fVar6,0);
  auVar42[9] = uVar32;
  auVar42[10] = uVar33;
  auVar42[0xb] = uVar34;
  auVar42[0xc] = SUB41(fVar109,0);
  auVar42[0xd] = uVar35;
  auVar42[0xe] = uVar36;
  auVar42[0xf] = uVar37;
  auVar98[4] = SUB41(fVar43,0);
  auVar98._0_4_ = fVar41;
  auVar98[5] = uVar29;
  auVar98[6] = uVar30;
  auVar98[7] = uVar31;
  auVar98[8] = SUB41(fVar6,0);
  auVar98[9] = uVar32;
  auVar98[10] = uVar33;
  auVar98[0xb] = uVar34;
  auVar98[0xc] = SUB41(fVar109,0);
  auVar98[0xd] = uVar35;
  auVar98[0xe] = uVar36;
  auVar98[0xf] = uVar37;
  auVar42 = NEON_ext(auVar42,auVar98,8,1);
  fVar6 = fVar91 * fVar91;
  fVar109 = param_1._4_4_ * param_1._4_4_;
  uVar29 = (undefined1)((uint)fVar109 >> 0x10);
  uVar30 = (undefined1)((uint)fVar109 >> 0x18);
  if (fVar41 + fVar43 + auVar42._0_4_ < fVar6) {
    param_5[0] = 0.0;
    param_5[1] = 0.0;
    return 1;
  }
  fVar62 = fVar114 - fVar63;
  fVar61 = fVar93 - fVar106;
  fVar71 = fVar107 - fVar101;
  fVar41 = fVar71 * fVar71 + fVar62 * fVar62 + fVar61 * fVar61;
  fVar43 = fVar71 * fVar71 + fVar62 * fVar62 + fVar61 * fVar61;
  uVar94 = CONCAT44(fVar43,fVar41);
  if (0.0 < fVar41) {
    if (0.0 < fVar91) {
      uVar110 = NEON_frecpe(uVar94,4);
      uVar95 = NEON_frecps(uVar94,uVar110,4);
      iVar10 = -(uint)(fVar41 == 0.0);
      iVar19 = -(uint)(fVar43 == 0.0);
      fVar91 = (float)uVar110 * (float)uVar95;
      fVar79 = (float)((ulong)uVar110 >> 0x20) * (float)((ulong)uVar95 >> 0x20);
      uVar94 = NEON_frecps(uVar94,CONCAT44(fVar79,fVar91),4);
      fVar63 = fVar92 - fVar63;
      fVar106 = fVar100 - fVar106;
      uVar31 = (undefined1)((uint)fVar106 >> 8);
      uVar32 = (undefined1)((uint)fVar106 >> 0x10);
      uVar33 = (undefined1)((uint)fVar106 >> 0x18);
      fVar101 = fVar24 - fVar101;
      uVar34 = (undefined1)((uint)fVar101 >> 8);
      uVar35 = (undefined1)((uint)fVar101 >> 0x10);
      uVar36 = (undefined1)((uint)fVar101 >> 0x18);
      fVar103 = fVar104 - fVar103;
      uVar37 = (undefined1)((uint)fVar103 >> 8);
      uVar38 = (undefined1)((uint)fVar103 >> 0x10);
      uVar39 = (undefined1)((uint)fVar103 >> 0x18);
      uVar13 = CONCAT44(fVar79 * (float)((ulong)uVar94 >> 0x20),fVar91 * (float)uVar94) &
               CONCAT17(~(byte)((uint)iVar19 >> 0x18),
                        CONCAT16(~(byte)((uint)iVar19 >> 0x10),
                                 CONCAT15(~(byte)((uint)iVar19 >> 8),
                                          CONCAT14(~(byte)iVar19,
                                                   CONCAT13(~(byte)((uint)iVar10 >> 0x18),
                                                            CONCAT12(~(byte)((uint)iVar10 >> 0x10),
                                                                     CONCAT11(~(byte)((uint)iVar10
                                                                                     >> 8),
                                                                              ~(byte)iVar10)))))));
      auVar45._0_4_ = fVar92 - fVar114;
      auVar45._4_4_ = fVar100 - fVar93;
      auVar45._8_4_ = fVar24 - fVar107;
      auVar45._12_4_ = fVar104 - fVar102;
      fVar102 = (float)uVar13;
      fVar92 = fVar62 * fVar102;
      fVar100 = fVar61 * (float)(uVar13 >> 0x20);
      fVar102 = fVar71 * fVar102;
      fVar114 = (float)*(undefined8 *)(param_2 + 4);
      fVar93 = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
      fVar107 = (float)*(undefined8 *)(param_2 + 6);
      fVar79 = fVar101 * fVar71 + fVar63 * fVar62 + fVar106 * fVar61;
      fVar20 = fVar101 * fVar71 + fVar63 * fVar62 + fVar106 * fVar61;
      fVar44 = fVar62 * fVar114 + fVar61 * fVar93 + fVar71 * fVar107;
      fVar71 = fVar62 * fVar114 + fVar61 * fVar93 + fVar71 * fVar107;
      auVar42 = NEON_ext(auVar45,auVar45,8,1);
      fVar105 = fVar63 - fVar79 * fVar92;
      fVar111 = fVar106 - fVar20 * fVar100;
      fVar61 = fVar101 - fVar79 * fVar102;
      auVar8[4] = SUB41(fVar106,0);
      auVar8._0_4_ = fVar63;
      auVar8[5] = uVar31;
      auVar8[6] = uVar32;
      auVar8[7] = uVar33;
      auVar8[8] = SUB41(fVar101,0);
      auVar8[9] = uVar34;
      auVar8[10] = uVar35;
      auVar8[0xb] = uVar36;
      auVar8[0xc] = SUB41(fVar103,0);
      auVar8[0xd] = uVar37;
      auVar8[0xe] = uVar38;
      auVar8[0xf] = uVar39;
      auVar9[4] = SUB41(fVar106,0);
      auVar9._0_4_ = fVar63;
      auVar9[5] = uVar31;
      auVar9[6] = uVar32;
      auVar9[7] = uVar33;
      auVar9[8] = SUB41(fVar101,0);
      auVar9[9] = uVar34;
      auVar9[10] = uVar35;
      auVar9[0xb] = uVar36;
      auVar9[0xc] = SUB41(fVar103,0);
      auVar9[0xd] = uVar37;
      auVar9[0xe] = uVar38;
      auVar9[0xf] = uVar39;
      auVar97 = NEON_ext(auVar8,auVar9,8,1);
      fVar91 = fVar114 - fVar92 * fVar44;
      fVar72 = fVar93 - fVar100 * fVar71;
      fVar80 = fVar107 - fVar102 * fVar44;
      auVar66._0_4_ = fVar107 * fVar107 + fVar114 * fVar114 + fVar93 * fVar93;
      auVar66._4_4_ = fVar107 * fVar107 + fVar114 * fVar114 + fVar93 * fVar93;
      auVar66._8_4_ = fVar80 * fVar80 + fVar91 * fVar91 + fVar72 * fVar72;
      auVar66._12_4_ = fVar80 * fVar80 + fVar91 * fVar91 + fVar72 * fVar72;
      auVar98 = NEON_frsqrte(auVar66,4);
      iVar10 = -(uint)(0.0 < auVar66._0_4_);
      iVar19 = -(uint)(0.0 < auVar66._4_4_);
      iVar52 = -(uint)(0.0 < auVar66._8_4_);
      iVar56 = -(uint)(0.0 < auVar66._12_4_);
      fVar102 = auVar98._0_4_;
      auVar124._0_4_ = fVar102 * fVar102;
      fVar101 = auVar98._4_4_;
      auVar124._4_4_ = fVar101 * fVar101;
      fVar103 = auVar98._8_4_;
      auVar124._8_4_ = fVar103 * fVar103;
      fVar92 = auVar98._12_4_;
      auVar124._12_4_ = fVar92 * fVar92;
      auVar98 = NEON_frsqrts(auVar66,auVar124,4);
      fVar102 = fVar102 * auVar98._0_4_;
      fVar101 = fVar101 * auVar98._4_4_;
      fVar103 = fVar103 * auVar98._8_4_;
      fVar92 = fVar92 * auVar98._12_4_;
      auVar125._0_4_ = fVar102 * fVar102;
      auVar125._4_4_ = fVar101 * fVar101;
      auVar125._8_4_ = fVar103 * fVar103;
      auVar125._12_4_ = fVar92 * fVar92;
      auVar98 = NEON_frsqrts(auVar66,auVar125,4);
      fVar102 = auVar98._0_4_ * fVar102;
      fVar101 = auVar98._4_4_ * fVar101;
      fVar103 = auVar98._8_4_ * fVar103;
      fVar92 = auVar98._12_4_ * fVar92;
      bVar46 = (byte)((uint)iVar10 >> 8);
      bVar47 = (byte)((uint)iVar10 >> 0x10);
      bVar48 = (byte)((uint)iVar10 >> 0x18);
      fVar62 = (float)CONCAT13(bVar48 & (byte)((uint)fVar102 >> 0x18),
                               CONCAT12(bVar47 & (byte)((uint)fVar102 >> 0x10),
                                        CONCAT11(bVar46 & (byte)((uint)fVar102 >> 8),
                                                 (byte)iVar10 & SUB41(fVar102,0))));
      bVar49 = (byte)((uint)iVar19 >> 8);
      bVar50 = (byte)((uint)iVar19 >> 0x10);
      bVar51 = (byte)((uint)iVar19 >> 0x18);
      auVar96._0_8_ =
           CONCAT17(bVar51 & (byte)((uint)fVar101 >> 0x18),
                    CONCAT16(bVar50 & (byte)((uint)fVar101 >> 0x10),
                             CONCAT15(bVar49 & (byte)((uint)fVar101 >> 8),
                                      CONCAT14((byte)iVar19 & SUB41(fVar101,0),fVar62))));
      auVar96[8] = (byte)iVar52 & SUB41(fVar103,0);
      bVar53 = (byte)((uint)iVar52 >> 8);
      auVar96[9] = bVar53 & (byte)((uint)fVar103 >> 8);
      bVar54 = (byte)((uint)iVar52 >> 0x10);
      auVar96[10] = bVar54 & (byte)((uint)fVar103 >> 0x10);
      bVar55 = (byte)((uint)iVar52 >> 0x18);
      auVar96[0xb] = bVar55 & (byte)((uint)fVar103 >> 0x18);
      auVar99[0xc] = (byte)iVar56 & SUB41(fVar92,0);
      auVar99._0_12_ = auVar96;
      bVar57 = (byte)((uint)iVar56 >> 8);
      auVar99[0xd] = bVar57 & (byte)((uint)fVar92 >> 8);
      bVar58 = (byte)((uint)iVar56 >> 0x10);
      auVar99[0xe] = bVar58 & (byte)((uint)fVar92 >> 0x10);
      bVar59 = (byte)((uint)iVar56 >> 0x18);
      auVar99[0xf] = bVar59 & (byte)((uint)fVar92 >> 0x18);
      fVar103 = (float)((ulong)auVar96._0_8_ >> 0x20);
      fVar100 = auVar96._8_4_;
      fVar104 = auVar99._12_4_;
      fVar102 = (auVar97._0_4_ * fVar107 + fVar63 * fVar114 + fVar106 * fVar93) * fVar62 * fVar62;
      fVar101 = (auVar42._0_4_ * fVar107 + auVar45._0_4_ * fVar114 + auVar45._4_4_ * fVar93) *
                fVar103 * fVar103;
      fVar92 = (fVar61 * fVar80 + fVar105 * fVar91 + fVar111 * fVar72) * fVar100 * fVar100;
      fVar24 = (fVar61 * fVar80 + fVar105 * fVar91 + fVar111 * fVar72) * fVar104 * fVar104;
      fVar63 = fVar63 - fVar114 * fVar102;
      fVar73 = auVar45._0_4_ - fVar114 * fVar101;
      fVar81 = fVar105 - fVar91 * fVar92;
      fVar105 = fVar105 - fVar91 * fVar24;
      fVar106 = fVar106 - fVar93 * fVar102;
      fVar112 = auVar45._4_4_ - fVar93 * fVar101;
      fVar115 = fVar111 - fVar72 * fVar92;
      fVar111 = fVar111 - fVar72 * fVar24;
      fVar114 = auVar97._0_4_ - fVar107 * fVar102;
      fVar93 = auVar42._0_4_ - fVar107 * fVar101;
      fVar91 = fVar61 - fVar80 * fVar92;
      fVar61 = fVar61 - fVar80 * fVar24;
      fVar114 = fVar114 * fVar114 + fVar63 * fVar63 + fVar106 * fVar106;
      fVar107 = fVar93 * fVar93 + fVar73 * fVar73 + fVar112 * fVar112;
      fVar63 = fVar91 * fVar91 + fVar81 * fVar81 + fVar115 * fVar115;
      fVar93 = fVar61 * fVar61 + fVar105 * fVar105 + fVar111 * fVar111;
      iVar64 = -(uint)(fVar114 < fVar6);
      iVar74 = -(uint)(fVar107 < fVar109);
      iVar82 = -(uint)(fVar63 < fVar6);
      uVar5 = (undefined2)
              (CONCAT15((char)((uint)fVar109 >> 8),CONCAT14(SUB41(fVar109,0),fVar6)) >> 0x20);
      iVar87 = -(uint)(fVar93 < (float)CONCAT13(uVar30,CONCAT12(uVar29,uVar5)));
      if (((iVar64 != 0 || iVar74 != 0) || iVar82 != 0) || iVar87 != 0) {
        fVar114 = fVar6 - fVar114;
        fVar109 = fVar109 - fVar107;
        uVar31 = SUB41(fVar109,0);
        uVar32 = (undefined1)((uint)fVar109 >> 8);
        uVar33 = (undefined1)((uint)fVar109 >> 0x10);
        uVar34 = (undefined1)((uint)fVar109 >> 0x18);
        fVar6 = fVar6 - fVar63;
        uVar35 = SUB41(fVar6,0);
        uVar36 = (undefined1)((uint)fVar6 >> 8);
        uVar37 = (undefined1)((uint)fVar6 >> 0x10);
        uVar38 = (undefined1)((uint)fVar6 >> 0x18);
        fVar93 = (float)CONCAT13(uVar30,CONCAT12(uVar29,uVar5)) - fVar93;
        uVar29 = SUB41(fVar93,0);
        uVar30 = (undefined1)((uint)fVar93 >> 8);
        uVar39 = (undefined1)((uint)fVar93 >> 0x10);
        uVar40 = (undefined1)((uint)fVar93 >> 0x18);
        iVar11 = -(uint)(fVar114 == 0.0);
        iVar21 = -(uint)(fVar109 == 0.0);
        iVar23 = -(uint)(fVar6 == 0.0);
        iVar28 = -(uint)(fVar93 == 0.0);
        auVar1[4] = uVar31;
        auVar1._0_4_ = fVar114;
        auVar1[5] = uVar32;
        auVar1[6] = uVar33;
        auVar1[7] = uVar34;
        auVar1[8] = uVar35;
        auVar1[9] = uVar36;
        auVar1[10] = uVar37;
        auVar1[0xb] = uVar38;
        auVar1[0xc] = uVar29;
        auVar1[0xd] = uVar30;
        auVar1[0xe] = uVar39;
        auVar1[0xf] = uVar40;
        auVar42 = NEON_frsqrte(auVar1,4);
        fVar107 = auVar42._0_4_;
        auVar119._0_4_ = fVar107 * fVar107;
        fVar63 = auVar42._4_4_;
        auVar119._4_4_ = fVar63 * fVar63;
        fVar106 = auVar42._8_4_;
        auVar119._8_4_ = fVar106 * fVar106;
        fVar91 = auVar42._12_4_;
        auVar119._12_4_ = fVar91 * fVar91;
        auVar2[4] = uVar31;
        auVar2._0_4_ = fVar114;
        auVar2[5] = uVar32;
        auVar2[6] = uVar33;
        auVar2[7] = uVar34;
        auVar2[8] = uVar35;
        auVar2[9] = uVar36;
        auVar2[10] = uVar37;
        auVar2[0xb] = uVar38;
        auVar2[0xc] = uVar29;
        auVar2[0xd] = uVar30;
        auVar2[0xe] = uVar39;
        auVar2[0xf] = uVar40;
        auVar42 = NEON_frsqrts(auVar2,auVar119,4);
        fVar107 = fVar107 * auVar42._0_4_;
        fVar63 = fVar63 * auVar42._4_4_;
        fVar106 = fVar106 * auVar42._8_4_;
        fVar91 = fVar91 * auVar42._12_4_;
        auVar120._0_4_ = fVar107 * fVar107;
        auVar120._4_4_ = fVar63 * fVar63;
        auVar120._8_4_ = fVar106 * fVar106;
        auVar120._12_4_ = fVar91 * fVar91;
        auVar3[4] = uVar31;
        auVar3._0_4_ = fVar114;
        auVar3[5] = uVar32;
        auVar3[6] = uVar33;
        auVar3[7] = uVar34;
        auVar3[8] = uVar35;
        auVar3[9] = uVar36;
        auVar3[10] = uVar37;
        auVar3[0xb] = uVar38;
        auVar3[0xc] = uVar29;
        auVar3[0xd] = uVar30;
        auVar3[0xe] = uVar39;
        auVar3[0xf] = uVar40;
        auVar42 = NEON_frsqrts(auVar3,auVar120,4);
        iVar118 = -(uint)(fVar79 <= fVar41);
        iVar121 = -(uint)(fVar20 <= fVar43);
        iVar122 = -(uint)(fVar79 <= fVar41);
        iVar123 = -(uint)(fVar20 <= fVar43);
        fVar114 = fVar114 * auVar42._0_4_ * fVar107;
        fVar109 = fVar109 * auVar42._4_4_ * fVar63;
        fVar6 = fVar6 * auVar42._8_4_ * fVar106;
        fVar93 = fVar93 * auVar42._12_4_ * fVar91;
        iVar108 = -(uint)(0.0 <= fVar79);
        iVar113 = -(uint)(0.0 <= fVar20);
        iVar116 = -(uint)(0.0 <= fVar79);
        iVar117 = -(uint)(0.0 <= fVar20);
        bVar60 = (byte)iVar64;
        bVar67 = (byte)((uint)iVar64 >> 8);
        bVar68 = (byte)((uint)iVar64 >> 0x10);
        bVar69 = (byte)((uint)iVar64 >> 0x18);
        bVar70 = (byte)iVar74;
        bVar75 = (byte)((uint)iVar74 >> 8);
        bVar76 = (byte)((uint)iVar74 >> 0x10);
        bVar77 = (byte)((uint)iVar74 >> 0x18);
        bVar78 = (byte)iVar82;
        bVar83 = (byte)((uint)iVar82 >> 8);
        bVar84 = (byte)((uint)iVar82 >> 0x10);
        bVar85 = (byte)((uint)iVar82 >> 0x18);
        bVar86 = (byte)iVar87;
        bVar88 = (byte)((uint)iVar87 >> 8);
        bVar89 = (byte)((uint)iVar87 >> 0x10);
        bVar90 = (byte)((uint)iVar87 >> 0x18);
        fVar62 = fVar62 * (float)CONCAT13((byte)((uint)fVar114 >> 0x18) &
                                          ~(byte)((uint)iVar11 >> 0x18) & bVar69,
                                          CONCAT12((byte)((uint)fVar114 >> 0x10) &
                                                   ~(byte)((uint)iVar11 >> 0x10) & bVar68,
                                                   CONCAT11((byte)((uint)fVar114 >> 8) &
                                                            ~(byte)((uint)iVar11 >> 8) & bVar67,
                                                            SUB41(fVar114,0) & ~(byte)iVar11 &
                                                            bVar60)));
        fVar103 = fVar103 * (float)CONCAT13((byte)((uint)fVar109 >> 0x18) &
                                            ~(byte)((uint)iVar21 >> 0x18) & bVar77,
                                            CONCAT12((byte)((uint)fVar109 >> 0x10) &
                                                     ~(byte)((uint)iVar21 >> 0x10) & bVar76,
                                                     CONCAT11((byte)((uint)fVar109 >> 8) &
                                                              ~(byte)((uint)iVar21 >> 8) & bVar75,
                                                              SUB41(fVar109,0) & ~(byte)iVar21 &
                                                              bVar70)));
        fVar100 = fVar100 * (float)CONCAT13((byte)((uint)fVar6 >> 0x18) &
                                            ~(byte)((uint)iVar23 >> 0x18) & bVar85,
                                            CONCAT12((byte)((uint)fVar6 >> 0x10) &
                                                     ~(byte)((uint)iVar23 >> 0x10) & bVar84,
                                                     CONCAT11((byte)((uint)fVar6 >> 8) &
                                                              ~(byte)((uint)iVar23 >> 8) & bVar83,
                                                              SUB41(fVar6,0) & ~(byte)iVar23 &
                                                              bVar78)));
        fVar104 = fVar104 * (float)CONCAT13((byte)((uint)fVar93 >> 0x18) &
                                            ~(byte)((uint)iVar28 >> 0x18) & bVar90,
                                            CONCAT12((byte)((uint)fVar93 >> 0x10) &
                                                     ~(byte)((uint)iVar28 >> 0x10) & bVar89,
                                                     CONCAT11((byte)((uint)fVar93 >> 8) &
                                                              ~(byte)((uint)iVar28 >> 8) & bVar88,
                                                              SUB41(fVar93,0) & ~(byte)iVar28 &
                                                              bVar86)));
        iVar64 = -(uint)(ABS(fVar102) <= fVar62);
        iVar74 = -(uint)(ABS(fVar101) <= fVar103);
        iVar82 = -(uint)(ABS(fVar92) <= fVar100);
        iVar87 = -(uint)(ABS(fVar24) <= fVar104);
        if (((CONCAT13((PTR_DAT_043724a8[0x33] |
                       (byte)((uint)iVar118 >> 0x18) & (byte)((uint)iVar108 >> 0x18)) &
                       (byte)((uint)iVar64 >> 0x18) & bVar69,
                       CONCAT12((PTR_DAT_043724a8[0x32] |
                                (byte)((uint)iVar118 >> 0x10) & (byte)((uint)iVar108 >> 0x10)) &
                                (byte)((uint)iVar64 >> 0x10) & bVar68,
                                CONCAT11((PTR_DAT_043724a8[0x31] |
                                         (byte)((uint)iVar118 >> 8) & (byte)((uint)iVar108 >> 8)) &
                                         (byte)((uint)iVar64 >> 8) & bVar67,
                                         (PTR_DAT_043724a8[0x30] | (byte)iVar118 & (byte)iVar108) &
                                         (byte)iVar64 & bVar60))) == 0 &&
             CONCAT13((PTR_DAT_043724a8[0x37] |
                      (byte)((uint)iVar121 >> 0x18) & (byte)((uint)iVar113 >> 0x18)) &
                      (byte)((uint)iVar74 >> 0x18) & bVar77,
                      CONCAT12((PTR_DAT_043724a8[0x36] |
                               (byte)((uint)iVar121 >> 0x10) & (byte)((uint)iVar113 >> 0x10)) &
                               (byte)((uint)iVar74 >> 0x10) & bVar76,
                               CONCAT11((PTR_DAT_043724a8[0x35] |
                                        (byte)((uint)iVar121 >> 8) & (byte)((uint)iVar113 >> 8)) &
                                        (byte)((uint)iVar74 >> 8) & bVar75,
                                        (PTR_DAT_043724a8[0x34] | (byte)iVar121 & (byte)iVar113) &
                                        (byte)iVar74 & bVar70))) == 0) &&
            CONCAT13((PTR_DAT_043724a8[0x3b] |
                     (byte)((uint)iVar122 >> 0x18) & (byte)((uint)iVar116 >> 0x18)) &
                     (byte)((uint)iVar82 >> 0x18) & bVar85,
                     CONCAT12((PTR_DAT_043724a8[0x3a] |
                              (byte)((uint)iVar122 >> 0x10) & (byte)((uint)iVar116 >> 0x10)) &
                              (byte)((uint)iVar82 >> 0x10) & bVar84,
                              CONCAT11((PTR_DAT_043724a8[0x39] |
                                       (byte)((uint)iVar122 >> 8) & (byte)((uint)iVar116 >> 8)) &
                                       (byte)((uint)iVar82 >> 8) & bVar83,
                                       (PTR_DAT_043724a8[0x38] | (byte)iVar122 & (byte)iVar116) &
                                       (byte)iVar82 & bVar78))) == 0) &&
            CONCAT13((PTR_DAT_043724a8[0x3f] |
                     (byte)((uint)iVar123 >> 0x18) & (byte)((uint)iVar117 >> 0x18)) &
                     (byte)((uint)iVar87 >> 0x18) & bVar90,
                     CONCAT12((PTR_DAT_043724a8[0x3e] |
                              (byte)((uint)iVar123 >> 0x10) & (byte)((uint)iVar117 >> 0x10)) &
                              (byte)((uint)iVar87 >> 0x10) & bVar89,
                              CONCAT11((PTR_DAT_043724a8[0x3d] |
                                       (byte)((uint)iVar123 >> 8) & (byte)((uint)iVar117 >> 8)) &
                                       (byte)((uint)iVar87 >> 8) & bVar88,
                                       (PTR_DAT_043724a8[0x3c] | (byte)iVar123 & (byte)iVar117) &
                                       (byte)iVar87 & bVar86))) == 0) {
          fVar62 = (0.0 - fVar102) - fVar62;
          fVar103 = (0.0 - fVar101) - fVar103;
          fVar100 = (0.0 - fVar92) - fVar100;
          fVar104 = (0.0 - fVar24) - fVar104;
          uVar94 = *(undefined8 *)param_5;
          uVar29 = (undefined1)((ulong)uVar94 >> 8);
          uVar30 = (undefined1)((ulong)uVar94 >> 0x10);
          uVar31 = (undefined1)((ulong)uVar94 >> 0x18);
          uVar32 = (undefined1)((ulong)uVar94 >> 0x20);
          uVar33 = (undefined1)((ulong)uVar94 >> 0x28);
          uVar34 = (undefined1)((ulong)uVar94 >> 0x30);
          uVar35 = (undefined1)((ulong)uVar94 >> 0x38);
          iVar64 = -(uint)(0.0 - fVar79 <= fVar44 * fVar62);
          iVar74 = -(uint)(0.0 - fVar20 <= fVar71 * fVar103);
          iVar82 = -(uint)(0.0 - fVar79 <= fVar44 * fVar100);
          iVar87 = -(uint)(0.0 - fVar20 <= fVar71 * fVar104);
          iVar11 = -(uint)(fVar44 * fVar62 <= fVar41 - fVar79);
          iVar21 = -(uint)(fVar71 * fVar103 <= fVar43 - fVar20);
          iVar23 = -(uint)(fVar44 * fVar100 <= fVar41 - fVar79);
          iVar28 = -(uint)(fVar71 * fVar104 <= fVar43 - fVar20);
          bVar22 = (byte)iVar23 & (byte)iVar82;
          bVar25 = (byte)((uint)iVar23 >> 8) & (byte)((uint)iVar82 >> 8);
          bVar26 = (byte)((uint)iVar23 >> 0x10) & (byte)((uint)iVar82 >> 0x10);
          bVar27 = (byte)((uint)iVar23 >> 0x18) & (byte)((uint)iVar82 >> 0x18);
          iVar116 = -(uint)(fVar62 <= (float)uVar94);
          fVar41 = (float)((ulong)uVar94 >> 0x20);
          iVar117 = -(uint)(fVar103 <= fVar41);
          iVar118 = -(uint)(fVar100 <= (float)uVar94);
          iVar121 = -(uint)(fVar104 <= fVar41);
          iVar82 = -(uint)(0.0 <= fVar62);
          iVar23 = -(uint)(0.0 <= fVar103);
          iVar108 = -(uint)(0.0 <= fVar100);
          iVar113 = -(uint)(0.0 <= fVar104);
          iVar10 = CONCAT13((bVar27 & (byte)((uint)iVar11 >> 0x18) & (byte)((uint)iVar64 >> 0x18) ^
                            PTR_DAT_043724a8[0x33]) & bVar69 &
                            (byte)((uint)iVar116 >> 0x18) & (byte)((uint)iVar82 >> 0x18) & bVar48,
                            CONCAT12((bVar26 & (byte)((uint)iVar11 >> 0x10) &
                                               (byte)((uint)iVar64 >> 0x10) ^ PTR_DAT_043724a8[0x32]
                                     ) & bVar68 &
                                     (byte)((uint)iVar116 >> 0x10) & (byte)((uint)iVar82 >> 0x10) &
                                     bVar47,CONCAT11((bVar25 & (byte)((uint)iVar11 >> 8) &
                                                               (byte)((uint)iVar64 >> 8) ^
                                                     PTR_DAT_043724a8[0x31]) & bVar67 &
                                                     (byte)((uint)iVar116 >> 8) &
                                                     (byte)((uint)iVar82 >> 8) & bVar46,
                                                     (bVar22 & (byte)iVar11 & (byte)iVar64 ^
                                                     PTR_DAT_043724a8[0x30]) & bVar60 &
                                                     (byte)iVar116 & (byte)iVar82 & (byte)iVar10)));
          auVar14._0_8_ =
               CONCAT17((bVar27 & (byte)((uint)iVar21 >> 0x18) & (byte)((uint)iVar74 >> 0x18) ^
                        PTR_DAT_043724a8[0x37]) & bVar77 &
                        (byte)((uint)iVar117 >> 0x18) & (byte)((uint)iVar23 >> 0x18) & bVar51,
                        CONCAT16((bVar26 & (byte)((uint)iVar21 >> 0x10) &
                                           (byte)((uint)iVar74 >> 0x10) ^ PTR_DAT_043724a8[0x36]) &
                                 bVar76 & (byte)((uint)iVar117 >> 0x10) &
                                          (byte)((uint)iVar23 >> 0x10) & bVar50,
                                 CONCAT15((bVar25 & (byte)((uint)iVar21 >> 8) &
                                                    (byte)((uint)iVar74 >> 8) ^
                                          PTR_DAT_043724a8[0x35]) & bVar75 &
                                          (byte)((uint)iVar117 >> 8) & (byte)((uint)iVar23 >> 8) &
                                          bVar49,CONCAT14((bVar22 & (byte)iVar21 & (byte)iVar74 ^
                                                          PTR_DAT_043724a8[0x34]) & bVar70 &
                                                          (byte)iVar117 & (byte)iVar23 &
                                                          (byte)iVar19,iVar10))));
          auVar14[8] = (bVar22 ^ PTR_DAT_043724a8[0x38]) & bVar78 & (byte)iVar118 & (byte)iVar108 &
                       (byte)iVar52;
          auVar14[9] = (bVar25 ^ PTR_DAT_043724a8[0x39]) & bVar83 &
                       (byte)((uint)iVar118 >> 8) & (byte)((uint)iVar108 >> 8) & bVar53;
          auVar14[10] = (bVar26 ^ PTR_DAT_043724a8[0x3a]) & bVar84 &
                        (byte)((uint)iVar118 >> 0x10) & (byte)((uint)iVar108 >> 0x10) & bVar54;
          auVar14[0xb] = (bVar27 ^ PTR_DAT_043724a8[0x3b]) & bVar85 &
                         (byte)((uint)iVar118 >> 0x18) & (byte)((uint)iVar108 >> 0x18) & bVar55;
          auVar16[0xc] = (bVar22 & (byte)iVar28 & (byte)iVar87 ^ PTR_DAT_043724a8[0x3c]) & bVar86 &
                         (byte)iVar121 & (byte)iVar113 & (byte)iVar56;
          auVar16._0_12_ = auVar14;
          auVar16[0xd] = (bVar25 & (byte)((uint)iVar28 >> 8) & (byte)((uint)iVar87 >> 8) ^
                         PTR_DAT_043724a8[0x3d]) & bVar88 &
                         (byte)((uint)iVar121 >> 8) & (byte)((uint)iVar113 >> 8) & bVar57;
          auVar16[0xe] = (bVar26 & (byte)((uint)iVar28 >> 0x10) & (byte)((uint)iVar87 >> 0x10) ^
                         PTR_DAT_043724a8[0x3e]) & bVar89 &
                         (byte)((uint)iVar121 >> 0x10) & (byte)((uint)iVar113 >> 0x10) & bVar58;
          auVar16[0xf] = (bVar27 & (byte)((uint)iVar28 >> 0x18) & (byte)((uint)iVar87 >> 0x18) ^
                         PTR_DAT_043724a8[0x3f]) & bVar90 &
                         (byte)((uint)iVar121 >> 0x18) & (byte)((uint)iVar113 >> 0x18) & bVar59;
          if (((iVar10 != 0 || (int)((ulong)auVar14._0_8_ >> 0x20) != 0) || auVar14._8_4_ != 0) ||
              auVar16._12_4_ != 0) {
            auVar4[8] = (char)uVar94;
            auVar4._0_8_ = uVar94;
            auVar4[9] = uVar29;
            auVar4[10] = uVar30;
            auVar4[0xb] = uVar31;
            auVar4[0xc] = uVar32;
            auVar4[0xd] = uVar33;
            auVar4[0xe] = uVar34;
            auVar4[0xf] = uVar35;
            auVar7[4] = SUB41(fVar103,0);
            auVar7._0_4_ = fVar62;
            auVar7[5] = (char)((uint)fVar103 >> 8);
            auVar7[6] = (char)((uint)fVar103 >> 0x10);
            auVar7[7] = (char)((uint)fVar103 >> 0x18);
            auVar7[8] = SUB41(fVar100,0);
            auVar7[9] = (char)((uint)fVar100 >> 8);
            auVar7[10] = (char)((uint)fVar100 >> 0x10);
            auVar7[0xb] = (char)((uint)fVar100 >> 0x18);
            auVar7[0xc] = SUB41(fVar104,0);
            auVar7[0xd] = (char)((uint)fVar104 >> 8);
            auVar7[0xe] = (char)((uint)fVar104 >> 0x10);
            auVar7[0xf] = (char)((uint)fVar104 >> 0x18);
            auVar17[8] = (char)uVar94;
            auVar17._0_8_ = uVar94;
            auVar17[9] = uVar29;
            auVar17[10] = uVar30;
            auVar17[0xb] = uVar31;
            auVar17[0xc] = uVar32;
            auVar17[0xd] = uVar33;
            auVar17[0xe] = uVar34;
            auVar17[0xf] = uVar35;
            auVar17 = auVar17 ^ (auVar4 ^ auVar7) & auVar16;
            uVar94 = NEON_fminp(auVar17._0_8_,auVar17._0_8_,4);
            auVar42 = NEON_ext(auVar17,auVar17,8,1);
            uVar94 = NEON_fmin(CONCAT44(auVar42._0_4_,auVar42._0_4_),uVar94,4);
            *(undefined8 *)param_5 = uVar94;
            return 2;
          }
        }
      }
    }
    return 0;
  }
  fVar92 = fVar92 - fVar63;
  fVar100 = fVar100 - fVar106;
  fVar24 = fVar24 - fVar101;
  fVar41 = (float)*(undefined8 *)(param_2 + 4);
  fVar43 = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
  fVar114 = (float)*(undefined8 *)(param_2 + 6);
  fVar91 = fVar92 * fVar41 + fVar100 * fVar43 + fVar24 * fVar114;
  fVar61 = fVar92 * fVar41 + fVar100 * fVar43 + fVar24 * fVar114;
  fVar101 = fVar114 * fVar114 + fVar41 * fVar41 + fVar43 * fVar43;
  fVar102 = fVar114 * fVar114 + fVar41 * fVar41 + fVar43 * fVar43;
  uVar110 = CONCAT44(fVar102,fVar101);
  iVar10 = -(uint)(fVar101 == 0.0);
  iVar19 = -(uint)(fVar102 == 0.0);
  uVar95 = NEON_frecpe(uVar110,4);
  uVar94 = NEON_frecps(uVar110,uVar95,4);
  fVar62 = (float)uVar95 * (float)uVar94;
  fVar106 = (float)((ulong)uVar95 >> 0x20) * (float)((ulong)uVar94 >> 0x20);
  uVar94 = NEON_frecps(uVar110,CONCAT44(fVar106,fVar62),4);
  fVar62 = fVar62 * (float)uVar94;
  fVar106 = fVar106 * (float)((ulong)uVar94 >> 0x20);
  fVar107 = -fVar91;
  fVar63 = -fVar61;
  fVar93 = fVar106 * fVar63;
  uVar13 = (CONCAT17((char)((uint)fVar93 >> 0x18),
                     CONCAT16((char)((uint)fVar93 >> 0x10),
                              CONCAT15((char)((uint)fVar93 >> 8),
                                       CONCAT14(SUB41(fVar93,0),fVar62 * fVar107)))) ^
           0x7f7fffee7f7fffee) &
           CONCAT17(~(byte)((uint)iVar19 >> 0x18),
                    CONCAT16(~(byte)((uint)iVar19 >> 0x10),
                             CONCAT15(~(byte)((uint)iVar19 >> 8),
                                      CONCAT14(~(byte)iVar19,
                                               CONCAT13(~(byte)((uint)iVar10 >> 0x18),
                                                        CONCAT12(~(byte)((uint)iVar10 >> 0x10),
                                                                 CONCAT11(~(byte)((uint)iVar10 >> 8)
                                                                          ,~(byte)iVar10))))))) ^
           0x7f7fffee7f7fffee;
  fVar93 = (float)uVar13;
  fVar41 = fVar92 + fVar41 * fVar93;
  fVar43 = fVar100 + fVar43 * (float)(uVar13 >> 0x20);
  fVar114 = fVar24 + fVar114 * fVar93;
  fVar41 = fVar41 * fVar41;
  fVar43 = fVar43 * fVar43;
  fVar114 = fVar114 * fVar114;
  fVar93 = fVar101 * ((fVar41 + fVar43 + fVar114) - fVar6);
  fVar102 = fVar102 * ((fVar41 + fVar43 + fVar114) - fVar109);
  fVar41 = -fVar93;
  fVar43 = -fVar102;
  uVar94 = CONCAT44(fVar43,fVar41);
  if (0.0 <= fVar41) {
    uVar95 = NEON_frsqrte(uVar94,4);
    fVar109 = (float)uVar95;
    fVar114 = (float)((ulong)uVar95 >> 0x20);
    uVar95 = NEON_frsqrts(uVar94,CONCAT44(fVar114 * fVar114,fVar109 * fVar109),4);
    fVar109 = fVar109 * (float)uVar95;
    fVar114 = fVar114 * (float)((ulong)uVar95 >> 0x20);
    uVar94 = NEON_frsqrts(uVar94,CONCAT44(fVar114 * fVar114,fVar109 * fVar109),4);
    iVar10 = -(uint)(0.0 <= fVar93);
    iVar19 = -(uint)(0.0 <= fVar102);
    fVar41 = (float)uVar94 * fVar109 * fVar41;
    fVar43 = (float)((ulong)uVar94 >> 0x20) * fVar114 * fVar43;
    fVar41 = (float)CONCAT13((byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18),
                             CONCAT12((byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar10 >> 0x10),
                                      CONCAT11((byte)((uint)fVar41 >> 8) &
                                               ~(byte)((uint)iVar10 >> 8),
                                               SUB41(fVar41,0) & ~(byte)iVar10)));
    uVar94 = *(undefined8 *)(PTR_DAT_043723a0 + 8);
    uVar13 = *(ulong *)PTR_DAT_043723a0;
    fVar107 = fVar107 - fVar41;
    fVar43 = (float)(CONCAT17((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                              CONCAT16((byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10),
                                       CONCAT15((byte)((uint)fVar43 >> 8) &
                                                ~(byte)((uint)iVar19 >> 8),
                                                CONCAT14(SUB41(fVar43,0) & ~(byte)iVar19,fVar41))))
                    >> 0x20);
    fVar63 = fVar63 - fVar43;
    uVar29 = (undefined1)((uint)fVar63 >> 8);
    uVar30 = (undefined1)((uint)fVar63 >> 0x10);
    uVar31 = (undefined1)((uint)fVar63 >> 0x18);
    iVar10 = -(uint)(fVar107 < 0.0);
    iVar19 = -(uint)(fVar63 < 0.0);
    uVar65 = CONCAT17(uVar31,CONCAT16(uVar30,CONCAT15(uVar29,CONCAT14(SUB41(fVar63,0),fVar107)))) ^
             (CONCAT17(uVar31,CONCAT16(uVar30,CONCAT15(uVar29,CONCAT14(SUB41(fVar63,0),fVar107)))) ^
             CONCAT44(fVar43 - fVar61,fVar41 - fVar91)) & CONCAT44(iVar19,iVar10) & uVar13;
    fVar41 = (float)uVar65;
    if ((fVar41 < *param_5 * fVar101) && (0.0 <= fVar41)) {
      auVar97._0_4_ = fVar92 * fVar92;
      auVar97._4_4_ = fVar100 * fVar100;
      auVar97._8_4_ = fVar24 * fVar24;
      auVar97._12_4_ = (fVar104 - fVar103) * (fVar104 - fVar103);
      *(ulong *)param_5 = CONCAT44(fVar106 * (float)(uVar65 >> 0x20),fVar62 * fVar41);
      auVar42 = NEON_ext(auVar97,auVar97,8,1);
      if (fVar6 < auVar42._0_4_ + auVar97._0_4_ + auVar97._4_4_) {
        return 2;
      }
      bVar46 = (byte)((uint)iVar19 >> 0x18);
      uVar12 = (uint)(byte)((byte)iVar10 & (byte)uVar13 & (byte)_DAT_03889700);
      auVar15._0_8_ =
           CONCAT17(bVar46 & (byte)(uVar13 >> 0x38) & (byte)((ulong)_DAT_03889700 >> 0x38),
                    (uint7)CONCAT14((byte)iVar19 & (byte)(uVar13 >> 0x20) &
                                    (byte)((ulong)_DAT_03889700 >> 0x20),uVar12));
      auVar15[8] = (byte)iVar10 & (byte)uVar94 & (byte)_UNK_03889708;
      auVar15[9] = (byte)((uint)iVar10 >> 8) & (byte)((ulong)uVar94 >> 8) &
                   (byte)((ulong)_UNK_03889708 >> 8);
      auVar15[10] = (byte)((uint)iVar10 >> 0x10) & (byte)((ulong)uVar94 >> 0x10) &
                    (byte)((ulong)_UNK_03889708 >> 0x10);
      auVar15[0xb] = (byte)((uint)iVar10 >> 0x18) & (byte)((ulong)uVar94 >> 0x18) &
                     (byte)((ulong)_UNK_03889708 >> 0x18);
      auVar18[0xc] = (byte)iVar19 & (byte)((ulong)uVar94 >> 0x20) &
                     (byte)((ulong)_UNK_03889708 >> 0x20);
      auVar18._0_12_ = auVar15;
      auVar18[0xd] = (byte)((uint)iVar19 >> 8) & (byte)((ulong)uVar94 >> 0x28) &
                     (byte)((ulong)_UNK_03889708 >> 0x28);
      auVar18[0xe] = (byte)((uint)iVar19 >> 0x10) & (byte)((ulong)uVar94 >> 0x30) &
                     (byte)((ulong)_UNK_03889708 >> 0x30);
      auVar18[0xf] = bVar46 & (byte)((ulong)uVar94 >> 0x38) & (byte)((ulong)_UNK_03889708 >> 0x38);
      return uVar12 + (int)((ulong)auVar15._0_8_ >> 0x20) + auVar15._8_4_ + auVar18._12_4_ & 4 | 1;
    }
  }
  return 0;
}


