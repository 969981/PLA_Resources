/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a1ca9c; name: FUN_01a1ca9c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a1ca9c(long param_1)

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [12];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
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
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined *puVar32;
  int iVar33;
  long lVar34;
  long *plVar35;
  long *plVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  float fVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined4 uVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  float fVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  undefined8 uVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  
  if (((*(int *)(param_1 + 0xece8) == 0) || (*(int *)(param_1 + 0xece8) - 6U < 4)) &&
     (*(char *)(param_1 + 0xedc1) == '\0')) {
    *(undefined1 *)(param_1 + 0xedc1) = 1;
    lVar34 = FUN_01a4b9b4(param_1);
    if (lVar34 != 0) {
      fVar37 = (float)*(undefined8 *)(lVar34 + 0x340);
      fVar87 = (float)*(undefined8 *)(lVar34 + 0x330) + fVar37;
      fVar38 = (float)((ulong)*(undefined8 *)(lVar34 + 0x340) >> 0x20);
      fVar88 = (float)((ulong)*(undefined8 *)(lVar34 + 0x330) >> 0x20) + fVar38;
      fVar39 = (float)*(undefined8 *)(lVar34 + 0x348);
      fVar89 = (float)*(undefined8 *)(lVar34 + 0x338) + fVar39;
      fVar40 = (float)((ulong)*(undefined8 *)(lVar34 + 0x348) >> 0x20);
      fVar90 = (float)((ulong)*(undefined8 *)(lVar34 + 0x338) >> 0x20) + fVar40;
      uVar49 = SUB41(fVar89,0);
      uVar50 = (undefined1)((uint)fVar89 >> 8);
      uVar51 = (undefined1)((uint)fVar89 >> 0x10);
      uVar52 = (undefined1)((uint)fVar89 >> 0x18);
      uVar53 = SUB41(fVar90,0);
      uVar54 = (undefined1)((uint)fVar90 >> 8);
      uVar55 = (undefined1)((uint)fVar90 >> 0x10);
      uVar56 = (undefined1)((uint)fVar90 >> 0x18);
      uVar41 = SUB41(fVar87,0);
      uVar42 = (undefined1)((uint)fVar87 >> 8);
      uVar43 = (undefined1)((uint)fVar87 >> 0x10);
      uVar44 = (undefined1)((uint)fVar87 >> 0x18);
      uVar45 = SUB41(fVar88,0);
      uVar46 = (undefined1)((uint)fVar88 >> 8);
      uVar47 = (undefined1)((uint)fVar88 >> 0x10);
      uVar48 = (undefined1)((uint)fVar88 >> 0x18);
      if ((*(byte *)(lVar34 + 0x380) >> 1 & 1) != 0) {
        pauVar1 = (undefined1 (*) [12])(lVar34 + 0x350);
        fVar57 = (float)((ulong)*(undefined8 *)(lVar34 + 0x358) >> 0x20);
        uVar60 = *(undefined8 *)*pauVar1;
        fVar70 = (float)((ulong)uVar60 >> 0x20);
        pauVar2 = (undefined1 (*) [12])(lVar34 + 0x360);
        uVar67 = (undefined4)((ulong)*(undefined8 *)(lVar34 + 0x368) >> 0x20);
        fVar75 = (float)*(undefined8 *)*pauVar2;
        fVar64 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
        auVar10._12_4_ = fVar57;
        auVar10._0_12_ = *pauVar1;
        uVar58 = a64_TBL(ZEXT816(0),auVar10,DAT_0388a580);
        auVar7._12_4_ = uVar67;
        auVar7._0_12_ = *pauVar2;
        uVar28 = a64_TBL(ZEXT816(0),auVar7,DAT_0388a680);
        fVar73 = (float)((ulong)uVar28 >> 0x20);
        auVar11._12_4_ = fVar57;
        auVar11._0_12_ = *pauVar1;
        uVar62 = a64_TBL(ZEXT816(0),auVar11,DAT_0388a6c8);
        auVar8._12_4_ = uVar67;
        auVar8._0_12_ = *pauVar2;
        uVar59 = a64_TBL(ZEXT816(0),auVar8,DAT_0388a580);
        auVar12._12_4_ = fVar57;
        auVar12._0_12_ = *pauVar1;
        uVar81 = a64_TBL(ZEXT816(0),auVar12,DAT_0388a680);
        fVar76 = (float)((ulong)uVar59 >> 0x20);
        auVar13._12_4_ = fVar57;
        auVar13._0_12_ = *pauVar1;
        uVar84 = a64_TBL(ZEXT816(0),auVar13,DAT_0388a880);
        auVar14._12_4_ = fVar57;
        auVar14._0_12_ = *pauVar1;
        uVar85 = a64_TBL(ZEXT816(0),auVar14,DAT_0388a790);
        auVar9._12_4_ = uVar67;
        auVar9._0_12_ = *pauVar2;
        uVar86 = a64_TBL(ZEXT816(0),auVar9,DAT_0388a880);
        fVar69 = (float)((ulong)uVar86 >> 0x20);
        auVar15._8_4_ = (float)uVar60;
        auVar15._0_8_ = uVar60;
        auVar15._12_4_ = fVar70;
        uVar61 = a64_TBL(ZEXT816(0),auVar15,DAT_0388a648);
        fVar66 = (float)_UNK_03889ad8;
        fVar68 = (float)((ulong)_UNK_03889ad8 >> 0x20);
        fVar63 = (float)_DAT_03889ad0;
        fVar65 = (float)((ulong)_DAT_03889ad0 >> 0x20);
        uVar53 = (undefined1)_UNK_03888d18;
        uVar54 = (undefined1)((ulong)_UNK_03888d18 >> 8);
        uVar55 = (undefined1)((ulong)_UNK_03888d18 >> 0x10);
        uVar56 = (undefined1)((ulong)_UNK_03888d18 >> 0x18);
        uVar77 = (undefined1)((ulong)_UNK_03888d18 >> 0x20);
        uVar78 = (undefined1)((ulong)_UNK_03888d18 >> 0x28);
        uVar79 = (undefined1)((ulong)_UNK_03888d18 >> 0x30);
        uVar80 = (undefined1)((ulong)_UNK_03888d18 >> 0x38);
        auVar29[8] = uVar53;
        auVar29._0_8_ = _DAT_03888d10;
        auVar29[9] = uVar54;
        auVar29[10] = uVar55;
        auVar29[0xb] = uVar56;
        auVar29[0xc] = uVar77;
        auVar29[0xd] = uVar78;
        auVar29[0xe] = uVar79;
        auVar29[0xf] = uVar80;
        uVar82 = a64_TBL(ZEXT816(0),auVar29,DAT_0388a680);
        fVar6 = ((float)uVar60 * (float)uVar59 + fVar63 * fVar75 * (float)uVar58 +
                fVar63 * (float)uVar86 * (float)uVar81) - (float)uVar28 * (float)uVar84;
        fVar70 = (fVar70 * fVar76 + fVar65 * fVar64 * (float)((ulong)uVar58 >> 0x20) +
                 fVar65 * fVar69 * (float)((ulong)uVar81 >> 0x20)) -
                 fVar73 * (float)((ulong)uVar84 >> 0x20);
        uVar41 = SUB41(fVar70,0);
        uVar42 = (undefined1)((uint)fVar70 >> 8);
        uVar43 = (undefined1)((uint)fVar70 >> 0x10);
        uVar44 = (undefined1)((uint)fVar70 >> 0x18);
        fVar75 = ((float)*(undefined8 *)(lVar34 + 0x358) * (float)uVar59 +
                  fVar66 * (float)uVar28 * (float)uVar62 + fVar66 * fVar75 * (float)uVar61) -
                 (float)uVar86 * (float)uVar85;
        uVar45 = SUB41(fVar75,0);
        uVar46 = (undefined1)((uint)fVar75 >> 8);
        uVar47 = (undefined1)((uint)fVar75 >> 0x10);
        uVar48 = (undefined1)((uint)fVar75 >> 0x18);
        fVar76 = (fVar57 * fVar76 + fVar68 * fVar73 * (float)((ulong)uVar62 >> 0x20) +
                 fVar68 * fVar64 * (float)((ulong)uVar61 >> 0x20)) -
                 fVar69 * (float)((ulong)uVar85 >> 0x20);
        uVar49 = SUB41(fVar76,0);
        uVar50 = (undefined1)((uint)fVar76 >> 8);
        uVar51 = (undefined1)((uint)fVar76 >> 0x10);
        uVar52 = (undefined1)((uint)fVar76 >> 0x18);
        fVar73 = fVar6 * (float)_DAT_03889ac0;
        fVar74 = fVar70 * (float)((ulong)_DAT_03889ac0 >> 0x20);
        fVar75 = fVar75 * (float)_UNK_03889ac8;
        fVar76 = fVar76 * (float)((ulong)_UNK_03889ac8 >> 0x20);
        auVar30[8] = uVar53;
        auVar30._0_8_ = _DAT_03888d10;
        auVar30[9] = uVar54;
        auVar30[10] = uVar55;
        auVar30[0xb] = uVar56;
        auVar30[0xc] = uVar77;
        auVar30[0xd] = uVar78;
        auVar30[0xe] = uVar79;
        auVar30[0xf] = uVar80;
        uVar59 = a64_TBL(ZEXT816(0),auVar30,DAT_0388a580);
        fVar57 = (float)((ulong)uVar59 >> 0x20);
        auVar31[8] = uVar53;
        auVar31._0_8_ = _DAT_03888d10;
        auVar31[9] = uVar54;
        auVar31[10] = uVar55;
        auVar31[0xb] = uVar56;
        auVar31[0xc] = uVar77;
        auVar31[0xd] = uVar78;
        auVar31[0xe] = uVar79;
        auVar31[0xf] = uVar80;
        uVar61 = a64_TBL(ZEXT816(0),auVar31,DAT_0388a880);
        auVar22._4_4_ = fVar74;
        auVar22._0_4_ = fVar73;
        auVar22._8_4_ = fVar75;
        auVar22._12_4_ = fVar76;
        uVar58 = a64_TBL(ZEXT816(0),auVar22,DAT_0388a580);
        auVar23._4_4_ = fVar74;
        auVar23._0_4_ = fVar73;
        auVar23._8_4_ = fVar75;
        auVar23._12_4_ = fVar76;
        uVar81 = a64_TBL(ZEXT816(0),auVar23,DAT_0388a6c8);
        fVar72 = (float)((ulong)uVar82 >> 0x20);
        auVar24._4_4_ = fVar74;
        auVar24._0_4_ = fVar73;
        auVar24._8_4_ = fVar75;
        auVar24._12_4_ = fVar76;
        uVar85 = a64_TBL(ZEXT816(0),auVar24,DAT_0388a790);
        auVar25._4_4_ = fVar74;
        auVar25._0_4_ = fVar73;
        auVar25._8_4_ = fVar75;
        auVar25._12_4_ = fVar76;
        uVar84 = a64_TBL(ZEXT816(0),auVar25,DAT_0388a880);
        auVar26._4_4_ = fVar74;
        auVar26._0_4_ = fVar73;
        auVar26._8_4_ = fVar75;
        auVar26._12_4_ = fVar76;
        uVar62 = a64_TBL(ZEXT816(0),auVar26,DAT_0388a680);
        fVar64 = (float)((ulong)uVar61 >> 0x20);
        auVar3[4] = uVar41;
        auVar3._0_4_ = fVar6;
        auVar3[5] = uVar42;
        auVar3[6] = uVar43;
        auVar3[7] = uVar44;
        auVar3[8] = uVar45;
        auVar3[9] = uVar46;
        auVar3[10] = uVar47;
        auVar3[0xb] = uVar48;
        auVar3[0xc] = uVar49;
        auVar3[0xd] = uVar50;
        auVar3[0xe] = uVar51;
        auVar3[0xf] = uVar52;
        uVar28 = a64_TBL(ZEXT816(0),auVar3,DAT_0388a580);
        auVar27._4_4_ = fVar74;
        auVar27._0_4_ = fVar73;
        auVar27._8_4_ = fVar73;
        auVar27._12_4_ = fVar74;
        uVar60 = a64_TBL(ZEXT816(0),auVar27,DAT_0388a648);
        fVar69 = (fVar73 * (float)uVar59 + fVar63 * (float)uVar58 * 0.0 +
                 fVar63 * (float)uVar61 * (float)uVar62) - (float)uVar82 * (float)uVar84;
        fVar74 = (fVar74 * fVar57 + fVar65 * (float)((ulong)uVar58 >> 0x20) * 0.0 +
                 fVar65 * fVar64 * (float)((ulong)uVar62 >> 0x20)) -
                 fVar72 * (float)((ulong)uVar84 >> 0x20);
        fVar71 = (fVar75 * (float)uVar59 + fVar66 * (float)uVar82 * (float)uVar81 +
                 fVar66 * (float)uVar60 * 0.0) - (float)uVar61 * (float)uVar85;
        fVar72 = (fVar76 * fVar57 + fVar68 * fVar72 * (float)((ulong)uVar81 >> 0x20) +
                 fVar68 * (float)((ulong)uVar60 >> 0x20) * 0.0) -
                 fVar64 * (float)((ulong)uVar85 >> 0x20);
        auVar4[4] = uVar41;
        auVar4._0_4_ = fVar6;
        auVar4[5] = uVar42;
        auVar4[6] = uVar43;
        auVar4[7] = uVar44;
        auVar4[8] = uVar45;
        auVar4[9] = uVar46;
        auVar4[10] = uVar47;
        auVar4[0xb] = uVar48;
        auVar4[0xc] = uVar49;
        auVar4[0xd] = uVar50;
        auVar4[0xe] = uVar51;
        auVar4[0xf] = uVar52;
        uVar84 = a64_TBL(ZEXT816(0),auVar4,DAT_0388a680);
        auVar16._4_4_ = fVar74;
        auVar16._0_4_ = fVar69;
        auVar16._8_4_ = fVar71;
        auVar16._12_4_ = fVar72;
        uVar61 = a64_TBL(ZEXT816(0),auVar16,DAT_0388a580);
        auVar17._4_4_ = fVar74;
        auVar17._0_4_ = fVar69;
        auVar17._8_4_ = fVar71;
        auVar17._12_4_ = fVar72;
        uVar81 = a64_TBL(ZEXT816(0),auVar17,DAT_0388a6c8);
        fVar83 = (float)((ulong)uVar84 >> 0x20);
        fVar64 = (float)((ulong)uVar28 >> 0x20);
        auVar18._4_4_ = fVar74;
        auVar18._0_4_ = fVar69;
        auVar18._8_4_ = fVar71;
        auVar18._12_4_ = fVar72;
        uVar60 = a64_TBL(ZEXT816(0),auVar18,DAT_0388a680);
        auVar19._4_4_ = fVar74;
        auVar19._0_4_ = fVar69;
        auVar19._8_4_ = fVar71;
        auVar19._12_4_ = fVar72;
        uVar82 = a64_TBL(ZEXT816(0),auVar19,DAT_0388a790);
        auVar20._4_4_ = fVar74;
        auVar20._0_4_ = fVar69;
        auVar20._8_4_ = fVar71;
        auVar20._12_4_ = fVar72;
        uVar58 = a64_TBL(ZEXT816(0),auVar20,DAT_0388a880);
        auVar5[4] = uVar41;
        auVar5._0_4_ = fVar6;
        auVar5[5] = uVar42;
        auVar5[6] = uVar43;
        auVar5[7] = uVar44;
        auVar5[8] = uVar45;
        auVar5[9] = uVar46;
        auVar5[10] = uVar47;
        auVar5[0xb] = uVar48;
        auVar5[0xc] = uVar49;
        auVar5[0xd] = uVar50;
        auVar5[0xe] = uVar51;
        auVar5[0xf] = uVar52;
        uVar59 = a64_TBL(ZEXT816(0),auVar5,DAT_0388a880);
        fVar73 = (float)((ulong)uVar59 >> 0x20);
        fVar57 = -*(float *)(lVar34 + 0x388);
        auVar21._4_4_ = fVar74;
        auVar21._0_4_ = fVar69;
        auVar21._8_4_ = fVar69;
        auVar21._12_4_ = fVar74;
        uVar62 = a64_TBL(ZEXT816(0),auVar21,DAT_0388a648);
        fVar76 = fVar6 * (float)uVar62;
        fVar75 = fVar70 * (float)((ulong)uVar62 >> 0x20);
        fVar6 = ((float)uVar28 * fVar69 + fVar63 * fVar6 * (float)uVar61 +
                fVar63 * (float)uVar59 * (float)uVar60) - (float)uVar84 * (float)uVar58;
        fVar70 = (fVar64 * fVar74 + fVar65 * fVar70 * (float)((ulong)uVar61 >> 0x20) +
                 fVar65 * fVar73 * (float)((ulong)uVar60 >> 0x20)) -
                 fVar83 * (float)((ulong)uVar58 >> 0x20);
        fVar63 = ((float)uVar28 * fVar71 + fVar66 * (float)uVar84 * (float)uVar81 + fVar66 * fVar76)
                 - (float)uVar59 * (float)uVar82;
        fVar76 = (fVar64 * fVar72 + fVar68 * fVar83 * (float)((ulong)uVar81 >> 0x20) +
                 fVar68 * (float)(CONCAT17((char)((uint)fVar75 >> 0x18),
                                           CONCAT16((char)((uint)fVar75 >> 0x10),
                                                    CONCAT15((char)((uint)fVar75 >> 8),
                                                             CONCAT14(SUB41(fVar75,0),fVar76)))) >>
                                 0x20)) - fVar73 * (float)((ulong)uVar82 >> 0x20);
        fVar37 = fVar37 + (float)*(undefined8 *)(lVar34 + 800) +
                          (float)CONCAT13((byte)((uint)fVar6 >> 0x18) &
                                          (byte)((ulong)_DAT_038897c0 >> 0x18),
                                          CONCAT12((byte)((uint)fVar6 >> 0x10) &
                                                   (byte)((ulong)_DAT_038897c0 >> 0x10),
                                                   CONCAT11((byte)((uint)fVar6 >> 8) &
                                                            (byte)((ulong)_DAT_038897c0 >> 8),
                                                            SUB41(fVar6,0) & (byte)_DAT_038897c0)))
                          * fVar57;
        uVar41 = SUB41(fVar37,0);
        uVar42 = (undefined1)((uint)fVar37 >> 8);
        uVar43 = (undefined1)((uint)fVar37 >> 0x10);
        uVar44 = (undefined1)((uint)fVar37 >> 0x18);
        fVar38 = fVar38 + (float)((ulong)*(undefined8 *)(lVar34 + 800) >> 0x20) +
                          (float)CONCAT13((byte)((uint)fVar70 >> 0x18) &
                                          (byte)((ulong)_DAT_038897c0 >> 0x38),
                                          CONCAT12((byte)((uint)fVar70 >> 0x10) &
                                                   (byte)((ulong)_DAT_038897c0 >> 0x30),
                                                   CONCAT11((byte)((uint)fVar70 >> 8) &
                                                            (byte)((ulong)_DAT_038897c0 >> 0x28),
                                                            SUB41(fVar70,0) &
                                                            (byte)((ulong)_DAT_038897c0 >> 0x20))))
                          * fVar57;
        uVar45 = SUB41(fVar38,0);
        uVar46 = (undefined1)((uint)fVar38 >> 8);
        uVar47 = (undefined1)((uint)fVar38 >> 0x10);
        uVar48 = (undefined1)((uint)fVar38 >> 0x18);
        fVar39 = fVar39 + (float)*(undefined8 *)(lVar34 + 0x328) +
                          (float)CONCAT13((byte)((uint)fVar63 >> 0x18) &
                                          (byte)((ulong)_UNK_038897c8 >> 0x18),
                                          CONCAT12((byte)((uint)fVar63 >> 0x10) &
                                                   (byte)((ulong)_UNK_038897c8 >> 0x10),
                                                   CONCAT11((byte)((uint)fVar63 >> 8) &
                                                            (byte)((ulong)_UNK_038897c8 >> 8),
                                                            SUB41(fVar63,0) & (byte)_UNK_038897c8)))
                          * fVar57;
        uVar49 = SUB41(fVar39,0);
        uVar50 = (undefined1)((uint)fVar39 >> 8);
        uVar51 = (undefined1)((uint)fVar39 >> 0x10);
        uVar52 = (undefined1)((uint)fVar39 >> 0x18);
        fVar40 = fVar40 + (float)((ulong)*(undefined8 *)(lVar34 + 0x328) >> 0x20) +
                          (float)CONCAT13((byte)((uint)fVar76 >> 0x18) &
                                          (byte)((ulong)_UNK_038897c8 >> 0x38),
                                          CONCAT12((byte)((uint)fVar76 >> 0x10) &
                                                   (byte)((ulong)_UNK_038897c8 >> 0x30),
                                                   CONCAT11((byte)((uint)fVar76 >> 8) &
                                                            (byte)((ulong)_UNK_038897c8 >> 0x28),
                                                            SUB41(fVar76,0) &
                                                            (byte)((ulong)_UNK_038897c8 >> 0x20))))
                          * fVar57;
        uVar53 = SUB41(fVar40,0);
        uVar54 = (undefined1)((uint)fVar40 >> 8);
        uVar55 = (undefined1)((uint)fVar40 >> 0x10);
        uVar56 = (undefined1)((uint)fVar40 >> 0x18);
      }
      if (((*PTR_DAT_04379578 & 1) == 0) &&
         (iVar33 = __cxa_guard_acquire(PTR_DAT_04379578), iVar33 != 0)) {
        FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379578);
      }
      plVar36 = (long *)PTR_DAT_04379588;
      plVar35 = (long *)PTR_DAT_04379580;
      puVar32 = PTR_DAT_04379578;
      lVar34 = *(long *)PTR_DAT_04379580;
      *(long *)PTR_DAT_04379588 = lVar34;
      lVar34 = *(long *)(lVar34 + 200);
      uVar60 = *(undefined8 *)(lVar34 + 0x538);
      uVar59 = *(undefined8 *)(lVar34 + 0x530);
      *(ulong *)(param_1 + 0xee68) =
           CONCAT44(fVar90 - (float)((ulong)uVar60 >> 0x20),fVar89 - (float)uVar60);
      *(ulong *)(param_1 + 0xee60) =
           CONCAT44(fVar88 - (float)((ulong)uVar59 >> 0x20),fVar87 - (float)uVar59);
      if (((*puVar32 & 1) == 0) &&
         (iVar33 = __cxa_guard_acquire(PTR_DAT_04379578), plVar35 = (long *)PTR_DAT_04379580,
         plVar36 = (long *)PTR_DAT_04379588, iVar33 != 0)) {
        FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379578);
        plVar35 = (long *)PTR_DAT_04379580;
        plVar36 = (long *)PTR_DAT_04379588;
      }
      lVar34 = *plVar35;
      *plVar36 = lVar34;
      lVar34 = *(long *)(lVar34 + 200);
      uVar60 = *(undefined8 *)(lVar34 + 0x538);
      uVar59 = *(undefined8 *)(lVar34 + 0x530);
      *(ulong *)(param_1 + 0xee78) =
           CONCAT44((float)CONCAT13(uVar56,CONCAT12(uVar55,CONCAT11(uVar54,uVar53))) -
                    (float)((ulong)uVar60 >> 0x20),
                    (float)CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar49))) - (float)uVar60
                   );
      *(ulong *)(param_1 + 0xee70) =
           CONCAT44((float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45))) -
                    (float)((ulong)uVar59 >> 0x20),
                    (float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41))) - (float)uVar59
                   );
    }
    *(undefined8 *)(param_1 + 0xee80) = *(undefined8 *)(param_1 + 0xee60);
    *(undefined8 *)(param_1 + 0xee88) = *(undefined8 *)(param_1 + 0xee68);
    *(undefined8 *)(param_1 + 0xee90) = *(undefined8 *)(param_1 + 0xee70);
    *(undefined8 *)(param_1 + 0xee98) = *(undefined8 *)(param_1 + 0xee78);
  }
  return;
}


