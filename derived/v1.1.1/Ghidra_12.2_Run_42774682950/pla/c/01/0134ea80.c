/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0134ea80; name: FUN_0134ea80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0134ea80(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  unkbyte9 *pVar1;
  undefined8 uVar2;
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
  float fVar22;
  float fVar23;
  ulong uVar24;
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
  long lVar38;
  undefined8 uVar39;
  byte bVar40;
  byte bVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  float fVar49;
  float fVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined8 uVar71;
  float fVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  
  lVar38 = *(long *)(param_1 + 0x68);
  if (lVar38 != 0) {
    *(undefined8 *)(lVar38 + 0x228) = param_2[1];
    *(undefined8 *)(lVar38 + 0x220) = *param_2;
    *(undefined4 *)(lVar38 + 0x230) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)(lVar38 + 0x23c) = *(undefined4 *)((long)param_2 + 0x1c);
    *(undefined4 *)(lVar38 + 0x240) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(lVar38 + 0x234) = *(undefined4 *)((long)param_2 + 0x14);
    *(undefined4 *)(lVar38 + 0x238) = *(undefined4 *)(param_2 + 3);
    uVar39 = *(undefined8 *)((long)param_2 + 0x24);
    *(undefined8 *)(lVar38 + 0x24c) = *(undefined8 *)((long)param_2 + 0x2c);
    *(undefined8 *)(lVar38 + 0x244) = uVar39;
    *(undefined8 *)(lVar38 + 0x268) = param_2[9];
    *(undefined8 *)(lVar38 + 0x260) = param_2[8];
    uVar53 = param_2[0xf];
    uVar39 = param_2[0x10];
    uVar2 = param_2[0x11];
    *(undefined8 *)(lVar38 + 0x290) = param_2[0xe];
    uVar52 = param_2[0xd];
    uVar51 = param_2[10];
    uVar71 = param_2[0xb];
    *(undefined8 *)(lVar38 + 0x280) = param_2[0xc];
    *(undefined8 *)(lVar38 + 0x270) = uVar51;
    *(undefined8 *)(lVar38 + 0x298) = uVar53;
    *(undefined8 *)(lVar38 + 0x2a0) = uVar39;
    *(undefined8 *)(lVar38 + 0x2a8) = uVar2;
    *(undefined8 *)(lVar38 + 0x278) = uVar71;
    *(undefined8 *)(lVar38 + 0x288) = uVar52;
    uVar39 = param_2[0x12];
    uVar53 = param_2[0x13];
    uVar51 = param_2[0x14];
    *(undefined8 *)(lVar38 + 0x2c8) = param_2[0x15];
    *(undefined8 *)(lVar38 + 0x2c0) = uVar51;
    *(undefined8 *)(lVar38 + 0x2b8) = uVar53;
    *(undefined8 *)(lVar38 + 0x2b0) = uVar39;
    uVar39 = param_2[0x16];
    uVar53 = param_2[0x17];
    uVar51 = param_2[0x18];
    *(undefined8 *)(lVar38 + 0x2e8) = param_2[0x19];
    *(undefined8 *)(lVar38 + 0x2e0) = uVar51;
    *(undefined8 *)(lVar38 + 0x2d8) = uVar53;
    *(undefined8 *)(lVar38 + 0x2d0) = uVar39;
    lVar38 = *(long *)(param_1 + 0x68);
    uVar63 = (undefined1)DAT_0388a148;
    uVar64 = (undefined1)((ulong)DAT_0388a148 >> 8);
    uVar65 = (undefined1)((ulong)DAT_0388a148 >> 0x10);
    uVar66 = (undefined1)((ulong)DAT_0388a148 >> 0x18);
    uVar67 = (undefined1)((ulong)DAT_0388a148 >> 0x20);
    uVar68 = (undefined1)((ulong)DAT_0388a148 >> 0x28);
    uVar69 = (undefined1)((ulong)DAT_0388a148 >> 0x30);
    uVar70 = (undefined1)((ulong)DAT_0388a148 >> 0x38);
    pVar1 = (unkbyte9 *)(lVar38 + 0x350);
    uVar39 = *(undefined8 *)(lVar38 + 0x358);
    uVar42 = (undefined1)((ulong)uVar39 >> 8);
    uVar43 = (undefined1)((ulong)uVar39 >> 0x10);
    uVar44 = (undefined1)((ulong)uVar39 >> 0x18);
    uVar45 = (undefined1)((ulong)uVar39 >> 0x20);
    uVar46 = (undefined1)((ulong)uVar39 >> 0x28);
    uVar47 = (undefined1)((ulong)uVar39 >> 0x30);
    uVar48 = (undefined1)((ulong)uVar39 >> 0x38);
    fVar22 = (float)*(undefined8 *)pVar1;
    fVar55 = fVar22 * (float)_DAT_03889ac0;
    fVar23 = (float)((ulong)*(undefined8 *)pVar1 >> 0x20);
    fVar57 = fVar23 * (float)((ulong)_DAT_03889ac0 >> 0x20);
    fVar59 = (float)uVar39 * (float)_UNK_03889ac8;
    fVar61 = (float)((ulong)uVar39 >> 0x20) * (float)((ulong)_UNK_03889ac8 >> 0x20);
    auVar19[8] = uVar63;
    auVar19._0_8_ = DAT_0388a140;
    auVar19[9] = uVar64;
    auVar19[10] = uVar65;
    auVar19[0xb] = uVar66;
    auVar19[0xc] = uVar67;
    auVar19[0xd] = uVar68;
    auVar19[0xe] = uVar69;
    auVar19[0xf] = uVar70;
    uVar71 = a64_TBL(ZEXT816(0),auVar19,DAT_0388a680);
    auVar13._4_4_ = fVar57;
    auVar13._0_4_ = fVar55;
    auVar13._8_4_ = fVar59;
    auVar13._12_4_ = fVar61;
    uVar52 = a64_TBL(ZEXT816(0),auVar13,DAT_0388a580);
    auVar14._4_4_ = fVar57;
    auVar14._0_4_ = fVar55;
    auVar14._8_4_ = fVar59;
    auVar14._12_4_ = fVar61;
    uVar73 = a64_TBL(ZEXT816(0),auVar14,DAT_0388a6c8);
    auVar20[8] = uVar63;
    auVar20._0_8_ = DAT_0388a140;
    auVar20[9] = uVar64;
    auVar20[10] = uVar65;
    auVar20[0xb] = uVar66;
    auVar20[0xc] = uVar67;
    auVar20[0xd] = uVar68;
    auVar20[0xe] = uVar69;
    auVar20[0xf] = uVar70;
    uVar39 = a64_TBL(ZEXT816(0),auVar20,DAT_0388a580);
    fVar50 = (float)((ulong)uVar39 >> 0x20);
    fVar72 = (float)((ulong)DAT_0388a7e8 >> 0x20);
    fVar54 = (float)((ulong)uVar71 >> 0x20);
    auVar15._4_4_ = fVar57;
    auVar15._0_4_ = fVar55;
    auVar15._8_4_ = fVar59;
    auVar15._12_4_ = fVar61;
    uVar74 = a64_TBL(ZEXT816(0),auVar15,DAT_0388a680);
    auVar16._4_4_ = fVar57;
    auVar16._0_4_ = fVar55;
    auVar16._8_4_ = fVar59;
    auVar16._12_4_ = fVar61;
    uVar75 = a64_TBL(ZEXT816(0),auVar16,DAT_0388a880);
    auVar17._4_4_ = fVar57;
    auVar17._0_4_ = fVar55;
    auVar17._8_4_ = fVar59;
    auVar17._12_4_ = fVar61;
    uVar76 = a64_TBL(ZEXT816(0),auVar17,DAT_0388a790);
    auVar21[8] = uVar63;
    auVar21._0_8_ = DAT_0388a140;
    auVar21[9] = uVar64;
    auVar21[10] = uVar65;
    auVar21[0xb] = uVar66;
    auVar21[0xc] = uVar67;
    auVar21[0xd] = uVar68;
    auVar21[0xe] = uVar69;
    auVar21[0xf] = uVar70;
    uVar53 = a64_TBL(ZEXT816(0),auVar21,DAT_0388a880);
    fVar6 = (float)((ulong)uVar53 >> 0x20);
    auVar3[9] = uVar42;
    auVar3._0_9_ = *pVar1;
    auVar3[10] = uVar43;
    auVar3[0xb] = uVar44;
    auVar3[0xc] = uVar45;
    auVar3[0xd] = uVar46;
    auVar3[0xe] = uVar47;
    auVar3[0xf] = uVar48;
    uVar2 = a64_TBL(ZEXT816(0),auVar3,DAT_0388a580);
    auVar18._4_4_ = fVar57;
    auVar18._0_4_ = fVar55;
    auVar18._8_4_ = fVar55;
    auVar18._12_4_ = fVar57;
    uVar51 = a64_TBL(ZEXT816(0),auVar18,DAT_0388a648);
    fVar60 = (float)_UNK_03889ad8;
    fVar62 = (float)((ulong)_UNK_03889ad8 >> 0x20);
    fVar56 = (float)_DAT_03889ad0;
    fVar58 = (float)((ulong)_DAT_03889ad0 >> 0x20);
    fVar49 = (fVar55 * (float)uVar39 + fVar56 * (float)uVar52 * (float)DAT_0388a7e8 +
             fVar56 * (float)uVar53 * (float)uVar74) - (float)uVar71 * (float)uVar75;
    fVar57 = (fVar57 * fVar50 + fVar58 * (float)((ulong)uVar52 >> 0x20) * fVar72 +
             fVar58 * fVar6 * (float)((ulong)uVar74 >> 0x20)) -
             fVar54 * (float)((ulong)uVar75 >> 0x20);
    fVar59 = (fVar59 * (float)uVar39 + fVar60 * (float)uVar71 * (float)uVar73 +
             fVar60 * (float)uVar51 * (float)DAT_0388a7e8) - (float)uVar53 * (float)uVar76;
    fVar61 = (fVar61 * fVar50 + fVar62 * fVar54 * (float)((ulong)uVar73 >> 0x20) +
             fVar62 * (float)((ulong)uVar51 >> 0x20) * fVar72) -
             fVar6 * (float)((ulong)uVar76 >> 0x20);
    auVar4[9] = uVar42;
    auVar4._0_9_ = *pVar1;
    auVar4[10] = uVar43;
    auVar4[0xb] = uVar44;
    auVar4[0xc] = uVar45;
    auVar4[0xd] = uVar46;
    auVar4[0xe] = uVar47;
    auVar4[0xf] = uVar48;
    uVar73 = a64_TBL(ZEXT816(0),auVar4,DAT_0388a680);
    auVar7._4_4_ = fVar57;
    auVar7._0_4_ = fVar49;
    auVar7._8_4_ = fVar59;
    auVar7._12_4_ = fVar61;
    uVar52 = a64_TBL(ZEXT816(0),auVar7,DAT_0388a580);
    auVar8._4_4_ = fVar57;
    auVar8._0_4_ = fVar49;
    auVar8._8_4_ = fVar59;
    auVar8._12_4_ = fVar61;
    uVar74 = a64_TBL(ZEXT816(0),auVar8,DAT_0388a6c8);
    fVar72 = (float)((ulong)uVar73 >> 0x20);
    fVar55 = (float)((ulong)uVar2 >> 0x20);
    auVar9._4_4_ = fVar57;
    auVar9._0_4_ = fVar49;
    auVar9._8_4_ = fVar59;
    auVar9._12_4_ = fVar61;
    uVar51 = a64_TBL(ZEXT816(0),auVar9,DAT_0388a680);
    auVar10._4_4_ = fVar57;
    auVar10._0_4_ = fVar49;
    auVar10._8_4_ = fVar59;
    auVar10._12_4_ = fVar61;
    uVar75 = a64_TBL(ZEXT816(0),auVar10,DAT_0388a790);
    auVar11._4_4_ = fVar57;
    auVar11._0_4_ = fVar49;
    auVar11._8_4_ = fVar59;
    auVar11._12_4_ = fVar61;
    uVar71 = a64_TBL(ZEXT816(0),auVar11,DAT_0388a880);
    auVar5[9] = uVar42;
    auVar5._0_9_ = *pVar1;
    auVar5[10] = uVar43;
    auVar5[0xb] = uVar44;
    auVar5[0xc] = uVar45;
    auVar5[0xd] = uVar46;
    auVar5[0xe] = uVar47;
    auVar5[0xf] = uVar48;
    uVar53 = a64_TBL(ZEXT816(0),auVar5,DAT_0388a880);
    fVar54 = (float)((ulong)uVar53 >> 0x20);
    auVar12._4_4_ = fVar57;
    auVar12._0_4_ = fVar49;
    auVar12._8_4_ = fVar49;
    auVar12._12_4_ = fVar57;
    uVar39 = a64_TBL(ZEXT816(0),auVar12,DAT_0388a648);
    fVar6 = fVar22 * (float)uVar39;
    fVar50 = fVar23 * (float)((ulong)uVar39 >> 0x20);
    fVar22 = ((float)uVar2 * fVar49 + fVar56 * fVar22 * (float)uVar52 +
             fVar56 * (float)uVar53 * (float)uVar51) - (float)uVar73 * (float)uVar71;
    fVar23 = (fVar55 * fVar57 + fVar58 * fVar23 * (float)((ulong)uVar52 >> 0x20) +
             fVar58 * fVar54 * (float)((ulong)uVar51 >> 0x20)) -
             fVar72 * (float)((ulong)uVar71 >> 0x20);
    fVar49 = ((float)uVar2 * fVar59 + fVar60 * (float)uVar73 * (float)uVar74 + fVar60 * fVar6) -
             (float)uVar53 * (float)uVar75;
    fVar6 = (fVar55 * fVar61 + fVar62 * fVar72 * (float)((ulong)uVar74 >> 0x20) +
            fVar62 * (float)(CONCAT17((char)((uint)fVar50 >> 0x18),
                                      CONCAT16((char)((uint)fVar50 >> 0x10),
                                               CONCAT15((char)((uint)fVar50 >> 8),
                                                        CONCAT14(SUB41(fVar50,0),fVar6)))) >> 0x20))
            - fVar54 * (float)((ulong)uVar75 >> 0x20);
    bVar41 = (byte)_UNK_038897c8;
    uVar31 = (ulong)_UNK_038897c8 >> 8;
    uVar32 = (ulong)_UNK_038897c8 >> 0x10;
    uVar33 = (ulong)_UNK_038897c8 >> 0x18;
    uVar34 = (ulong)_UNK_038897c8 >> 0x20;
    uVar35 = (ulong)_UNK_038897c8 >> 0x28;
    uVar36 = (ulong)_UNK_038897c8 >> 0x30;
    uVar37 = (ulong)_UNK_038897c8 >> 0x38;
    bVar40 = (byte)_DAT_038897c0;
    uVar24 = (ulong)_DAT_038897c0 >> 8;
    uVar25 = (ulong)_DAT_038897c0 >> 0x10;
    uVar26 = (ulong)_DAT_038897c0 >> 0x18;
    uVar27 = (ulong)_DAT_038897c0 >> 0x20;
    uVar28 = (ulong)_DAT_038897c0 >> 0x28;
    uVar29 = (ulong)_DAT_038897c0 >> 0x30;
    uVar30 = (ulong)_DAT_038897c0 >> 0x38;
    *(ulong *)(lVar38 + 0x380) = *(ulong *)(lVar38 + 0x380) & 0xffffffffffffffe0 | 5;
    *(ulong *)(lVar38 + 0x318) =
         CONCAT17((byte)((uint)fVar6 >> 0x18) & (byte)uVar37,
                  CONCAT16((byte)((uint)fVar6 >> 0x10) & (byte)uVar36,
                           CONCAT15((byte)((uint)fVar6 >> 8) & (byte)uVar35,
                                    CONCAT14(SUB41(fVar6,0) & (byte)uVar34,
                                             CONCAT13((byte)((uint)fVar49 >> 0x18) & (byte)uVar33,
                                                      CONCAT12((byte)((uint)fVar49 >> 0x10) &
                                                               (byte)uVar32,
                                                               CONCAT11((byte)((uint)fVar49 >> 8) &
                                                                        (byte)uVar31,
                                                                        SUB41(fVar49,0) & bVar41))))
                                   )));
    *(ulong *)(lVar38 + 0x310) =
         CONCAT17((byte)((uint)fVar23 >> 0x18) & (byte)uVar30,
                  CONCAT16((byte)((uint)fVar23 >> 0x10) & (byte)uVar29,
                           CONCAT15((byte)((uint)fVar23 >> 8) & (byte)uVar28,
                                    CONCAT14(SUB41(fVar23,0) & (byte)uVar27,
                                             CONCAT13((byte)((uint)fVar22 >> 0x18) & (byte)uVar26,
                                                      CONCAT12((byte)((uint)fVar22 >> 0x10) &
                                                               (byte)uVar25,
                                                               CONCAT11((byte)((uint)fVar22 >> 8) &
                                                                        (byte)uVar24,
                                                                        SUB41(fVar22,0) & bVar40))))
                                   )));
    (**(code **)(*(long *)(lVar38 + 0x208) + 0x10))(lVar38 + 0x208);
    (**(code **)(*(long *)(lVar38 + 0x208) + 0x18))(lVar38 + 0x208);
    lVar38 = *(long *)(param_1 + 0x68);
    *(undefined8 *)(lVar38 + 0x338) = param_3[1];
    *(undefined8 *)(lVar38 + 0x330) = *param_3;
    lVar38 = *(long *)(param_1 + 0x68);
    *(undefined8 *)(lVar38 + 0x328) = param_4[1];
    *(undefined8 *)(lVar38 + 800) = *param_4;
    lVar38 = *(long *)(param_1 + 0x68);
    *(undefined8 *)(lVar38 + 0x318) = param_5[1];
    *(undefined8 *)(lVar38 + 0x310) = *param_5;
  }
  return;
}


