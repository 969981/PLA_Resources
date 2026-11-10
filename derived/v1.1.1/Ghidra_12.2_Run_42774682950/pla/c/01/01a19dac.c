/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a19dac; name: FUN_01a19dac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a19dac(long param_1,undefined8 *param_2,undefined8 *param_3,ulong *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulong uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined2 uVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  int iVar20;
  int iVar21;
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
  undefined8 uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined8 uVar44;
  float fVar45;
  float fVar46;
  undefined1 extraout_b0;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 uVar49;
  undefined1 extraout_b0_02;
  undefined1 uVar50;
  undefined1 extraout_b0_03;
  undefined1 extraout_var;
  undefined1 uVar51;
  undefined1 extraout_var_00;
  undefined1 uVar52;
  undefined1 extraout_var_01;
  undefined1 uVar53;
  undefined1 extraout_var_02;
  undefined1 uVar54;
  undefined1 extraout_var_03;
  byte bVar55;
  undefined1 extraout_var_04;
  undefined1 uVar56;
  undefined1 extraout_var_05;
  undefined1 uVar57;
  undefined1 extraout_var_06;
  undefined1 uVar58;
  undefined1 extraout_var_07;
  undefined1 uVar59;
  undefined1 extraout_var_08;
  byte bVar60;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 uVar61;
  undefined1 extraout_var_12;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 extraout_var_13;
  byte bVar64;
  undefined1 uVar65;
  undefined1 extraout_var_14;
  byte bVar66;
  undefined1 extraout_var_15;
  byte bVar67;
  undefined1 extraout_var_16;
  byte bVar68;
  undefined1 extraout_var_17;
  byte bVar69;
  undefined1 extraout_var_18;
  undefined1 extraout_var_19;
  byte bVar70;
  undefined1 extraout_var_20;
  byte bVar71;
  undefined1 extraout_var_21;
  byte bVar72;
  undefined1 extraout_var_22;
  byte bVar73;
  undefined1 extraout_var_23;
  byte bVar74;
  undefined1 extraout_var_24;
  byte bVar75;
  undefined1 extraout_var_25;
  byte bVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar86;
  float fVar87;
  float fVar88;
  undefined8 uVar89;
  undefined8 uVar90;
  undefined8 uVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  undefined8 uVar98;
  undefined8 uVar99;
  undefined8 uVar100;
  undefined8 uVar101;
  float fVar102;
  float fVar103;
  undefined8 uVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  undefined8 uVar112;
  float fVar114;
  undefined8 uVar113;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  undefined8 uVar119;
  float fVar120;
  undefined8 uVar121;
  float fVar122;
  
  fVar77 = (float)*param_2 + 0.0;
  fVar79 = (float)((ulong)*param_2 >> 0x20) +
           *(float *)((long)param_4 + 4) + *(float *)((long)param_5 + 4);
  fVar19 = (float)param_2[1] + 0.0;
  fVar45 = (float)((ulong)param_2[1] >> 0x20) + 0.0;
  fVar2 = (float)*param_3 + 0.0;
  fVar4 = (float)((ulong)*param_3 >> 0x20) + *(float *)((long)param_4 + 4);
  fVar5 = (float)param_3[1] + 0.0;
  fVar46 = (float)((ulong)param_3[1] >> 0x20) + 0.0;
  fVar3 = fVar77 - fVar2;
  fVar87 = fVar19 - fVar5;
  FUN_00aacd40(SUB41(fVar3,0),SUB41(fVar87,0));
  fVar88 = (float)CONCAT13(extraout_var_09,
                           CONCAT12(extraout_var_04,CONCAT11(extraout_var,extraout_b0))) + -360.0;
  uVar65 = (undefined1)((uint)fVar88 >> 0x18);
  bVar1 = NAN((float)CONCAT13(extraout_var_09,
                              CONCAT12(extraout_var_04,CONCAT11(extraout_var,extraout_b0))));
  uVar47 = SUB41(fVar88,0);
  uVar51 = (undefined1)((uint)fVar88 >> 8);
  uVar56 = (undefined1)((uint)fVar88 >> 0x10);
  if (!bVar1 && (float)CONCAT13(extraout_var_09,
                                CONCAT12(extraout_var_04,CONCAT11(extraout_var,extraout_b0))) ==
                180.0 ||
      (!bVar1 &&
      (float)CONCAT13(extraout_var_09,CONCAT12(extraout_var_04,CONCAT11(extraout_var,extraout_b0)))
      < 180.0) != bVar1) {
    uVar47 = extraout_b0;
    uVar51 = extraout_var;
    uVar56 = extraout_var_04;
    uVar65 = extraout_var_09;
  }
  if (!NAN((float)CONCAT13(uVar65,CONCAT12(uVar56,CONCAT11(uVar51,uVar47)))) &&
      (float)CONCAT13(uVar65,CONCAT12(uVar56,CONCAT11(uVar51,uVar47))) < -180.0) {
    fVar88 = (float)CONCAT13(uVar65,CONCAT12(uVar56,CONCAT11(uVar51,uVar47))) + 360.0;
    uVar47 = SUB41(fVar88,0);
    uVar51 = (undefined1)((uint)fVar88 >> 8);
    uVar56 = (undefined1)((uint)fVar88 >> 0x10);
    uVar65 = (undefined1)((uint)fVar88 >> 0x18);
  }
  fVar3 = fVar3 * fVar3 + fVar87 * fVar87;
  fVar87 = SQRT(fVar3);
  uVar48 = SUB41(fVar87,0);
  if (NAN(fVar87)) {
    fVar3 = sqrtf(fVar3);
    uVar48 = SUB41(fVar3,0);
  }
  FUN_00aacd40(SUB41(fVar79 - fVar4,0),uVar48);
  fVar3 = (float)CONCAT13(extraout_var_10,
                          CONCAT12(extraout_var_05,CONCAT11(extraout_var_00,extraout_b0_00))) +
          -360.0;
  uVar62 = (undefined1)((uint)fVar3 >> 0x18);
  bVar1 = NAN((float)CONCAT13(extraout_var_10,
                              CONCAT12(extraout_var_05,CONCAT11(extraout_var_00,extraout_b0_00))));
  uVar48 = SUB41(fVar3,0);
  uVar52 = (undefined1)((uint)fVar3 >> 8);
  uVar57 = (undefined1)((uint)fVar3 >> 0x10);
  if (!bVar1 && (float)CONCAT13(extraout_var_10,
                                CONCAT12(extraout_var_05,CONCAT11(extraout_var_00,extraout_b0_00)))
                == 180.0 ||
      (!bVar1 &&
      (float)CONCAT13(extraout_var_10,
                      CONCAT12(extraout_var_05,CONCAT11(extraout_var_00,extraout_b0_00))) < 180.0)
      != bVar1) {
    uVar48 = extraout_b0_00;
    uVar52 = extraout_var_00;
    uVar57 = extraout_var_05;
    uVar62 = extraout_var_10;
  }
  fVar3 = (float)CONCAT13(uVar62,CONCAT12(uVar57,CONCAT11(uVar52,uVar48))) + 360.0;
  uVar49 = SUB41(fVar3,0);
  uVar53 = (char)((uint)fVar3 >> 8);
  uVar58 = (char)((uint)fVar3 >> 0x10);
  uVar61 = (char)((uint)fVar3 >> 0x18);
  if (NAN((float)CONCAT13(uVar62,CONCAT12(uVar57,CONCAT11(uVar52,uVar48)))) ||
      -180.0 <= (float)CONCAT13(uVar62,CONCAT12(uVar57,CONCAT11(uVar52,uVar48)))) {
    uVar49 = uVar48;
    uVar53 = uVar52;
    uVar58 = uVar57;
    uVar61 = uVar62;
  }
  fVar3 = -(float)CONCAT13(uVar61,CONCAT12(uVar58,CONCAT11(uVar53,uVar49)));
  fVar87 = ((float)*param_4 + (float)*param_5) - (float)*param_4;
  fVar88 = ((float)param_4[1] + (float)param_5[1]) - (float)param_4[1];
  FUN_00aacd40(SUB41(fVar87,0),SUB41(fVar88,0));
  fVar86 = (float)CONCAT13(extraout_var_11,
                           CONCAT12(extraout_var_06,CONCAT11(extraout_var_01,extraout_b0_01))) +
           -360.0;
  uVar62 = (undefined1)((uint)fVar86 >> 0x18);
  bVar1 = NAN((float)CONCAT13(extraout_var_11,
                              CONCAT12(extraout_var_06,CONCAT11(extraout_var_01,extraout_b0_01))));
  uVar48 = SUB41(fVar86,0);
  uVar52 = (undefined1)((uint)fVar86 >> 8);
  uVar57 = (undefined1)((uint)fVar86 >> 0x10);
  if (!bVar1 && (float)CONCAT13(extraout_var_11,
                                CONCAT12(extraout_var_06,CONCAT11(extraout_var_01,extraout_b0_01)))
                == 180.0 ||
      (!bVar1 &&
      (float)CONCAT13(extraout_var_11,
                      CONCAT12(extraout_var_06,CONCAT11(extraout_var_01,extraout_b0_01))) < 180.0)
      != bVar1) {
    uVar48 = extraout_b0_01;
    uVar52 = extraout_var_01;
    uVar57 = extraout_var_06;
    uVar62 = extraout_var_11;
  }
  fVar86 = (float)CONCAT13(uVar62,CONCAT12(uVar57,CONCAT11(uVar52,uVar48))) + 360.0;
  uVar49 = SUB41(fVar86,0);
  uVar53 = (char)((uint)fVar86 >> 8);
  uVar58 = (char)((uint)fVar86 >> 0x10);
  uVar61 = (char)((uint)fVar86 >> 0x18);
  if (NAN((float)CONCAT13(uVar62,CONCAT12(uVar57,CONCAT11(uVar52,uVar48)))) ||
      -180.0 <= (float)CONCAT13(uVar62,CONCAT12(uVar57,CONCAT11(uVar52,uVar48)))) {
    uVar49 = uVar48;
    uVar53 = uVar52;
    uVar58 = uVar57;
    uVar61 = uVar62;
  }
  fVar87 = fVar87 * fVar87 + fVar88 * fVar88;
  fVar88 = SQRT(fVar87);
  uVar48 = SUB41(fVar88,0);
  if (NAN(fVar88)) {
    fVar87 = sqrtf(fVar87);
    uVar48 = SUB41(fVar87,0);
  }
  FUN_00aacd40(0,uVar48);
  fVar87 = (float)CONCAT13(extraout_var_12,
                           CONCAT12(extraout_var_07,CONCAT11(extraout_var_02,extraout_b0_02))) +
           -360.0;
  uVar62 = (undefined1)((uint)fVar87 >> 0x18);
  bVar1 = NAN((float)CONCAT13(extraout_var_12,
                              CONCAT12(extraout_var_07,CONCAT11(extraout_var_02,extraout_b0_02))));
  uVar48 = SUB41(fVar87,0);
  uVar52 = (undefined1)((uint)fVar87 >> 8);
  uVar57 = (undefined1)((uint)fVar87 >> 0x10);
  if (!bVar1 && (float)CONCAT13(extraout_var_12,
                                CONCAT12(extraout_var_07,CONCAT11(extraout_var_02,extraout_b0_02)))
                == 180.0 ||
      (!bVar1 &&
      (float)CONCAT13(extraout_var_12,
                      CONCAT12(extraout_var_07,CONCAT11(extraout_var_02,extraout_b0_02))) < 180.0)
      != bVar1) {
    uVar48 = extraout_b0_02;
    uVar52 = extraout_var_02;
    uVar57 = extraout_var_07;
    uVar62 = extraout_var_12;
  }
  fVar87 = (float)CONCAT13(uVar62,CONCAT12(uVar57,CONCAT11(uVar52,uVar48))) + 360.0;
  uVar50 = SUB41(fVar87,0);
  uVar54 = (char)((uint)fVar87 >> 8);
  uVar59 = (char)((uint)fVar87 >> 0x10);
  uVar63 = (char)((uint)fVar87 >> 0x18);
  if (NAN((float)CONCAT13(uVar62,CONCAT12(uVar57,CONCAT11(uVar52,uVar48)))) ||
      -180.0 <= (float)CONCAT13(uVar62,CONCAT12(uVar57,CONCAT11(uVar52,uVar48)))) {
    uVar50 = uVar48;
    uVar54 = uVar52;
    uVar59 = uVar57;
    uVar63 = uVar62;
  }
  fVar87 = *(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0;
  FUN_009a7ff4(SUB41(fVar87 * ((float)(CONCAT17(uVar65,CONCAT16(uVar56,CONCAT15(uVar51,CONCAT14(
                                                  uVar47,fVar3)))) >> 0x20) +
                              (float)CONCAT13(uVar61,CONCAT12(uVar58,CONCAT11(uVar53,uVar49)))),0),
               SUB41(fVar87 * (fVar3 + -(float)CONCAT13(uVar63,CONCAT12(uVar59,CONCAT11(uVar54,
                                                  uVar50)))),0),fVar87 * 0.0);
  uVar12 = param_4[1];
  uVar47 = (undefined1)uVar12;
  uVar51 = (undefined1)(uVar12 >> 8);
  uVar56 = (undefined1)(uVar12 >> 0x10);
  uVar65 = (undefined1)(uVar12 >> 0x18);
  uVar48 = (undefined1)(uVar12 >> 0x20);
  uVar52 = (undefined1)(uVar12 >> 0x28);
  uVar57 = (undefined1)(uVar12 >> 0x30);
  uVar62 = (undefined1)(uVar12 >> 0x38);
  uVar11 = *param_4;
  fVar3 = (float)uVar11;
  fVar86 = fVar3 + (float)*param_5;
  fVar87 = (float)uVar12 + (float)param_5[1];
  fVar88 = (float)(uVar12 >> 0x20) + (float)((ulong)param_5[1] >> 0x20);
  fVar94 = (float)CONCAT13(extraout_var_13,
                           CONCAT12(extraout_var_08,CONCAT11(extraout_var_03,extraout_b0_03))) *
           (float)_DAT_03889ac0;
  fVar95 = (float)CONCAT13(extraout_var_17,
                           CONCAT12(extraout_var_16,CONCAT11(extraout_var_15,extraout_var_14))) *
           (float)((ulong)_DAT_03889ac0 >> 0x20);
  fVar96 = (float)CONCAT13(extraout_var_21,
                           CONCAT12(extraout_var_20,CONCAT11(extraout_var_19,extraout_var_18))) *
           (float)_UNK_03889ac8;
  fVar97 = (float)CONCAT13(extraout_var_25,
                           CONCAT12(extraout_var_24,CONCAT11(extraout_var_23,extraout_var_22))) *
           (float)((ulong)_UNK_03889ac8 >> 0x20);
  auVar6[8] = uVar47;
  auVar6._0_8_ = uVar11 & 0xffffffff;
  auVar6[9] = uVar51;
  auVar6[10] = uVar56;
  auVar6[0xb] = uVar65;
  auVar6[0xc] = uVar48;
  auVar6[0xd] = uVar52;
  auVar6[0xe] = uVar57;
  auVar6[0xf] = uVar62;
  uVar112 = a64_TBL(ZEXT816(0),auVar6,DAT_0388a880);
  auVar80[1] = extraout_var_03;
  auVar80[0] = extraout_b0_03;
  auVar80[2] = extraout_var_08;
  auVar80[3] = extraout_var_13;
  auVar80[4] = extraout_var_14;
  auVar80[5] = extraout_var_15;
  auVar80[6] = extraout_var_16;
  auVar80[7] = extraout_var_17;
  auVar80[8] = extraout_var_18;
  auVar80[9] = extraout_var_19;
  auVar80[10] = extraout_var_20;
  auVar80[0xb] = extraout_var_21;
  auVar80[0xc] = extraout_var_22;
  auVar80[0xd] = extraout_var_23;
  auVar80[0xe] = extraout_var_24;
  auVar80[0xf] = extraout_var_25;
  uVar90 = a64_TBL(ZEXT816(0),auVar80,DAT_0388a880);
  auVar25._4_4_ = fVar95;
  auVar25._0_4_ = fVar94;
  auVar25._8_4_ = fVar96;
  auVar25._12_4_ = fVar97;
  uVar99 = a64_TBL(ZEXT816(0),auVar25,DAT_0388a6c8);
  auVar26._4_4_ = fVar95;
  auVar26._0_4_ = fVar94;
  auVar26._8_4_ = fVar96;
  auVar26._12_4_ = fVar97;
  uVar100 = a64_TBL(ZEXT816(0),auVar26,DAT_0388a680);
  auVar27._4_4_ = fVar95;
  auVar27._0_4_ = fVar94;
  auVar27._8_4_ = fVar96;
  auVar27._12_4_ = fVar97;
  uVar101 = a64_TBL(ZEXT816(0),auVar27,DAT_0388a880);
  auVar28._4_4_ = fVar95;
  auVar28._0_4_ = fVar94;
  auVar28._8_4_ = fVar96;
  auVar28._12_4_ = fVar97;
  uVar104 = a64_TBL(ZEXT816(0),auVar28,DAT_0388a790);
  auVar7[8] = uVar47;
  auVar7._0_8_ = uVar11 & 0xffffffff;
  auVar7[9] = uVar51;
  auVar7[10] = uVar56;
  auVar7[0xb] = uVar65;
  auVar7[0xc] = uVar48;
  auVar7[0xd] = uVar52;
  auVar7[0xe] = uVar57;
  auVar7[0xf] = uVar62;
  uVar121 = a64_TBL(ZEXT816(0),auVar7,DAT_0388a680);
  auVar29._4_4_ = fVar95;
  auVar29._0_4_ = fVar94;
  auVar29._8_4_ = fVar96;
  auVar29._12_4_ = fVar97;
  uVar98 = a64_TBL(ZEXT816(0),auVar29,DAT_0388a580);
  auVar8[8] = uVar47;
  auVar8._0_8_ = uVar11 & 0xffffffff;
  auVar8[9] = uVar51;
  auVar8[10] = uVar56;
  auVar8[0xb] = uVar65;
  auVar8[0xc] = uVar48;
  auVar8[0xd] = uVar52;
  auVar8[0xe] = uVar57;
  auVar8[0xf] = uVar62;
  uVar37 = a64_TBL(ZEXT816(0),auVar8,DAT_0388a580);
  fVar109 = (float)((ulong)uVar37 >> 0x20);
  fVar110 = (float)((ulong)uVar100 >> 0x20);
  fVar114 = (float)((ulong)uVar112 >> 0x20);
  fVar93 = (float)((ulong)uVar99 >> 0x20);
  fVar122 = (float)((ulong)uVar121 >> 0x20);
  auVar22._4_4_ = 0;
  auVar22._0_4_ = fVar86;
  auVar22._8_4_ = fVar87;
  auVar22._12_4_ = fVar88;
  uVar113 = a64_TBL(ZEXT816(0),auVar22,DAT_0388a680);
  auVar23._4_4_ = 0;
  auVar23._0_4_ = fVar86;
  auVar23._8_4_ = fVar87;
  auVar23._12_4_ = fVar88;
  uVar119 = a64_TBL(ZEXT816(0),auVar23,DAT_0388a880);
  auVar24._4_4_ = 0;
  auVar24._0_4_ = fVar86;
  auVar24._8_4_ = fVar87;
  auVar24._12_4_ = fVar88;
  uVar44 = a64_TBL(ZEXT816(0),auVar24,DAT_0388a580);
  fVar118 = (float)((ulong)uVar44 >> 0x20);
  fVar120 = (float)((ulong)uVar119 >> 0x20);
  fVar108 = (float)((ulong)uVar113 >> 0x20);
  fVar92 = (float)((ulong)uVar98 >> 0x20);
  auVar81[1] = extraout_var_03;
  auVar81[0] = extraout_b0_03;
  auVar81[2] = extraout_var_08;
  auVar81[3] = extraout_var_13;
  auVar81[4] = extraout_var_14;
  auVar81[5] = extraout_var_15;
  auVar81[6] = extraout_var_16;
  auVar81[7] = extraout_var_17;
  auVar81[8] = extraout_var_18;
  auVar81[9] = extraout_var_19;
  auVar81[10] = extraout_var_20;
  auVar81[0xb] = extraout_var_21;
  auVar81[0xc] = extraout_var_22;
  auVar81[0xd] = extraout_var_23;
  auVar81[0xe] = extraout_var_24;
  auVar81[0xf] = extraout_var_25;
  uVar91 = a64_TBL(ZEXT816(0),auVar81,DAT_0388a580);
  fVar103 = (float)_DAT_03889ad0;
  fVar105 = (float)((ulong)_DAT_03889ad0 >> 0x20);
  fVar106 = (float)_UNK_03889ad8;
  fVar107 = (float)((ulong)_UNK_03889ad8 >> 0x20);
  auVar30._4_4_ = fVar95;
  auVar30._0_4_ = fVar94;
  auVar30._8_4_ = fVar94;
  auVar30._12_4_ = fVar95;
  uVar89 = a64_TBL(ZEXT816(0),auVar30,DAT_0388a648);
  fVar78 = (float)((ulong)uVar89 >> 0x20);
  fVar87 = fVar3 * (float)uVar89;
  fVar88 = fVar78 * 0.0;
  fVar111 = (float)((ulong)uVar101 >> 0x20);
  fVar102 = (float)((ulong)uVar104 >> 0x20);
  fVar115 = (fVar94 * (float)uVar44 + fVar103 * fVar86 * (float)uVar98 +
            fVar103 * (float)uVar119 * (float)uVar100) - (float)uVar113 * (float)uVar101;
  fVar116 = (fVar95 * fVar118 + fVar105 * fVar92 * 0.0 + fVar105 * fVar120 * fVar110) -
            fVar108 * fVar111;
  fVar117 = (fVar96 * (float)uVar44 + fVar106 * (float)uVar113 * (float)uVar99 +
            fVar106 * fVar86 * (float)uVar89) - (float)uVar119 * (float)uVar104;
  fVar118 = (fVar97 * fVar118 + fVar107 * fVar108 * fVar93 + fVar107 * fVar78 * 0.0) -
            fVar120 * fVar102;
  fVar108 = (fVar94 * (float)uVar37 + fVar103 * fVar3 * (float)uVar98 +
            fVar103 * (float)uVar100 * (float)uVar112) - (float)uVar121 * (float)uVar101;
  fVar110 = (fVar95 * fVar109 + fVar105 * fVar92 * 0.0 + fVar105 * fVar110 * fVar114) -
            fVar122 * fVar111;
  fVar111 = (fVar96 * (float)uVar37 + fVar106 * (float)uVar99 * (float)uVar121 + fVar106 * fVar87) -
            (float)uVar112 * (float)uVar104;
  fVar88 = (fVar97 * fVar109 + fVar107 * fVar93 * fVar122 +
           fVar107 * (float)(CONCAT17((char)((uint)fVar88 >> 0x18),
                                      CONCAT16((char)((uint)fVar88 >> 0x10),
                                               CONCAT15((char)((uint)fVar88 >> 8),
                                                        CONCAT14(SUB41(fVar88,0),fVar87)))) >> 0x20)
           ) - fVar114 * fVar102;
  auVar84[1] = extraout_var_03;
  auVar84[0] = extraout_b0_03;
  auVar84[2] = extraout_var_08;
  auVar84[3] = extraout_var_13;
  auVar84[4] = extraout_var_14;
  auVar84[5] = extraout_var_15;
  auVar84[6] = extraout_var_16;
  auVar84[7] = extraout_var_17;
  auVar84[8] = extraout_var_18;
  auVar84[9] = extraout_var_19;
  auVar84[10] = extraout_var_20;
  auVar84[0xb] = extraout_var_21;
  auVar84[0xc] = extraout_var_22;
  auVar84[0xd] = extraout_var_23;
  auVar84[0xe] = extraout_var_24;
  auVar84[0xf] = extraout_var_25;
  uVar89 = a64_TBL(ZEXT816(0),auVar84,DAT_0388a680);
  auVar38._4_4_ = fVar116;
  auVar38._0_4_ = fVar115;
  auVar38._8_4_ = fVar117;
  auVar38._12_4_ = fVar118;
  uVar104 = a64_TBL(ZEXT816(0),auVar38,DAT_0388a680);
  fVar96 = (float)uVar91;
  fVar92 = (float)((ulong)uVar91 >> 0x20);
  auVar39._4_4_ = fVar116;
  auVar39._0_4_ = fVar115;
  auVar39._8_4_ = fVar117;
  auVar39._12_4_ = fVar118;
  uVar37 = a64_TBL(ZEXT816(0),auVar39,DAT_0388a580);
  auVar40._4_4_ = fVar116;
  auVar40._0_4_ = fVar115;
  auVar40._8_4_ = fVar117;
  auVar40._12_4_ = fVar118;
  uVar44 = a64_TBL(ZEXT816(0),auVar40,DAT_0388a6c8);
  auVar41._4_4_ = fVar116;
  auVar41._0_4_ = fVar115;
  auVar41._8_4_ = fVar117;
  auVar41._12_4_ = fVar118;
  uVar112 = a64_TBL(ZEXT816(0),auVar41,DAT_0388a880);
  auVar42._4_4_ = fVar116;
  auVar42._0_4_ = fVar115;
  auVar42._8_4_ = fVar117;
  auVar42._12_4_ = fVar118;
  uVar113 = a64_TBL(ZEXT816(0),auVar42,DAT_0388a790);
  auVar31._4_4_ = fVar110;
  auVar31._0_4_ = fVar108;
  auVar31._8_4_ = fVar111;
  auVar31._12_4_ = fVar88;
  uVar91 = a64_TBL(ZEXT816(0),auVar31,DAT_0388a580);
  auVar32._4_4_ = fVar110;
  auVar32._0_4_ = fVar108;
  auVar32._8_4_ = fVar111;
  auVar32._12_4_ = fVar88;
  uVar101 = a64_TBL(ZEXT816(0),auVar32,DAT_0388a790);
  fVar86 = (float)uVar89;
  fVar94 = (float)((ulong)uVar89 >> 0x20);
  auVar33._4_4_ = fVar110;
  auVar33._0_4_ = fVar108;
  auVar33._8_4_ = fVar111;
  auVar33._12_4_ = fVar88;
  uVar99 = a64_TBL(ZEXT816(0),auVar33,DAT_0388a6c8);
  auVar34._4_4_ = fVar110;
  auVar34._0_4_ = fVar108;
  auVar34._8_4_ = fVar111;
  auVar34._12_4_ = fVar88;
  uVar89 = a64_TBL(ZEXT816(0),auVar34,DAT_0388a680);
  auVar35._4_4_ = fVar110;
  auVar35._0_4_ = fVar108;
  auVar35._8_4_ = fVar111;
  auVar35._12_4_ = fVar88;
  uVar98 = a64_TBL(ZEXT816(0),auVar35,DAT_0388a880);
  fVar95 = (float)uVar90;
  fVar78 = (float)((ulong)uVar90 >> 0x20);
  auVar43._4_4_ = fVar116;
  auVar43._0_4_ = fVar115;
  auVar43._8_4_ = fVar115;
  auVar43._12_4_ = fVar116;
  uVar90 = a64_TBL(ZEXT816(0),auVar43,DAT_0388a648);
  auVar36._4_4_ = fVar110;
  auVar36._0_4_ = fVar108;
  auVar36._8_4_ = fVar108;
  auVar36._12_4_ = fVar110;
  uVar100 = a64_TBL(ZEXT816(0),auVar36,DAT_0388a648);
  fVar3 = (float)CONCAT13(extraout_var_13,
                          CONCAT12(extraout_var_08,CONCAT11(extraout_var_03,extraout_b0_03))) *
          (float)uVar100;
  fVar87 = (float)CONCAT13(extraout_var_17,
                           CONCAT12(extraout_var_16,CONCAT11(extraout_var_15,extraout_var_14))) *
           (float)((ulong)uVar100 >> 0x20);
  fVar97 = (fVar96 * fVar108 +
            fVar103 * (float)CONCAT13(extraout_var_13,
                                      CONCAT12(extraout_var_08,
                                               CONCAT11(extraout_var_03,extraout_b0_03))) *
                      (float)uVar91 + fVar103 * fVar95 * (float)uVar89) - fVar86 * (float)uVar98;
  fVar93 = (fVar92 * fVar110 +
            fVar105 * (float)CONCAT13(extraout_var_17,
                                      CONCAT12(extraout_var_16,
                                               CONCAT11(extraout_var_15,extraout_var_14))) *
                      (float)((ulong)uVar91 >> 0x20) +
           fVar105 * fVar78 * (float)((ulong)uVar89 >> 0x20)) -
           fVar94 * (float)((ulong)uVar98 >> 0x20);
  fVar110 = (fVar96 * fVar111 + fVar106 * fVar86 * (float)uVar99 + fVar106 * fVar3) -
            fVar95 * (float)uVar101;
  fVar111 = (fVar92 * fVar88 + fVar107 * fVar94 * (float)((ulong)uVar99 >> 0x20) +
            fVar107 * (float)CONCAT13((char)((uint)fVar87 >> 0x18),
                                      CONCAT12((char)((uint)fVar87 >> 0x10),
                                               (short)(CONCAT15((char)((uint)fVar87 >> 8),
                                                                CONCAT14(SUB41(fVar87,0),fVar3)) >>
                                                      0x20)))) -
            fVar78 * (float)((ulong)uVar101 >> 0x20);
  fVar3 = (fVar96 * fVar115 +
           fVar103 * (float)CONCAT13(extraout_var_13,
                                     CONCAT12(extraout_var_08,
                                              CONCAT11(extraout_var_03,extraout_b0_03))) *
                     (float)uVar37 + fVar103 * fVar95 * (float)uVar104) - fVar86 * (float)uVar112;
  fVar88 = (fVar92 * fVar116 +
            fVar105 * (float)CONCAT13(extraout_var_17,
                                      CONCAT12(extraout_var_16,
                                               CONCAT11(extraout_var_15,extraout_var_14))) *
                      (float)((ulong)uVar37 >> 0x20) +
           fVar105 * fVar78 * (float)((ulong)uVar104 >> 0x20)) -
           fVar94 * (float)((ulong)uVar112 >> 0x20);
  fVar86 = (fVar96 * fVar117 + fVar106 * fVar86 * (float)uVar44 +
           fVar106 * (float)CONCAT13(extraout_var_13,
                                     CONCAT12(extraout_var_08,
                                              CONCAT11(extraout_var_03,extraout_b0_03))) *
                     (float)uVar90) - fVar95 * (float)uVar113;
  fVar94 = (fVar92 * fVar118 + fVar107 * fVar94 * (float)((ulong)uVar44 >> 0x20) +
           fVar107 * (float)CONCAT13(extraout_var_17,
                                     CONCAT12(extraout_var_16,
                                              CONCAT11(extraout_var_15,extraout_var_14))) *
                     (float)((ulong)uVar90 >> 0x20)) - fVar78 * (float)((ulong)uVar113 >> 0x20);
  bVar70 = (byte)((ulong)_UNK_038897c8 >> 8);
  bVar71 = (byte)((ulong)_UNK_038897c8 >> 0x10);
  bVar72 = (byte)((ulong)_UNK_038897c8 >> 0x18);
  bVar73 = (byte)((ulong)_UNK_038897c8 >> 0x20);
  bVar74 = (byte)((ulong)_UNK_038897c8 >> 0x28);
  bVar75 = (byte)((ulong)_UNK_038897c8 >> 0x30);
  bVar76 = (byte)((ulong)_UNK_038897c8 >> 0x38);
  bVar55 = (byte)((ulong)_DAT_038897c0 >> 8);
  bVar60 = (byte)((ulong)_DAT_038897c0 >> 0x10);
  bVar64 = (byte)((ulong)_DAT_038897c0 >> 0x18);
  bVar66 = (byte)((ulong)_DAT_038897c0 >> 0x20);
  bVar67 = (byte)((ulong)_DAT_038897c0 >> 0x28);
  bVar68 = (byte)((ulong)_DAT_038897c0 >> 0x30);
  bVar69 = (byte)((ulong)_DAT_038897c0 >> 0x38);
  fVar87 = fVar77 + (float)CONCAT13((byte)((uint)fVar3 >> 0x18) & bVar64,
                                    CONCAT12((byte)((uint)fVar3 >> 0x10) & bVar60,
                                             CONCAT11((byte)((uint)fVar3 >> 8) & bVar55,
                                                      SUB41(fVar3,0) & (byte)_DAT_038897c0)));
  fVar88 = (float)(CONCAT17((char)((uint)fVar79 >> 0x18),
                            CONCAT16((char)((uint)fVar79 >> 0x10),
                                     CONCAT15((char)((uint)fVar79 >> 8),
                                              CONCAT14(SUB41(fVar79,0),fVar77)))) >> 0x20) +
           (float)CONCAT13((byte)((uint)fVar88 >> 0x18) & bVar69,
                           CONCAT12((byte)((uint)fVar88 >> 0x10) & bVar68,
                                    CONCAT11((byte)((uint)fVar88 >> 8) & bVar67,
                                             SUB41(fVar88,0) & bVar66)));
  fVar77 = fVar19 + (float)CONCAT13((byte)((uint)fVar86 >> 0x18) & bVar72,
                                    CONCAT12((byte)((uint)fVar86 >> 0x10) & bVar71,
                                             CONCAT11((byte)((uint)fVar86 >> 8) & bVar70,
                                                      SUB41(fVar86,0) & (byte)_UNK_038897c8)));
  fVar79 = (float)(CONCAT17((char)((uint)fVar45 >> 0x18),
                            CONCAT16((char)((uint)fVar45 >> 0x10),
                                     CONCAT15((char)((uint)fVar45 >> 8),
                                              CONCAT14(SUB41(fVar45,0),fVar19)))) >> 0x20) +
           (float)CONCAT13((byte)((uint)fVar94 >> 0x18) & bVar76,
                           CONCAT12((byte)((uint)fVar94 >> 0x10) & bVar75,
                                    CONCAT11((byte)((uint)fVar94 >> 8) & bVar74,
                                             SUB41(fVar94,0) & bVar73)));
  fVar3 = fVar2 + (float)CONCAT13((byte)((uint)fVar97 >> 0x18) & bVar64,
                                  CONCAT12((byte)((uint)fVar97 >> 0x10) & bVar60,
                                           CONCAT11((byte)((uint)fVar97 >> 8) & bVar55,
                                                    SUB41(fVar97,0) & (byte)_DAT_038897c0)));
  fVar2 = (float)(CONCAT17((char)((uint)fVar4 >> 0x18),
                           CONCAT16((char)((uint)fVar4 >> 0x10),
                                    CONCAT15((char)((uint)fVar4 >> 8),CONCAT14(SUB41(fVar4,0),fVar2)
                                            ))) >> 0x20) +
          (float)CONCAT13((byte)((uint)fVar93 >> 0x18) & bVar69,
                          CONCAT12((byte)((uint)fVar93 >> 0x10) & bVar68,
                                   CONCAT11((byte)((uint)fVar93 >> 8) & bVar67,
                                            SUB41(fVar93,0) & bVar66)));
  fVar4 = fVar5 + (float)CONCAT13((byte)((uint)fVar110 >> 0x18) & bVar72,
                                  CONCAT12((byte)((uint)fVar110 >> 0x10) & bVar71,
                                           CONCAT11((byte)((uint)fVar110 >> 8) & bVar70,
                                                    SUB41(fVar110,0) & (byte)_UNK_038897c8)));
  fVar5 = (float)(CONCAT17((char)((uint)fVar46 >> 0x18),
                           CONCAT16((char)((uint)fVar46 >> 0x10),
                                    CONCAT15((char)((uint)fVar46 >> 8),
                                             CONCAT14(SUB41(fVar46,0),fVar5)))) >> 0x20) +
          (float)CONCAT13((byte)((uint)fVar111 >> 0x18) & bVar76,
                          CONCAT12((byte)((uint)fVar111 >> 0x10) & bVar75,
                                   CONCAT11((byte)((uint)fVar111 >> 8) & bVar74,
                                            SUB41(fVar111,0) & bVar73)));
  fVar94 = fVar87 - fVar3;
  fVar95 = fVar88 - fVar2;
  fVar78 = fVar77 - fVar4;
  fVar96 = fVar79 - fVar5;
  fVar87 = fVar3 - fVar87;
  fVar88 = fVar2 - fVar88;
  fVar77 = fVar4 - fVar77;
  fVar79 = fVar5 - fVar79;
  fVar46 = fVar94 * fVar94;
  fVar19 = fVar95 * fVar95;
  uVar47 = (undefined1)((uint)fVar19 >> 8);
  uVar51 = (undefined1)((uint)fVar19 >> 0x10);
  uVar56 = (undefined1)((uint)fVar19 >> 0x18);
  fVar45 = fVar78 * fVar78;
  uVar65 = (undefined1)((uint)fVar45 >> 8);
  uVar48 = (undefined1)((uint)fVar45 >> 0x10);
  uVar52 = (undefined1)((uint)fVar45 >> 0x18);
  fVar86 = fVar96 * fVar96;
  uVar57 = (undefined1)((uint)fVar86 >> 8);
  uVar62 = (undefined1)((uint)fVar86 >> 0x10);
  uVar49 = (undefined1)((uint)fVar86 >> 0x18);
  auVar13[4] = SUB41(fVar19,0);
  auVar13._0_4_ = fVar46;
  auVar13[5] = uVar47;
  auVar13[6] = uVar51;
  auVar13[7] = uVar56;
  auVar13[8] = SUB41(fVar45,0);
  auVar13[9] = uVar65;
  auVar13[10] = uVar48;
  auVar13[0xb] = uVar52;
  auVar13[0xc] = SUB41(fVar86,0);
  auVar13[0xd] = uVar57;
  auVar13[0xe] = uVar62;
  auVar13[0xf] = uVar49;
  auVar14[4] = SUB41(fVar19,0);
  auVar14._0_4_ = fVar46;
  auVar14[5] = uVar47;
  auVar14[6] = uVar51;
  auVar14[7] = uVar56;
  auVar14[8] = SUB41(fVar45,0);
  auVar14[9] = uVar65;
  auVar14[10] = uVar48;
  auVar14[0xb] = uVar52;
  auVar14[0xc] = SUB41(fVar86,0);
  auVar14[0xd] = uVar57;
  auVar14[0xe] = uVar62;
  auVar14[0xf] = uVar49;
  auVar80 = NEON_ext(auVar13,auVar14,8,1);
  fVar87 = fVar87 * fVar87;
  fVar88 = fVar88 * fVar88;
  uVar47 = (undefined1)((uint)fVar88 >> 8);
  uVar51 = (undefined1)((uint)fVar88 >> 0x10);
  uVar56 = (undefined1)((uint)fVar88 >> 0x18);
  fVar77 = fVar77 * fVar77;
  uVar65 = (undefined1)((uint)fVar77 >> 8);
  uVar48 = (undefined1)((uint)fVar77 >> 0x10);
  uVar52 = (undefined1)((uint)fVar77 >> 0x18);
  fVar79 = fVar79 * fVar79;
  uVar57 = (undefined1)((uint)fVar79 >> 8);
  uVar62 = (undefined1)((uint)fVar79 >> 0x10);
  uVar49 = (undefined1)((uint)fVar79 >> 0x18);
  fVar46 = auVar80._0_4_ + fVar46;
  fVar19 = auVar80._4_4_ + fVar19;
  fVar45 = fVar46 + fVar19;
  fVar46 = fVar46 + fVar19;
  uVar53 = SUB41(fVar46,0);
  uVar58 = (undefined1)((uint)fVar46 >> 8);
  uVar61 = (undefined1)((uint)fVar46 >> 0x10);
  uVar50 = (undefined1)((uint)fVar46 >> 0x18);
  auVar9[4] = SUB41(fVar88,0);
  auVar9._0_4_ = fVar87;
  auVar9[5] = uVar47;
  auVar9[6] = uVar51;
  auVar9[7] = uVar56;
  auVar9[8] = SUB41(fVar77,0);
  auVar9[9] = uVar65;
  auVar9[10] = uVar48;
  auVar9[0xb] = uVar52;
  auVar9[0xc] = SUB41(fVar79,0);
  auVar9[0xd] = uVar57;
  auVar9[0xe] = uVar62;
  auVar9[0xf] = uVar49;
  auVar10[4] = SUB41(fVar88,0);
  auVar10._0_4_ = fVar87;
  auVar10[5] = uVar47;
  auVar10[6] = uVar51;
  auVar10[7] = uVar56;
  auVar10[8] = SUB41(fVar77,0);
  auVar10[9] = uVar65;
  auVar10[10] = uVar48;
  auVar10[0xb] = uVar52;
  auVar10[0xc] = SUB41(fVar79,0);
  auVar10[0xd] = uVar57;
  auVar10[0xe] = uVar62;
  auVar10[0xf] = uVar49;
  auVar80 = NEON_ext(auVar9,auVar10,8,1);
  auVar15[4] = uVar53;
  auVar15._0_4_ = fVar45;
  auVar15[5] = uVar58;
  auVar15[6] = uVar61;
  auVar15[7] = uVar50;
  auVar15[8] = SUB41(fVar45,0);
  auVar15[9] = (char)((uint)fVar45 >> 8);
  auVar15[10] = (char)((uint)fVar45 >> 0x10);
  auVar15[0xb] = (char)((uint)fVar45 >> 0x18);
  auVar15[0xc] = uVar53;
  auVar15[0xd] = uVar58;
  auVar15[0xe] = uVar61;
  auVar15[0xf] = uVar50;
  auVar81 = NEON_frsqrte(auVar15,4);
  auVar83._0_4_ = auVar81._0_4_ * fVar45;
  auVar83._4_4_ = auVar81._4_4_ * fVar46;
  auVar83._8_4_ = auVar81._8_4_ * fVar45;
  uVar16 = (undefined2)(CONCAT15(uVar58,CONCAT14(uVar53,fVar45)) >> 0x20);
  auVar83._12_4_ = auVar81._12_4_ * (float)CONCAT13(uVar50,CONCAT12(uVar61,uVar16));
  auVar84 = NEON_frsqrts(auVar81,auVar83,4);
  auVar82._0_4_ = auVar81._0_4_ * auVar84._0_4_;
  auVar82._4_4_ = auVar81._4_4_ * auVar84._4_4_;
  auVar82._8_4_ = auVar81._8_4_ * auVar84._8_4_;
  auVar82._12_4_ = auVar81._12_4_ * auVar84._12_4_;
  auVar85._0_4_ = fVar45 * auVar82._0_4_;
  auVar85._4_4_ = fVar46 * auVar82._4_4_;
  auVar85._8_4_ = fVar45 * auVar82._8_4_;
  auVar85._12_4_ = (float)CONCAT13(uVar50,CONCAT12(uVar61,uVar16)) * auVar82._12_4_;
  iVar17 = -(uint)(fVar45 == 0.0);
  iVar18 = -(uint)(fVar46 == 0.0);
  iVar20 = -(uint)(fVar45 == 0.0);
  iVar21 = -(uint)((float)CONCAT13(uVar50,CONCAT12(uVar61,uVar16)) == 0.0);
  auVar81 = NEON_frsqrts(auVar82,auVar85,4);
  fVar94 = auVar82._0_4_ * auVar81._0_4_ * fVar94;
  fVar95 = auVar82._4_4_ * auVar81._4_4_ * fVar95;
  fVar78 = auVar82._8_4_ * auVar81._8_4_ * fVar78;
  fVar96 = auVar82._12_4_ * auVar81._12_4_ * fVar96;
  fVar87 = *(float *)(param_1 + 0xee14) * SQRT(auVar80._0_4_ + fVar87 + auVar80._4_4_ + fVar88);
  fVar77 = (float)CONCAT13((byte)((uint)fVar94 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18),
                           CONCAT12((byte)((uint)fVar94 >> 0x10) & ~(byte)((uint)iVar17 >> 0x10),
                                    CONCAT11((byte)((uint)fVar94 >> 8) & ~(byte)((uint)iVar17 >> 8),
                                             SUB41(fVar94,0) & ~(byte)iVar17)));
  fVar79 = (float)CONCAT13((byte)((uint)fVar78 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                           CONCAT12((byte)((uint)fVar78 >> 0x10) & ~(byte)((uint)iVar20 >> 0x10),
                                    CONCAT11((byte)((uint)fVar78 >> 8) & ~(byte)((uint)iVar20 >> 8),
                                             SUB41(fVar78,0) & ~(byte)iVar20)));
  fVar46 = fVar2 + (float)(CONCAT17((byte)((uint)fVar95 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18),
                                    CONCAT16((byte)((uint)fVar95 >> 0x10) &
                                             ~(byte)((uint)iVar18 >> 0x10),
                                             CONCAT15((byte)((uint)fVar95 >> 8) &
                                                      ~(byte)((uint)iVar18 >> 8),
                                                      CONCAT14(SUB41(fVar95,0) & ~(byte)iVar18,
                                                               fVar77)))) >> 0x20) * fVar87;
  fVar88 = fVar5 + (float)(CONCAT17((byte)((uint)fVar96 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                                    CONCAT16((byte)((uint)fVar96 >> 0x10) &
                                             ~(byte)((uint)iVar21 >> 0x10),
                                             CONCAT15((byte)((uint)fVar96 >> 8) &
                                                      ~(byte)((uint)iVar21 >> 8),
                                                      CONCAT14(SUB41(fVar96,0) & ~(byte)iVar21,
                                                               fVar79)))) >> 0x20) * fVar87;
  param_6[1] = CONCAT17((char)((uint)fVar88 >> 0x18),
                        CONCAT16((char)((uint)fVar88 >> 0x10),
                                 CONCAT15((char)((uint)fVar88 >> 8),
                                          CONCAT14(SUB41(fVar88,0),fVar4 + fVar79 * fVar87))));
  *param_6 = CONCAT17((char)((uint)fVar46 >> 0x18),
                      CONCAT16((char)((uint)fVar46 >> 0x10),
                               CONCAT15((char)((uint)fVar46 >> 8),
                                        CONCAT14(SUB41(fVar46,0),fVar3 + fVar77 * fVar87))));
  param_7[1] = CONCAT17((char)((uint)fVar5 >> 0x18),
                        CONCAT16((char)((uint)fVar5 >> 0x10),
                                 CONCAT15((char)((uint)fVar5 >> 8),CONCAT14(SUB41(fVar5,0),fVar4))))
  ;
  *param_7 = CONCAT17((char)((uint)fVar2 >> 0x18),
                      CONCAT16((char)((uint)fVar2 >> 0x10),
                               CONCAT15((char)((uint)fVar2 >> 8),CONCAT14(SUB41(fVar2,0),fVar3))));
  return;
}


