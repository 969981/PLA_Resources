/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a99ec8; name: FUN_00a99ec8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a99ec8(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  undefined5 uVar19;
  undefined5 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined8 uVar26;
  long lVar27;
  float fVar28;
  undefined4 uVar29;
  uint uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar44;
  undefined8 uVar42;
  float fVar45;
  undefined1 auVar43 [16];
  undefined8 uVar46;
  float fVar48;
  undefined1 auVar47 [16];
  float fVar49;
  float fVar50;
  undefined8 uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar60 [16];
  undefined1 auVar59 [16];
  undefined1 auVar58 [16];
  undefined1 auVar57 [16];
  byte bVar61;
  undefined1 uVar62;
  byte bVar63;
  undefined1 uVar64;
  byte bVar65;
  undefined1 uVar66;
  byte bVar67;
  undefined1 uVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  int iVar81;
  float fVar82;
  int iVar86;
  undefined8 uVar83;
  int iVar87;
  undefined1 auVar84 [16];
  int iVar88;
  undefined1 auVar85 [16];
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  undefined8 uVar105;
  undefined8 uVar106;
  float fVar108;
  undefined1 auVar107 [16];
  float fVar109;
  float fVar110;
  undefined4 uVar111;
  undefined4 uVar112;
  float fVar113;
  float fVar114;
  undefined8 uVar115;
  undefined1 auVar116 [16];
  float fVar127;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar122 [16];
  undefined1 auVar121 [16];
  undefined1 auVar120 [16];
  undefined1 auVar119 [16];
  undefined1 auVar126 [16];
  undefined1 auVar125 [16];
  undefined1 auVar124 [16];
  undefined1 auVar123 [16];
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined8 local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  long *local_90;
  undefined1 *local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  
  FUN_00aad37c(&local_60,*(undefined8 *)(param_1 + 0x68),0);
  FUN_00aad37c(&local_68,*(undefined8 *)(param_1 + 0x68),1);
  uVar22 = DAT_0388a880;
  uVar106 = DAT_0388a6f0;
  uVar21 = DAT_0388a6d8;
  uVar51 = DAT_0388a680;
  uVar46 = DAT_0388a148;
  uVar42 = DAT_0388a140;
  fVar35 = (float)local_68[0x1a] - *(float *)(local_60 + 0x1a);
  fVar114 = (float)local_68[0x1b] - *(float *)(local_60 + 0x1b);
  fVar40 = (float)((ulong)local_68[0x1b] >> 0x20) - *(float *)((long)local_60 + 0xdc);
  auVar43._0_4_ = fVar35 * fVar35;
  auVar43._4_4_ = 0;
  auVar43._8_4_ = fVar114 * fVar114;
  auVar43._12_4_ = fVar40 * fVar40;
  auVar47 = NEON_ext(auVar43,auVar43,8,1);
  fVar41 = auVar47._0_4_ + auVar43._0_4_;
  fVar44 = auVar47._4_4_ + 0.0;
  fVar28 = fVar41 + fVar44;
  fVar41 = fVar41 + fVar44;
  auVar84._8_8_ = CONCAT44(fVar41,fVar28);
  auVar84._0_8_ = CONCAT44(fVar41,fVar28);
  auVar47 = NEON_frsqrte(auVar84,4);
  auVar54._0_4_ = auVar47._0_4_ * fVar28;
  auVar54._4_4_ = auVar47._4_4_ * fVar41;
  auVar54._8_4_ = auVar47._8_4_ * fVar28;
  auVar54._12_4_ = auVar47._12_4_ * fVar41;
  auVar55 = NEON_frsqrts(auVar47,auVar54,4);
  fVar44 = auVar47._0_4_ * auVar55._0_4_;
  fVar34 = auVar47._4_4_ * auVar55._4_4_;
  fVar38 = auVar47._8_4_ * auVar55._8_4_;
  fVar39 = auVar47._12_4_ * auVar55._12_4_;
  auVar56._8_8_ = DAT_0388a148;
  auVar56._0_8_ = DAT_0388a140;
  auVar107._0_4_ = fVar28 * fVar44;
  auVar107._4_4_ = fVar41 * fVar34;
  auVar107._8_4_ = fVar28 * fVar38;
  auVar107._12_4_ = fVar41 * fVar39;
  iVar81 = -(uint)(fVar28 == 0.0);
  iVar86 = -(uint)(fVar41 == 0.0);
  iVar87 = -(uint)(fVar28 == 0.0);
  iVar88 = -(uint)(fVar41 == 0.0);
  auVar10[4] = SUB41(fVar34,0);
  auVar10._0_4_ = fVar44;
  auVar10[5] = (char)((uint)fVar34 >> 8);
  auVar10[6] = (char)((uint)fVar34 >> 0x10);
  auVar10[7] = (char)((uint)fVar34 >> 0x18);
  auVar10[8] = SUB41(fVar38,0);
  auVar10[9] = (char)((uint)fVar38 >> 8);
  auVar10[10] = (char)((uint)fVar38 >> 0x10);
  auVar10[0xb] = (char)((uint)fVar38 >> 0x18);
  auVar10[0xc] = SUB41(fVar39,0);
  auVar10[0xd] = (char)((uint)fVar39 >> 8);
  auVar10[0xe] = (char)((uint)fVar39 >> 0x10);
  auVar10[0xf] = (char)((uint)fVar39 >> 0x18);
  auVar47 = NEON_frsqrts(auVar10,auVar107,4);
  uVar13 = a64_TBL(ZEXT816(0),auVar56,DAT_0388a680);
  fVar28 = (float)((ulong)uVar13 >> 0x20);
  uVar105 = a64_TBL(ZEXT816(0),auVar56,DAT_0388a880);
  fVar35 = fVar35 * fVar44 * auVar47._0_4_;
  fVar44 = fVar34 * auVar47._4_4_ * 0.0;
  fVar114 = fVar114 * fVar38 * auVar47._8_4_;
  fVar40 = fVar40 * fVar39 * auVar47._12_4_;
  uVar26 = a64_TBL(ZEXT816(0),auVar56,DAT_0388a6f0);
  uVar12 = a64_TBL(ZEXT816(0),auVar56,DAT_0388a6d8);
  bVar61 = SUB41(fVar35,0) & ~(byte)iVar81;
  bVar63 = (byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar81 >> 8);
  bVar65 = (byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar81 >> 0x10);
  bVar67 = (byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar81 >> 0x18);
  bVar69 = SUB41(fVar44,0) & ~(byte)iVar86;
  bVar70 = (byte)((uint)fVar44 >> 8) & ~(byte)((uint)iVar86 >> 8);
  bVar71 = (byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar86 >> 0x10);
  bVar72 = (byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar86 >> 0x18);
  bVar73 = SUB41(fVar114,0) & ~(byte)iVar87;
  bVar74 = (byte)((uint)fVar114 >> 8) & ~(byte)((uint)iVar87 >> 8);
  bVar75 = (byte)((uint)fVar114 >> 0x10) & ~(byte)((uint)iVar87 >> 0x10);
  bVar76 = (byte)((uint)fVar114 >> 0x18) & ~(byte)((uint)iVar87 >> 0x18);
  bVar77 = SUB41(fVar40,0) & ~(byte)iVar88;
  bVar78 = (byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar88 >> 8);
  bVar79 = (byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar88 >> 0x10);
  bVar80 = (byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar88 >> 0x18);
  auVar47[1] = bVar63;
  auVar47[0] = bVar61;
  auVar47[2] = bVar65;
  auVar47[3] = bVar67;
  auVar47[4] = bVar69;
  auVar47[5] = bVar70;
  auVar47[6] = bVar71;
  auVar47[7] = bVar72;
  auVar47[8] = bVar73;
  auVar47[9] = bVar74;
  auVar47[10] = bVar75;
  auVar47[0xb] = bVar76;
  auVar47[0xc] = bVar77;
  auVar47[0xd] = bVar78;
  auVar47[0xe] = bVar79;
  auVar47[0xf] = bVar80;
  uVar83 = a64_TBL(ZEXT816(0),auVar47,DAT_0388a880);
  auVar55[1] = bVar63;
  auVar55[0] = bVar61;
  auVar55[2] = bVar65;
  auVar55[3] = bVar67;
  auVar55[4] = bVar69;
  auVar55[5] = bVar70;
  auVar55[6] = bVar71;
  auVar55[7] = bVar72;
  auVar55[8] = bVar73;
  auVar55[9] = bVar74;
  auVar55[10] = bVar75;
  auVar55[0xb] = bVar76;
  auVar55[0xc] = bVar77;
  auVar55[0xd] = bVar78;
  auVar55[0xe] = bVar79;
  auVar55[0xf] = bVar80;
  uVar18 = a64_TBL(ZEXT816(0),auVar55,DAT_0388a6f0);
  fVar39 = (float)((ulong)uVar18 >> 0x20);
  auVar5[1] = bVar63;
  auVar5[0] = bVar61;
  auVar5[2] = bVar65;
  auVar5[3] = bVar67;
  auVar5[4] = bVar69;
  auVar5[5] = bVar70;
  auVar5[6] = bVar71;
  auVar5[7] = bVar72;
  auVar5[8] = bVar73;
  auVar5[9] = bVar74;
  auVar5[10] = bVar75;
  auVar5[0xb] = bVar76;
  auVar5[0xc] = bVar77;
  auVar5[0xd] = bVar78;
  auVar5[0xe] = bVar79;
  auVar5[0xf] = bVar80;
  uVar37 = a64_TBL(ZEXT816(0),auVar5,DAT_0388a680);
  fVar41 = (float)((ulong)uVar37 >> 0x20);
  auVar6[1] = bVar63;
  auVar6[0] = bVar61;
  auVar6[2] = bVar65;
  auVar6[3] = bVar67;
  auVar6[4] = bVar69;
  auVar6[5] = bVar70;
  auVar6[6] = bVar71;
  auVar6[7] = bVar72;
  auVar6[8] = bVar73;
  auVar6[9] = bVar74;
  auVar6[10] = bVar75;
  auVar6[0xb] = bVar76;
  auVar6[0xc] = bVar77;
  auVar6[0xd] = bVar78;
  auVar6[0xe] = bVar79;
  auVar6[0xf] = bVar80;
  uVar115 = a64_TBL(ZEXT816(0),auVar6,DAT_0388a6d8);
  fVar40 = (float)((ulong)uVar83 >> 0x20);
  fVar45 = (float)((ulong)uVar115 >> 0x20);
  fVar35 = (float)((ulong)uVar12 >> 0x20);
  uVar111 = (undefined4)_UNK_03888d18;
  uVar112 = (undefined4)((ulong)_UNK_03888d18 >> 0x20);
  *(undefined8 *)(param_1 + 0xa8) = DAT_0388a148;
  *(undefined8 *)(param_1 + 0xa0) = uVar42;
  *(ulong *)(param_1 + 0xb8) =
       CONCAT17(bVar80,CONCAT16(bVar79,CONCAT15(bVar78,CONCAT14(bVar77,CONCAT13(bVar76,CONCAT12(
                                                  bVar75,CONCAT11(bVar74,bVar73)))))));
  *(ulong *)(param_1 + 0xb0) =
       CONCAT17(bVar72,CONCAT16(bVar71,CONCAT15(bVar70,CONCAT14(bVar69,CONCAT13(bVar67,CONCAT12(
                                                  bVar65,CONCAT11(bVar63,bVar61)))))));
  fVar34 = (float)((ulong)uVar105 >> 0x20);
  fVar38 = (float)((ulong)uVar26 >> 0x20);
  fVar128 = (float)uVar83 * (float)uVar13 - (float)uVar37 * (float)uVar105;
  fVar129 = fVar40 * fVar28 - fVar41 * fVar34;
  fVar130 = (float)uVar18 * (float)uVar12 - (float)uVar115 * (float)uVar26;
  fVar131 = fVar39 * fVar35 - fVar45 * fVar38;
  auVar116._0_4_ = fVar128 * fVar128;
  auVar116._4_4_ = fVar129 * fVar129;
  auVar116._8_4_ = fVar130 * fVar130;
  auVar116._12_4_ = fVar131 * fVar131;
  auVar47 = NEON_ext(auVar116,auVar116,8,1);
  fVar114 = auVar47._0_4_ + auVar116._0_4_;
  fVar127 = auVar47._4_4_ + auVar116._4_4_;
  fVar44 = fVar114 + fVar127;
  fVar114 = fVar114 + fVar127;
  auVar117._8_8_ = CONCAT44(fVar114,fVar44);
  auVar117._0_8_ = CONCAT44(fVar114,fVar44);
  auVar47 = NEON_frsqrte(auVar117,4);
  iVar81 = -(uint)(fVar44 == 0.0);
  iVar86 = -(uint)(fVar114 == 0.0);
  iVar87 = -(uint)(fVar44 == 0.0);
  iVar88 = -(uint)(fVar114 == 0.0);
  auVar133._0_4_ = auVar47._0_4_ * fVar44;
  auVar133._4_4_ = auVar47._4_4_ * fVar114;
  auVar133._8_4_ = auVar47._8_4_ * fVar44;
  auVar133._12_4_ = auVar47._12_4_ * fVar114;
  auVar55 = NEON_frsqrts(auVar47,auVar133,4);
  auVar132._0_4_ = auVar47._0_4_ * auVar55._0_4_;
  auVar132._4_4_ = auVar47._4_4_ * auVar55._4_4_;
  auVar132._8_4_ = auVar47._8_4_ * auVar55._8_4_;
  auVar132._12_4_ = auVar47._12_4_ * auVar55._12_4_;
  auVar134._0_4_ = fVar44 * auVar132._0_4_;
  auVar134._4_4_ = fVar114 * auVar132._4_4_;
  auVar134._8_4_ = fVar44 * auVar132._8_4_;
  auVar134._12_4_ = fVar114 * auVar132._12_4_;
  auVar47 = NEON_frsqrts(auVar132,auVar134,4);
  auVar118._0_4_ = fVar128 * auVar132._0_4_ * auVar47._0_4_;
  auVar118._4_4_ = fVar129 * auVar132._4_4_ * auVar47._4_4_;
  auVar118._8_4_ = fVar130 * auVar132._8_4_ * auVar47._8_4_;
  auVar118._12_4_ = fVar131 * auVar132._12_4_ * auVar47._12_4_;
  bVar89 = SUB41(auVar118._0_4_,0) & ~(byte)iVar81;
  bVar90 = (byte)((uint)auVar118._0_4_ >> 8) & ~(byte)((uint)iVar81 >> 8);
  bVar91 = (byte)((uint)auVar118._0_4_ >> 0x10) & ~(byte)((uint)iVar81 >> 0x10);
  bVar92 = (byte)((uint)auVar118._0_4_ >> 0x18) & ~(byte)((uint)iVar81 >> 0x18);
  bVar93 = SUB41(auVar118._4_4_,0) & ~(byte)iVar86;
  bVar94 = (byte)((uint)auVar118._4_4_ >> 8) & ~(byte)((uint)iVar86 >> 8);
  bVar95 = (byte)((uint)auVar118._4_4_ >> 0x10) & ~(byte)((uint)iVar86 >> 0x10);
  bVar96 = (byte)((uint)auVar118._4_4_ >> 0x18) & ~(byte)((uint)iVar86 >> 0x18);
  bVar97 = SUB41(auVar118._8_4_,0) & ~(byte)iVar87;
  bVar98 = (byte)((uint)auVar118._8_4_ >> 8) & ~(byte)((uint)iVar87 >> 8);
  bVar99 = (byte)((uint)auVar118._8_4_ >> 0x10) & ~(byte)((uint)iVar87 >> 0x10);
  bVar100 = (byte)((uint)auVar118._8_4_ >> 0x18) & ~(byte)((uint)iVar87 >> 0x18);
  bVar101 = SUB41(auVar118._12_4_,0) & ~(byte)iVar88;
  bVar102 = (byte)((uint)auVar118._12_4_ >> 8) & ~(byte)((uint)iVar88 >> 8);
  bVar103 = (byte)((uint)auVar118._12_4_ >> 0x10) & ~(byte)((uint)iVar88 >> 0x10);
  bVar104 = (byte)((uint)auVar118._12_4_ >> 0x18) & ~(byte)((uint)iVar88 >> 0x18);
  uVar19 = CONCAT14(bVar76,CONCAT13(bVar75,CONCAT12(bVar74,CONCAT11(bVar73,bVar72))));
  uVar20 = CONCAT14(bVar100,CONCAT13(bVar99,CONCAT12(bVar98,CONCAT11(bVar97,bVar96))));
  uVar30 = (uint)((uint5)uVar20 >> 8);
  auVar119._4_12_ = auVar118._4_12_;
  auVar119._0_4_ = uVar30;
  auVar121._0_8_ = auVar119._0_8_;
  auVar121._8_4_ =
       (int)(CONCAT18(bVar104,CONCAT17(bVar103,CONCAT16(bVar102,CONCAT15(bVar101,uVar20)))) >> 0x28)
  ;
  auVar121._12_4_ = auVar118._12_4_;
  uVar32 = (undefined4)((uint5)uVar19 >> 8);
  auVar120._8_8_ = auVar121._8_8_;
  auVar120._4_4_ = uVar32;
  auVar120._0_4_ = uVar30;
  uVar33 = (undefined4)
           (CONCAT18(bVar80,CONCAT17(bVar79,CONCAT16(bVar78,CONCAT15(bVar77,uVar19)))) >> 0x28);
  auVar122._0_12_ = auVar120._0_12_;
  auVar122._12_4_ = uVar33;
  uVar36 = CONCAT13(bVar67,CONCAT12(bVar65,CONCAT11(bVar63,bVar61)));
  uVar11 = CONCAT13(bVar92,CONCAT12(bVar91,CONCAT11(bVar90,bVar89)));
  uVar29 = (undefined4)
           (CONCAT17(bVar96,CONCAT16(bVar95,CONCAT15(bVar94,CONCAT14(bVar93,uVar11)))) >> 0x20);
  uVar31 = (undefined4)
           (CONCAT17(bVar72,CONCAT16(bVar71,CONCAT15(bVar70,CONCAT14(bVar69,uVar36)))) >> 0x20);
  auVar85._0_4_ =
       (float)uVar37 *
       (float)uVar105 * (float)CONCAT13(bVar92,CONCAT12(bVar91,CONCAT11(bVar90,bVar89))) -
       (float)uVar83 *
       (float)uVar13 * (float)CONCAT13(bVar92,CONCAT12(bVar91,CONCAT11(bVar90,bVar89)));
  auVar85._4_4_ =
       fVar41 * fVar34 * (float)CONCAT13(bVar96,CONCAT12(bVar95,CONCAT11(bVar94,bVar93))) -
       fVar40 * fVar28 * (float)CONCAT13(bVar96,CONCAT12(bVar95,CONCAT11(bVar94,bVar93)));
  auVar85._8_4_ =
       (float)uVar115 *
       (float)uVar26 * (float)CONCAT13(bVar100,CONCAT12(bVar99,CONCAT11(bVar98,bVar97))) -
       (float)uVar18 *
       (float)uVar12 * (float)CONCAT13(bVar100,CONCAT12(bVar99,CONCAT11(bVar98,bVar97)));
  auVar85._12_4_ =
       fVar45 * fVar38 * (float)CONCAT13(bVar104,CONCAT12(bVar103,CONCAT11(bVar102,bVar101))) -
       fVar39 * fVar35 * (float)CONCAT13(bVar104,CONCAT12(bVar103,CONCAT11(bVar102,bVar101)));
  auVar47 = NEON_ext(auVar85,auVar85,8,1);
  auVar123._4_12_ = auVar122._4_12_;
  auVar123._0_4_ = uVar30;
  auVar125._0_8_ = auVar123._0_8_;
  auVar125._8_4_ = uVar32;
  auVar125._12_4_ = uVar33;
  auVar124._8_8_ = auVar125._8_8_;
  auVar124._4_4_ = 0;
  auVar124._0_4_ = uVar30;
  auVar126._0_12_ = auVar124._0_12_;
  auVar126._12_4_ = 0;
  uVar105 = a64_TBL(ZEXT816(0),auVar126,uVar51);
  uVar115 = a64_TBL(ZEXT816(0),auVar126,uVar21);
  auVar14._4_4_ = uVar111;
  auVar14._0_4_ = uVar29;
  auVar14._8_4_ = uVar31;
  auVar14._12_4_ = uVar112;
  uVar83 = a64_TBL(ZEXT816(0),auVar14,uVar106);
  *(ulong *)(param_1 + 0x98) =
       CONCAT17(bVar104,CONCAT16(bVar103,CONCAT15(bVar102,CONCAT14(bVar101,CONCAT13(bVar100,CONCAT12
                                                  (bVar99,CONCAT11(bVar98,bVar97)))))));
  *(ulong *)(param_1 + 0x90) =
       CONCAT17(bVar96,CONCAT16(bVar95,CONCAT15(bVar94,CONCAT14(bVar93,CONCAT13(bVar92,CONCAT12(
                                                  bVar91,CONCAT11(bVar90,bVar89)))))));
  auVar57._4_12_ = auVar56._4_12_;
  auVar57._0_4_ = uVar11;
  auVar59._12_4_ = (undefined4)((ulong)uVar46 >> 0x20);
  auVar59._0_8_ = auVar57._0_8_;
  auVar59._8_4_ = uVar36;
  auVar58._8_8_ = auVar59._8_8_;
  auVar58._4_4_ = 0;
  auVar58._0_4_ = uVar11;
  auVar60._0_12_ = auVar58._0_12_;
  auVar60._12_4_ = 0;
  uVar26 = a64_TBL(ZEXT816(0),auVar126,uVar22);
  uVar12 = a64_TBL(ZEXT816(0),auVar126,uVar106);
  auVar15._4_4_ = uVar111;
  auVar15._0_4_ = uVar29;
  auVar15._8_4_ = uVar31;
  auVar15._12_4_ = uVar112;
  uVar18 = a64_TBL(ZEXT816(0),auVar15,uVar51);
  fVar113 = (float)((ulong)uVar18 >> 0x20);
  uVar46 = a64_TBL(ZEXT816(0),auVar60,uVar51);
  uVar42 = a64_TBL(ZEXT816(0),auVar60,uVar106);
  auVar16._4_4_ = uVar111;
  auVar16._0_4_ = uVar29;
  auVar16._8_4_ = uVar31;
  auVar16._12_4_ = uVar112;
  uVar106 = a64_TBL(ZEXT816(0),auVar16,uVar22);
  auVar17._4_4_ = uVar111;
  auVar17._0_4_ = uVar29;
  auVar17._8_4_ = uVar31;
  auVar17._12_4_ = uVar112;
  uVar13 = a64_TBL(ZEXT816(0),auVar17,uVar21);
  fVar110 = (float)((ulong)uVar13 >> 0x20);
  uVar51 = a64_TBL(ZEXT816(0),auVar60,uVar21);
  uVar37 = a64_TBL(ZEXT816(0),auVar60,uVar22);
  fVar82 = auVar85._0_4_ + auVar85._4_4_ + auVar47._0_4_ + auVar47._4_4_;
  uVar62 = SUB41(fVar82,0);
  uVar64 = (undefined1)((uint)fVar82 >> 8);
  uVar66 = (undefined1)((uint)fVar82 >> 0x10);
  uVar68 = (undefined1)((uint)fVar82 >> 0x18);
  fVar130 = (float)((ulong)uVar46 >> 0x20);
  fVar35 = (float)((ulong)uVar26 >> 0x20);
  fVar49 = (float)((ulong)uVar51 >> 0x20);
  fVar44 = (float)((ulong)uVar12 >> 0x20);
  fVar114 = (float)((ulong)uVar37 >> 0x20);
  fVar131 = (float)((ulong)uVar105 >> 0x20);
  fVar40 = (float)((ulong)uVar42 >> 0x20);
  fVar50 = (float)((ulong)uVar115 >> 0x20);
  auVar7[4] = uVar62;
  auVar7._0_4_ = fVar82;
  auVar7[5] = uVar64;
  auVar7[6] = uVar66;
  auVar7[7] = uVar68;
  auVar7[8] = uVar62;
  auVar7[9] = uVar64;
  auVar7[10] = uVar66;
  auVar7[0xb] = uVar68;
  auVar7[0xc] = uVar62;
  auVar7[0xd] = uVar64;
  auVar7[0xe] = uVar66;
  auVar7[0xf] = uVar68;
  auVar47 = NEON_frecpe(auVar7,4);
  auVar8[4] = uVar62;
  auVar8._0_4_ = fVar82;
  auVar8[5] = uVar64;
  auVar8[6] = uVar66;
  auVar8[7] = uVar68;
  auVar8[8] = uVar62;
  auVar8[9] = uVar64;
  auVar8[10] = uVar66;
  auVar8[0xb] = uVar68;
  auVar8[0xc] = uVar62;
  auVar8[0xd] = uVar64;
  auVar8[0xe] = uVar66;
  auVar8[0xf] = uVar68;
  auVar55 = NEON_frecps(auVar47,auVar8,4);
  auVar52._0_4_ = auVar47._0_4_ * auVar55._0_4_;
  auVar52._4_4_ = auVar47._4_4_ * auVar55._4_4_;
  auVar52._8_4_ = auVar47._8_4_ * auVar55._8_4_;
  auVar52._12_4_ = auVar47._12_4_ * auVar55._12_4_;
  fVar108 = (float)((ulong)uVar106 >> 0x20);
  fVar109 = (float)((ulong)uVar83 >> 0x20);
  auVar9[4] = uVar62;
  auVar9._0_4_ = fVar82;
  auVar9[5] = uVar64;
  auVar9[6] = uVar66;
  auVar9[7] = uVar68;
  auVar9[8] = uVar62;
  auVar9[9] = uVar64;
  auVar9[10] = uVar66;
  auVar9[0xb] = uVar68;
  auVar9[0xc] = uVar62;
  auVar9[0xd] = uVar64;
  auVar9[0xe] = uVar66;
  auVar9[0xf] = uVar68;
  auVar47 = NEON_frecps(auVar52,auVar9,4);
  fVar41 = auVar52._0_4_ * auVar47._0_4_;
  fVar45 = auVar52._4_4_ * auVar47._4_4_;
  fVar127 = auVar52._8_4_ * auVar47._8_4_;
  fVar128 = auVar52._12_4_ * auVar47._12_4_;
  fVar34 = fVar41 * ((float)uVar106 * (float)uVar105 - (float)uVar26 * (float)uVar18);
  fVar38 = fVar45 * (fVar108 * fVar131 - fVar35 * fVar113);
  fVar39 = fVar127 * ((float)uVar83 * (float)uVar115 - (float)uVar12 * (float)uVar13);
  fVar28 = fVar128 * (fVar109 * fVar50 - fVar44 * fVar110);
  auVar47 = *(undefined1 (*) [16])(local_60 + 0x1a);
  fVar129 = fVar41 * ((float)uVar26 * (float)uVar46 - (float)uVar37 * (float)uVar105);
  fVar131 = fVar45 * (fVar35 * fVar130 - fVar114 * fVar131);
  fVar48 = fVar127 * ((float)uVar12 * (float)uVar51 - (float)uVar42 * (float)uVar115);
  fVar50 = fVar128 * (fVar44 * fVar49 - fVar40 * fVar50);
  iVar81 = -(uint)(fVar82 == 0.0);
  iVar86 = -(uint)(fVar82 == 0.0);
  iVar87 = -(uint)(fVar82 == 0.0);
  iVar88 = -(uint)(fVar82 == 0.0);
  bVar61 = ~(byte)iVar81;
  bVar63 = ~(byte)((uint)iVar81 >> 8);
  bVar65 = ~(byte)((uint)iVar81 >> 0x10);
  bVar67 = ~(byte)((uint)iVar81 >> 0x18);
  bVar69 = ~(byte)iVar86;
  bVar70 = ~(byte)((uint)iVar86 >> 8);
  bVar71 = ~(byte)((uint)iVar86 >> 0x10);
  bVar72 = ~(byte)((uint)iVar86 >> 0x18);
  bVar73 = ~(byte)iVar87;
  bVar74 = ~(byte)((uint)iVar87 >> 8);
  bVar75 = ~(byte)((uint)iVar87 >> 0x10);
  bVar76 = ~(byte)((uint)iVar87 >> 0x18);
  bVar77 = ~(byte)iVar88;
  bVar78 = ~(byte)((uint)iVar88 >> 8);
  bVar79 = ~(byte)((uint)iVar88 >> 0x10);
  bVar80 = ~(byte)((uint)iVar88 >> 0x18);
  fVar82 = auVar47._0_4_;
  fVar41 = fVar41 * ((float)uVar18 * (float)uVar37 - (float)uVar106 * (float)uVar46);
  fVar45 = fVar45 * (fVar113 * fVar114 - fVar108 * fVar130);
  fVar127 = fVar127 * ((float)uVar13 * (float)uVar42 - (float)uVar83 * (float)uVar51);
  fVar128 = fVar128 * (fVar110 * fVar40 - fVar109 * fVar49);
  fVar40 = auVar47._4_4_;
  fVar130 = auVar47._8_4_;
  fVar35 = (-(fVar34 * fVar82) - fVar129 * fVar40) - fVar41 * fVar130;
  fVar44 = (-(fVar38 * fVar82) - fVar131 * fVar40) - fVar45 * fVar130;
  fVar114 = (-(fVar39 * fVar82) - fVar48 * fVar40) - fVar127 * fVar130;
  fVar40 = (-(fVar28 * fVar82) - fVar50 * fVar40) - fVar128 * fVar130;
  auVar53._0_8_ =
       CONCAT17((byte)((uint)fVar45 >> 0x18) & bVar72,
                CONCAT16((byte)((uint)fVar45 >> 0x10) & bVar71,
                         CONCAT15((byte)((uint)fVar45 >> 8) & bVar70,
                                  CONCAT14(SUB41(fVar45,0) & bVar69,
                                           CONCAT13((byte)((uint)fVar41 >> 0x18) & bVar67,
                                                    CONCAT12((byte)((uint)fVar41 >> 0x10) & bVar65,
                                                             CONCAT11((byte)((uint)fVar41 >> 8) &
                                                                      bVar63,SUB41(fVar41,0) &
                                                                             bVar61)))))));
  auVar53[8] = SUB41(fVar127,0) & bVar73;
  auVar53[9] = (byte)((uint)fVar127 >> 8) & bVar74;
  auVar53[10] = (byte)((uint)fVar127 >> 0x10) & bVar75;
  auVar53[0xb] = (byte)((uint)fVar127 >> 0x18) & bVar76;
  auVar53[0xc] = SUB41(fVar128,0) & bVar77;
  auVar53[0xd] = (byte)((uint)fVar128 >> 8) & bVar78;
  auVar53[0xe] = (byte)((uint)fVar128 >> 0x10) & bVar79;
  auVar53[0xf] = (byte)((uint)fVar128 >> 0x18) & bVar80;
  *(ulong *)(param_1 + 0x98) =
       CONCAT17((byte)((uint)fVar28 >> 0x18) & bVar80,
                CONCAT16((byte)((uint)fVar28 >> 0x10) & bVar79,
                         CONCAT15((byte)((uint)fVar28 >> 8) & bVar78,
                                  CONCAT14(SUB41(fVar28,0) & bVar77,
                                           CONCAT13((byte)((uint)fVar39 >> 0x18) & bVar76,
                                                    CONCAT12((byte)((uint)fVar39 >> 0x10) & bVar75,
                                                             CONCAT11((byte)((uint)fVar39 >> 8) &
                                                                      bVar74,SUB41(fVar39,0) &
                                                                             bVar73)))))));
  *(ulong *)(param_1 + 0x90) =
       CONCAT17((byte)((uint)fVar38 >> 0x18) & bVar72,
                CONCAT16((byte)((uint)fVar38 >> 0x10) & bVar71,
                         CONCAT15((byte)((uint)fVar38 >> 8) & bVar70,
                                  CONCAT14(SUB41(fVar38,0) & bVar69,
                                           CONCAT13((byte)((uint)fVar34 >> 0x18) & bVar67,
                                                    CONCAT12((byte)((uint)fVar34 >> 0x10) & bVar65,
                                                             CONCAT11((byte)((uint)fVar34 >> 8) &
                                                                      bVar63,SUB41(fVar34,0) &
                                                                             bVar61)))))));
  *(ulong *)(param_1 + 0xa8) =
       CONCAT17((byte)((uint)fVar50 >> 0x18) & bVar80,
                CONCAT16((byte)((uint)fVar50 >> 0x10) & bVar79,
                         CONCAT15((byte)((uint)fVar50 >> 8) & bVar78,
                                  CONCAT14(SUB41(fVar50,0) & bVar77,
                                           CONCAT13((byte)((uint)fVar48 >> 0x18) & bVar76,
                                                    CONCAT12((byte)((uint)fVar48 >> 0x10) & bVar75,
                                                             CONCAT11((byte)((uint)fVar48 >> 8) &
                                                                      bVar74,SUB41(fVar48,0) &
                                                                             bVar73)))))));
  *(ulong *)(param_1 + 0xa0) =
       CONCAT17((byte)((uint)fVar131 >> 0x18) & bVar72,
                CONCAT16((byte)((uint)fVar131 >> 0x10) & bVar71,
                         CONCAT15((byte)((uint)fVar131 >> 8) & bVar70,
                                  CONCAT14(SUB41(fVar131,0) & bVar69,
                                           CONCAT13((byte)((uint)fVar129 >> 0x18) & bVar67,
                                                    CONCAT12((byte)((uint)fVar129 >> 0x10) & bVar65,
                                                             CONCAT11((byte)((uint)fVar129 >> 8) &
                                                                      bVar63,SUB41(fVar129,0) &
                                                                             bVar61)))))));
  *(long *)(param_1 + 0xb8) = auVar53._8_8_;
  *(undefined8 *)(param_1 + 0xb0) = auVar53._0_8_;
  *(ulong *)(param_1 + 200) =
       CONCAT17((byte)((uint)fVar40 >> 0x18) & bVar80,
                CONCAT16((byte)((uint)fVar40 >> 0x10) & bVar79,
                         CONCAT15((byte)((uint)fVar40 >> 8) & bVar78,
                                  CONCAT14(SUB41(fVar40,0) & bVar77,
                                           CONCAT13((byte)((uint)fVar114 >> 0x18) & bVar76,
                                                    CONCAT12((byte)((uint)fVar114 >> 0x10) & bVar75,
                                                             CONCAT11((byte)((uint)fVar114 >> 8) &
                                                                      bVar74,SUB41(fVar114,0) &
                                                                             bVar73)))))));
  *(ulong *)(param_1 + 0xc0) =
       CONCAT17((byte)((uint)fVar44 >> 0x18) & bVar72,
                CONCAT16((byte)((uint)fVar44 >> 0x10) & bVar71,
                         CONCAT15((byte)((uint)fVar44 >> 8) & bVar70,
                                  CONCAT14(SUB41(fVar44,0) & bVar69,
                                           CONCAT13((byte)((uint)fVar35 >> 0x18) & bVar67,
                                                    CONCAT12((byte)((uint)fVar35 >> 0x10) & bVar65,
                                                             CONCAT11((byte)((uint)fVar35 >> 8) &
                                                                      bVar63,SUB41(fVar35,0) &
                                                                             bVar61)))))));
  puVar23 = PTR_DAT_04379660;
  local_78 = 0xb;
  local_70 = (long *)0x0;
  local_a8 = 0x90a863de0f7bc3a0;
  pcStack_a0 = "WazaDitherWidth";
  local_88 = &DAT_8013c350d279d9f9;
  pcStack_80 = "battle_view";
  local_98 = 0xf;
  local_90 = (long *)0x0;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar81 = __cxa_guard_acquire(PTR_DAT_04379660), iVar81 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar25 = PTR_DAT_04379670;
  puVar24 = PTR_DAT_04379668;
  uVar26 = *(undefined8 *)PTR_DAT_04379668;
  *(undefined8 *)PTR_DAT_04379670 = uVar26;
  FUN_00d7d9e4(&local_58,uVar26,&local_88);
  fVar35 = 0.0;
  if ((local_58 != (long *)0x0) &&
     (fVar35 = (float)FUN_00d7905c(local_58,&local_a8), local_58 != (long *)0x0)) {
    plVar1 = local_58 + 10;
    do {
      iVar81 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar81;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar81 == 0) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  *(float *)(param_1 + 0xd4) = fVar35 * 0.5;
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  local_78 = 0xb;
  local_70 = (long *)0x0;
  local_a8 = 0x9289845e19b97fb8;
  pcStack_a0 = "WazaDitherAlpha";
  local_88 = &DAT_8013c350d279d9f9;
  pcStack_80 = "battle_view";
  local_98 = 0xf;
  local_90 = (long *)0x0;
  if (((*puVar23 & 1) == 0) && (iVar81 = __cxa_guard_acquire(PTR_DAT_04379660), iVar81 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  uVar26 = *(undefined8 *)puVar24;
  *(undefined8 *)puVar25 = uVar26;
  FUN_00d7d9e4(&local_58,uVar26,&local_88);
  if (local_58 == (long *)0x0) {
    uVar36 = 0;
  }
  else {
    uVar36 = FUN_00d7905c(local_58,&local_a8);
    if (local_58 != (long *)0x0) {
      plVar1 = local_58 + 10;
      do {
        iVar81 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar81;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar81 == 0) {
        (**(code **)(*local_58 + 0x10))();
      }
    }
  }
  *(undefined4 *)(param_1 + 0xdc) = uVar36;
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  fVar35 = *(float *)(param_1 + 0xdc);
  local_78 = 0xb;
  local_70 = (long *)0x0;
  local_a8 = 0xb0aa44f78a9772bb;
  pcStack_a0 = "WazaDitherEasingFrames";
  local_88 = &DAT_8013c350d279d9f9;
  pcStack_80 = "battle_view";
  local_98 = 0x16;
  local_90 = (long *)0x0;
  if (((*puVar23 & 1) == 0) && (iVar81 = __cxa_guard_acquire(PTR_DAT_04379660), iVar81 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  uVar26 = *(undefined8 *)puVar24;
  *(undefined8 *)puVar25 = uVar26;
  FUN_00d7d9e4(&local_58,uVar26,&local_88);
  if (local_58 == (long *)0x0) {
    iVar81 = 0;
  }
  else {
    iVar81 = FUN_00d78f50(local_58,&local_a8);
    if (local_58 != (long *)0x0) {
      plVar1 = local_58 + 10;
      do {
        iVar86 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar86;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar86 == 0) {
        (**(code **)(*local_58 + 0x10))();
      }
    }
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  fVar35 = 1.0 - fVar35;
  if (0 < iVar81) {
    fVar35 = fVar35 / (float)iVar81;
  }
  *(float *)(param_1 + 0xd8) = fVar35;
  if (local_68 != (long *)0x0) {
    lVar27 = local_68[0xb];
    piVar2 = (int *)(lVar27 + 0xc);
    do {
      iVar81 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar81 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar81 + -1 == 0) {
      *(undefined8 *)(lVar27 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  if (local_60 != (long *)0x0) {
    lVar27 = local_60[0xb];
    piVar2 = (int *)(lVar27 + 0xc);
    do {
      iVar81 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar81 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar81 + -1 == 0) {
      *(undefined8 *)(lVar27 + 0x18) = 0;
      (**(code **)(*local_60 + 0x20))();
    }
  }
  return;
}


