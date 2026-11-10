/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a8d048; name: FUN_01a8d048
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_01a8d048(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined2 uVar12;
  int iVar13;
  int iVar14;
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
  undefined8 uVar31;
  undefined8 uVar32;
  long lVar33;
  long lVar34;
  byte bVar35;
  undefined1 extraout_b0;
  byte bVar37;
  undefined1 extraout_var;
  byte bVar38;
  undefined1 extraout_var_00;
  byte bVar39;
  undefined1 extraout_var_01;
  byte bVar40;
  undefined1 uVar41;
  undefined1 extraout_var_02;
  byte bVar42;
  undefined1 uVar43;
  undefined1 extraout_var_03;
  byte bVar44;
  undefined1 uVar45;
  undefined1 extraout_var_04;
  byte bVar46;
  undefined1 uVar47;
  undefined1 extraout_var_05;
  byte bVar48;
  undefined1 extraout_var_06;
  byte bVar49;
  undefined1 extraout_var_07;
  byte bVar50;
  undefined1 extraout_var_08;
  byte bVar51;
  undefined1 extraout_var_09;
  byte bVar52;
  undefined1 extraout_var_10;
  byte bVar53;
  undefined1 extraout_var_11;
  byte bVar54;
  undefined1 extraout_var_12;
  byte bVar55;
  undefined1 auVar36 [16];
  undefined1 extraout_var_13;
  float fVar56;
  float fVar57;
  undefined8 uVar58;
  float fVar65;
  undefined8 uVar59;
  undefined8 uVar60;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined8 uVar74;
  float fVar79;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined8 uVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  undefined4 uVar85;
  undefined4 uVar86;
  undefined8 uVar87;
  long lVar88;
  undefined8 uVar89;
  undefined8 uVar90;
  undefined8 uVar91;
  undefined8 uVar92;
  byte local_40;
  byte bStack_3f;
  byte bStack_3e;
  byte bStack_3d;
  byte bStack_3c;
  byte bStack_3b;
  byte bStack_3a;
  byte bStack_39;
  byte bStack_38;
  byte bStack_37;
  byte bStack_36;
  byte bStack_35;
  byte bStack_34;
  byte bStack_33;
  byte bStack_32;
  byte bStack_31;
  long *local_18;
  
  if (*(long *)(param_1 + 0x638) == 0) {
    local_18 = (long *)0x0;
  }
  else {
    FUN_0182b7ac(&local_18,*(long *)(param_1 + 0x638));
    if (local_18 != (long *)0x0) {
      FUN_01817104(local_18);
      uVar32 = _UNK_038897c8;
      uVar31 = _DAT_038897c0;
      uVar85 = (undefined4)_UNK_03888d18;
      uVar86 = (undefined4)((ulong)_UNK_03888d18 >> 0x20);
      auVar28._8_4_ = uVar85;
      auVar28._0_8_ = _DAT_03888d10;
      auVar28._12_4_ = uVar86;
      uVar87 = a64_TBL(ZEXT816(0),auVar28,DAT_0388a680);
      fVar65 = (float)CONCAT13(extraout_var_01,
                               CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))) *
               (float)_DAT_03889ac0;
      fVar79 = (float)CONCAT13(extraout_var_05,
                               CONCAT12(extraout_var_04,CONCAT11(extraout_var_03,extraout_var_02)))
               * (float)((ulong)_DAT_03889ac0 >> 0x20);
      fVar57 = (float)CONCAT13(extraout_var_09,
                               CONCAT12(extraout_var_08,CONCAT11(extraout_var_07,extraout_var_06)))
               * (float)_UNK_03889ac8;
      fVar69 = (float)CONCAT13(extraout_var_13,
                               CONCAT12(extraout_var_12,CONCAT11(extraout_var_11,extraout_var_10)))
               * (float)((ulong)_UNK_03889ac8 >> 0x20);
      auVar29._8_4_ = uVar85;
      auVar29._0_8_ = _DAT_03888d10;
      auVar29._12_4_ = uVar86;
      uVar60 = a64_TBL(ZEXT816(0),auVar29,DAT_0388a580);
      auVar20._4_4_ = fVar79;
      auVar20._0_4_ = fVar65;
      auVar20._8_4_ = fVar57;
      auVar20._12_4_ = fVar69;
      uVar59 = a64_TBL(ZEXT816(0),auVar20,DAT_0388a580);
      auVar21._4_4_ = fVar79;
      auVar21._0_4_ = fVar65;
      auVar21._8_4_ = fVar57;
      auVar21._12_4_ = fVar69;
      uVar89 = a64_TBL(ZEXT816(0),auVar21,DAT_0388a6c8);
      fVar81 = (float)((ulong)uVar87 >> 0x20);
      auVar22._4_4_ = fVar79;
      auVar22._0_4_ = fVar65;
      auVar22._8_4_ = fVar57;
      auVar22._12_4_ = fVar69;
      uVar90 = a64_TBL(ZEXT816(0),auVar22,DAT_0388a680);
      auVar23._4_4_ = fVar79;
      auVar23._0_4_ = fVar65;
      auVar23._8_4_ = fVar57;
      auVar23._12_4_ = fVar69;
      uVar92 = a64_TBL(ZEXT816(0),auVar23,DAT_0388a790);
      fVar56 = (float)((ulong)uVar60 >> 0x20);
      auVar24._4_4_ = fVar79;
      auVar24._0_4_ = fVar65;
      auVar24._8_4_ = fVar57;
      auVar24._12_4_ = fVar69;
      uVar91 = a64_TBL(ZEXT816(0),auVar24,DAT_0388a880);
      auVar25._4_4_ = fVar79;
      auVar25._0_4_ = fVar65;
      auVar25._8_4_ = fVar65;
      auVar25._12_4_ = fVar79;
      uVar58 = a64_TBL(ZEXT816(0),auVar25,DAT_0388a648);
      auVar30._8_4_ = uVar85;
      auVar30._0_8_ = _DAT_03888d10;
      auVar30._12_4_ = uVar86;
      uVar74 = a64_TBL(ZEXT816(0),auVar30,DAT_0388a880);
      fVar71 = (float)((ulong)uVar74 >> 0x20);
      auVar61[1] = extraout_var;
      auVar61[0] = extraout_b0;
      auVar61[2] = extraout_var_00;
      auVar61[3] = extraout_var_01;
      auVar61[4] = extraout_var_02;
      auVar61[5] = extraout_var_03;
      auVar61[6] = extraout_var_04;
      auVar61[7] = extraout_var_05;
      auVar61[8] = extraout_var_06;
      auVar61[9] = extraout_var_07;
      auVar61[10] = extraout_var_08;
      auVar61[0xb] = extraout_var_09;
      auVar61[0xc] = extraout_var_10;
      auVar61[0xd] = extraout_var_11;
      auVar61[0xe] = extraout_var_12;
      auVar61[0xf] = extraout_var_13;
      uVar80 = a64_TBL(ZEXT816(0),auVar61,DAT_0388a580);
      fVar72 = (float)((ulong)uVar80 >> 0x20);
      fVar68 = (float)_UNK_03889ad8;
      fVar70 = (float)((ulong)_UNK_03889ad8 >> 0x20);
      fVar66 = (float)_DAT_03889ad0;
      fVar67 = (float)((ulong)_DAT_03889ad0 >> 0x20);
      fVar73 = (fVar65 * (float)uVar60 + fVar66 * (float)uVar59 * 0.0 +
               fVar66 * (float)uVar74 * (float)uVar90) - (float)uVar87 * (float)uVar91;
      fVar79 = (fVar79 * fVar56 + fVar67 * (float)((ulong)uVar59 >> 0x20) * 0.0 +
               fVar67 * fVar71 * (float)((ulong)uVar90 >> 0x20)) -
               fVar81 * (float)((ulong)uVar91 >> 0x20);
      auVar63._0_8_ = CONCAT44(fVar79,fVar73);
      auVar63._8_4_ =
           (fVar57 * (float)uVar60 + fVar68 * (float)uVar87 * (float)uVar89 +
           fVar68 * (float)uVar58 * 0.0) - (float)uVar74 * (float)uVar92;
      auVar63._12_4_ =
           (fVar69 * fVar56 + fVar70 * fVar81 * (float)((ulong)uVar89 >> 0x20) +
           fVar70 * (float)((ulong)uVar58 >> 0x20) * 0.0) - fVar71 * (float)((ulong)uVar92 >> 0x20);
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
      uVar58 = a64_TBL(ZEXT816(0),auVar77,DAT_0388a680);
      fVar69 = (float)((ulong)uVar58 >> 0x20);
      uVar87 = a64_TBL(ZEXT816(0),auVar63,DAT_0388a580);
      uVar90 = a64_TBL(ZEXT816(0),auVar63,DAT_0388a6c8);
      uVar91 = a64_TBL(ZEXT816(0),auVar63,DAT_0388a790);
      uVar60 = a64_TBL(ZEXT816(0),auVar63,DAT_0388a680);
      uVar89 = a64_TBL(ZEXT816(0),auVar63,DAT_0388a880);
      auVar64._8_8_ = auVar63._0_8_;
      auVar64._0_8_ = auVar63._0_8_;
      auVar11[1] = extraout_var;
      auVar11[0] = extraout_b0;
      auVar11[2] = extraout_var_00;
      auVar11[3] = extraout_var_01;
      auVar11[4] = extraout_var_02;
      auVar11[5] = extraout_var_03;
      auVar11[6] = extraout_var_04;
      auVar11[7] = extraout_var_05;
      auVar11[8] = extraout_var_06;
      auVar11[9] = extraout_var_07;
      auVar11[10] = extraout_var_08;
      auVar11[0xb] = extraout_var_09;
      auVar11[0xc] = extraout_var_10;
      auVar11[0xd] = extraout_var_11;
      auVar11[0xe] = extraout_var_12;
      auVar11[0xf] = extraout_var_13;
      uVar59 = a64_TBL(ZEXT816(0),auVar11,DAT_0388a880);
      fVar57 = (float)((ulong)uVar59 >> 0x20);
      uVar74 = a64_TBL(ZEXT816(0),auVar64,DAT_0388a648);
      fVar56 = (float)CONCAT13(extraout_var_01,
                               CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))) *
               (float)uVar74;
      fVar65 = (float)CONCAT13(extraout_var_05,
                               CONCAT12(extraout_var_04,CONCAT11(extraout_var_03,extraout_var_02)))
               * (float)((ulong)uVar74 >> 0x20);
      fVar73 = ((float)uVar80 * fVar73 +
                fVar66 * (float)CONCAT13(extraout_var_01,
                                         CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)
                                                 )) * (float)uVar87 +
               fVar66 * (float)uVar59 * (float)uVar60) - (float)uVar58 * (float)uVar89;
      fVar79 = (fVar72 * fVar79 +
                fVar67 * (float)CONCAT13(extraout_var_05,
                                         CONCAT12(extraout_var_04,
                                                  CONCAT11(extraout_var_03,extraout_var_02))) *
                         (float)((ulong)uVar87 >> 0x20) +
               fVar67 * fVar57 * (float)((ulong)uVar60 >> 0x20)) -
               fVar69 * (float)((ulong)uVar89 >> 0x20);
      fVar66 = ((float)uVar80 * auVar63._8_4_ + fVar68 * (float)uVar58 * (float)uVar90 +
               fVar68 * fVar56) - (float)uVar59 * (float)uVar91;
      fVar56 = (fVar72 * auVar63._12_4_ + fVar70 * fVar69 * (float)((ulong)uVar90 >> 0x20) +
               fVar70 * (float)(CONCAT17((char)((uint)fVar65 >> 0x18),
                                         CONCAT16((char)((uint)fVar65 >> 0x10),
                                                  CONCAT15((char)((uint)fVar65 >> 8),
                                                           CONCAT14(SUB41(fVar65,0),fVar56)))) >>
                               0x20)) - fVar57 * (float)((ulong)uVar91 >> 0x20);
      if (local_18 != (long *)0x0) {
        lVar34 = local_18[0xb];
        piVar1 = (int *)(lVar34 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar34 + 0x18) = 0;
          (**(code **)(*local_18 + 0x20))();
        }
      }
      local_40 = (byte)uVar31;
      bStack_3f = (byte)((ulong)uVar31 >> 8);
      bStack_3e = (byte)((ulong)uVar31 >> 0x10);
      bStack_3d = (byte)((ulong)uVar31 >> 0x18);
      bStack_3c = (byte)((ulong)uVar31 >> 0x20);
      bStack_3b = (byte)((ulong)uVar31 >> 0x28);
      bStack_3a = (byte)((ulong)uVar31 >> 0x30);
      bStack_39 = (byte)((ulong)uVar31 >> 0x38);
      bStack_38 = (byte)uVar32;
      bStack_37 = (byte)((ulong)uVar32 >> 8);
      bStack_36 = (byte)((ulong)uVar32 >> 0x10);
      bStack_35 = (byte)((ulong)uVar32 >> 0x18);
      bStack_34 = (byte)((ulong)uVar32 >> 0x20);
      bStack_33 = (byte)((ulong)uVar32 >> 0x28);
      bStack_32 = (byte)((ulong)uVar32 >> 0x30);
      bStack_31 = (byte)((ulong)uVar32 >> 0x38);
      local_40 = SUB41(fVar73,0) & local_40;
      bStack_3f = (byte)((uint)fVar73 >> 8) & bStack_3f;
      bStack_3e = (byte)((uint)fVar73 >> 0x10) & bStack_3e;
      bStack_3d = (byte)((uint)fVar73 >> 0x18) & bStack_3d;
      bStack_3c = SUB41(fVar79,0) & bStack_3c;
      bStack_3b = (byte)((uint)fVar79 >> 8) & bStack_3b;
      bStack_3a = (byte)((uint)fVar79 >> 0x10) & bStack_3a;
      bStack_39 = (byte)((uint)fVar79 >> 0x18) & bStack_39;
      bStack_38 = SUB41(fVar66,0) & bStack_38;
      bStack_37 = (byte)((uint)fVar66 >> 8) & bStack_37;
      bStack_36 = (byte)((uint)fVar66 >> 0x10) & bStack_36;
      bStack_35 = (byte)((uint)fVar66 >> 0x18) & bStack_35;
      bStack_34 = SUB41(fVar56,0) & bStack_34;
      bStack_33 = (byte)((uint)fVar56 >> 8) & bStack_33;
      bStack_32 = (byte)((uint)fVar56 >> 0x10) & bStack_32;
      bStack_31 = (byte)((uint)fVar56 >> 0x18) & bStack_31;
      goto LAB_01a8d1a0;
    }
  }
  FUN_009c69bc(&local_18,param_1);
  lVar88 = local_18[0x19];
  lVar34 = local_18[0x18];
  if (local_18 != (long *)0x0) {
    lVar33 = local_18[0xb];
    piVar1 = (int *)(lVar33 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar33 + 0x18) = 0;
      (**(code **)(*local_18 + 0x20))();
    }
  }
  bVar35 = (byte)lVar34 & (byte)_DAT_038897c0;
  bVar37 = (byte)((ulong)lVar34 >> 8) & (byte)((ulong)_DAT_038897c0 >> 8);
  bVar38 = (byte)((ulong)lVar34 >> 0x10) & (byte)((ulong)_DAT_038897c0 >> 0x10);
  bVar39 = (byte)((ulong)lVar34 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x18);
  bVar40 = (byte)((ulong)lVar34 >> 0x20) & (byte)((ulong)_DAT_038897c0 >> 0x20);
  bVar42 = (byte)((ulong)lVar34 >> 0x28) & (byte)((ulong)_DAT_038897c0 >> 0x28);
  bVar44 = (byte)((ulong)lVar34 >> 0x30) & (byte)((ulong)_DAT_038897c0 >> 0x30);
  bVar46 = (byte)((ulong)lVar34 >> 0x38) & (byte)((ulong)_DAT_038897c0 >> 0x38);
  bVar48 = (byte)lVar88 & (byte)_UNK_038897c8;
  bVar49 = (byte)((ulong)lVar88 >> 8) & (byte)((ulong)_UNK_038897c8 >> 8);
  bVar50 = (byte)((ulong)lVar88 >> 0x10) & (byte)((ulong)_UNK_038897c8 >> 0x10);
  bVar51 = (byte)((ulong)lVar88 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x18);
  bVar52 = (byte)((ulong)lVar88 >> 0x20) & (byte)((ulong)_UNK_038897c8 >> 0x20);
  bVar53 = (byte)((ulong)lVar88 >> 0x28) & (byte)((ulong)_UNK_038897c8 >> 0x28);
  bVar54 = (byte)((ulong)lVar88 >> 0x30) & (byte)((ulong)_UNK_038897c8 >> 0x30);
  bVar55 = (byte)((ulong)lVar88 >> 0x38) & (byte)((ulong)_UNK_038897c8 >> 0x38);
  uVar58 = NEON_ext(CONCAT17(bVar46,CONCAT16(bVar44,CONCAT15(bVar42,CONCAT14(bVar40,CONCAT13(bVar39,
                                                  CONCAT12(bVar38,CONCAT11(bVar37,bVar35))))))),
                    CONCAT17(bVar46,CONCAT16(bVar44,CONCAT15(bVar42,CONCAT14(bVar40,CONCAT13(bVar39,
                                                  CONCAT12(bVar38,CONCAT11(bVar37,bVar35))))))),4,1)
  ;
  auVar5[1] = bVar37;
  auVar5[0] = bVar35;
  auVar5[2] = bVar38;
  auVar5[3] = bVar39;
  auVar5[4] = bVar40;
  auVar5[5] = bVar42;
  auVar5[6] = bVar44;
  auVar5[7] = bVar46;
  auVar5[8] = bVar48;
  auVar5[9] = bVar49;
  auVar5[10] = bVar50;
  auVar5[0xb] = bVar51;
  auVar5[0xc] = bVar52;
  auVar5[0xd] = bVar53;
  auVar5[0xe] = bVar54;
  auVar5[0xf] = bVar55;
  uVar59 = a64_TBL(ZEXT816(0),auVar5,DAT_0388a6f0);
  auVar6[1] = bVar37;
  auVar6[0] = bVar35;
  auVar6[2] = bVar38;
  auVar6[3] = bVar39;
  auVar6[4] = bVar40;
  auVar6[5] = bVar42;
  auVar6[6] = bVar44;
  auVar6[7] = bVar46;
  auVar6[8] = bVar48;
  auVar6[9] = bVar49;
  auVar6[10] = bVar50;
  auVar6[0xb] = bVar51;
  auVar6[0xc] = bVar52;
  auVar6[0xd] = bVar53;
  auVar6[0xe] = bVar54;
  auVar6[0xf] = bVar55;
  uVar74 = a64_TBL(ZEXT816(0),auVar6,DAT_0388a5e0);
  auVar7[1] = bVar37;
  auVar7[0] = bVar35;
  auVar7[2] = bVar38;
  auVar7[3] = bVar39;
  auVar7[4] = bVar40;
  auVar7[5] = bVar42;
  auVar7[6] = bVar44;
  auVar7[7] = bVar46;
  auVar7[8] = bVar48;
  auVar7[9] = bVar49;
  auVar7[10] = bVar50;
  auVar7[0xb] = bVar51;
  auVar7[0xc] = bVar52;
  auVar7[0xd] = bVar53;
  auVar7[0xe] = bVar54;
  auVar7[0xf] = bVar55;
  uVar80 = a64_TBL(ZEXT816(0),auVar7,DAT_0388a6d8);
  fVar56 = (float)uVar58 * (float)uVar58;
  fVar65 = (float)((ulong)uVar58 >> 0x20);
  fVar65 = fVar65 * fVar65;
  fVar67 = (float)uVar59;
  fVar68 = (float)((ulong)uVar59 >> 0x20);
  fVar73 = (float)uVar74 * (float)uVar74;
  fVar79 = (float)((ulong)uVar74 >> 0x20);
  fVar79 = fVar79 * fVar79;
  fVar69 = (float)uVar80;
  fVar70 = (float)((ulong)uVar80 >> 0x20);
  fVar81 = (float)_DAT_03888fc0 - (fVar56 + fVar56 + fVar73 + fVar73);
  fVar82 = (float)((ulong)_DAT_03888fc0 >> 0x20) - (fVar65 + fVar65 + fVar79 + fVar79);
  fVar83 = (float)_UNK_03888fc8 -
           (fVar67 * fVar67 + fVar67 * fVar67 + fVar69 * fVar69 + fVar69 * fVar69);
  fVar84 = (float)((ulong)_UNK_03888fc8 >> 0x20) -
           (fVar68 * fVar68 + fVar68 * fVar68 + fVar70 * fVar70 + fVar70 * fVar70);
  auVar8[1] = bVar37;
  auVar8[0] = bVar35;
  auVar8[2] = bVar38;
  auVar8[3] = bVar39;
  auVar8[4] = bVar40;
  auVar8[5] = bVar42;
  auVar8[6] = bVar44;
  auVar8[7] = bVar46;
  auVar8[8] = bVar48;
  auVar8[9] = bVar49;
  auVar8[10] = bVar50;
  auVar8[0xb] = bVar51;
  auVar8[0xc] = bVar52;
  auVar8[0xd] = bVar53;
  auVar8[0xe] = bVar54;
  auVar8[0xf] = bVar55;
  uVar59 = a64_TBL(ZEXT816(0),auVar8,DAT_0388a880);
  fVar57 = (float)uVar59 * (float)CONCAT13(bVar39,CONCAT12(bVar38,CONCAT11(bVar37,bVar35)));
  fVar66 = (float)((ulong)uVar59 >> 0x20) *
           (float)CONCAT13(bVar46,CONCAT12(bVar44,CONCAT11(bVar42,bVar40)));
  fVar67 = fVar67 * (float)CONCAT13(bVar51,CONCAT12(bVar50,CONCAT11(bVar49,bVar48)));
  fVar68 = fVar68 * (float)CONCAT13(bVar55,CONCAT12(bVar54,CONCAT11(bVar53,bVar52)));
  auVar9[1] = bVar37;
  auVar9[0] = bVar35;
  auVar9[2] = bVar38;
  auVar9[3] = bVar39;
  auVar9[4] = bVar40;
  auVar9[5] = bVar42;
  auVar9[6] = bVar44;
  auVar9[7] = bVar46;
  auVar9[8] = bVar48;
  auVar9[9] = bVar49;
  auVar9[10] = bVar50;
  auVar9[0xb] = bVar51;
  auVar9[0xc] = bVar52;
  auVar9[0xd] = bVar53;
  auVar9[0xe] = bVar54;
  auVar9[0xf] = bVar55;
  uVar59 = a64_TBL(ZEXT816(0),auVar9,DAT_0388a680);
  fVar57 = fVar57 + fVar57;
  fVar66 = fVar66 + fVar66;
  fVar67 = fVar67 + fVar67;
  fVar68 = fVar68 + fVar68;
  fVar79 = (float)((ulong)lVar88 >> 0x20);
  fVar56 = (float)uVar59 * fVar79;
  fVar65 = (float)((ulong)uVar59 >> 0x20) * fVar79;
  fVar56 = fVar56 + fVar56;
  fVar65 = fVar65 + fVar65;
  fVar73 = fVar69 * fVar79 + fVar69 * fVar79;
  fVar79 = fVar70 * fVar79 + fVar70 * fVar79;
  fVar69 = fVar57 + fVar56;
  fVar70 = fVar66 + fVar65;
  fVar71 = fVar67 + fVar73;
  fVar72 = fVar68 + fVar79;
  auVar75._0_4_ = fVar57 - fVar56;
  auVar75._4_4_ = fVar66 - fVar65;
  auVar75._8_4_ = fVar67 - fVar73;
  auVar75._12_4_ = fVar68 - fVar79;
  auVar16._4_4_ = fVar70;
  auVar16._0_4_ = fVar69;
  auVar16._8_4_ = fVar71;
  auVar16._12_4_ = fVar72;
  uVar74 = a64_TBL(ZEXT816(0),auVar16,auVar75,DAT_0388a758);
  auVar17._4_4_ = fVar70;
  auVar17._0_4_ = fVar69;
  auVar17._8_4_ = fVar71;
  auVar17._12_4_ = fVar72;
  uVar59 = a64_TBL(ZEXT816(0),auVar17,auVar75,DAT_0388a720);
  uVar85 = (undefined4)((ulong)uVar59 >> 0x20);
  auVar18._4_4_ = fVar82;
  auVar18._0_4_ = fVar81;
  auVar18._8_4_ = fVar83;
  auVar18._12_4_ = fVar84;
  auVar26._8_4_ = (int)uVar59;
  auVar26._0_8_ = uVar74;
  auVar26._12_4_ = uVar85;
  uVar58 = a64_TBL(ZEXT816(0),auVar18,auVar26,DAT_0388a668);
  fVar79 = (float)uVar58;
  fVar57 = (float)((ulong)uVar58 >> 0x20);
  auVar19._4_4_ = fVar82;
  auVar19._0_4_ = fVar81;
  auVar19._8_4_ = fVar83;
  auVar19._12_4_ = fVar84;
  auVar27._8_4_ = (int)uVar59;
  auVar27._0_8_ = uVar74;
  auVar27._12_4_ = uVar85;
  uVar59 = a64_TBL(ZEXT816(0),auVar19,auVar27,DAT_0388a5a8);
  fVar66 = (float)uVar59;
  fVar67 = (float)((ulong)uVar59 >> 0x20);
  fVar56 = fVar66 * fVar66 + fVar79 * fVar79;
  fVar65 = fVar67 * fVar67 + fVar57 * fVar57;
  fVar73 = fVar56 + fVar65;
  fVar56 = fVar56 + fVar65;
  uVar41 = SUB41(fVar56,0);
  uVar43 = (undefined1)((uint)fVar56 >> 8);
  uVar45 = (undefined1)((uint)fVar56 >> 0x10);
  uVar47 = (undefined1)((uint)fVar56 >> 0x18);
  auVar10[4] = uVar41;
  auVar10._0_4_ = fVar73;
  auVar10[5] = uVar43;
  auVar10[6] = uVar45;
  auVar10[7] = uVar47;
  auVar10[8] = SUB41(fVar73,0);
  auVar10[9] = (char)((uint)fVar73 >> 8);
  auVar10[10] = (char)((uint)fVar73 >> 0x10);
  auVar10[0xb] = (char)((uint)fVar73 >> 0x18);
  auVar10[0xc] = uVar41;
  auVar10[0xd] = uVar43;
  auVar10[0xe] = uVar45;
  auVar10[0xf] = uVar47;
  auVar61 = NEON_frsqrte(auVar10,4);
  auVar76._0_4_ = auVar61._0_4_ * fVar73;
  auVar76._4_4_ = auVar61._4_4_ * fVar56;
  auVar76._8_4_ = auVar61._8_4_ * fVar73;
  uVar12 = (undefined2)(CONCAT15(uVar43,CONCAT14(uVar41,fVar73)) >> 0x20);
  auVar76._12_4_ = auVar61._12_4_ * (float)CONCAT13(uVar47,CONCAT12(uVar45,uVar12));
  auVar77 = NEON_frsqrts(auVar61,auVar76,4);
  auVar62._0_4_ = auVar61._0_4_ * auVar77._0_4_;
  auVar62._4_4_ = auVar61._4_4_ * auVar77._4_4_;
  auVar62._8_4_ = auVar61._8_4_ * auVar77._8_4_;
  auVar62._12_4_ = auVar61._12_4_ * auVar77._12_4_;
  auVar78._0_4_ = fVar73 * auVar62._0_4_;
  auVar78._4_4_ = fVar56 * auVar62._4_4_;
  auVar78._8_4_ = fVar73 * auVar62._8_4_;
  auVar78._12_4_ = (float)CONCAT13(uVar47,CONCAT12(uVar45,uVar12)) * auVar62._12_4_;
  iVar2 = -(uint)(fVar73 == 0.0);
  iVar13 = -(uint)(fVar56 == 0.0);
  iVar14 = -(uint)(fVar73 == 0.0);
  iVar15 = -(uint)((float)CONCAT13(uVar47,CONCAT12(uVar45,uVar12)) == 0.0);
  auVar61 = NEON_frsqrts(auVar62,auVar78,4);
  fVar79 = fVar79 * auVar62._0_4_ * auVar61._0_4_;
  fVar57 = fVar57 * auVar62._4_4_ * auVar61._4_4_;
  fVar66 = fVar66 * auVar62._8_4_ * auVar61._8_4_;
  fVar67 = fVar67 * auVar62._12_4_ * auVar61._12_4_;
  local_40 = SUB41(fVar79,0) & ~(byte)iVar2;
  bStack_3f = (byte)((uint)fVar79 >> 8) & ~(byte)((uint)iVar2 >> 8);
  bStack_3e = (byte)((uint)fVar79 >> 0x10) & ~(byte)((uint)iVar2 >> 0x10);
  bStack_3d = (byte)((uint)fVar79 >> 0x18) & ~(byte)((uint)iVar2 >> 0x18);
  bStack_3c = SUB41(fVar57,0) & ~(byte)iVar13;
  bStack_3b = (byte)((uint)fVar57 >> 8) & ~(byte)((uint)iVar13 >> 8);
  bStack_3a = (byte)((uint)fVar57 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10);
  bStack_39 = (byte)((uint)fVar57 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18);
  bStack_38 = SUB41(fVar66,0) & ~(byte)iVar14;
  bStack_37 = (byte)((uint)fVar66 >> 8) & ~(byte)((uint)iVar14 >> 8);
  bStack_36 = (byte)((uint)fVar66 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10);
  bStack_35 = (byte)((uint)fVar66 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18);
  bStack_34 = SUB41(fVar67,0) & ~(byte)iVar15;
  bStack_33 = (byte)((uint)fVar67 >> 8) & ~(byte)((uint)iVar15 >> 8);
  bStack_32 = (byte)((uint)fVar67 >> 0x10) & ~(byte)((uint)iVar15 >> 0x10);
  bStack_31 = (byte)((uint)fVar67 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18);
LAB_01a8d1a0:
  auVar36[1] = bStack_3f;
  auVar36[0] = local_40;
  auVar36[2] = bStack_3e;
  auVar36[3] = bStack_3d;
  auVar36[4] = bStack_3c;
  auVar36[5] = bStack_3b;
  auVar36[6] = bStack_3a;
  auVar36[7] = bStack_39;
  auVar36[8] = bStack_38;
  auVar36[9] = bStack_37;
  auVar36[10] = bStack_36;
  auVar36[0xb] = bStack_35;
  auVar36[0xc] = bStack_34;
  auVar36[0xd] = bStack_33;
  auVar36[0xe] = bStack_32;
  auVar36[0xf] = bStack_31;
  return auVar36;
}


