/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03289f40; name: FUN_03289f40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03289f40(undefined8 *param_1,long *param_2,long *param_3,float *param_4,undefined8 *param_5
                 ,float *param_6,undefined8 *param_7,ulong *param_8,undefined8 param_9,
                 undefined8 *param_10,undefined8 *param_11,ulong *param_12)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [15];
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined1 (*pauVar20) [16];
  long lVar21;
  long lVar22;
  undefined1 uVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar29;
  undefined1 auVar28 [16];
  float fVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  int iVar36;
  int iVar48;
  undefined8 uVar37;
  undefined1 auVar38 [12];
  undefined1 auVar39 [16];
  undefined1 auVar46 [16];
  undefined1 auVar45 [16];
  undefined1 auVar44 [16];
  undefined1 auVar43 [16];
  undefined1 auVar42 [16];
  undefined1 auVar41 [16];
  undefined1 auVar40 [16];
  undefined1 auVar47 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  int iVar65;
  undefined1 auVar52 [12];
  float fVar63;
  float fVar64;
  undefined1 auVar53 [16];
  int iVar66;
  undefined1 auVar54 [16];
  undefined1 auVar62 [16];
  undefined1 auVar61 [16];
  undefined1 auVar60 [16];
  undefined1 auVar59 [16];
  undefined1 auVar58 [16];
  undefined1 auVar57 [16];
  undefined1 auVar56 [16];
  undefined1 auVar55 [16];
  float fVar67;
  float fVar68;
  float fVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar81 [16];
  undefined1 auVar80 [16];
  undefined1 auVar79 [16];
  undefined1 auVar78 [16];
  undefined1 auVar77 [16];
  undefined1 auVar76 [16];
  undefined1 auVar75 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar91 [16];
  undefined1 auVar90 [16];
  undefined1 auVar89 [16];
  undefined1 auVar88 [16];
  undefined1 auVar87 [16];
  undefined1 auVar86 [16];
  undefined1 auVar85 [16];
  undefined1 auVar84 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar102;
  float fVar103;
  undefined1 auVar101 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  int iVar106;
  int iVar107;
  int iVar108;
  int iVar109;
  undefined1 auVar110 [16];
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar117;
  undefined8 uVar116;
  float fVar118;
  float fVar120;
  undefined8 uVar119;
  float fVar121;
  float fVar122;
  undefined1 auVar123 [12];
  float fVar126;
  float fVar127;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float local_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 (*local_150) [16];
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  ulong local_100;
  undefined8 local_f8;
  ulong local_f0 [4];
  undefined8 local_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  
  local_f8 = param_1[0xb];
  local_108 = param_1[9];
  uStack_118 = param_1[7];
  local_128 = param_1[5];
  uStack_138 = param_1[3];
  local_148 = param_1[1];
  local_150 = (undefined1 (*) [16])*param_1;
  local_140 = param_1[2];
  local_130 = param_1[4];
  local_120 = param_1[6];
  local_110 = param_1[8];
  uVar19 = param_1[10];
  uVar26 = *param_7;
  uVar17 = *param_8;
  iVar36 = -(uint)((float)uVar17 == 0.0);
  iVar48 = -(uint)((float)(uVar17 >> 0x20) == 0.0);
  auVar101._0_8_ = uVar17 ^ (uVar17 ^ uVar19) & CONCAT44(iVar48,iVar36);
  auVar101._8_8_ = 0;
  uVar27 = NEON_frecpe(auVar101._0_8_,4);
  lVar21 = *param_2;
  lVar22 = *param_3;
  uVar31 = NEON_frecps(auVar101._0_8_,uVar27,4);
  fVar24 = (float)uVar27 * (float)uVar31;
  fVar29 = (float)((ulong)uVar27 >> 0x20) * (float)((ulong)uVar31 >> 0x20);
  uVar27 = NEON_frecps(auVar101._0_8_,CONCAT44(fVar29,fVar24),4);
  fVar24 = fVar24 * (float)uVar27;
  fVar29 = fVar29 * (float)((ulong)uVar27 >> 0x20);
  uVar31 = 0;
  local_100 = uVar19;
  fVar25 = cosf(*param_6);
  uVar32 = NEON_frecpe(uVar19,4);
  uVar27 = NEON_fmov(0x3f800000,4);
  fVar25 = (float)uVar27 - fVar25;
  fVar25 = fVar25 + fVar25;
  uVar37 = NEON_frecps(uVar19,uVar32,4);
  uVar31 = NEON_fmax(CONCAT44(fVar25,fVar25),uVar31,4);
  fVar25 = (float)uVar32 * (float)uVar37;
  fVar33 = (float)((ulong)uVar32 >> 0x20) * (float)((ulong)uVar37 >> 0x20);
  uVar32 = NEON_frecps(uVar19,CONCAT44(fVar33,fVar25),4);
  fVar25 = ((float)uVar27 - (float)uVar31) * auVar101._0_4_ * fVar25 * (float)uVar32;
  fVar33 = ((float)((ulong)uVar27 >> 0x20) - (float)((ulong)uVar31 >> 0x20)) * auVar101._4_4_ *
           fVar33 * (float)((ulong)uVar32 >> 0x20);
  uVar31 = *param_5;
  local_170 = uVar31;
  if ((*param_6 <= 0.0) || (iVar36 != 0 || iVar48 != 0)) {
    local_158 = uVar27;
  }
  else {
    iVar106 = FUN_03289b10(&local_150,param_2,param_9,param_6,&local_158,&local_160);
    if ((iVar106 == 0) || ((float)local_158 < -fVar25)) goto LAB_0328a0b8;
    local_170 = local_160;
  }
  uVar27 = local_158;
LAB_0328a0b8:
  iVar108 = 0;
  iVar109 = 0;
  iVar106 = 0;
  iVar107 = 0;
  fVar99 = (float)param_11[1];
  fVar95 = (float)((ulong)param_11[1] >> 0x20);
  fVar97 = (float)*param_11;
  fVar98 = (float)((ulong)*param_11 >> 0x20);
  fVar30 = (float)local_130;
  fVar100 = fVar30 * fVar97;
  fVar34 = (float)((ulong)local_130 >> 0x20);
  fVar102 = fVar34 * fVar98;
  fVar35 = (float)local_128;
  fVar103 = fVar35 * fVar99;
  local_1b0._0_1_ = (byte)iVar36;
  local_1b0._1_1_ = (byte)((uint)iVar36 >> 8);
  local_1b0._2_1_ = (byte)((uint)iVar36 >> 0x10);
  local_1b0._3_1_ = (byte)((uint)iVar36 >> 0x18);
  uStack_1ac._0_1_ = (byte)iVar48;
  uStack_1ac._1_1_ = (byte)((uint)iVar48 >> 8);
  uStack_1ac._2_1_ = (byte)((uint)iVar48 >> 0x10);
  uStack_1ac._3_1_ = (byte)((uint)iVar48 >> 0x18);
  fVar67 = (float)local_140 * *param_4;
  fVar68 = local_140._4_4_ * param_4[1];
  fVar69 = (float)uStack_138 * param_4[2];
  fVar51 = *param_4 * fVar30;
  fVar63 = param_4[1] * fVar34;
  fVar64 = param_4[2] * fVar35;
  fVar97 = (float)local_140 * fVar97;
  fVar98 = local_140._4_4_ * fVar98;
  fVar99 = (float)uStack_138 * fVar99;
  fVar94 = -fVar95;
  fVar95 = -fVar95;
  auVar50._0_8_ = *param_10;
  auVar50._8_8_ = auVar50._0_8_;
  fVar96 = fVar67 + fVar68 + fVar69;
  fVar69 = fVar67 + fVar68 + fVar69;
  fVar67 = fVar51 + fVar63 + fVar64;
  fVar64 = fVar51 + fVar63 + fVar64;
  fVar51 = fVar97 + fVar98 + fVar99;
  fVar99 = fVar97 + fVar98 + fVar99;
  fVar63 = fVar100 + fVar102 + fVar103;
  fVar103 = fVar100 + fVar102 + fVar103;
  auVar101 = ZEXT816(0);
  lVar18 = 0;
  auVar70._8_8_ = uVar19;
  auVar70._0_8_ = uVar19;
  auVar105._8_4_ = 0xff7fffee;
  auVar105._0_8_ = 0xff7fffeeff7fffee;
  auVar105._12_4_ = 0xff7fffee;
  uVar32 = local_110;
  uVar37 = local_108;
  uVar116 = local_120;
  uVar119 = uStack_118;
  pauVar20 = local_150;
  do {
    pauVar20 = (undefined1 (*) [16])(*pauVar20 + 8);
    fVar115 = (float)uVar116;
    fVar98 = (float)((ulong)uVar27 >> 0x20);
    fVar117 = (float)((ulong)uVar116 >> 0x20);
    fVar118 = (float)uVar119;
    fVar120 = (float)((ulong)uVar119 >> 0x20);
    fVar111 = (float)uVar32;
    fVar68 = (float)((ulong)local_170 >> 0x20);
    fVar112 = (float)((ulong)uVar32 >> 0x20);
    fVar113 = (float)uVar37;
    fVar114 = (float)((ulong)uVar37 >> 0x20);
    fVar97 = (float)((ulong)uVar31 >> 0x20);
    fVar100 = (float)uVar27 * fVar115 + (float)local_170 * fVar111;
    fVar102 = fVar98 * fVar117 + fVar68 * fVar112;
    fVar126 = (float)uVar27 * fVar118 + (float)local_170 * fVar113;
    fVar127 = fVar98 * fVar120 + fVar68 * fVar114;
    auVar53 = NEON_fmov(0x3f800000,4);
    fVar68 = fVar115 + (float)uVar31 * fVar111;
    fVar98 = fVar117 + fVar97 * fVar112;
    fVar121 = fVar118 + (float)uVar31 * fVar113;
    fVar97 = fVar120 + fVar97 * fVar114;
    fVar68 = fVar68 + fVar68;
    fVar98 = fVar98 + fVar98;
    fVar121 = fVar121 + fVar121;
    fVar97 = fVar97 + fVar97;
    auVar83._8_4_ = 0x3c010204;
    auVar83._0_8_ = 0x3c0102043c010204;
    auVar83._12_4_ = 0x3c010204;
    auVar110 = NEON_fmax(*(undefined1 (*) [16])(lVar21 + lVar18),auVar83,4);
    auVar124._0_4_ = (fVar100 + fVar100) - fVar25;
    auVar124._4_4_ = (fVar102 + fVar102) - fVar33;
    auVar124._8_4_ = (fVar126 + fVar126) - fVar25;
    auVar124._12_4_ = (fVar127 + fVar127) - fVar33;
    auVar83 = *pauVar20;
    fVar100 = (float)uVar19;
    fVar102 = (float)(uVar19 >> 0x20);
    auVar71._0_8_ = CONCAT44(-(uint)(fVar98 < auVar124._4_4_),-(uint)(fVar68 < auVar124._0_4_));
    auVar71._8_4_ = -(uint)(fVar121 < auVar124._8_4_);
    auVar71._12_4_ = -(uint)(fVar97 < auVar124._12_4_);
    auVar73._8_8_ = auVar71._8_8_;
    auVar73._0_8_ = auVar71._0_8_;
    auVar53 = auVar50 ^ (auVar50 ^ auVar53) & auVar71;
    auVar93 = NEON_frecpe(auVar110,4);
    auVar72 = NEON_frecps(auVar110,auVar93,4);
    auVar92._4_4_ = fVar98;
    auVar92._0_4_ = fVar68;
    auVar92._8_4_ = fVar121;
    auVar92._12_4_ = fVar97;
    auVar74._4_4_ = fVar98;
    auVar74._0_4_ = fVar68;
    auVar74._8_4_ = fVar121;
    auVar74._12_4_ = fVar97;
    auVar74 = auVar74 ^ (auVar92 ^ auVar124) & auVar73;
    fVar122 = (float)CONCAT13(auVar74[3] & ~local_1b0._3_1_,
                              CONCAT12(auVar74[2] & ~local_1b0._2_1_,
                                       CONCAT11(auVar74[1] & ~local_1b0._1_1_,
                                                auVar74[0] & ~(byte)local_1b0)));
    auVar123._0_8_ =
         CONCAT17(auVar74[7] & ~uStack_1ac._3_1_,
                  CONCAT16(auVar74[6] & ~uStack_1ac._2_1_,
                           CONCAT15(auVar74[5] & ~uStack_1ac._1_1_,
                                    CONCAT14(auVar74[4] & ~(byte)uStack_1ac,fVar122))));
    auVar123[8] = auVar74[8] & ~(byte)local_1b0;
    auVar123[9] = auVar74[9] & ~local_1b0._1_1_;
    auVar123[10] = auVar74[10] & ~local_1b0._2_1_;
    auVar123[0xb] = auVar74[0xb] & ~local_1b0._3_1_;
    auVar125[0xc] = auVar74[0xc] & ~(byte)uStack_1ac;
    auVar125._0_12_ = auVar123;
    auVar125[0xd] = auVar74[0xd] & ~uStack_1ac._1_1_;
    auVar125[0xe] = auVar74[0xe] & ~uStack_1ac._2_1_;
    auVar125[0xf] = auVar74[0xf] & ~uStack_1ac._3_1_;
    fVar97 = auVar93._0_4_ * auVar72._0_4_;
    fVar121 = auVar93._4_4_ * auVar72._4_4_;
    fVar126 = auVar93._8_4_ * auVar72._8_4_;
    fVar127 = auVar93._12_4_ * auVar72._12_4_;
    auVar72._4_4_ = fVar121;
    auVar72._0_4_ = fVar97;
    auVar72._8_4_ = fVar126;
    auVar72._12_4_ = fVar127;
    auVar74 = NEON_frecps(auVar110,auVar72,4);
    auVar75._0_8_ = auVar83._7_8_ << 0x38;
    auVar75._9_7_ = auVar83._9_7_;
    auVar75[8] = auVar83[4];
    auVar77._11_5_ = auVar83._11_5_;
    auVar77._0_10_ = auVar75._0_10_;
    auVar77[10] = auVar83[5];
    auVar79._13_3_ = auVar83._13_3_;
    auVar79._0_12_ = auVar77._0_12_;
    auVar79[0xc] = auVar83[6];
    uVar23 = auVar83[7];
    auVar81[0xf] = auVar83[0xf];
    auVar81._0_14_ = auVar79._0_14_;
    auVar81[0xe] = uVar23;
    auVar76._0_9_ = (unkuint9)auVar81._8_8_ << 0x40;
    auVar76._10_6_ = auVar81._10_6_;
    auVar76[9] = 0;
    auVar78._12_4_ = auVar81._12_4_;
    auVar78._0_11_ = auVar76._0_11_;
    auVar78[0xb] = 0;
    auVar80._14_2_ = auVar81._14_2_;
    auVar80._0_13_ = auVar78._0_13_;
    auVar80[0xd] = 0;
    auVar84._2_14_ = auVar70._2_14_;
    auVar84._0_2_ = auVar83._0_2_ & 0xff;
    auVar86._6_10_ = auVar70._6_10_;
    auVar86._0_4_ = auVar84._0_4_;
    auVar86[4] = auVar83[1];
    auVar86[5] = 0;
    auVar88._10_6_ = (undefined6)(uVar19 >> 0x10);
    auVar88._0_8_ = auVar86._0_8_;
    auVar88[8] = auVar83[2];
    auVar88[9] = 0;
    auVar90._14_2_ = (undefined2)(uVar19 >> 0x30);
    auVar90._0_12_ = auVar88._0_12_;
    auVar90[0xc] = auVar83[3];
    auVar90[0xd] = 0;
    auVar85._4_12_ = auVar90._4_12_;
    auVar85._0_4_ = auVar86._0_4_ & 0xffff;
    auVar87._8_8_ = auVar90._8_8_;
    auVar87._0_6_ = auVar85._0_6_;
    auVar87._6_2_ = 0;
    auVar89._12_4_ = auVar90._12_4_;
    auVar89._0_10_ = auVar87._0_10_;
    auVar89._10_2_ = 0;
    auVar91._0_14_ = auVar89._0_14_;
    auVar91._14_2_ = 0;
    auVar3[1] = 0;
    auVar3[0] = auVar83[4];
    auVar3._2_13_ = auVar80._2_13_;
    auVar4[4] = auVar83[5];
    auVar4._0_4_ = auVar3._0_4_;
    auVar4[5] = 0;
    auVar4._6_9_ = auVar80._6_9_;
    auVar5[8] = auVar83[6];
    auVar5._0_8_ = auVar4._0_8_;
    auVar5[9] = 0;
    auVar5._10_5_ = auVar80._10_5_;
    auVar6[0xc] = uVar23;
    auVar6._0_12_ = auVar5._0_12_;
    auVar6[0xd] = 0;
    auVar6[0xe] = uVar23;
    auVar11._4_11_ = auVar6._4_11_;
    auVar11._0_4_ = auVar3._0_4_;
    auVar12._6_2_ = 0;
    auVar12._0_6_ = auVar11._0_6_;
    auVar12._8_7_ = auVar6._8_7_;
    auVar13._10_2_ = 0;
    auVar13._0_10_ = auVar12._0_10_;
    auVar13._12_3_ = auVar6._12_3_;
    auVar82._0_14_ = auVar13._0_14_;
    auVar82._14_2_ = 0;
    auVar92 = NEON_ucvtf(auVar91,4);
    uVar37 = ((undefined8 *)(lVar22 + lVar18))[1];
    uVar32 = *(undefined8 *)(lVar22 + lVar18);
    lVar18 = lVar18 + 0x10;
    iVar36 = -(uint)(auVar110._0_4_ * fVar100 * (fVar51 * fVar115 + fVar63 * fVar111) < fVar94);
    iVar48 = -(uint)(auVar110._4_4_ * fVar102 * (fVar99 * fVar117 + fVar103 * fVar112) < fVar95);
    iVar65 = -(uint)(auVar110._8_4_ * fVar100 * (fVar51 * fVar118 + fVar63 * fVar113) < fVar94);
    iVar66 = -(uint)(auVar110._12_4_ * fVar102 * (fVar99 * fVar120 + fVar103 * fVar114) < fVar95);
    fVar68 = (float)uVar26;
    fVar98 = fVar68 * fVar97 * auVar74._0_4_;
    fVar97 = (float)((ulong)uVar26 >> 0x20);
    fVar121 = fVar97 * fVar121 * auVar74._4_4_;
    fVar68 = fVar68 * fVar126 * auVar74._8_4_;
    fVar97 = fVar97 * fVar127 * auVar74._12_4_;
    fVar98 = (float)CONCAT13((byte)((uint)fVar98 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                             CONCAT12((byte)((uint)fVar98 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10),
                                      CONCAT11((byte)((uint)fVar98 >> 8) &
                                               ~(byte)((uint)iVar36 >> 8),
                                               SUB41(fVar98,0) & ~(byte)iVar36)));
    auVar52._0_8_ =
         CONCAT17((byte)((uint)fVar121 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                  CONCAT16((byte)((uint)fVar121 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10),
                           CONCAT15((byte)((uint)fVar121 >> 8) & ~(byte)((uint)iVar48 >> 8),
                                    CONCAT14(SUB41(fVar121,0) & ~(byte)iVar48,fVar98))));
    auVar52[8] = SUB41(fVar68,0) & ~(byte)iVar65;
    auVar52[9] = (byte)((uint)fVar68 >> 8) & ~(byte)((uint)iVar65 >> 8);
    auVar52[10] = (byte)((uint)fVar68 >> 0x10) & ~(byte)((uint)iVar65 >> 0x10);
    auVar52[0xb] = (byte)((uint)fVar68 >> 0x18) & ~(byte)((uint)iVar65 >> 0x18);
    auVar93[0xc] = SUB41(fVar97,0) & ~(byte)iVar66;
    auVar93._0_12_ = auVar52;
    auVar93[0xd] = (byte)((uint)fVar97 >> 8) & ~(byte)((uint)iVar66 >> 8);
    auVar93[0xe] = (byte)((uint)fVar97 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10);
    auVar93[0xf] = (byte)((uint)fVar97 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18);
    auVar83 = NEON_ucvtf(auVar82,4);
    auVar74 = NEON_fmov(0xbf800000,4);
    local_180 = auVar74._0_4_;
    fStack_17c = auVar74._4_4_;
    uVar116 = CONCAT44(auVar92._4_4_ * 0.007874016 + fStack_17c,
                       auVar92._0_4_ * 0.007874016 + local_180);
    fStack_178 = auVar74._8_4_;
    fStack_174 = auVar74._12_4_;
    uVar119 = CONCAT44(auVar92._12_4_ * 0.007874016 + fStack_174,
                       auVar92._8_4_ * 0.007874016 + fStack_178);
    auVar110._0_4_ =
         ((float)uVar32 +
         fVar100 * (fVar67 * fVar111 +
                   fVar96 * fVar115 +
                   (fVar122 -
                   fVar100 * fVar24 * (fVar115 * fVar115 + fVar111 * fVar111 * auVar53._0_4_)))) -
         fVar98;
    auVar110._4_4_ =
         ((float)((ulong)uVar32 >> 0x20) +
         fVar102 * (fVar64 * fVar112 +
                   fVar69 * fVar117 +
                   ((float)((ulong)auVar123._0_8_ >> 0x20) -
                   fVar102 * fVar29 * (fVar117 * fVar117 + fVar112 * fVar112 * auVar53._4_4_)))) -
         (float)((ulong)auVar52._0_8_ >> 0x20);
    auVar110._8_4_ =
         ((float)uVar37 +
         fVar100 * (fVar67 * fVar113 +
                   fVar96 * fVar118 +
                   (auVar123._8_4_ -
                   fVar100 * fVar24 * (fVar118 * fVar118 + fVar113 * fVar113 * auVar53._8_4_)))) -
         auVar52._8_4_;
    auVar110._12_4_ =
         ((float)((ulong)uVar37 >> 0x20) +
         fVar102 * (fVar64 * fVar114 +
                   fVar69 * fVar120 +
                   (auVar125._12_4_ -
                   fVar102 * fVar29 * (fVar120 * fVar120 + fVar114 * fVar114 * auVar53._12_4_)))) -
         auVar93._12_4_;
    uVar32 = CONCAT44(auVar83._4_4_ * 0.007874016 + fStack_17c,
                      auVar83._0_4_ * 0.007874016 + local_180);
    uVar37 = CONCAT44(auVar83._12_4_ * 0.007874016 + fStack_174,
                      auVar83._8_4_ * 0.007874016 + fStack_178);
    auVar104._0_4_ = -(uint)(auVar105._0_4_ < auVar110._0_4_);
    auVar104._4_4_ = -(uint)(auVar105._4_4_ < auVar110._4_4_);
    auVar104._8_4_ = -(uint)(auVar105._8_4_ < auVar110._8_4_);
    auVar104._12_4_ = -(uint)(auVar105._12_4_ < auVar110._12_4_);
    auVar105 = auVar105 ^ (auVar105 ^ auVar110) & auVar104;
    auVar53._4_4_ = iVar107;
    auVar53._0_4_ = iVar106;
    auVar53._8_4_ = iVar108;
    auVar53._12_4_ = iVar109;
    auVar101 = auVar101 ^ (auVar101 ^ auVar53) & auVar104;
    iVar106 = iVar106 + 1;
    iVar107 = iVar107 + 1;
    iVar108 = iVar108 + 1;
    iVar109 = iVar109 + 1;
  } while (lVar18 != 0x200);
  fVar24 = (float)NEON_fmaxnmv(auVar105,4);
  iVar36 = -(uint)(fVar24 <= auVar105._0_4_);
  iVar48 = -(uint)(fVar24 <= auVar105._4_4_);
  iVar106 = -(uint)(fVar24 <= auVar105._8_4_);
  iVar107 = -(uint)(fVar24 <= auVar105._12_4_);
  iVar36 = CONCAT13((byte)((uint)iVar36 >> 0x18) & (byte)((ulong)_DAT_03889700 >> 0x18),
                    CONCAT12((byte)((uint)iVar36 >> 0x10) & (byte)((ulong)_DAT_03889700 >> 0x10),
                             CONCAT11((byte)((uint)iVar36 >> 8) & (byte)((ulong)_DAT_03889700 >> 8),
                                      (byte)iVar36 & (byte)_DAT_03889700)));
  auVar38._0_8_ =
       CONCAT17((byte)((uint)iVar48 >> 0x18) & (byte)((ulong)_DAT_03889700 >> 0x38),
                CONCAT16((byte)((uint)iVar48 >> 0x10) & (byte)((ulong)_DAT_03889700 >> 0x30),
                         CONCAT15((byte)((uint)iVar48 >> 8) & (byte)((ulong)_DAT_03889700 >> 0x28),
                                  CONCAT14((byte)iVar48 & (byte)((ulong)_DAT_03889700 >> 0x20),
                                           iVar36))));
  auVar38[8] = (byte)iVar106 & (byte)_UNK_03889708;
  auVar38[9] = (byte)((uint)iVar106 >> 8) & (byte)((ulong)_UNK_03889708 >> 8);
  auVar38[10] = (byte)((uint)iVar106 >> 0x10) & (byte)((ulong)_UNK_03889708 >> 0x10);
  auVar38[0xb] = (byte)((uint)iVar106 >> 0x18) & (byte)((ulong)_UNK_03889708 >> 0x18);
  auVar39[0xc] = (byte)iVar107 & (byte)((ulong)_UNK_03889708 >> 0x20);
  auVar39._0_12_ = auVar38;
  auVar39[0xd] = (byte)((uint)iVar107 >> 8) & (byte)((ulong)_UNK_03889708 >> 0x28);
  auVar39[0xe] = (byte)((uint)iVar107 >> 0x10) & (byte)((ulong)_UNK_03889708 >> 0x30);
  auVar39[0xf] = (byte)((uint)iVar107 >> 0x18) & (byte)((ulong)_UNK_03889708 >> 0x38);
  switch((&DAT_03aadfd0)
         [(uint)(iVar36 + (int)((ulong)auVar38._0_8_ >> 0x20) + auVar38._8_4_ + auVar39._12_4_)]) {
  case 0:
    iVar48 = auVar101._0_4_;
    break;
  case 1:
    iVar48 = auVar101._4_4_;
    break;
  case 2:
    iVar48 = auVar101._8_4_;
    break;
  case 3:
    iVar48 = auVar101._12_4_;
    break;
  default:
    iVar48 = 0;
  }
  uVar1 = (int)(char)(&DAT_03aadfd0)
                     [(uint)(iVar36 + (int)((ulong)auVar38._0_8_ >> 0x20) +
                            auVar38._8_4_ + auVar39._12_4_)] + iVar48 * 4;
  uVar2 = uVar1 + 3;
  if (-1 < (int)uVar1) {
    uVar2 = uVar1;
  }
  if (uVar1 + 3 < 7) {
    local_1b0 = (float)local_120;
    uStack_1ac = (float)((ulong)local_120 >> 0x20);
    fStack_1a8 = (float)uStack_118;
    fStack_1a4 = (float)((ulong)uStack_118 >> 0x20);
    local_180 = (float)local_110;
    fStack_17c = (float)((ulong)local_110 >> 0x20);
    fStack_178 = (float)local_108;
    fStack_174 = (float)((ulong)local_108 >> 0x20);
  }
  else {
    auVar101 = *(undefined1 (*) [16])(*local_150 + (((int)uVar2 >> 2) << 3));
    auVar40._0_8_ = auVar101._7_8_ << 0x38;
    auVar40._9_7_ = auVar101._9_7_;
    auVar40[8] = auVar101[4];
    auVar42._11_5_ = auVar101._11_5_;
    auVar42._0_10_ = auVar40._0_10_;
    auVar42[10] = auVar101[5];
    auVar44._13_3_ = auVar101._13_3_;
    auVar44._0_12_ = auVar42._0_12_;
    auVar44[0xc] = auVar101[6];
    uVar23 = auVar101[7];
    auVar46[0xf] = auVar101[0xf];
    auVar46._0_14_ = auVar44._0_14_;
    auVar46[0xe] = uVar23;
    auVar41._0_9_ = (unkuint9)auVar46._8_8_ << 0x40;
    auVar41._10_6_ = auVar46._10_6_;
    auVar41[9] = 0;
    auVar43._12_4_ = auVar46._12_4_;
    auVar43._0_11_ = auVar41._0_11_;
    auVar43[0xb] = 0;
    auVar45._14_2_ = auVar46._14_2_;
    auVar45._0_13_ = auVar43._0_13_;
    auVar45[0xd] = 0;
    auVar55._2_14_ = auVar110._2_14_;
    auVar55._0_2_ = auVar101._0_2_ & 0xff;
    auVar57._6_10_ = auVar110._6_10_;
    auVar57._0_4_ = auVar55._0_4_;
    auVar57[4] = auVar101[1];
    auVar57[5] = 0;
    auVar59._10_6_ = auVar110._10_6_;
    auVar59._0_8_ = auVar57._0_8_;
    auVar59[8] = auVar101[2];
    auVar59[9] = 0;
    auVar61._14_2_ = (undefined2)((uint)auVar110._12_4_ >> 0x10);
    auVar61._0_12_ = auVar59._0_12_;
    auVar61[0xc] = auVar101[3];
    auVar61[0xd] = 0;
    auVar56._4_12_ = auVar61._4_12_;
    auVar56._0_4_ = auVar57._0_4_ & 0xffff;
    auVar58._8_8_ = auVar61._8_8_;
    auVar58._0_6_ = auVar56._0_6_;
    auVar58._6_2_ = 0;
    auVar60._12_4_ = auVar61._12_4_;
    auVar60._0_10_ = auVar58._0_10_;
    auVar60._10_2_ = 0;
    auVar62._0_14_ = auVar60._0_14_;
    auVar62._14_2_ = 0;
    auVar7[1] = 0;
    auVar7[0] = auVar101[4];
    auVar7._2_13_ = auVar45._2_13_;
    auVar8[4] = auVar101[5];
    auVar8._0_4_ = auVar7._0_4_;
    auVar8[5] = 0;
    auVar8._6_9_ = auVar45._6_9_;
    auVar9[8] = auVar101[6];
    auVar9._0_8_ = auVar8._0_8_;
    auVar9[9] = 0;
    auVar9._10_5_ = auVar45._10_5_;
    auVar10[0xc] = uVar23;
    auVar10._0_12_ = auVar9._0_12_;
    auVar10[0xd] = 0;
    auVar10[0xe] = uVar23;
    auVar14._4_11_ = auVar10._4_11_;
    auVar14._0_4_ = auVar7._0_4_;
    auVar15._6_2_ = 0;
    auVar15._0_6_ = auVar14._0_6_;
    auVar15._8_7_ = auVar10._8_7_;
    auVar16._10_2_ = 0;
    auVar16._0_10_ = auVar15._0_10_;
    auVar16._12_3_ = auVar10._12_3_;
    auVar47._0_14_ = auVar16._0_14_;
    auVar47._14_2_ = 0;
    auVar50 = NEON_ucvtf(auVar62,4);
    auVar101 = NEON_ucvtf(auVar47,4);
    local_1b0 = auVar50._0_4_ * 0.007874016 + local_180;
    uStack_1ac = auVar50._4_4_ * 0.007874016 + fStack_17c;
    fStack_1a8 = auVar50._8_4_ * 0.007874016 + fStack_178;
    fStack_1a4 = auVar50._12_4_ * 0.007874016 + fStack_174;
    local_180 = auVar101._0_4_ * 0.007874016 + local_180;
    fStack_17c = auVar101._4_4_ * 0.007874016 + fStack_17c;
    fStack_178 = auVar101._8_4_ * 0.007874016 + fStack_178;
    fStack_174 = auVar101._12_4_ * 0.007874016 + fStack_174;
  }
  fStack_1a4 = fStack_1a4 * fVar102;
  fStack_1a8 = fStack_1a8 * fVar100;
  uStack_1ac = uStack_1ac * fVar102;
  local_1b0 = local_1b0 * fVar100;
  fStack_174 = fStack_174 * fVar102;
  fStack_178 = fStack_178 * fVar100;
  fStack_17c = fStack_17c * fVar102;
  local_180 = local_180 * fVar100;
  auVar49._0_4_ = local_1b0 * (float)local_140 + local_180 * fVar30;
  auVar49._4_4_ = uStack_1ac * (float)local_140 + fStack_17c * fVar30;
  auVar49._8_4_ = fStack_1a8 * (float)local_140 + fStack_178 * fVar30;
  auVar49._12_4_ = fStack_1a4 * (float)local_140 + fStack_174 * fVar30;
  auVar28._0_4_ = local_1b0 * (float)uStack_138 + local_180 * fVar35;
  auVar28._4_4_ = uStack_1ac * (float)uStack_138 + fStack_17c * fVar35;
  auVar28._8_4_ = fStack_1a8 * (float)uStack_138 + fStack_178 * fVar35;
  auVar28._12_4_ = fStack_1a4 * (float)uStack_138 + fStack_174 * fVar35;
  auVar54._0_4_ = local_1b0 * local_140._4_4_ + local_180 * fVar34;
  auVar54._4_4_ = uStack_1ac * local_140._4_4_ + fStack_17c * fVar34;
  auVar54._8_4_ = fStack_1a8 * local_140._4_4_ + fStack_178 * fVar34;
  auVar54._12_4_ = fStack_1a4 * local_140._4_4_ + fStack_174 * fVar34;
  auVar70 = NEON_ext(auVar28,auVar28,8,1);
  local_f0[0] = CONCAT44(auVar54._0_4_,auVar49._0_4_);
  local_f0[2] = CONCAT44(auVar54._4_4_,auVar49._4_4_);
  auVar50 = NEON_ext(auVar49,auVar49,8,1);
  auVar101 = NEON_ext(auVar54,auVar54,8,1);
  local_f0[1] = (ulong)(uint)auVar28._0_4_;
  local_f0[3] = (ulong)(uint)auVar28._4_4_;
  uStack_c8 = (ulong)auVar70._0_4_;
  local_d0 = CONCAT44(auVar101._0_4_,auVar50._0_4_);
  uStack_b8 = (ulong)auVar70._4_4_;
  uStack_c0 = CONCAT44(auVar101._4_4_,auVar50._4_4_);
  uVar17 = local_f0[(long)((int)uVar1 % 4) * 2];
  param_12[1] = local_f0[(long)((int)uVar1 % 4) * 2 + 1];
  *param_12 = uVar17;
  return;
}


