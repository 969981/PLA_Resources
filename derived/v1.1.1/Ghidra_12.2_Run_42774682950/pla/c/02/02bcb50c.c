/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bcb50c; name: FUN_02bcb50c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bcb50c(undefined1 (*param_1) [12],undefined8 *param_2)

{
  undefined1 auVar1 [16];
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
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  undefined1 auVar26 [12];
  float fVar28;
  undefined1 auVar27 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [12];
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar36 [16];
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  undefined1 uVar45;
  byte bVar46;
  undefined1 uVar47;
  byte bVar48;
  undefined1 uVar49;
  byte bVar50;
  undefined1 uVar51;
  byte bVar52;
  byte bVar53;
  undefined1 uVar54;
  byte bVar55;
  undefined1 uVar56;
  byte bVar57;
  undefined1 uVar58;
  byte bVar59;
  undefined1 uVar60;
  byte bVar61;
  undefined1 uVar62;
  byte bVar63;
  undefined1 uVar64;
  byte bVar65;
  undefined1 uVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined8 uVar72;
  float fVar76;
  undefined8 uVar73;
  undefined8 uVar74;
  undefined1 auVar75 [12];
  undefined8 uVar77;
  float fVar80;
  float fVar81;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar82;
  undefined8 uVar83;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  undefined1 uVar93;
  undefined1 uVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  
  uVar32 = (undefined4)((ulong)*(undefined8 *)(*param_1 + 8) >> 0x20);
  auVar86 = *(undefined1 (*) [16])(param_1[1] + 4);
  bVar40 = auVar86[0] & (byte)_DAT_038897c0;
  bVar41 = auVar86[1] & (byte)((ulong)_DAT_038897c0 >> 8);
  bVar42 = auVar86[2] & (byte)((ulong)_DAT_038897c0 >> 0x10);
  bVar43 = auVar86[3] & (byte)((ulong)_DAT_038897c0 >> 0x18);
  bVar44 = auVar86[4] & (byte)((ulong)_DAT_038897c0 >> 0x20);
  bVar46 = auVar86[5] & (byte)((ulong)_DAT_038897c0 >> 0x28);
  bVar48 = auVar86[6] & (byte)((ulong)_DAT_038897c0 >> 0x30);
  bVar50 = auVar86[7] & (byte)((ulong)_DAT_038897c0 >> 0x38);
  bVar52 = auVar86[8] & (byte)_UNK_038897c8;
  bVar53 = auVar86[9] & (byte)((ulong)_UNK_038897c8 >> 8);
  bVar55 = auVar86[10] & (byte)((ulong)_UNK_038897c8 >> 0x10);
  bVar57 = auVar86[0xb] & (byte)((ulong)_UNK_038897c8 >> 0x18);
  bVar59 = auVar86[0xc] & (byte)((ulong)_UNK_038897c8 >> 0x20);
  bVar61 = auVar86[0xd] & (byte)((ulong)_UNK_038897c8 >> 0x28);
  bVar63 = auVar86[0xe] & (byte)((ulong)_UNK_038897c8 >> 0x30);
  bVar65 = auVar86[0xf] & (byte)((ulong)_UNK_038897c8 >> 0x38);
  uVar16 = NEON_ext(CONCAT17(bVar50,CONCAT16(bVar48,CONCAT15(bVar46,CONCAT14(bVar44,CONCAT13(bVar43,
                                                  CONCAT12(bVar42,CONCAT11(bVar41,bVar40))))))),
                    CONCAT17(bVar50,CONCAT16(bVar48,CONCAT15(bVar46,CONCAT14(bVar44,CONCAT13(bVar43,
                                                  CONCAT12(bVar42,CONCAT11(bVar41,bVar40))))))),4,1)
  ;
  auVar1[1] = bVar41;
  auVar1[0] = bVar40;
  auVar1[2] = bVar42;
  auVar1[3] = bVar43;
  auVar1[4] = bVar44;
  auVar1[5] = bVar46;
  auVar1[6] = bVar48;
  auVar1[7] = bVar50;
  auVar1[8] = bVar52;
  auVar1[9] = bVar53;
  auVar1[10] = bVar55;
  auVar1[0xb] = bVar57;
  auVar1[0xc] = bVar59;
  auVar1[0xd] = bVar61;
  auVar1[0xe] = bVar63;
  auVar1[0xf] = bVar65;
  uVar73 = a64_TBL(ZEXT816(0),auVar1,DAT_0388a6f0);
  auVar2[1] = bVar41;
  auVar2[0] = bVar40;
  auVar2[2] = bVar42;
  auVar2[3] = bVar43;
  auVar2[4] = bVar44;
  auVar2[5] = bVar46;
  auVar2[6] = bVar48;
  auVar2[7] = bVar50;
  auVar2[8] = bVar52;
  auVar2[9] = bVar53;
  auVar2[10] = bVar55;
  auVar2[0xb] = bVar57;
  auVar2[0xc] = bVar59;
  auVar2[0xd] = bVar61;
  auVar2[0xe] = bVar63;
  auVar2[0xf] = bVar65;
  uVar72 = a64_TBL(ZEXT816(0),auVar2,DAT_0388a5e0);
  auVar3[1] = bVar41;
  auVar3[0] = bVar40;
  auVar3[2] = bVar42;
  auVar3[3] = bVar43;
  auVar3[4] = bVar44;
  auVar3[5] = bVar46;
  auVar3[6] = bVar48;
  auVar3[7] = bVar50;
  auVar3[8] = bVar52;
  auVar3[9] = bVar53;
  auVar3[10] = bVar55;
  auVar3[0xb] = bVar57;
  auVar3[0xc] = bVar59;
  auVar3[0xd] = bVar61;
  auVar3[0xe] = bVar63;
  auVar3[0xf] = bVar65;
  uVar77 = a64_TBL(ZEXT816(0),auVar3,DAT_0388a6d8);
  auVar4[1] = bVar41;
  auVar4[0] = bVar40;
  auVar4[2] = bVar42;
  auVar4[3] = bVar43;
  auVar4[4] = bVar44;
  auVar4[5] = bVar46;
  auVar4[6] = bVar48;
  auVar4[7] = bVar50;
  auVar4[8] = bVar52;
  auVar4[9] = bVar53;
  auVar4[10] = bVar55;
  auVar4[0xb] = bVar57;
  auVar4[0xc] = bVar59;
  auVar4[0xd] = bVar61;
  auVar4[0xe] = bVar63;
  auVar4[0xf] = bVar65;
  uVar83 = a64_TBL(ZEXT816(0),auVar4,DAT_0388a680);
  auVar5[1] = bVar41;
  auVar5[0] = bVar40;
  auVar5[2] = bVar42;
  auVar5[3] = bVar43;
  auVar5[4] = bVar44;
  auVar5[5] = bVar46;
  auVar5[6] = bVar48;
  auVar5[7] = bVar50;
  auVar5[8] = bVar52;
  auVar5[9] = bVar53;
  auVar5[10] = bVar55;
  auVar5[0xb] = bVar57;
  auVar5[0xc] = bVar59;
  auVar5[0xd] = bVar61;
  auVar5[0xe] = bVar63;
  auVar5[0xf] = bVar65;
  uVar74 = a64_TBL(ZEXT816(0),auVar5,DAT_0388a880);
  auVar78._0_4_ = -(uint)(ABS((float)*(undefined8 *)*param_1) < 1e-12);
  auVar78._4_4_ = auVar78._0_4_;
  auVar78._8_4_ = auVar78._0_4_;
  auVar78._12_4_ = auVar78._0_4_;
  fVar68 = auVar86._12_4_;
  fVar34 = (float)uVar83 * fVar68;
  fVar37 = (float)((ulong)uVar83 >> 0x20) * fVar68;
  fVar69 = (float)uVar77;
  fVar70 = (float)((ulong)uVar77 >> 0x20);
  auVar86._12_4_ = uVar32;
  auVar86._0_12_ = *param_1;
  auVar8._4_4_ = (int)((ulong)*(undefined8 *)*param_1 >> 0x20);
  auVar8._0_4_ = 0x2b8cbccc;
  auVar8._8_4_ = (int)*(undefined8 *)(*param_1 + 8);
  auVar8._12_4_ = uVar32;
  auVar79._12_4_ = uVar32;
  auVar79._0_12_ = *param_1;
  auVar79 = auVar79 ^ (auVar86 ^ auVar8) & auVar78;
  fVar29 = (float)uVar74 * (float)CONCAT13(bVar43,CONCAT12(bVar42,CONCAT11(bVar41,bVar40)));
  fVar30 = (float)((ulong)uVar74 >> 0x20) *
           (float)CONCAT13(bVar50,CONCAT12(bVar48,CONCAT11(bVar46,bVar44)));
  fVar25 = (float)uVar73;
  fVar31 = fVar25 * (float)CONCAT13(bVar57,CONCAT12(bVar55,CONCAT11(bVar53,bVar52)));
  fVar28 = (float)((ulong)uVar73 >> 0x20);
  fVar33 = fVar28 * (float)CONCAT13(bVar65,CONCAT12(bVar63,CONCAT11(bVar61,bVar59)));
  fVar34 = fVar34 + fVar34;
  fVar37 = fVar37 + fVar37;
  fVar38 = fVar69 * fVar68 + fVar69 * fVar68;
  fVar39 = fVar70 * fVar68 + fVar70 * fVar68;
  fVar67 = (float)uVar16 * (float)uVar16;
  fVar68 = (float)((ulong)uVar16 >> 0x20);
  fVar68 = fVar68 * fVar68;
  fVar71 = (float)uVar72 * (float)uVar72;
  fVar76 = (float)((ulong)uVar72 >> 0x20);
  fVar76 = fVar76 * fVar76;
  fVar29 = fVar29 + fVar29;
  fVar30 = fVar30 + fVar30;
  fVar31 = fVar31 + fVar31;
  fVar33 = fVar33 + fVar33;
  fVar95 = fVar29 + fVar34;
  fVar96 = fVar30 + fVar37;
  fVar97 = fVar31 + fVar38;
  fVar98 = fVar33 + fVar39;
  fVar29 = fVar29 - fVar34;
  fVar30 = fVar30 - fVar37;
  fVar31 = fVar31 - fVar38;
  fVar33 = fVar33 - fVar39;
  auVar36._0_4_ = -(uint)(ABS(auVar79._4_4_) < 1e-12);
  auVar36._4_4_ = auVar36._0_4_;
  auVar36._8_4_ = auVar36._0_4_;
  auVar36._12_4_ = auVar36._0_4_;
  fVar34 = (float)_DAT_03888fc0 - (fVar71 + fVar71 + fVar67 + fVar67);
  fVar68 = (float)((ulong)_DAT_03888fc0 >> 0x20) - (fVar76 + fVar76 + fVar68 + fVar68);
  uVar45 = SUB41(fVar68,0);
  uVar47 = (undefined1)((uint)fVar68 >> 8);
  uVar49 = (undefined1)((uint)fVar68 >> 0x10);
  uVar51 = (undefined1)((uint)fVar68 >> 0x18);
  fVar68 = (float)_UNK_03888fc8 -
           (fVar69 * fVar69 + fVar69 * fVar69 + fVar25 * fVar25 + fVar25 * fVar25);
  uVar54 = (undefined1)((uint)fVar68 >> 8);
  uVar56 = (undefined1)((uint)fVar68 >> 0x10);
  uVar58 = (undefined1)((uint)fVar68 >> 0x18);
  fVar25 = (float)((ulong)_UNK_03888fc8 >> 0x20) -
           (fVar70 * fVar70 + fVar70 * fVar70 + fVar28 * fVar28 + fVar28 * fVar28);
  uVar60 = SUB41(fVar25,0);
  uVar62 = (undefined1)((uint)fVar25 >> 8);
  uVar64 = (undefined1)((uint)fVar25 >> 0x10);
  uVar66 = (undefined1)((uint)fVar25 >> 0x18);
  auVar11[4] = 0xcc;
  auVar11._0_4_ = auVar79._0_4_;
  auVar11[5] = 0xbc;
  auVar11[6] = 0x8c;
  auVar11[7] = 0x2b;
  auVar11[8] = auVar79[8];
  auVar11[9] = auVar79[9];
  auVar11[10] = auVar79[10];
  auVar11[0xb] = auVar79[0xb];
  auVar11[0xc] = auVar79[0xc];
  auVar11[0xd] = auVar79[0xd];
  auVar11[0xe] = auVar79[0xe];
  auVar11[0xf] = auVar79[0xf];
  auVar79 = auVar79 ^ (auVar79 ^ auVar11) & auVar36;
  auVar17._4_4_ = fVar96;
  auVar17._0_4_ = fVar95;
  auVar17._8_4_ = fVar97;
  auVar17._12_4_ = fVar98;
  auVar21._4_4_ = fVar30;
  auVar21._0_4_ = fVar29;
  auVar21._8_4_ = fVar31;
  auVar21._12_4_ = fVar33;
  uVar74 = a64_TBL(ZEXT816(0),auVar17,auVar21,DAT_0388a758);
  auVar18._4_4_ = fVar96;
  auVar18._0_4_ = fVar95;
  auVar18._8_4_ = fVar97;
  auVar18._12_4_ = fVar98;
  auVar22._4_4_ = fVar30;
  auVar22._0_4_ = fVar29;
  auVar22._8_4_ = fVar31;
  auVar22._12_4_ = fVar33;
  uVar72 = a64_TBL(ZEXT816(0),auVar18,auVar22,DAT_0388a720);
  auVar19._4_4_ = fVar96;
  auVar19._0_4_ = fVar95;
  auVar19._8_4_ = fVar97;
  auVar19._12_4_ = fVar98;
  auVar23._4_4_ = fVar30;
  auVar23._0_4_ = fVar29;
  auVar23._8_4_ = fVar31;
  auVar23._12_4_ = fVar33;
  uVar16 = a64_TBL(ZEXT816(0),auVar19,auVar23,DAT_0388a898);
  auVar20._4_4_ = fVar96;
  auVar20._0_4_ = fVar95;
  auVar20._8_4_ = fVar97;
  auVar20._12_4_ = fVar98;
  auVar24._4_4_ = fVar30;
  auVar24._0_4_ = fVar29;
  auVar24._8_4_ = fVar31;
  auVar24._12_4_ = fVar33;
  uVar73 = a64_TBL(ZEXT816(0),auVar20,auVar24,DAT_0388a5e8);
  uVar32 = (undefined4)((ulong)uVar72 >> 0x20);
  uVar87 = (undefined1)uVar73;
  uVar88 = (undefined1)((ulong)uVar73 >> 8);
  uVar89 = (undefined1)((ulong)uVar73 >> 0x10);
  uVar90 = (undefined1)((ulong)uVar73 >> 0x18);
  uVar91 = (undefined1)((ulong)uVar73 >> 0x20);
  uVar92 = (undefined1)((ulong)uVar73 >> 0x28);
  uVar93 = (undefined1)((ulong)uVar73 >> 0x30);
  uVar94 = (undefined1)((ulong)uVar73 >> 0x38);
  auVar84[0xc] = uVar60;
  auVar84._8_4_ = fVar68;
  auVar84[0xd] = uVar62;
  auVar84[0xe] = uVar64;
  auVar84[0xf] = uVar66;
  auVar84[4] = uVar45;
  auVar84._0_4_ = fVar34;
  auVar84[5] = uVar47;
  auVar84[6] = uVar49;
  auVar84[7] = uVar51;
  auVar12[8] = uVar87;
  auVar12._0_8_ = uVar16;
  auVar12[9] = uVar88;
  auVar12[10] = uVar89;
  auVar12[0xb] = uVar90;
  auVar12[0xc] = uVar91;
  auVar12[0xd] = uVar92;
  auVar12[0xe] = uVar93;
  auVar12[0xf] = uVar94;
  uVar73 = a64_TBL(ZEXT816(0),auVar84,auVar12,DAT_0388a640);
  fVar30 = (float)uVar73;
  fVar31 = (float)((ulong)uVar73 >> 0x20);
  auVar6[4] = uVar45;
  auVar6._0_4_ = fVar34;
  auVar6[5] = uVar47;
  auVar6[6] = uVar49;
  auVar6[7] = uVar51;
  auVar6[8] = SUB41(fVar68,0);
  auVar6[9] = uVar54;
  auVar6[10] = uVar56;
  auVar6[0xb] = uVar58;
  auVar6[0xc] = uVar60;
  auVar6[0xd] = uVar62;
  auVar6[0xe] = uVar64;
  auVar6[0xf] = uVar66;
  auVar9._8_4_ = (int)uVar72;
  auVar9._0_8_ = uVar74;
  auVar9._12_4_ = uVar32;
  uVar77 = a64_TBL(ZEXT816(0),auVar6,auVar9,DAT_0388a668);
  auVar7[4] = uVar45;
  auVar7._0_4_ = fVar34;
  auVar7[5] = uVar47;
  auVar7[6] = uVar49;
  auVar7[7] = uVar51;
  auVar7[8] = SUB41(fVar68,0);
  auVar7[9] = uVar54;
  auVar7[10] = uVar56;
  auVar7[0xb] = uVar58;
  auVar7[0xc] = uVar60;
  auVar7[0xd] = uVar62;
  auVar7[0xe] = uVar64;
  auVar7[0xf] = uVar66;
  auVar10._8_4_ = (int)uVar72;
  auVar10._0_8_ = uVar74;
  auVar10._12_4_ = uVar32;
  uVar73 = a64_TBL(ZEXT816(0),auVar7,auVar10,DAT_0388a5a8);
  auVar13[8] = uVar87;
  auVar13._0_8_ = uVar16;
  auVar13[9] = uVar88;
  auVar13[10] = uVar89;
  auVar13[0xb] = uVar90;
  auVar13[0xc] = uVar91;
  auVar13[0xd] = uVar92;
  auVar13[0xe] = uVar93;
  auVar13[0xf] = uVar94;
  uVar74 = a64_TBL(ZEXT816(0),auVar84,auVar13,DAT_0388a7f0);
  fVar33 = (float)uVar74;
  fVar37 = (float)((ulong)uVar74 >> 0x20);
  auVar14[8] = uVar87;
  auVar14._0_8_ = uVar16;
  auVar14[9] = uVar88;
  auVar14[10] = uVar89;
  auVar14[0xb] = uVar90;
  auVar14[0xc] = uVar91;
  auVar14[0xd] = uVar92;
  auVar14[0xe] = uVar93;
  auVar14[0xf] = uVar94;
  uVar74 = a64_TBL(ZEXT816(0),auVar84,auVar14,DAT_0388a5c0);
  fVar71 = (float)uVar74;
  fVar76 = (float)((ulong)uVar74 >> 0x20);
  auVar15[8] = uVar87;
  auVar15._0_8_ = uVar16;
  auVar15[9] = uVar88;
  auVar15[10] = uVar89;
  auVar15[0xb] = uVar90;
  auVar15[0xc] = uVar91;
  auVar15[0xd] = uVar92;
  auVar15[0xe] = uVar93;
  auVar15[0xf] = uVar94;
  uVar74 = a64_TBL(ZEXT816(0),auVar84,auVar15,DAT_0388a5a0);
  auVar85._8_8_ = _UNK_038894f8;
  auVar85._0_8_ = _DAT_038894f0;
  fVar69 = (float)uVar74;
  fVar70 = (float)((ulong)uVar74 >> 0x20);
  auVar86 = NEON_ext(auVar85,auVar79,8,1);
  auVar27._0_4_ = -(uint)(ABS(auVar79._8_4_) < 1e-12);
  auVar86 = NEON_ext(auVar86,auVar86,8,1);
  auVar27._4_4_ = auVar27._0_4_;
  auVar27._8_4_ = auVar27._0_4_;
  auVar27._12_4_ = auVar27._0_4_;
  auVar79 = auVar79 ^ (auVar79 ^ auVar86) & auVar27;
  bVar40 = auVar79[0];
  bVar41 = auVar79[1];
  bVar42 = auVar79[2];
  bVar43 = auVar79[3];
  fVar38 = (float)CONCAT13(bVar43 & (byte)((ulong)_DAT_038892b0 >> 0x18),
                           CONCAT12(bVar42 & (byte)((ulong)_DAT_038892b0 >> 0x10),
                                    CONCAT11(bVar41 & (byte)((ulong)_DAT_038892b0 >> 8),
                                             bVar40 & (byte)_DAT_038892b0)));
  bVar44 = auVar79[4];
  bVar46 = auVar79[5];
  bVar48 = auVar79[6];
  bVar50 = auVar79[7];
  auVar35._0_8_ =
       CONCAT17(bVar50 & (byte)((ulong)_DAT_038892b0 >> 0x38),
                CONCAT16(bVar48 & (byte)((ulong)_DAT_038892b0 >> 0x30),
                         CONCAT15(bVar46 & (byte)((ulong)_DAT_038892b0 >> 0x28),
                                  CONCAT14(bVar44 & (byte)((ulong)_DAT_038892b0 >> 0x20),fVar38))));
  bVar52 = auVar79[8];
  auVar35[8] = bVar52 & (byte)_UNK_038892b8;
  bVar53 = auVar79[9];
  auVar35[9] = bVar53 & (byte)((ulong)_UNK_038892b8 >> 8);
  bVar55 = auVar79[10];
  auVar35[10] = bVar55 & (byte)((ulong)_UNK_038892b8 >> 0x10);
  bVar57 = auVar79[0xb];
  auVar35[0xb] = bVar57 & (byte)((ulong)_UNK_038892b8 >> 0x18);
  fVar95 = (float)CONCAT13(bVar43 & (byte)((ulong)_DAT_03889f50 >> 0x18),
                           CONCAT12(bVar42 & (byte)((ulong)_DAT_03889f50 >> 0x10),
                                    CONCAT11(bVar41 & (byte)((ulong)_DAT_03889f50 >> 8),
                                             bVar40 & (byte)_DAT_03889f50)));
  auVar75._0_8_ =
       CONCAT17(bVar50 & (byte)((ulong)_DAT_03889f50 >> 0x38),
                CONCAT16(bVar48 & (byte)((ulong)_DAT_03889f50 >> 0x30),
                         CONCAT15(bVar46 & (byte)((ulong)_DAT_03889f50 >> 0x28),
                                  CONCAT14(bVar44 & (byte)((ulong)_DAT_03889f50 >> 0x20),fVar95))));
  auVar75[8] = bVar52 & (byte)_UNK_03889f58;
  auVar75[9] = bVar53 & (byte)((ulong)_UNK_03889f58 >> 8);
  auVar75[10] = bVar55 & (byte)((ulong)_UNK_03889f58 >> 0x10);
  auVar75[0xb] = bVar57 & (byte)((ulong)_UNK_03889f58 >> 0x18);
  fVar25 = (float)CONCAT13(bVar43 & (byte)((ulong)_DAT_03889d60 >> 0x18),
                           CONCAT12(bVar42 & (byte)((ulong)_DAT_03889d60 >> 0x10),
                                    CONCAT11(bVar41 & (byte)((ulong)_DAT_03889d60 >> 8),
                                             bVar40 & (byte)_DAT_03889d60)));
  auVar26._0_8_ =
       CONCAT17(bVar50 & (byte)((ulong)_DAT_03889d60 >> 0x38),
                CONCAT16(bVar48 & (byte)((ulong)_DAT_03889d60 >> 0x30),
                         CONCAT15(bVar46 & (byte)((ulong)_DAT_03889d60 >> 0x28),
                                  CONCAT14(bVar44 & (byte)((ulong)_DAT_03889d60 >> 0x20),fVar25))));
  auVar26[8] = bVar52 & (byte)_UNK_03889d68;
  auVar26[9] = bVar53 & (byte)((ulong)_UNK_03889d68 >> 8);
  auVar26[10] = bVar55 & (byte)((ulong)_UNK_03889d68 >> 0x10);
  auVar26[0xb] = bVar57 & (byte)((ulong)_UNK_03889d68 >> 0x18);
  uVar16 = *(undefined8 *)(param_1[3] + 4);
  uVar74 = *(undefined8 *)(param_1[2] + 8);
  fVar39 = (float)((ulong)auVar35._0_8_ >> 0x20);
  fVar96 = (float)((ulong)auVar75._0_8_ >> 0x20);
  fVar28 = (float)((ulong)auVar26._0_8_ >> 0x20);
  fVar67 = auVar35._8_4_;
  fVar98 = (float)uVar77;
  fVar80 = (float)((ulong)uVar77 >> 0x20);
  fVar81 = (float)uVar73;
  fVar82 = (float)((ulong)uVar73 >> 0x20);
  fVar34 = fVar31 * fVar38 + fVar76 * fVar39 + fVar80 * fVar67;
  fVar68 = fVar37 * fVar38 + fVar70 * fVar39 + fVar82 * fVar67;
  fVar97 = auVar75._8_4_;
  fVar29 = auVar26._8_4_;
  param_2[1] = CONCAT17((char)((uint)fVar68 >> 0x18),
                        CONCAT16((char)((uint)fVar68 >> 0x10),
                                 CONCAT15((char)((uint)fVar68 >> 8),
                                          CONCAT14(SUB41(fVar68,0),
                                                   fVar33 * fVar38 + fVar69 * fVar39 +
                                                   fVar81 * fVar67))));
  *param_2 = CONCAT17((char)((uint)fVar34 >> 0x18),
                      CONCAT16((char)((uint)fVar34 >> 0x10),
                               CONCAT15((char)((uint)fVar34 >> 8),
                                        CONCAT14(SUB41(fVar34,0),
                                                 fVar30 * fVar38 + fVar71 * fVar39 + fVar98 * fVar67
                                                ))));
  *(float *)(param_2 + 3) = fVar33 * fVar95 + fVar69 * fVar96 + fVar81 * fVar97;
  *(float *)((long)param_2 + 0x1c) = fVar37 * fVar95 + fVar70 * fVar96 + fVar82 * fVar97;
  *(float *)(param_2 + 2) = fVar30 * fVar95 + fVar71 * fVar96 + fVar98 * fVar97;
  *(float *)((long)param_2 + 0x14) = fVar31 * fVar95 + fVar76 * fVar96 + fVar80 * fVar97;
  param_2[5] = CONCAT44(fVar37 * fVar25 + fVar70 * fVar28 + fVar82 * fVar29,
                        fVar33 * fVar25 + fVar69 * fVar28 + fVar81 * fVar29);
  param_2[4] = CONCAT44(fVar31 * fVar25 + fVar76 * fVar28 + fVar80 * fVar29,
                        fVar30 * fVar25 + fVar71 * fVar28 + fVar98 * fVar29);
  param_2[7] = uVar16;
  param_2[6] = uVar74;
  return;
}


