/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001d4650; name: FUN_001d4650
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_001d4650(float *param_1,undefined8 *param_2,uint param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  undefined1 auVar17 [12];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  uint uVar20;
  undefined1 auVar21 [12];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  float fVar43;
  float fVar44;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar55 [16];
  float fVar60;
  undefined1 auVar56 [16];
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  float fVar65;
  byte bVar66;
  int iVar67;
  float fVar68;
  float fVar69;
  byte bVar70;
  int iVar71;
  float fVar72;
  float fVar73;
  byte bVar74;
  byte bVar75;
  byte bVar78;
  byte bVar79;
  int iVar76;
  float fVar77;
  byte bVar80;
  byte bVar81;
  byte bVar84;
  byte bVar85;
  int iVar82;
  float fVar83;
  byte bVar86;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  undefined1 uVar95;
  uint uVar96;
  undefined1 auVar97 [12];
  float fVar100;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  undefined8 uVar109;
  
  fVar43 = *(float *)(param_2 + 2);
  fVar27 = *(float *)((long)param_2 + 0x14);
  fVar48 = *(float *)(param_2 + 3);
  fVar50 = *(float *)((long)param_2 + 0x1c);
  fVar65 = (float)*param_2;
  auVar26._0_4_ = fVar43 - fVar65;
  fVar69 = (float)((ulong)*param_2 >> 0x20);
  auVar26._4_4_ = fVar27 - fVar69;
  fVar73 = (float)param_2[1];
  auVar26._8_4_ = fVar48 - fVar73;
  fVar100 = (float)((ulong)param_2[1] >> 0x20);
  auVar26._12_4_ = fVar50 - fVar100;
  fVar52 = *(float *)(param_2 + 4);
  fVar44 = *(float *)((long)param_2 + 0x24);
  fVar49 = *(float *)(param_2 + 5);
  fVar51 = *(float *)((long)param_2 + 0x2c);
  auVar45._0_4_ = fVar65 - fVar52;
  auVar45._4_4_ = fVar69 - fVar44;
  auVar45._8_4_ = fVar73 - fVar49;
  auVar45._12_4_ = fVar100 - fVar51;
  auVar25 = NEON_ext(auVar26,auVar26,4,1);
  auVar28 = NEON_ext(auVar45,auVar45,4,1);
  auVar88._0_4_ = auVar26._0_4_ * auVar28._0_4_ - auVar45._0_4_ * auVar25._0_4_;
  auVar88._4_4_ = auVar26._4_4_ * auVar28._4_4_ - auVar45._4_4_ * auVar25._4_4_;
  auVar88._8_4_ = auVar26._8_4_ * auVar45._0_4_ - auVar45._8_4_ * auVar26._0_4_;
  auVar88._12_4_ = auVar26._12_4_ * auVar45._4_4_ - auVar45._12_4_ * auVar26._4_4_;
  auVar45 = NEON_ext(auVar88,auVar88,4,1);
  fVar53 = *param_1;
  fVar54 = param_1[1];
  fVar57 = param_1[2];
  fVar58 = param_1[3];
  fVar7 = param_1[4];
  fVar8 = param_1[5];
  fVar9 = param_1[6];
  fVar29 = (float)*param_4;
  fVar60 = (float)((ulong)*param_4 >> 0x20);
  auVar25._0_4_ = fVar53 - fVar65;
  auVar25._4_4_ = fVar54 - fVar69;
  auVar25._8_4_ = fVar57 - fVar73;
  auVar25._12_4_ = fVar58 - fVar100;
  fVar89 = auVar25._0_4_ * auVar45._0_4_;
  fVar68 = auVar25._4_4_ * auVar45._4_4_;
  fVar15 = fVar89 + fVar68 + auVar25._8_4_ * auVar88._0_4_;
  bVar64 = (byte)((uint)(fVar89 + fVar68 + auVar25._8_4_ * auVar88._0_4_) >> 0x18);
  fVar89 = (auVar25._0_4_ + fVar29 * fVar7) * auVar45._0_4_ +
           (auVar25._4_4_ + fVar60 * fVar8) * auVar45._4_4_ +
           (auVar25._8_4_ + fVar29 * fVar9) * auVar88._0_4_;
  if (0.0 <= fVar15 * fVar89) {
    return 0;
  }
  auVar87._0_4_ = fVar52 - fVar43;
  auVar87._4_4_ = fVar44 - fVar27;
  auVar87._8_4_ = fVar49 - fVar48;
  auVar87._12_4_ = fVar51 - fVar50;
  fVar90 = fVar15 / (fVar15 - fVar89);
  fVar30 = (float)param_2[6];
  fVar89 = fVar65 - fVar30;
  fVar31 = (float)((ulong)param_2[6] >> 0x20);
  fVar68 = fVar69 - fVar31;
  uVar34 = SUB41(fVar68,0);
  uVar35 = (undefined1)((uint)fVar68 >> 8);
  uVar36 = (undefined1)((uint)fVar68 >> 0x10);
  uVar37 = (undefined1)((uint)fVar68 >> 0x18);
  fVar32 = (float)param_2[7];
  fVar68 = fVar73 - fVar32;
  uVar38 = (undefined1)((uint)fVar68 >> 8);
  uVar39 = (undefined1)((uint)fVar68 >> 0x10);
  uVar40 = (undefined1)((uint)fVar68 >> 0x18);
  fVar33 = (float)((ulong)param_2[7] >> 0x20);
  fVar72 = fVar100 - fVar33;
  uVar41 = (undefined1)((uint)fVar72 >> 8);
  uVar42 = (undefined1)((uint)fVar72 >> 0x10);
  uVar95 = (undefined1)((uint)fVar72 >> 0x18);
  auVar98._0_4_ = fVar30 - fVar52;
  auVar98._4_4_ = fVar31 - fVar44;
  auVar98._8_4_ = fVar32 - fVar49;
  auVar98._12_4_ = fVar33 - fVar51;
  bVar63 = (byte)((uint)fVar15 >> 0x18);
  bVar61 = bVar63 & 0x80;
  bVar62 = bVar64 & 0x80;
  bVar63 = bVar63 & 0x80;
  bVar64 = bVar64 & 0x80;
  auVar46._0_8_ =
       CONCAT17(bVar62 ^ auVar45[7],
                CONCAT16(auVar45[6],
                         CONCAT15(auVar45[5],
                                  CONCAT14(auVar45[4],CONCAT13(bVar61 ^ auVar45[3],auVar45._0_3_))))
               );
  auVar46[8] = SUB41(auVar88._0_4_,0);
  auVar46[9] = (undefined1)((uint)auVar88._0_4_ >> 8);
  auVar46[10] = (undefined1)((uint)auVar88._0_4_ >> 0x10);
  auVar46[0xb] = bVar63 ^ (byte)((uint)auVar88._0_4_ >> 0x18);
  auVar46[0xc] = SUB41(auVar88._4_4_,0);
  auVar46[0xd] = (undefined1)((uint)auVar88._4_4_ >> 8);
  auVar46[0xe] = (undefined1)((uint)auVar88._4_4_ >> 0x10);
  auVar46[0xf] = bVar64 ^ (byte)((uint)auVar88._4_4_ >> 0x18);
  param_5[1] = auVar46._8_8_;
  *param_5 = auVar46._0_8_;
  auVar45 = NEON_ext(auVar26,auVar26,8,1);
  auVar88 = NEON_ext(auVar87,auVar87,8,1);
  fVar11 = auVar45._0_4_;
  fVar13 = auVar88._0_4_;
  auVar88 = NEON_ext(auVar98,auVar98,8,1);
  auVar28[4] = uVar34;
  auVar28._0_4_ = fVar89;
  auVar28[5] = uVar35;
  auVar28[6] = uVar36;
  auVar28[7] = uVar37;
  auVar28[8] = SUB41(fVar68,0);
  auVar28[9] = uVar38;
  auVar28[10] = uVar39;
  auVar28[0xb] = uVar40;
  auVar28[0xc] = SUB41(fVar72,0);
  auVar28[0xd] = uVar41;
  auVar28[0xe] = uVar42;
  auVar28[0xf] = uVar95;
  auVar104[4] = uVar34;
  auVar104._0_4_ = fVar89;
  auVar104[5] = uVar35;
  auVar104[6] = uVar36;
  auVar104[7] = uVar37;
  auVar104[8] = SUB41(fVar68,0);
  auVar104[9] = uVar38;
  auVar104[10] = uVar39;
  auVar104[0xb] = uVar40;
  auVar104[0xc] = SUB41(fVar72,0);
  auVar104[0xd] = uVar41;
  auVar104[0xe] = uVar42;
  auVar104[0xf] = uVar95;
  auVar45 = NEON_ext(auVar28,auVar104,8,1);
  fVar59 = (float)(CONCAT17(uVar37,CONCAT16(uVar36,CONCAT15(uVar35,CONCAT14(uVar34,auVar98._4_4_))))
                  >> 0x20);
  fVar12 = auVar88._0_4_;
  fVar14 = auVar45._0_4_;
  fVar105 = fVar53 + fVar53;
  fVar106 = fVar54 + fVar54;
  fVar107 = fVar57 + fVar57;
  fVar108 = fVar58 + fVar58;
  auVar102._0_4_ = fVar105 - (fVar43 + fVar52);
  auVar102._4_4_ = fVar106 - (fVar27 + fVar44);
  auVar102._8_4_ = fVar107 - (fVar48 + fVar49);
  auVar102._12_4_ = fVar108 - (fVar50 + fVar51);
  auVar103._0_4_ = fVar105 - (fVar52 + fVar30);
  auVar103._4_4_ = fVar106 - (fVar44 + fVar31);
  auVar103._8_4_ = fVar107 - (fVar49 + fVar32);
  auVar103._12_4_ = fVar108 - (fVar51 + fVar33);
  fVar68 = fVar11 * fVar11 + auVar26._0_4_ * auVar26._0_4_ + auVar26._4_4_ * auVar26._4_4_;
  fVar72 = fVar13 * fVar13 + auVar87._0_4_ * auVar87._0_4_ + auVar87._4_4_ * auVar87._4_4_;
  fVar77 = fVar12 * fVar12 + auVar98._0_4_ * auVar98._0_4_ + auVar98._4_4_ * auVar98._4_4_;
  fVar83 = fVar14 * fVar14 + fVar89 * fVar89 + fVar59 * fVar59;
  auVar101._0_4_ = fVar105 - (fVar43 + fVar65);
  auVar101._4_4_ = fVar106 - (fVar27 + fVar69);
  auVar101._8_4_ = fVar107 - (fVar48 + fVar73);
  auVar101._12_4_ = fVar108 - (fVar50 + fVar100);
  fVar105 = fVar105 - (fVar65 + fVar30);
  fVar106 = fVar106 - (fVar69 + fVar31);
  fVar107 = fVar107 - (fVar73 + fVar32);
  fVar108 = fVar108 - (fVar100 + fVar33);
  iVar67 = -(uint)(fVar68 == 0.0);
  iVar71 = -(uint)(fVar72 == 0.0);
  iVar76 = -(uint)(fVar77 == 0.0);
  iVar82 = -(uint)(fVar83 == 0.0);
  *param_4 = CONCAT44(fVar60 * fVar90,fVar29 * fVar90);
  auVar4[4] = SUB41(fVar72,0);
  auVar4._0_4_ = fVar68;
  auVar4[5] = (char)((uint)fVar72 >> 8);
  auVar4[6] = (char)((uint)fVar72 >> 0x10);
  auVar4[7] = (char)((uint)fVar72 >> 0x18);
  auVar4[8] = SUB41(fVar77,0);
  auVar4[9] = (char)((uint)fVar77 >> 8);
  auVar4[10] = (char)((uint)fVar77 >> 0x10);
  auVar4[0xb] = (char)((uint)fVar77 >> 0x18);
  auVar4[0xc] = SUB41(fVar83,0);
  auVar4[0xd] = (char)((uint)fVar83 >> 8);
  auVar4[0xe] = (char)((uint)fVar83 >> 0x10);
  auVar4[0xf] = (char)((uint)fVar83 >> 0x18);
  auVar45 = NEON_frsqrte(auVar4,4);
  fVar91 = auVar45._0_4_;
  fVar68 = fVar91 * fVar68;
  fVar92 = auVar45._4_4_;
  fVar72 = fVar92 * fVar72;
  fVar93 = auVar45._8_4_;
  fVar77 = fVar93 * fVar77;
  fVar94 = auVar45._12_4_;
  fVar83 = fVar94 * fVar83;
  fVar60 = (float)CONCAT13((byte)((uint)fVar68 >> 0x18) & ~(byte)((uint)iVar67 >> 0x18),
                           CONCAT12((byte)((uint)fVar68 >> 0x10) & ~(byte)((uint)iVar67 >> 0x10),
                                    CONCAT11((byte)((uint)fVar68 >> 8) & ~(byte)((uint)iVar67 >> 8),
                                             SUB41(fVar68,0) & ~(byte)iVar67)));
  fVar65 = (float)CONCAT13((byte)((uint)fVar77 >> 0x18) & ~(byte)((uint)iVar76 >> 0x18),
                           CONCAT12((byte)((uint)fVar77 >> 0x10) & ~(byte)((uint)iVar76 >> 0x10),
                                    CONCAT11((byte)((uint)fVar77 >> 8) & ~(byte)((uint)iVar76 >> 8),
                                             SUB41(fVar77,0) & ~(byte)iVar76)));
  fVar69 = auVar25._8_4_ * auVar25._8_4_ +
           auVar25._0_4_ * auVar25._0_4_ + auVar25._4_4_ * auVar25._4_4_;
  fVar73 = auVar25._8_4_ * auVar25._8_4_ +
           auVar25._0_4_ * auVar25._0_4_ + auVar25._4_4_ * auVar25._4_4_;
  fVar68 = fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8;
  fVar29 = fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8;
  uVar109 = NEON_frsqrte(CONCAT17((char)((uint)fVar29 >> 0x18),
                                  CONCAT16((char)((uint)fVar29 >> 0x10),
                                           CONCAT15((char)((uint)fVar29 >> 8),
                                                    CONCAT14(SUB41(fVar29,0),fVar68)))),4);
  fVar68 = (float)uVar109 * fVar68;
  fVar29 = (float)((ulong)uVar109 >> 0x20) * fVar29;
  uVar109 = NEON_frsqrte(CONCAT44(fVar73,fVar69),4);
  fVar77 = (float)*(undefined8 *)PTR_DAT_043724a0 +
           (float)uVar109 * fVar69 * (float)*(undefined8 *)(PTR_DAT_04372370 + 0x260);
  fVar90 = (float)((ulong)*(undefined8 *)PTR_DAT_043724a0 >> 0x20) +
           (float)((ulong)uVar109 >> 0x20) * fVar73 *
           (float)((ulong)*(undefined8 *)(PTR_DAT_04372370 + 0x260) >> 0x20);
  fVar69 = fVar68 * fVar60 * (fVar77 + fVar77);
  fVar73 = fVar29 * (float)(CONCAT17((byte)((uint)fVar72 >> 0x18) & ~(byte)((uint)iVar71 >> 0x18),
                                     CONCAT16((byte)((uint)fVar72 >> 0x10) &
                                              ~(byte)((uint)iVar71 >> 0x10),
                                              CONCAT15((byte)((uint)fVar72 >> 8) &
                                                       ~(byte)((uint)iVar71 >> 8),
                                                       CONCAT14(SUB41(fVar72,0) & ~(byte)iVar71,
                                                                fVar60)))) >> 0x20) *
           (fVar90 + fVar90);
  fVar100 = fVar68 * fVar65 * (fVar77 + fVar77);
  fVar72 = (float)CONCAT13((char)((uint)fVar29 >> 0x18),
                           CONCAT12((char)((uint)fVar29 >> 0x10),
                                    (short)(CONCAT15((char)((uint)fVar29 >> 8),
                                                     CONCAT14(SUB41(fVar29,0),fVar68)) >> 0x20))) *
           (float)(CONCAT17((byte)((uint)fVar83 >> 0x18) & ~(byte)((uint)iVar82 >> 0x18),
                            CONCAT16((byte)((uint)fVar83 >> 0x10) & ~(byte)((uint)iVar82 >> 0x10),
                                     CONCAT15((byte)((uint)fVar83 >> 8) & ~(byte)((uint)iVar82 >> 8)
                                              ,CONCAT14(SUB41(fVar83,0) & ~(byte)iVar82,fVar65))))
                  >> 0x20) * (fVar90 + fVar90);
  auVar45 = NEON_ext(auVar101,auVar101,8,1);
  auVar88 = NEON_ext(auVar102,auVar102,8,1);
  auVar104 = NEON_ext(auVar103,auVar103,8,1);
  auVar5._4_4_ = fVar106;
  auVar5._0_4_ = fVar105;
  auVar5._8_4_ = fVar107;
  auVar5._12_4_ = fVar108;
  auVar6._4_4_ = fVar106;
  auVar6._0_4_ = fVar105;
  auVar6._8_4_ = fVar107;
  auVar6._12_4_ = fVar108;
  auVar28 = NEON_ext(auVar5,auVar6,8,1);
  fVar68 = auVar45._0_4_ * (auVar26._0_4_ * fVar8 - auVar26._4_4_ * fVar7) +
           auVar101._0_4_ * (auVar26._4_4_ * fVar9 - fVar11 * fVar8) +
           auVar101._4_4_ * (fVar11 * fVar7 - auVar26._0_4_ * fVar9);
  fVar29 = auVar88._0_4_ * (auVar87._0_4_ * fVar8 - auVar87._4_4_ * fVar7) +
           auVar102._0_4_ * (auVar87._4_4_ * fVar9 - fVar13 * fVar8) +
           auVar102._4_4_ * (fVar13 * fVar7 - auVar87._0_4_ * fVar9);
  fVar60 = auVar104._0_4_ * (auVar98._0_4_ * fVar8 - auVar98._4_4_ * fVar7) +
           auVar103._0_4_ * (auVar98._4_4_ * fVar9 - fVar12 * fVar8) +
           auVar103._4_4_ * (fVar12 * fVar7 - auVar98._0_4_ * fVar9);
  fVar65 = auVar28._0_4_ * (fVar89 * fVar8 - fVar59 * fVar7) +
           fVar105 * (fVar59 * fVar9 - fVar14 * fVar8) + fVar106 * (fVar14 * fVar7 - fVar89 * fVar9)
  ;
  iVar67 = -(uint)(fVar73 < fVar29);
  iVar71 = -(uint)(fVar100 < fVar60);
  iVar76 = -(uint)(fVar72 < fVar65);
  bVar66 = (byte)_DAT_03889700;
  uVar96 = (uint)(-(fVar69 < fVar68) & bVar66);
  bVar70 = (byte)((ulong)_DAT_03889700 >> 0x20);
  bVar74 = (byte)((ulong)_DAT_03889700 >> 0x38);
  auVar97._0_8_ =
       CONCAT17((byte)((uint)iVar67 >> 0x18) & bVar74,(uint7)CONCAT14((byte)iVar67 & bVar70,uVar96))
  ;
  bVar75 = (byte)_UNK_03889708;
  auVar97[8] = (byte)iVar71 & bVar75;
  bVar78 = (byte)((ulong)_UNK_03889708 >> 8);
  auVar97[9] = (byte)((uint)iVar71 >> 8) & bVar78;
  bVar79 = (byte)((ulong)_UNK_03889708 >> 0x10);
  auVar97[10] = (byte)((uint)iVar71 >> 0x10) & bVar79;
  bVar80 = (byte)((ulong)_UNK_03889708 >> 0x18);
  auVar97[0xb] = (byte)((uint)iVar71 >> 0x18) & bVar80;
  bVar81 = (byte)((ulong)_UNK_03889708 >> 0x20);
  auVar99[0xc] = (byte)iVar76 & bVar81;
  auVar99._0_12_ = auVar97;
  bVar84 = (byte)((ulong)_UNK_03889708 >> 0x28);
  auVar99[0xd] = (byte)((uint)iVar76 >> 8) & bVar84;
  bVar85 = (byte)((ulong)_UNK_03889708 >> 0x30);
  auVar99[0xe] = (byte)((uint)iVar76 >> 0x10) & bVar85;
  bVar86 = (byte)((ulong)_UNK_03889708 >> 0x38);
  auVar99[0xf] = (byte)((uint)iVar76 >> 0x18) & bVar86;
  uVar10 = 2;
  if (0.0 <= fVar15) {
    uVar10 = 1;
  }
  uVar10 = uVar10 & (param_3 ^ 3);
  fVar69 = 0.0 - fVar69;
  fVar73 = 0.0 - fVar73;
  fVar100 = 0.0 - fVar100;
  fVar72 = 0.0 - fVar72;
  uVar96 = (uVar10 >> (ulong)((byte)((-(fVar68 < fVar69) & bVar66) + (-(fVar29 < fVar73) & bVar70) +
                                    (-(fVar60 < fVar100) & bVar75) + (-(fVar65 < fVar72) & bVar81))
                             & 0x1f) |
           uVar10 >> (ulong)(uVar96 + (int)((ulong)auVar97._0_8_ >> 0x20) +
                             auVar97._8_4_ + auVar99._12_4_ & 0x1f)) & uVar10;
  if ((uVar96 != 0) &&
     (fVar72 <= (float)CONCAT13(bVar64 ^ (byte)((uint)fVar65 >> 0x18),SUB43(fVar65,0)) ||
      (fVar100 <= (float)CONCAT13(bVar63 ^ (byte)((uint)fVar60 >> 0x18),SUB43(fVar60,0)) ||
      (fVar69 <= (float)CONCAT13(bVar61 ^ (byte)((uint)fVar68 >> 0x18),SUB43(fVar68,0)) ||
      fVar73 <= (float)CONCAT13(bVar62 ^ (byte)((uint)fVar29 >> 0x18),SUB43(fVar29,0)))))) {
    fVar15 = fVar91 * auVar26._0_4_;
    fVar68 = fVar92 * auVar87._0_4_;
    uVar34 = (undefined1)((uint)fVar68 >> 8);
    uVar35 = (undefined1)((uint)fVar68 >> 0x10);
    uVar36 = (undefined1)((uint)fVar68 >> 0x18);
    fVar29 = fVar93 * auVar98._0_4_;
    uVar37 = (undefined1)((uint)fVar29 >> 8);
    uVar38 = (undefined1)((uint)fVar29 >> 0x10);
    uVar39 = (undefined1)((uint)fVar29 >> 0x18);
    fVar89 = fVar94 * fVar89;
    uVar40 = (undefined1)((uint)fVar89 >> 8);
    uVar41 = (undefined1)((uint)fVar89 >> 0x10);
    uVar42 = (undefined1)((uint)fVar89 >> 0x18);
    auVar47._0_4_ = fVar91 * auVar26._4_4_;
    auVar47._4_4_ = fVar92 * auVar87._4_4_;
    auVar47._8_4_ = fVar93 * auVar98._4_4_;
    auVar47._12_4_ = fVar94 * fVar59;
    auVar55._0_4_ = fVar91 * fVar11;
    auVar55._4_4_ = fVar92 * fVar13;
    auVar55._8_4_ = fVar93 * fVar12;
    auVar55._12_4_ = fVar94 * fVar14;
    auVar18._0_4_ = fVar53 - fVar43;
    auVar18._4_4_ = fVar54 - fVar27;
    auVar18._8_4_ = fVar57 - fVar48;
    auVar18._12_4_ = fVar58 - fVar50;
    auVar2[4] = SUB41(fVar68,0);
    auVar2._0_4_ = fVar15;
    auVar2[5] = uVar34;
    auVar2[6] = uVar35;
    auVar2[7] = uVar36;
    auVar2[8] = SUB41(fVar29,0);
    auVar2[9] = uVar37;
    auVar2[10] = uVar38;
    auVar2[0xb] = uVar39;
    auVar2[0xc] = SUB41(fVar89,0);
    auVar2[0xd] = uVar40;
    auVar2[0xe] = uVar41;
    auVar2[0xf] = uVar42;
    auVar3[4] = SUB41(fVar68,0);
    auVar3._0_4_ = fVar15;
    auVar3[5] = uVar34;
    auVar3[6] = uVar35;
    auVar3[7] = uVar36;
    auVar3[8] = SUB41(fVar29,0);
    auVar3[9] = uVar37;
    auVar3[10] = uVar38;
    auVar3[0xb] = uVar39;
    auVar3[0xc] = SUB41(fVar89,0);
    auVar3[0xd] = uVar40;
    auVar3[0xe] = uVar41;
    auVar3[0xf] = uVar42;
    auVar45 = NEON_ext(auVar2,auVar3,0xc,1);
    auVar22._0_4_ = fVar53 - fVar52;
    auVar22._4_4_ = fVar54 - fVar44;
    auVar22._8_4_ = fVar57 - fVar49;
    auVar22._12_4_ = fVar58 - fVar51;
    fVar15 = fVar15 + auVar45._0_4_;
    fVar68 = fVar68 + auVar45._4_4_;
    fVar29 = fVar29 + auVar45._8_4_;
    fVar89 = fVar89 + auVar45._12_4_;
    auVar45 = NEON_ext(auVar47,auVar47,0xc,1);
    auVar24._0_4_ = fVar53 - fVar30;
    auVar24._4_4_ = fVar54 - fVar31;
    auVar24._8_4_ = fVar57 - fVar32;
    auVar24._12_4_ = fVar58 - fVar33;
    fVar43 = auVar47._0_4_ + auVar45._0_4_;
    fVar48 = auVar47._4_4_ + auVar45._4_4_;
    fVar50 = auVar47._8_4_ + auVar45._8_4_;
    fVar52 = auVar47._12_4_ + auVar45._12_4_;
    auVar45 = NEON_ext(auVar55,auVar55,0xc,1);
    fVar54 = auVar55._0_4_ + auVar45._0_4_;
    fVar57 = auVar55._4_4_ + auVar45._4_4_;
    fVar58 = auVar55._8_4_ + auVar45._8_4_;
    fVar60 = auVar55._12_4_ + auVar45._12_4_;
    fVar44 = fVar8 * fVar15 - fVar7 * fVar43;
    fVar49 = fVar8 * fVar68 - fVar7 * fVar48;
    fVar51 = fVar8 * fVar29 - fVar7 * fVar50;
    fVar53 = fVar8 * fVar89 - fVar7 * fVar52;
    fVar27 = fVar9 * fVar43 - fVar8 * fVar54;
    fVar48 = fVar9 * fVar48 - fVar8 * fVar57;
    fVar50 = fVar9 * fVar50 - fVar8 * fVar58;
    fVar52 = fVar9 * fVar52 - fVar8 * fVar60;
    fVar15 = fVar7 * fVar54 - fVar9 * fVar15;
    fVar68 = fVar7 * fVar57 - fVar9 * fVar68;
    fVar43 = fVar7 * fVar58 - fVar9 * fVar29;
    fVar89 = fVar7 * fVar60 - fVar9 * fVar89;
    auVar56._0_4_ = fVar44 * fVar44 + fVar27 * fVar27 + fVar15 * fVar15;
    auVar56._4_4_ = fVar49 * fVar49 + fVar48 * fVar48 + fVar68 * fVar68;
    auVar56._8_4_ = fVar51 * fVar51 + fVar50 * fVar50 + fVar43 * fVar43;
    auVar56._12_4_ = fVar53 * fVar53 + fVar52 * fVar52 + fVar89 * fVar89;
    auVar26 = NEON_ext(auVar25,auVar25,8,1);
    auVar45 = NEON_ext(auVar18,auVar18,8,1);
    auVar88 = NEON_ext(auVar22,auVar22,8,1);
    auVar28 = NEON_ext(auVar24,auVar24,8,1);
    auVar104 = NEON_frsqrte(auVar56,4);
    fVar15 = (auVar26._0_4_ * fVar44 + auVar25._0_4_ * fVar27 + auVar25._4_4_ * fVar15) *
             auVar104._0_4_;
    fVar68 = (auVar45._0_4_ * fVar49 + auVar18._0_4_ * fVar48 + auVar18._4_4_ * fVar68) *
             auVar104._4_4_;
    fVar43 = (auVar88._0_4_ * fVar51 + auVar22._0_4_ * fVar50 + auVar22._4_4_ * fVar43) *
             auVar104._8_4_;
    fVar89 = (auVar28._0_4_ * fVar53 +
             auVar24._0_4_ * fVar52 +
             (float)(CONCAT17((char)((uint)auVar24._4_4_ >> 0x18),
                              CONCAT16((char)((uint)auVar24._4_4_ >> 0x10),
                                       CONCAT15((char)((uint)auVar24._4_4_ >> 8),
                                                CONCAT14(SUB41(auVar24._4_4_,0),auVar22._4_4_)))) >>
                    0x20) * fVar89) * auVar104._12_4_;
    iVar67 = -(uint)(fVar90 < fVar68);
    iVar71 = -(uint)(fVar77 < fVar43);
    iVar76 = -(uint)(fVar90 < fVar89);
    uVar20 = (uint)(-(fVar77 < fVar15) & bVar66);
    auVar21._0_8_ =
         CONCAT17((byte)((uint)iVar67 >> 0x18) & bVar74,
                  (uint7)CONCAT14((byte)iVar67 & bVar70,uVar20));
    auVar21[8] = (byte)iVar71 & bVar75;
    auVar21[9] = (byte)((uint)iVar71 >> 8) & bVar78;
    auVar21[10] = (byte)((uint)iVar71 >> 0x10) & bVar79;
    auVar21[0xb] = (byte)((uint)iVar71 >> 0x18) & bVar80;
    auVar23[0xc] = (byte)iVar76 & bVar81;
    auVar23._0_12_ = auVar21;
    auVar23[0xd] = (byte)((uint)iVar76 >> 8) & bVar84;
    auVar23[0xe] = (byte)((uint)iVar76 >> 0x10) & bVar85;
    auVar23[0xf] = (byte)((uint)iVar76 >> 0x18) & bVar86;
    iVar67 = -(uint)(fVar68 < 0.0 - fVar90);
    iVar71 = -(uint)(fVar43 < 0.0 - fVar77);
    iVar76 = -(uint)(fVar89 < 0.0 - fVar90);
    uVar16 = (uint)(-(fVar15 < 0.0 - fVar77) & bVar66);
    auVar17._0_8_ =
         CONCAT17((byte)((uint)iVar67 >> 0x18) & bVar74,
                  (uint7)CONCAT14((byte)iVar67 & bVar70,uVar16));
    auVar17[8] = (byte)iVar71 & bVar75;
    auVar17[9] = (byte)((uint)iVar71 >> 8) & bVar78;
    auVar17[10] = (byte)((uint)iVar71 >> 0x10) & bVar79;
    auVar17[0xb] = (byte)((uint)iVar71 >> 0x18) & bVar80;
    auVar19[0xc] = (byte)iVar76 & bVar81;
    auVar19._0_12_ = auVar17;
    auVar19[0xd] = (byte)((uint)iVar76 >> 8) & bVar84;
    auVar19[0xe] = (byte)((uint)iVar76 >> 0x10) & bVar85;
    auVar19[0xf] = (byte)((uint)iVar76 >> 0x18) & bVar86;
    uVar1 = 0;
    if (((uVar10 >> (ulong)(uVar16 + (int)((ulong)auVar17._0_8_ >> 0x20) +
                            auVar17._8_4_ + auVar19._12_4_ & 0x1f) |
         uVar10 >> (ulong)(uVar20 + (int)((ulong)auVar21._0_8_ >> 0x20) +
                           auVar21._8_4_ + auVar23._12_4_ & 0x1f)) & uVar10) != 0) {
      uVar1 = uVar96;
    }
    return uVar1;
  }
  return uVar96;
}


