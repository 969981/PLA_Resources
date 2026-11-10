/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0267485c; name: FUN_0267485c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0267485c(long param_1)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
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
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  long lVar41;
  undefined1 extraout_b0;
  byte bVar42;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  byte bVar44;
  undefined1 extraout_var_07;
  undefined1 uVar45;
  undefined1 extraout_var_08;
  undefined1 uVar46;
  undefined1 extraout_var_09;
  undefined1 uVar47;
  undefined1 extraout_var_10;
  undefined1 uVar48;
  undefined1 extraout_var_11;
  undefined1 uVar49;
  undefined1 extraout_var_12;
  undefined1 uVar50;
  undefined1 extraout_var_13;
  undefined1 uVar51;
  undefined1 auVar43 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  float fVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined1 in_q3 [16];
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined8 uVar68;
  float fVar69;
  undefined8 uVar70;
  float fVar71;
  undefined8 uVar72;
  float fVar73;
  float fVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  long *local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  long *local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *plStack_68;
  undefined1 auStack_60 [24];
  long *local_48;
  undefined8 local_40;
  undefined *puStack_38;
  undefined8 local_30;
  long *local_28;
  
  uVar56 = in_q3._8_8_;
  uVar58 = in_q3._0_8_;
  lVar41 = (long)*(int *)(param_1 + 0x59c) * 0x18;
  local_70 = 0x18;
  plStack_68 = (long *)0x0;
  local_40 = *(undefined8 *)(&DAT_04265bd0 + lVar41);
  puStack_38 = (&PTR_s_odoshishi_04265bd8)[(long)*(int *)(param_1 + 0x59c) * 3];
  local_30 = *(undefined8 *)(&DAT_04265be0 + lVar41);
  local_28 = (long *)0x0;
  local_80 = (long *)&DAT_592c1862f926d877;
  pcStack_78 = "player_attach_joint_name";
  FUN_00bef9ac(&local_a0,&local_40,&local_80);
  FUN_02a47560(auStack_60,&local_a0);
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (plStack_68 != (long *)0x0) {
    (**(code **)(*plStack_68 + 0x20))();
  }
  FUN_01a74058(&local_80,param_1,auStack_60,PTR_DAT_0437a330);
  if ((char)local_80 == '\0') {
    FUN_00956dac(&local_80,param_1 + 0x1a8);
    (**(code **)(*local_80 + 0x40))();
    uStack_a8 = (undefined1)uVar56;
    uStack_a7 = (undefined7)((ulong)uVar56 >> 8);
    if (local_80 != (long *)0x0) {
      lVar41 = local_80[0xb];
      piVar2 = (int *)(lVar41 + 0xc);
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
        *(undefined8 *)(lVar41 + 0x18) = 0;
        (**(code **)(*local_80 + 0x20))();
      }
    }
  }
  else {
    local_a0 = (long *)&DAT_5be096ff8d5f6bb;
    pcStack_98 = "ride_off_player_offset";
    local_90 = 0x16;
    local_88 = (long *)0x0;
    FUN_00aee408(&local_40,&local_a0);
    uStack_a7 = (undefined7)
                (CONCAT17(extraout_var_13,
                          CONCAT16(extraout_var_12,
                                   CONCAT15(extraout_var_11,
                                            CONCAT14(extraout_var_10,
                                                     CONCAT13(extraout_var_09,
                                                              CONCAT12(extraout_var_08,
                                                                       CONCAT11(extraout_var_07,
                                                                                extraout_var_06)))))
                                  )) >> 8);
    fVar9 = (float)CONCAT13(extraout_var_01,
                            CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)));
    uVar58 = CONCAT17(extraout_var_05,
                      CONCAT16(extraout_var_04,
                               CONCAT15(extraout_var_03,CONCAT14(extraout_var_02,fVar9))));
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    FUN_00956dac(&local_a0,param_1 + 0x1a8);
    plVar1 = local_a0 + 0x18;
    lVar41 = local_a0[0x19];
    uVar45 = (undefined1)((ulong)lVar41 >> 8);
    uVar46 = (undefined1)((ulong)lVar41 >> 0x10);
    uVar47 = (undefined1)((ulong)lVar41 >> 0x18);
    uVar48 = (undefined1)((ulong)lVar41 >> 0x20);
    uVar49 = (undefined1)((ulong)lVar41 >> 0x28);
    uVar50 = (undefined1)((ulong)lVar41 >> 0x30);
    uVar51 = (undefined1)((ulong)lVar41 >> 0x38);
    fVar71 = (float)*plVar1;
    fVar60 = fVar71 * (float)_DAT_03889ac0;
    fVar74 = (float)((ulong)*plVar1 >> 0x20);
    fVar62 = fVar74 * (float)((ulong)_DAT_03889ac0 >> 0x20);
    fVar64 = (float)lVar41 * (float)_UNK_03889ac8;
    fVar66 = (float)((ulong)lVar41 >> 0x20) * (float)((ulong)_UNK_03889ac8 >> 0x20);
    auVar24[8] = extraout_var_06;
    auVar24._0_8_ = uVar58;
    auVar24._9_7_ = uStack_a7;
    auVar23[8] = extraout_var_06;
    auVar23._0_8_ = uVar58;
    auVar23._9_7_ = uStack_a7;
    auVar22[8] = extraout_var_06;
    auVar22._0_8_ = uVar58;
    auVar22._9_7_ = uStack_a7;
    fVar69 = (float)((ulong)uVar58 >> 0x20);
    uVar68 = a64_TBL(ZEXT816(0),auVar22,DAT_0388a680);
    auVar16._4_4_ = fVar62;
    auVar16._0_4_ = fVar60;
    auVar16._8_4_ = fVar64;
    auVar16._12_4_ = fVar66;
    uVar70 = a64_TBL(ZEXT816(0),auVar16,DAT_0388a6c8);
    auVar17._4_4_ = fVar62;
    auVar17._0_4_ = fVar60;
    auVar17._8_4_ = fVar64;
    auVar17._12_4_ = fVar66;
    uVar55 = a64_TBL(ZEXT816(0),auVar17,DAT_0388a580);
    fVar57 = (float)((ulong)uVar68 >> 0x20);
    uVar58 = a64_TBL(ZEXT816(0),auVar23,DAT_0388a580);
    fVar53 = (float)((ulong)uVar58 >> 0x20);
    auVar18._4_4_ = fVar62;
    auVar18._0_4_ = fVar60;
    auVar18._8_4_ = fVar64;
    auVar18._12_4_ = fVar66;
    uVar75 = a64_TBL(ZEXT816(0),auVar18,DAT_0388a680);
    auVar19._4_4_ = fVar62;
    auVar19._0_4_ = fVar60;
    auVar19._8_4_ = fVar64;
    auVar19._12_4_ = fVar66;
    uVar76 = a64_TBL(ZEXT816(0),auVar19,DAT_0388a880);
    auVar20._4_4_ = fVar62;
    auVar20._0_4_ = fVar60;
    auVar20._8_4_ = fVar64;
    auVar20._12_4_ = fVar66;
    uVar77 = a64_TBL(ZEXT816(0),auVar20,DAT_0388a790);
    auVar21._4_4_ = fVar62;
    auVar21._0_4_ = fVar60;
    auVar21._8_4_ = fVar60;
    auVar21._12_4_ = fVar62;
    uVar56 = a64_TBL(ZEXT816(0),auVar21,DAT_0388a648);
    uVar59 = a64_TBL(ZEXT816(0),auVar24,DAT_0388a880);
    fVar73 = (float)((ulong)uVar59 >> 0x20);
    fVar65 = (float)_UNK_03889ad8;
    fVar67 = (float)((ulong)_UNK_03889ad8 >> 0x20);
    fVar61 = (float)_DAT_03889ad0;
    fVar63 = (float)((ulong)_DAT_03889ad0 >> 0x20);
    auVar6[9] = uVar45;
    auVar6._0_9_ = *(unkbyte9 *)plVar1;
    auVar6[10] = uVar46;
    auVar6[0xb] = uVar47;
    auVar6[0xc] = uVar48;
    auVar6[0xd] = uVar49;
    auVar6[0xe] = uVar50;
    auVar6[0xf] = uVar51;
    uVar72 = a64_TBL(ZEXT816(0),auVar6,DAT_0388a580);
    fVar52 = (fVar60 * (float)uVar58 + fVar61 * fVar9 * (float)uVar55 +
             fVar61 * (float)uVar59 * (float)uVar75) - (float)uVar68 * (float)uVar76;
    fVar54 = (fVar62 * fVar53 + fVar63 * fVar69 * (float)((ulong)uVar55 >> 0x20) +
             fVar63 * fVar73 * (float)((ulong)uVar75 >> 0x20)) -
             fVar57 * (float)((ulong)uVar76 >> 0x20);
    fVar64 = (fVar64 * (float)uVar58 + fVar65 * (float)uVar68 * (float)uVar70 +
             fVar65 * fVar9 * (float)uVar56) - (float)uVar59 * (float)uVar77;
    fVar66 = (fVar66 * fVar53 + fVar67 * fVar57 * (float)((ulong)uVar70 >> 0x20) +
             fVar67 * fVar69 * (float)((ulong)uVar56 >> 0x20)) -
             fVar73 * (float)((ulong)uVar77 >> 0x20);
    auVar7[9] = uVar45;
    auVar7._0_9_ = *(unkbyte9 *)plVar1;
    auVar7[10] = uVar46;
    auVar7[0xb] = uVar47;
    auVar7[0xc] = uVar48;
    auVar7[0xd] = uVar49;
    auVar7[0xe] = uVar50;
    auVar7[0xf] = uVar51;
    uVar70 = a64_TBL(ZEXT816(0),auVar7,DAT_0388a680);
    auVar10._4_4_ = fVar54;
    auVar10._0_4_ = fVar52;
    auVar10._8_4_ = fVar64;
    auVar10._12_4_ = fVar66;
    uVar55 = a64_TBL(ZEXT816(0),auVar10,DAT_0388a580);
    auVar11._4_4_ = fVar54;
    auVar11._0_4_ = fVar52;
    auVar11._8_4_ = fVar64;
    auVar11._12_4_ = fVar66;
    uVar75 = a64_TBL(ZEXT816(0),auVar11,DAT_0388a6c8);
    fVar69 = (float)((ulong)uVar70 >> 0x20);
    fVar73 = (float)((ulong)uVar72 >> 0x20);
    auVar12._4_4_ = fVar54;
    auVar12._0_4_ = fVar52;
    auVar12._8_4_ = fVar64;
    auVar12._12_4_ = fVar66;
    uVar59 = a64_TBL(ZEXT816(0),auVar12,DAT_0388a680);
    auVar13._4_4_ = fVar54;
    auVar13._0_4_ = fVar52;
    auVar13._8_4_ = fVar64;
    auVar13._12_4_ = fVar66;
    uVar76 = a64_TBL(ZEXT816(0),auVar13,DAT_0388a790);
    auVar14._4_4_ = fVar54;
    auVar14._0_4_ = fVar52;
    auVar14._8_4_ = fVar64;
    auVar14._12_4_ = fVar66;
    uVar68 = a64_TBL(ZEXT816(0),auVar14,DAT_0388a880);
    auVar8[9] = uVar45;
    auVar8._0_9_ = *(unkbyte9 *)plVar1;
    auVar8[10] = uVar46;
    auVar8[0xb] = uVar47;
    auVar8[0xc] = uVar48;
    auVar8[0xd] = uVar49;
    auVar8[0xe] = uVar50;
    auVar8[0xf] = uVar51;
    uVar56 = a64_TBL(ZEXT816(0),auVar8,DAT_0388a880);
    fVar57 = (float)((ulong)uVar56 >> 0x20);
    auVar15._4_4_ = fVar54;
    auVar15._0_4_ = fVar52;
    auVar15._8_4_ = fVar52;
    auVar15._12_4_ = fVar54;
    uVar58 = a64_TBL(ZEXT816(0),auVar15,DAT_0388a648);
    fVar9 = fVar71 * (float)uVar58;
    fVar53 = fVar74 * (float)((ulong)uVar58 >> 0x20);
    fVar60 = SUB84(plStack_68,0);
    uVar26 = (ulong)plStack_68 >> 0x20;
    fVar62 = (float)local_70;
    uVar25 = (ulong)local_70 >> 0x20;
    bVar44 = (byte)_UNK_038897c8;
    uVar34 = (ulong)_UNK_038897c8 >> 8;
    uVar35 = (ulong)_UNK_038897c8 >> 0x10;
    uVar36 = (ulong)_UNK_038897c8 >> 0x18;
    uVar37 = (ulong)_UNK_038897c8 >> 0x20;
    uVar38 = (ulong)_UNK_038897c8 >> 0x28;
    uVar39 = (ulong)_UNK_038897c8 >> 0x30;
    uVar40 = (ulong)_UNK_038897c8 >> 0x38;
    bVar42 = (byte)_DAT_038897c0;
    uVar27 = (ulong)_DAT_038897c0 >> 8;
    uVar28 = (ulong)_DAT_038897c0 >> 0x10;
    uVar29 = (ulong)_DAT_038897c0 >> 0x18;
    uVar30 = (ulong)_DAT_038897c0 >> 0x20;
    uVar31 = (ulong)_DAT_038897c0 >> 0x28;
    uVar32 = (ulong)_DAT_038897c0 >> 0x30;
    uVar33 = (ulong)_DAT_038897c0 >> 0x38;
    fVar71 = ((float)uVar72 * fVar52 + fVar61 * fVar71 * (float)uVar55 +
             fVar61 * (float)uVar56 * (float)uVar59) - (float)uVar70 * (float)uVar68;
    fVar74 = (fVar73 * fVar54 + fVar63 * fVar74 * (float)((ulong)uVar55 >> 0x20) +
             fVar63 * fVar57 * (float)((ulong)uVar59 >> 0x20)) -
             fVar69 * (float)((ulong)uVar68 >> 0x20);
    fVar52 = ((float)uVar72 * fVar64 + fVar65 * (float)uVar70 * (float)uVar75 + fVar65 * fVar9) -
             (float)uVar56 * (float)uVar76;
    uVar58 = CONCAT44((fVar73 * fVar66 + fVar67 * fVar69 * (float)((ulong)uVar75 >> 0x20) +
                      fVar67 * (float)(CONCAT17((char)((uint)fVar53 >> 0x18),
                                                CONCAT16((char)((uint)fVar53 >> 0x10),
                                                         CONCAT15((char)((uint)fVar53 >> 8),
                                                                  CONCAT14(SUB41(fVar53,0),fVar9))))
                                      >> 0x20)) - fVar57 * (float)((ulong)uVar76 >> 0x20),fVar52);
    if (local_a0 != (long *)0x0) {
      lVar41 = local_a0[0xb];
      piVar2 = (int *)(lVar41 + 0xc);
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
        *(undefined8 *)(lVar41 + 0x18) = 0;
        uStack_a8 = SUB41(fVar52,0);
        uStack_a7 = (undefined7)((ulong)uVar58 >> 8);
        (**(code **)(*local_a0 + 0x20))();
        uVar58 = CONCAT71(uStack_a7,uStack_a8);
      }
    }
    if ((char)local_80 != '\0') {
      local_80 = (long *)((ulong)local_80 & 0xffffffffffffff00);
    }
    fVar9 = (float)uVar25 +
            (float)CONCAT13((byte)((uint)fVar74 >> 0x18) & (byte)uVar33,
                            CONCAT12((byte)((uint)fVar74 >> 0x10) & (byte)uVar32,
                                     CONCAT11((byte)((uint)fVar74 >> 8) & (byte)uVar31,
                                              SUB41(fVar74,0) & (byte)uVar30)));
    fVar60 = fVar60 + (float)CONCAT13((byte)((ulong)uVar58 >> 0x18) & (byte)uVar36,
                                      CONCAT12((byte)((ulong)uVar58 >> 0x10) & (byte)uVar35,
                                               CONCAT11((byte)((ulong)uVar58 >> 8) & (byte)uVar34,
                                                        (byte)uVar58 & bVar44)));
    fVar74 = (float)uVar26 +
             (float)CONCAT13((byte)((ulong)uVar58 >> 0x38) & (byte)uVar40,
                             CONCAT12((byte)((ulong)uVar58 >> 0x30) & (byte)uVar39,
                                      CONCAT11((byte)((ulong)uVar58 >> 0x28) & (byte)uVar38,
                                               (byte)((ulong)uVar58 >> 0x20) & (byte)uVar37)));
    uStack_a8 = SUB41(fVar60,0);
    uStack_a7 = (undefined7)
                (CONCAT17((char)((uint)fVar74 >> 0x18),
                          CONCAT16((char)((uint)fVar74 >> 0x10),
                                   CONCAT15((char)((uint)fVar74 >> 8),
                                            CONCAT14(SUB41(fVar74,0),fVar60)))) >> 8);
    uVar58 = CONCAT17((char)((uint)fVar9 >> 0x18),
                      CONCAT16((char)((uint)fVar9 >> 0x10),
                               CONCAT15((char)((uint)fVar9 >> 8),
                                        CONCAT14(SUB41(fVar9,0),
                                                 fVar62 + (float)CONCAT13((byte)((uint)fVar71 >>
                                                                                0x18) & (byte)uVar29
                                                                          ,CONCAT12((byte)((uint)
                                                  fVar71 >> 0x10) & (byte)uVar28,
                                                  CONCAT11((byte)((uint)fVar71 >> 8) & (byte)uVar27,
                                                           SUB41(fVar71,0) & bVar42)))))));
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  auVar43[9] = (undefined1)uStack_a7;
  auVar43[10] = (undefined1)((uint7)uStack_a7 >> 8);
  auVar43[0xb] = (undefined1)((uint7)uStack_a7 >> 0x10);
  auVar43[0xc] = (undefined1)((uint7)uStack_a7 >> 0x18);
  auVar43[0xd] = (undefined1)((uint7)uStack_a7 >> 0x20);
  auVar43[0xe] = (undefined1)((uint7)uStack_a7 >> 0x28);
  auVar43[0xf] = (undefined1)((uint7)uStack_a7 >> 0x30);
  auVar43[8] = uStack_a8;
  auVar43._0_8_ = uVar58;
  return auVar43;
}


