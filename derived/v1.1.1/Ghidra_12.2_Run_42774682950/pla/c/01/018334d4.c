/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018334d4; name: FUN_018334d4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_018334d4(long *param_1)

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [12];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
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
  float fVar28;
  undefined8 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  long lVar33;
  uint uVar34;
  float fVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  float fVar40;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 uVar46;
  float fVar47;
  undefined4 uVar48;
  undefined8 uVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 uVar58;
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
  float fVar70;
  float fVar71;
  undefined4 uVar72;
  undefined8 uVar73;
  float fVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  
  lVar33 = *param_1;
  uVar34 = (uint)*(ulong *)(lVar33 + 0x380);
  if ((((uVar34 >> 4 & 1) == 0) && ((*(ulong *)(lVar33 + 0x380) & 1) != 0)) &&
     ((uVar34 >> 1 & 1) != 0)) {
    pauVar1 = (undefined1 (*) [12])(lVar33 + 0x350);
    fVar47 = (float)((ulong)*(undefined8 *)(lVar33 + 0x358) >> 0x20);
    uVar36 = *(undefined8 *)*pauVar1;
    fVar42 = (float)((ulong)uVar36 >> 0x20);
    pauVar2 = (undefined1 (*) [12])(lVar33 + 0x360);
    uVar48 = (undefined4)((ulong)*(undefined8 *)(lVar33 + 0x368) >> 0x20);
    fVar55 = (float)*(undefined8 *)*pauVar2;
    fVar40 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
    auVar10._12_4_ = fVar47;
    auVar10._0_12_ = *pauVar1;
    uVar46 = a64_TBL(ZEXT816(0),auVar10,DAT_0388a580);
    auVar7._12_4_ = uVar48;
    auVar7._0_12_ = *pauVar2;
    uVar29 = a64_TBL(ZEXT816(0),auVar7,DAT_0388a680);
    auVar11._12_4_ = fVar47;
    auVar11._0_12_ = *pauVar1;
    uVar49 = a64_TBL(ZEXT816(0),auVar11,DAT_0388a6c8);
    fVar28 = (float)((ulong)uVar29 >> 0x20);
    auVar8._12_4_ = uVar48;
    auVar8._0_12_ = *pauVar2;
    uVar6 = a64_TBL(ZEXT816(0),auVar8,DAT_0388a580);
    fVar35 = (float)((ulong)uVar6 >> 0x20);
    auVar12._12_4_ = fVar47;
    auVar12._0_12_ = *pauVar1;
    uVar73 = a64_TBL(ZEXT816(0),auVar12,DAT_0388a680);
    auVar13._12_4_ = fVar47;
    auVar13._0_12_ = *pauVar1;
    uVar75 = a64_TBL(ZEXT816(0),auVar13,DAT_0388a880);
    auVar14._12_4_ = fVar47;
    auVar14._0_12_ = *pauVar1;
    uVar76 = a64_TBL(ZEXT816(0),auVar14,DAT_0388a790);
    auVar9._12_4_ = uVar48;
    auVar9._0_12_ = *pauVar2;
    uVar77 = a64_TBL(ZEXT816(0),auVar9,DAT_0388a880);
    fVar45 = (float)((ulong)uVar77 >> 0x20);
    auVar15._8_4_ = (float)uVar36;
    auVar15._0_8_ = uVar36;
    auVar15._12_4_ = fVar42;
    uVar37 = a64_TBL(ZEXT816(0),auVar15,DAT_0388a648);
    fVar52 = (float)_UNK_03889ad8;
    fVar53 = (float)((ulong)_UNK_03889ad8 >> 0x20);
    fVar50 = (float)_DAT_03889ad0;
    fVar51 = (float)((ulong)_DAT_03889ad0 >> 0x20);
    fVar41 = ((float)uVar36 * (float)uVar6 + fVar50 * fVar55 * (float)uVar46 +
             fVar50 * (float)uVar77 * (float)uVar73) - (float)uVar29 * (float)uVar75;
    fVar43 = (fVar42 * fVar35 + fVar51 * fVar40 * (float)((ulong)uVar46 >> 0x20) +
             fVar51 * fVar45 * (float)((ulong)uVar73 >> 0x20)) -
             fVar28 * (float)((ulong)uVar75 >> 0x20);
    fVar44 = ((float)*(undefined8 *)(lVar33 + 0x358) * (float)uVar6 +
              fVar52 * (float)uVar29 * (float)uVar49 + fVar52 * fVar55 * (float)uVar37) -
             (float)uVar77 * (float)uVar76;
    fVar45 = (fVar47 * fVar35 + fVar53 * fVar28 * (float)((ulong)uVar49 >> 0x20) +
             fVar53 * fVar40 * (float)((ulong)uVar37 >> 0x20)) -
             fVar45 * (float)((ulong)uVar76 >> 0x20);
    uVar48 = (undefined4)_UNK_03888d18;
    uVar72 = (undefined4)((ulong)_UNK_03888d18 >> 0x20);
    fVar28 = fVar41 * (float)_DAT_03889ac0;
    fVar55 = fVar43 * (float)((ulong)_DAT_03889ac0 >> 0x20);
    uVar58 = SUB41(fVar55,0);
    uVar59 = (undefined1)((uint)fVar55 >> 8);
    uVar60 = (undefined1)((uint)fVar55 >> 0x10);
    uVar61 = (undefined1)((uint)fVar55 >> 0x18);
    fVar42 = fVar44 * (float)_UNK_03889ac8;
    uVar62 = SUB41(fVar42,0);
    uVar63 = (undefined1)((uint)fVar42 >> 8);
    uVar64 = (undefined1)((uint)fVar42 >> 0x10);
    uVar65 = (undefined1)((uint)fVar42 >> 0x18);
    fVar47 = fVar45 * (float)((ulong)_UNK_03889ac8 >> 0x20);
    uVar66 = SUB41(fVar47,0);
    uVar67 = (undefined1)((uint)fVar47 >> 8);
    uVar68 = (undefined1)((uint)fVar47 >> 0x10);
    uVar69 = (undefined1)((uint)fVar47 >> 0x18);
    auVar30._8_4_ = uVar48;
    auVar30._0_8_ = _DAT_03888d10;
    auVar30._12_4_ = uVar72;
    uVar6 = a64_TBL(ZEXT816(0),auVar30,DAT_0388a580);
    fVar57 = (float)((ulong)uVar6 >> 0x20);
    auVar31._8_4_ = uVar48;
    auVar31._0_8_ = _DAT_03888d10;
    auVar31._12_4_ = uVar72;
    uVar46 = a64_TBL(ZEXT816(0),auVar31,DAT_0388a680);
    auVar22[4] = uVar58;
    auVar22._0_4_ = fVar28;
    auVar22[5] = uVar59;
    auVar22[6] = uVar60;
    auVar22[7] = uVar61;
    auVar22[8] = uVar62;
    auVar22[9] = uVar63;
    auVar22[10] = uVar64;
    auVar22[0xb] = uVar65;
    auVar22[0xc] = uVar66;
    auVar22[0xd] = uVar67;
    auVar22[0xe] = uVar68;
    auVar22[0xf] = uVar69;
    uVar49 = a64_TBL(ZEXT816(0),auVar22,DAT_0388a580);
    auVar23[4] = uVar58;
    auVar23._0_4_ = fVar28;
    auVar23[5] = uVar59;
    auVar23[6] = uVar60;
    auVar23[7] = uVar61;
    auVar23[8] = uVar62;
    auVar23[9] = uVar63;
    auVar23[10] = uVar64;
    auVar23[0xb] = uVar65;
    auVar23[0xc] = uVar66;
    auVar23[0xd] = uVar67;
    auVar23[0xe] = uVar68;
    auVar23[0xf] = uVar69;
    uVar73 = a64_TBL(ZEXT816(0),auVar23,DAT_0388a6c8);
    fVar74 = (float)((ulong)uVar46 >> 0x20);
    auVar24[4] = uVar58;
    auVar24._0_4_ = fVar28;
    auVar24[5] = uVar59;
    auVar24[6] = uVar60;
    auVar24[7] = uVar61;
    auVar24[8] = uVar62;
    auVar24[9] = uVar63;
    auVar24[10] = uVar64;
    auVar24[0xb] = uVar65;
    auVar24[0xc] = uVar66;
    auVar24[0xd] = uVar67;
    auVar24[0xe] = uVar68;
    auVar24[0xf] = uVar69;
    uVar75 = a64_TBL(ZEXT816(0),auVar24,DAT_0388a680);
    auVar25[4] = uVar58;
    auVar25._0_4_ = fVar28;
    auVar25[5] = uVar59;
    auVar25[6] = uVar60;
    auVar25[7] = uVar61;
    auVar25[8] = uVar62;
    auVar25[9] = uVar63;
    auVar25[10] = uVar64;
    auVar25[0xb] = uVar65;
    auVar25[0xc] = uVar66;
    auVar25[0xd] = uVar67;
    auVar25[0xe] = uVar68;
    auVar25[0xf] = uVar69;
    uVar76 = a64_TBL(ZEXT816(0),auVar25,DAT_0388a880);
    auVar26[4] = uVar58;
    auVar26._0_4_ = fVar28;
    auVar26[5] = uVar59;
    auVar26[6] = uVar60;
    auVar26[7] = uVar61;
    auVar26[8] = uVar62;
    auVar26[9] = uVar63;
    auVar26[10] = uVar64;
    auVar26[0xb] = uVar65;
    auVar26[0xc] = uVar66;
    auVar26[0xd] = uVar67;
    auVar26[0xe] = uVar68;
    auVar26[0xf] = uVar69;
    uVar77 = a64_TBL(ZEXT816(0),auVar26,DAT_0388a790);
    auVar32._8_4_ = uVar48;
    auVar32._0_8_ = _DAT_03888d10;
    auVar32._12_4_ = uVar72;
    uVar37 = a64_TBL(ZEXT816(0),auVar32,DAT_0388a880);
    fVar70 = (float)((ulong)uVar37 >> 0x20);
    auVar3._4_4_ = fVar43;
    auVar3._0_4_ = fVar41;
    auVar3._8_4_ = fVar44;
    auVar3._12_4_ = fVar45;
    uVar29 = a64_TBL(ZEXT816(0),auVar3,DAT_0388a680);
    fVar71 = (float)((ulong)uVar29 >> 0x20);
    auVar27[4] = uVar58;
    auVar27._0_4_ = fVar28;
    auVar27[5] = uVar59;
    auVar27[6] = uVar60;
    auVar27[7] = uVar61;
    auVar27[8] = SUB41(fVar28,0);
    auVar27[9] = (char)((uint)fVar28 >> 8);
    auVar27[10] = (char)((uint)fVar28 >> 0x10);
    auVar27[0xb] = (char)((uint)fVar28 >> 0x18);
    auVar27[0xc] = uVar58;
    auVar27[0xd] = uVar59;
    auVar27[0xe] = uVar60;
    auVar27[0xf] = uVar61;
    uVar36 = a64_TBL(ZEXT816(0),auVar27,DAT_0388a648);
    fVar35 = (float)uVar36 * 0.0;
    fVar40 = (float)((ulong)uVar36 >> 0x20) * 0.0;
    fVar54 = (fVar28 * (float)uVar6 + fVar50 * (float)uVar49 * 0.0 +
             fVar50 * (float)uVar37 * (float)uVar75) - (float)uVar46 * (float)uVar76;
    fVar55 = (fVar55 * fVar57 + fVar51 * (float)((ulong)uVar49 >> 0x20) * 0.0 +
             fVar51 * fVar70 * (float)((ulong)uVar75 >> 0x20)) -
             fVar74 * (float)((ulong)uVar76 >> 0x20);
    fVar56 = (fVar42 * (float)uVar6 + fVar52 * (float)uVar46 * (float)uVar73 + fVar52 * fVar35) -
             (float)uVar37 * (float)uVar77;
    fVar57 = (fVar47 * fVar57 + fVar53 * fVar74 * (float)((ulong)uVar73 >> 0x20) +
             fVar53 * (float)(CONCAT17((char)((uint)fVar40 >> 0x18),
                                       CONCAT16((char)((uint)fVar40 >> 0x10),
                                                CONCAT15((char)((uint)fVar40 >> 8),
                                                         CONCAT14(SUB41(fVar40,0),fVar35)))) >> 0x20
                             )) - fVar70 * (float)((ulong)uVar77 >> 0x20);
    auVar4._4_4_ = fVar43;
    auVar4._0_4_ = fVar41;
    auVar4._8_4_ = fVar44;
    auVar4._12_4_ = fVar45;
    uVar6 = a64_TBL(ZEXT816(0),auVar4,DAT_0388a580);
    auVar16._4_4_ = fVar55;
    auVar16._0_4_ = fVar54;
    auVar16._8_4_ = fVar56;
    auVar16._12_4_ = fVar57;
    uVar36 = a64_TBL(ZEXT816(0),auVar16,DAT_0388a580);
    auVar17._4_4_ = fVar55;
    auVar17._0_4_ = fVar54;
    auVar17._8_4_ = fVar56;
    auVar17._12_4_ = fVar57;
    uVar76 = a64_TBL(ZEXT816(0),auVar17,DAT_0388a6c8);
    fVar28 = (float)((ulong)uVar6 >> 0x20);
    auVar18._4_4_ = fVar55;
    auVar18._0_4_ = fVar54;
    auVar18._8_4_ = fVar56;
    auVar18._12_4_ = fVar57;
    uVar37 = a64_TBL(ZEXT816(0),auVar18,DAT_0388a680);
    auVar19._4_4_ = fVar55;
    auVar19._0_4_ = fVar54;
    auVar19._8_4_ = fVar56;
    auVar19._12_4_ = fVar57;
    uVar75 = a64_TBL(ZEXT816(0),auVar19,DAT_0388a880);
    auVar20._4_4_ = fVar55;
    auVar20._0_4_ = fVar54;
    auVar20._8_4_ = fVar56;
    auVar20._12_4_ = fVar57;
    uVar73 = a64_TBL(ZEXT816(0),auVar20,DAT_0388a790);
    auVar5._4_4_ = fVar43;
    auVar5._0_4_ = fVar41;
    auVar5._8_4_ = fVar44;
    auVar5._12_4_ = fVar45;
    uVar46 = a64_TBL(ZEXT816(0),auVar5,DAT_0388a880);
    fVar47 = (float)((ulong)uVar46 >> 0x20);
    auVar21._4_4_ = fVar55;
    auVar21._0_4_ = fVar54;
    auVar21._8_4_ = fVar54;
    auVar21._12_4_ = fVar55;
    uVar49 = a64_TBL(ZEXT816(0),auVar21,DAT_0388a648);
    fVar42 = *(float *)(lVar33 + 0x388);
    fVar35 = ((float)uVar6 * fVar54 + fVar50 * fVar41 * (float)uVar36 +
             fVar50 * (float)uVar46 * (float)uVar37) - (float)uVar29 * (float)uVar75;
    fVar55 = (fVar28 * fVar55 + fVar51 * fVar43 * (float)((ulong)uVar36 >> 0x20) +
             fVar51 * fVar47 * (float)((ulong)uVar37 >> 0x20)) -
             fVar71 * (float)((ulong)uVar75 >> 0x20);
    fVar40 = ((float)uVar6 * fVar56 + fVar52 * (float)uVar29 * (float)uVar76 +
             fVar52 * fVar41 * (float)uVar49) - (float)uVar46 * (float)uVar73;
    fVar28 = (fVar28 * fVar57 + fVar53 * fVar71 * (float)((ulong)uVar76 >> 0x20) +
             fVar53 * fVar43 * (float)((ulong)uVar49 >> 0x20)) -
             fVar47 * (float)((ulong)uVar73 >> 0x20);
    fVar35 = (float)CONCAT13((byte)((uint)fVar35 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x18),
                             CONCAT12((byte)((uint)fVar35 >> 0x10) &
                                      (byte)((ulong)_DAT_038897c0 >> 0x10),
                                      CONCAT11((byte)((uint)fVar35 >> 8) &
                                               (byte)((ulong)_DAT_038897c0 >> 8),
                                               SUB41(fVar35,0) & (byte)_DAT_038897c0)));
    fVar40 = (float)CONCAT13((byte)((uint)fVar40 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x18),
                             CONCAT12((byte)((uint)fVar40 >> 0x10) &
                                      (byte)((ulong)_UNK_038897c8 >> 0x10),
                                      CONCAT11((byte)((uint)fVar40 >> 8) &
                                               (byte)((ulong)_UNK_038897c8 >> 8),
                                               SUB41(fVar40,0) & (byte)_UNK_038897c8)));
    auVar38._0_4_ =
         (float)*(undefined8 *)(lVar33 + 800) + (float)*(undefined8 *)(lVar33 + 0x340) +
         fVar35 * fVar42;
    auVar38._4_4_ =
         (float)((ulong)*(undefined8 *)(lVar33 + 800) >> 0x20) +
         (float)((ulong)*(undefined8 *)(lVar33 + 0x340) >> 0x20) +
         (float)(CONCAT17((byte)((uint)fVar55 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x38),
                          CONCAT16((byte)((uint)fVar55 >> 0x10) &
                                   (byte)((ulong)_DAT_038897c0 >> 0x30),
                                   CONCAT15((byte)((uint)fVar55 >> 8) &
                                            (byte)((ulong)_DAT_038897c0 >> 0x28),
                                            CONCAT14(SUB41(fVar55,0) &
                                                     (byte)((ulong)_DAT_038897c0 >> 0x20),fVar35))))
                >> 0x20) * fVar42;
    auVar38._8_4_ =
         (float)*(undefined8 *)(lVar33 + 0x328) + (float)*(undefined8 *)(lVar33 + 0x348) +
         fVar40 * fVar42;
    auVar38._12_4_ =
         (float)((ulong)*(undefined8 *)(lVar33 + 0x328) >> 0x20) +
         (float)((ulong)*(undefined8 *)(lVar33 + 0x348) >> 0x20) +
         (float)(CONCAT17((byte)((uint)fVar28 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x38),
                          CONCAT16((byte)((uint)fVar28 >> 0x10) &
                                   (byte)((ulong)_UNK_038897c8 >> 0x30),
                                   CONCAT15((byte)((uint)fVar28 >> 8) &
                                            (byte)((ulong)_UNK_038897c8 >> 0x28),
                                            CONCAT14(SUB41(fVar28,0) &
                                                     (byte)((ulong)_UNK_038897c8 >> 0x20),fVar40))))
                >> 0x20) * fVar42;
    return auVar38;
  }
  auVar39._0_4_ = (float)*(undefined8 *)(lVar33 + 0x340) + (float)*(undefined8 *)(lVar33 + 0x330);
  auVar39._4_4_ =
       (float)((ulong)*(undefined8 *)(lVar33 + 0x340) >> 0x20) +
       (float)((ulong)*(undefined8 *)(lVar33 + 0x330) >> 0x20);
  auVar39._8_4_ = (float)*(undefined8 *)(lVar33 + 0x348) + (float)*(undefined8 *)(lVar33 + 0x338);
  auVar39._12_4_ =
       (float)((ulong)*(undefined8 *)(lVar33 + 0x348) >> 0x20) +
       (float)((ulong)*(undefined8 *)(lVar33 + 0x338) >> 0x20);
  return auVar39;
}


