/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01904254; name: FUN_01904254
 */


undefined4 FUN_01904254(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined2 uVar4;
  undefined4 uVar5;
  double dVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 extraout_b0;
  undefined1 uVar15;
  undefined1 extraout_b0_00;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 uVar16;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 uVar17;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 extraout_var_05;
  undefined1 uVar20;
  undefined1 extraout_var_06;
  undefined1 uVar21;
  undefined1 extraout_var_07;
  undefined1 uVar22;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 uVar23;
  undefined1 extraout_var_10;
  undefined1 uVar24;
  undefined1 extraout_var_11;
  undefined1 uVar25;
  undefined1 extraout_var_12;
  undefined1 uVar26;
  undefined1 extraout_var_13;
  undefined1 uVar27;
  undefined1 extraout_var_14;
  undefined1 uVar28;
  undefined1 extraout_var_15;
  undefined1 uVar29;
  undefined1 extraout_var_16;
  undefined1 uVar30;
  float fVar31;
  int iVar32;
  double dVar33;
  undefined1 auVar34 [12];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  int iVar38;
  int iVar39;
  int iVar40;
  undefined1 auVar37 [16];
  float fVar42;
  undefined1 auVar41 [16];
  float fVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined1 local_70 [64];
  
  dVar6 = *(double *)(param_1 + 0x150);
  if (dVar6 <= 0.0) {
    uVar5 = *(undefined4 *)(param_1 + 0x104);
    uVar15 = (undefined1)uVar5;
    uVar16 = (undefined1)((uint)uVar5 >> 8);
    uVar17 = (undefined1)((uint)uVar5 >> 0x10);
    uVar18 = (undefined1)((uint)uVar5 >> 0x18);
  }
  else if (1.0 <= dVar6) {
    uVar5 = *(undefined4 *)(param_1 + 0x44);
    uVar15 = (undefined1)uVar5;
    uVar16 = (undefined1)((uint)uVar5 >> 8);
    uVar17 = (undefined1)((uint)uVar5 >> 0x10);
    uVar18 = (undefined1)((uint)uVar5 >> 0x18);
  }
  else {
    lVar11 = *(long *)(param_1 + 0x130);
    lVar10 = *(long *)(lVar11 + 8);
    lVar8 = *(long *)(lVar11 + 0x10) - lVar10;
    if (lVar8 == 0) {
LAB_0190445c:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    dVar33 = *(double *)(lVar10 + 0x10) / *(double *)(lVar11 + 0x80);
    if (dVar33 < dVar6) {
      if ((ulong)(lVar8 >> 5) < 2) goto LAB_0190445c;
      lVar8 = param_1 + 0x80;
      lVar9 = param_1 + 0x20;
      dVar6 = (dVar6 - dVar33) / (*(double *)(lVar10 + 0x30) / *(double *)(lVar11 + 0x80));
      uVar15 = SUB81(dVar6,0);
      uVar16 = (undefined1)((ulong)dVar6 >> 8);
      uVar17 = (undefined1)((ulong)dVar6 >> 0x10);
      uVar18 = (undefined1)((ulong)dVar6 >> 0x18);
      uVar19 = (undefined1)((ulong)dVar6 >> 0x20);
      uVar20 = (undefined1)((ulong)dVar6 >> 0x28);
      uVar21 = (undefined1)((ulong)dVar6 >> 0x30);
      uVar22 = (undefined1)((ulong)dVar6 >> 0x38);
    }
    else {
      dVar6 = dVar6 / dVar33;
      uVar15 = SUB81(dVar6,0);
      uVar16 = (undefined1)((ulong)dVar6 >> 8);
      uVar17 = (undefined1)((ulong)dVar6 >> 0x10);
      uVar18 = (undefined1)((ulong)dVar6 >> 0x18);
      uVar19 = (undefined1)((ulong)dVar6 >> 0x20);
      uVar20 = (undefined1)((ulong)dVar6 >> 0x28);
      uVar21 = (undefined1)((ulong)dVar6 >> 0x30);
      uVar22 = (undefined1)((ulong)dVar6 >> 0x38);
      lVar8 = param_1 + 0xe0;
      lVar9 = param_1 + 0x80;
    }
    FUN_01832870(local_70,SUB41((float)(double)CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,
                                                  CONCAT14(uVar19,CONCAT13(uVar18,CONCAT12(uVar17,
                                                  CONCAT11(uVar16,uVar15))))))),0),lVar8,lVar9,0);
    fVar14 = (float)*(double *)(param_1 + 0x150);
    lVar8 = *(long *)(param_1 + 0x130);
    if (fVar14 <= 0.0) {
      uVar7 = (*(undefined8 **)(lVar8 + 8))[1];
      uVar23 = (undefined1)uVar7;
      uVar24 = (undefined1)((ulong)uVar7 >> 8);
      uVar25 = (undefined1)((ulong)uVar7 >> 0x10);
      uVar26 = (undefined1)((ulong)uVar7 >> 0x18);
      uVar27 = (undefined1)((ulong)uVar7 >> 0x20);
      uVar28 = (undefined1)((ulong)uVar7 >> 0x28);
      uVar29 = (undefined1)((ulong)uVar7 >> 0x30);
      uVar30 = (undefined1)((ulong)uVar7 >> 0x38);
      uVar7 = **(undefined8 **)(lVar8 + 8);
      uVar15 = (undefined1)uVar7;
      uVar16 = (undefined1)((ulong)uVar7 >> 8);
      uVar17 = (undefined1)((ulong)uVar7 >> 0x10);
      uVar18 = (undefined1)((ulong)uVar7 >> 0x18);
      uVar19 = (undefined1)((ulong)uVar7 >> 0x20);
      uVar20 = (undefined1)((ulong)uVar7 >> 0x28);
      uVar21 = (undefined1)((ulong)uVar7 >> 0x30);
      uVar22 = (undefined1)((ulong)uVar7 >> 0x38);
    }
    else if (1.0 <= fVar14) {
      uVar7 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + -0x18);
      uVar23 = (undefined1)uVar7;
      uVar24 = (undefined1)((ulong)uVar7 >> 8);
      uVar25 = (undefined1)((ulong)uVar7 >> 0x10);
      uVar26 = (undefined1)((ulong)uVar7 >> 0x18);
      uVar27 = (undefined1)((ulong)uVar7 >> 0x20);
      uVar28 = (undefined1)((ulong)uVar7 >> 0x28);
      uVar29 = (undefined1)((ulong)uVar7 >> 0x30);
      uVar30 = (undefined1)((ulong)uVar7 >> 0x38);
      uVar7 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + -0x20);
      uVar15 = (undefined1)uVar7;
      uVar16 = (undefined1)((ulong)uVar7 >> 8);
      uVar17 = (undefined1)((ulong)uVar7 >> 0x10);
      uVar18 = (undefined1)((ulong)uVar7 >> 0x18);
      uVar19 = (undefined1)((ulong)uVar7 >> 0x20);
      uVar20 = (undefined1)((ulong)uVar7 >> 0x28);
      uVar21 = (undefined1)((ulong)uVar7 >> 0x30);
      uVar22 = (undefined1)((ulong)uVar7 >> 0x38);
    }
    else {
      FUN_01f619a4(SUB81(*(double *)(lVar8 + 0x80) * (double)fVar14,0));
      uVar15 = extraout_b0;
      uVar16 = extraout_var;
      uVar17 = extraout_var_01;
      uVar18 = extraout_var_03;
      uVar19 = extraout_var_05;
      uVar20 = extraout_var_06;
      uVar21 = extraout_var_07;
      uVar22 = extraout_var_08;
      uVar23 = extraout_var_09;
      uVar24 = extraout_var_10;
      uVar25 = extraout_var_11;
      uVar26 = extraout_var_12;
      uVar27 = extraout_var_13;
      uVar28 = extraout_var_14;
      uVar29 = extraout_var_15;
      uVar30 = extraout_var_16;
    }
    local_80 = local_70._0_4_;
    fStack_7c = local_70._4_4_;
    fStack_78 = local_70._8_4_;
    fStack_74 = local_70._12_4_;
    local_80 = local_80 - (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)));
    fStack_7c = fStack_7c - (float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19)));
    fStack_78 = fStack_78 - (float)CONCAT13(uVar26,CONCAT12(uVar25,CONCAT11(uVar24,uVar23)));
    fStack_74 = fStack_74 - (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
    fVar14 = local_80 * local_80;
    fVar13 = fStack_7c * fStack_7c;
    uVar15 = (undefined1)((uint)fVar13 >> 8);
    uVar16 = (undefined1)((uint)fVar13 >> 0x10);
    uVar17 = (undefined1)((uint)fVar13 >> 0x18);
    fVar12 = fStack_78 * fStack_78;
    uVar18 = (undefined1)((uint)fVar12 >> 8);
    uVar19 = (undefined1)((uint)fVar12 >> 0x10);
    uVar20 = (undefined1)((uint)fVar12 >> 0x18);
    fVar31 = fStack_74 * fStack_74;
    uVar21 = (undefined1)((uint)fVar31 >> 8);
    uVar22 = (undefined1)((uint)fVar31 >> 0x10);
    uVar23 = (undefined1)((uint)fVar31 >> 0x18);
    auVar35[4] = SUB41(fVar13,0);
    auVar35._0_4_ = fVar14;
    auVar35[5] = uVar15;
    auVar35[6] = uVar16;
    auVar35[7] = uVar17;
    auVar35[8] = SUB41(fVar12,0);
    auVar35[9] = uVar18;
    auVar35[10] = uVar19;
    auVar35[0xb] = uVar20;
    auVar35[0xc] = SUB41(fVar31,0);
    auVar35[0xd] = uVar21;
    auVar35[0xe] = uVar22;
    auVar35[0xf] = uVar23;
    auVar46[4] = SUB41(fVar13,0);
    auVar46._0_4_ = fVar14;
    auVar46[5] = uVar15;
    auVar46[6] = uVar16;
    auVar46[7] = uVar17;
    auVar46[8] = SUB41(fVar12,0);
    auVar46[9] = uVar18;
    auVar46[10] = uVar19;
    auVar46[0xb] = uVar20;
    auVar46[0xc] = SUB41(fVar31,0);
    auVar46[0xd] = uVar21;
    auVar46[0xe] = uVar22;
    auVar46[0xf] = uVar23;
    auVar35 = NEON_ext(auVar35,auVar46,8,1);
    fVar14 = auVar35._0_4_ + fVar14;
    fVar13 = auVar35._4_4_ + fVar13;
    fVar12 = fVar14 + fVar13;
    fVar14 = fVar14 + fVar13;
    uVar15 = SUB41(fVar14,0);
    uVar16 = (undefined1)((uint)fVar14 >> 8);
    uVar17 = (undefined1)((uint)fVar14 >> 0x10);
    uVar18 = (undefined1)((uint)fVar14 >> 0x18);
    if (fVar12 == 0.0) {
      uVar15 = 0;
      uVar16 = 0;
      uVar17 = 0;
      uVar18 = 0;
    }
    else {
      fVar31 = fStack_78 * fStack_78 + local_80 * local_80;
      fVar13 = fVar31 + 0.0;
      fVar31 = fVar31 + 0.0;
      auVar36._8_8_ = CONCAT44(fVar31,fVar13);
      auVar36._0_8_ = CONCAT44(fVar31,fVar13);
      auVar35 = NEON_frsqrte(auVar36,4);
      auVar45._0_4_ = auVar35._0_4_ * fVar13;
      auVar45._4_4_ = auVar35._4_4_ * fVar31;
      auVar45._8_4_ = auVar35._8_4_ * fVar13;
      auVar45._12_4_ = auVar35._12_4_ * fVar31;
      auVar46 = NEON_frsqrts(auVar35,auVar45,4);
      auVar41._0_4_ = auVar35._0_4_ * auVar46._0_4_;
      auVar41._4_4_ = auVar35._4_4_ * auVar46._4_4_;
      auVar41._8_4_ = auVar35._8_4_ * auVar46._8_4_;
      auVar41._12_4_ = auVar35._12_4_ * auVar46._12_4_;
      auVar47._0_4_ = fVar13 * auVar41._0_4_;
      auVar47._4_4_ = fVar31 * auVar41._4_4_;
      auVar47._8_4_ = fVar13 * auVar41._8_4_;
      auVar47._12_4_ = fVar31 * auVar41._12_4_;
      iVar32 = -(uint)(fVar13 == 0.0);
      iVar38 = -(uint)(fVar31 == 0.0);
      iVar39 = -(uint)(fVar13 == 0.0);
      iVar40 = -(uint)(fVar31 == 0.0);
      auVar35 = NEON_frsqrts(auVar41,auVar47,4);
      fVar13 = local_80 * auVar41._0_4_ * auVar35._0_4_;
      fVar31 = auVar41._4_4_ * auVar35._4_4_ * 0.0;
      fVar42 = fStack_78 * auVar41._8_4_ * auVar35._8_4_;
      fVar43 = auVar41._12_4_ * auVar35._12_4_ * 0.0;
      fVar13 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                               CONCAT12((byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar13 >> 8) &
                                                  ~(byte)((uint)iVar32 >> 8),
                                                  SUB41(fVar13,0) & ~(byte)iVar32)));
      auVar34._0_8_ =
           CONCAT17((byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18),
                    CONCAT16((byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10),
                             CONCAT15((byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar38 >> 8),
                                      CONCAT14(SUB41(fVar31,0) & ~(byte)iVar38,fVar13))));
      auVar34[8] = SUB41(fVar42,0) & ~(byte)iVar39;
      auVar34[9] = (byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar39 >> 8);
      auVar34[10] = (byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar39 >> 0x10);
      auVar34[0xb] = (byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18);
      auVar37[0xc] = SUB41(fVar43,0) & ~(byte)iVar40;
      auVar37._0_12_ = auVar34;
      auVar37[0xd] = (byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar40 >> 8);
      auVar37[0xe] = (byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10);
      auVar37[0xf] = (byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18);
      auVar1[4] = uVar15;
      auVar1._0_4_ = fVar12;
      auVar1[5] = uVar16;
      auVar1[6] = uVar17;
      auVar1[7] = uVar18;
      auVar1[8] = SUB41(fVar12,0);
      auVar1[9] = (char)((uint)fVar12 >> 8);
      auVar1[10] = (char)((uint)fVar12 >> 0x10);
      auVar1[0xb] = (char)((uint)fVar12 >> 0x18);
      auVar1[0xc] = uVar15;
      auVar1[0xd] = uVar16;
      auVar1[0xe] = uVar17;
      auVar1[0xf] = uVar18;
      auVar35 = NEON_frsqrte(auVar1,4);
      auVar48._0_4_ = fVar12 * auVar35._0_4_;
      auVar48._4_4_ = fVar14 * auVar35._4_4_;
      auVar48._8_4_ = fVar12 * auVar35._8_4_;
      uVar4 = (undefined2)(CONCAT15(uVar16,CONCAT14(uVar15,fVar12)) >> 0x20);
      auVar48._12_4_ = (float)CONCAT13(uVar18,CONCAT12(uVar17,uVar4)) * auVar35._12_4_;
      auVar46 = NEON_frsqrts(auVar35,auVar48,4);
      auVar44._0_4_ = auVar35._0_4_ * auVar46._0_4_;
      auVar44._4_4_ = auVar35._4_4_ * auVar46._4_4_;
      auVar44._8_4_ = auVar35._8_4_ * auVar46._8_4_;
      auVar44._12_4_ = auVar35._12_4_ * auVar46._12_4_;
      auVar49._0_4_ = fVar12 * auVar44._0_4_;
      auVar49._4_4_ = fVar14 * auVar44._4_4_;
      auVar49._8_4_ = fVar12 * auVar44._8_4_;
      auVar49._12_4_ = (float)CONCAT13(uVar18,CONCAT12(uVar17,uVar4)) * auVar44._12_4_;
      iVar32 = -(uint)(fVar12 == 0.0);
      iVar38 = -(uint)(fVar14 == 0.0);
      iVar39 = -(uint)(fVar12 == 0.0);
      iVar40 = -(uint)((float)CONCAT13(uVar18,CONCAT12(uVar17,uVar4)) == 0.0);
      auVar35 = NEON_frsqrts(auVar44,auVar49,4);
      local_80 = local_80 * auVar44._0_4_ * auVar35._0_4_;
      fVar14 = fStack_7c * auVar44._4_4_ * auVar35._4_4_;
      fStack_78 = fStack_78 * auVar44._8_4_ * auVar35._8_4_;
      fStack_74 = fStack_74 * auVar44._12_4_ * auVar35._12_4_;
      fVar13 = fVar13 * (float)CONCAT13((byte)((uint)local_80 >> 0x18) &
                                        ~(byte)((uint)iVar32 >> 0x18),
                                        CONCAT12((byte)((uint)local_80 >> 0x10) &
                                                 ~(byte)((uint)iVar32 >> 0x10),
                                                 CONCAT11((byte)((uint)local_80 >> 8) &
                                                          ~(byte)((uint)iVar32 >> 8),
                                                          SUB41(local_80,0) & ~(byte)iVar32)));
      fVar14 = (float)((ulong)auVar34._0_8_ >> 0x20) *
               (float)CONCAT13((byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18),
                               CONCAT12((byte)((uint)fVar14 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar14 >> 8) &
                                                  ~(byte)((uint)iVar38 >> 8),
                                                  SUB41(fVar14,0) & ~(byte)iVar38)));
      uVar15 = (undefined1)((uint)fVar14 >> 8);
      uVar16 = (undefined1)((uint)fVar14 >> 0x10);
      uVar17 = (undefined1)((uint)fVar14 >> 0x18);
      fVar12 = auVar34._8_4_ *
               (float)CONCAT13((byte)((uint)fStack_78 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18),
                               CONCAT12((byte)((uint)fStack_78 >> 0x10) &
                                        ~(byte)((uint)iVar39 >> 0x10),
                                        CONCAT11((byte)((uint)fStack_78 >> 8) &
                                                 ~(byte)((uint)iVar39 >> 8),
                                                 SUB41(fStack_78,0) & ~(byte)iVar39)));
      uVar18 = (undefined1)((uint)fVar12 >> 8);
      uVar19 = (undefined1)((uint)fVar12 >> 0x10);
      uVar20 = (undefined1)((uint)fVar12 >> 0x18);
      fVar31 = auVar37._12_4_ *
               (float)CONCAT13((byte)((uint)fStack_74 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                               CONCAT12((byte)((uint)fStack_74 >> 0x10) &
                                        ~(byte)((uint)iVar40 >> 0x10),
                                        CONCAT11((byte)((uint)fStack_74 >> 8) &
                                                 ~(byte)((uint)iVar40 >> 8),
                                                 SUB41(fStack_74,0) & ~(byte)iVar40)));
      uVar21 = (undefined1)((uint)fVar31 >> 8);
      uVar22 = (undefined1)((uint)fVar31 >> 0x10);
      uVar23 = (undefined1)((uint)fVar31 >> 0x18);
      auVar2[4] = SUB41(fVar14,0);
      auVar2._0_4_ = fVar13;
      auVar2[5] = uVar15;
      auVar2[6] = uVar16;
      auVar2[7] = uVar17;
      auVar2[8] = SUB41(fVar12,0);
      auVar2[9] = uVar18;
      auVar2[10] = uVar19;
      auVar2[0xb] = uVar20;
      auVar2[0xc] = SUB41(fVar31,0);
      auVar2[0xd] = uVar21;
      auVar2[0xe] = uVar22;
      auVar2[0xf] = uVar23;
      auVar3[4] = SUB41(fVar14,0);
      auVar3._0_4_ = fVar13;
      auVar3[5] = uVar15;
      auVar3[6] = uVar16;
      auVar3[7] = uVar17;
      auVar3[8] = SUB41(fVar12,0);
      auVar3[9] = uVar18;
      auVar3[10] = uVar19;
      auVar3[0xb] = uVar20;
      auVar3[0xc] = SUB41(fVar31,0);
      auVar3[0xd] = uVar21;
      auVar3[0xe] = uVar22;
      auVar3[0xf] = uVar23;
      auVar35 = NEON_ext(auVar2,auVar3,8,1);
      fVar14 = auVar35._0_4_ + fVar13 + auVar35._4_4_ + fVar14;
      uVar15 = 0;
      if ((-1.0 <= fVar14) && (uVar15 = SUB41(fVar14,0), 1.0 < fVar14)) {
        uVar15 = 0;
      }
      FUN_01009610(uVar15);
      fVar14 = -(float)CONCAT13(extraout_var_04,
                                CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_00)));
      uVar15 = SUB41(fVar14,0);
      uVar16 = (undefined1)((uint)fVar14 >> 8);
      uVar17 = (undefined1)((uint)fVar14 >> 0x10);
      uVar18 = (undefined1)((uint)fVar14 >> 0x18);
      if (0.0 <= fStack_7c) {
        uVar15 = extraout_b0_00;
        uVar16 = extraout_var_00;
        uVar17 = extraout_var_02;
        uVar18 = extraout_var_04;
      }
    }
  }
  return CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)));
}


