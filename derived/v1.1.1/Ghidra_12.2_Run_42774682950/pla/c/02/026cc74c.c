/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026cc74c; name: FUN_026cc74c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_026cc74c(undefined1 (*param_1) [12],undefined1 (*param_2) [12])

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined8 uVar3;
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
  undefined1 extraout_b0;
  undefined1 uVar37;
  undefined1 extraout_var;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 extraout_var_00;
  undefined1 uVar40;
  undefined1 extraout_var_01;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 auVar46 [16];
  undefined8 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar67;
  byte bVar68;
  undefined8 uVar61;
  float fVar66;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  undefined8 uVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  undefined8 uVar102;
  undefined8 uVar103;
  undefined8 uVar104;
  undefined8 uVar105;
  undefined8 uVar106;
  undefined8 uVar107;
  undefined8 uVar108;
  
  fVar55 = (float)((ulong)*(undefined8 *)(*param_1 + 8) >> 0x20);
  fVar53 = (float)*(undefined8 *)*param_1;
  fVar54 = (float)((ulong)*(undefined8 *)*param_1 >> 0x20);
  fVar93 = (float)((ulong)_UNK_03889ac8 >> 0x20);
  fVar91 = (float)((ulong)_DAT_03889ac0 >> 0x20);
  fVar85 = fVar53 * (float)_DAT_03889ac0;
  fVar86 = fVar54 * fVar91;
  uVar37 = SUB41(fVar86,0);
  uVar38 = (undefined1)((uint)fVar86 >> 8);
  uVar39 = (undefined1)((uint)fVar86 >> 0x10);
  uVar40 = (undefined1)((uint)fVar86 >> 0x18);
  fVar88 = (float)*(undefined8 *)(*param_1 + 8) * (float)_UNK_03889ac8;
  uVar41 = SUB41(fVar88,0);
  uVar42 = (undefined1)((uint)fVar88 >> 8);
  uVar43 = (undefined1)((uint)fVar88 >> 0x10);
  uVar44 = (undefined1)((uint)fVar88 >> 0x18);
  fVar89 = fVar55 * fVar93;
  uVar45 = SUB41(fVar89,0);
  uVar48 = (undefined1)((uint)fVar89 >> 8);
  uVar49 = (undefined1)((uint)fVar89 >> 0x10);
  uVar50 = (undefined1)((uint)fVar89 >> 0x18);
  uVar77 = (undefined1)_UNK_03888d18;
  uVar78 = (undefined1)((ulong)_UNK_03888d18 >> 8);
  uVar79 = (undefined1)((ulong)_UNK_03888d18 >> 0x10);
  uVar80 = (undefined1)((ulong)_UNK_03888d18 >> 0x18);
  uVar81 = (undefined1)((ulong)_UNK_03888d18 >> 0x20);
  uVar82 = (undefined1)((ulong)_UNK_03888d18 >> 0x28);
  uVar83 = (undefined1)((ulong)_UNK_03888d18 >> 0x30);
  uVar84 = (undefined1)((ulong)_UNK_03888d18 >> 0x38);
  auVar18[8] = uVar77;
  auVar18._0_8_ = _DAT_03888d10;
  auVar18[9] = uVar78;
  auVar18[10] = uVar79;
  auVar18[0xb] = uVar80;
  auVar18[0xc] = uVar81;
  auVar18[0xd] = uVar82;
  auVar18[0xe] = uVar83;
  auVar18[0xf] = uVar84;
  uVar61 = a64_TBL(ZEXT816(0),auVar18,DAT_0388a580);
  auVar19[8] = uVar77;
  auVar19._0_8_ = _DAT_03888d10;
  auVar19[9] = uVar78;
  auVar19[10] = uVar79;
  auVar19[0xb] = uVar80;
  auVar19[0xc] = uVar81;
  auVar19[0xd] = uVar82;
  auVar19[0xe] = uVar83;
  auVar19[0xf] = uVar84;
  uVar95 = a64_TBL(ZEXT816(0),auVar19,DAT_0388a680);
  auVar4[4] = uVar37;
  auVar4._0_4_ = fVar85;
  auVar4[5] = uVar38;
  auVar4[6] = uVar39;
  auVar4[7] = uVar40;
  auVar4[8] = uVar41;
  auVar4[9] = uVar42;
  auVar4[10] = uVar43;
  auVar4[0xb] = uVar44;
  auVar4[0xc] = uVar45;
  auVar4[0xd] = uVar48;
  auVar4[0xe] = uVar49;
  auVar4[0xf] = uVar50;
  uVar3 = a64_TBL(ZEXT816(0),auVar4,DAT_0388a580);
  auVar5[4] = uVar37;
  auVar5._0_4_ = fVar85;
  auVar5[5] = uVar38;
  auVar5[6] = uVar39;
  auVar5[7] = uVar40;
  auVar5[8] = uVar41;
  auVar5[9] = uVar42;
  auVar5[10] = uVar43;
  auVar5[0xb] = uVar44;
  auVar5[0xc] = uVar45;
  auVar5[0xd] = uVar48;
  auVar5[0xe] = uVar49;
  auVar5[0xf] = uVar50;
  uVar47 = a64_TBL(ZEXT816(0),auVar5,DAT_0388a6c8);
  fVar94 = (float)uVar95;
  fVar2 = fVar94 * (float)uVar47;
  fVar96 = (float)((ulong)uVar95 >> 0x20);
  fVar52 = fVar96 * (float)((ulong)uVar47 >> 0x20);
  fVar57 = (float)uVar61;
  fVar66 = (float)((ulong)uVar61 >> 0x20);
  auVar6[4] = uVar37;
  auVar6._0_4_ = fVar85;
  auVar6[5] = uVar38;
  auVar6[6] = uVar39;
  auVar6[7] = uVar40;
  auVar6[8] = uVar41;
  auVar6[9] = uVar42;
  auVar6[10] = uVar43;
  auVar6[0xb] = uVar44;
  auVar6[0xc] = uVar45;
  auVar6[0xd] = uVar48;
  auVar6[0xe] = uVar49;
  auVar6[0xf] = uVar50;
  uVar61 = a64_TBL(ZEXT816(0),auVar6,DAT_0388a880);
  auVar20[8] = uVar77;
  auVar20._0_8_ = _DAT_03888d10;
  auVar20[9] = uVar78;
  auVar20[10] = uVar79;
  auVar20[0xb] = uVar80;
  auVar20[0xc] = uVar81;
  auVar20[0xd] = uVar82;
  auVar20[0xe] = uVar83;
  auVar20[0xf] = uVar84;
  uVar47 = a64_TBL(ZEXT816(0),auVar20,DAT_0388a880);
  fVar56 = (float)_DAT_03889ad0;
  fVar58 = (float)((ulong)_DAT_03889ad0 >> 0x20);
  fVar59 = (float)_UNK_03889ad8;
  fVar60 = (float)((ulong)_UNK_03889ad8 >> 0x20);
  auVar7[4] = uVar37;
  auVar7._0_4_ = fVar85;
  auVar7[5] = uVar38;
  auVar7[6] = uVar39;
  auVar7[7] = uVar40;
  auVar7[8] = uVar41;
  auVar7[9] = uVar42;
  auVar7[10] = uVar43;
  auVar7[0xb] = uVar44;
  auVar7[0xc] = uVar45;
  auVar7[0xd] = uVar48;
  auVar7[0xe] = uVar49;
  auVar7[0xf] = uVar50;
  uVar95 = a64_TBL(ZEXT816(0),auVar7,DAT_0388a680);
  fVar97 = (float)uVar47;
  fVar98 = (float)((ulong)uVar47 >> 0x20);
  auVar8[4] = uVar37;
  auVar8._0_4_ = fVar85;
  auVar8[5] = uVar38;
  auVar8[6] = uVar39;
  auVar8[7] = uVar40;
  auVar8[8] = uVar41;
  auVar8[9] = uVar42;
  auVar8[10] = uVar43;
  auVar8[0xb] = uVar44;
  auVar8[0xc] = uVar45;
  auVar8[0xd] = uVar48;
  auVar8[0xe] = uVar49;
  auVar8[0xf] = uVar50;
  uVar102 = a64_TBL(ZEXT816(0),auVar8,DAT_0388a790);
  auVar36._4_4_ =
       (int)(CONCAT17(uVar40,CONCAT16(uVar39,CONCAT15(uVar38,CONCAT14(uVar37,fVar85)))) >> 0x20);
  auVar36._0_4_ = fVar85;
  auVar36._8_4_ = fVar85;
  auVar36._12_4_ =
       (int)(CONCAT17(uVar40,CONCAT16(uVar39,CONCAT15(uVar38,CONCAT14(uVar37,fVar85)))) >> 0x20);
  uVar47 = a64_TBL(ZEXT816(0),auVar36,DAT_0388a648);
  fVar90 = (float)uVar47 * 0.0;
  fVar51 = (float)((ulong)uVar47 >> 0x20) * 0.0;
  auVar9._12_4_ = fVar55;
  auVar9._0_12_ = *param_1;
  uVar47 = a64_TBL(ZEXT816(0),auVar9,DAT_0388a580);
  fVar85 = (fVar85 * fVar57 + fVar56 * (float)uVar3 * 0.0 + fVar56 * fVar97 * (float)uVar95) -
           fVar94 * (float)uVar61;
  fVar86 = (fVar86 * fVar66 + fVar58 * (float)((ulong)uVar3 >> 0x20) * 0.0 +
           fVar58 * fVar98 * (float)((ulong)uVar95 >> 0x20)) -
           fVar96 * (float)((ulong)uVar61 >> 0x20);
  fVar88 = (fVar88 * fVar57 + fVar59 * fVar2 + fVar59 * fVar90) - fVar97 * (float)uVar102;
  fVar89 = (fVar89 * fVar66 +
            fVar60 * (float)(CONCAT17((char)((uint)fVar52 >> 0x18),
                                      CONCAT16((char)((uint)fVar52 >> 0x10),
                                               CONCAT15((char)((uint)fVar52 >> 8),
                                                        CONCAT14(SUB41(fVar52,0),fVar2)))) >> 0x20)
           + fVar60 * (float)(CONCAT17((char)((uint)fVar51 >> 0x18),
                                       CONCAT16((char)((uint)fVar51 >> 0x10),
                                                CONCAT15((char)((uint)fVar51 >> 8),
                                                         CONCAT14(SUB41(fVar51,0),fVar90)))) >> 0x20
                             )) - fVar98 * (float)((ulong)uVar102 >> 0x20);
  fVar101 = (float)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
  fVar99 = (float)*(undefined8 *)*param_2;
  fVar100 = (float)((ulong)*(undefined8 *)*param_2 >> 0x20);
  auVar21._4_4_ = fVar86;
  auVar21._0_4_ = fVar85;
  auVar21._8_4_ = fVar88;
  auVar21._12_4_ = fVar89;
  uVar102 = a64_TBL(ZEXT816(0),auVar21,DAT_0388a580);
  fVar90 = fVar99 * (float)_DAT_03889ac0;
  fVar91 = fVar100 * fVar91;
  fVar92 = (float)*(undefined8 *)(*param_2 + 8) * (float)_UNK_03889ac8;
  fVar93 = fVar101 * fVar93;
  auVar27._4_4_ = fVar91;
  auVar27._0_4_ = fVar90;
  auVar27._8_4_ = fVar92;
  auVar27._12_4_ = fVar93;
  uVar103 = a64_TBL(ZEXT816(0),auVar27,DAT_0388a6c8);
  fVar2 = (float)((ulong)uVar47 >> 0x20);
  auVar10._12_4_ = fVar55;
  auVar10._0_12_ = *param_1;
  uVar104 = a64_TBL(ZEXT816(0),auVar10,DAT_0388a680);
  auVar22._4_4_ = fVar86;
  auVar22._0_4_ = fVar85;
  auVar22._8_4_ = fVar88;
  auVar22._12_4_ = fVar89;
  uVar106 = a64_TBL(ZEXT816(0),auVar22,DAT_0388a6c8);
  fVar51 = (float)((ulong)uVar104 >> 0x20);
  auVar23._4_4_ = fVar86;
  auVar23._0_4_ = fVar85;
  auVar23._8_4_ = fVar88;
  auVar23._12_4_ = fVar89;
  uVar107 = a64_TBL(ZEXT816(0),auVar23,DAT_0388a880);
  auVar24._4_4_ = fVar86;
  auVar24._0_4_ = fVar85;
  auVar24._8_4_ = fVar88;
  auVar24._12_4_ = fVar89;
  uVar105 = a64_TBL(ZEXT816(0),auVar24,DAT_0388a680);
  auVar25._4_4_ = fVar86;
  auVar25._0_4_ = fVar85;
  auVar25._8_4_ = fVar88;
  auVar25._12_4_ = fVar89;
  uVar108 = a64_TBL(ZEXT816(0),auVar25,DAT_0388a790);
  auVar26._4_4_ = fVar86;
  auVar26._0_4_ = fVar85;
  auVar26._8_4_ = fVar85;
  auVar26._12_4_ = fVar86;
  uVar61 = a64_TBL(ZEXT816(0),auVar26,DAT_0388a648);
  auVar11._12_4_ = fVar55;
  auVar11._0_12_ = *param_1;
  uVar3 = a64_TBL(ZEXT816(0),auVar11,DAT_0388a880);
  fVar52 = (float)((ulong)uVar3 >> 0x20);
  auVar28._4_4_ = fVar91;
  auVar28._0_4_ = fVar90;
  auVar28._8_4_ = fVar92;
  auVar28._12_4_ = fVar93;
  uVar95 = a64_TBL(ZEXT816(0),auVar28,DAT_0388a580);
  fVar85 = ((float)uVar47 * fVar85 + fVar56 * fVar53 * (float)uVar102 +
           fVar56 * (float)uVar3 * (float)uVar105) - (float)uVar104 * (float)uVar107;
  fVar86 = (fVar2 * fVar86 + fVar58 * fVar54 * (float)((ulong)uVar102 >> 0x20) +
           fVar58 * fVar52 * (float)((ulong)uVar105 >> 0x20)) -
           fVar51 * (float)((ulong)uVar107 >> 0x20);
  fVar88 = ((float)uVar47 * fVar88 + fVar59 * (float)uVar104 * (float)uVar106 +
           fVar59 * fVar53 * (float)uVar61) - (float)uVar3 * (float)uVar108;
  fVar89 = (fVar2 * fVar89 + fVar60 * fVar51 * (float)((ulong)uVar106 >> 0x20) +
           fVar60 * fVar54 * (float)((ulong)uVar61 >> 0x20)) -
           fVar52 * (float)((ulong)uVar108 >> 0x20);
  auVar29._4_4_ = fVar91;
  auVar29._0_4_ = fVar90;
  auVar29._8_4_ = fVar92;
  auVar29._12_4_ = fVar93;
  uVar105 = a64_TBL(ZEXT816(0),auVar29,DAT_0388a790);
  auVar30._4_4_ = fVar91;
  auVar30._0_4_ = fVar90;
  auVar30._8_4_ = fVar92;
  auVar30._12_4_ = fVar93;
  uVar3 = a64_TBL(ZEXT816(0),auVar30,DAT_0388a680);
  auVar31._4_4_ = fVar91;
  auVar31._0_4_ = fVar90;
  auVar31._8_4_ = fVar92;
  auVar31._12_4_ = fVar93;
  uVar102 = a64_TBL(ZEXT816(0),auVar31,DAT_0388a880);
  auVar32._4_4_ = fVar91;
  auVar32._0_4_ = fVar90;
  auVar32._8_4_ = fVar90;
  auVar32._12_4_ = fVar91;
  uVar61 = a64_TBL(ZEXT816(0),auVar32,DAT_0388a648);
  auVar33._12_4_ = fVar101;
  auVar33._0_12_ = *param_2;
  uVar106 = a64_TBL(ZEXT816(0),auVar33,DAT_0388a580);
  auVar34._12_4_ = fVar101;
  auVar34._0_12_ = *param_2;
  uVar47 = a64_TBL(ZEXT816(0),auVar34,DAT_0388a680);
  fVar87 = (float)((ulong)uVar47 >> 0x20);
  fVar51 = (fVar57 * fVar90 + fVar56 * (float)uVar95 * 0.0 + fVar56 * fVar97 * (float)uVar3) -
           fVar94 * (float)uVar102;
  fVar53 = (fVar66 * fVar91 + fVar58 * (float)((ulong)uVar95 >> 0x20) * 0.0 +
           fVar58 * fVar98 * (float)((ulong)uVar3 >> 0x20)) -
           fVar96 * (float)((ulong)uVar102 >> 0x20);
  fVar54 = (fVar57 * fVar92 + fVar59 * fVar94 * (float)uVar103 + fVar59 * (float)uVar61 * 0.0) -
           fVar97 * (float)uVar105;
  fVar55 = (fVar66 * fVar93 + fVar60 * fVar96 * (float)((ulong)uVar103 >> 0x20) +
           fVar60 * (float)((ulong)uVar61 >> 0x20) * 0.0) - fVar98 * (float)((ulong)uVar105 >> 0x20)
  ;
  auVar12._4_4_ = fVar53;
  auVar12._0_4_ = fVar51;
  auVar12._8_4_ = fVar54;
  auVar12._12_4_ = fVar55;
  uVar102 = a64_TBL(ZEXT816(0),auVar12,DAT_0388a580);
  auVar13._4_4_ = fVar53;
  auVar13._0_4_ = fVar51;
  auVar13._8_4_ = fVar54;
  auVar13._12_4_ = fVar55;
  uVar105 = a64_TBL(ZEXT816(0),auVar13,DAT_0388a6c8);
  fVar57 = (float)((ulong)uVar106 >> 0x20);
  auVar14._4_4_ = fVar53;
  auVar14._0_4_ = fVar51;
  auVar14._8_4_ = fVar54;
  auVar14._12_4_ = fVar55;
  uVar61 = a64_TBL(ZEXT816(0),auVar14,DAT_0388a680);
  auVar15._4_4_ = fVar53;
  auVar15._0_4_ = fVar51;
  auVar15._8_4_ = fVar54;
  auVar15._12_4_ = fVar55;
  uVar103 = a64_TBL(ZEXT816(0),auVar15,DAT_0388a880);
  auVar16._4_4_ = fVar53;
  auVar16._0_4_ = fVar51;
  auVar16._8_4_ = fVar54;
  auVar16._12_4_ = fVar55;
  uVar104 = a64_TBL(ZEXT816(0),auVar16,DAT_0388a790);
  auVar35._12_4_ = fVar101;
  auVar35._0_12_ = *param_2;
  uVar95 = a64_TBL(ZEXT816(0),auVar35,DAT_0388a880);
  fVar90 = (float)((ulong)uVar95 >> 0x20);
  auVar17._4_4_ = fVar53;
  auVar17._0_4_ = fVar51;
  auVar17._8_4_ = fVar51;
  auVar17._12_4_ = fVar53;
  uVar3 = a64_TBL(ZEXT816(0),auVar17,DAT_0388a648);
  fVar2 = fVar99 * (float)uVar3;
  fVar52 = fVar100 * (float)((ulong)uVar3 >> 0x20);
  fVar56 = ((float)uVar106 * fVar51 + fVar56 * fVar99 * (float)uVar102 +
           fVar56 * (float)uVar95 * (float)uVar61) - (float)uVar47 * (float)uVar103;
  fVar58 = (fVar57 * fVar53 + fVar58 * fVar100 * (float)((ulong)uVar102 >> 0x20) +
           fVar58 * fVar90 * (float)((ulong)uVar61 >> 0x20)) -
           fVar87 * (float)((ulong)uVar103 >> 0x20);
  fVar59 = ((float)uVar106 * fVar54 + fVar59 * (float)uVar47 * (float)uVar105 + fVar59 * fVar2) -
           (float)uVar95 * (float)uVar104;
  fVar60 = (fVar57 * fVar55 + fVar60 * fVar87 * (float)((ulong)uVar105 >> 0x20) +
           fVar60 * (float)(CONCAT17((char)((uint)fVar52 >> 0x18),
                                     CONCAT16((char)((uint)fVar52 >> 0x10),
                                              CONCAT15((char)((uint)fVar52 >> 8),
                                                       CONCAT14(SUB41(fVar52,0),fVar2)))) >> 0x20))
           - fVar90 * (float)((ulong)uVar104 >> 0x20);
  bVar62 = (byte)((ulong)_DAT_038897c0 >> 8);
  bVar63 = (byte)((ulong)_DAT_038897c0 >> 0x10);
  bVar64 = (byte)((ulong)_DAT_038897c0 >> 0x18);
  bVar65 = (byte)((ulong)_DAT_038897c0 >> 0x20);
  bVar67 = (byte)((ulong)_DAT_038897c0 >> 0x28);
  bVar68 = (byte)((ulong)_DAT_038897c0 >> 0x30);
  bVar69 = (byte)((ulong)_DAT_038897c0 >> 0x38);
  bVar70 = (byte)((ulong)_UNK_038897c8 >> 8);
  bVar71 = (byte)((ulong)_UNK_038897c8 >> 0x10);
  bVar72 = (byte)((ulong)_UNK_038897c8 >> 0x18);
  bVar73 = (byte)((ulong)_UNK_038897c8 >> 0x20);
  bVar74 = (byte)((ulong)_UNK_038897c8 >> 0x28);
  bVar75 = (byte)((ulong)_UNK_038897c8 >> 0x30);
  bVar76 = (byte)((ulong)_UNK_038897c8 >> 0x38);
  fVar56 = (float)CONCAT13((byte)((uint)fVar85 >> 0x18) & bVar64,
                           CONCAT12((byte)((uint)fVar85 >> 0x10) & bVar63,
                                    CONCAT11((byte)((uint)fVar85 >> 8) & bVar62,
                                             SUB41(fVar85,0) & (byte)_DAT_038897c0))) *
           (float)CONCAT13((byte)((uint)fVar56 >> 0x18) & bVar64,
                           CONCAT12((byte)((uint)fVar56 >> 0x10) & bVar63,
                                    CONCAT11((byte)((uint)fVar56 >> 8) & bVar62,
                                             SUB41(fVar56,0) & (byte)_DAT_038897c0)));
  fVar58 = (float)CONCAT13((byte)((uint)fVar86 >> 0x18) & bVar69,
                           CONCAT12((byte)((uint)fVar86 >> 0x10) & bVar68,
                                    CONCAT11((byte)((uint)fVar86 >> 8) & bVar67,
                                             SUB41(fVar86,0) & bVar65))) *
           (float)CONCAT13((byte)((uint)fVar58 >> 0x18) & bVar69,
                           CONCAT12((byte)((uint)fVar58 >> 0x10) & bVar68,
                                    CONCAT11((byte)((uint)fVar58 >> 8) & bVar67,
                                             SUB41(fVar58,0) & bVar65)));
  uVar37 = (undefined1)((uint)fVar58 >> 8);
  uVar38 = (undefined1)((uint)fVar58 >> 0x10);
  uVar39 = (undefined1)((uint)fVar58 >> 0x18);
  fVar59 = (float)CONCAT13((byte)((uint)fVar88 >> 0x18) & bVar72,
                           CONCAT12((byte)((uint)fVar88 >> 0x10) & bVar71,
                                    CONCAT11((byte)((uint)fVar88 >> 8) & bVar70,
                                             SUB41(fVar88,0) & (byte)_UNK_038897c8))) *
           (float)CONCAT13((byte)((uint)fVar59 >> 0x18) & bVar72,
                           CONCAT12((byte)((uint)fVar59 >> 0x10) & bVar71,
                                    CONCAT11((byte)((uint)fVar59 >> 8) & bVar70,
                                             SUB41(fVar59,0) & (byte)_UNK_038897c8)));
  uVar40 = (undefined1)((uint)fVar59 >> 8);
  uVar41 = (undefined1)((uint)fVar59 >> 0x10);
  uVar42 = (undefined1)((uint)fVar59 >> 0x18);
  fVar60 = (float)CONCAT13((byte)((uint)fVar89 >> 0x18) & bVar76,
                           CONCAT12((byte)((uint)fVar89 >> 0x10) & bVar75,
                                    CONCAT11((byte)((uint)fVar89 >> 8) & bVar74,
                                             SUB41(fVar89,0) & bVar73))) *
           (float)CONCAT13((byte)((uint)fVar60 >> 0x18) & bVar76,
                           CONCAT12((byte)((uint)fVar60 >> 0x10) & bVar75,
                                    CONCAT11((byte)((uint)fVar60 >> 8) & bVar74,
                                             SUB41(fVar60,0) & bVar73)));
  uVar43 = (undefined1)((uint)fVar60 >> 8);
  uVar44 = (undefined1)((uint)fVar60 >> 0x10);
  uVar45 = (undefined1)((uint)fVar60 >> 0x18);
  auVar46[4] = SUB41(fVar58,0);
  auVar46._0_4_ = fVar56;
  auVar46[5] = uVar37;
  auVar46[6] = uVar38;
  auVar46[7] = uVar39;
  auVar46[8] = SUB41(fVar59,0);
  auVar46[9] = uVar40;
  auVar46[10] = uVar41;
  auVar46[0xb] = uVar42;
  auVar46[0xc] = SUB41(fVar60,0);
  auVar46[0xd] = uVar43;
  auVar46[0xe] = uVar44;
  auVar46[0xf] = uVar45;
  auVar1[4] = SUB41(fVar58,0);
  auVar1._0_4_ = fVar56;
  auVar1[5] = uVar37;
  auVar1[6] = uVar38;
  auVar1[7] = uVar39;
  auVar1[8] = SUB41(fVar59,0);
  auVar1[9] = uVar40;
  auVar1[10] = uVar41;
  auVar1[0xb] = uVar42;
  auVar1[0xc] = SUB41(fVar60,0);
  auVar1[0xd] = uVar43;
  auVar1[0xe] = uVar44;
  auVar1[0xf] = uVar45;
  auVar46 = NEON_ext(auVar46,auVar1,8,1);
  fVar56 = auVar46._0_4_ + fVar56 + auVar46._4_4_ + fVar58;
  uVar37 = SUB41(fVar56,0);
  uVar38 = (undefined1)((uint)fVar56 >> 8);
  uVar39 = (undefined1)((uint)fVar56 >> 0x10);
  uVar40 = (undefined1)((uint)fVar56 >> 0x18);
  auVar46 = ZEXT816(0xbf800000);
  if (fVar56 <= auVar46._0_4_) {
    uVar37 = 0;
    uVar38 = 0;
    uVar39 = auVar46[2];
    uVar40 = auVar46[3];
  }
  if (1.0 < (float)CONCAT13(uVar40,CONCAT12(uVar39,CONCAT11(uVar38,uVar37)))) {
    uVar37 = 0;
  }
  FUN_0095d8f0(uVar37);
  fVar56 = -(float)CONCAT13(extraout_var_01,
                            CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)));
  uVar37 = SUB41(fVar56,0);
  uVar38 = (undefined1)((uint)fVar56 >> 8);
  uVar39 = (undefined1)((uint)fVar56 >> 0x10);
  uVar40 = (undefined1)((uint)fVar56 >> 0x18);
  if (NAN((float)CONCAT13(extraout_var_01,
                          CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)))) ||
      0.0 <= (float)CONCAT13(extraout_var_01,
                             CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)))) {
    uVar37 = extraout_b0;
    uVar38 = extraout_var;
    uVar39 = extraout_var_00;
    uVar40 = extraout_var_01;
  }
  return CONCAT13(uVar40,CONCAT12(uVar39,CONCAT11(uVar38,uVar37)));
}


