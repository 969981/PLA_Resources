/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a8cd94; name: FUN_01a8cd94
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_01a8cd94(long param_1,unkbyte9 *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  int iVar15;
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
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  long lVar44;
  float fVar45;
  float fVar46;
  undefined1 extraout_b0;
  byte bVar47;
  undefined1 extraout_var;
  byte bVar49;
  undefined1 extraout_var_00;
  byte bVar50;
  undefined1 extraout_var_01;
  byte bVar51;
  undefined1 extraout_var_02;
  byte bVar52;
  undefined1 extraout_var_03;
  byte bVar53;
  undefined1 extraout_var_04;
  byte bVar54;
  undefined1 extraout_var_05;
  byte bVar55;
  undefined1 extraout_var_06;
  byte bVar56;
  undefined1 extraout_var_07;
  byte bVar57;
  undefined1 extraout_var_08;
  byte bVar58;
  undefined1 extraout_var_09;
  byte bVar59;
  undefined1 extraout_var_10;
  byte bVar60;
  undefined1 extraout_var_11;
  byte bVar61;
  undefined1 extraout_var_12;
  byte bVar62;
  undefined1 auVar48 [16];
  undefined1 extraout_var_13;
  byte bVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar93;
  undefined8 uVar88;
  undefined8 uVar89;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  undefined1 uVar99;
  undefined1 uVar100;
  undefined1 uVar101;
  undefined1 uVar102;
  undefined1 uVar103;
  undefined1 uVar104;
  undefined1 uVar105;
  undefined8 uVar106;
  float fVar108;
  undefined8 uVar107;
  undefined8 uVar109;
  undefined8 uVar110;
  undefined8 uVar111;
  undefined8 uVar112;
  undefined8 uVar113;
  undefined8 uVar114;
  long *local_18;
  
  if ((*(long *)(param_1 + 0x638) == 0) || (FUN_0182b7ac(&local_18), local_18 == (long *)0x0)) {
    uVar11 = *(undefined8 *)((long)param_2 + 8);
    bVar56 = (byte)uVar11;
    bVar57 = (byte)((ulong)uVar11 >> 8);
    bVar58 = (byte)((ulong)uVar11 >> 0x10);
    bVar59 = (byte)((ulong)uVar11 >> 0x18);
    bVar60 = (byte)((ulong)uVar11 >> 0x20);
    bVar61 = (byte)((ulong)uVar11 >> 0x28);
    bVar62 = (byte)((ulong)uVar11 >> 0x30);
    bVar63 = (byte)((ulong)uVar11 >> 0x38);
    uVar11 = *(undefined8 *)param_2;
    bVar47 = (byte)uVar11;
    bVar49 = (byte)((ulong)uVar11 >> 8);
    bVar50 = (byte)((ulong)uVar11 >> 0x10);
    bVar51 = (byte)((ulong)uVar11 >> 0x18);
    bVar52 = (byte)((ulong)uVar11 >> 0x20);
    bVar53 = (byte)((ulong)uVar11 >> 0x28);
    bVar54 = (byte)((ulong)uVar11 >> 0x30);
    bVar55 = (byte)((ulong)uVar11 >> 0x38);
  }
  else {
    FUN_01817104();
    fVar96 = (float)_UNK_03889ac8;
    fVar98 = (float)((ulong)_UNK_03889ac8 >> 0x20);
    fVar94 = (float)_DAT_03889ac0;
    fVar95 = (float)((ulong)_DAT_03889ac0 >> 0x20);
    uVar11 = *(undefined8 *)((long)param_2 + 8);
    uVar99 = (undefined1)((ulong)uVar11 >> 8);
    uVar100 = (undefined1)((ulong)uVar11 >> 0x10);
    uVar101 = (undefined1)((ulong)uVar11 >> 0x18);
    uVar102 = (undefined1)((ulong)uVar11 >> 0x20);
    uVar103 = (undefined1)((ulong)uVar11 >> 0x28);
    uVar104 = (undefined1)((ulong)uVar11 >> 0x30);
    uVar105 = (undefined1)((ulong)uVar11 >> 0x38);
    fVar46 = (float)*param_3;
    fVar73 = fVar46 * fVar94;
    fVar85 = (float)((ulong)*param_3 >> 0x20);
    fVar74 = fVar85 * fVar95;
    fVar45 = (float)param_3[1];
    fVar75 = fVar45 * fVar96;
    fVar14 = (float)((ulong)param_3[1] >> 0x20);
    fVar76 = fVar14 * fVar98;
    fVar46 = fVar46 * fVar46;
    fVar85 = fVar85 * fVar85;
    uVar64 = (undefined1)((uint)fVar85 >> 8);
    uVar65 = (undefined1)((uint)fVar85 >> 0x10);
    uVar66 = (undefined1)((uint)fVar85 >> 0x18);
    fVar45 = fVar45 * fVar45;
    uVar67 = (undefined1)((uint)fVar45 >> 8);
    uVar68 = (undefined1)((uint)fVar45 >> 0x10);
    uVar70 = (undefined1)((uint)fVar45 >> 0x18);
    fVar14 = fVar14 * fVar14;
    uVar69 = (undefined1)((uint)fVar14 >> 8);
    uVar71 = (undefined1)((uint)fVar14 >> 0x10);
    uVar72 = (undefined1)((uint)fVar14 >> 0x18);
    auVar5[4] = SUB41(fVar85,0);
    auVar5._0_4_ = fVar46;
    auVar5[5] = uVar64;
    auVar5[6] = uVar65;
    auVar5[7] = uVar66;
    auVar5[8] = SUB41(fVar45,0);
    auVar5[9] = uVar67;
    auVar5[10] = uVar68;
    auVar5[0xb] = uVar70;
    auVar5[0xc] = SUB41(fVar14,0);
    auVar5[0xd] = uVar69;
    auVar5[0xe] = uVar71;
    auVar5[0xf] = uVar72;
    auVar6[4] = SUB41(fVar85,0);
    auVar6._0_4_ = fVar46;
    auVar6[5] = uVar64;
    auVar6[6] = uVar65;
    auVar6[7] = uVar66;
    auVar6[8] = SUB41(fVar45,0);
    auVar6[9] = uVar67;
    auVar6[10] = uVar68;
    auVar6[0xb] = uVar70;
    auVar6[0xc] = SUB41(fVar14,0);
    auVar6[0xd] = uVar69;
    auVar6[0xe] = uVar71;
    auVar6[0xf] = uVar72;
    auVar77 = NEON_ext(auVar5,auVar6,8,1);
    fVar46 = auVar77._0_4_ + fVar46;
    fVar85 = auVar77._4_4_ + fVar85;
    fVar45 = fVar46 + fVar85;
    fVar46 = fVar46 + fVar85;
    uVar64 = SUB41(fVar46,0);
    uVar65 = (undefined1)((uint)fVar46 >> 8);
    uVar66 = (undefined1)((uint)fVar46 >> 0x10);
    uVar67 = (undefined1)((uint)fVar46 >> 0x18);
    uVar68 = SUB41(fVar45,0);
    uVar70 = (undefined1)((uint)fVar45 >> 8);
    uVar69 = (undefined1)((uint)fVar45 >> 0x10);
    uVar71 = (undefined1)((uint)fVar45 >> 0x18);
    auVar7[4] = uVar64;
    auVar7._0_4_ = fVar45;
    auVar7[5] = uVar65;
    auVar7[6] = uVar66;
    auVar7[7] = uVar67;
    auVar7[8] = uVar68;
    auVar7[9] = uVar70;
    auVar7[10] = uVar69;
    auVar7[0xb] = uVar71;
    auVar7[0xc] = uVar64;
    auVar7[0xd] = uVar65;
    auVar7[0xe] = uVar66;
    auVar7[0xf] = uVar67;
    auVar77 = NEON_frecpe(auVar7,4);
    auVar8[4] = uVar64;
    auVar8._0_4_ = fVar45;
    auVar8[5] = uVar65;
    auVar8[6] = uVar66;
    auVar8[7] = uVar67;
    auVar8[8] = uVar68;
    auVar8[9] = uVar70;
    auVar8[10] = uVar69;
    auVar8[0xb] = uVar71;
    auVar8[0xc] = uVar64;
    auVar8[0xd] = uVar65;
    auVar8[0xe] = uVar66;
    auVar8[0xf] = uVar67;
    auVar80 = NEON_frecps(auVar77,auVar8,4);
    auVar78._0_4_ = auVar77._0_4_ * auVar80._0_4_;
    auVar78._4_4_ = auVar77._4_4_ * auVar80._4_4_;
    auVar78._8_4_ = auVar77._8_4_ * auVar80._8_4_;
    auVar78._12_4_ = auVar77._12_4_ * auVar80._12_4_;
    auVar9[4] = uVar64;
    auVar9._0_4_ = fVar45;
    auVar9[5] = uVar65;
    auVar9[6] = uVar66;
    auVar9[7] = uVar67;
    auVar9[8] = uVar68;
    auVar9[9] = uVar70;
    auVar9[10] = uVar69;
    auVar9[0xb] = uVar71;
    auVar9[0xc] = uVar64;
    auVar9[0xd] = uVar65;
    auVar9[0xe] = uVar66;
    auVar9[0xf] = uVar67;
    auVar77 = NEON_frecps(auVar78,auVar9,4);
    iVar10 = -(uint)(fVar45 == 0.0);
    iVar12 = -(uint)(fVar46 == 0.0);
    iVar13 = -(uint)(fVar45 == 0.0);
    iVar15 = -(uint)((float)CONCAT13(uVar67,CONCAT12(uVar66,(short)(CONCAT15(uVar65,CONCAT14(uVar64,
                                                  fVar45)) >> 0x20))) == 0.0);
    auVar90[0] = ~(byte)iVar10;
    auVar90[1] = ~(byte)((uint)iVar10 >> 8);
    auVar90[2] = ~(byte)((uint)iVar10 >> 0x10);
    auVar90[3] = ~(byte)((uint)iVar10 >> 0x18);
    auVar90[4] = ~(byte)iVar12;
    auVar90[5] = ~(byte)((uint)iVar12 >> 8);
    auVar90[6] = ~(byte)((uint)iVar12 >> 0x10);
    auVar90[7] = ~(byte)((uint)iVar12 >> 0x18);
    auVar90[8] = ~(byte)iVar13;
    auVar90[9] = ~(byte)((uint)iVar13 >> 8);
    auVar90[10] = ~(byte)((uint)iVar13 >> 0x10);
    auVar90[0xb] = ~(byte)((uint)iVar13 >> 0x18);
    auVar90[0xc] = ~(byte)iVar15;
    auVar90[0xd] = ~(byte)((uint)iVar15 >> 8);
    auVar90[0xe] = ~(byte)((uint)iVar15 >> 0x10);
    auVar90[0xf] = ~(byte)((uint)iVar15 >> 0x18);
    auVar79._0_4_ = fVar73 * auVar78._0_4_ * auVar77._0_4_;
    auVar79._4_4_ = fVar74 * auVar78._4_4_ * auVar77._4_4_;
    auVar79._8_4_ = fVar75 * auVar78._8_4_ * auVar77._8_4_;
    auVar79._12_4_ = fVar76 * auVar78._12_4_ * auVar77._12_4_;
    auVar40[9] = uVar99;
    auVar40._0_9_ = *param_2;
    auVar40[10] = uVar100;
    auVar40[0xb] = uVar101;
    auVar40[0xc] = uVar102;
    auVar40[0xd] = uVar103;
    auVar40[0xe] = uVar104;
    auVar40[0xf] = uVar105;
    uVar11 = a64_TBL(ZEXT816(0),auVar40,DAT_0388a580);
    auVar16._4_4_ = fVar74;
    auVar16._0_4_ = fVar73;
    auVar16._8_4_ = fVar75;
    auVar16._12_4_ = fVar76;
    auVar91._4_4_ = fVar74;
    auVar91._0_4_ = fVar73;
    auVar91._8_4_ = fVar75;
    auVar91._12_4_ = fVar76;
    auVar91 = auVar91 ^ (auVar16 ^ auVar79) & auVar90;
    fVar87 = auVar91._0_4_;
    fVar81 = fVar87 * fVar94;
    fVar93 = auVar91._4_4_;
    fVar82 = fVar93 * fVar95;
    fVar83 = auVar91._8_4_ * fVar96;
    fVar84 = auVar91._12_4_ * fVar98;
    auVar41[9] = uVar99;
    auVar41._0_9_ = *param_2;
    auVar41[10] = uVar100;
    auVar41[0xb] = uVar101;
    auVar41[0xc] = uVar102;
    auVar41[0xd] = uVar103;
    auVar41[0xe] = uVar104;
    auVar41[0xf] = uVar105;
    uVar106 = a64_TBL(ZEXT816(0),auVar41,DAT_0388a680);
    fVar46 = (float)((ulong)uVar11 >> 0x20);
    auVar17._4_4_ = fVar82;
    auVar17._0_4_ = fVar81;
    auVar17._8_4_ = fVar83;
    auVar17._12_4_ = fVar84;
    uVar88 = a64_TBL(ZEXT816(0),auVar17,DAT_0388a580);
    auVar18._4_4_ = fVar82;
    auVar18._0_4_ = fVar81;
    auVar18._8_4_ = fVar83;
    auVar18._12_4_ = fVar84;
    uVar107 = a64_TBL(ZEXT816(0),auVar18,DAT_0388a6c8);
    auVar43._4_4_ = fVar82;
    auVar43._0_4_ = fVar81;
    auVar19._4_4_ = fVar82;
    auVar19._0_4_ = fVar81;
    auVar19._8_4_ = fVar83;
    auVar19._12_4_ = fVar84;
    uVar110 = a64_TBL(ZEXT816(0),auVar19,DAT_0388a680);
    fVar76 = (float)*(undefined8 *)param_2;
    fVar86 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
    fVar85 = (float)uVar106 * (float)uVar107;
    fVar108 = (float)((ulong)uVar106 >> 0x20);
    fVar75 = fVar108 * (float)((ulong)uVar107 >> 0x20);
    auVar43._12_4_ = fVar82;
    auVar43._8_4_ = fVar81;
    auVar20._4_4_ = fVar82;
    auVar20._0_4_ = fVar81;
    auVar20._8_4_ = fVar83;
    auVar20._12_4_ = fVar84;
    uVar112 = a64_TBL(ZEXT816(0),auVar20,DAT_0388a880);
    auVar21._4_4_ = fVar82;
    auVar21._0_4_ = fVar81;
    auVar21._8_4_ = fVar83;
    auVar21._12_4_ = fVar84;
    uVar113 = a64_TBL(ZEXT816(0),auVar21,DAT_0388a790);
    fVar45 = (float)_DAT_03889ad0;
    fVar14 = (float)((ulong)_DAT_03889ad0 >> 0x20);
    fVar73 = (float)_UNK_03889ad8;
    fVar74 = (float)((ulong)_UNK_03889ad8 >> 0x20);
    uVar109 = a64_TBL(ZEXT816(0),auVar43,DAT_0388a648);
    auVar42[9] = uVar99;
    auVar42._0_9_ = *param_2;
    auVar42[10] = uVar100;
    auVar42[0xb] = uVar101;
    auVar42[0xc] = uVar102;
    auVar42[0xd] = uVar103;
    auVar42[0xe] = uVar104;
    auVar42[0xf] = uVar105;
    uVar107 = a64_TBL(ZEXT816(0),auVar42,DAT_0388a880);
    fVar97 = (float)((ulong)uVar107 >> 0x20);
    uVar89 = a64_TBL(ZEXT816(0),auVar91,DAT_0388a580);
    fVar81 = (fVar81 * (float)uVar11 + fVar45 * fVar76 * (float)uVar88 +
             fVar45 * (float)uVar107 * (float)uVar110) - (float)uVar106 * (float)uVar112;
    fVar82 = (fVar82 * fVar46 + fVar14 * fVar86 * (float)((ulong)uVar88 >> 0x20) +
             fVar14 * fVar97 * (float)((ulong)uVar110 >> 0x20)) -
             fVar108 * (float)((ulong)uVar112 >> 0x20);
    fVar76 = (fVar83 * (float)uVar11 + fVar73 * fVar85 + fVar73 * fVar76 * (float)uVar109) -
             (float)uVar107 * (float)uVar113;
    fVar97 = (fVar84 * fVar46 +
              fVar74 * (float)(CONCAT17((char)((uint)fVar75 >> 0x18),
                                        CONCAT16((char)((uint)fVar75 >> 0x10),
                                                 CONCAT15((char)((uint)fVar75 >> 8),
                                                          CONCAT14(SUB41(fVar75,0),fVar85)))) >>
                              0x20) + fVar74 * fVar86 * (float)((ulong)uVar109 >> 0x20)) -
             fVar97 * (float)((ulong)uVar113 >> 0x20);
    uVar107 = a64_TBL(ZEXT816(0),auVar91,DAT_0388a680);
    auVar27._4_4_ = fVar82;
    auVar27._0_4_ = fVar81;
    auVar27._8_4_ = fVar76;
    auVar27._12_4_ = fVar97;
    uVar106 = a64_TBL(ZEXT816(0),auVar27,DAT_0388a580);
    auVar28._4_4_ = fVar82;
    auVar28._0_4_ = fVar81;
    auVar28._8_4_ = fVar76;
    auVar28._12_4_ = fVar97;
    uVar109 = a64_TBL(ZEXT816(0),auVar28,DAT_0388a6c8);
    fVar83 = (float)((ulong)uVar107 >> 0x20);
    fVar46 = (float)((ulong)uVar89 >> 0x20);
    auVar29._4_4_ = fVar82;
    auVar29._0_4_ = fVar81;
    auVar29._8_4_ = fVar76;
    auVar29._12_4_ = fVar97;
    uVar113 = a64_TBL(ZEXT816(0),auVar29,DAT_0388a880);
    auVar30._4_4_ = fVar82;
    auVar30._0_4_ = fVar81;
    auVar30._8_4_ = fVar76;
    auVar30._12_4_ = fVar97;
    uVar110 = a64_TBL(ZEXT816(0),auVar30,DAT_0388a680);
    auVar31._4_4_ = fVar82;
    auVar31._0_4_ = fVar81;
    auVar31._8_4_ = fVar76;
    auVar31._12_4_ = fVar97;
    uVar114 = a64_TBL(ZEXT816(0),auVar31,DAT_0388a790);
    auVar32._4_4_ = fVar82;
    auVar32._0_4_ = fVar81;
    auVar32._8_4_ = fVar81;
    auVar32._12_4_ = fVar82;
    uVar11 = a64_TBL(ZEXT816(0),auVar32,DAT_0388a648);
    uVar88 = a64_TBL(ZEXT816(0),auVar91,DAT_0388a880);
    fVar86 = (float)((ulong)uVar88 >> 0x20);
    fVar94 = (float)CONCAT13(extraout_var_01,
                             CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))) * fVar94;
    fVar95 = (float)CONCAT13(extraout_var_05,
                             CONCAT12(extraout_var_04,CONCAT11(extraout_var_03,extraout_var_02))) *
             fVar95;
    fVar96 = (float)CONCAT13(extraout_var_09,
                             CONCAT12(extraout_var_08,CONCAT11(extraout_var_07,extraout_var_06))) *
             fVar96;
    fVar98 = (float)CONCAT13(extraout_var_13,
                             CONCAT12(extraout_var_12,CONCAT11(extraout_var_11,extraout_var_10))) *
             fVar98;
    auVar33._4_4_ = fVar95;
    auVar33._0_4_ = fVar94;
    auVar33._8_4_ = fVar96;
    auVar33._12_4_ = fVar98;
    uVar112 = a64_TBL(ZEXT816(0),auVar33,DAT_0388a6c8);
    auVar34._4_4_ = fVar95;
    auVar34._0_4_ = fVar94;
    auVar34._8_4_ = fVar96;
    auVar34._12_4_ = fVar98;
    uVar111 = a64_TBL(ZEXT816(0),auVar34,DAT_0388a790);
    fVar85 = ((float)uVar89 * fVar81 + fVar45 * fVar87 * (float)uVar106 +
             fVar45 * (float)uVar88 * (float)uVar110) - (float)uVar107 * (float)uVar113;
    fVar75 = (fVar46 * fVar82 + fVar14 * fVar93 * (float)((ulong)uVar106 >> 0x20) +
             fVar14 * fVar86 * (float)((ulong)uVar110 >> 0x20)) -
             fVar83 * (float)((ulong)uVar113 >> 0x20);
    fVar76 = ((float)uVar89 * fVar76 + fVar73 * (float)uVar107 * (float)uVar109 +
             fVar73 * fVar87 * (float)uVar11) - (float)uVar88 * (float)uVar114;
    fVar46 = (fVar46 * fVar97 + fVar74 * fVar83 * (float)((ulong)uVar109 >> 0x20) +
             fVar74 * fVar93 * (float)((ulong)uVar11 >> 0x20)) -
             fVar86 * (float)((ulong)uVar114 >> 0x20);
    bVar47 = (byte)_DAT_038897c0;
    bVar49 = (byte)((ulong)_DAT_038897c0 >> 8);
    bVar50 = (byte)((ulong)_DAT_038897c0 >> 0x10);
    bVar51 = (byte)((ulong)_DAT_038897c0 >> 0x18);
    fVar97 = (float)CONCAT13((byte)((uint)fVar85 >> 0x18) & bVar51,
                             CONCAT12((byte)((uint)fVar85 >> 0x10) & bVar50,
                                      CONCAT11((byte)((uint)fVar85 >> 8) & bVar49,
                                               SUB41(fVar85,0) & bVar47)));
    bVar52 = (byte)((ulong)_DAT_038897c0 >> 0x20);
    bVar53 = (byte)((ulong)_DAT_038897c0 >> 0x28);
    bVar54 = (byte)((ulong)_DAT_038897c0 >> 0x30);
    bVar55 = (byte)((ulong)_DAT_038897c0 >> 0x38);
    auVar92._0_8_ =
         CONCAT17((byte)((uint)fVar75 >> 0x18) & bVar55,
                  CONCAT16((byte)((uint)fVar75 >> 0x10) & bVar54,
                           CONCAT15((byte)((uint)fVar75 >> 8) & bVar53,
                                    CONCAT14(SUB41(fVar75,0) & bVar52,fVar97))));
    bVar56 = (byte)_UNK_038897c8;
    auVar92[8] = SUB41(fVar76,0) & bVar56;
    bVar57 = (byte)((ulong)_UNK_038897c8 >> 8);
    auVar92[9] = (byte)((uint)fVar76 >> 8) & bVar57;
    bVar58 = (byte)((ulong)_UNK_038897c8 >> 0x10);
    auVar92[10] = (byte)((uint)fVar76 >> 0x10) & bVar58;
    bVar59 = (byte)((ulong)_UNK_038897c8 >> 0x18);
    auVar92[0xb] = (byte)((uint)fVar76 >> 0x18) & bVar59;
    bVar60 = (byte)((ulong)_UNK_038897c8 >> 0x20);
    auVar92[0xc] = SUB41(fVar46,0) & bVar60;
    bVar61 = (byte)((ulong)_UNK_038897c8 >> 0x28);
    auVar92[0xd] = (byte)((uint)fVar46 >> 8) & bVar61;
    bVar62 = (byte)((ulong)_UNK_038897c8 >> 0x30);
    bVar63 = (byte)((ulong)_UNK_038897c8 >> 0x38);
    auVar92[0xe] = (byte)((uint)fVar46 >> 0x10) & bVar62;
    auVar92[0xf] = (byte)((uint)fVar46 >> 0x18) & bVar63;
    uVar11 = a64_TBL(ZEXT816(0),auVar92,DAT_0388a580);
    fVar85 = (float)((ulong)uVar11 >> 0x20);
    uVar107 = a64_TBL(ZEXT816(0),auVar92,DAT_0388a680);
    auVar35._4_4_ = fVar95;
    auVar35._0_4_ = fVar94;
    auVar35._8_4_ = fVar96;
    auVar35._12_4_ = fVar98;
    uVar106 = a64_TBL(ZEXT816(0),auVar35,DAT_0388a580);
    fVar75 = (float)((ulong)auVar92._0_8_ >> 0x20);
    fVar46 = (float)((ulong)uVar107 >> 0x20);
    auVar36._4_4_ = fVar95;
    auVar36._0_4_ = fVar94;
    auVar36._8_4_ = fVar96;
    auVar36._12_4_ = fVar98;
    uVar113 = a64_TBL(ZEXT816(0),auVar36,DAT_0388a880);
    auVar37._4_4_ = fVar95;
    auVar37._0_4_ = fVar94;
    auVar37._8_4_ = fVar96;
    auVar37._12_4_ = fVar98;
    uVar109 = a64_TBL(ZEXT816(0),auVar37,DAT_0388a680);
    auVar38._4_4_ = fVar95;
    auVar38._0_4_ = fVar94;
    auVar38._8_4_ = fVar94;
    auVar38._12_4_ = fVar95;
    uVar88 = a64_TBL(ZEXT816(0),auVar38,DAT_0388a648);
    uVar89 = a64_TBL(ZEXT816(0),auVar92,DAT_0388a880);
    fVar81 = (float)((ulong)uVar89 >> 0x20);
    auVar77[1] = extraout_var;
    auVar77[0] = extraout_b0;
    auVar77[2] = extraout_var_00;
    auVar77[3] = extraout_var_01;
    auVar77[4] = extraout_var_02;
    auVar77[5] = extraout_var_03;
    auVar77[6] = extraout_var_04;
    auVar77[7] = extraout_var_05;
    auVar77[8] = extraout_var_06;
    auVar77[9] = extraout_var_07;
    auVar77[10] = extraout_var_08;
    auVar77[0xb] = extraout_var_09;
    auVar77[0xc] = extraout_var_10;
    auVar77[0xd] = extraout_var_11;
    auVar77[0xe] = extraout_var_12;
    auVar77[0xf] = extraout_var_13;
    uVar110 = a64_TBL(ZEXT816(0),auVar77,DAT_0388a580);
    fVar76 = (fVar94 * (float)uVar11 + fVar45 * fVar97 * (float)uVar106 +
             fVar45 * (float)uVar89 * (float)uVar109) - (float)uVar107 * (float)uVar113;
    fVar86 = (fVar95 * fVar85 + fVar14 * fVar75 * (float)((ulong)uVar106 >> 0x20) +
             fVar14 * fVar81 * (float)((ulong)uVar109 >> 0x20)) -
             fVar46 * (float)((ulong)uVar113 >> 0x20);
    fVar97 = (fVar96 * (float)uVar11 + fVar73 * (float)uVar107 * (float)uVar112 +
             fVar73 * fVar97 * (float)uVar88) - (float)uVar89 * (float)uVar111;
    fVar81 = (fVar98 * fVar85 + fVar74 * fVar46 * (float)((ulong)uVar112 >> 0x20) +
             fVar74 * fVar75 * (float)((ulong)uVar88 >> 0x20)) -
             fVar81 * (float)((ulong)uVar111 >> 0x20);
    auVar22._4_4_ = fVar86;
    auVar22._0_4_ = fVar76;
    auVar22._8_4_ = fVar97;
    auVar22._12_4_ = fVar81;
    uVar89 = a64_TBL(ZEXT816(0),auVar22,DAT_0388a580);
    fVar82 = (float)((ulong)uVar110 >> 0x20);
    auVar80[1] = extraout_var;
    auVar80[0] = extraout_b0;
    auVar80[2] = extraout_var_00;
    auVar80[3] = extraout_var_01;
    auVar80[4] = extraout_var_02;
    auVar80[5] = extraout_var_03;
    auVar80[6] = extraout_var_04;
    auVar80[7] = extraout_var_05;
    auVar80[8] = extraout_var_06;
    auVar80[9] = extraout_var_07;
    auVar80[10] = extraout_var_08;
    auVar80[0xb] = extraout_var_09;
    auVar80[0xc] = extraout_var_10;
    auVar80[0xd] = extraout_var_11;
    auVar80[0xe] = extraout_var_12;
    auVar80[0xf] = extraout_var_13;
    uVar112 = a64_TBL(ZEXT816(0),auVar80,DAT_0388a680);
    auVar23._4_4_ = fVar86;
    auVar23._0_4_ = fVar76;
    auVar23._8_4_ = fVar97;
    auVar23._12_4_ = fVar81;
    uVar106 = a64_TBL(ZEXT816(0),auVar23,DAT_0388a6c8);
    fVar83 = (float)((ulong)uVar112 >> 0x20);
    auVar24._4_4_ = fVar86;
    auVar24._0_4_ = fVar76;
    auVar24._8_4_ = fVar97;
    auVar24._12_4_ = fVar81;
    uVar107 = a64_TBL(ZEXT816(0),auVar24,DAT_0388a680);
    auVar25._4_4_ = fVar86;
    auVar25._0_4_ = fVar76;
    auVar25._8_4_ = fVar97;
    auVar25._12_4_ = fVar81;
    uVar109 = a64_TBL(ZEXT816(0),auVar25,DAT_0388a880);
    auVar4[1] = extraout_var;
    auVar4[0] = extraout_b0;
    auVar4[2] = extraout_var_00;
    auVar4[3] = extraout_var_01;
    auVar4[4] = extraout_var_02;
    auVar4[5] = extraout_var_03;
    auVar4[6] = extraout_var_04;
    auVar4[7] = extraout_var_05;
    auVar4[8] = extraout_var_06;
    auVar4[9] = extraout_var_07;
    auVar4[10] = extraout_var_08;
    auVar4[0xb] = extraout_var_09;
    auVar4[0xc] = extraout_var_10;
    auVar4[0xd] = extraout_var_11;
    auVar4[0xe] = extraout_var_12;
    auVar4[0xf] = extraout_var_13;
    uVar88 = a64_TBL(ZEXT816(0),auVar4,DAT_0388a880);
    fVar75 = (float)((ulong)uVar88 >> 0x20);
    auVar39._4_4_ = fVar86;
    auVar39._0_4_ = fVar76;
    auVar39._8_4_ = fVar76;
    auVar39._12_4_ = fVar86;
    uVar11 = a64_TBL(ZEXT816(0),auVar39,DAT_0388a648);
    fVar46 = (float)CONCAT13(extraout_var_01,
                             CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))) *
             (float)uVar11;
    fVar85 = (float)CONCAT13(extraout_var_05,
                             CONCAT12(extraout_var_04,CONCAT11(extraout_var_03,extraout_var_02))) *
             (float)((ulong)uVar11 >> 0x20);
    auVar26._4_4_ = fVar86;
    auVar26._0_4_ = fVar76;
    auVar26._8_4_ = fVar97;
    auVar26._12_4_ = fVar81;
    uVar11 = a64_TBL(ZEXT816(0),auVar26,DAT_0388a790);
    fVar45 = ((float)uVar110 * fVar76 +
              fVar45 * (float)CONCAT13(extraout_var_01,
                                       CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)))
                       * (float)uVar89 + fVar45 * (float)uVar88 * (float)uVar107) -
             (float)uVar112 * (float)uVar109;
    fVar14 = (fVar82 * fVar86 +
              fVar14 * (float)CONCAT13(extraout_var_05,
                                       CONCAT12(extraout_var_04,
                                                CONCAT11(extraout_var_03,extraout_var_02))) *
                       (float)((ulong)uVar89 >> 0x20) +
             fVar14 * fVar75 * (float)((ulong)uVar107 >> 0x20)) -
             fVar83 * (float)((ulong)uVar109 >> 0x20);
    fVar73 = ((float)uVar110 * fVar97 + fVar73 * (float)uVar112 * (float)uVar106 + fVar73 * fVar46)
             - (float)uVar88 * (float)uVar11;
    fVar46 = (fVar82 * fVar81 + fVar74 * fVar83 * (float)((ulong)uVar106 >> 0x20) +
             fVar74 * (float)(CONCAT17((char)((uint)fVar85 >> 0x18),
                                       CONCAT16((char)((uint)fVar85 >> 0x10),
                                                CONCAT15((char)((uint)fVar85 >> 8),
                                                         CONCAT14(SUB41(fVar85,0),fVar46)))) >> 0x20
                             )) - fVar75 * (float)((ulong)uVar11 >> 0x20);
    if (local_18 != (long *)0x0) {
      lVar44 = local_18[0xb];
      piVar1 = (int *)(lVar44 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar44 + 0x18) = 0;
        (**(code **)(*local_18 + 0x20))();
      }
    }
    bVar47 = SUB41(fVar45,0) & bVar47;
    bVar49 = (byte)((uint)fVar45 >> 8) & bVar49;
    bVar50 = (byte)((uint)fVar45 >> 0x10) & bVar50;
    bVar51 = (byte)((uint)fVar45 >> 0x18) & bVar51;
    bVar52 = SUB41(fVar14,0) & bVar52;
    bVar53 = (byte)((uint)fVar14 >> 8) & bVar53;
    bVar54 = (byte)((uint)fVar14 >> 0x10) & bVar54;
    bVar55 = (byte)((uint)fVar14 >> 0x18) & bVar55;
    bVar56 = SUB41(fVar73,0) & bVar56;
    bVar57 = (byte)((uint)fVar73 >> 8) & bVar57;
    bVar58 = (byte)((uint)fVar73 >> 0x10) & bVar58;
    bVar59 = (byte)((uint)fVar73 >> 0x18) & bVar59;
    bVar60 = SUB41(fVar46,0) & bVar60;
    bVar61 = (byte)((uint)fVar46 >> 8) & bVar61;
    bVar62 = (byte)((uint)fVar46 >> 0x10) & bVar62;
    bVar63 = (byte)((uint)fVar46 >> 0x18) & bVar63;
  }
  auVar48[1] = bVar49;
  auVar48[0] = bVar47;
  auVar48[2] = bVar50;
  auVar48[3] = bVar51;
  auVar48[4] = bVar52;
  auVar48[5] = bVar53;
  auVar48[6] = bVar54;
  auVar48[7] = bVar55;
  auVar48[8] = bVar56;
  auVar48[9] = bVar57;
  auVar48[10] = bVar58;
  auVar48[0xb] = bVar59;
  auVar48[0xc] = bVar60;
  auVar48[0xd] = bVar61;
  auVar48[0xe] = bVar62;
  auVar48[0xf] = bVar63;
  return auVar48;
}


