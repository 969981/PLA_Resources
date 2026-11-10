/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03289b10; name: FUN_03289b10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_03289b10(undefined1 param_1 [16],undefined1 param_2 [16],long *param_3,long *param_4,
            undefined8 *param_5,float *param_6,undefined8 *param_7,undefined8 *param_8)

{
  char cVar1;
  undefined1 (*pauVar2) [12];
  unkbyte9 *pVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  unkbyte9 Var13;
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined8 uVar21;
  unkbyte9 *pVar22;
  long lVar23;
  long lVar24;
  undefined1 uVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar32;
  float fVar33;
  undefined1 auVar29 [16];
  undefined1 auVar28 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  int iVar34;
  undefined8 uVar35;
  undefined1 auVar43 [16];
  undefined1 auVar42 [16];
  undefined1 auVar41 [16];
  undefined1 auVar40 [16];
  undefined1 auVar39 [16];
  undefined1 auVar38 [16];
  undefined1 auVar37 [16];
  undefined1 auVar36 [16];
  undefined1 auVar44 [16];
  int iVar47;
  float fVar48;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  float fVar52;
  byte bVar53;
  float fVar54;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar61;
  byte bVar62;
  long lVar55;
  float fVar60;
  byte bVar63;
  byte bVar64;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  undefined8 uVar65;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  float fVar89;
  float fVar91;
  float fVar92;
  undefined1 auVar90 [16];
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  undefined8 uVar98;
  undefined8 uVar99;
  undefined1 uVar100;
  undefined1 uVar101;
  undefined1 uVar102;
  undefined1 uVar103;
  undefined1 uVar104;
  undefined1 uVar105;
  float fVar106;
  float fVar109;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  float fVar110;
  float fVar113;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined2 uVar114;
  undefined6 uVar115;
  ulong uVar116;
  undefined1 auVar117 [12];
  int iVar128;
  undefined1 auVar118 [14];
  undefined1 in_q19 [16];
  undefined1 auVar126 [16];
  undefined1 auVar125 [16];
  undefined1 auVar124 [16];
  undefined1 auVar123 [16];
  undefined1 auVar122 [16];
  undefined1 auVar121 [16];
  undefined1 auVar120 [16];
  undefined1 auVar119 [16];
  int iVar129;
  undefined1 auVar127 [16];
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  undefined1 auVar134 [12];
  undefined1 in_q21 [16];
  undefined1 auVar141 [16];
  undefined1 auVar140 [16];
  undefined1 auVar139 [16];
  undefined1 auVar138 [16];
  undefined1 auVar137 [16];
  undefined1 auVar136 [16];
  undefined1 auVar135 [16];
  int iVar142;
  float fVar143;
  int iVar145;
  float fVar146;
  int iVar147;
  float fVar148;
  int iVar149;
  float fVar150;
  undefined1 auVar144 [16];
  float fVar151;
  undefined1 auVar152 [12];
  float fVar157;
  undefined1 auVar153 [16];
  float fVar158;
  float fVar159;
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  float fVar160;
  undefined1 auVar161 [12];
  float fVar165;
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  float fVar166;
  undefined1 auVar167 [12];
  float fVar171;
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  byte bVar172;
  byte bVar173;
  byte bVar174;
  byte bVar175;
  
  lVar24 = *param_3;
  lVar23 = *param_4;
  lVar55 = param_3[10];
  auVar44 = *(undefined1 (*) [16])(lVar24 + 0xf8);
  uVar21 = *(undefined8 *)(lVar23 + 0x1f0);
  uVar65 = *(undefined8 *)(lVar23 + 0x1f8);
  auVar28._0_8_ = auVar44._7_8_ << 0x38;
  auVar28._9_7_ = auVar44._9_7_;
  auVar28[8] = auVar44[4];
  auVar31._11_5_ = auVar44._11_5_;
  auVar31._0_10_ = auVar28._0_10_;
  auVar31[10] = auVar44[5];
  auVar107._13_3_ = auVar44._13_3_;
  auVar107._0_12_ = auVar31._0_12_;
  auVar107[0xc] = auVar44[6];
  uVar25 = auVar44[7];
  auVar50[0xf] = auVar44[0xf];
  auVar50._0_14_ = auVar107._0_14_;
  auVar50[0xe] = uVar25;
  auVar29._0_9_ = (unkuint9)auVar50._8_8_ << 0x40;
  auVar29._10_6_ = auVar50._10_6_;
  auVar29[9] = 0;
  auVar111._12_4_ = auVar50._12_4_;
  auVar111._0_11_ = auVar29._0_11_;
  auVar111[0xb] = 0;
  auVar90._14_2_ = auVar50._14_2_;
  auVar90._0_13_ = auVar111._0_13_;
  auVar90[0xd] = 0;
  auVar36._2_14_ = param_2._2_14_;
  auVar36._0_2_ = auVar44._0_2_ & 0xff;
  auVar38._6_10_ = param_2._6_10_;
  auVar38._0_4_ = auVar36._0_4_;
  auVar38[4] = auVar44[1];
  auVar38[5] = 0;
  auVar40._10_6_ = param_2._10_6_;
  auVar40._0_8_ = auVar38._0_8_;
  auVar40[8] = auVar44[2];
  auVar40[9] = 0;
  auVar42._14_2_ = param_2._14_2_;
  auVar42._0_12_ = auVar40._0_12_;
  auVar42[0xc] = auVar44[3];
  auVar42[0xd] = 0;
  auVar37._4_12_ = auVar42._4_12_;
  auVar37._0_4_ = auVar38._0_4_ & 0xffff;
  auVar39._8_8_ = auVar42._8_8_;
  auVar39._0_6_ = auVar37._0_6_;
  auVar39._6_2_ = 0;
  auVar41._12_4_ = auVar42._12_4_;
  auVar41._0_10_ = auVar39._0_10_;
  auVar41._10_2_ = 0;
  auVar43._0_14_ = auVar41._0_14_;
  auVar43._14_2_ = 0;
  auVar14[1] = 0;
  auVar14[0] = auVar44[4];
  auVar14._2_13_ = auVar90._2_13_;
  auVar15[4] = auVar44[5];
  auVar15._0_4_ = auVar14._0_4_;
  auVar15[5] = 0;
  auVar15._6_9_ = auVar90._6_9_;
  auVar16[8] = auVar44[6];
  auVar16._0_8_ = auVar15._0_8_;
  auVar16[9] = 0;
  auVar16._10_5_ = auVar90._10_5_;
  auVar17[0xc] = uVar25;
  auVar17._0_12_ = auVar16._0_12_;
  auVar17[0xd] = 0;
  auVar17[0xe] = uVar25;
  auVar18._4_11_ = auVar17._4_11_;
  auVar18._0_4_ = auVar14._0_4_;
  auVar19._6_2_ = 0;
  auVar19._0_6_ = auVar18._0_6_;
  auVar19._8_7_ = auVar17._8_7_;
  auVar20._10_2_ = 0;
  auVar20._0_10_ = auVar19._0_10_;
  auVar20._12_3_ = auVar17._12_3_;
  auVar30._0_14_ = auVar20._0_14_;
  auVar30._14_2_ = 0;
  fVar52 = *(float *)(param_3 + 6);
  auVar90 = NEON_fmov(0xbf800000,4);
  auVar31 = NEON_ucvtf(auVar30,4);
  auVar44 = NEON_ucvtf(auVar43,4);
  fVar89 = auVar90._0_4_;
  fVar91 = auVar90._4_4_;
  fVar92 = auVar90._8_4_;
  fVar93 = auVar90._12_4_;
  uVar98 = *(undefined8 *)(lVar23 + 400);
  uVar99 = *(undefined8 *)(lVar23 + 0x198);
  uVar27 = NEON_frecpe(lVar55,4);
  uVar35 = NEON_frecps(lVar55,uVar27,4);
  fVar26 = (float)uVar27 * (float)uVar35;
  fVar32 = (float)((ulong)uVar27 >> 0x20) * (float)((ulong)uVar35 >> 0x20);
  uVar27 = NEON_frecps(lVar55,CONCAT44(fVar32,fVar26),4);
  fVar26 = (float)*param_5 * fVar26 * (float)uVar27;
  fVar33 = (float)((ulong)*param_5 >> 0x20) * fVar32 * (float)((ulong)uVar27 >> 0x20);
  fVar51 = (float)param_3[8];
  fVar32 = fVar52 * fVar52 + fVar51 * fVar51;
  uVar27 = CONCAT44(fVar32,fVar32);
  uVar35 = NEON_frsqrte(uVar27,4);
  fVar54 = (float)uVar35;
  fVar60 = (float)((ulong)uVar35 >> 0x20);
  uVar35 = NEON_frsqrts(uVar27,CONCAT44(fVar60 * fVar60,fVar54 * fVar54),4);
  fVar54 = fVar54 * (float)uVar35;
  fVar60 = fVar60 * (float)((ulong)uVar35 >> 0x20);
  iVar34 = -(uint)(fVar32 <= 0.0);
  iVar47 = -(uint)(fVar32 <= 0.0);
  uVar27 = NEON_frsqrts(uVar27,CONCAT44(fVar60 * fVar60,fVar54 * fVar54),4);
  fVar54 = (float)uVar27 * fVar54;
  fVar60 = (float)((ulong)uVar27 >> 0x20) * fVar60;
  fVar32 = (float)CONCAT13((byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18),
                           CONCAT12((byte)((uint)fVar54 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10),
                                    CONCAT11((byte)((uint)fVar54 >> 8) & ~(byte)((uint)iVar34 >> 8),
                                             SUB41(fVar54,0) & ~(byte)iVar34)));
  fVar60 = (float)(CONCAT17((byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar47 >> 0x18),
                            CONCAT16((byte)((uint)fVar60 >> 0x10) & ~(byte)((uint)iVar47 >> 0x10),
                                     CONCAT15((byte)((uint)fVar60 >> 8) & ~(byte)((uint)iVar47 >> 8)
                                              ,CONCAT14(SUB41(fVar60,0) & ~(byte)iVar47,fVar32))))
                  >> 0x20);
  fVar48 = fVar60 * fVar52;
  fVar60 = fVar60 * fVar51;
  fVar54 = sinf(*param_6);
  fVar54 = -fVar54;
  auVar162._4_4_ = auVar44._4_4_ * 0.007874016 + fVar91;
  auVar162._0_4_ = auVar44._0_4_ * 0.007874016 + fVar89;
  auVar162._8_4_ = auVar44._8_4_ * 0.007874016 + fVar92;
  auVar162._12_4_ = auVar44._12_4_ * 0.007874016 + fVar93;
  auVar46._8_4_ = fVar26;
  auVar46._0_8_ = CONCAT44(fVar33,fVar26);
  auVar44._8_4_ = fVar26;
  auVar44._0_8_ = CONCAT44(fVar33,fVar26);
  auVar168._4_4_ = auVar31._4_4_ * 0.007874016 + fVar91;
  auVar168._0_4_ = auVar31._0_4_ * 0.007874016 + fVar89;
  auVar168._8_4_ = auVar31._8_4_ * 0.007874016 + fVar92;
  auVar168._12_4_ = auVar31._12_4_ * 0.007874016 + fVar93;
  auVar50 = ZEXT816(0);
  auVar31 = ZEXT816(0);
  lVar55 = 0;
  fVar96 = (float)uVar65;
  fVar97 = (float)((ulong)uVar65 >> 0x20);
  fVar94 = (float)uVar21;
  fVar95 = (float)((ulong)uVar21 >> 0x20);
  uVar65 = *(undefined8 *)(PTR_DAT_043723a0 + 0x18);
  uVar21 = *(undefined8 *)(PTR_DAT_043723a0 + 0x10);
  pVar22 = (unkbyte9 *)(lVar24 + 0xc0);
  bVar53 = (byte)uVar21;
  bVar73 = ~bVar53;
  bVar56 = (byte)((ulong)uVar21 >> 8);
  bVar74 = ~bVar56;
  bVar57 = (byte)((ulong)uVar21 >> 0x10);
  bVar75 = ~bVar57;
  bVar58 = (byte)((ulong)uVar21 >> 0x18);
  bVar76 = ~bVar58;
  bVar59 = (byte)((ulong)uVar21 >> 0x20);
  bVar77 = ~bVar59;
  bVar61 = (byte)((ulong)uVar21 >> 0x28);
  bVar78 = ~bVar61;
  bVar62 = (byte)((ulong)uVar21 >> 0x30);
  bVar79 = ~bVar62;
  bVar63 = (byte)((ulong)uVar21 >> 0x38);
  bVar80 = ~bVar63;
  bVar64 = (byte)uVar65;
  bVar81 = ~bVar64;
  bVar66 = (byte)((ulong)uVar65 >> 8);
  bVar82 = ~bVar66;
  bVar67 = (byte)((ulong)uVar65 >> 0x10);
  bVar83 = ~bVar67;
  bVar68 = (byte)((ulong)uVar65 >> 0x18);
  bVar84 = ~bVar68;
  bVar69 = (byte)((ulong)uVar65 >> 0x20);
  bVar85 = ~bVar69;
  bVar70 = (byte)((ulong)uVar65 >> 0x28);
  bVar86 = ~bVar70;
  bVar71 = (byte)((ulong)uVar65 >> 0x30);
  bVar87 = ~bVar71;
  bVar72 = (byte)((ulong)uVar65 >> 0x38);
  bVar88 = ~bVar72;
  do {
    Var13 = *pVar22;
    auVar4._4_4_ = fVar95;
    auVar4._0_4_ = fVar94;
    auVar4._8_4_ = fVar96;
    auVar4._12_4_ = fVar97;
    auVar5._4_4_ = fVar95;
    auVar5._0_4_ = fVar94;
    auVar5._8_4_ = fVar96;
    auVar5._12_4_ = fVar97;
    auVar107 = NEON_ext(auVar4,auVar5,0xc,1);
    pauVar2 = (undefined1 (*) [12])(lVar23 + 0x180 + lVar55 * 0x10);
    fVar96 = (float)*(undefined8 *)(*pauVar2 + 8);
    fVar97 = (float)((ulong)*(undefined8 *)(*pauVar2 + 8) >> 0x20);
    fVar94 = (float)*(undefined8 *)*pauVar2;
    fVar95 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
    auVar6._12_4_ = fVar97;
    auVar6._0_12_ = *pauVar2;
    auVar7._12_4_ = fVar97;
    auVar7._0_12_ = *pauVar2;
    auVar111 = NEON_ext(auVar6,auVar7,0xc,1);
    fVar130 = (float)CONCAT13(auVar111[3] & bVar76 | bVar58 & auVar107[3],
                              CONCAT12(auVar111[2] & bVar75 | bVar57 & auVar107[2],
                                       CONCAT11(auVar111[1] & bVar74 | bVar56 & auVar107[1],
                                                auVar111[0] & bVar73 | bVar53 & auVar107[0])));
    fVar131 = (float)CONCAT13(auVar111[7] & bVar80 | bVar63 & auVar107[7],
                              CONCAT12(auVar111[6] & bVar79 | bVar62 & auVar107[6],
                                       CONCAT11(auVar111[5] & bVar78 | bVar61 & auVar107[5],
                                                auVar111[4] & bVar77 | bVar59 & auVar107[4])));
    fVar132 = (float)CONCAT13(auVar111[0xb] & bVar84 | bVar68 & auVar107[0xb],
                              CONCAT12(auVar111[10] & bVar83 | bVar67 & auVar107[10],
                                       CONCAT11(auVar111[9] & bVar82 | bVar66 & auVar107[9],
                                                auVar111[8] & bVar81 | bVar64 & auVar107[8])));
    fVar133 = (float)CONCAT13(auVar111[0xf] & bVar88 | bVar72 & auVar107[0xf],
                              CONCAT12(auVar111[0xe] & bVar87 | bVar71 & auVar107[0xe],
                                       CONCAT11(auVar111[0xd] & bVar86 | bVar70 & auVar107[0xd],
                                                auVar111[0xc] & bVar85 | bVar69 & auVar107[0xc])));
    auVar119[1] = 0;
    auVar119[0] = (byte)Var13;
    auVar119._2_14_ = in_q19._2_14_;
    auVar121._6_10_ = in_q19._6_10_;
    auVar121._0_4_ = auVar119._0_4_;
    auVar121[4] = (char)((unkuint9)Var13 >> 8);
    auVar121[5] = 0;
    auVar123._10_6_ = in_q19._10_6_;
    auVar123._0_8_ = auVar121._0_8_;
    auVar123[8] = (char)((unkuint9)Var13 >> 0x10);
    auVar123[9] = 0;
    auVar125._14_2_ = in_q19._14_2_;
    auVar125._0_12_ = auVar123._0_12_;
    auVar125[0xc] = (char)((unkuint9)Var13 >> 0x18);
    auVar125[0xd] = 0;
    auVar120._4_12_ = auVar125._4_12_;
    auVar120._0_4_ = auVar121._0_4_ & 0xffff;
    auVar122._8_8_ = auVar125._8_8_;
    auVar122._0_6_ = auVar120._0_6_;
    auVar122._6_2_ = 0;
    auVar124._12_4_ = auVar125._12_4_;
    auVar124._0_10_ = auVar122._0_10_;
    auVar124._10_2_ = 0;
    auVar126._0_14_ = auVar124._0_14_;
    auVar126._14_2_ = 0;
    auVar135[1] = 0;
    auVar135[0] = (byte)((unkuint9)Var13 >> 0x20);
    auVar135._2_14_ = in_q21._2_14_;
    auVar137._6_10_ = in_q21._6_10_;
    auVar137._0_4_ = auVar135._0_4_;
    auVar137[4] = (char)((unkuint9)Var13 >> 0x28);
    auVar137[5] = 0;
    auVar139._10_6_ = in_q21._10_6_;
    auVar139._0_8_ = auVar137._0_8_;
    auVar139[8] = (char)((unkuint9)Var13 >> 0x30);
    auVar139[9] = 0;
    auVar141._14_2_ = in_q21._14_2_;
    auVar141._0_12_ = auVar139._0_12_;
    auVar141[0xc] = (char)((unkuint9)Var13 >> 0x38);
    auVar141[0xd] = 0;
    auVar136._4_12_ = auVar141._4_12_;
    auVar136._0_4_ = auVar137._0_4_ & 0xffff;
    auVar138._8_8_ = auVar141._8_8_;
    auVar138._0_6_ = auVar136._0_6_;
    auVar138._6_2_ = 0;
    auVar140._12_4_ = auVar141._12_4_;
    auVar140._0_10_ = auVar138._0_10_;
    auVar140._10_2_ = 0;
    in_q21._0_14_ = auVar140._0_14_;
    in_q21._14_2_ = 0;
    iVar142 = -(uint)(fVar130 < fVar26);
    iVar145 = -(uint)(fVar131 < fVar33);
    iVar147 = -(uint)(fVar132 < fVar26);
    iVar149 = -(uint)(fVar133 < fVar33);
    auVar107 = NEON_ucvtf(auVar126,4);
    auVar111 = NEON_ucvtf(in_q21,4);
    pVar3 = (unkbyte9 *)(lVar23 + (((ulong)((int)lVar55 + 2) & 7) << 4 | 0x180));
    uVar21 = *(undefined8 *)((long)pVar3 + 8);
    uVar25 = (undefined1)((ulong)uVar21 >> 8);
    uVar100 = (undefined1)((ulong)uVar21 >> 0x10);
    uVar101 = (undefined1)((ulong)uVar21 >> 0x18);
    uVar102 = (undefined1)((ulong)uVar21 >> 0x20);
    uVar103 = (undefined1)((ulong)uVar21 >> 0x28);
    uVar104 = (undefined1)((ulong)uVar21 >> 0x30);
    uVar105 = (undefined1)((ulong)uVar21 >> 0x38);
    fVar110 = auVar107._0_4_ * 0.007874016 + fVar89;
    fVar113 = auVar107._4_4_ * 0.007874016 + fVar91;
    auVar112._0_8_ = CONCAT44(fVar113,fVar110);
    auVar112._8_4_ = auVar107._8_4_ * 0.007874016 + fVar92;
    auVar112._12_4_ = auVar107._12_4_ * 0.007874016 + fVar93;
    fVar106 = auVar111._0_4_ * 0.007874016 + fVar89;
    fVar109 = auVar111._4_4_ * 0.007874016 + fVar91;
    auVar108._0_8_ = CONCAT44(fVar109,fVar106);
    auVar108._8_4_ = auVar111._8_4_ * 0.007874016 + fVar92;
    auVar108._12_4_ = auVar111._12_4_ * 0.007874016 + fVar93;
    iVar34 = -(uint)(fVar94 < fVar26);
    iVar47 = -(uint)(fVar95 < fVar33);
    iVar128 = -(uint)(fVar96 < fVar26);
    iVar129 = -(uint)(fVar97 < fVar33);
    uVar114 = CONCAT11((byte)((uint)iVar142 >> 8) & (byte)((uint)iVar34 >> 8),
                       (byte)iVar142 & (byte)iVar34);
    iVar34 = CONCAT13((byte)((uint)iVar142 >> 0x18) & (byte)((uint)iVar34 >> 0x18),
                      CONCAT12((byte)((uint)iVar142 >> 0x10) & (byte)((uint)iVar34 >> 0x10),uVar114)
                     );
    uVar115 = CONCAT15((byte)((uint)iVar145 >> 8) & (byte)((uint)iVar47 >> 8),
                       CONCAT14((byte)iVar145 & (byte)iVar47,iVar34));
    uVar65 = CONCAT17((byte)((uint)iVar145 >> 0x18) & (byte)((uint)iVar47 >> 0x18),
                      CONCAT16((byte)((uint)iVar145 >> 0x10) & (byte)((uint)iVar47 >> 0x10),uVar115)
                     );
    auVar117._0_10_ =
         CONCAT19((byte)((uint)iVar147 >> 8) & (byte)((uint)iVar128 >> 8),
                  CONCAT18((byte)iVar147 & (byte)iVar128,uVar65));
    auVar117[10] = (byte)((uint)iVar147 >> 0x10) & (byte)((uint)iVar128 >> 0x10);
    auVar117[0xb] = (byte)((uint)iVar147 >> 0x18) & (byte)((uint)iVar128 >> 0x18);
    auVar118[0xc] = (byte)iVar149 & (byte)iVar129;
    auVar118._0_12_ = auVar117;
    auVar118[0xd] = (byte)((uint)iVar149 >> 8) & (byte)((uint)iVar129 >> 8);
    in_q19[0xe] = (byte)((uint)iVar149 >> 0x10) & (byte)((uint)iVar129 >> 0x10);
    in_q19._0_14_ = auVar118;
    in_q19[0xf] = (byte)((uint)iVar149 >> 0x18) & (byte)((uint)iVar129 >> 0x18);
    if (((iVar34 != 0 || (int)((ulong)uVar65 >> 0x20) != 0) || auVar117._8_4_ != 0) ||
        in_q19._12_4_ != 0) {
      auVar162 = NEON_ext(auVar162,auVar162,0xc,1);
      auVar107 = NEON_ext(auVar112,auVar112,0xc,1);
      fVar160 = (float)CONCAT13(auVar107[3] & bVar76 | bVar58 & auVar162[3],
                                CONCAT12(auVar107[2] & bVar75 | bVar57 & auVar162[2],
                                         CONCAT11(auVar107[1] & bVar74 | bVar56 & auVar162[1],
                                                  auVar107[0] & bVar73 | bVar53 & auVar162[0])));
      auVar161._0_8_ =
           CONCAT17(auVar107[7] & bVar80 | bVar63 & auVar162[7],
                    CONCAT16(auVar107[6] & bVar79 | bVar62 & auVar162[6],
                             CONCAT15(auVar107[5] & bVar78 | bVar61 & auVar162[5],
                                      CONCAT14(auVar107[4] & bVar77 | bVar59 & auVar162[4],fVar160))
                            ));
      auVar161[8] = auVar107[8] & bVar81 | bVar64 & auVar162[8];
      auVar161[9] = auVar107[9] & bVar82 | bVar66 & auVar162[9];
      auVar161[10] = auVar107[10] & bVar83 | bVar67 & auVar162[10];
      auVar161[0xb] = auVar107[0xb] & bVar84 | bVar68 & auVar162[0xb];
      auVar163[0xc] = auVar107[0xc] & bVar85 | bVar69 & auVar162[0xc];
      auVar163._0_12_ = auVar161;
      auVar163[0xd] = auVar107[0xd] & bVar86 | bVar70 & auVar162[0xd];
      auVar163[0xe] = auVar107[0xe] & bVar87 | bVar71 & auVar162[0xe];
      auVar163[0xf] = auVar107[0xf] & bVar88 | bVar72 & auVar162[0xf];
      auVar168 = NEON_ext(auVar168,auVar168,0xc,1);
      auVar162 = NEON_ext(auVar108,auVar108,0xc,1);
      fVar166 = (float)CONCAT13(auVar162[3] & bVar76 | bVar58 & auVar168[3],
                                CONCAT12(auVar162[2] & bVar75 | bVar57 & auVar168[2],
                                         CONCAT11(auVar162[1] & bVar74 | bVar56 & auVar168[1],
                                                  auVar162[0] & bVar73 | bVar53 & auVar168[0])));
      auVar167._0_8_ =
           CONCAT17(auVar162[7] & bVar80 | bVar63 & auVar168[7],
                    CONCAT16(auVar162[6] & bVar79 | bVar62 & auVar168[6],
                             CONCAT15(auVar162[5] & bVar78 | bVar61 & auVar168[5],
                                      CONCAT14(auVar162[4] & bVar77 | bVar59 & auVar168[4],fVar166))
                            ));
      auVar167[8] = auVar162[8] & bVar81 | bVar64 & auVar168[8];
      auVar167[9] = auVar162[9] & bVar82 | bVar66 & auVar168[9];
      auVar167[10] = auVar162[10] & bVar83 | bVar67 & auVar168[10];
      auVar167[0xb] = auVar162[0xb] & bVar84 | bVar68 & auVar168[0xb];
      auVar169[0xc] = auVar162[0xc] & bVar85 | bVar69 & auVar168[0xc];
      auVar169._0_12_ = auVar167;
      auVar169[0xd] = auVar162[0xd] & bVar86 | bVar70 & auVar168[0xd];
      auVar169[0xe] = auVar162[0xe] & bVar87 | bVar71 & auVar168[0xe];
      auVar169[0xf] = auVar162[0xf] & bVar88 | bVar72 & auVar168[0xf];
      fVar165 = (float)((ulong)auVar161._0_8_ >> 0x20);
      fVar171 = (float)((ulong)auVar167._0_8_ >> 0x20);
      fVar143 = fVar94 * fVar110 - fVar130 * fVar160;
      fVar146 = fVar95 * fVar113 - fVar131 * fVar165;
      fVar148 = fVar96 * auVar112._8_4_ - fVar132 * auVar161._8_4_;
      fVar150 = fVar97 * auVar112._12_4_ - fVar133 * auVar163._12_4_;
      auVar44._12_4_ = fVar33;
      auVar168 = NEON_fmin(*(undefined1 (*) [16])
                            (lVar23 + (((ulong)((int)lVar55 + 6) & 7) << 4 | 0x180)),auVar44,4);
      fVar130 = fVar94 * fVar106 - fVar130 * fVar166;
      fVar131 = fVar95 * fVar109 - fVar131 * fVar171;
      fVar132 = fVar96 * auVar108._8_4_ - fVar132 * auVar167._8_4_;
      fVar133 = fVar97 * auVar108._12_4_ - fVar133 * auVar169._12_4_;
      auVar153._0_4_ = fVar143 * fVar143 + fVar130 * fVar130;
      auVar153._4_4_ = fVar146 * fVar146 + fVar131 * fVar131;
      auVar153._8_4_ = fVar148 * fVar148 + fVar132 * fVar132;
      auVar153._12_4_ = fVar150 * fVar150 + fVar133 * fVar133;
      auVar162 = NEON_frsqrte(auVar153,4);
      iVar34 = -(uint)(auVar153._0_4_ <= 0.0);
      iVar47 = -(uint)(auVar153._4_4_ <= 0.0);
      iVar128 = -(uint)(auVar153._8_4_ <= 0.0);
      iVar129 = -(uint)(auVar153._12_4_ <= 0.0);
      fVar151 = auVar162._0_4_;
      fVar157 = auVar162._4_4_;
      fVar158 = auVar162._8_4_;
      fVar159 = auVar162._12_4_;
      auVar12._4_4_ = fVar157 * fVar157;
      auVar12._0_4_ = fVar151 * fVar151;
      auVar12._8_4_ = fVar158 * fVar158;
      auVar12._12_4_ = fVar159 * fVar159;
      auVar162 = NEON_frsqrts(auVar153,auVar12,4);
      fVar151 = fVar151 * auVar162._0_4_;
      fVar157 = fVar157 * auVar162._4_4_;
      fVar158 = fVar158 * auVar162._8_4_;
      fVar159 = fVar159 * auVar162._12_4_;
      fVar151 = (float)CONCAT13((byte)((uint)fVar151 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18),
                                CONCAT12((byte)((uint)fVar151 >> 0x10) &
                                         ~(byte)((uint)iVar34 >> 0x10),
                                         CONCAT11((byte)((uint)fVar151 >> 8) &
                                                  ~(byte)((uint)iVar34 >> 8),
                                                  SUB41(fVar151,0) & ~(byte)iVar34)));
      auVar152._0_8_ =
           CONCAT17((byte)((uint)fVar157 >> 0x18) & ~(byte)((uint)iVar47 >> 0x18),
                    CONCAT16((byte)((uint)fVar157 >> 0x10) & ~(byte)((uint)iVar47 >> 0x10),
                             CONCAT15((byte)((uint)fVar157 >> 8) & ~(byte)((uint)iVar47 >> 8),
                                      CONCAT14(SUB41(fVar157,0) & ~(byte)iVar47,fVar151))));
      auVar152[8] = SUB41(fVar158,0) & ~(byte)iVar128;
      auVar152[9] = (byte)((uint)fVar158 >> 8) & ~(byte)((uint)iVar128 >> 8);
      auVar152[10] = (byte)((uint)fVar158 >> 0x10) & ~(byte)((uint)iVar128 >> 0x10);
      auVar152[0xb] = (byte)((uint)fVar158 >> 0x18) & ~(byte)((uint)iVar128 >> 0x18);
      auVar154[0xc] = SUB41(fVar159,0) & ~(byte)iVar129;
      auVar154._0_12_ = auVar152;
      auVar154[0xd] = (byte)((uint)fVar159 >> 8) & ~(byte)((uint)iVar129 >> 8);
      auVar154[0xe] = (byte)((uint)fVar159 >> 0x10) & ~(byte)((uint)iVar129 >> 0x10);
      auVar154[0xf] = (byte)((uint)fVar159 >> 0x18) & ~(byte)((uint)iVar129 >> 0x18);
      auVar10[9] = uVar25;
      auVar10._0_9_ = *pVar3;
      auVar10[10] = uVar100;
      auVar10[0xb] = uVar101;
      auVar10[0xc] = uVar102;
      auVar10[0xd] = uVar103;
      auVar10[0xe] = uVar104;
      auVar10[0xf] = uVar105;
      auVar11[9] = uVar25;
      auVar11._0_9_ = *pVar3;
      auVar11[10] = uVar100;
      auVar11[0xb] = uVar101;
      auVar11[0xc] = uVar102;
      auVar11[0xd] = uVar103;
      auVar11[0xe] = uVar104;
      auVar11[0xf] = uVar105;
      auVar107 = NEON_ext(auVar10,auVar11,0xc,1);
      fVar143 = fVar143 * fVar151;
      fVar157 = (float)((ulong)auVar152._0_8_ >> 0x20);
      fVar146 = fVar146 * fVar157;
      fVar148 = fVar148 * auVar152._8_4_;
      fVar150 = fVar150 * auVar154._12_4_;
      fVar130 = fVar130 * fVar151;
      fVar131 = fVar131 * fVar157;
      fVar132 = fVar132 * auVar152._8_4_;
      fVar133 = fVar133 * auVar154._12_4_;
      auVar8._8_8_ = uVar99;
      auVar8._0_8_ = uVar98;
      auVar9._8_8_ = uVar99;
      auVar9._0_8_ = uVar98;
      auVar162 = NEON_ext(auVar8,auVar9,0xc,1);
      auVar155._0_4_ = (fVar110 + fVar160) * fVar130 - (fVar106 + fVar166) * fVar143;
      auVar155._4_4_ = (fVar113 + fVar165) * fVar131 - (fVar109 + fVar171) * fVar146;
      auVar155._8_4_ =
           (auVar112._8_4_ + auVar161._8_4_) * fVar132 - (auVar108._8_4_ + auVar167._8_4_) * fVar148
      ;
      auVar155._12_4_ =
           (auVar112._12_4_ + auVar163._12_4_) * fVar133 -
           (auVar108._12_4_ + auVar169._12_4_) * fVar150;
      auVar164[0] = auVar107[0] & bVar73 | bVar53 & auVar162[0];
      auVar164[1] = auVar107[1] & bVar74 | bVar56 & auVar162[1];
      auVar164[2] = auVar107[2] & bVar75 | bVar57 & auVar162[2];
      auVar164[3] = auVar107[3] & bVar76 | bVar58 & auVar162[3];
      auVar164[4] = auVar107[4] & bVar77 | bVar59 & auVar162[4];
      auVar164[5] = auVar107[5] & bVar78 | bVar61 & auVar162[5];
      auVar164[6] = auVar107[6] & bVar79 | bVar62 & auVar162[6];
      auVar164[7] = auVar107[7] & bVar80 | bVar63 & auVar162[7];
      auVar164[8] = auVar107[8] & bVar81 | bVar64 & auVar162[8];
      auVar164[9] = auVar107[9] & bVar82 | bVar66 & auVar162[9];
      auVar164[10] = auVar107[10] & bVar83 | bVar67 & auVar162[10];
      auVar164[0xb] = auVar107[0xb] & bVar84 | bVar68 & auVar162[0xb];
      auVar164[0xc] = auVar107[0xc] & bVar85 | bVar69 & auVar162[0xc];
      auVar164[0xd] = auVar107[0xd] & bVar86 | bVar70 & auVar162[0xd];
      auVar164[0xe] = auVar107[0xe] & bVar87 | bVar71 & auVar162[0xe];
      auVar164[0xf] = auVar107[0xf] & bVar88 | bVar72 & auVar162[0xf];
      auVar46._12_4_ = fVar33;
      auVar107 = NEON_fmin(auVar164,auVar46,4);
      auVar162 = NEON_fmax(auVar155,ZEXT816(0),4);
      auVar170._0_4_ =
           -(uint)(fVar26 * (fVar32 * fVar52 * fVar143 + fVar32 * fVar51 * fVar130) <
                  (auVar168._0_4_ - auVar107._0_4_) * 0.5);
      auVar170._4_4_ =
           -(uint)(fVar33 * (fVar48 * fVar146 + fVar60 * fVar131) <
                  (auVar168._4_4_ - auVar107._4_4_) * 0.5);
      auVar170._8_4_ =
           -(uint)(fVar26 * (fVar32 * fVar52 * fVar148 + fVar32 * fVar51 * fVar132) <
                  (auVar168._8_4_ - auVar107._8_4_) * 0.5);
      auVar170._12_4_ =
           -(uint)(fVar33 * (fVar48 * fVar150 + fVar60 * fVar133) <
                  (auVar168._12_4_ - auVar107._12_4_) * 0.5);
      uVar116 = CONCAT17((char)((uint)auVar170._4_4_ >> 0x18),
                         (uint7)((auVar170._0_4_ >> 0x18 & 0x80) << 0x18)) & 0x80ffffffffffffff;
      bVar174 = (byte)((uint)auVar170._8_4_ >> 0x18) & 0x80;
      bVar175 = (byte)((uint)auVar170._12_4_ >> 0x18) & 0x80;
      auVar107 = auVar107 ^ (auVar107 ^ auVar168) & auVar170;
      bVar172 = (byte)(uVar116 >> 0x18);
      fVar106 = (float)CONCAT13(bVar172 ^ (byte)((uint)fVar143 >> 0x18),SUB43(fVar143,0));
      bVar173 = (byte)(uVar116 >> 0x38);
      auVar134._0_8_ =
           CONCAT17(bVar173 ^ (byte)((uint)fVar146 >> 0x18),
                    CONCAT16((char)((uint)fVar146 >> 0x10),
                             CONCAT15((char)((uint)fVar146 >> 8),CONCAT14(SUB41(fVar146,0),fVar106))
                            ));
      auVar134[8] = SUB41(fVar148,0);
      auVar134[9] = (char)((uint)fVar148 >> 8);
      auVar134[10] = (char)((uint)fVar148 >> 0x10);
      auVar134[0xb] = bVar174 ^ (byte)((uint)fVar148 >> 0x18);
      in_q21[0xc] = SUB41(fVar150,0);
      in_q21._0_12_ = auVar134;
      in_q21[0xd] = (char)((uint)fVar150 >> 8);
      in_q21[0xe] = (char)((uint)fVar150 >> 0x10);
      in_q21[0xf] = bVar175 ^ (byte)((uint)fVar150 >> 0x18);
      auVar156._0_4_ = auVar162._0_4_ * auVar107._0_4_;
      auVar156._4_4_ = auVar162._4_4_ * auVar107._4_4_;
      auVar156._8_4_ = auVar162._8_4_ * auVar107._8_4_;
      auVar156._12_4_ = auVar162._12_4_ * auVar107._12_4_;
      uVar116 = CONCAT26(-(ushort)(auVar90._12_4_ < auVar156._12_4_),
                         CONCAT24(-(ushort)(auVar90._8_4_ < auVar156._8_4_),
                                  CONCAT22(-(ushort)(auVar90._4_4_ < auVar156._4_4_),
                                           -(ushort)(auVar90._0_4_ < auVar156._0_4_)))) &
                CONCAT26(auVar118._12_2_,
                         CONCAT24((short)((unkuint10)auVar117._0_10_ >> 0x40),
                                  CONCAT22((short)((uint6)uVar115 >> 0x20),uVar114))) &
                CONCAT26(-(ushort)(fVar54 < in_q21._12_4_),
                         CONCAT24(-(ushort)(fVar54 < auVar134._8_4_),
                                  CONCAT22(-(ushort)(fVar54 < (float)((ulong)auVar134._0_8_ >> 0x20)
                                                    ),-(ushort)(fVar54 < fVar106))));
      auVar127._0_8_ =
           CONCAT44((int)((uint)(ushort)(uVar116 >> 0x10) << 0x1f) >> 0x1f,
                    (int)((uint)(ushort)uVar116 << 0x1f) >> 0x1f);
      auVar127._8_4_ = (int)((uint)(ushort)(uVar116 >> 0x20) << 0x1f) >> 0x1f;
      auVar127._12_4_ = (int)((uint)(ushort)(uVar116 >> 0x30) << 0x1f) >> 0x1f;
      auVar144._8_8_ = auVar127._8_8_;
      auVar144._0_8_ = auVar127._0_8_;
      auVar90 = auVar90 ^ (auVar90 ^ auVar156) & auVar144;
      auVar49._8_8_ = auVar127._8_8_;
      auVar49._0_8_ = auVar127._0_8_;
      auVar50 = auVar50 ^ (auVar50 ^ in_q21) & auVar49;
      auVar45._0_3_ = SUB43(fVar130,0);
      auVar45[3] = bVar172 ^ (byte)((uint)fVar130 >> 0x18);
      auVar45[4] = SUB41(fVar131,0);
      auVar45[5] = (char)((uint)fVar131 >> 8);
      auVar45[6] = (char)((uint)fVar131 >> 0x10);
      auVar45[7] = bVar173 ^ (byte)((uint)fVar131 >> 0x18);
      auVar45[8] = SUB41(fVar132,0);
      auVar45[9] = (char)((uint)fVar132 >> 8);
      auVar45[10] = (char)((uint)fVar132 >> 0x10);
      auVar45[0xb] = bVar174 ^ (byte)((uint)fVar132 >> 0x18);
      auVar45[0xc] = SUB41(fVar133,0);
      auVar45[0xd] = (char)((uint)fVar133 >> 8);
      auVar45[0xe] = (char)((uint)fVar133 >> 0x10);
      auVar45[0xf] = bVar175 ^ (byte)((uint)fVar133 >> 0x18);
      auVar31 = auVar31 ^ (auVar31 ^ auVar45) & auVar127;
      in_q19 = auVar31;
    }
    auVar162._8_8_ = auVar112._8_8_;
    auVar162._0_8_ = auVar112._0_8_;
    lVar55 = lVar55 + 1;
    auVar168._8_8_ = auVar108._8_8_;
    auVar168._0_8_ = auVar108._0_8_;
    pVar22 = (unkbyte9 *)((long)pVar22 + 8);
    uVar98 = *(undefined8 *)pVar3;
    uVar99 = uVar21;
  } while (lVar55 != 8);
  fVar52 = (float)NEON_fmaxnmv(auVar90,4);
  iVar34 = -(uint)(fVar52 <= auVar90._0_4_);
  iVar47 = -(uint)(fVar52 <= auVar90._4_4_);
  iVar128 = -(uint)(fVar52 <= auVar90._8_4_);
  iVar129 = -(uint)(fVar52 <= auVar90._12_4_);
  iVar34 = CONCAT13((byte)((uint)iVar34 >> 0x18) & (byte)((ulong)_DAT_03889700 >> 0x18),
                    CONCAT12((byte)((uint)iVar34 >> 0x10) & (byte)((ulong)_DAT_03889700 >> 0x10),
                             CONCAT11((byte)((uint)iVar34 >> 8) & (byte)((ulong)_DAT_03889700 >> 8),
                                      (byte)iVar34 & (byte)_DAT_03889700)));
  iVar128 = CONCAT13((byte)((uint)iVar128 >> 0x18) & (byte)((ulong)_UNK_03889708 >> 0x18),
                     CONCAT12((byte)((uint)iVar128 >> 0x10) & (byte)((ulong)_UNK_03889708 >> 0x10),
                              CONCAT11((byte)((uint)iVar128 >> 8) &
                                       (byte)((ulong)_UNK_03889708 >> 8),
                                       (byte)iVar128 & (byte)_UNK_03889708)));
  cVar1 = (&DAT_03aadfd0)
          [(uint)(iVar34 + (int)(CONCAT17((byte)((uint)iVar47 >> 0x18) &
                                          (byte)((ulong)_DAT_03889700 >> 0x38),
                                          CONCAT16((byte)((uint)iVar47 >> 0x10) &
                                                   (byte)((ulong)_DAT_03889700 >> 0x30),
                                                   CONCAT15((byte)((uint)iVar47 >> 8) &
                                                            (byte)((ulong)_DAT_03889700 >> 0x28),
                                                            CONCAT14((byte)iVar47 &
                                                                     (byte)((ulong)_DAT_03889700 >>
                                                                           0x20),iVar34)))) >> 0x20)
                 + iVar128 + (int)(CONCAT17((byte)((uint)iVar129 >> 0x18) &
                                            (byte)((ulong)_UNK_03889708 >> 0x38),
                                            CONCAT16((byte)((uint)iVar129 >> 0x10) &
                                                     (byte)((ulong)_UNK_03889708 >> 0x30),
                                                     CONCAT15((byte)((uint)iVar129 >> 8) &
                                                              (byte)((ulong)_UNK_03889708 >> 0x28),
                                                              CONCAT14((byte)iVar129 &
                                                                       (byte)((ulong)_UNK_03889708
                                                                             >> 0x20),iVar128)))) >>
                                  0x20))];
  fVar52 = auVar90._4_4_;
  if ((cVar1 != '\x01') &&
     ((fVar26 = auVar90._12_4_, cVar1 == '\x03' ||
      (fVar26 = auVar90._8_4_, fVar52 = auVar90._0_4_, cVar1 == '\x02')))) {
    fVar52 = fVar26;
  }
  if (fVar52 <= 0.0) {
    uVar21 = 0;
  }
  else {
    if (cVar1 == '\x01') {
      *param_7 = CONCAT44(auVar50._4_4_,auVar50._4_4_);
      uVar65 = CONCAT44(auVar31._4_4_,auVar31._4_4_);
    }
    else if (cVar1 == '\x03') {
      auVar46 = NEON_ext(auVar50,auVar50,8,1);
      auVar44 = NEON_ext(auVar31,auVar31,8,1);
      uVar65 = CONCAT44(auVar44._4_4_,auVar44._4_4_);
      *param_7 = CONCAT44(auVar46._4_4_,auVar46._4_4_);
    }
    else {
      if (cVar1 == '\x02') {
        auVar44 = NEON_ext(auVar50,auVar50,8,1);
        *param_7 = CONCAT44(auVar44._0_4_,auVar44._0_4_);
        auVar31 = NEON_ext(auVar31,auVar31,8,1);
      }
      else {
        *param_7 = CONCAT44(auVar50._0_4_,auVar50._0_4_);
      }
      uVar65 = CONCAT44(auVar31._0_4_,auVar31._0_4_);
    }
    uVar21 = 1;
    *param_8 = uVar65;
  }
  return uVar21;
}


