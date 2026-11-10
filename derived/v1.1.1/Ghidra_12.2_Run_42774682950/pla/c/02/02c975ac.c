/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c975ac; name: FUN_02c975ac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c975ac(long *param_1)

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [12];
  long lVar3;
  undefined1 (*pauVar4) [12];
  undefined1 (*pauVar5) [12];
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [14];
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  ulong uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [12];
  undefined1 auVar37 [12];
  undefined1 auVar38 [12];
  undefined1 auVar39 [12];
  unkbyte9 Var40;
  unkbyte9 Var41;
  undefined2 uVar42;
  undefined *puVar43;
  long lVar44;
  undefined8 *puVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  float fVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  float fVar58;
  float fVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  undefined1 uVar93;
  undefined1 uVar94;
  undefined1 uVar95;
  undefined1 uVar96;
  undefined1 uVar97;
  undefined1 uVar98;
  undefined1 uVar99;
  undefined1 uVar100;
  undefined1 uVar101;
  undefined1 uVar102;
  undefined1 uVar103;
  undefined1 uVar104;
  undefined1 uVar105;
  undefined1 uVar106;
  undefined1 uVar107;
  byte bVar108;
  undefined1 uVar109;
  undefined1 uVar110;
  undefined1 uVar111;
  float fVar112;
  float fVar113;
  undefined1 in_q18 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar119 [16];
  undefined1 auVar118 [16];
  undefined1 auVar117 [16];
  undefined1 auVar116 [16];
  undefined1 auVar123 [16];
  undefined1 auVar122 [16];
  undefined1 auVar121 [16];
  undefined1 auVar120 [16];
  undefined1 auVar124 [16];
  undefined1 auVar128 [16];
  undefined1 auVar127 [16];
  undefined1 auVar126 [16];
  undefined1 auVar125 [16];
  float fVar129;
  byte bVar138;
  byte bVar139;
  byte bVar140;
  byte bVar141;
  byte bVar142;
  byte bVar143;
  byte bVar144;
  byte bVar145;
  byte bVar147;
  byte bVar148;
  byte bVar149;
  undefined1 auVar130 [12];
  float fVar146;
  undefined1 auVar131 [16];
  undefined1 auVar134 [16];
  undefined1 auVar133 [16];
  undefined1 auVar132 [16];
  undefined1 auVar136 [16];
  undefined1 auVar135 [16];
  undefined1 auVar137 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  byte bVar152;
  byte bVar153;
  byte bVar154;
  byte bVar155;
  byte bVar156;
  byte bVar157;
  byte bVar158;
  byte bVar159;
  byte bVar160;
  byte bVar161;
  byte bVar162;
  byte bVar163;
  byte bVar164;
  byte bVar165;
  byte bVar166;
  byte bVar167;
  byte bVar168;
  byte bVar169;
  byte bVar170;
  byte bVar171;
  byte bVar172;
  byte bVar173;
  byte bVar174;
  byte bVar175;
  byte bVar176;
  byte bVar177;
  byte bVar178;
  byte bVar179;
  float fVar180;
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar187 [16];
  undefined1 auVar186 [16];
  undefined1 auVar185 [16];
  undefined1 auVar184 [16];
  
  lVar3 = *param_1;
  lVar44 = FUN_02b11f80(DAT_043ef6b8,param_1[1] + 0x140);
  puVar43 = PTR_DAT_043882e0;
  if (lVar44 == 0) {
    puVar45 = (undefined8 *)param_1[1];
    puVar45[0x26] = 0x3f8000003f800000;
    *(undefined4 *)(puVar45 + 0x27) = *(undefined4 *)puVar43;
    *(undefined4 *)((long)puVar45 + 0x13c) = 0;
    pauVar1 = (undefined1 (*) [12])(lVar3 + 0x4f0);
    fVar74 = (float)*(undefined8 *)(lVar3 + 0x4f8);
    fVar75 = (float)((ulong)*(undefined8 *)(lVar3 + 0x4f8) >> 0x20);
    auVar37 = *pauVar1;
    fVar72 = (float)*(undefined8 *)*pauVar1;
    fVar73 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
    pauVar2 = (undefined1 (*) [12])(lVar3 + 0x500);
    fVar70 = (float)*(undefined8 *)(lVar3 + 0x508);
    fVar71 = (float)((ulong)*(undefined8 *)(lVar3 + 0x508) >> 0x20);
    auVar39 = *pauVar2;
    fVar68 = (float)*(undefined8 *)*pauVar2;
    fVar69 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
    pauVar4 = (undefined1 (*) [12])(lVar3 + 0x510);
    fVar55 = (float)*(undefined8 *)(lVar3 + 0x518);
    fVar62 = (float)((ulong)*(undefined8 *)(lVar3 + 0x518) >> 0x20);
    auVar36 = *pauVar4;
    fVar52 = (float)*(undefined8 *)*pauVar4;
    fVar53 = (float)((ulong)*(undefined8 *)*pauVar4 >> 0x20);
    pauVar5 = (undefined1 (*) [12])(lVar3 + 0x520);
    fVar66 = (float)*(undefined8 *)(lVar3 + 0x528);
    fVar67 = (float)((ulong)*(undefined8 *)(lVar3 + 0x528) >> 0x20);
    auVar38 = *pauVar5;
    fVar64 = (float)*(undefined8 *)*pauVar5;
    fVar65 = (float)((ulong)*(undefined8 *)*pauVar5 >> 0x20);
    uVar49 = SUB124(*pauVar1,8);
    uVar56 = SUB124(*pauVar4,8);
    uVar50 = SUB124(*pauVar2,8);
    uVar57 = SUB124(*pauVar5,8);
    uVar46 = auVar37._0_4_;
    auVar182[4] = auVar36[0];
    auVar182._0_4_ = uVar46;
    auVar182[5] = auVar36[1];
    auVar182[6] = auVar36[2];
    auVar182[7] = auVar36[3];
    auVar182[8] = auVar37[4];
    auVar182[9] = auVar37[5];
    auVar182[10] = auVar37[6];
    auVar182[0xb] = auVar37[7];
    auVar182[0xc] = auVar36[4];
    auVar182[0xd] = auVar36[5];
    auVar182[0xe] = auVar36[6];
    auVar182[0xf] = auVar36[7];
    auVar181[4] = auVar36[0];
    auVar181._0_4_ = uVar46;
    auVar181[5] = auVar36[1];
    auVar181[6] = auVar36[2];
    auVar181[7] = auVar36[3];
    auVar181[8] = auVar37[4];
    auVar181[9] = auVar37[5];
    auVar181[10] = auVar37[6];
    auVar181[0xb] = auVar37[7];
    auVar181[0xc] = auVar36[4];
    auVar181[0xd] = auVar36[5];
    auVar181[0xe] = auVar36[6];
    auVar181[0xf] = auVar36[7];
    auVar182 = NEON_ext(auVar182,auVar181,8,1);
    auVar137._4_4_ = uVar56;
    auVar137._0_4_ = uVar49;
    auVar137._8_4_ = fVar75;
    auVar137._12_4_ = fVar62;
    auVar151._4_4_ = uVar56;
    auVar151._0_4_ = uVar49;
    auVar151._8_4_ = fVar75;
    auVar151._12_4_ = fVar62;
    auVar137 = NEON_ext(auVar137,auVar151,8,1);
    auVar25._4_4_ = uVar57;
    auVar25._0_4_ = uVar50;
    auVar25._8_4_ = fVar71;
    auVar25._12_4_ = fVar67;
    auVar26._4_4_ = uVar57;
    auVar26._0_4_ = uVar50;
    auVar26._8_4_ = fVar71;
    auVar26._12_4_ = fVar67;
    auVar151 = NEON_ext(auVar25,auVar26,8,1);
    uVar47 = auVar39._0_4_;
    auVar150[4] = auVar38[0];
    auVar150._0_4_ = uVar47;
    auVar150[5] = auVar38[1];
    auVar150[6] = auVar38[2];
    auVar150[7] = auVar38[3];
    auVar150[8] = auVar39[4];
    auVar150[9] = auVar39[5];
    auVar150[10] = auVar39[6];
    auVar150[0xb] = auVar39[7];
    auVar150[0xc] = auVar38[4];
    auVar150[0xd] = auVar38[5];
    auVar150[0xe] = auVar38[6];
    auVar150[0xf] = auVar38[7];
    auVar183[4] = auVar38[0];
    auVar183._0_4_ = uVar47;
    auVar183[5] = auVar38[1];
    auVar183[6] = auVar38[2];
    auVar183[7] = auVar38[3];
    auVar183[8] = auVar39[4];
    auVar183[9] = auVar39[5];
    auVar183[10] = auVar39[6];
    auVar183[0xb] = auVar39[7];
    auVar183[0xc] = auVar38[4];
    auVar183[0xd] = auVar38[5];
    auVar183[0xe] = auVar38[6];
    auVar183[0xf] = auVar38[7];
    auVar181 = NEON_ext(auVar150,auVar183,8,1);
    *(undefined4 *)(puVar45 + 8) = uVar46;
    *(undefined4 *)((long)puVar45 + 0x44) = uVar47;
    *(int *)(puVar45 + 9) = auVar36._0_4_;
    *(int *)((long)puVar45 + 0x4c) = auVar38._0_4_;
    *(int *)(puVar45 + 10) = auVar182._0_4_;
    *(int *)((long)puVar45 + 0x54) = auVar181._0_4_;
    *(int *)(puVar45 + 0xb) = auVar182._4_4_;
    *(int *)((long)puVar45 + 0x5c) = auVar181._4_4_;
    *(undefined4 *)(puVar45 + 0xc) = uVar49;
    *(undefined4 *)((long)puVar45 + 100) = uVar50;
    *(undefined4 *)(puVar45 + 0xd) = uVar56;
    *(undefined4 *)((long)puVar45 + 0x6c) = uVar57;
    *(int *)(puVar45 + 0xe) = auVar137._0_4_;
    *(int *)((long)puVar45 + 0x74) = auVar151._0_4_;
    *(int *)(puVar45 + 0xf) = auVar137._4_4_;
    *(int *)((long)puVar45 + 0x7c) = auVar151._4_4_;
    fVar16 = *(float *)(lVar3 + 0x4b0);
    fVar18 = *(float *)(lVar3 + 0x4b4);
    fVar22 = *(float *)(lVar3 + 0x4b8);
    pauVar1 = (undefined1 (*) [12])(lVar3 + 0x4c0);
    uVar27 = *(ulong *)(lVar3 + 0x4c8);
    uVar14 = *(undefined8 *)*pauVar1;
    auVar36 = *pauVar1;
    uVar10 = *(ulong *)(lVar3 + 0x4d8);
    uVar6 = *(undefined8 *)(lVar3 + 0x4d0);
    Var41 = *(unkbyte9 *)(lVar3 + 0x4d0);
    uVar9 = *(undefined8 *)(lVar3 + 0x4e8);
    Var40 = *(unkbyte9 *)(lVar3 + 0x4e0);
    auVar124._8_8_ = auVar181._8_8_;
    auVar124._0_8_ = NEON_fmov(0x3f800000,4);
    auVar125._4_12_ = auVar124._4_12_;
    puVar45[0x20] = CONCAT44(SUB124(*pauVar1,8),fVar22);
    bVar108 = (byte)((ulong)uVar9 >> 0x18);
    uVar80 = (undefined1)((ulong)auVar124._0_8_ >> 0x30);
    uVar81 = (undefined1)((ulong)auVar124._0_8_ >> 0x38);
    fVar48 = auVar36._0_4_;
    fVar54 = auVar36._4_4_;
    fVar58 = (float)Var40;
    fVar63 = (float)((unkuint9)Var40 >> 0x20);
    fVar59 = (float)Var41;
    fVar51 = (float)((unkuint9)Var41 >> 0x20);
    auVar125._0_4_ = fVar16;
    auVar127._12_4_ = auVar181._12_4_;
    auVar127._0_8_ = auVar125._0_8_;
    auVar127._8_4_ = fVar59;
    auVar126._8_8_ = auVar127._8_8_;
    auVar126._0_8_ = CONCAT44(fVar48,fVar16);
    auVar128._0_12_ = auVar126._0_12_;
    auVar128._12_4_ = fVar58;
    puVar45[0x1b] = uVar27 & 0xffffffff;
    puVar45[0x1a] = uVar14;
    puVar45[0x1d] = uVar10 & 0xffffffff;
    puVar45[0x1c] = uVar6;
    auVar21[0xc] = (char)((ulong)auVar124._0_8_ >> 0x20);
    auVar21._0_12_ = ZEXT112(bVar108) << 0x38;
    auVar21[0xd] = (char)((ulong)auVar124._0_8_ >> 0x28);
    fVar13 = (float)uVar10;
    puVar45[5] = CONCAT17(bVar108,CONCAT16((char)((ulong)uVar9 >> 0x10),
                                           CONCAT15((char)((ulong)uVar9 >> 8),
                                                    CONCAT14((char)uVar9,fVar13))));
    puVar45[4] = CONCAT17((char)(uVar27 >> 0x18),
                          CONCAT16((char)(uVar27 >> 0x10),
                                   CONCAT15((char)(uVar27 >> 8),CONCAT14((char)uVar27,fVar22))));
    uVar42 = auVar21._12_2_;
    puVar45[7] = (ulong)CONCAT13(uVar81,CONCAT12(uVar80,uVar42)) << 0x20;
    puVar45[6] = 0;
    fVar92 = (float)uVar27;
    fVar15 = (float)uVar9;
    puVar45[0x1e] = 0;
    puVar45[0x1f] = 0x3f80000000000000;
    puVar45[0x19] = (ulong)(uint)fVar22;
    *(float *)(puVar45 + 0x18) = fVar16;
    *(float *)((long)puVar45 + 0xc4) = fVar18;
    puVar45[1] = auVar128._8_8_;
    *puVar45 = auVar126._0_8_;
    *(float *)(puVar45 + 3) = fVar51;
    *(float *)((long)puVar45 + 0x1c) = fVar63;
    *(float *)(puVar45 + 2) = fVar18;
    *(float *)((long)puVar45 + 0x14) = fVar54;
    fVar112 = fVar48 * fVar72 + fVar54 * fVar68 + fVar92 * fVar52 + fVar64 * 0.0;
    fVar89 = fVar58 * fVar72 + fVar63 * fVar68 + fVar15 * fVar52 +
             (float)CONCAT13(uVar81,CONCAT12(uVar80,uVar42)) * fVar64;
    fVar90 = fVar48 * fVar74 + fVar54 * fVar70 + fVar92 * fVar55 + fVar66 * 0.0;
    fVar91 = fVar58 * fVar74 + fVar63 * fVar70 + fVar15 * fVar55 +
             (float)CONCAT13(uVar81,CONCAT12(uVar80,uVar42)) * fVar66;
    puVar45[0x11] =
         CONCAT17((char)((uint)fVar89 >> 0x18),
                  CONCAT16((char)((uint)fVar89 >> 0x10),
                           CONCAT15((char)((uint)fVar89 >> 8),
                                    CONCAT14(SUB41(fVar89,0),
                                             fVar59 * fVar72 + fVar51 * fVar68 + fVar13 * fVar52 +
                                             fVar64 * 0.0))));
    puVar45[0x10] =
         CONCAT17((char)((uint)fVar112 >> 0x18),
                  CONCAT16((char)((uint)fVar112 >> 0x10),
                           CONCAT15((char)((uint)fVar112 >> 8),
                                    CONCAT14(SUB41(fVar112,0),
                                             fVar16 * fVar72 + fVar18 * fVar68 + fVar22 * fVar52 +
                                             fVar64 * 0.0))));
    puVar45[0x13] =
         CONCAT44(fVar58 * fVar73 + fVar63 * fVar69 + fVar15 * fVar53 +
                  (float)CONCAT13(uVar81,CONCAT12(uVar80,uVar42)) * fVar65,
                  fVar59 * fVar73 + fVar51 * fVar69 + fVar13 * fVar53 + fVar65 * 0.0);
    puVar45[0x12] =
         CONCAT44(fVar48 * fVar73 + fVar54 * fVar69 + fVar92 * fVar53 + fVar65 * 0.0,
                  fVar16 * fVar73 + fVar18 * fVar69 + fVar22 * fVar53 + fVar65 * 0.0);
    puVar45[0x15] =
         CONCAT17((char)((uint)fVar91 >> 0x18),
                  CONCAT16((char)((uint)fVar91 >> 0x10),
                           CONCAT15((char)((uint)fVar91 >> 8),
                                    CONCAT14(SUB41(fVar91,0),
                                             fVar59 * fVar74 + fVar51 * fVar70 + fVar13 * fVar55 +
                                             fVar66 * 0.0))));
    puVar45[0x14] =
         CONCAT17((char)((uint)fVar90 >> 0x18),
                  CONCAT16((char)((uint)fVar90 >> 0x10),
                           CONCAT15((char)((uint)fVar90 >> 8),
                                    CONCAT14(SUB41(fVar90,0),
                                             fVar16 * fVar74 + fVar18 * fVar70 + fVar22 * fVar55 +
                                             fVar66 * 0.0))));
    puVar45[0x17] =
         CONCAT44(fVar58 * fVar75 + fVar63 * fVar71 + fVar15 * fVar62 +
                  (float)CONCAT13(uVar81,CONCAT12(uVar80,uVar42)) * fVar67,
                  fVar59 * fVar75 + fVar51 * fVar71 + fVar13 * fVar62 + fVar67 * 0.0);
    puVar45[0x16] =
         CONCAT44(fVar48 * fVar75 + fVar54 * fVar71 + fVar92 * fVar62 + fVar67 * 0.0,
                  fVar16 * fVar75 + fVar18 * fVar71 + fVar22 * fVar62 + fVar67 * 0.0);
    *(float *)(puVar45 + 0x21) = fVar13;
    *(undefined4 *)((long)puVar45 + 0x10c) = 0;
    uVar6 = *(undefined8 *)(lVar3 + 0x4a8);
    puVar45[0x22] = *(undefined8 *)(lVar3 + 0x4a0);
    *(int *)(puVar45 + 0x23) = (int)uVar6;
    *(undefined8 *)((long)puVar45 + 0x11c) = 0x45bb800000000000;
    *(undefined8 *)((long)puVar45 + 0x124) = 0x427000003c23d70a;
    fVar112 = -5999.99;
  }
  else {
    pauVar1 = (undefined1 (*) [12])(lVar44 + 0x90);
    fVar78 = (float)*(undefined8 *)(lVar44 + 0x98);
    fVar79 = (float)((ulong)*(undefined8 *)(lVar44 + 0x98) >> 0x20);
    auVar37 = *pauVar1;
    fVar76 = (float)*(undefined8 *)*pauVar1;
    fVar77 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
    pauVar4 = (undefined1 (*) [12])(lVar44 + 0xa0);
    fVar74 = (float)*(undefined8 *)(lVar44 + 0xa8);
    fVar75 = (float)((ulong)*(undefined8 *)(lVar44 + 0xa8) >> 0x20);
    auVar39 = *pauVar4;
    fVar72 = (float)*(undefined8 *)*pauVar4;
    fVar73 = (float)((ulong)*(undefined8 *)*pauVar4 >> 0x20);
    pauVar2 = (undefined1 (*) [12])(lVar44 + 0xb0);
    fVar70 = (float)*(undefined8 *)(lVar44 + 0xb8);
    fVar71 = (float)((ulong)*(undefined8 *)(lVar44 + 0xb8) >> 0x20);
    auVar36 = *pauVar2;
    fVar68 = (float)*(undefined8 *)*pauVar2;
    fVar69 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
    pauVar5 = (undefined1 (*) [12])(lVar44 + 0xc0);
    fVar66 = (float)*(undefined8 *)(lVar44 + 200);
    fVar67 = (float)((ulong)*(undefined8 *)(lVar44 + 200) >> 0x20);
    auVar38 = *pauVar5;
    fVar64 = (float)*(undefined8 *)*pauVar5;
    fVar65 = (float)((ulong)*(undefined8 *)*pauVar5 >> 0x20);
    uVar46 = SUB124(*pauVar1,0);
    uVar49 = SUB124(*pauVar1,4);
    uVar56 = SUB124(*pauVar2,0);
    uVar60 = SUB124(*pauVar2,4);
    puVar45 = (undefined8 *)param_1[1];
    uVar17 = *(undefined8 *)(lVar44 + 0x58);
    uVar14 = *(undefined8 *)(lVar44 + 0x50);
    uVar24 = *(undefined8 *)(lVar44 + 0x68);
    uVar23 = *(undefined8 *)(lVar44 + 0x60);
    uVar47 = SUB124(*pauVar4,0);
    uVar50 = SUB124(*pauVar4,4);
    uVar57 = SUB124(*pauVar5,0);
    uVar61 = SUB124(*pauVar5,4);
    auVar114._8_8_ = in_q18._8_8_;
    auVar114._0_8_ = NEON_fmov(0x3f800000,4);
    bVar108 = (byte)_DAT_038897c0;
    bVar152 = (byte)uVar14 & bVar108;
    bVar138 = (byte)((ulong)_DAT_038897c0 >> 8);
    bVar153 = (byte)((ulong)uVar14 >> 8) & bVar138;
    bVar139 = (byte)((ulong)_DAT_038897c0 >> 0x10);
    bVar154 = (byte)((ulong)uVar14 >> 0x10) & bVar139;
    bVar140 = (byte)((ulong)_DAT_038897c0 >> 0x18);
    bVar155 = (byte)((ulong)uVar14 >> 0x18) & bVar140;
    bVar141 = (byte)((ulong)_DAT_038897c0 >> 0x20);
    bVar156 = (byte)((ulong)uVar14 >> 0x20) & bVar141;
    bVar142 = (byte)((ulong)_DAT_038897c0 >> 0x28);
    bVar157 = (byte)((ulong)uVar14 >> 0x28) & bVar142;
    bVar143 = (byte)((ulong)_DAT_038897c0 >> 0x30);
    bVar158 = (byte)((ulong)uVar14 >> 0x30) & bVar143;
    bVar144 = (byte)((ulong)_DAT_038897c0 >> 0x38);
    bVar159 = (byte)((ulong)uVar14 >> 0x38) & bVar144;
    bVar145 = (byte)_UNK_038897c8;
    bVar160 = (byte)uVar17 & bVar145;
    bVar147 = (byte)((ulong)_UNK_038897c8 >> 8);
    bVar161 = (byte)((ulong)uVar17 >> 8) & bVar147;
    bVar148 = (byte)((ulong)_UNK_038897c8 >> 0x10);
    bVar162 = (byte)((ulong)uVar17 >> 0x10) & bVar148;
    bVar149 = (byte)((ulong)_UNK_038897c8 >> 0x18);
    bVar163 = (byte)((ulong)uVar17 >> 0x18) & bVar149;
    uVar9 = *(undefined8 *)(lVar44 + 0x78);
    uVar6 = *(undefined8 *)(lVar44 + 0x70);
    auVar182 = *(undefined1 (*) [16])(lVar44 + 0x80);
    bVar164 = (byte)uVar23 & bVar108;
    bVar165 = (byte)((ulong)uVar23 >> 8) & bVar138;
    bVar166 = (byte)((ulong)uVar23 >> 0x10) & bVar139;
    bVar167 = (byte)((ulong)uVar23 >> 0x18) & bVar140;
    bVar168 = (byte)((ulong)uVar23 >> 0x20) & bVar141;
    bVar169 = (byte)((ulong)uVar23 >> 0x28) & bVar142;
    bVar170 = (byte)((ulong)uVar23 >> 0x30) & bVar143;
    bVar171 = (byte)((ulong)uVar23 >> 0x38) & bVar144;
    bVar172 = (byte)uVar24 & bVar145;
    bVar173 = (byte)((ulong)uVar24 >> 8) & bVar147;
    bVar174 = (byte)((ulong)uVar24 >> 0x10) & bVar148;
    bVar175 = (byte)((ulong)uVar24 >> 0x18) & bVar149;
    bVar176 = (byte)uVar9 & bVar145;
    bVar177 = (byte)((ulong)uVar9 >> 8) & bVar147;
    bVar178 = (byte)((ulong)uVar9 >> 0x10) & bVar148;
    bVar179 = (byte)((ulong)uVar9 >> 0x18) & bVar149;
    fVar129 = (float)CONCAT13(auVar182[3] & bVar140,
                              CONCAT12(auVar182[2] & bVar139,
                                       CONCAT11(auVar182[1] & bVar138,auVar182[0] & bVar108)));
    auVar130._0_8_ =
         CONCAT17(auVar182[7] & bVar144,
                  CONCAT16(auVar182[6] & bVar143,
                           CONCAT15(auVar182[5] & bVar142,CONCAT14(auVar182[4] & bVar141,fVar129))))
    ;
    auVar130[8] = auVar182[8] & bVar145;
    auVar130[9] = auVar182[9] & bVar147;
    auVar130[10] = auVar182[10] & bVar148;
    auVar130[0xb] = auVar182[0xb] & bVar149;
    fVar112 = *(float *)(lVar44 + 0x14);
    fVar113 = *(float *)(lVar44 + 0x18);
    auVar28._4_4_ = uVar56;
    auVar28._0_4_ = uVar46;
    auVar28._8_4_ = uVar49;
    auVar28._12_4_ = uVar60;
    auVar29._4_4_ = uVar56;
    auVar29._0_4_ = uVar46;
    auVar29._8_4_ = uVar49;
    auVar29._12_4_ = uVar60;
    auVar181 = NEON_ext(auVar28,auVar29,8,1);
    puVar45[0x26] = 0x3f8000003f800000;
    *(undefined4 *)(puVar45 + 0x27) = *(undefined4 *)puVar43;
    fVar89 = auVar182._0_4_;
    fVar13 = (float)uVar14 * fVar89;
    fVar90 = auVar182._4_4_;
    fVar15 = (float)((ulong)uVar14 >> 0x20) * fVar90;
    uVar93 = (undefined1)((uint)fVar15 >> 8);
    uVar94 = (undefined1)((uint)fVar15 >> 0x10);
    uVar95 = (undefined1)((uint)fVar15 >> 0x18);
    fVar91 = auVar182._8_4_;
    fVar16 = (float)uVar17 * fVar91;
    uVar96 = (undefined1)((uint)fVar16 >> 8);
    uVar97 = (undefined1)((uint)fVar16 >> 0x10);
    uVar98 = (undefined1)((uint)fVar16 >> 0x18);
    fVar92 = auVar182._12_4_;
    fVar18 = (float)((ulong)uVar17 >> 0x20) * fVar92;
    uVar99 = (undefined1)((uint)fVar18 >> 8);
    uVar100 = (undefined1)((uint)fVar18 >> 0x10);
    uVar101 = (undefined1)((uint)fVar18 >> 0x18);
    *(undefined4 *)((long)puVar45 + 0x13c) = 0;
    fVar22 = (float)uVar23 * fVar89;
    fVar48 = (float)((ulong)uVar23 >> 0x20) * fVar90;
    uVar102 = (undefined1)((uint)fVar48 >> 8);
    uVar103 = (undefined1)((uint)fVar48 >> 0x10);
    uVar104 = (undefined1)((uint)fVar48 >> 0x18);
    fVar54 = (float)uVar24 * fVar91;
    uVar105 = (undefined1)((uint)fVar54 >> 8);
    uVar106 = (undefined1)((uint)fVar54 >> 0x10);
    uVar107 = (undefined1)((uint)fVar54 >> 0x18);
    fVar58 = (float)((ulong)uVar24 >> 0x20) * fVar92;
    uVar109 = (undefined1)((uint)fVar58 >> 8);
    uVar110 = (undefined1)((uint)fVar58 >> 0x10);
    uVar111 = (undefined1)((uint)fVar58 >> 0x18);
    fVar89 = (float)uVar6 * fVar89;
    fVar90 = (float)((ulong)uVar6 >> 0x20) * fVar90;
    uVar80 = (undefined1)((uint)fVar90 >> 8);
    uVar81 = (undefined1)((uint)fVar90 >> 0x10);
    uVar82 = (undefined1)((uint)fVar90 >> 0x18);
    fVar91 = (float)uVar9 * fVar91;
    uVar83 = (undefined1)((uint)fVar91 >> 8);
    uVar84 = (undefined1)((uint)fVar91 >> 0x10);
    uVar85 = (undefined1)((uint)fVar91 >> 0x18);
    fVar92 = (float)((ulong)uVar9 >> 0x20) * fVar92;
    uVar86 = (undefined1)((uint)fVar92 >> 8);
    uVar87 = (undefined1)((uint)fVar92 >> 0x10);
    uVar88 = (undefined1)((uint)fVar92 >> 0x18);
    *(undefined4 *)(puVar45 + 8) = uVar46;
    *(undefined4 *)((long)puVar45 + 0x44) = uVar47;
    *(undefined4 *)(puVar45 + 9) = uVar56;
    *(undefined4 *)((long)puVar45 + 0x4c) = uVar57;
    auVar32._4_4_ = uVar57;
    auVar32._0_4_ = uVar47;
    auVar32._8_4_ = uVar50;
    auVar32._12_4_ = uVar61;
    auVar33._4_4_ = uVar57;
    auVar33._0_4_ = uVar47;
    auVar33._8_4_ = uVar50;
    auVar33._12_4_ = uVar61;
    auVar182 = NEON_ext(auVar32,auVar33,8,1);
    uVar46 = auVar37._8_4_;
    uVar49 = auVar36._8_4_;
    uVar47 = auVar39._8_4_;
    uVar50 = auVar38._8_4_;
    auVar115._4_12_ = auVar114._4_12_;
    fVar146 = auVar130._8_4_;
    auVar115._0_4_ = fVar146;
    *(int *)(puVar45 + 10) = auVar181._0_4_;
    *(int *)((long)puVar45 + 0x54) = auVar182._0_4_;
    *(int *)(puVar45 + 0xb) = auVar181._4_4_;
    *(int *)((long)puVar45 + 0x5c) = auVar182._4_4_;
    auVar30._4_4_ = uVar49;
    auVar30._0_4_ = uVar46;
    auVar30._8_4_ = fVar79;
    auVar30._12_4_ = fVar71;
    auVar31._4_4_ = uVar49;
    auVar31._0_4_ = uVar46;
    auVar31._8_4_ = fVar79;
    auVar31._12_4_ = fVar71;
    auVar181 = NEON_ext(auVar30,auVar31,8,1);
    auVar34._4_4_ = uVar50;
    auVar34._0_4_ = uVar47;
    auVar34._8_4_ = fVar75;
    auVar34._12_4_ = fVar67;
    auVar35._4_4_ = uVar50;
    auVar35._0_4_ = uVar47;
    auVar35._8_4_ = fVar75;
    auVar35._12_4_ = fVar67;
    auVar183 = NEON_ext(auVar34,auVar35,8,1);
    *(undefined4 *)(puVar45 + 0xc) = uVar46;
    *(undefined4 *)((long)puVar45 + 100) = uVar47;
    *(undefined4 *)(puVar45 + 0xd) = uVar49;
    *(undefined4 *)((long)puVar45 + 0x6c) = uVar50;
    fVar63 = (float)CONCAT13((byte)((ulong)uVar6 >> 0x18) & bVar140,
                             CONCAT12((byte)((ulong)uVar6 >> 0x10) & bVar139,
                                      CONCAT11((byte)((ulong)uVar6 >> 8) & bVar138,
                                               (byte)uVar6 & bVar108)));
    fVar180 = (float)(CONCAT17((byte)((ulong)uVar6 >> 0x38) & bVar144,
                               CONCAT16((byte)((ulong)uVar6 >> 0x30) & bVar143,
                                        CONCAT15((byte)((ulong)uVar6 >> 0x28) & bVar142,
                                                 CONCAT14((byte)((ulong)uVar6 >> 0x20) & bVar141,
                                                          fVar63)))) >> 0x20);
    auVar11[4] = SUB41(fVar15,0);
    auVar11._0_4_ = fVar13;
    auVar11[5] = uVar93;
    auVar11[6] = uVar94;
    auVar11[7] = uVar95;
    auVar11[8] = SUB41(fVar16,0);
    auVar11[9] = uVar96;
    auVar11[10] = uVar97;
    auVar11[0xb] = uVar98;
    auVar11[0xc] = SUB41(fVar18,0);
    auVar11[0xd] = uVar99;
    auVar11[0xe] = uVar100;
    auVar11[0xf] = uVar101;
    auVar12[4] = SUB41(fVar15,0);
    auVar12._0_4_ = fVar13;
    auVar12[5] = uVar93;
    auVar12[6] = uVar94;
    auVar12[7] = uVar95;
    auVar12[8] = SUB41(fVar16,0);
    auVar12[9] = uVar96;
    auVar12[10] = uVar97;
    auVar12[0xb] = uVar98;
    auVar12[0xc] = SUB41(fVar18,0);
    auVar12[0xd] = uVar99;
    auVar12[0xe] = uVar100;
    auVar12[0xf] = uVar101;
    auVar150 = NEON_ext(auVar11,auVar12,8,1);
    auVar131._8_8_ = auVar115._0_8_;
    auVar131._0_8_ = auVar130._0_8_;
    auVar19[4] = SUB41(fVar48,0);
    auVar19._0_4_ = fVar22;
    auVar19[5] = uVar102;
    auVar19[6] = uVar103;
    auVar19[7] = uVar104;
    auVar19[8] = SUB41(fVar54,0);
    auVar19[9] = uVar105;
    auVar19[10] = uVar106;
    auVar19[0xb] = uVar107;
    auVar19[0xc] = SUB41(fVar58,0);
    auVar19[0xd] = uVar109;
    auVar19[0xe] = uVar110;
    auVar19[0xf] = uVar111;
    auVar20[4] = SUB41(fVar48,0);
    auVar20._0_4_ = fVar22;
    auVar20[5] = uVar102;
    auVar20[6] = uVar103;
    auVar20[7] = uVar104;
    auVar20[8] = SUB41(fVar54,0);
    auVar20[9] = uVar105;
    auVar20[10] = uVar106;
    auVar20[0xb] = uVar107;
    auVar20[0xc] = SUB41(fVar58,0);
    auVar20[0xd] = uVar109;
    auVar20[0xe] = uVar110;
    auVar20[0xf] = uVar111;
    auVar182 = NEON_ext(auVar19,auVar20,8,1);
    *(int *)(puVar45 + 0xe) = auVar181._0_4_;
    *(int *)((long)puVar45 + 0x74) = auVar183._0_4_;
    *(int *)(puVar45 + 0xf) = auVar181._4_4_;
    *(int *)((long)puVar45 + 0x7c) = auVar183._4_4_;
    fVar16 = (float)CONCAT13(bVar155,CONCAT12(bVar154,CONCAT11(bVar153,bVar152)));
    auVar116._4_12_ = auVar115._4_12_;
    auVar116._0_4_ = fVar16;
    fVar51 = (float)(CONCAT17(bVar159,CONCAT16(bVar158,CONCAT15(bVar157,CONCAT14(bVar156,fVar16))))
                    >> 0x20);
    auVar118._12_4_ = in_q18._12_4_;
    auVar118._0_8_ = auVar116._0_8_;
    auVar118._8_4_ = fVar51;
    auVar117._8_8_ = auVar118._8_8_;
    auVar117._4_4_ = fVar63;
    auVar117._0_4_ = fVar16;
    auVar119._0_12_ = auVar117._0_12_;
    auVar119._12_4_ = fVar180;
    fVar54 = (float)CONCAT13(bVar167,CONCAT12(bVar166,CONCAT11(bVar165,bVar164)));
    fVar52 = (float)(CONCAT17(bVar171,CONCAT16(bVar170,CONCAT15(bVar169,CONCAT14(bVar168,fVar54))))
                    >> 0x20);
    fVar62 = (float)((ulong)auVar130._0_8_ >> 0x20);
    fVar55 = (float)(CONCAT14(bVar175,CONCAT13(bVar174,CONCAT12(bVar173,CONCAT11(bVar172,bVar171))))
                    >> 8);
    auVar132._4_12_ = auVar131._4_12_;
    auVar132._0_4_ = fVar55;
    auVar134._12_4_ = (float)((ulong)auVar114._0_8_ >> 0x20);
    auVar134._0_8_ = auVar132._0_8_;
    auVar134._8_4_ = 0;
    auVar133._8_8_ = auVar134._8_8_;
    auVar133._4_4_ = fVar146;
    auVar133._0_4_ = fVar55;
    auVar184._4_12_ = auVar183._4_12_;
    auVar184._0_4_ = fVar16;
    auVar186._12_4_ = auVar183._12_4_;
    auVar186._0_8_ = auVar184._0_8_;
    auVar186._8_4_ = fVar63;
    auVar185._8_8_ = auVar186._8_8_;
    auVar185._0_8_ = CONCAT44(fVar54,fVar16);
    auVar187._0_12_ = auVar185._0_12_;
    auVar187._12_4_ = fVar129;
    puVar45[0x19] = (ulong)CONCAT13(bVar163,CONCAT12(bVar162,CONCAT11(bVar161,bVar160)));
    puVar45[0x18] =
         CONCAT17(bVar159,CONCAT16(bVar158,CONCAT15(bVar157,CONCAT14(bVar156,CONCAT13(bVar155,
                                                  CONCAT12(bVar154,CONCAT11(bVar153,bVar152)))))));
    puVar45[0x1b] = (ulong)CONCAT13(bVar175,CONCAT12(bVar174,CONCAT11(bVar173,bVar172)));
    puVar45[0x1a] =
         CONCAT17(bVar171,CONCAT16(bVar170,CONCAT15(bVar169,CONCAT14(bVar168,CONCAT13(bVar167,
                                                  CONCAT12(bVar166,CONCAT11(bVar165,bVar164)))))));
    auVar120._4_12_ = auVar119._4_12_;
    auVar120._0_4_ = fVar51;
    auVar122._0_8_ = auVar120._0_8_;
    auVar122._8_4_ = fVar180;
    auVar122._12_4_ = fVar180;
    auVar121._8_8_ = auVar122._8_8_;
    auVar121._0_8_ = CONCAT44(fVar52,fVar51);
    auVar123._0_12_ = auVar121._0_12_;
    auVar123._12_4_ = fVar62;
    puVar45[0x1d] = (ulong)CONCAT13(bVar179,CONCAT12(bVar178,CONCAT11(bVar177,bVar176)));
    puVar45[0x1c] = CONCAT44(fVar180,fVar63);
    fVar18 = (float)CONCAT13(bVar163,CONCAT12(bVar162,(short)(CONCAT12(bVar161,CONCAT11(bVar160,
                                                  bVar159)) >> 8)));
    fVar53 = (float)(CONCAT17(bVar179,CONCAT16(bVar178,CONCAT15(bVar177,CONCAT14(bVar176,fVar18))))
                    >> 0x20);
    auVar7[4] = SUB41(fVar90,0);
    auVar7._0_4_ = fVar89;
    auVar7[5] = uVar80;
    auVar7[6] = uVar81;
    auVar7[7] = uVar82;
    auVar7[8] = SUB41(fVar91,0);
    auVar7[9] = uVar83;
    auVar7[10] = uVar84;
    auVar7[0xb] = uVar85;
    auVar7[0xc] = SUB41(fVar92,0);
    auVar7[0xd] = uVar86;
    auVar7[0xe] = uVar87;
    auVar7[0xf] = uVar88;
    auVar8[4] = SUB41(fVar90,0);
    auVar8._0_4_ = fVar89;
    auVar8[5] = uVar80;
    auVar8[6] = uVar81;
    auVar8[7] = uVar82;
    auVar8[8] = SUB41(fVar91,0);
    auVar8[9] = uVar83;
    auVar8[10] = uVar84;
    auVar8[0xb] = uVar85;
    auVar8[0xc] = SUB41(fVar92,0);
    auVar8[0xd] = uVar86;
    auVar8[0xe] = uVar87;
    auVar8[0xf] = uVar88;
    auVar181 = NEON_ext(auVar7,auVar8,8,1);
    auVar135._0_8_ = auVar133._4_8_ << 0x20;
    auVar135._8_4_ = 0;
    auVar135._12_4_ = auVar134._12_4_;
    auVar36._8_4_ = 0;
    auVar36._0_8_ = auVar135._8_8_;
    auVar136._0_12_ = auVar36 << 0x40;
    auVar136._12_4_ = auVar134._12_4_;
    puVar45[0x1e] = 0;
    puVar45[0x1f] = 0x3f80000000000000;
    puVar45[1] = auVar187._8_8_;
    *puVar45 = auVar185._0_8_;
    puVar45[3] = auVar123._8_8_;
    puVar45[2] = auVar121._0_8_;
    fVar91 = fVar54 * fVar77 + fVar52 * fVar73 + fVar55 * fVar69 + fVar65 * 0.0;
    fVar92 = fVar129 * fVar77 + fVar62 * fVar73 + fVar146 * fVar69 + auVar134._12_4_ * fVar65;
    fVar58 = fVar54 * fVar78 + fVar52 * fVar74 + fVar55 * fVar70 + fVar66 * 0.0;
    fVar59 = fVar129 * fVar78 + fVar62 * fVar74 + fVar146 * fVar70 + auVar134._12_4_ * fVar66;
    puVar45[5] = CONCAT44(fVar146,fVar53);
    puVar45[4] = CONCAT44(fVar55,fVar18);
    puVar45[7] = auVar136._8_8_;
    puVar45[6] = 0;
    puVar45[0x20] =
         CONCAT44((int)(CONCAT14(bVar175,CONCAT13(bVar174,CONCAT12(bVar173,CONCAT11(bVar172,bVar171)
                                                                  ))) >> 8),
                  (int)(CONCAT14(bVar163,CONCAT13(bVar162,CONCAT12(bVar161,CONCAT11(bVar160,bVar159)
                                                                  ))) >> 8));
    *(float *)(puVar45 + 0x11) = fVar63 * fVar76 + fVar180 * fVar72 + fVar53 * fVar68 + fVar64 * 0.0
    ;
    *(float *)((long)puVar45 + 0x8c) =
         fVar129 * fVar76 + fVar62 * fVar72 + fVar146 * fVar68 + auVar134._12_4_ * fVar64;
    *(float *)(puVar45 + 0x10) = fVar16 * fVar76 + fVar51 * fVar72 + fVar18 * fVar68 + fVar64 * 0.0;
    *(float *)((long)puVar45 + 0x84) =
         fVar54 * fVar76 + fVar52 * fVar72 + fVar55 * fVar68 + fVar64 * 0.0;
    puVar45[0x13] =
         CONCAT17((char)((uint)fVar92 >> 0x18),
                  CONCAT16((char)((uint)fVar92 >> 0x10),
                           CONCAT15((char)((uint)fVar92 >> 8),
                                    CONCAT14(SUB41(fVar92,0),
                                             fVar63 * fVar77 + fVar180 * fVar73 + fVar53 * fVar69 +
                                             fVar65 * 0.0))));
    puVar45[0x12] =
         CONCAT17((char)((uint)fVar91 >> 0x18),
                  CONCAT16((char)((uint)fVar91 >> 0x10),
                           CONCAT15((char)((uint)fVar91 >> 8),
                                    CONCAT14(SUB41(fVar91,0),
                                             fVar16 * fVar77 + fVar51 * fVar73 + fVar18 * fVar69 +
                                             fVar65 * 0.0))));
    puVar45[0x15] =
         CONCAT17((char)((uint)fVar59 >> 0x18),
                  CONCAT16((char)((uint)fVar59 >> 0x10),
                           CONCAT15((char)((uint)fVar59 >> 8),
                                    CONCAT14(SUB41(fVar59,0),
                                             fVar63 * fVar78 + fVar180 * fVar74 + fVar53 * fVar70 +
                                             fVar66 * 0.0))));
    puVar45[0x14] =
         CONCAT17((char)((uint)fVar58 >> 0x18),
                  CONCAT16((char)((uint)fVar58 >> 0x10),
                           CONCAT15((char)((uint)fVar58 >> 8),
                                    CONCAT14(SUB41(fVar58,0),
                                             fVar16 * fVar78 + fVar51 * fVar74 + fVar18 * fVar70 +
                                             fVar66 * 0.0))));
    puVar45[0x17] =
         CONCAT44(fVar129 * fVar79 + fVar62 * fVar75 + fVar146 * fVar71 + auVar134._12_4_ * fVar67,
                  fVar63 * fVar79 + fVar180 * fVar75 + fVar53 * fVar71 + fVar67 * 0.0);
    puVar45[0x16] =
         CONCAT44(fVar54 * fVar79 + fVar52 * fVar75 + fVar55 * fVar71 + fVar67 * 0.0,
                  fVar16 * fVar79 + fVar51 * fVar75 + fVar18 * fVar71 + fVar67 * 0.0);
    *(uint *)(puVar45 + 0x21) = CONCAT13(bVar179,CONCAT12(bVar178,CONCAT11(bVar177,bVar176)));
    *(float *)(puVar45 + 0x23) = -(auVar181._0_4_ + fVar89 + auVar181._4_4_ + fVar90);
    *(undefined4 *)((long)puVar45 + 0x10c) = 0;
    puVar45[0x22] =
         CONCAT44(-(auVar182._0_4_ + fVar22 + auVar182._4_4_ + fVar48),
                  -(auVar150._0_4_ + fVar13 + auVar150._4_4_ + fVar15));
    *(undefined4 *)((long)puVar45 + 0x11c) = 0;
    *(float *)(puVar45 + 0x24) = fVar113;
    *(float *)((long)puVar45 + 0x124) = fVar112;
    *(float *)(puVar45 + 0x25) = fVar113 * fVar112;
    fVar112 = fVar112 - fVar113;
  }
  *(float *)((long)puVar45 + 300) = fVar112;
  *(long *)(*(long *)(*(long *)(lVar3 + 0x58) + 0x898) + (long)*(int *)(param_1[1] + 0x170) * 8) =
       param_1[1];
  return;
}


