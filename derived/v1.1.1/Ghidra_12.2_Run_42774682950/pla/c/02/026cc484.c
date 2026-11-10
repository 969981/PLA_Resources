/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026cc484; name: FUN_026cc484
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026cc484(undefined1 (*param_1) [12])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uVar21;
  float fVar22;
  float extraout_s0;
  undefined4 uVar23;
  float extraout_var;
  float extraout_var_00;
  float extraout_var_01;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  float fVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  
  fVar22 = (float)FUN_01009820((int)*(undefined8 *)*param_1,(int)*(undefined8 *)(*param_1 + 8));
  FUN_009a7ff4(-fVar22,0,0);
  uVar23 = (undefined4)((ulong)*(undefined8 *)(*param_1 + 8) >> 0x20);
  fVar36 = (float)*(undefined8 *)*param_1;
  fVar37 = (float)((ulong)*(undefined8 *)*param_1 >> 0x20);
  fVar32 = extraout_s0 * (float)_DAT_03889ac0;
  fVar33 = extraout_var * (float)((ulong)_DAT_03889ac0 >> 0x20);
  fVar34 = extraout_var_00 * (float)_UNK_03889ac8;
  fVar35 = extraout_var_01 * (float)((ulong)_UNK_03889ac8 >> 0x20);
  auVar18._12_4_ = uVar23;
  auVar18._0_12_ = *param_1;
  uVar10 = a64_TBL(ZEXT816(0),auVar18,DAT_0388a580);
  fVar24 = (float)((ulong)uVar10 >> 0x20);
  auVar19._12_4_ = uVar23;
  auVar19._0_12_ = *param_1;
  uVar39 = a64_TBL(ZEXT816(0),auVar19,DAT_0388a680);
  auVar11._4_4_ = fVar33;
  auVar11._0_4_ = fVar32;
  auVar11._8_4_ = fVar34;
  auVar11._12_4_ = fVar35;
  uVar25 = a64_TBL(ZEXT816(0),auVar11,DAT_0388a580);
  auVar12._4_4_ = fVar33;
  auVar12._0_4_ = fVar32;
  auVar12._8_4_ = fVar34;
  auVar12._12_4_ = fVar35;
  uVar29 = a64_TBL(ZEXT816(0),auVar12,DAT_0388a6c8);
  auVar13._4_4_ = fVar33;
  auVar13._0_4_ = fVar32;
  auVar13._8_4_ = fVar34;
  auVar13._12_4_ = fVar35;
  uVar41 = a64_TBL(ZEXT816(0),auVar13,DAT_0388a680);
  fVar40 = (float)((ulong)uVar39 >> 0x20);
  auVar14._4_4_ = fVar33;
  auVar14._0_4_ = fVar32;
  auVar14._8_4_ = fVar34;
  auVar14._12_4_ = fVar35;
  uVar42 = a64_TBL(ZEXT816(0),auVar14,DAT_0388a880);
  auVar15._4_4_ = fVar33;
  auVar15._0_4_ = fVar32;
  auVar15._8_4_ = fVar34;
  auVar15._12_4_ = fVar35;
  uVar43 = a64_TBL(ZEXT816(0),auVar15,DAT_0388a790);
  fVar26 = (float)((ulong)_DAT_03889ad0 >> 0x20);
  fVar27 = (float)_UNK_03889ad8;
  fVar28 = (float)((ulong)_UNK_03889ad8 >> 0x20);
  auVar16._4_4_ = fVar33;
  auVar16._0_4_ = fVar32;
  auVar16._8_4_ = fVar32;
  auVar16._12_4_ = fVar33;
  uVar30 = a64_TBL(ZEXT816(0),auVar16,DAT_0388a648);
  auVar20._12_4_ = uVar23;
  auVar20._0_12_ = *param_1;
  uVar31 = a64_TBL(ZEXT816(0),auVar20,DAT_0388a880);
  fVar38 = (float)((ulong)uVar31 >> 0x20);
  auVar1._4_4_ = extraout_var;
  auVar1._0_4_ = extraout_s0;
  auVar1._8_4_ = extraout_var_00;
  auVar1._12_4_ = extraout_var_01;
  uVar21 = a64_TBL(ZEXT816(0),auVar1,DAT_0388a680);
  auVar2._4_4_ = extraout_var;
  auVar2._0_4_ = extraout_s0;
  auVar2._8_4_ = extraout_var_00;
  auVar2._12_4_ = extraout_var_01;
  uVar17 = a64_TBL(ZEXT816(0),auVar2,DAT_0388a580);
  fVar32 = (fVar32 * (float)uVar10 + (float)_DAT_03889ad0 * fVar36 * (float)uVar25 +
           (float)_DAT_03889ad0 * (float)uVar31 * (float)uVar41) - (float)uVar39 * (float)uVar42;
  fVar33 = (fVar33 * fVar24 + fVar26 * fVar37 * (float)((ulong)uVar25 >> 0x20) +
           fVar26 * fVar38 * (float)((ulong)uVar41 >> 0x20)) -
           fVar40 * (float)((ulong)uVar42 >> 0x20);
  fVar34 = (fVar34 * (float)uVar10 + fVar27 * (float)uVar39 * (float)uVar29 +
           fVar27 * fVar36 * (float)uVar30) - (float)uVar31 * (float)uVar43;
  fVar24 = (fVar35 * fVar24 + fVar28 * fVar40 * (float)((ulong)uVar29 >> 0x20) +
           fVar28 * fVar37 * (float)((ulong)uVar30 >> 0x20)) -
           fVar38 * (float)((ulong)uVar43 >> 0x20);
  auVar4._4_4_ = fVar33;
  auVar4._0_4_ = fVar32;
  auVar4._8_4_ = fVar34;
  auVar4._12_4_ = fVar24;
  uVar25 = a64_TBL(ZEXT816(0),auVar4,DAT_0388a580);
  auVar5._4_4_ = fVar33;
  auVar5._0_4_ = fVar32;
  auVar5._8_4_ = fVar34;
  auVar5._12_4_ = fVar24;
  uVar29 = a64_TBL(ZEXT816(0),auVar5,DAT_0388a6c8);
  auVar6._4_4_ = fVar33;
  auVar6._0_4_ = fVar32;
  auVar6._8_4_ = fVar34;
  auVar6._12_4_ = fVar24;
  uVar41 = a64_TBL(ZEXT816(0),auVar6,DAT_0388a790);
  auVar7._4_4_ = fVar33;
  auVar7._0_4_ = fVar32;
  auVar7._8_4_ = fVar34;
  auVar7._12_4_ = fVar24;
  uVar31 = a64_TBL(ZEXT816(0),auVar7,DAT_0388a680);
  auVar8._4_4_ = fVar33;
  auVar8._0_4_ = fVar32;
  auVar8._8_4_ = fVar34;
  auVar8._12_4_ = fVar24;
  uVar39 = a64_TBL(ZEXT816(0),auVar8,DAT_0388a880);
  auVar3._4_4_ = extraout_var;
  auVar3._0_4_ = extraout_s0;
  auVar3._8_4_ = extraout_var_00;
  auVar3._12_4_ = extraout_var_01;
  uVar30 = a64_TBL(ZEXT816(0),auVar3,DAT_0388a880);
  auVar9._4_4_ = fVar33;
  auVar9._0_4_ = fVar32;
  auVar9._8_4_ = fVar32;
  auVar9._12_4_ = fVar33;
  uVar10 = a64_TBL(ZEXT816(0),auVar9,DAT_0388a648);
  uVar23 = FUN_01009820(-(((float)((ulong)uVar17 >> 0x20) * fVar33 +
                           fVar26 * extraout_var * (float)((ulong)uVar25 >> 0x20) +
                          fVar26 * (float)((ulong)uVar30 >> 0x20) * (float)((ulong)uVar31 >> 0x20))
                         - (float)((ulong)uVar21 >> 0x20) * (float)((ulong)uVar39 >> 0x20)),
                        ((float)uVar17 * fVar34 + fVar27 * (float)uVar21 * (float)uVar29 +
                        fVar27 * extraout_s0 * (float)uVar10) - (float)uVar30 * (float)uVar41);
  FUN_009a7ff4(fVar22,uVar23,0);
  return;
}


