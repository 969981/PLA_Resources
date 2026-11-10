/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bfceb8; name: FUN_01bfceb8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_01bfceb8(long param_1)

{
  undefined1 (*pauVar1) [12];
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
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
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 uVar32;
  long lVar33;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 uVar34;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 uVar36;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 uVar37;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 uVar40;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 uVar41;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 uVar42;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 uVar43;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 uVar44;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 uVar45;
  undefined1 extraout_var_19;
  undefined1 extraout_var_20;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 extraout_var_21;
  undefined1 extraout_var_22;
  undefined1 uVar48;
  undefined1 extraout_var_23;
  undefined1 extraout_var_24;
  undefined1 uVar49;
  undefined1 extraout_var_25;
  undefined1 extraout_var_26;
  undefined1 uVar50;
  undefined1 auVar35 [16];
  undefined1 extraout_var_27;
  undefined1 extraout_var_28;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined8 uVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  float fVar63;
  undefined1 in_q3 [16];
  undefined8 uVar64;
  float fVar65;
  undefined4 uVar66;
  undefined8 uVar67;
  float fVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  long *local_28;
  long *local_18;
  
  uVar64 = in_q3._8_8_;
  uVar60 = in_q3._0_8_;
  if (*(long *)(param_1 + 0x270) == 0) {
    local_18 = (long *)0x0;
  }
  else {
    FUN_00cfac20(&local_18,*(long *)(param_1 + 0x270));
    if (local_18 != (long *)0x0) {
      (**(code **)(*local_18 + 0x140))(local_18);
      fVar9 = (float)CONCAT13(extraout_var_19,
                              CONCAT12(extraout_var_17,CONCAT11(extraout_var_15,extraout_var_13)));
      fVar10 = (float)CONCAT13(extraout_var_03,
                               CONCAT12(extraout_var_01,CONCAT11(extraout_var,extraout_b0)));
      FUN_01bfd0e4(param_1);
      pauVar1 = (undefined1 (*) [12])(param_1 + 0x290);
      uVar66 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x298) >> 0x20);
      fVar51 = (float)*(undefined8 *)*pauVar1;
      fVar52 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
      fVar23 = (float)CONCAT13(extraout_var_04,
                               CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_00))) *
               (float)_DAT_03889ac0;
      fVar25 = (float)CONCAT13(extraout_var_12,
                               CONCAT12(extraout_var_10,CONCAT11(extraout_var_08,extraout_var_06)))
               * (float)((ulong)_DAT_03889ac0 >> 0x20);
      uVar34 = SUB41(fVar25,0);
      uVar36 = (undefined1)((uint)fVar25 >> 8);
      uVar37 = (undefined1)((uint)fVar25 >> 0x10);
      uVar38 = (undefined1)((uint)fVar25 >> 0x18);
      fVar27 = (float)CONCAT13(extraout_var_20,
                               CONCAT12(extraout_var_18,CONCAT11(extraout_var_16,extraout_var_14)))
               * (float)_UNK_03889ac8;
      uVar39 = SUB41(fVar27,0);
      uVar40 = (undefined1)((uint)fVar27 >> 8);
      uVar41 = (undefined1)((uint)fVar27 >> 0x10);
      uVar42 = (undefined1)((uint)fVar27 >> 0x18);
      fVar28 = (float)CONCAT13(extraout_var_28,
                               CONCAT12(extraout_var_26,CONCAT11(extraout_var_24,extraout_var_22)))
               * (float)((ulong)_UNK_03889ac8 >> 0x20);
      uVar43 = SUB41(fVar28,0);
      uVar44 = (undefined1)((uint)fVar28 >> 8);
      uVar45 = (undefined1)((uint)fVar28 >> 0x10);
      uVar46 = (undefined1)((uint)fVar28 >> 0x18);
      auVar29._12_4_ = uVar66;
      auVar29._0_12_ = *pauVar1;
      uVar60 = a64_TBL(ZEXT816(0),auVar29,DAT_0388a580);
      fVar54 = (float)((ulong)uVar60 >> 0x20);
      auVar30._12_4_ = uVar66;
      auVar30._0_12_ = *pauVar1;
      uVar67 = a64_TBL(ZEXT816(0),auVar30,DAT_0388a680);
      auVar17[4] = uVar34;
      auVar17._0_4_ = fVar23;
      auVar17[5] = uVar36;
      auVar17[6] = uVar37;
      auVar17[7] = uVar38;
      auVar17[8] = uVar39;
      auVar17[9] = uVar40;
      auVar17[10] = uVar41;
      auVar17[0xb] = uVar42;
      auVar17[0xc] = uVar43;
      auVar17[0xd] = uVar44;
      auVar17[0xe] = uVar45;
      auVar17[0xf] = uVar46;
      uVar56 = a64_TBL(ZEXT816(0),auVar17,DAT_0388a580);
      auVar18[4] = uVar34;
      auVar18._0_4_ = fVar23;
      auVar18[5] = uVar36;
      auVar18[6] = uVar37;
      auVar18[7] = uVar38;
      auVar18[8] = uVar39;
      auVar18[9] = uVar40;
      auVar18[10] = uVar41;
      auVar18[0xb] = uVar42;
      auVar18[0xc] = uVar43;
      auVar18[0xd] = uVar44;
      auVar18[0xe] = uVar45;
      auVar18[0xf] = uVar46;
      uVar61 = a64_TBL(ZEXT816(0),auVar18,DAT_0388a6c8);
      auVar19[4] = uVar34;
      auVar19._0_4_ = fVar23;
      auVar19[5] = uVar36;
      auVar19[6] = uVar37;
      auVar19[7] = uVar38;
      auVar19[8] = uVar39;
      auVar19[9] = uVar40;
      auVar19[10] = uVar41;
      auVar19[0xb] = uVar42;
      auVar19[0xc] = uVar43;
      auVar19[0xd] = uVar44;
      auVar19[0xe] = uVar45;
      auVar19[0xf] = uVar46;
      uVar69 = a64_TBL(ZEXT816(0),auVar19,DAT_0388a680);
      fVar68 = (float)((ulong)uVar67 >> 0x20);
      auVar20[4] = uVar34;
      auVar20._0_4_ = fVar23;
      auVar20[5] = uVar36;
      auVar20[6] = uVar37;
      auVar20[7] = uVar38;
      auVar20[8] = uVar39;
      auVar20[9] = uVar40;
      auVar20[10] = uVar41;
      auVar20[0xb] = uVar42;
      auVar20[0xc] = uVar43;
      auVar20[0xd] = uVar44;
      auVar20[0xe] = uVar45;
      auVar20[0xf] = uVar46;
      uVar70 = a64_TBL(ZEXT816(0),auVar20,DAT_0388a880);
      auVar21[4] = uVar34;
      auVar21._0_4_ = fVar23;
      auVar21[5] = uVar36;
      auVar21[6] = uVar37;
      auVar21[7] = uVar38;
      auVar21[8] = uVar39;
      auVar21[9] = uVar40;
      auVar21[10] = uVar41;
      auVar21[0xb] = uVar42;
      auVar21[0xc] = uVar43;
      auVar21[0xd] = uVar44;
      auVar21[0xe] = uVar45;
      auVar21[0xf] = uVar46;
      uVar71 = a64_TBL(ZEXT816(0),auVar21,DAT_0388a790);
      fVar55 = (float)_DAT_03889ad0;
      fVar57 = (float)((ulong)_DAT_03889ad0 >> 0x20);
      fVar58 = (float)_UNK_03889ad8;
      fVar59 = (float)((ulong)_UNK_03889ad8 >> 0x20);
      auVar22[4] = uVar34;
      auVar22._0_4_ = fVar23;
      auVar22[5] = uVar36;
      auVar22[6] = uVar37;
      auVar22[7] = uVar38;
      auVar22[8] = SUB41(fVar23,0);
      auVar22[9] = (char)((uint)fVar23 >> 8);
      auVar22[10] = (char)((uint)fVar23 >> 0x10);
      auVar22[0xb] = (char)((uint)fVar23 >> 0x18);
      auVar22[0xc] = uVar34;
      auVar22[0xd] = uVar36;
      auVar22[0xe] = uVar37;
      auVar22[0xf] = uVar38;
      uVar64 = a64_TBL(ZEXT816(0),auVar22,DAT_0388a648);
      fVar24 = fVar51 * (float)uVar64;
      fVar26 = fVar52 * (float)((ulong)uVar64 >> 0x20);
      auVar31._12_4_ = uVar66;
      auVar31._0_12_ = *pauVar1;
      uVar62 = a64_TBL(ZEXT816(0),auVar31,DAT_0388a880);
      fVar63 = (float)((ulong)uVar62 >> 0x20);
      auVar6[1] = extraout_var_00;
      auVar6[0] = extraout_b0_00;
      auVar6[2] = extraout_var_02;
      auVar6[3] = extraout_var_04;
      auVar6[4] = extraout_var_06;
      auVar6[5] = extraout_var_08;
      auVar6[6] = extraout_var_10;
      auVar6[7] = extraout_var_12;
      auVar6[8] = extraout_var_14;
      auVar6[9] = extraout_var_16;
      auVar6[10] = extraout_var_18;
      auVar6[0xb] = extraout_var_20;
      auVar6[0xc] = extraout_var_22;
      auVar6[0xd] = extraout_var_24;
      auVar6[0xe] = extraout_var_26;
      auVar6[0xf] = extraout_var_28;
      uVar32 = a64_TBL(ZEXT816(0),auVar6,DAT_0388a680);
      fVar65 = (float)((ulong)uVar32 >> 0x20);
      auVar7[1] = extraout_var_00;
      auVar7[0] = extraout_b0_00;
      auVar7[2] = extraout_var_02;
      auVar7[3] = extraout_var_04;
      auVar7[4] = extraout_var_06;
      auVar7[5] = extraout_var_08;
      auVar7[6] = extraout_var_10;
      auVar7[7] = extraout_var_12;
      auVar7[8] = extraout_var_14;
      auVar7[9] = extraout_var_16;
      auVar7[10] = extraout_var_18;
      auVar7[0xb] = extraout_var_20;
      auVar7[0xc] = extraout_var_22;
      auVar7[0xd] = extraout_var_24;
      auVar7[0xe] = extraout_var_26;
      auVar7[0xf] = extraout_var_28;
      uVar64 = a64_TBL(ZEXT816(0),auVar7,DAT_0388a580);
      fVar51 = (fVar23 * (float)uVar60 + fVar55 * fVar51 * (float)uVar56 +
               fVar55 * (float)uVar62 * (float)uVar69) - (float)uVar67 * (float)uVar70;
      fVar52 = (fVar25 * fVar54 + fVar57 * fVar52 * (float)((ulong)uVar56 >> 0x20) +
               fVar57 * fVar63 * (float)((ulong)uVar69 >> 0x20)) -
               fVar68 * (float)((ulong)uVar70 >> 0x20);
      fVar53 = (fVar27 * (float)uVar60 + fVar58 * (float)uVar67 * (float)uVar61 + fVar58 * fVar24) -
               (float)uVar62 * (float)uVar71;
      fVar54 = (fVar28 * fVar54 + fVar59 * fVar68 * (float)((ulong)uVar61 >> 0x20) +
               fVar59 * (float)(CONCAT17((char)((uint)fVar26 >> 0x18),
                                         CONCAT16((char)((uint)fVar26 >> 0x10),
                                                  CONCAT15((char)((uint)fVar26 >> 8),
                                                           CONCAT14(SUB41(fVar26,0),fVar24)))) >>
                               0x20)) - fVar63 * (float)((ulong)uVar71 >> 0x20);
      auVar11._4_4_ = fVar52;
      auVar11._0_4_ = fVar51;
      auVar11._8_4_ = fVar53;
      auVar11._12_4_ = fVar54;
      uVar61 = a64_TBL(ZEXT816(0),auVar11,DAT_0388a580);
      auVar12._4_4_ = fVar52;
      auVar12._0_4_ = fVar51;
      auVar12._8_4_ = fVar53;
      auVar12._12_4_ = fVar54;
      uVar67 = a64_TBL(ZEXT816(0),auVar12,DAT_0388a6c8);
      fVar25 = (float)((ulong)uVar64 >> 0x20);
      auVar13._4_4_ = fVar52;
      auVar13._0_4_ = fVar51;
      auVar13._8_4_ = fVar53;
      auVar13._12_4_ = fVar54;
      uVar70 = a64_TBL(ZEXT816(0),auVar13,DAT_0388a790);
      auVar14._4_4_ = fVar52;
      auVar14._0_4_ = fVar51;
      auVar14._8_4_ = fVar53;
      auVar14._12_4_ = fVar54;
      uVar56 = a64_TBL(ZEXT816(0),auVar14,DAT_0388a680);
      auVar15._4_4_ = fVar52;
      auVar15._0_4_ = fVar51;
      auVar15._8_4_ = fVar53;
      auVar15._12_4_ = fVar54;
      uVar69 = a64_TBL(ZEXT816(0),auVar15,DAT_0388a880);
      auVar8[1] = extraout_var_00;
      auVar8[0] = extraout_b0_00;
      auVar8[2] = extraout_var_02;
      auVar8[3] = extraout_var_04;
      auVar8[4] = extraout_var_06;
      auVar8[5] = extraout_var_08;
      auVar8[6] = extraout_var_10;
      auVar8[7] = extraout_var_12;
      auVar8[8] = extraout_var_14;
      auVar8[9] = extraout_var_16;
      auVar8[10] = extraout_var_18;
      auVar8[0xb] = extraout_var_20;
      auVar8[0xc] = extraout_var_22;
      auVar8[0xd] = extraout_var_24;
      auVar8[0xe] = extraout_var_26;
      auVar8[0xf] = extraout_var_28;
      uVar62 = a64_TBL(ZEXT816(0),auVar8,DAT_0388a880);
      fVar63 = (float)((ulong)uVar62 >> 0x20);
      auVar16._4_4_ = fVar52;
      auVar16._0_4_ = fVar51;
      auVar16._8_4_ = fVar51;
      auVar16._12_4_ = fVar52;
      uVar60 = a64_TBL(ZEXT816(0),auVar16,DAT_0388a648);
      fVar23 = (float)CONCAT13(extraout_var_04,
                               CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_00))) *
               (float)uVar60;
      fVar24 = (float)CONCAT13(extraout_var_12,
                               CONCAT12(extraout_var_10,CONCAT11(extraout_var_08,extraout_var_06)))
               * (float)((ulong)uVar60 >> 0x20);
      fVar26 = ((float)uVar64 * fVar51 +
                fVar55 * (float)CONCAT13(extraout_var_04,
                                         CONCAT12(extraout_var_02,
                                                  CONCAT11(extraout_var_00,extraout_b0_00))) *
                         (float)uVar61 + fVar55 * (float)uVar62 * (float)uVar56) -
               (float)uVar32 * (float)uVar69;
      fVar27 = (fVar25 * fVar52 +
                fVar57 * (float)CONCAT13(extraout_var_12,
                                         CONCAT12(extraout_var_10,
                                                  CONCAT11(extraout_var_08,extraout_var_06))) *
                         (float)((ulong)uVar61 >> 0x20) +
               fVar57 * fVar63 * (float)((ulong)uVar56 >> 0x20)) -
               fVar65 * (float)((ulong)uVar69 >> 0x20);
      fVar28 = ((float)uVar64 * fVar53 + fVar58 * (float)uVar32 * (float)uVar67 + fVar58 * fVar23) -
               (float)uVar62 * (float)uVar70;
      fVar24 = (fVar25 * fVar54 + fVar59 * fVar65 * (float)((ulong)uVar67 >> 0x20) +
               fVar59 * (float)(CONCAT17((char)((uint)fVar24 >> 0x18),
                                         CONCAT16((char)((uint)fVar24 >> 0x10),
                                                  CONCAT15((char)((uint)fVar24 >> 8),
                                                           CONCAT14(SUB41(fVar24,0),fVar23)))) >>
                               0x20)) - fVar63 * (float)((ulong)uVar70 >> 0x20);
      fVar23 = fVar10 + (float)CONCAT13((byte)((uint)fVar26 >> 0x18) &
                                        (byte)((ulong)_DAT_038897c0 >> 0x18),
                                        CONCAT12((byte)((uint)fVar26 >> 0x10) &
                                                 (byte)((ulong)_DAT_038897c0 >> 0x10),
                                                 CONCAT11((byte)((uint)fVar26 >> 8) &
                                                          (byte)((ulong)_DAT_038897c0 >> 8),
                                                          SUB41(fVar26,0) & (byte)_DAT_038897c0)));
      uVar34 = SUB41(fVar23,0);
      uVar36 = (undefined1)((uint)fVar23 >> 8);
      uVar37 = (undefined1)((uint)fVar23 >> 0x10);
      uVar38 = (undefined1)((uint)fVar23 >> 0x18);
      fVar10 = (float)(CONCAT17(extraout_var_11,
                                CONCAT16(extraout_var_09,
                                         CONCAT15(extraout_var_07,CONCAT14(extraout_var_05,fVar10)))
                               ) >> 0x20) +
               (float)CONCAT13((byte)((uint)fVar27 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x38),
                               CONCAT12((byte)((uint)fVar27 >> 0x10) &
                                        (byte)((ulong)_DAT_038897c0 >> 0x30),
                                        CONCAT11((byte)((uint)fVar27 >> 8) &
                                                 (byte)((ulong)_DAT_038897c0 >> 0x28),
                                                 SUB41(fVar27,0) &
                                                 (byte)((ulong)_DAT_038897c0 >> 0x20))));
      uVar39 = SUB41(fVar10,0);
      uVar40 = (undefined1)((uint)fVar10 >> 8);
      uVar41 = (undefined1)((uint)fVar10 >> 0x10);
      uVar42 = (undefined1)((uint)fVar10 >> 0x18);
      fVar10 = fVar9 + (float)CONCAT13((byte)((uint)fVar28 >> 0x18) &
                                       (byte)((ulong)_UNK_038897c8 >> 0x18),
                                       CONCAT12((byte)((uint)fVar28 >> 0x10) &
                                                (byte)((ulong)_UNK_038897c8 >> 0x10),
                                                CONCAT11((byte)((uint)fVar28 >> 8) &
                                                         (byte)((ulong)_UNK_038897c8 >> 8),
                                                         SUB41(fVar28,0) & (byte)_UNK_038897c8)));
      uVar43 = SUB41(fVar10,0);
      uVar44 = (undefined1)((uint)fVar10 >> 8);
      uVar45 = (undefined1)((uint)fVar10 >> 0x10);
      uVar46 = (undefined1)((uint)fVar10 >> 0x18);
      fVar10 = (float)(CONCAT17(extraout_var_27,
                                CONCAT16(extraout_var_25,
                                         CONCAT15(extraout_var_23,CONCAT14(extraout_var_21,fVar9))))
                      >> 0x20) +
               (float)CONCAT13((byte)((uint)fVar24 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x38),
                               CONCAT12((byte)((uint)fVar24 >> 0x10) &
                                        (byte)((ulong)_UNK_038897c8 >> 0x30),
                                        CONCAT11((byte)((uint)fVar24 >> 8) &
                                                 (byte)((ulong)_UNK_038897c8 >> 0x28),
                                                 SUB41(fVar24,0) &
                                                 (byte)((ulong)_UNK_038897c8 >> 0x20))));
      uVar47 = SUB41(fVar10,0);
      uVar48 = (undefined1)((uint)fVar10 >> 8);
      uVar49 = (undefined1)((uint)fVar10 >> 0x10);
      uVar50 = (undefined1)((uint)fVar10 >> 0x18);
      goto joined_r0x01bfcf64;
    }
  }
  FUN_009c69bc(&local_28);
  (**(code **)(*local_28 + 0x40))();
  uVar43 = (undefined1)uVar64;
  uVar44 = (undefined1)((ulong)uVar64 >> 8);
  uVar45 = (undefined1)((ulong)uVar64 >> 0x10);
  uVar46 = (undefined1)((ulong)uVar64 >> 0x18);
  uVar47 = (undefined1)((ulong)uVar64 >> 0x20);
  uVar48 = (undefined1)((ulong)uVar64 >> 0x28);
  uVar49 = (undefined1)((ulong)uVar64 >> 0x30);
  uVar50 = (undefined1)((ulong)uVar64 >> 0x38);
  uVar34 = (undefined1)uVar60;
  uVar36 = (undefined1)((ulong)uVar60 >> 8);
  uVar37 = (undefined1)((ulong)uVar60 >> 0x10);
  uVar38 = (undefined1)((ulong)uVar60 >> 0x18);
  uVar39 = (undefined1)((ulong)uVar60 >> 0x20);
  uVar40 = (undefined1)((ulong)uVar60 >> 0x28);
  uVar41 = (undefined1)((ulong)uVar60 >> 0x30);
  uVar42 = (undefined1)((ulong)uVar60 >> 0x38);
  if (local_28 != (long *)0x0) {
    lVar33 = local_28[0xb];
    piVar2 = (int *)(lVar33 + 0xc);
    do {
      iVar3 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar33 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
joined_r0x01bfcf64:
  if (local_18 != (long *)0x0) {
    lVar33 = local_18[0xb];
    piVar2 = (int *)(lVar33 + 0xc);
    do {
      iVar3 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar33 + 0x18) = 0;
      (**(code **)(*local_18 + 0x20))();
    }
  }
  auVar35[1] = uVar36;
  auVar35[0] = uVar34;
  auVar35[2] = uVar37;
  auVar35[3] = uVar38;
  auVar35[4] = uVar39;
  auVar35[5] = uVar40;
  auVar35[6] = uVar41;
  auVar35[7] = uVar42;
  auVar35[8] = uVar43;
  auVar35[9] = uVar44;
  auVar35[10] = uVar45;
  auVar35[0xb] = uVar46;
  auVar35[0xc] = uVar47;
  auVar35[0xd] = uVar48;
  auVar35[0xe] = uVar49;
  auVar35[0xf] = uVar50;
  return auVar35;
}


