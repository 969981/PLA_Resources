/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025912b4; name: FUN_025912b4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_025912b4(long param_1,long param_2)

{
  undefined1 (*pauVar1) [12];
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  long lVar15;
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
  float fVar28;
  float fVar29;
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
  undefined8 uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [12];
  undefined1 auVar50 [12];
  undefined1 auVar51 [12];
  ulong uVar52;
  ulong uVar53;
  undefined8 *puVar54;
  int iVar55;
  ulong uVar56;
  long lVar57;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_b0_02;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 extraout_var_19;
  undefined1 extraout_var_20;
  undefined1 extraout_var_21;
  undefined1 extraout_var_22;
  undefined1 extraout_var_23;
  undefined1 extraout_var_24;
  undefined1 extraout_var_25;
  undefined1 extraout_var_26;
  undefined1 extraout_var_27;
  undefined1 extraout_var_28;
  undefined1 extraout_var_29;
  undefined1 extraout_var_30;
  undefined1 extraout_var_31;
  undefined1 extraout_var_32;
  undefined1 extraout_var_33;
  undefined1 extraout_var_34;
  undefined1 extraout_var_35;
  undefined1 extraout_var_36;
  undefined1 extraout_var_37;
  undefined1 extraout_var_38;
  undefined1 extraout_var_39;
  undefined1 extraout_var_40;
  undefined1 extraout_var_41;
  undefined1 extraout_var_42;
  undefined1 extraout_var_43;
  undefined1 extraout_var_44;
  undefined1 extraout_var_45;
  undefined1 extraout_var_46;
  undefined1 extraout_var_47;
  undefined1 extraout_var_48;
  undefined1 extraout_var_49;
  undefined1 extraout_var_50;
  undefined1 extraout_var_51;
  undefined1 extraout_var_52;
  undefined1 extraout_var_53;
  undefined1 extraout_var_54;
  undefined1 extraout_var_55;
  undefined1 extraout_var_56;
  undefined1 extraout_var_57;
  undefined1 extraout_var_58;
  byte bVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  float fVar71;
  undefined8 uVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  float fVar78;
  undefined8 uVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  undefined8 uVar84;
  float fVar85;
  undefined8 uVar86;
  undefined8 uVar87;
  undefined8 uVar88;
  float fVar89;
  float fVar90;
  float fStack_a8;
  float fStack_a4;
  long *local_80;
  long *local_78;
  long *local_70;
  undefined8 local_68;
  char *pcStack_60;
  undefined8 local_58;
  long *local_50;
  undefined8 *local_48;
  char *pcStack_40;
  undefined8 local_38;
  long *local_30;
  long *local_28;
  
  if (*(long *)(param_1 + 0x98) == 0) {
    return;
  }
  FUN_00cfac20(&local_28);
  if (local_28 == (long *)0x0) {
    return;
  }
  uVar56 = FUN_01aeda38();
  if ((uVar56 & 1) == 0) {
    local_38 = 9;
    local_30 = (long *)0x0;
    local_68 = 0xec44cd36f3f12d52;
    pcStack_60 = "action_button_player_ride_screen_offset";
    local_48 = (undefined8 *)&DAT_12f480e8b0aebe7d;
    pcStack_40 = "appli_hud";
    local_58 = 0x27;
    local_50 = (long *)0x0;
    FUN_00aee408(&local_48,&local_68);
    *(ulong *)(param_2 + 0x38) =
         CONCAT17(extraout_var_55,
                  CONCAT16(extraout_var_51,
                           CONCAT15(extraout_var_47,
                                    CONCAT14(extraout_var_43,
                                             CONCAT13(extraout_var_39,
                                                      CONCAT12(extraout_var_35,
                                                               CONCAT11(extraout_var_31,
                                                                        extraout_var_27)))))));
    *(ulong *)(param_2 + 0x30) =
         CONCAT17(extraout_var_23,
                  CONCAT16(extraout_var_19,
                           CONCAT15(extraout_var_15,
                                    CONCAT14(extraout_var_11,
                                             CONCAT13(extraout_var_07,
                                                      CONCAT12(extraout_var_03,
                                                               CONCAT11(extraout_var,extraout_b0))))
                                   )));
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    if (local_30 != (long *)0x0) {
      (**(code **)(*local_30 + 0x20))();
    }
    FUN_009c69bc(&local_70,local_28);
    lVar15 = local_70[0x1b];
    lVar57 = local_70[0x1a];
    FUN_009c69bc(&local_78,local_28);
    pauVar1 = (undefined1 (*) [12])(local_78 + 0x18);
    uVar12 = *(undefined8 *)*pauVar1;
    auVar51 = *pauVar1;
    auVar50 = *pauVar1;
    auVar49 = *pauVar1;
    local_48 = (undefined8 *)&DAT_12f480e8b0aebe7d;
    pcStack_40 = "appli_hud";
    local_38 = 9;
    local_30 = (long *)0x0;
    local_68 = 0x38ee42c5a8d487bf;
    pcStack_60 = "action_button_player_ride_offset";
    local_58 = 0x20;
    local_50 = (long *)0x0;
    fStack_a8 = (float)local_78[0x19];
    fStack_a4 = (float)((ulong)local_78[0x19] >> 0x20);
    FUN_00aee408(&local_48,&local_68);
    fVar89 = (float)uVar12;
    fVar90 = (float)((ulong)uVar12 >> 0x20);
    fVar80 = fVar89 * (float)_DAT_03889ac0;
    fVar81 = fVar90 * (float)((ulong)_DAT_03889ac0 >> 0x20);
    fStack_a8 = fStack_a8 * (float)_UNK_03889ac8;
    fVar83 = fStack_a4 * (float)((ulong)_UNK_03889ac8 >> 0x20);
    auVar5[1] = extraout_var_00;
    auVar5[0] = extraout_b0_00;
    auVar5[2] = extraout_var_04;
    auVar5[3] = extraout_var_08;
    auVar5[4] = extraout_var_12;
    auVar5[5] = extraout_var_16;
    auVar5[6] = extraout_var_20;
    auVar5[7] = extraout_var_24;
    auVar5[8] = extraout_var_28;
    auVar5[9] = extraout_var_32;
    auVar5[10] = extraout_var_36;
    auVar5[0xb] = extraout_var_40;
    auVar5[0xc] = extraout_var_44;
    auVar5[0xd] = extraout_var_48;
    auVar5[0xe] = extraout_var_52;
    auVar5[0xf] = extraout_var_56;
    uVar77 = a64_TBL(ZEXT816(0),auVar5,DAT_0388a580);
    auVar6[1] = extraout_var_00;
    auVar6[0] = extraout_b0_00;
    auVar6[2] = extraout_var_04;
    auVar6[3] = extraout_var_08;
    auVar6[4] = extraout_var_12;
    auVar6[5] = extraout_var_16;
    auVar6[6] = extraout_var_20;
    auVar6[7] = extraout_var_24;
    auVar6[8] = extraout_var_28;
    auVar6[9] = extraout_var_32;
    auVar6[10] = extraout_var_36;
    auVar6[0xb] = extraout_var_40;
    auVar6[0xc] = extraout_var_44;
    auVar6[0xd] = extraout_var_48;
    auVar6[0xe] = extraout_var_52;
    auVar6[0xf] = extraout_var_56;
    uVar84 = a64_TBL(ZEXT816(0),auVar6,DAT_0388a680);
    auVar30._4_4_ = fVar81;
    auVar30._0_4_ = fVar80;
    auVar30._8_4_ = fStack_a8;
    auVar30._12_4_ = fVar83;
    uVar72 = a64_TBL(ZEXT816(0),auVar30,DAT_0388a580);
    auVar31._4_4_ = fVar81;
    auVar31._0_4_ = fVar80;
    auVar31._8_4_ = fStack_a8;
    auVar31._12_4_ = fVar83;
    uVar76 = a64_TBL(ZEXT816(0),auVar31,DAT_0388a6c8);
    fVar85 = (float)((ulong)uVar84 >> 0x20);
    auVar32._4_4_ = fVar81;
    auVar32._0_4_ = fVar80;
    auVar32._8_4_ = fStack_a8;
    auVar32._12_4_ = fVar83;
    uVar86 = a64_TBL(ZEXT816(0),auVar32,DAT_0388a680);
    fVar11 = (float)((ulong)uVar77 >> 0x20);
    auVar33._4_4_ = fVar81;
    auVar33._0_4_ = fVar80;
    auVar33._8_4_ = fStack_a8;
    auVar33._12_4_ = fVar83;
    uVar87 = a64_TBL(ZEXT816(0),auVar33,DAT_0388a880);
    auVar34._4_4_ = fVar81;
    auVar34._0_4_ = fVar80;
    auVar34._8_4_ = fStack_a8;
    auVar34._12_4_ = fVar83;
    uVar88 = a64_TBL(ZEXT816(0),auVar34,DAT_0388a790);
    fVar71 = (float)_DAT_03889ad0;
    fVar73 = (float)((ulong)_DAT_03889ad0 >> 0x20);
    fVar74 = (float)_UNK_03889ad8;
    fVar75 = (float)((ulong)_UNK_03889ad8 >> 0x20);
    auVar35._4_4_ = fVar81;
    auVar35._0_4_ = fVar80;
    auVar35._8_4_ = fVar80;
    auVar35._12_4_ = fVar81;
    uVar79 = a64_TBL(ZEXT816(0),auVar35,DAT_0388a648);
    auVar7[1] = extraout_var_00;
    auVar7[0] = extraout_b0_00;
    auVar7[2] = extraout_var_04;
    auVar7[3] = extraout_var_08;
    auVar7[4] = extraout_var_12;
    auVar7[5] = extraout_var_16;
    auVar7[6] = extraout_var_20;
    auVar7[7] = extraout_var_24;
    auVar7[8] = extraout_var_28;
    auVar7[9] = extraout_var_32;
    auVar7[10] = extraout_var_36;
    auVar7[0xb] = extraout_var_40;
    auVar7[0xc] = extraout_var_44;
    auVar7[0xd] = extraout_var_48;
    auVar7[0xe] = extraout_var_52;
    auVar7[0xf] = extraout_var_56;
    uVar12 = a64_TBL(ZEXT816(0),auVar7,DAT_0388a880);
    fVar14 = (float)((ulong)uVar12 >> 0x20);
    auVar43._12_4_ = fStack_a4;
    auVar43._0_12_ = auVar49;
    uVar13 = a64_TBL(ZEXT816(0),auVar43,DAT_0388a580);
    auVar44._12_4_ = fStack_a4;
    auVar44._0_12_ = auVar50;
    uVar42 = a64_TBL(ZEXT816(0),auVar44,DAT_0388a680);
    fVar82 = (float)((ulong)uVar42 >> 0x20);
    fVar80 = (fVar80 * (float)uVar77 +
              fVar71 * (float)CONCAT13(extraout_var_08,
                                       CONCAT12(extraout_var_04,
                                                CONCAT11(extraout_var_00,extraout_b0_00))) *
                       (float)uVar72 + fVar71 * (float)uVar12 * (float)uVar86) -
             (float)uVar84 * (float)uVar87;
    fVar81 = (fVar81 * fVar11 +
              fVar73 * (float)CONCAT13(extraout_var_24,
                                       CONCAT12(extraout_var_20,
                                                CONCAT11(extraout_var_16,extraout_var_12))) *
                       (float)((ulong)uVar72 >> 0x20) +
             fVar73 * fVar14 * (float)((ulong)uVar86 >> 0x20)) -
             fVar85 * (float)((ulong)uVar87 >> 0x20);
    uVar59 = SUB41(fVar81,0);
    uVar60 = (undefined1)((uint)fVar81 >> 8);
    uVar61 = (undefined1)((uint)fVar81 >> 0x10);
    uVar62 = (undefined1)((uint)fVar81 >> 0x18);
    fVar28 = (fStack_a8 * (float)uVar77 + fVar74 * (float)uVar84 * (float)uVar76 +
             fVar74 * (float)CONCAT13(extraout_var_08,
                                      CONCAT12(extraout_var_04,
                                               CONCAT11(extraout_var_00,extraout_b0_00))) *
                      (float)uVar79) - (float)uVar12 * (float)uVar88;
    uVar63 = SUB41(fVar28,0);
    uVar64 = (undefined1)((uint)fVar28 >> 8);
    uVar65 = (undefined1)((uint)fVar28 >> 0x10);
    uVar66 = (undefined1)((uint)fVar28 >> 0x18);
    fVar29 = (fVar83 * fVar11 + fVar75 * fVar85 * (float)((ulong)uVar76 >> 0x20) +
             fVar75 * (float)CONCAT13(extraout_var_24,
                                      CONCAT12(extraout_var_20,
                                               CONCAT11(extraout_var_16,extraout_var_12))) *
                      (float)((ulong)uVar79 >> 0x20)) - fVar14 * (float)((ulong)uVar88 >> 0x20);
    uVar67 = SUB41(fVar29,0);
    uVar68 = (undefined1)((uint)fVar29 >> 8);
    uVar69 = (undefined1)((uint)fVar29 >> 0x10);
    uVar70 = (undefined1)((uint)fVar29 >> 0x18);
    auVar16[4] = uVar59;
    auVar16._0_4_ = fVar80;
    auVar16[5] = uVar60;
    auVar16[6] = uVar61;
    auVar16[7] = uVar62;
    auVar16[8] = uVar63;
    auVar16[9] = uVar64;
    auVar16[10] = uVar65;
    auVar16[0xb] = uVar66;
    auVar16[0xc] = uVar67;
    auVar16[0xd] = uVar68;
    auVar16[0xe] = uVar69;
    auVar16[0xf] = uVar70;
    uVar72 = a64_TBL(ZEXT816(0),auVar16,DAT_0388a580);
    auVar17[4] = uVar59;
    auVar17._0_4_ = fVar80;
    auVar17[5] = uVar60;
    auVar17[6] = uVar61;
    auVar17[7] = uVar62;
    auVar17[8] = uVar63;
    auVar17[9] = uVar64;
    auVar17[10] = uVar65;
    auVar17[0xb] = uVar66;
    auVar17[0xc] = uVar67;
    auVar17[0xd] = uVar68;
    auVar17[0xe] = uVar69;
    auVar17[0xf] = uVar70;
    uVar76 = a64_TBL(ZEXT816(0),auVar17,DAT_0388a6c8);
    fVar14 = (float)((ulong)uVar13 >> 0x20);
    auVar18[4] = uVar59;
    auVar18._0_4_ = fVar80;
    auVar18[5] = uVar60;
    auVar18[6] = uVar61;
    auVar18[7] = uVar62;
    auVar18[8] = uVar63;
    auVar18[9] = uVar64;
    auVar18[10] = uVar65;
    auVar18[0xb] = uVar66;
    auVar18[0xc] = uVar67;
    auVar18[0xd] = uVar68;
    auVar18[0xe] = uVar69;
    auVar18[0xf] = uVar70;
    uVar86 = a64_TBL(ZEXT816(0),auVar18,DAT_0388a790);
    auVar19[4] = uVar59;
    auVar19._0_4_ = fVar80;
    auVar19[5] = uVar60;
    auVar19[6] = uVar61;
    auVar19[7] = uVar62;
    auVar19[8] = uVar63;
    auVar19[9] = uVar64;
    auVar19[10] = uVar65;
    auVar19[0xb] = uVar66;
    auVar19[0xc] = uVar67;
    auVar19[0xd] = uVar68;
    auVar19[0xe] = uVar69;
    auVar19[0xf] = uVar70;
    uVar79 = a64_TBL(ZEXT816(0),auVar19,DAT_0388a680);
    auVar20[4] = uVar59;
    auVar20._0_4_ = fVar80;
    auVar20[5] = uVar60;
    auVar20[6] = uVar61;
    auVar20[7] = uVar62;
    auVar20[8] = uVar63;
    auVar20[9] = uVar64;
    auVar20[10] = uVar65;
    auVar20[0xb] = uVar66;
    auVar20[0xc] = uVar67;
    auVar20[0xd] = uVar68;
    auVar20[0xe] = uVar69;
    auVar20[0xf] = uVar70;
    uVar84 = a64_TBL(ZEXT816(0),auVar20,DAT_0388a880);
    auVar45._12_4_ = fStack_a4;
    auVar45._0_12_ = auVar51;
    uVar77 = a64_TBL(ZEXT816(0),auVar45,DAT_0388a880);
    fVar78 = (float)((ulong)uVar77 >> 0x20);
    auVar21[4] = uVar59;
    auVar21._0_4_ = fVar80;
    auVar21[5] = uVar60;
    auVar21[6] = uVar61;
    auVar21[7] = uVar62;
    auVar21[8] = SUB41(fVar80,0);
    auVar21[9] = (char)((uint)fVar80 >> 8);
    auVar21[10] = (char)((uint)fVar80 >> 0x10);
    auVar21[0xb] = (char)((uint)fVar80 >> 0x18);
    auVar21[0xc] = uVar59;
    auVar21[0xd] = uVar60;
    auVar21[0xe] = uVar61;
    auVar21[0xf] = uVar62;
    uVar12 = a64_TBL(ZEXT816(0),auVar21,DAT_0388a648);
    fVar83 = fVar89 * (float)uVar12;
    fVar85 = fVar90 * (float)((ulong)uVar12 >> 0x20);
    fVar11 = ((float)uVar13 * fVar80 + fVar71 * fVar89 * (float)uVar72 +
             fVar71 * (float)uVar77 * (float)uVar79) - (float)uVar42 * (float)uVar84;
    fVar80 = (fVar14 * fVar81 + fVar73 * fVar90 * (float)((ulong)uVar72 >> 0x20) +
             fVar73 * fVar78 * (float)((ulong)uVar79 >> 0x20)) -
             fVar82 * (float)((ulong)uVar84 >> 0x20);
    fVar81 = ((float)uVar13 * fVar28 + fVar74 * (float)uVar42 * (float)uVar76 + fVar74 * fVar83) -
             (float)uVar77 * (float)uVar86;
    fVar83 = (fVar14 * fVar29 + fVar75 * fVar82 * (float)((ulong)uVar76 >> 0x20) +
             fVar75 * (float)(CONCAT17((char)((uint)fVar85 >> 0x18),
                                       CONCAT16((char)((uint)fVar85 >> 0x10),
                                                CONCAT15((char)((uint)fVar85 >> 8),
                                                         CONCAT14(SUB41(fVar85,0),fVar83)))) >> 0x20
                             )) - fVar78 * (float)((ulong)uVar86 >> 0x20);
    bVar58 = (byte)_DAT_038897c0;
    uVar56 = (ulong)_DAT_038897c0 >> 8;
    uVar52 = (ulong)_DAT_038897c0 >> 0x10;
    uVar53 = (ulong)_DAT_038897c0 >> 0x18;
    fVar14 = (float)((ulong)lVar57 >> 0x20) +
             (float)CONCAT13((byte)((uint)fVar80 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x38),
                             CONCAT12((byte)((uint)fVar80 >> 0x10) &
                                      (byte)((ulong)_DAT_038897c0 >> 0x30),
                                      CONCAT11((byte)((uint)fVar80 >> 8) &
                                               (byte)((ulong)_DAT_038897c0 >> 0x28),
                                               SUB41(fVar80,0) &
                                               (byte)((ulong)_DAT_038897c0 >> 0x20))));
    fVar80 = (float)((ulong)lVar15 >> 0x20) +
             (float)CONCAT13((byte)((uint)fVar83 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x38),
                             CONCAT12((byte)((uint)fVar83 >> 0x10) &
                                      (byte)((ulong)_UNK_038897c8 >> 0x30),
                                      CONCAT11((byte)((uint)fVar83 >> 8) &
                                               (byte)((ulong)_UNK_038897c8 >> 0x28),
                                               SUB41(fVar83,0) &
                                               (byte)((ulong)_UNK_038897c8 >> 0x20))));
    *(ulong *)(param_2 + 0x28) =
         CONCAT17((char)((uint)fVar80 >> 0x18),
                  CONCAT16((char)((uint)fVar80 >> 0x10),
                           CONCAT15((char)((uint)fVar80 >> 8),
                                    CONCAT14(SUB41(fVar80,0),
                                             (float)lVar15 +
                                             (float)CONCAT13((byte)((uint)fVar81 >> 0x18) &
                                                             (byte)((ulong)_UNK_038897c8 >> 0x18),
                                                             CONCAT12((byte)((uint)fVar81 >> 0x10) &
                                                                      (byte)((ulong)_UNK_038897c8 >>
                                                                            0x10),
                                                                      CONCAT11((byte)((uint)fVar81
                                                                                     >> 8) &
                                                                               (byte)((ulong)
                                                  _UNK_038897c8 >> 8),
                                                  SUB41(fVar81,0) & (byte)_UNK_038897c8)))))));
    *(ulong *)(param_2 + 0x20) =
         CONCAT17((char)((uint)fVar14 >> 0x18),
                  CONCAT16((char)((uint)fVar14 >> 0x10),
                           CONCAT15((char)((uint)fVar14 >> 8),
                                    CONCAT14(SUB41(fVar14,0),
                                             (float)lVar57 +
                                             (float)CONCAT13((byte)((uint)fVar11 >> 0x18) &
                                                             (byte)uVar53,
                                                             CONCAT12((byte)((uint)fVar11 >> 0x10) &
                                                                      (byte)uVar52,
                                                                      CONCAT11((byte)((uint)fVar11
                                                                                     >> 8) &
                                                                               (byte)uVar56,
                                                                               SUB41(fVar11,0) &
                                                                               bVar58)))))));
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    if (local_30 != (long *)0x0) {
      (**(code **)(*local_30 + 0x20))();
    }
    if (local_78 != (long *)0x0) {
      lVar57 = local_78[0xb];
      piVar2 = (int *)(lVar57 + 0xc);
      do {
        iVar55 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar55 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar55 + -1 == 0) {
        *(undefined8 *)(lVar57 + 0x18) = 0;
        (**(code **)(*local_78 + 0x20))();
      }
    }
    if (local_70 == (long *)0x0) goto joined_r0x02591580;
    lVar57 = local_70[0xb];
    piVar2 = (int *)(lVar57 + 0xc);
    do {
      iVar55 = *piVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar55;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    FUN_01aeda18(&local_48,local_28);
    if (local_48 == (undefined8 *)0x0) {
      local_70 = (long *)0x0;
    }
    else {
      FUN_00959eac(&local_70);
      puVar54 = local_48;
      if (local_48 != (undefined8 *)0x0) {
        piVar2 = (int *)(local_48 + 1);
        do {
          iVar55 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar55 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar55 + -1 == 0) {
          local_48[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar55 = __cxa_guard_acquire(PTR_DAT_04379498), iVar55 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar57 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar57;
          local_68 = *puVar54;
          FUN_02a44274(lVar57 + 0xd8,&local_68);
        }
      }
    }
    if (local_70 == (long *)0x0) goto joined_r0x02591580;
    local_38 = 9;
    local_30 = (long *)0x0;
    local_68 = 0xf02937393981964b;
    pcStack_60 = "action_button_ride_ride_screen_offset";
    local_48 = (undefined8 *)&DAT_12f480e8b0aebe7d;
    pcStack_40 = "appli_hud";
    local_58 = 0x25;
    local_50 = (long *)0x0;
    FUN_00aee408(&local_48,&local_68);
    *(ulong *)(param_2 + 0x38) =
         CONCAT17(extraout_var_57,
                  CONCAT16(extraout_var_53,
                           CONCAT15(extraout_var_49,
                                    CONCAT14(extraout_var_45,
                                             CONCAT13(extraout_var_41,
                                                      CONCAT12(extraout_var_37,
                                                               CONCAT11(extraout_var_33,
                                                                        extraout_var_29)))))));
    *(ulong *)(param_2 + 0x30) =
         CONCAT17(extraout_var_25,
                  CONCAT16(extraout_var_21,
                           CONCAT15(extraout_var_17,
                                    CONCAT14(extraout_var_13,
                                             CONCAT13(extraout_var_09,
                                                      CONCAT12(extraout_var_05,
                                                               CONCAT11(extraout_var_01,
                                                                        extraout_b0_01)))))));
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    if (local_30 != (long *)0x0) {
      (**(code **)(*local_30 + 0x20))();
    }
    FUN_009c69bc(&local_78,local_70);
    lVar15 = local_78[0x1b];
    lVar57 = local_78[0x1a];
    FUN_009c69bc(&local_80,local_70);
    pauVar1 = (undefined1 (*) [12])(local_80 + 0x18);
    uVar12 = *(undefined8 *)*pauVar1;
    auVar51 = *pauVar1;
    auVar50 = *pauVar1;
    auVar49 = *pauVar1;
    local_48 = (undefined8 *)&DAT_12f480e8b0aebe7d;
    pcStack_40 = "appli_hud";
    local_38 = 9;
    local_30 = (long *)0x0;
    local_68 = 0x4fd40f4e9c16fd48;
    pcStack_60 = "action_button_ride_ride_offset";
    local_58 = 0x1e;
    local_50 = (long *)0x0;
    fStack_a8 = (float)local_80[0x19];
    fStack_a4 = (float)((ulong)local_80[0x19] >> 0x20);
    FUN_00aee408(&local_48,&local_68);
    fVar89 = (float)uVar12;
    fVar90 = (float)((ulong)uVar12 >> 0x20);
    fVar80 = fVar89 * (float)_DAT_03889ac0;
    fVar81 = fVar90 * (float)((ulong)_DAT_03889ac0 >> 0x20);
    fStack_a8 = fStack_a8 * (float)_UNK_03889ac8;
    fVar83 = fStack_a4 * (float)((ulong)_UNK_03889ac8 >> 0x20);
    auVar8[1] = extraout_var_02;
    auVar8[0] = extraout_b0_02;
    auVar8[2] = extraout_var_06;
    auVar8[3] = extraout_var_10;
    auVar8[4] = extraout_var_14;
    auVar8[5] = extraout_var_18;
    auVar8[6] = extraout_var_22;
    auVar8[7] = extraout_var_26;
    auVar8[8] = extraout_var_30;
    auVar8[9] = extraout_var_34;
    auVar8[10] = extraout_var_38;
    auVar8[0xb] = extraout_var_42;
    auVar8[0xc] = extraout_var_46;
    auVar8[0xd] = extraout_var_50;
    auVar8[0xe] = extraout_var_54;
    auVar8[0xf] = extraout_var_58;
    uVar77 = a64_TBL(ZEXT816(0),auVar8,DAT_0388a580);
    auVar9[1] = extraout_var_02;
    auVar9[0] = extraout_b0_02;
    auVar9[2] = extraout_var_06;
    auVar9[3] = extraout_var_10;
    auVar9[4] = extraout_var_14;
    auVar9[5] = extraout_var_18;
    auVar9[6] = extraout_var_22;
    auVar9[7] = extraout_var_26;
    auVar9[8] = extraout_var_30;
    auVar9[9] = extraout_var_34;
    auVar9[10] = extraout_var_38;
    auVar9[0xb] = extraout_var_42;
    auVar9[0xc] = extraout_var_46;
    auVar9[0xd] = extraout_var_50;
    auVar9[0xe] = extraout_var_54;
    auVar9[0xf] = extraout_var_58;
    uVar84 = a64_TBL(ZEXT816(0),auVar9,DAT_0388a680);
    auVar36._4_4_ = fVar81;
    auVar36._0_4_ = fVar80;
    auVar36._8_4_ = fStack_a8;
    auVar36._12_4_ = fVar83;
    uVar72 = a64_TBL(ZEXT816(0),auVar36,DAT_0388a580);
    auVar37._4_4_ = fVar81;
    auVar37._0_4_ = fVar80;
    auVar37._8_4_ = fStack_a8;
    auVar37._12_4_ = fVar83;
    uVar76 = a64_TBL(ZEXT816(0),auVar37,DAT_0388a6c8);
    fVar85 = (float)((ulong)uVar84 >> 0x20);
    auVar38._4_4_ = fVar81;
    auVar38._0_4_ = fVar80;
    auVar38._8_4_ = fStack_a8;
    auVar38._12_4_ = fVar83;
    uVar86 = a64_TBL(ZEXT816(0),auVar38,DAT_0388a680);
    fVar11 = (float)((ulong)uVar77 >> 0x20);
    auVar39._4_4_ = fVar81;
    auVar39._0_4_ = fVar80;
    auVar39._8_4_ = fStack_a8;
    auVar39._12_4_ = fVar83;
    uVar87 = a64_TBL(ZEXT816(0),auVar39,DAT_0388a880);
    auVar40._4_4_ = fVar81;
    auVar40._0_4_ = fVar80;
    auVar40._8_4_ = fStack_a8;
    auVar40._12_4_ = fVar83;
    uVar88 = a64_TBL(ZEXT816(0),auVar40,DAT_0388a790);
    fVar71 = (float)_DAT_03889ad0;
    fVar73 = (float)((ulong)_DAT_03889ad0 >> 0x20);
    fVar74 = (float)_UNK_03889ad8;
    fVar75 = (float)((ulong)_UNK_03889ad8 >> 0x20);
    auVar41._4_4_ = fVar81;
    auVar41._0_4_ = fVar80;
    auVar41._8_4_ = fVar80;
    auVar41._12_4_ = fVar81;
    uVar79 = a64_TBL(ZEXT816(0),auVar41,DAT_0388a648);
    auVar10[1] = extraout_var_02;
    auVar10[0] = extraout_b0_02;
    auVar10[2] = extraout_var_06;
    auVar10[3] = extraout_var_10;
    auVar10[4] = extraout_var_14;
    auVar10[5] = extraout_var_18;
    auVar10[6] = extraout_var_22;
    auVar10[7] = extraout_var_26;
    auVar10[8] = extraout_var_30;
    auVar10[9] = extraout_var_34;
    auVar10[10] = extraout_var_38;
    auVar10[0xb] = extraout_var_42;
    auVar10[0xc] = extraout_var_46;
    auVar10[0xd] = extraout_var_50;
    auVar10[0xe] = extraout_var_54;
    auVar10[0xf] = extraout_var_58;
    uVar12 = a64_TBL(ZEXT816(0),auVar10,DAT_0388a880);
    fVar14 = (float)((ulong)uVar12 >> 0x20);
    auVar46._12_4_ = fStack_a4;
    auVar46._0_12_ = auVar49;
    uVar13 = a64_TBL(ZEXT816(0),auVar46,DAT_0388a580);
    auVar47._12_4_ = fStack_a4;
    auVar47._0_12_ = auVar50;
    uVar42 = a64_TBL(ZEXT816(0),auVar47,DAT_0388a680);
    fVar82 = (float)((ulong)uVar42 >> 0x20);
    fVar80 = (fVar80 * (float)uVar77 +
              fVar71 * (float)CONCAT13(extraout_var_10,
                                       CONCAT12(extraout_var_06,
                                                CONCAT11(extraout_var_02,extraout_b0_02))) *
                       (float)uVar72 + fVar71 * (float)uVar12 * (float)uVar86) -
             (float)uVar84 * (float)uVar87;
    fVar81 = (fVar81 * fVar11 +
              fVar73 * (float)CONCAT13(extraout_var_26,
                                       CONCAT12(extraout_var_22,
                                                CONCAT11(extraout_var_18,extraout_var_14))) *
                       (float)((ulong)uVar72 >> 0x20) +
             fVar73 * fVar14 * (float)((ulong)uVar86 >> 0x20)) -
             fVar85 * (float)((ulong)uVar87 >> 0x20);
    uVar59 = SUB41(fVar81,0);
    uVar60 = (undefined1)((uint)fVar81 >> 8);
    uVar61 = (undefined1)((uint)fVar81 >> 0x10);
    uVar62 = (undefined1)((uint)fVar81 >> 0x18);
    fVar28 = (fStack_a8 * (float)uVar77 + fVar74 * (float)uVar84 * (float)uVar76 +
             fVar74 * (float)CONCAT13(extraout_var_10,
                                      CONCAT12(extraout_var_06,
                                               CONCAT11(extraout_var_02,extraout_b0_02))) *
                      (float)uVar79) - (float)uVar12 * (float)uVar88;
    uVar63 = SUB41(fVar28,0);
    uVar64 = (undefined1)((uint)fVar28 >> 8);
    uVar65 = (undefined1)((uint)fVar28 >> 0x10);
    uVar66 = (undefined1)((uint)fVar28 >> 0x18);
    fVar29 = (fVar83 * fVar11 + fVar75 * fVar85 * (float)((ulong)uVar76 >> 0x20) +
             fVar75 * (float)CONCAT13(extraout_var_26,
                                      CONCAT12(extraout_var_22,
                                               CONCAT11(extraout_var_18,extraout_var_14))) *
                      (float)((ulong)uVar79 >> 0x20)) - fVar14 * (float)((ulong)uVar88 >> 0x20);
    uVar67 = SUB41(fVar29,0);
    uVar68 = (undefined1)((uint)fVar29 >> 8);
    uVar69 = (undefined1)((uint)fVar29 >> 0x10);
    uVar70 = (undefined1)((uint)fVar29 >> 0x18);
    auVar22[4] = uVar59;
    auVar22._0_4_ = fVar80;
    auVar22[5] = uVar60;
    auVar22[6] = uVar61;
    auVar22[7] = uVar62;
    auVar22[8] = uVar63;
    auVar22[9] = uVar64;
    auVar22[10] = uVar65;
    auVar22[0xb] = uVar66;
    auVar22[0xc] = uVar67;
    auVar22[0xd] = uVar68;
    auVar22[0xe] = uVar69;
    auVar22[0xf] = uVar70;
    uVar72 = a64_TBL(ZEXT816(0),auVar22,DAT_0388a580);
    auVar23[4] = uVar59;
    auVar23._0_4_ = fVar80;
    auVar23[5] = uVar60;
    auVar23[6] = uVar61;
    auVar23[7] = uVar62;
    auVar23[8] = uVar63;
    auVar23[9] = uVar64;
    auVar23[10] = uVar65;
    auVar23[0xb] = uVar66;
    auVar23[0xc] = uVar67;
    auVar23[0xd] = uVar68;
    auVar23[0xe] = uVar69;
    auVar23[0xf] = uVar70;
    uVar76 = a64_TBL(ZEXT816(0),auVar23,DAT_0388a6c8);
    fVar14 = (float)((ulong)uVar13 >> 0x20);
    auVar24[4] = uVar59;
    auVar24._0_4_ = fVar80;
    auVar24[5] = uVar60;
    auVar24[6] = uVar61;
    auVar24[7] = uVar62;
    auVar24[8] = uVar63;
    auVar24[9] = uVar64;
    auVar24[10] = uVar65;
    auVar24[0xb] = uVar66;
    auVar24[0xc] = uVar67;
    auVar24[0xd] = uVar68;
    auVar24[0xe] = uVar69;
    auVar24[0xf] = uVar70;
    uVar86 = a64_TBL(ZEXT816(0),auVar24,DAT_0388a790);
    auVar25[4] = uVar59;
    auVar25._0_4_ = fVar80;
    auVar25[5] = uVar60;
    auVar25[6] = uVar61;
    auVar25[7] = uVar62;
    auVar25[8] = uVar63;
    auVar25[9] = uVar64;
    auVar25[10] = uVar65;
    auVar25[0xb] = uVar66;
    auVar25[0xc] = uVar67;
    auVar25[0xd] = uVar68;
    auVar25[0xe] = uVar69;
    auVar25[0xf] = uVar70;
    uVar79 = a64_TBL(ZEXT816(0),auVar25,DAT_0388a680);
    auVar26[4] = uVar59;
    auVar26._0_4_ = fVar80;
    auVar26[5] = uVar60;
    auVar26[6] = uVar61;
    auVar26[7] = uVar62;
    auVar26[8] = uVar63;
    auVar26[9] = uVar64;
    auVar26[10] = uVar65;
    auVar26[0xb] = uVar66;
    auVar26[0xc] = uVar67;
    auVar26[0xd] = uVar68;
    auVar26[0xe] = uVar69;
    auVar26[0xf] = uVar70;
    uVar84 = a64_TBL(ZEXT816(0),auVar26,DAT_0388a880);
    auVar48._12_4_ = fStack_a4;
    auVar48._0_12_ = auVar51;
    uVar77 = a64_TBL(ZEXT816(0),auVar48,DAT_0388a880);
    fVar78 = (float)((ulong)uVar77 >> 0x20);
    auVar27[4] = uVar59;
    auVar27._0_4_ = fVar80;
    auVar27[5] = uVar60;
    auVar27[6] = uVar61;
    auVar27[7] = uVar62;
    auVar27[8] = SUB41(fVar80,0);
    auVar27[9] = (char)((uint)fVar80 >> 8);
    auVar27[10] = (char)((uint)fVar80 >> 0x10);
    auVar27[0xb] = (char)((uint)fVar80 >> 0x18);
    auVar27[0xc] = uVar59;
    auVar27[0xd] = uVar60;
    auVar27[0xe] = uVar61;
    auVar27[0xf] = uVar62;
    uVar12 = a64_TBL(ZEXT816(0),auVar27,DAT_0388a648);
    fVar83 = fVar89 * (float)uVar12;
    fVar85 = fVar90 * (float)((ulong)uVar12 >> 0x20);
    fVar11 = ((float)uVar13 * fVar80 + fVar71 * fVar89 * (float)uVar72 +
             fVar71 * (float)uVar77 * (float)uVar79) - (float)uVar42 * (float)uVar84;
    fVar80 = (fVar14 * fVar81 + fVar73 * fVar90 * (float)((ulong)uVar72 >> 0x20) +
             fVar73 * fVar78 * (float)((ulong)uVar79 >> 0x20)) -
             fVar82 * (float)((ulong)uVar84 >> 0x20);
    fVar81 = ((float)uVar13 * fVar28 + fVar74 * (float)uVar42 * (float)uVar76 + fVar74 * fVar83) -
             (float)uVar77 * (float)uVar86;
    fVar83 = (fVar14 * fVar29 + fVar75 * fVar82 * (float)((ulong)uVar76 >> 0x20) +
             fVar75 * (float)(CONCAT17((char)((uint)fVar85 >> 0x18),
                                       CONCAT16((char)((uint)fVar85 >> 0x10),
                                                CONCAT15((char)((uint)fVar85 >> 8),
                                                         CONCAT14(SUB41(fVar85,0),fVar83)))) >> 0x20
                             )) - fVar78 * (float)((ulong)uVar86 >> 0x20);
    bVar58 = (byte)_DAT_038897c0;
    uVar56 = (ulong)_DAT_038897c0 >> 8;
    uVar52 = (ulong)_DAT_038897c0 >> 0x10;
    uVar53 = (ulong)_DAT_038897c0 >> 0x18;
    fVar14 = (float)((ulong)lVar57 >> 0x20) +
             (float)CONCAT13((byte)((uint)fVar80 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x38),
                             CONCAT12((byte)((uint)fVar80 >> 0x10) &
                                      (byte)((ulong)_DAT_038897c0 >> 0x30),
                                      CONCAT11((byte)((uint)fVar80 >> 8) &
                                               (byte)((ulong)_DAT_038897c0 >> 0x28),
                                               SUB41(fVar80,0) &
                                               (byte)((ulong)_DAT_038897c0 >> 0x20))));
    fVar80 = (float)((ulong)lVar15 >> 0x20) +
             (float)CONCAT13((byte)((uint)fVar83 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x38),
                             CONCAT12((byte)((uint)fVar83 >> 0x10) &
                                      (byte)((ulong)_UNK_038897c8 >> 0x30),
                                      CONCAT11((byte)((uint)fVar83 >> 8) &
                                               (byte)((ulong)_UNK_038897c8 >> 0x28),
                                               SUB41(fVar83,0) &
                                               (byte)((ulong)_UNK_038897c8 >> 0x20))));
    *(ulong *)(param_2 + 0x28) =
         CONCAT17((char)((uint)fVar80 >> 0x18),
                  CONCAT16((char)((uint)fVar80 >> 0x10),
                           CONCAT15((char)((uint)fVar80 >> 8),
                                    CONCAT14(SUB41(fVar80,0),
                                             (float)lVar15 +
                                             (float)CONCAT13((byte)((uint)fVar81 >> 0x18) &
                                                             (byte)((ulong)_UNK_038897c8 >> 0x18),
                                                             CONCAT12((byte)((uint)fVar81 >> 0x10) &
                                                                      (byte)((ulong)_UNK_038897c8 >>
                                                                            0x10),
                                                                      CONCAT11((byte)((uint)fVar81
                                                                                     >> 8) &
                                                                               (byte)((ulong)
                                                  _UNK_038897c8 >> 8),
                                                  SUB41(fVar81,0) & (byte)_UNK_038897c8)))))));
    *(ulong *)(param_2 + 0x20) =
         CONCAT17((char)((uint)fVar14 >> 0x18),
                  CONCAT16((char)((uint)fVar14 >> 0x10),
                           CONCAT15((char)((uint)fVar14 >> 8),
                                    CONCAT14(SUB41(fVar14,0),
                                             (float)lVar57 +
                                             (float)CONCAT13((byte)((uint)fVar11 >> 0x18) &
                                                             (byte)uVar53,
                                                             CONCAT12((byte)((uint)fVar11 >> 0x10) &
                                                                      (byte)uVar52,
                                                                      CONCAT11((byte)((uint)fVar11
                                                                                     >> 8) &
                                                                               (byte)uVar56,
                                                                               SUB41(fVar11,0) &
                                                                               bVar58)))))));
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    if (local_30 != (long *)0x0) {
      (**(code **)(*local_30 + 0x20))();
    }
    if (local_80 != (long *)0x0) {
      lVar57 = local_80[0xb];
      piVar2 = (int *)(lVar57 + 0xc);
      do {
        iVar55 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar55 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar55 + -1 == 0) {
        *(undefined8 *)(lVar57 + 0x18) = 0;
        (**(code **)(*local_80 + 0x20))();
      }
    }
    if (local_78 != (long *)0x0) {
      lVar57 = local_78[0xb];
      piVar2 = (int *)(lVar57 + 0xc);
      do {
        iVar55 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar55 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar55 + -1 == 0) {
        *(undefined8 *)(lVar57 + 0x18) = 0;
        (**(code **)(*local_78 + 0x20))();
      }
    }
    if (local_70 == (long *)0x0) goto joined_r0x02591580;
    lVar57 = local_70[0xb];
    piVar2 = (int *)(lVar57 + 0xc);
    do {
      iVar55 = *piVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar55;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (iVar55 == 0) {
    *(undefined8 *)(lVar57 + 0x18) = 0;
    (**(code **)(*local_70 + 0x20))();
  }
joined_r0x02591580:
  if (local_28 != (long *)0x0) {
    lVar57 = local_28[0xb];
    piVar2 = (int *)(lVar57 + 0xc);
    do {
      iVar55 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar55 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar55 + -1 == 0) {
      *(undefined8 *)(lVar57 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}


