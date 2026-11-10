/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028b5970; name: FUN_028b5970
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028b5970(undefined4 *param_1,long *param_2)

{
  unkbyte9 *pVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
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
  undefined8 uVar23;
  float fVar24;
  ulong uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  float fVar37;
  undefined8 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined8 uVar55;
  float fVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 local_40;
  undefined8 uStack_38;
  
  (**(code **)(*param_2 + 0x40))((char)*param_1,param_2);
  (**(code **)(*param_2 + 0x50))((char)param_1[1],param_2);
  (**(code **)(*param_2 + 0x60))((char)param_1[2],param_2);
  pVar1 = (unkbyte9 *)(param_1 + 4);
  (**(code **)(*param_2 + 0xa0))(param_2,pVar1);
  (**(code **)(*param_2 + 0xa8))(param_2,param_1 + 8);
  uVar25 = (**(code **)(*param_2 + 0xb0))(param_2);
  if ((uVar25 & 1) != 0) {
    (**(code **)(*param_2 + 0xb8))(param_2,param_1 + 0xc);
  }
  uVar25 = (**(code **)(*param_2 + 200))(param_2);
  if ((uVar25 & 1) != 0) {
    (**(code **)(*param_2 + 0xd0))((char)param_1[0x10],param_2);
  }
  uVar25 = (**(code **)(*param_2 + 0x110))(param_2);
  if ((uVar25 & 1) != 0) {
    (**(code **)(*param_2 + 0xf0))(param_2,param_1 + 0x14);
  }
  uVar12 = *(undefined8 *)(param_1 + 6);
  uVar26 = (undefined1)((ulong)uVar12 >> 8);
  uVar27 = (undefined1)((ulong)uVar12 >> 0x10);
  uVar28 = (undefined1)((ulong)uVar12 >> 0x18);
  uVar29 = (undefined1)((ulong)uVar12 >> 0x20);
  uVar30 = (undefined1)((ulong)uVar12 >> 0x28);
  uVar31 = (undefined1)((ulong)uVar12 >> 0x30);
  uVar32 = (undefined1)((ulong)uVar12 >> 0x38);
  uVar47 = (undefined1)_UNK_03888d28;
  uVar48 = (undefined1)((ulong)_UNK_03888d28 >> 8);
  uVar49 = (undefined1)((ulong)_UNK_03888d28 >> 0x10);
  uVar50 = (undefined1)((ulong)_UNK_03888d28 >> 0x18);
  uVar51 = (undefined1)((ulong)_UNK_03888d28 >> 0x20);
  uVar52 = (undefined1)((ulong)_UNK_03888d28 >> 0x28);
  uVar53 = (undefined1)((ulong)_UNK_03888d28 >> 0x30);
  uVar54 = (undefined1)((ulong)_UNK_03888d28 >> 0x38);
  fVar22 = (float)*(undefined8 *)pVar1;
  fVar39 = fVar22 * (float)_DAT_03889ac0;
  fVar24 = (float)((ulong)*(undefined8 *)pVar1 >> 0x20);
  fVar41 = fVar24 * (float)((ulong)_DAT_03889ac0 >> 0x20);
  fVar43 = (float)uVar12 * (float)_UNK_03889ac8;
  fVar45 = (float)((ulong)uVar12 >> 0x20) * (float)((ulong)_UNK_03889ac8 >> 0x20);
  auVar19[8] = uVar47;
  auVar19._0_8_ = _DAT_03888d20;
  auVar19[9] = uVar48;
  auVar19[10] = uVar49;
  auVar19[0xb] = uVar50;
  auVar19[0xc] = uVar51;
  auVar19[0xd] = uVar52;
  auVar19[0xe] = uVar53;
  auVar19[0xf] = uVar54;
  uVar12 = a64_TBL(ZEXT816(0),auVar19,DAT_0388a580);
  fVar34 = (float)((ulong)uVar12 >> 0x20);
  auVar20[8] = uVar47;
  auVar20._0_8_ = _DAT_03888d20;
  auVar20[9] = uVar48;
  auVar20[10] = uVar49;
  auVar20[0xb] = uVar50;
  auVar20[0xc] = uVar51;
  auVar20[0xd] = uVar52;
  auVar20[0xe] = uVar53;
  auVar20[0xf] = uVar54;
  uVar55 = a64_TBL(ZEXT816(0),auVar20,DAT_0388a680);
  auVar13._4_4_ = fVar41;
  auVar13._0_4_ = fVar39;
  auVar13._8_4_ = fVar43;
  auVar13._12_4_ = fVar45;
  uVar35 = a64_TBL(ZEXT816(0),auVar13,DAT_0388a580);
  auVar14._4_4_ = fVar41;
  auVar14._0_4_ = fVar39;
  auVar14._8_4_ = fVar43;
  auVar14._12_4_ = fVar45;
  uVar57 = a64_TBL(ZEXT816(0),auVar14,DAT_0388a6c8);
  fVar37 = (float)((ulong)uVar55 >> 0x20);
  auVar15._4_4_ = fVar41;
  auVar15._0_4_ = fVar39;
  auVar15._8_4_ = fVar43;
  auVar15._12_4_ = fVar45;
  uVar58 = a64_TBL(ZEXT816(0),auVar15,DAT_0388a680);
  auVar16._4_4_ = fVar41;
  auVar16._0_4_ = fVar39;
  auVar16._8_4_ = fVar43;
  auVar16._12_4_ = fVar45;
  uVar60 = a64_TBL(ZEXT816(0),auVar16,DAT_0388a790);
  auVar17._4_4_ = fVar41;
  auVar17._0_4_ = fVar39;
  auVar17._8_4_ = fVar43;
  auVar17._12_4_ = fVar45;
  uVar59 = a64_TBL(ZEXT816(0),auVar17,DAT_0388a880);
  auVar18._4_4_ = fVar41;
  auVar18._0_4_ = fVar39;
  auVar18._8_4_ = fVar39;
  auVar18._12_4_ = fVar41;
  uVar36 = a64_TBL(ZEXT816(0),auVar18,DAT_0388a648);
  auVar21[8] = uVar47;
  auVar21._0_8_ = _DAT_03888d20;
  auVar21[9] = uVar48;
  auVar21[10] = uVar49;
  auVar21[0xb] = uVar50;
  auVar21[0xc] = uVar51;
  auVar21[0xd] = uVar52;
  auVar21[0xe] = uVar53;
  auVar21[0xf] = uVar54;
  uVar38 = a64_TBL(ZEXT816(0),auVar21,DAT_0388a880);
  fVar5 = (float)((ulong)uVar38 >> 0x20);
  auVar2[9] = uVar26;
  auVar2._0_9_ = *pVar1;
  auVar2[10] = uVar27;
  auVar2[0xb] = uVar28;
  auVar2[0xc] = uVar29;
  auVar2[0xd] = uVar30;
  auVar2[0xe] = uVar31;
  auVar2[0xf] = uVar32;
  uVar23 = a64_TBL(ZEXT816(0),auVar2,DAT_0388a580);
  fVar44 = (float)_UNK_03889ad8;
  fVar46 = (float)((ulong)_UNK_03889ad8 >> 0x20);
  fVar40 = (float)_DAT_03889ad0;
  fVar42 = (float)((ulong)_DAT_03889ad0 >> 0x20);
  fVar33 = (fVar39 * (float)uVar12 + fVar40 * (float)uVar35 * 0.0 +
           fVar40 * (float)uVar38 * (float)uVar58) - (float)uVar55 * (float)uVar59;
  fVar41 = (fVar41 * fVar34 + fVar42 * (float)((ulong)uVar35 >> 0x20) * 0.0 +
           fVar42 * fVar5 * (float)((ulong)uVar58 >> 0x20)) -
           fVar37 * (float)((ulong)uVar59 >> 0x20);
  fVar43 = (fVar43 * (float)uVar12 + fVar44 * (float)uVar55 * (float)uVar57 +
           fVar44 * (float)uVar36 * 0.0) - (float)uVar38 * (float)uVar60;
  fVar45 = (fVar45 * fVar34 + fVar46 * fVar37 * (float)((ulong)uVar57 >> 0x20) +
           fVar46 * (float)((ulong)uVar36 >> 0x20) * 0.0) - fVar5 * (float)((ulong)uVar60 >> 0x20);
  auVar3[9] = uVar26;
  auVar3._0_9_ = *pVar1;
  auVar3[10] = uVar27;
  auVar3[0xb] = uVar28;
  auVar3[0xc] = uVar29;
  auVar3[0xd] = uVar30;
  auVar3[0xe] = uVar31;
  auVar3[0xf] = uVar32;
  uVar57 = a64_TBL(ZEXT816(0),auVar3,DAT_0388a680);
  auVar6._4_4_ = fVar41;
  auVar6._0_4_ = fVar33;
  auVar6._8_4_ = fVar43;
  auVar6._12_4_ = fVar45;
  uVar35 = a64_TBL(ZEXT816(0),auVar6,DAT_0388a580);
  auVar7._4_4_ = fVar41;
  auVar7._0_4_ = fVar33;
  auVar7._8_4_ = fVar43;
  auVar7._12_4_ = fVar45;
  uVar58 = a64_TBL(ZEXT816(0),auVar7,DAT_0388a6c8);
  fVar39 = (float)((ulong)uVar23 >> 0x20);
  fVar56 = (float)((ulong)uVar57 >> 0x20);
  auVar8._4_4_ = fVar41;
  auVar8._0_4_ = fVar33;
  auVar8._8_4_ = fVar43;
  auVar8._12_4_ = fVar45;
  uVar59 = a64_TBL(ZEXT816(0),auVar8,DAT_0388a790);
  auVar9._4_4_ = fVar41;
  auVar9._0_4_ = fVar33;
  auVar9._8_4_ = fVar43;
  auVar9._12_4_ = fVar45;
  uVar38 = a64_TBL(ZEXT816(0),auVar9,DAT_0388a680);
  auVar10._4_4_ = fVar41;
  auVar10._0_4_ = fVar33;
  auVar10._8_4_ = fVar43;
  auVar10._12_4_ = fVar45;
  uVar55 = a64_TBL(ZEXT816(0),auVar10,DAT_0388a880);
  auVar4[9] = uVar26;
  auVar4._0_9_ = *pVar1;
  auVar4[10] = uVar27;
  auVar4[0xb] = uVar28;
  auVar4[0xc] = uVar29;
  auVar4[0xd] = uVar30;
  auVar4[0xe] = uVar31;
  auVar4[0xf] = uVar32;
  uVar36 = a64_TBL(ZEXT816(0),auVar4,DAT_0388a880);
  fVar37 = (float)((ulong)uVar36 >> 0x20);
  auVar11._4_4_ = fVar41;
  auVar11._0_4_ = fVar33;
  auVar11._8_4_ = fVar33;
  auVar11._12_4_ = fVar41;
  uVar12 = a64_TBL(ZEXT816(0),auVar11,DAT_0388a648);
  fVar5 = fVar22 * (float)uVar12;
  fVar34 = fVar24 * (float)((ulong)uVar12 >> 0x20);
  fVar22 = ((float)uVar23 * fVar33 + fVar40 * fVar22 * (float)uVar35 +
           fVar40 * (float)uVar36 * (float)uVar38) - (float)uVar57 * (float)uVar55;
  fVar24 = (fVar39 * fVar41 + fVar42 * fVar24 * (float)((ulong)uVar35 >> 0x20) +
           fVar42 * fVar37 * (float)((ulong)uVar38 >> 0x20)) -
           fVar56 * (float)((ulong)uVar55 >> 0x20);
  fVar33 = ((float)uVar23 * fVar43 + fVar44 * (float)uVar57 * (float)uVar58 + fVar44 * fVar5) -
           (float)uVar36 * (float)uVar59;
  fVar5 = (fVar39 * fVar45 + fVar46 * fVar56 * (float)((ulong)uVar58 >> 0x20) +
          fVar46 * (float)(CONCAT17((char)((uint)fVar34 >> 0x18),
                                    CONCAT16((char)((uint)fVar34 >> 0x10),
                                             CONCAT15((char)((uint)fVar34 >> 8),
                                                      CONCAT14(SUB41(fVar34,0),fVar5)))) >> 0x20)) -
          fVar37 * (float)((ulong)uVar59 >> 0x20);
  uStack_38 = CONCAT17((byte)((uint)fVar5 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x38),
                       CONCAT16((byte)((uint)fVar5 >> 0x10) & (byte)((ulong)_UNK_038897c8 >> 0x30),
                                CONCAT15((byte)((uint)fVar5 >> 8) &
                                         (byte)((ulong)_UNK_038897c8 >> 0x28),
                                         CONCAT14(SUB41(fVar5,0) &
                                                  (byte)((ulong)_UNK_038897c8 >> 0x20),
                                                  CONCAT13((byte)((uint)fVar33 >> 0x18) &
                                                           (byte)((ulong)_UNK_038897c8 >> 0x18),
                                                           CONCAT12((byte)((uint)fVar33 >> 0x10) &
                                                                    (byte)((ulong)_UNK_038897c8 >>
                                                                          0x10),
                                                                    CONCAT11((byte)((uint)fVar33 >>
                                                                                   8) &
                                                                             (byte)((ulong)
                                                  _UNK_038897c8 >> 8),
                                                  SUB41(fVar33,0) & (byte)_UNK_038897c8)))))));
  local_40 = CONCAT17((byte)((uint)fVar24 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x38),
                      CONCAT16((byte)((uint)fVar24 >> 0x10) & (byte)((ulong)_DAT_038897c0 >> 0x30),
                               CONCAT15((byte)((uint)fVar24 >> 8) &
                                        (byte)((ulong)_DAT_038897c0 >> 0x28),
                                        CONCAT14(SUB41(fVar24,0) &
                                                 (byte)((ulong)_DAT_038897c0 >> 0x20),
                                                 CONCAT13((byte)((uint)fVar22 >> 0x18) &
                                                          (byte)((ulong)_DAT_038897c0 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar22 >> 0x10) &
                                                                   (byte)((ulong)_DAT_038897c0 >>
                                                                         0x10),
                                                                   CONCAT11((byte)((uint)fVar22 >> 8
                                                                                  ) & (byte)((ulong)
                                                  _DAT_038897c0 >> 8),
                                                  SUB41(fVar22,0) & (byte)_DAT_038897c0)))))));
  (**(code **)(*param_2 + 0xe0))(param_2,&local_40);
  return;
}


