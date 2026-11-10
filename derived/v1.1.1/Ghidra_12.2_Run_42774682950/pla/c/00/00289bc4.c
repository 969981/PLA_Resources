/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00289bc4; name: FUN_00289bc4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_00289bc4(undefined8 param_1,long param_2,uint param_3,undefined8 param_4,long param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
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
  undefined1 auVar28 [16];
  undefined8 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [12];
  undefined5 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  float *pfVar38;
  long lVar39;
  long lVar40;
  float *pfVar41;
  int iVar42;
  float fVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  byte bVar51;
  byte bVar58;
  byte bVar59;
  float fVar52;
  float fVar53;
  int iVar54;
  byte bVar60;
  byte bVar61;
  byte bVar64;
  byte bVar65;
  float fVar62;
  undefined8 uVar55;
  int iVar63;
  byte bVar66;
  byte bVar67;
  byte bVar70;
  byte bVar71;
  float fVar68;
  int iVar69;
  byte bVar72;
  byte bVar73;
  byte bVar76;
  byte bVar77;
  float fVar74;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  int iVar75;
  byte bVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  float fVar93;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  float fVar94;
  float fVar95;
  float fVar98;
  undefined8 uVar96;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  undefined1 auVar97 [16];
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  undefined8 uVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  undefined8 uVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  undefined8 uVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  undefined8 uVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  float fVar149;
  float fVar150;
  float fVar151;
  float fVar152;
  float fVar153;
  float fVar154;
  undefined8 uVar155;
  undefined8 uVar156;
  undefined8 uVar157;
  undefined8 uVar158;
  float fVar159;
  float fVar160;
  float fVar161;
  float fVar162;
  float fVar163;
  float fVar164;
  float fVar165;
  float fVar166;
  float fVar167;
  float fVar168;
  float fVar169;
  float fVar170;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined8 local_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined8 local_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if (param_3 != 3) {
    lVar39 = *(long *)(*(long *)(param_2 + 0x238) + (ulong)param_3 * 8 + 0x340);
    if (lVar39 != 0) {
      pfVar41 = *(float **)(*(long *)(param_2 + 0x238) + 0x338);
      FUN_00877958(param_1,*(undefined8 *)(lVar39 + 8),0x3f);
      fVar3 = pfVar41[0xc];
      fVar4 = pfVar41[0xd];
      fVar5 = pfVar41[0xe];
      fVar1 = pfVar41[5];
      fVar2 = pfVar41[6];
      fVar110 = pfVar41[0xb];
      fVar6 = pfVar41[7];
      fVar7 = pfVar41[4];
      if (pfVar41[0xf] == 0.0) {
        fVar9 = pfVar41[0x11];
        uStack_d8 = (ulong)(uint)pfVar41[0x12];
        local_e0 = CONCAT17((char)((uint)fVar9 >> 0x18),
                            CONCAT16((char)((uint)fVar9 >> 0x10),
                                     CONCAT15((char)((uint)fVar9 >> 8),
                                              *(undefined5 *)(pfVar41 + 0x10))));
        FUN_0027502c(&local_d0,&local_e0);
        fVar94 = (float)_DAT_03889a80;
        fVar98 = (float)((ulong)_DAT_03889a80 >> 0x20);
        fVar100 = (float)_UNK_03889a88;
        fVar101 = (float)((ulong)_UNK_03889a88 >> 0x20);
        fVar160 = (float)DAT_0388a148;
        fVar108 = (float)((ulong)DAT_0388a148 >> 0x20);
        fVar159 = (float)DAT_0388a140;
        fVar106 = (float)((ulong)DAT_0388a140 >> 0x20);
        fVar43 = (float)local_b0;
        fVar104 = (float)_DAT_03888d10;
        fVar105 = (float)((ulong)_DAT_03888d10 >> 0x20);
        fVar107 = (float)_UNK_03888d18;
        fVar111 = (float)((ulong)_UNK_03888d18 >> 0x20);
        fVar112 = (float)_DAT_0388a130;
        fVar113 = (float)((ulong)_DAT_0388a130 >> 0x20);
        fVar116 = (float)_UNK_0388a138;
        fVar117 = (float)((ulong)_UNK_0388a138 >> 0x20);
        fVar95 = (float)((ulong)local_b0 >> 0x20);
        fVar93 = (float)uStack_a8;
        fVar13 = (float)uStack_a0;
        fVar8 = (float)((ulong)uStack_a0 >> 0x20);
        fVar167 = (float)uStack_98;
        fVar52 = fVar94 * fStack_c0 + fVar159 * fStack_bc + fVar104 * fStack_b8 +
                 fVar112 * fStack_b4 + 0.0;
        fVar62 = fVar98 * fStack_c0 + fVar106 * fStack_bc + fVar105 * fStack_b8 +
                 fVar113 * fStack_b4 + 0.0;
        fVar68 = fVar100 * fStack_c0 + fVar160 * fStack_bc + fVar107 * fStack_b8 +
                 fVar116 * fStack_b4 + 0.0;
        fVar74 = fVar101 * fStack_c0 + fVar108 * fStack_bc + fVar111 * fStack_b8 +
                 fVar117 * fStack_b4 + 0.0;
        fVar11 = (float)((ulong)uStack_98 >> 0x20);
        auVar34 = *(undefined1 (*) [12])(pfVar41 + 8);
        fVar9 = auVar34._0_4_ +
                fVar94 * fVar13 + fVar159 * fVar8 + fVar104 * fVar167 + fVar112 * fVar11;
        fVar10 = auVar34._4_4_ +
                 fVar98 * fVar13 + fVar106 * fVar8 + fVar105 * fVar167 + fVar113 * fVar11;
        fVar12 = auVar34._8_4_ +
                 fVar100 * fVar13 + fVar160 * fVar8 + fVar107 * fVar167 + fVar116 * fVar11;
        fVar13 = fVar101 * fVar13 + fVar108 * fVar8 + fVar111 * fVar167 + fVar117 * fVar11 + 0.0;
        fVar8 = (float)((ulong)uStack_a8 >> 0x20);
        fVar114 = *(float *)(param_2 + 0x350);
        fVar115 = *(float *)(param_2 + 0x354);
        fVar53 = *(float *)(param_2 + 0x358);
        fVar99 = fVar94 * (float)local_d0 + fVar159 * local_d0._4_4_ + fVar104 * (float)uStack_c8 +
                 fVar112 * uStack_c8._4_4_ + 0.0;
        fVar168 = fVar98 * (float)local_d0 + fVar106 * local_d0._4_4_ + fVar105 * (float)uStack_c8 +
                  fVar113 * uStack_c8._4_4_ + 0.0;
        fVar102 = fVar100 * (float)local_d0 + fVar160 * local_d0._4_4_ + fVar107 * (float)uStack_c8
                  + fVar116 * uStack_c8._4_4_ + 0.0;
        fVar103 = fVar101 * (float)local_d0 + fVar108 * local_d0._4_4_ + fVar111 * (float)uStack_c8
                  + fVar117 * uStack_c8._4_4_ + 0.0;
        fVar94 = fVar94 * fVar43 + fVar159 * fVar95 + fVar104 * fVar93 + fVar112 * fVar8 + 0.0;
        fVar98 = fVar98 * fVar43 + fVar106 * fVar95 + fVar105 * fVar93 + fVar113 * fVar8 + 0.0;
        fVar100 = fVar100 * fVar43 + fVar160 * fVar95 + fVar107 * fVar93 + fVar116 * fVar8 + 0.0;
        fVar101 = fVar101 * fVar43 + fVar108 * fVar95 + fVar111 * fVar93 + fVar117 * fVar8 + 0.0;
        uVar15 = NEON_fmov(0x3f800000,4);
        fVar159 = (float)((ulong)uVar15 >> 0x20);
        fVar111 = (float)*(undefined8 *)(param_2 + 0x378);
        fVar8 = (float)*(undefined8 *)(param_2 + 0x340);
        fVar167 = (float)((ulong)*(undefined8 *)(param_2 + 0x340) >> 0x20);
        fVar11 = (float)*(undefined8 *)(param_2 + 0x348);
        fVar160 = (float)*(undefined8 *)(param_2 + 0x360);
        fVar108 = (float)((ulong)*(undefined8 *)(param_2 + 0x360) >> 0x20);
        fVar104 = (float)*(undefined8 *)(param_2 + 0x368);
        fVar105 = (float)*(undefined8 *)(param_2 + 0x370);
        fVar107 = (float)((ulong)*(undefined8 *)(param_2 + 0x370) >> 0x20);
        fVar106 = fVar11 * fVar99 + fVar53 * fVar168 + fVar104 * fVar102 + fVar111 * fVar103;
        fVar43 = fVar167 * fVar52 + fVar115 * fVar62 + fVar108 * fVar68 + fVar107 * fVar74;
        fVar95 = fVar11 * fVar52 + fVar53 * fVar62 + fVar104 * fVar68 + fVar111 * fVar74;
        fVar93 = fVar52 * 0.0 + fVar62 * 0.0 + fVar68 * 0.0 + fVar159 * fVar74;
        uStack_e8 = SUB41(fVar106,0);
        uStack_e7 = (undefined7)
                    (CONCAT44(fVar99 * 0.0 + fVar168 * 0.0 + fVar102 * 0.0 + fVar159 * fVar103,
                              fVar106) >> 8);
        local_f0 = CONCAT44(fVar167 * fVar99 + fVar115 * fVar168 + fVar108 * fVar102 +
                            fVar107 * fVar103,
                            fVar8 * fVar99 + fVar114 * fVar168 + fVar160 * fVar102 +
                            fVar105 * fVar103);
        local_120 = fVar8 * fVar9 + fVar114 * fVar10 + fVar160 * fVar12 + fVar105 * fVar13;
        fStack_11c = fVar167 * fVar9 + fVar115 * fVar10 + fVar108 * fVar12 + fVar107 * fVar13;
        fStack_118 = fVar11 * fVar9 + fVar53 * fVar10 + fVar104 * fVar12 + fVar111 * fVar13;
        fStack_114 = fVar9 * 0.0 + fVar10 * 0.0 + fVar12 * 0.0 + fVar159 * fVar13;
        uStack_108 = CONCAT44(fVar94 * 0.0 + fVar98 * 0.0 + fVar100 * 0.0 + fVar159 * fVar101,
                              fVar11 * fVar94 + fVar53 * fVar98 + fVar104 * fVar100 +
                              fVar111 * fVar101);
        local_110 = CONCAT44(fVar167 * fVar94 + fVar115 * fVar98 + fVar108 * fVar100 +
                             fVar107 * fVar101,
                             fVar8 * fVar94 + fVar114 * fVar98 + fVar160 * fVar100 +
                             fVar105 * fVar101);
        uStack_f8 = SUB41(fVar95,0);
        uStack_f7 = (undefined7)
                    (CONCAT17((char)((uint)fVar93 >> 0x18),
                              CONCAT16((char)((uint)fVar93 >> 0x10),
                                       CONCAT15((char)((uint)fVar93 >> 8),
                                                CONCAT14(SUB41(fVar93,0),fVar95)))) >> 8);
        local_100 = CONCAT17((char)((uint)fVar43 >> 0x18),
                             CONCAT16((char)((uint)fVar43 >> 0x10),
                                      CONCAT15((char)((uint)fVar43 >> 8),
                                               CONCAT14(SUB41(fVar43,0),
                                                        fVar8 * fVar52 + fVar114 * fVar62 +
                                                        fVar160 * fVar68 + fVar105 * fVar74))));
      }
      else {
        lVar40 = *(long *)(param_5 + 8);
        fVar11 = (float)_DAT_0388a130;
        fVar8 = *(float *)(lVar40 + 0x110) + fVar11;
        fVar95 = (float)((ulong)_DAT_0388a130 >> 0x20);
        fVar9 = *(float *)(lVar40 + 0x114) + fVar95;
        fVar99 = (float)_UNK_0388a138;
        fVar167 = *(float *)(lVar40 + 0x118) + fVar99;
        fVar102 = (float)((ulong)_UNK_0388a138 >> 0x20);
        fVar10 = fVar102 + 0.0;
        fStack_114 = (float)(CONCAT17((char)((uint)fVar10 >> 0x18),
                                      CONCAT16((char)((uint)fVar10 >> 0x10),
                                               CONCAT15((char)((uint)fVar10 >> 8),
                                                        CONCAT14(SUB41(fVar10,0),fVar167)))) >> 0x20
                            );
        fStack_11c = (float)(CONCAT17((char)((uint)fVar9 >> 0x18),
                                      CONCAT16((char)((uint)fVar9 >> 0x10),
                                               CONCAT15((char)((uint)fVar9 >> 8),
                                                        CONCAT14(SUB41(fVar9,0),fVar8)))) >> 0x20);
        fVar9 = pfVar41[0x11];
        uStack_d8 = (ulong)(uint)pfVar41[0x12];
        local_e0 = CONCAT17((char)((uint)fVar9 >> 0x18),
                            CONCAT16((char)((uint)fVar9 >> 0x10),
                                     CONCAT15((char)((uint)fVar9 >> 8),
                                              *(undefined5 *)(pfVar41 + 0x10))));
        FUN_0027502c(SUB41(pfVar41[0x10],0),ZEXT816(0),&local_d0,&local_e0);
        fVar9 = (float)_DAT_03889a80;
        fVar10 = (float)((ulong)_DAT_03889a80 >> 0x20);
        fVar12 = (float)_UNK_03889a88;
        fVar13 = (float)((ulong)_UNK_03889a88 >> 0x20);
        fVar62 = (float)DAT_0388a140;
        fVar68 = (float)((ulong)DAT_0388a140 >> 0x20);
        fVar74 = (float)DAT_0388a148;
        fVar94 = (float)((ulong)DAT_0388a148 >> 0x20);
        fVar43 = (float)_DAT_03888d10;
        fVar93 = (float)((ulong)_DAT_03888d10 >> 0x20);
        fVar168 = (float)_UNK_03888d18;
        fVar103 = (float)((ulong)_UNK_03888d18 >> 0x20);
        fVar98 = pfVar41[8];
        fVar160 = pfVar41[9];
        fVar108 = pfVar41[10];
        fVar114 = fVar9 * (float)local_d0 + fVar62 * local_d0._4_4_ + fVar43 * (float)uStack_c8 +
                  fVar11 * uStack_c8._4_4_ + 0.0;
        fVar115 = fVar10 * (float)local_d0 + fVar68 * local_d0._4_4_ + fVar93 * (float)uStack_c8 +
                  fVar95 * uStack_c8._4_4_ + 0.0;
        fVar53 = fVar12 * (float)local_d0 + fVar74 * local_d0._4_4_ + fVar168 * (float)uStack_c8 +
                 fVar99 * uStack_c8._4_4_ + 0.0;
        fVar52 = fVar13 * (float)local_d0 + fVar94 * local_d0._4_4_ + fVar103 * (float)uStack_c8 +
                 fVar102 * uStack_c8._4_4_ + 0.0;
        fVar120 = (float)uStack_a8;
        fVar121 = (float)((ulong)uStack_a8 >> 0x20);
        fVar117 = (float)local_b0;
        fVar118 = (float)((ulong)local_b0 >> 0x20);
        fVar111 = (float)uStack_a0;
        fVar112 = (float)((ulong)uStack_a0 >> 0x20);
        fVar113 = (float)uStack_98;
        fVar100 = fVar9 * fStack_c0 + fVar62 * fStack_bc + fVar43 * fStack_b8 + fVar11 * fStack_b4 +
                  0.0;
        fVar101 = fVar10 * fStack_c0 + fVar68 * fStack_bc + fVar93 * fStack_b8 + fVar95 * fStack_b4
                  + 0.0;
        fVar159 = fVar12 * fStack_c0 + fVar74 * fStack_bc + fVar168 * fStack_b8 + fVar99 * fStack_b4
                  + 0.0;
        fVar106 = fVar13 * fStack_c0 + fVar94 * fStack_bc + fVar103 * fStack_b8 +
                  fVar102 * fStack_b4 + 0.0;
        fVar116 = (float)((ulong)uStack_98 >> 0x20);
        fVar104 = fVar9 * fVar111 + fVar62 * fVar112 + fVar43 * fVar113 + fVar11 * fVar116 +
                  fVar98 * *(float *)(lVar40 + 0xc0) + fVar160 * *(float *)(lVar40 + 0xc4) +
                  fVar108 * *(float *)(lVar40 + 200);
        fVar105 = fVar10 * fVar111 + fVar68 * fVar112 + fVar93 * fVar113 + fVar95 * fVar116 +
                  fVar98 * *(float *)(lVar40 + 0xd0) + fVar160 * *(float *)(lVar40 + 0xd4) +
                  fVar108 * *(float *)(lVar40 + 0xd8);
        fVar107 = fVar12 * fVar111 + fVar74 * fVar112 + fVar168 * fVar113 + fVar99 * fVar116 +
                  fVar98 * *(float *)(lVar40 + 0xe0) + fVar160 * *(float *)(lVar40 + 0xe4) +
                  fVar108 * *(float *)(lVar40 + 0xe8);
        fVar111 = fVar13 * fVar111 + fVar94 * fVar112 + fVar103 * fVar113 + fVar102 * fVar116 + 0.0;
        fVar98 = fVar9 * fVar117 + fVar62 * fVar118 + fVar43 * fVar120 + fVar11 * fVar121 + 0.0;
        fVar160 = fVar10 * fVar117 + fVar68 * fVar118 + fVar93 * fVar120 + fVar95 * fVar121 + 0.0;
        fVar108 = fVar12 * fVar117 + fVar74 * fVar118 + fVar168 * fVar120 + fVar99 * fVar121 + 0.0;
        fVar102 = fVar13 * fVar117 + fVar94 * fVar118 + fVar103 * fVar120 + fVar102 * fVar121 + 0.0;
        local_f0 = CONCAT44(fVar10 * fVar114 + fVar68 * fVar115 + fVar93 * fVar53 +
                            fStack_11c * fVar52,
                            fVar9 * fVar114 + fVar62 * fVar115 + fVar43 * fVar53 + fVar8 * fVar52);
        fVar112 = fVar12 * fVar114 + fVar74 * fVar115 + fVar168 * fVar53 + fVar167 * fVar52;
        fVar11 = fVar10 * fVar100 + fVar68 * fVar101 + fVar93 * fVar159 + fStack_11c * fVar106;
        fVar95 = fVar12 * fVar100 + fVar74 * fVar101 + fVar168 * fVar159 + fVar167 * fVar106;
        fVar99 = fVar13 * fVar100 + fVar94 * fVar101 + fVar103 * fVar159 + fStack_114 * fVar106;
        uStack_e8 = SUB41(fVar112,0);
        uStack_e7 = (undefined7)
                    (CONCAT44(fVar13 * fVar114 + fVar94 * fVar115 + fVar103 * fVar53 +
                              fStack_114 * fVar52,fVar112) >> 8);
        local_110 = CONCAT44(fVar10 * fVar98 + fVar68 * fVar160 + fVar93 * fVar108 +
                             fStack_11c * fVar102,
                             fVar9 * fVar98 + fVar62 * fVar160 + fVar43 * fVar108 + fVar8 * fVar102)
        ;
        uStack_108 = CONCAT44(fVar13 * fVar98 + fVar94 * fVar160 + fVar103 * fVar108 +
                              fStack_114 * fVar102,
                              fVar12 * fVar98 + fVar74 * fVar160 + fVar168 * fVar108 +
                              fVar167 * fVar102);
        local_120 = fVar9 * fVar104 + fVar62 * fVar105 + fVar43 * fVar107 + fVar8 * fVar111;
        fVar10 = fVar10 * fVar104 + fVar68 * fVar105 + fVar93 * fVar107 + fStack_11c * fVar111;
        fStack_118 = fVar12 * fVar104 + fVar74 * fVar105 + fVar168 * fVar107 + fVar167 * fVar111;
        fVar12 = fVar13 * fVar104 + fVar94 * fVar105 + fVar103 * fVar107 + fStack_114 * fVar111;
        uStack_f8 = SUB41(fVar95,0);
        uStack_f7 = (undefined7)
                    (CONCAT17((char)((uint)fVar99 >> 0x18),
                              CONCAT16((char)((uint)fVar99 >> 0x10),
                                       CONCAT15((char)((uint)fVar99 >> 8),
                                                CONCAT14(SUB41(fVar99,0),fVar95)))) >> 8);
        local_100 = CONCAT17((char)((uint)fVar11 >> 0x18),
                             CONCAT16((char)((uint)fVar11 >> 0x10),
                                      CONCAT15((char)((uint)fVar11 >> 8),
                                               CONCAT14(SUB41(fVar11,0),
                                                        fVar9 * fVar100 + fVar62 * fVar101 +
                                                        fVar43 * fVar159 + fVar8 * fVar106))));
        fStack_114 = (float)(CONCAT17((char)((uint)fVar12 >> 0x18),
                                      CONCAT16((char)((uint)fVar12 >> 0x10),
                                               CONCAT15((char)((uint)fVar12 >> 8),
                                                        CONCAT14(SUB41(fVar12,0),fStack_118)))) >>
                            0x20);
        fStack_11c = (float)(CONCAT17((char)((uint)fVar10 >> 0x18),
                                      CONCAT16((char)((uint)fVar10 >> 0x10),
                                               CONCAT15((char)((uint)fVar10 >> 8),
                                                        CONCAT14(SUB41(fVar10,0),local_120)))) >>
                            0x20);
      }
      iVar42 = (int)(pfVar41[3] + 1.0);
      if (0 < iVar42) {
        fVar111 = 0.0;
        fVar112 = 0.0;
        fVar113 = 0.0;
        uVar87 = (undefined1)local_110;
        uVar88 = (undefined1)((ulong)local_110 >> 8);
        uVar89 = (undefined1)((ulong)local_110 >> 0x10);
        uVar90 = (undefined1)((ulong)local_110 >> 0x18);
        uVar36 = CONCAT13((char)((uint7)uStack_e7 >> 0x10),
                          CONCAT12((char)((uint7)uStack_e7 >> 8),CONCAT11((char)uStack_e7,uStack_e8)
                                  ));
        uVar46 = (undefined4)
                 (CONCAT17((char)((uint7)uStack_e7 >> 0x30),
                           CONCAT16((char)((uint7)uStack_e7 >> 0x28),
                                    CONCAT15((char)((uint7)uStack_e7 >> 0x20),
                                             CONCAT14((char)((uint7)uStack_e7 >> 0x18),uVar36)))) >>
                 0x20);
        uVar49 = (undefined4)uStack_108;
        uVar50 = (undefined4)((ulong)uStack_108 >> 0x20);
        uVar37 = CONCAT13((char)((uint7)uStack_f7 >> 0x10),
                          CONCAT12((char)((uint7)uStack_f7 >> 8),CONCAT11((char)uStack_f7,uStack_f8)
                                  ));
        uVar47 = (undefined4)
                 (CONCAT17((char)((uint7)uStack_f7 >> 0x30),
                           CONCAT16((char)((uint7)uStack_f7 >> 0x28),
                                    CONCAT15((char)((uint7)uStack_f7 >> 0x20),
                                             CONCAT14((char)((uint7)uStack_f7 >> 0x18),uVar37)))) >>
                 0x20);
        uVar44 = (undefined4)((ulong)local_100 >> 0x20);
        uVar35 = CONCAT14((char)((ulong)local_f0 >> 0x38),
                          CONCAT13((char)((ulong)local_f0 >> 0x30),
                                   CONCAT12((char)((ulong)local_f0 >> 0x28),
                                            CONCAT11((char)((ulong)local_f0 >> 0x20),uVar90))));
        uVar45 = (undefined4)((uint5)uVar35 >> 8);
        uVar48 = (undefined4)
                 (CONCAT18((char)((ulong)local_110 >> 0x38),
                           CONCAT17((char)((ulong)local_110 >> 0x30),
                                    CONCAT16((char)((ulong)local_110 >> 0x28),
                                             CONCAT15((char)((ulong)local_110 >> 0x20),uVar35)))) >>
                 0x28);
        auVar19._4_4_ = uVar37;
        auVar19._0_4_ = uVar36;
        auVar19._8_4_ = uVar49;
        auVar19._12_4_ = fStack_118;
        uVar119 = a64_TBL(ZEXT816(0),auVar19,DAT_0388a580);
        auVar20._4_4_ = uVar37;
        auVar20._0_4_ = uVar36;
        auVar20._8_4_ = uVar49;
        auVar20._12_4_ = fStack_118;
        uVar155 = a64_TBL(ZEXT816(0),auVar20,DAT_0388a6b0);
        auVar22._4_4_ = uVar47;
        auVar22._0_4_ = uVar46;
        auVar22._8_4_ = uVar50;
        auVar22._12_4_ = fStack_114;
        uVar141 = a64_TBL(ZEXT816(0),auVar22,DAT_0388a580);
        auVar23._4_4_ = uVar47;
        auVar23._0_4_ = uVar46;
        auVar23._8_4_ = uVar50;
        auVar23._12_4_ = fStack_114;
        uVar157 = a64_TBL(ZEXT816(0),auVar23,DAT_0388a6b0);
        auVar16._4_4_ = uVar44;
        auVar16._0_4_ = uVar45;
        auVar16._8_4_ = uVar48;
        auVar16._12_4_ = fStack_11c;
        uVar96 = a64_TBL(ZEXT816(0),auVar16,DAT_0388a5e0);
        uVar79 = (undefined1)local_100;
        uVar80 = (undefined1)((ulong)local_100 >> 8);
        uVar81 = (undefined1)((ulong)local_100 >> 0x10);
        uVar82 = (undefined1)((ulong)local_100 >> 0x18);
        uVar83 = SUB41(local_120,0);
        uVar84 = (undefined1)((uint)local_120 >> 8);
        uVar85 = (undefined1)((uint)local_120 >> 0x10);
        uVar86 = (undefined1)((uint)local_120 >> 0x18);
        uVar15 = NEON_ext(CONCAT44(uVar37,uVar36),CONCAT44(uVar37,uVar36),4,1);
        fVar108 = (float)uVar15;
        fVar104 = (float)((ulong)uVar15 >> 0x20);
        uVar55 = NEON_ext(CONCAT44(uVar44,uVar45),CONCAT44(uVar44,uVar45),4,1);
        auVar21._4_4_ = uVar37;
        auVar21._0_4_ = uVar36;
        auVar21._8_4_ = uVar49;
        auVar21._12_4_ = fStack_118;
        uVar109 = a64_TBL(ZEXT816(0),auVar21,DAT_0388a5e0);
        auVar24._4_4_ = uVar47;
        auVar24._0_4_ = uVar46;
        auVar24._8_4_ = uVar50;
        auVar24._12_4_ = fStack_114;
        uVar15 = a64_TBL(ZEXT816(0),auVar24,DAT_0388a5e0);
        fVar129 = (float)uVar15;
        fVar130 = (float)((ulong)uVar15 >> 0x20);
        uVar132 = NEON_ext(CONCAT44(uVar47,uVar46),CONCAT44(uVar47,uVar46),4,1);
        fVar167 = (float)local_f0;
        auVar56[4] = uVar79;
        auVar56._0_4_ = fVar167;
        auVar56[5] = uVar80;
        auVar56[6] = uVar81;
        auVar56[7] = uVar82;
        auVar56[8] = uVar87;
        auVar56[9] = uVar88;
        auVar56[10] = uVar89;
        auVar56[0xb] = uVar90;
        auVar56[0xc] = uVar83;
        auVar56[0xd] = uVar84;
        auVar56[0xe] = uVar85;
        auVar56[0xf] = uVar86;
        uVar15 = a64_TBL(ZEXT816(0),auVar56,DAT_0388a5e0);
        auVar27._4_4_ = uVar44;
        auVar27._0_4_ = uVar45;
        auVar27._8_4_ = uVar45;
        auVar27._12_4_ = uVar44;
        uVar158 = a64_TBL(ZEXT816(0),auVar27,DAT_0388a888);
        auVar28._4_4_ = uVar44;
        auVar28._0_4_ = uVar45;
        auVar28._8_4_ = uVar45;
        auVar28._12_4_ = uVar44;
        uVar29 = a64_TBL(ZEXT816(0),auVar28,DAT_0388a648);
        auVar30._4_4_ = uVar37;
        auVar30._0_4_ = uVar36;
        auVar30._8_4_ = uVar36;
        auVar30._12_4_ = uVar37;
        uVar156 = a64_TBL(ZEXT816(0),auVar30,DAT_0388a888);
        fVar145 = (float)uVar156;
        fVar149 = (float)((ulong)uVar156 >> 0x20);
        auVar31._4_4_ = uVar37;
        auVar31._0_4_ = uVar36;
        auVar31._8_4_ = uVar36;
        auVar31._12_4_ = uVar37;
        uVar156 = a64_TBL(ZEXT816(0),auVar31,DAT_0388a648);
        fVar146 = (float)uVar156;
        fVar150 = (float)((ulong)uVar156 >> 0x20);
        auVar25._4_4_ = uVar47;
        auVar25._0_4_ = uVar46;
        auVar25._8_4_ = uVar46;
        auVar25._12_4_ = uVar47;
        uVar156 = a64_TBL(ZEXT816(0),auVar25,DAT_0388a648);
        fVar147 = (float)uVar156;
        fVar151 = (float)((ulong)uVar156 >> 0x20);
        auVar26._4_4_ = uVar47;
        auVar26._0_4_ = uVar46;
        auVar26._8_4_ = uVar46;
        auVar26._12_4_ = uVar47;
        uVar156 = a64_TBL(ZEXT816(0),auVar26,DAT_0388a888);
        fVar134 = (float)uVar156;
        fVar136 = (float)((ulong)uVar156 >> 0x20);
        fVar140 = (float)uVar141;
        fVar142 = (float)((ulong)uVar141 >> 0x20);
        fVar143 = (float)uVar157;
        fVar144 = (float)((ulong)uVar157 >> 0x20);
        fVar105 = (float)uVar109;
        fVar107 = (float)((ulong)uVar109 >> 0x20);
        fVar118 = (float)uVar119;
        fVar120 = (float)((ulong)uVar119 >> 0x20);
        fVar121 = (float)uVar155;
        fVar122 = (float)((ulong)uVar155 >> 0x20);
        fVar131 = (float)uVar132;
        fVar133 = (float)((ulong)uVar132 >> 0x20);
        fVar135 = fVar105 * fVar140 - fVar118 * fVar129;
        fVar137 = fVar107 * fVar142 - fVar120 * fVar130;
        fVar138 = fVar146 * fVar143 - fVar121 * fVar147;
        fVar139 = fVar150 * fVar144 - fVar122 * fVar151;
        fVar148 = fVar108 * fVar140 - fVar131 * fVar118;
        fVar152 = fVar104 * fVar142 - fVar133 * fVar120;
        fVar153 = fVar145 * fVar143 - fVar134 * fVar121;
        fVar154 = fVar149 * fVar144 - fVar136 * fVar122;
        auVar17._4_4_ = uVar44;
        auVar17._0_4_ = uVar45;
        auVar17._8_4_ = uVar48;
        auVar17._12_4_ = fStack_11c;
        uVar156 = a64_TBL(ZEXT816(0),auVar17,DAT_0388a580);
        fVar74 = (float)uVar156;
        fVar98 = (float)((ulong)uVar156 >> 0x20);
        auVar18._4_4_ = uVar44;
        auVar18._0_4_ = uVar45;
        auVar18._8_4_ = uVar48;
        auVar18._12_4_ = fStack_11c;
        uVar156 = a64_TBL(ZEXT816(0),auVar18,DAT_0388a6b0);
        fVar101 = (float)uVar156;
        fVar106 = (float)((ulong)uVar156 >> 0x20);
        auVar97[4] = uVar79;
        auVar97._0_4_ = fVar167;
        auVar97[5] = uVar80;
        auVar97[6] = uVar81;
        auVar97[7] = uVar82;
        auVar97[8] = uVar87;
        auVar97[9] = uVar88;
        auVar97[10] = uVar89;
        auVar97[0xb] = uVar90;
        auVar97[0xc] = uVar83;
        auVar97[0xd] = uVar84;
        auVar97[0xe] = uVar85;
        auVar97[0xf] = uVar86;
        uVar109 = a64_TBL(ZEXT816(0),auVar97,DAT_0388a6b0);
        auVar14[4] = uVar79;
        auVar14._0_4_ = fVar167;
        auVar14[5] = uVar80;
        auVar14[6] = uVar81;
        auVar14[7] = uVar82;
        auVar14[8] = uVar87;
        auVar14[9] = uVar88;
        auVar14[10] = uVar89;
        auVar14[0xb] = uVar90;
        auVar14[0xc] = uVar83;
        auVar14[0xd] = uVar84;
        auVar14[0xe] = uVar85;
        auVar14[0xf] = uVar86;
        uVar119 = a64_TBL(ZEXT816(0),auVar14,DAT_0388a580);
        uVar156 = NEON_ext(CONCAT17(uVar82,CONCAT16(uVar81,CONCAT15(uVar80,CONCAT14(uVar79,fVar167))
                                                   )),
                           CONCAT17(uVar82,CONCAT16(uVar81,CONCAT15(uVar80,CONCAT14(uVar79,fVar167))
                                                   )),4,1);
        fVar123 = (float)uVar156;
        fVar124 = (float)((ulong)uVar156 >> 0x20);
        fVar161 = fVar108 * fVar129 - fVar131 * fVar105;
        fVar162 = fVar104 * fVar130 - fVar133 * fVar107;
        fVar163 = fVar145 * fVar147 - fVar134 * fVar146;
        fVar164 = fVar149 * fVar151 - fVar136 * fVar150;
        fVar8 = (float)uVar55;
        fVar11 = (float)((ulong)uVar55 >> 0x20);
        fVar43 = (float)uVar158;
        fVar93 = (float)((ulong)uVar158 >> 0x20);
        fVar95 = (float)uVar96;
        fVar99 = (float)((ulong)uVar96 >> 0x20);
        fVar102 = (float)uVar29;
        fVar103 = (float)((ulong)uVar29 >> 0x20);
        auVar91[4] = uVar79;
        auVar91._0_4_ = fVar167;
        auVar91[5] = uVar80;
        auVar91[6] = uVar81;
        auVar91[7] = uVar82;
        auVar91[0xc] = uVar79;
        auVar91._8_4_ = fVar167;
        auVar91[0xd] = uVar80;
        auVar91[0xe] = uVar81;
        auVar91[0xf] = uVar82;
        uVar156 = a64_TBL(ZEXT816(0),auVar91,DAT_0388a888);
        uVar55 = a64_TBL(ZEXT816(0),auVar91,DAT_0388a648);
        fVar126 = (float)uVar156;
        fVar127 = (float)((ulong)uVar156 >> 0x20);
        fVar94 = ((fVar8 * fVar135 - fVar95 * fVar148) + fVar161 * fVar74) * (float)_DAT_03889f60;
        fVar165 = (float)((ulong)_DAT_03889f60 >> 0x20);
        fVar100 = ((fVar11 * fVar137 - fVar99 * fVar152) + fVar162 * fVar98) * fVar165;
        fVar159 = ((fVar43 * fVar138 - fVar102 * fVar153) + fVar163 * fVar101) *
                  (float)_UNK_03889f68;
        fVar166 = (float)((ulong)_UNK_03889f68 >> 0x20);
        fVar160 = ((fVar93 * fVar139 - fVar103 * fVar154) + fVar164 * fVar106) * fVar166;
        fVar114 = (float)uVar119;
        fVar115 = (float)((ulong)uVar119 >> 0x20);
        fVar116 = (float)uVar109;
        fVar117 = (float)((ulong)uVar109 >> 0x20);
        fVar167 = fVar167 * fVar94;
        fVar168 = (float)local_100 * fVar100;
        fVar169 = (float)local_110 * fVar159;
        fVar170 = local_120 * fVar160;
        fVar9 = (float)uVar15;
        fVar10 = (float)((ulong)uVar15 >> 0x20);
        fVar12 = (float)uVar55;
        fVar13 = (float)((ulong)uVar55 >> 0x20);
        fVar53 = fVar9 * fVar74 - fVar114 * fVar95;
        fVar52 = fVar10 * fVar98 - fVar115 * fVar99;
        fVar62 = fVar12 * fVar101 - fVar116 * fVar102;
        fVar68 = fVar13 * fVar106 - fVar117 * fVar103;
        fVar74 = fVar123 * fVar74 - fVar114 * fVar8;
        fVar98 = fVar124 * fVar98 - fVar115 * fVar11;
        fVar101 = fVar126 * fVar101 - fVar116 * fVar43;
        fVar106 = fVar127 * fVar106 - fVar117 * fVar93;
        fVar128 = (float)((ulong)_UNK_0388a458 >> 0x20);
        fVar125 = (float)((ulong)_DAT_0388a450 >> 0x20);
        fVar8 = fVar123 * fVar95 - fVar8 * fVar9;
        fVar11 = fVar124 * fVar99 - fVar11 * fVar10;
        fVar95 = fVar126 * fVar102 - fVar43 * fVar12;
        fVar99 = fVar127 * fVar103 - fVar93 * fVar13;
        auVar32._4_4_ = fVar168;
        auVar32._0_4_ = fVar167;
        auVar32._8_4_ = fVar169;
        auVar32._12_4_ = fVar170;
        auVar33._4_4_ = fVar168;
        auVar33._0_4_ = fVar167;
        auVar33._8_4_ = fVar169;
        auVar33._12_4_ = fVar170;
        auVar56 = NEON_ext(auVar32,auVar33,8,1);
        fVar167 = auVar56._0_4_ + fVar167;
        fVar168 = auVar56._4_4_ + fVar168;
        fVar43 = fVar167 + fVar168;
        fVar167 = fVar167 + fVar168;
        auVar57._8_8_ = CONCAT44(fVar167,fVar43);
        auVar57._0_8_ = CONCAT44(fVar167,fVar43);
        auVar56 = NEON_frecpe(auVar57,4);
        auVar97 = NEON_frecps(auVar56,auVar57,4);
        auVar92._0_4_ = auVar56._0_4_ * auVar97._0_4_;
        auVar92._4_4_ = auVar56._4_4_ * auVar97._4_4_;
        auVar92._8_4_ = auVar56._8_4_ * auVar97._8_4_;
        auVar92._12_4_ = auVar56._12_4_ * auVar97._12_4_;
        auVar56 = NEON_frecps(auVar92,auVar57,4);
        iVar54 = -(uint)(fVar43 == 0.0);
        iVar63 = -(uint)(fVar167 == 0.0);
        iVar69 = -(uint)(fVar43 == 0.0);
        iVar75 = -(uint)(fVar167 == 0.0);
        bVar51 = ~(byte)iVar54;
        bVar58 = ~(byte)((uint)iVar54 >> 8);
        bVar59 = ~(byte)((uint)iVar54 >> 0x10);
        bVar60 = ~(byte)((uint)iVar54 >> 0x18);
        bVar61 = ~(byte)iVar63;
        bVar64 = ~(byte)((uint)iVar63 >> 8);
        bVar65 = ~(byte)((uint)iVar63 >> 0x10);
        bVar66 = ~(byte)((uint)iVar63 >> 0x18);
        bVar67 = ~(byte)iVar69;
        bVar70 = ~(byte)((uint)iVar69 >> 8);
        bVar71 = ~(byte)((uint)iVar69 >> 0x10);
        bVar72 = ~(byte)((uint)iVar69 >> 0x18);
        bVar73 = ~(byte)iVar75;
        bVar76 = ~(byte)((uint)iVar75 >> 8);
        bVar77 = ~(byte)((uint)iVar75 >> 0x10);
        bVar78 = ~(byte)((uint)iVar75 >> 0x18);
        fVar167 = auVar92._0_4_ * auVar56._0_4_;
        fVar43 = auVar92._4_4_ * auVar56._4_4_;
        fVar93 = auVar92._8_4_ * auVar56._8_4_;
        fVar168 = auVar92._12_4_ * auVar56._12_4_;
        fVar94 = fVar167 * fVar94;
        fVar100 = fVar43 * fVar100;
        fVar159 = fVar93 * fVar159;
        fVar160 = fVar168 * fVar160;
        fVar9 = fVar167 * ((fVar123 * fVar135 - fVar9 * fVar148) + fVar161 * fVar114) *
                          (float)_DAT_0388a450;
        fVar10 = fVar43 * ((fVar124 * fVar137 - fVar10 * fVar152) + fVar162 * fVar115) * fVar125;
        fVar12 = fVar93 * ((fVar126 * fVar138 - fVar12 * fVar153) + fVar163 * fVar116) *
                          (float)_UNK_0388a458;
        fVar13 = fVar168 * ((fVar127 * fVar139 - fVar13 * fVar154) + fVar164 * fVar117) * fVar128;
        fVar102 = ((fVar131 * fVar53 - fVar129 * fVar74) + fVar8 * fVar140) * (float)_DAT_03889f60 *
                  fVar167;
        fVar103 = ((fVar133 * fVar52 - fVar130 * fVar98) + fVar11 * fVar142) * fVar165 * fVar43;
        fVar114 = ((fVar134 * fVar62 - fVar147 * fVar101) + fVar95 * fVar143) * (float)_UNK_03889f68
                  * fVar93;
        fVar115 = ((fVar136 * fVar68 - fVar151 * fVar106) + fVar99 * fVar144) * fVar166 * fVar168;
        fVar167 = ((fVar108 * fVar53 - fVar105 * fVar74) + fVar8 * fVar118) * (float)_DAT_0388a450 *
                  fVar167;
        fVar43 = ((fVar104 * fVar52 - fVar107 * fVar98) + fVar11 * fVar120) * fVar125 * fVar43;
        fVar93 = ((fVar145 * fVar62 - fVar146 * fVar101) + fVar95 * fVar121) * (float)_UNK_0388a458
                 * fVar93;
        fVar168 = ((fVar149 * fVar68 - fVar150 * fVar106) + fVar99 * fVar122) * fVar128 * fVar168;
        do {
          local_d0 = 0;
          uStack_c8 = 0;
          pfVar38 = (float *)FUN_0028cb08(*(undefined8 *)(param_5 + 0x30),&local_d0,0xc0);
          if (pfVar38 == (float *)0x0) {
            return 1;
          }
          *pfVar38 = fVar113;
          pfVar38[1] = fVar112;
          pfVar38[2] = fVar111;
          pfVar38[3] = pfVar41[0xf];
          pfVar38[4] = fVar3;
          pfVar38[5] = fVar4;
          pfVar38[6] = fVar5;
          pfVar38[7] = 0.0;
          pfVar38[0x2c] = fVar7;
          pfVar38[0x2d] = fVar1;
          pfVar38[0x29] = fVar6;
          pfVar38[0x2e] = fVar2;
          pfVar38[0x2f] = 0.0;
          pfVar38[0x28] = (float)(int)fVar110;
          *(ulong *)(pfVar38 + 10) = CONCAT71(uStack_e7,uStack_e8);
          *(undefined8 *)(pfVar38 + 8) = local_f0;
          pfVar38[0x2a] = 0.0;
          pfVar38[0x2b] = 0.0;
          *(ulong *)(pfVar38 + 0xe) = CONCAT71(uStack_f7,uStack_f8);
          *(undefined8 *)(pfVar38 + 0xc) = local_100;
          *(undefined8 *)(pfVar38 + 0x12) = uStack_108;
          *(undefined8 *)(pfVar38 + 0x10) = local_110;
          *(ulong *)(pfVar38 + 0x16) = CONCAT44(fStack_114,fStack_118);
          *(ulong *)(pfVar38 + 0x14) = CONCAT44(fStack_11c,local_120);
          *(ulong *)(pfVar38 + 0x1a) =
               CONCAT17((byte)((uint)fVar160 >> 0x18) & bVar78,
                        CONCAT16((byte)((uint)fVar160 >> 0x10) & bVar77,
                                 CONCAT15((byte)((uint)fVar160 >> 8) & bVar76,
                                          CONCAT14(SUB41(fVar160,0) & bVar73,
                                                   CONCAT13((byte)((uint)fVar159 >> 0x18) & bVar72,
                                                            CONCAT12((byte)((uint)fVar159 >> 0x10) &
                                                                     bVar71,CONCAT11((byte)((uint)
                                                  fVar159 >> 8) & bVar70,SUB41(fVar159,0) & bVar67))
                                                  )))));
          *(ulong *)(pfVar38 + 0x18) =
               CONCAT17((byte)((uint)fVar100 >> 0x18) & bVar66,
                        CONCAT16((byte)((uint)fVar100 >> 0x10) & bVar65,
                                 CONCAT15((byte)((uint)fVar100 >> 8) & bVar64,
                                          CONCAT14(SUB41(fVar100,0) & bVar61,
                                                   CONCAT13((byte)((uint)fVar94 >> 0x18) & bVar60,
                                                            CONCAT12((byte)((uint)fVar94 >> 0x10) &
                                                                     bVar59,CONCAT11((byte)((uint)
                                                  fVar94 >> 8) & bVar58,SUB41(fVar94,0) & bVar51))))
                                         )));
          *(ulong *)(pfVar38 + 0x1e) =
               CONCAT17((byte)((uint)fVar13 >> 0x18) & bVar78,
                        CONCAT16((byte)((uint)fVar13 >> 0x10) & bVar77,
                                 CONCAT15((byte)((uint)fVar13 >> 8) & bVar76,
                                          CONCAT14(SUB41(fVar13,0) & bVar73,
                                                   CONCAT13((byte)((uint)fVar12 >> 0x18) & bVar72,
                                                            CONCAT12((byte)((uint)fVar12 >> 0x10) &
                                                                     bVar71,CONCAT11((byte)((uint)
                                                  fVar12 >> 8) & bVar70,SUB41(fVar12,0) & bVar67))))
                                         )));
          *(ulong *)(pfVar38 + 0x1c) =
               CONCAT17((byte)((uint)fVar10 >> 0x18) & bVar66,
                        CONCAT16((byte)((uint)fVar10 >> 0x10) & bVar65,
                                 CONCAT15((byte)((uint)fVar10 >> 8) & bVar64,
                                          CONCAT14(SUB41(fVar10,0) & bVar61,
                                                   CONCAT13((byte)((uint)fVar9 >> 0x18) & bVar60,
                                                            CONCAT12((byte)((uint)fVar9 >> 0x10) &
                                                                     bVar59,CONCAT11((byte)((uint)
                                                  fVar9 >> 8) & bVar58,SUB41(fVar9,0) & bVar51))))))
                       );
          *(ulong *)(pfVar38 + 0x22) =
               CONCAT17((byte)((uint)fVar115 >> 0x18) & bVar78,
                        CONCAT16((byte)((uint)fVar115 >> 0x10) & bVar77,
                                 CONCAT15((byte)((uint)fVar115 >> 8) & bVar76,
                                          CONCAT14(SUB41(fVar115,0) & bVar73,
                                                   CONCAT13((byte)((uint)fVar114 >> 0x18) & bVar72,
                                                            CONCAT12((byte)((uint)fVar114 >> 0x10) &
                                                                     bVar71,CONCAT11((byte)((uint)
                                                  fVar114 >> 8) & bVar70,SUB41(fVar114,0) & bVar67))
                                                  )))));
          *(ulong *)(pfVar38 + 0x20) =
               CONCAT17((byte)((uint)fVar103 >> 0x18) & bVar66,
                        CONCAT16((byte)((uint)fVar103 >> 0x10) & bVar65,
                                 CONCAT15((byte)((uint)fVar103 >> 8) & bVar64,
                                          CONCAT14(SUB41(fVar103,0) & bVar61,
                                                   CONCAT13((byte)((uint)fVar102 >> 0x18) & bVar60,
                                                            CONCAT12((byte)((uint)fVar102 >> 0x10) &
                                                                     bVar59,CONCAT11((byte)((uint)
                                                  fVar102 >> 8) & bVar58,SUB41(fVar102,0) & bVar51))
                                                  )))));
          *(ulong *)(pfVar38 + 0x26) =
               CONCAT17((byte)((uint)fVar168 >> 0x18) & bVar78,
                        CONCAT16((byte)((uint)fVar168 >> 0x10) & bVar77,
                                 CONCAT15((byte)((uint)fVar168 >> 8) & bVar76,
                                          CONCAT14(SUB41(fVar168,0) & bVar73,
                                                   CONCAT13((byte)((uint)fVar93 >> 0x18) & bVar72,
                                                            CONCAT12((byte)((uint)fVar93 >> 0x10) &
                                                                     bVar71,CONCAT11((byte)((uint)
                                                  fVar93 >> 8) & bVar70,SUB41(fVar93,0) & bVar67))))
                                         )));
          *(ulong *)(pfVar38 + 0x24) =
               CONCAT17((byte)((uint)fVar43 >> 0x18) & bVar66,
                        CONCAT16((byte)((uint)fVar43 >> 0x10) & bVar65,
                                 CONCAT15((byte)((uint)fVar43 >> 8) & bVar64,
                                          CONCAT14(SUB41(fVar43,0) & bVar61,
                                                   CONCAT13((byte)((uint)fVar167 >> 0x18) & bVar60,
                                                            CONCAT12((byte)((uint)fVar167 >> 0x10) &
                                                                     bVar59,CONCAT11((byte)((uint)
                                                  fVar167 >> 8) & bVar58,SUB41(fVar167,0) & bVar51))
                                                  )))));
          iVar54 = *(int *)(lVar39 + 0x148);
          if (*(int *)(lVar39 + 0x144) != -1) {
            FUN_00878324(param_1,*(int *)(lVar39 + 0x144),0,&local_d0,0xc0);
          }
          if (iVar54 != -1) {
            FUN_00878324(param_1,iVar54,4,&local_d0,0xc0);
          }
          FUN_0027dbd0(*(undefined8 *)(param_2 + 0x98),param_1,param_2,lVar39,param_4,param_5);
          fVar112 = fVar112 + pfVar41[1];
          fVar113 = fVar113 + *pfVar41;
          fVar111 = fVar111 + pfVar41[2];
          iVar42 = iVar42 + -1;
        } while (iVar42 != 0);
      }
      return 1;
    }
  }
  FUN_00271760(param_2,0x80);
  return 0;
}


