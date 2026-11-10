/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a18d34; name: FUN_01a18d34
 */


void FUN_01a18d34(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  long lVar14;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar15;
  float extraout_var;
  float extraout_var_00;
  float extraout_var_01;
  float extraout_var_02;
  float extraout_var_03;
  float extraout_var_04;
  float fVar16;
  float extraout_var_05;
  float extraout_var_06;
  float extraout_var_07;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [12];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  float fVar32;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar34 [16];
  float fVar33;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  
  FUN_01a168cc(param_1,1);
  FUN_01a168cc(param_1,0);
  FUN_01a168cc(param_1,2);
  puVar10 = PTR_DAT_04379578;
  fVar18 = *(float *)(param_1 + 0xee10);
  fVar16 = extraout_s0_00 + (extraout_s0_01 - extraout_s0_00) * fVar18;
  fVar17 = extraout_var_00 + (extraout_var_01 - extraout_var_00) * fVar18;
  fVar33 = extraout_var_03 + (extraout_var_04 - extraout_var_03) * fVar18;
  fVar15 = extraout_var_06 + (extraout_var_07 - extraout_var_06) * fVar18;
  fVar32 = fVar16 - extraout_s0;
  fVar37 = fVar17 - extraout_var;
  fVar38 = fVar33 - extraout_var_02;
  fVar39 = fVar15 - extraout_var_05;
  fVar16 = extraout_s0_00 - fVar16;
  fVar17 = extraout_var_00 - fVar17;
  fVar33 = extraout_var_03 - fVar33;
  fVar15 = extraout_var_06 - fVar15;
  auVar34._0_4_ = fVar32 * fVar32;
  auVar34._4_4_ = fVar37 * fVar37;
  auVar34._8_4_ = fVar38 * fVar38;
  auVar34._12_4_ = fVar39 * fVar39;
  auVar40 = NEON_ext(auVar34,auVar34,8,1);
  fVar16 = fVar16 * fVar16;
  fVar17 = fVar17 * fVar17;
  uVar23 = (undefined1)((uint)fVar17 >> 8);
  uVar24 = (undefined1)((uint)fVar17 >> 0x10);
  uVar25 = (undefined1)((uint)fVar17 >> 0x18);
  fVar33 = fVar33 * fVar33;
  uVar26 = (undefined1)((uint)fVar33 >> 8);
  uVar27 = (undefined1)((uint)fVar33 >> 0x10);
  uVar28 = (undefined1)((uint)fVar33 >> 0x18);
  fVar15 = fVar15 * fVar15;
  uVar29 = (undefined1)((uint)fVar15 >> 8);
  uVar30 = (undefined1)((uint)fVar15 >> 0x10);
  uVar31 = (undefined1)((uint)fVar15 >> 0x18);
  auVar41[4] = SUB41(fVar17,0);
  auVar41._0_4_ = fVar16;
  auVar41[5] = uVar23;
  auVar41[6] = uVar24;
  auVar41[7] = uVar25;
  auVar41[8] = SUB41(fVar33,0);
  auVar41[9] = uVar26;
  auVar41[10] = uVar27;
  auVar41[0xb] = uVar28;
  auVar41[0xc] = SUB41(fVar15,0);
  auVar41[0xd] = uVar29;
  auVar41[0xe] = uVar30;
  auVar41[0xf] = uVar31;
  auVar35[4] = SUB41(fVar17,0);
  auVar35._0_4_ = fVar16;
  auVar35[5] = uVar23;
  auVar35[6] = uVar24;
  auVar35[7] = uVar25;
  auVar35[8] = SUB41(fVar33,0);
  auVar35[9] = uVar26;
  auVar35[10] = uVar27;
  auVar35[0xb] = uVar28;
  auVar35[0xc] = SUB41(fVar15,0);
  auVar35[0xd] = uVar29;
  auVar35[0xe] = uVar30;
  auVar35[0xf] = uVar31;
  auVar41 = NEON_ext(auVar41,auVar35,8,1);
  fVar33 = SQRT(auVar40._0_4_ + auVar34._0_4_ + auVar40._4_4_ + auVar34._4_4_);
  fVar16 = SQRT(auVar41._0_4_ + fVar16 + auVar41._4_4_ + fVar17);
  fVar17 = fVar16;
  if (fVar33 <= fVar16) {
    fVar17 = fVar33;
  }
  fVar18 = fVar18 - (fVar16 - fVar17);
  if (fVar18 <= 0.0) {
    fVar18 = 0.0;
  }
  fVar44 = extraout_s0_00 + (extraout_s0_01 - extraout_s0_00) * fVar18;
  fVar45 = extraout_var_03 + (extraout_var_04 - extraout_var_03) * fVar18;
  fVar46 = extraout_var_06 + (extraout_var_07 - extraout_var_06) * fVar18;
  fVar15 = (extraout_s0_00 - extraout_s0) * (extraout_s0_00 - extraout_s0);
  fVar32 = (extraout_var_00 - extraout_var) * (extraout_var_00 - extraout_var);
  fVar16 = (extraout_var_03 - extraout_var_02) * (extraout_var_03 - extraout_var_02);
  fVar17 = (extraout_var_06 - extraout_var_05) * (extraout_var_06 - extraout_var_05);
  auVar40._4_4_ = fVar32;
  auVar40._0_4_ = fVar15;
  auVar40._8_4_ = fVar16;
  auVar40._12_4_ = fVar17;
  auVar1._4_4_ = fVar32;
  auVar1._0_4_ = fVar15;
  auVar1._8_4_ = fVar16;
  auVar1._12_4_ = fVar17;
  auVar41 = NEON_ext(auVar40,auVar1,8,1);
  fVar37 = extraout_s0 - fVar44;
  fVar38 = extraout_var_02 - fVar45;
  fVar39 = extraout_var_05 - fVar46;
  fVar17 = fVar37 * fVar37;
  fVar16 = fVar38 * fVar38;
  uVar23 = (undefined1)((uint)fVar16 >> 8);
  uVar24 = (undefined1)((uint)fVar16 >> 0x10);
  uVar25 = (undefined1)((uint)fVar16 >> 0x18);
  fVar33 = fVar39 * fVar39;
  uVar26 = (undefined1)((uint)fVar33 >> 8);
  uVar27 = (undefined1)((uint)fVar33 >> 0x10);
  uVar28 = (undefined1)((uint)fVar33 >> 0x18);
  auVar3._4_4_ = 0;
  auVar3._0_4_ = fVar17;
  auVar3[8] = SUB41(fVar16,0);
  auVar3[9] = uVar23;
  auVar3[10] = uVar24;
  auVar3[0xb] = uVar25;
  auVar3[0xc] = SUB41(fVar33,0);
  auVar3[0xd] = uVar26;
  auVar3[0xe] = uVar27;
  auVar3[0xf] = uVar28;
  auVar4._4_4_ = 0;
  auVar4._0_4_ = fVar17;
  auVar4[8] = SUB41(fVar16,0);
  auVar4[9] = uVar23;
  auVar4[10] = uVar24;
  auVar4[0xb] = uVar25;
  auVar4[0xc] = SUB41(fVar33,0);
  auVar4[0xd] = uVar26;
  auVar4[0xe] = uVar27;
  auVar4[0xf] = uVar28;
  auVar35 = NEON_ext(auVar3,auVar4,8,1);
  fVar16 = SQRT(auVar41._0_4_ + fVar15 + auVar41._4_4_ + fVar32);
  fVar17 = auVar35._0_4_ + fVar17;
  fVar33 = auVar35._4_4_ + 0.0;
  fVar15 = fVar17 + fVar33;
  fVar17 = fVar17 + fVar33;
  uVar23 = SUB41(fVar17,0);
  uVar24 = (undefined1)((uint)fVar17 >> 8);
  uVar25 = (undefined1)((uint)fVar17 >> 0x10);
  uVar26 = (undefined1)((uint)fVar17 >> 0x18);
  auVar5[4] = uVar23;
  auVar5._0_4_ = fVar15;
  auVar5[5] = uVar24;
  auVar5[6] = uVar25;
  auVar5[7] = uVar26;
  auVar5[8] = SUB41(fVar15,0);
  auVar5[9] = (char)((uint)fVar15 >> 8);
  auVar5[10] = (char)((uint)fVar15 >> 0x10);
  auVar5[0xb] = (char)((uint)fVar15 >> 0x18);
  auVar5[0xc] = uVar23;
  auVar5[0xd] = uVar24;
  auVar5[0xe] = uVar25;
  auVar5[0xf] = uVar26;
  auVar41 = NEON_frsqrte(auVar5,4);
  auVar42._0_4_ = auVar41._0_4_ * fVar15;
  auVar42._4_4_ = auVar41._4_4_ * fVar17;
  auVar42._8_4_ = auVar41._8_4_ * fVar15;
  uVar6 = (undefined2)(CONCAT15(uVar24,CONCAT14(uVar23,fVar15)) >> 0x20);
  auVar42._12_4_ = auVar41._12_4_ * (float)CONCAT13(uVar26,CONCAT12(uVar25,uVar6));
  auVar35 = NEON_frsqrts(auVar41,auVar42,4);
  auVar36._0_4_ = auVar41._0_4_ * auVar35._0_4_;
  auVar36._4_4_ = auVar41._4_4_ * auVar35._4_4_;
  auVar36._8_4_ = auVar41._8_4_ * auVar35._8_4_;
  auVar36._12_4_ = auVar41._12_4_ * auVar35._12_4_;
  auVar43._0_4_ = fVar15 * auVar36._0_4_;
  auVar43._4_4_ = fVar17 * auVar36._4_4_;
  auVar43._8_4_ = fVar15 * auVar36._8_4_;
  auVar43._12_4_ = (float)CONCAT13(uVar26,CONCAT12(uVar25,uVar6)) * auVar36._12_4_;
  iVar13 = -(uint)(fVar15 == 0.0);
  iVar7 = -(uint)(fVar17 == 0.0);
  iVar8 = -(uint)(fVar15 == 0.0);
  iVar9 = -(uint)((float)CONCAT13(uVar26,CONCAT12(uVar25,uVar6)) == 0.0);
  auVar41 = NEON_frsqrts(auVar36,auVar43,4);
  fVar37 = auVar36._0_4_ * auVar41._0_4_ * fVar37;
  fVar33 = auVar36._4_4_ * auVar41._4_4_ * 0.0;
  fVar38 = auVar36._8_4_ * auVar41._8_4_ * fVar38;
  fVar39 = auVar36._12_4_ * auVar41._12_4_ * fVar39;
  fVar17 = (float)CONCAT13((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                           CONCAT12((byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10),
                                    CONCAT11((byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar13 >> 8),
                                             SUB41(fVar37,0) & ~(byte)iVar13)));
  auVar19._0_8_ =
       CONCAT17((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18),
                CONCAT16((byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar7 >> 0x10),
                         CONCAT15((byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar7 >> 8),
                                  CONCAT14(SUB41(fVar33,0) & ~(byte)iVar7,fVar17))));
  auVar19[8] = SUB41(fVar38,0) & ~(byte)iVar8;
  auVar19[9] = (byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar8 >> 8);
  auVar19[10] = (byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10);
  auVar19[0xb] = (byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18);
  auVar20[0xc] = SUB41(fVar39,0) & ~(byte)iVar9;
  auVar20._0_12_ = auVar19;
  auVar20[0xd] = (byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar9 >> 8);
  auVar20[0xe] = (byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10);
  auVar20[0xf] = (byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18);
  if (2.0 < fVar16) {
    fVar16 = 2.0;
  }
  fVar16 = 2.0 - fVar16;
  auVar21._0_8_ =
       CONCAT44(extraout_var + (float)((ulong)auVar19._0_8_ >> 0x20) * fVar16,
                extraout_s0 + fVar17 * fVar16);
  auVar21._8_4_ = extraout_var_02 + auVar19._8_4_ * fVar16;
  auVar21._12_4_ = extraout_var_05 + auVar20._12_4_ * fVar16;
  if ((*PTR_DAT_04379578 & 1) == 0) {
    uVar22 = auVar21._8_8_;
    iVar13 = __cxa_guard_acquire(PTR_DAT_04379578);
    auVar21._8_8_ = uVar22;
    if (iVar13 != 0) {
      FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379578);
    }
  }
  puVar12 = PTR_DAT_04379588;
  puVar11 = PTR_DAT_04379580;
  lVar14 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar14;
  lVar14 = *(long *)(lVar14 + 200);
  uVar2 = *(undefined8 *)(lVar14 + 0x538);
  uVar22 = *(undefined8 *)(lVar14 + 0x530);
  param_2[1] = CONCAT44(auVar21._12_4_ - (float)((ulong)uVar2 >> 0x20),auVar21._8_4_ - (float)uVar2)
  ;
  *param_2 = CONCAT44(auVar21._4_4_ - (float)((ulong)uVar22 >> 0x20),auVar21._0_4_ - (float)uVar22);
  if (((*puVar10 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379578), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar14 = *(long *)puVar11;
  *(long *)puVar12 = lVar14;
  lVar14 = *(long *)(lVar14 + 200);
  uVar2 = *(undefined8 *)(lVar14 + 0x538);
  uVar22 = *(undefined8 *)(lVar14 + 0x530);
  param_3[1] = CONCAT44(fVar46 - (float)((ulong)uVar2 >> 0x20),fVar45 - (float)uVar2);
  *param_3 = CONCAT44((extraout_var_00 + (extraout_var_01 - extraout_var_00) * fVar18) -
                      (float)((ulong)uVar22 >> 0x20),fVar44 - (float)uVar22);
  return;
}


