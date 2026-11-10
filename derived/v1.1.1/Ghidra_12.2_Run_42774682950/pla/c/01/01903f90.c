/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01903f90; name: FUN_01903f90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01903f90(float *param_1,double param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined2 uVar4;
  int iVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auVar10 [16];
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 extraout_b0;
  undefined1 uVar21;
  undefined1 extraout_b0_00;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 uVar22;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 uVar23;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 extraout_var_05;
  undefined1 uVar26;
  undefined1 extraout_var_06;
  undefined1 uVar27;
  undefined1 extraout_var_07;
  undefined1 uVar28;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 uVar29;
  undefined1 extraout_var_10;
  undefined1 uVar30;
  undefined1 extraout_var_11;
  undefined1 uVar31;
  undefined1 extraout_var_12;
  undefined1 uVar32;
  undefined1 extraout_var_13;
  undefined1 uVar33;
  undefined1 extraout_var_14;
  undefined1 uVar34;
  undefined1 extraout_var_15;
  undefined1 uVar35;
  undefined1 extraout_var_16;
  undefined1 uVar36;
  undefined1 auVar37 [12];
  float fVar41;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar42;
  float fVar43;
  undefined1 auVar40 [16];
  int iVar44;
  int iVar46;
  int iVar47;
  undefined1 auVar45 [16];
  int iVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  param_1[0xd] = 0.0;
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[10] = 0.0;
  param_1[0xb] = 0.0;
  if (param_2 <= 0.0) {
    uVar14 = *(undefined8 *)(param_3 + 0x108);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_3 + 0xf8);
    *(undefined8 *)(param_1 + 10) = uVar14;
    uVar14 = *(undefined8 *)(param_3 + 0xf0);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_3 + 0xe8);
    *(undefined8 *)(param_1 + 4) = uVar14;
    *(undefined8 *)param_1 = *(undefined8 *)(param_3 + 0xe0);
    uVar14 = *(undefined8 *)(param_3 + 0x100);
    uVar15 = *(undefined8 *)(param_3 + 0x110);
  }
  else {
    if (param_2 < 1.0) {
      lVar16 = *(long *)(param_3 + 0x130);
      lVar13 = *(long *)(lVar16 + 8);
      lVar11 = *(long *)(lVar16 + 0x10) - lVar13;
      if (lVar11 == 0) {
LAB_01904250:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      dVar6 = *(double *)(lVar13 + 0x10) / *(double *)(lVar16 + 0x80);
      if (dVar6 < param_2) {
        if ((ulong)(lVar11 >> 5) < 2) goto LAB_01904250;
        lVar11 = param_3 + 0x80;
        lVar12 = param_3 + 0x20;
        dVar6 = (param_2 - dVar6) / (*(double *)(lVar13 + 0x30) / *(double *)(lVar16 + 0x80));
        uVar21 = SUB81(dVar6,0);
        uVar22 = (undefined1)((ulong)dVar6 >> 8);
        uVar23 = (undefined1)((ulong)dVar6 >> 0x10);
        uVar24 = (undefined1)((ulong)dVar6 >> 0x18);
        uVar25 = (undefined1)((ulong)dVar6 >> 0x20);
        uVar26 = (undefined1)((ulong)dVar6 >> 0x28);
        uVar27 = (undefined1)((ulong)dVar6 >> 0x30);
        uVar28 = (undefined1)((ulong)dVar6 >> 0x38);
      }
      else {
        dVar6 = param_2 / dVar6;
        uVar21 = SUB81(dVar6,0);
        uVar22 = (undefined1)((ulong)dVar6 >> 8);
        uVar23 = (undefined1)((ulong)dVar6 >> 0x10);
        uVar24 = (undefined1)((ulong)dVar6 >> 0x18);
        uVar25 = (undefined1)((ulong)dVar6 >> 0x20);
        uVar26 = (undefined1)((ulong)dVar6 >> 0x28);
        uVar27 = (undefined1)((ulong)dVar6 >> 0x30);
        uVar28 = (undefined1)((ulong)dVar6 >> 0x38);
        lVar11 = param_3 + 0xe0;
        lVar12 = param_3 + 0x80;
      }
      FUN_01832870(&local_70,
                   SUB41((float)(double)CONCAT17(uVar28,CONCAT16(uVar27,CONCAT15(uVar26,CONCAT14(
                                                  uVar25,CONCAT13(uVar24,CONCAT12(uVar23,CONCAT11(
                                                  uVar22,uVar21))))))),0),lVar11,lVar12,0);
      fVar19 = (float)param_2;
      *(undefined8 *)(param_1 + 4) = local_60;
      *(undefined8 *)(param_1 + 6) = uStack_58;
      *(undefined8 *)param_1 = local_70;
      *(undefined8 *)(param_1 + 2) = uStack_68;
      *(undefined8 *)(param_1 + 8) = local_50;
      *(undefined8 *)(param_1 + 10) = uStack_48;
      *(undefined8 *)(param_1 + 0xc) = local_40;
      lVar11 = *(long *)(param_3 + 0x130);
      if (fVar19 <= 0.0) {
        uVar14 = (*(undefined8 **)(lVar11 + 8))[1];
        uVar29 = (undefined1)uVar14;
        uVar30 = (undefined1)((ulong)uVar14 >> 8);
        uVar31 = (undefined1)((ulong)uVar14 >> 0x10);
        uVar32 = (undefined1)((ulong)uVar14 >> 0x18);
        uVar33 = (undefined1)((ulong)uVar14 >> 0x20);
        uVar34 = (undefined1)((ulong)uVar14 >> 0x28);
        uVar35 = (undefined1)((ulong)uVar14 >> 0x30);
        uVar36 = (undefined1)((ulong)uVar14 >> 0x38);
        uVar14 = **(undefined8 **)(lVar11 + 8);
        uVar21 = (undefined1)uVar14;
        uVar22 = (undefined1)((ulong)uVar14 >> 8);
        uVar23 = (undefined1)((ulong)uVar14 >> 0x10);
        uVar24 = (undefined1)((ulong)uVar14 >> 0x18);
        uVar25 = (undefined1)((ulong)uVar14 >> 0x20);
        uVar26 = (undefined1)((ulong)uVar14 >> 0x28);
        uVar27 = (undefined1)((ulong)uVar14 >> 0x30);
        uVar28 = (undefined1)((ulong)uVar14 >> 0x38);
      }
      else if (1.0 <= fVar19) {
        uVar14 = *(undefined8 *)(*(long *)(lVar11 + 0x10) + -0x18);
        uVar29 = (undefined1)uVar14;
        uVar30 = (undefined1)((ulong)uVar14 >> 8);
        uVar31 = (undefined1)((ulong)uVar14 >> 0x10);
        uVar32 = (undefined1)((ulong)uVar14 >> 0x18);
        uVar33 = (undefined1)((ulong)uVar14 >> 0x20);
        uVar34 = (undefined1)((ulong)uVar14 >> 0x28);
        uVar35 = (undefined1)((ulong)uVar14 >> 0x30);
        uVar36 = (undefined1)((ulong)uVar14 >> 0x38);
        uVar14 = *(undefined8 *)(*(long *)(lVar11 + 0x10) + -0x20);
        uVar21 = (undefined1)uVar14;
        uVar22 = (undefined1)((ulong)uVar14 >> 8);
        uVar23 = (undefined1)((ulong)uVar14 >> 0x10);
        uVar24 = (undefined1)((ulong)uVar14 >> 0x18);
        uVar25 = (undefined1)((ulong)uVar14 >> 0x20);
        uVar26 = (undefined1)((ulong)uVar14 >> 0x28);
        uVar27 = (undefined1)((ulong)uVar14 >> 0x30);
        uVar28 = (undefined1)((ulong)uVar14 >> 0x38);
      }
      else {
        FUN_01f619a4(SUB81(*(double *)(lVar11 + 0x80) * (double)fVar19,0));
        uVar21 = extraout_b0;
        uVar22 = extraout_var;
        uVar23 = extraout_var_01;
        uVar24 = extraout_var_03;
        uVar25 = extraout_var_05;
        uVar26 = extraout_var_06;
        uVar27 = extraout_var_07;
        uVar28 = extraout_var_08;
        uVar29 = extraout_var_09;
        uVar30 = extraout_var_10;
        uVar31 = extraout_var_11;
        uVar32 = extraout_var_12;
        uVar33 = extraout_var_13;
        uVar34 = extraout_var_14;
        uVar35 = extraout_var_15;
        uVar36 = extraout_var_16;
      }
      fVar54 = *param_1 - (float)CONCAT13(uVar24,CONCAT12(uVar23,CONCAT11(uVar22,uVar21)));
      fVar55 = param_1[1] - (float)CONCAT13(uVar28,CONCAT12(uVar27,CONCAT11(uVar26,uVar25)));
      fVar56 = param_1[2] - (float)CONCAT13(uVar32,CONCAT12(uVar31,CONCAT11(uVar30,uVar29)));
      fVar57 = param_1[3] - (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33)));
      fVar19 = fVar54 * fVar54;
      fVar20 = fVar55 * fVar55;
      uVar21 = (undefined1)((uint)fVar20 >> 8);
      uVar22 = (undefined1)((uint)fVar20 >> 0x10);
      uVar23 = (undefined1)((uint)fVar20 >> 0x18);
      fVar17 = fVar56 * fVar56;
      uVar24 = (undefined1)((uint)fVar17 >> 8);
      uVar25 = (undefined1)((uint)fVar17 >> 0x10);
      uVar26 = (undefined1)((uint)fVar17 >> 0x18);
      fVar18 = fVar57 * fVar57;
      uVar27 = (undefined1)((uint)fVar18 >> 8);
      uVar28 = (undefined1)((uint)fVar18 >> 0x10);
      uVar29 = (undefined1)((uint)fVar18 >> 0x18);
      auVar38[4] = SUB41(fVar20,0);
      auVar38._0_4_ = fVar19;
      auVar38[5] = uVar21;
      auVar38[6] = uVar22;
      auVar38[7] = uVar23;
      auVar38[8] = SUB41(fVar17,0);
      auVar38[9] = uVar24;
      auVar38[10] = uVar25;
      auVar38[0xb] = uVar26;
      auVar38[0xc] = SUB41(fVar18,0);
      auVar38[0xd] = uVar27;
      auVar38[0xe] = uVar28;
      auVar38[0xf] = uVar29;
      auVar50[4] = SUB41(fVar20,0);
      auVar50._0_4_ = fVar19;
      auVar50[5] = uVar21;
      auVar50[6] = uVar22;
      auVar50[7] = uVar23;
      auVar50[8] = SUB41(fVar17,0);
      auVar50[9] = uVar24;
      auVar50[10] = uVar25;
      auVar50[0xb] = uVar26;
      auVar50[0xc] = SUB41(fVar18,0);
      auVar50[0xd] = uVar27;
      auVar50[0xe] = uVar28;
      auVar50[0xf] = uVar29;
      auVar38 = NEON_ext(auVar38,auVar50,8,1);
      fVar19 = auVar38._0_4_ + fVar19;
      fVar20 = auVar38._4_4_ + fVar20;
      fVar17 = fVar19 + fVar20;
      fVar19 = fVar19 + fVar20;
      if (fVar17 == 0.0) {
        uVar21 = 0;
        uVar22 = 0;
        uVar23 = 0;
        uVar24 = 0;
      }
      else {
        fVar20 = fVar56 * fVar56 + fVar54 * fVar54;
        fVar18 = fVar20 + 0.0;
        fVar20 = fVar20 + 0.0;
        uVar21 = SUB41(fVar20,0);
        uVar22 = (undefined1)((uint)fVar20 >> 8);
        uVar23 = (undefined1)((uint)fVar20 >> 0x10);
        uVar24 = (undefined1)((uint)fVar20 >> 0x18);
        auVar1[4] = uVar21;
        auVar1._0_4_ = fVar18;
        auVar1[5] = uVar22;
        auVar1[6] = uVar23;
        auVar1[7] = uVar24;
        auVar1[8] = SUB41(fVar18,0);
        auVar1[9] = (char)((uint)fVar18 >> 8);
        auVar1[10] = (char)((uint)fVar18 >> 0x10);
        auVar1[0xb] = (char)((uint)fVar18 >> 0x18);
        auVar1[0xc] = uVar21;
        auVar1[0xd] = uVar22;
        auVar1[0xe] = uVar23;
        auVar1[0xf] = uVar24;
        auVar38 = NEON_frsqrte(auVar1,4);
        auVar49._0_4_ = auVar38._0_4_ * fVar18;
        auVar49._4_4_ = auVar38._4_4_ * fVar20;
        auVar49._8_4_ = auVar38._8_4_ * fVar18;
        uVar4 = (undefined2)(CONCAT15(uVar22,CONCAT14(uVar21,fVar18)) >> 0x20);
        auVar49._12_4_ = auVar38._12_4_ * (float)CONCAT13(uVar24,CONCAT12(uVar23,uVar4));
        auVar50 = NEON_frsqrts(auVar38,auVar49,4);
        auVar39._0_4_ = auVar38._0_4_ * auVar50._0_4_;
        auVar39._4_4_ = auVar38._4_4_ * auVar50._4_4_;
        auVar39._8_4_ = auVar38._8_4_ * auVar50._8_4_;
        auVar39._12_4_ = auVar38._12_4_ * auVar50._12_4_;
        auVar51._0_4_ = fVar18 * auVar39._0_4_;
        auVar51._4_4_ = fVar20 * auVar39._4_4_;
        auVar51._8_4_ = fVar18 * auVar39._8_4_;
        auVar51._12_4_ = (float)CONCAT13(uVar24,CONCAT12(uVar23,uVar4)) * auVar39._12_4_;
        iVar5 = -(uint)(fVar18 == 0.0);
        iVar7 = -(uint)(fVar20 == 0.0);
        iVar8 = -(uint)(fVar18 == 0.0);
        iVar9 = -(uint)((float)CONCAT13(uVar24,CONCAT12(uVar23,uVar4)) == 0.0);
        auVar38 = NEON_frsqrts(auVar39,auVar51,4);
        fVar20 = fVar54 * auVar39._0_4_ * auVar38._0_4_;
        fVar18 = auVar39._4_4_ * auVar38._4_4_ * 0.0;
        fVar42 = fVar56 * auVar39._8_4_ * auVar38._8_4_;
        fVar43 = auVar39._12_4_ * auVar38._12_4_ * 0.0;
        auVar10._4_4_ = fVar19;
        auVar10._0_4_ = fVar17;
        auVar10._8_4_ = fVar17;
        auVar10._12_4_ = fVar19;
        auVar38 = NEON_frsqrte(auVar10,4);
        auVar52._0_4_ = fVar17 * auVar38._0_4_;
        auVar52._4_4_ = fVar19 * auVar38._4_4_;
        auVar52._8_4_ = fVar17 * auVar38._8_4_;
        auVar52._12_4_ = fVar19 * auVar38._12_4_;
        auVar50 = NEON_frsqrts(auVar38,auVar52,4);
        auVar45._0_4_ = auVar38._0_4_ * auVar50._0_4_;
        auVar45._4_4_ = auVar38._4_4_ * auVar50._4_4_;
        auVar45._8_4_ = auVar38._8_4_ * auVar50._8_4_;
        auVar45._12_4_ = auVar38._12_4_ * auVar50._12_4_;
        auVar53._0_4_ = fVar17 * auVar45._0_4_;
        auVar53._4_4_ = fVar19 * auVar45._4_4_;
        auVar53._8_4_ = fVar17 * auVar45._8_4_;
        auVar53._12_4_ = fVar19 * auVar45._12_4_;
        auVar38 = NEON_frsqrts(auVar45,auVar53,4);
        fVar54 = fVar54 * auVar45._0_4_ * auVar38._0_4_;
        fVar41 = fVar55 * auVar45._4_4_ * auVar38._4_4_;
        fVar56 = fVar56 * auVar45._8_4_ * auVar38._8_4_;
        fVar57 = fVar57 * auVar45._12_4_ * auVar38._12_4_;
        iVar44 = -(uint)(fVar17 == 0.0);
        iVar46 = -(uint)(fVar19 == 0.0);
        iVar47 = -(uint)(fVar17 == 0.0);
        iVar48 = -(uint)(fVar19 == 0.0);
        fVar19 = (float)CONCAT13((byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar44 >> 0x18),
                                 CONCAT12((byte)((uint)fVar54 >> 0x10) &
                                          ~(byte)((uint)iVar44 >> 0x10),
                                          CONCAT11((byte)((uint)fVar54 >> 8) &
                                                   ~(byte)((uint)iVar44 >> 8),
                                                   SUB41(fVar54,0) & ~(byte)iVar44)));
        auVar37._0_8_ =
             CONCAT17((byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18),
                      CONCAT16((byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar46 >> 0x10),
                               CONCAT15((byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar46 >> 8),
                                        CONCAT14(SUB41(fVar41,0) & ~(byte)iVar46,fVar19))));
        auVar37[8] = SUB41(fVar56,0) & ~(byte)iVar47;
        auVar37[9] = (byte)((uint)fVar56 >> 8) & ~(byte)((uint)iVar47 >> 8);
        auVar37[10] = (byte)((uint)fVar56 >> 0x10) & ~(byte)((uint)iVar47 >> 0x10);
        auVar37[0xb] = (byte)((uint)fVar56 >> 0x18) & ~(byte)((uint)iVar47 >> 0x18);
        auVar40[0xc] = SUB41(fVar57,0) & ~(byte)iVar48;
        auVar40._0_12_ = auVar37;
        auVar40[0xd] = (byte)((uint)fVar57 >> 8) & ~(byte)((uint)iVar48 >> 8);
        auVar40[0xe] = (byte)((uint)fVar57 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10);
        auVar40[0xf] = (byte)((uint)fVar57 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18);
        fVar19 = (float)CONCAT13((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18),
                                 CONCAT12((byte)((uint)fVar20 >> 0x10) &
                                          ~(byte)((uint)iVar5 >> 0x10),
                                          CONCAT11((byte)((uint)fVar20 >> 8) &
                                                   ~(byte)((uint)iVar5 >> 8),
                                                   SUB41(fVar20,0) & ~(byte)iVar5))) * fVar19;
        fVar20 = (float)CONCAT13((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18),
                                 CONCAT12((byte)((uint)fVar18 >> 0x10) &
                                          ~(byte)((uint)iVar7 >> 0x10),
                                          CONCAT11((byte)((uint)fVar18 >> 8) &
                                                   ~(byte)((uint)iVar7 >> 8),
                                                   SUB41(fVar18,0) & ~(byte)iVar7))) *
                 (float)((ulong)auVar37._0_8_ >> 0x20);
        uVar21 = (undefined1)((uint)fVar20 >> 8);
        uVar22 = (undefined1)((uint)fVar20 >> 0x10);
        uVar23 = (undefined1)((uint)fVar20 >> 0x18);
        fVar18 = (float)CONCAT13((byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18),
                                 CONCAT12((byte)((uint)fVar42 >> 0x10) &
                                          ~(byte)((uint)iVar8 >> 0x10),
                                          CONCAT11((byte)((uint)fVar42 >> 8) &
                                                   ~(byte)((uint)iVar8 >> 8),
                                                   SUB41(fVar42,0) & ~(byte)iVar8))) * auVar37._8_4_
        ;
        uVar24 = (undefined1)((uint)fVar18 >> 8);
        uVar25 = (undefined1)((uint)fVar18 >> 0x10);
        uVar26 = (undefined1)((uint)fVar18 >> 0x18);
        fVar54 = (float)CONCAT13((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18),
                                 CONCAT12((byte)((uint)fVar43 >> 0x10) &
                                          ~(byte)((uint)iVar9 >> 0x10),
                                          CONCAT11((byte)((uint)fVar43 >> 8) &
                                                   ~(byte)((uint)iVar9 >> 8),
                                                   SUB41(fVar43,0) & ~(byte)iVar9))) *
                 auVar40._12_4_;
        uVar27 = (undefined1)((uint)fVar54 >> 8);
        uVar28 = (undefined1)((uint)fVar54 >> 0x10);
        uVar29 = (undefined1)((uint)fVar54 >> 0x18);
        auVar2[4] = SUB41(fVar20,0);
        auVar2._0_4_ = fVar19;
        auVar2[5] = uVar21;
        auVar2[6] = uVar22;
        auVar2[7] = uVar23;
        auVar2[8] = SUB41(fVar18,0);
        auVar2[9] = uVar24;
        auVar2[10] = uVar25;
        auVar2[0xb] = uVar26;
        auVar2[0xc] = SUB41(fVar54,0);
        auVar2[0xd] = uVar27;
        auVar2[0xe] = uVar28;
        auVar2[0xf] = uVar29;
        auVar3[4] = SUB41(fVar20,0);
        auVar3._0_4_ = fVar19;
        auVar3[5] = uVar21;
        auVar3[6] = uVar22;
        auVar3[7] = uVar23;
        auVar3[8] = SUB41(fVar18,0);
        auVar3[9] = uVar24;
        auVar3[10] = uVar25;
        auVar3[0xb] = uVar26;
        auVar3[0xc] = SUB41(fVar54,0);
        auVar3[0xd] = uVar27;
        auVar3[0xe] = uVar28;
        auVar3[0xf] = uVar29;
        auVar38 = NEON_ext(auVar2,auVar3,8,1);
        fVar19 = auVar38._0_4_ + fVar19 + auVar38._4_4_ + fVar20;
        uVar21 = 0;
        if ((-1.0 <= fVar19) && (uVar21 = SUB41(fVar19,0), 1.0 < fVar19)) {
          uVar21 = 0;
        }
        FUN_01009610(uVar21);
        fVar19 = -(float)CONCAT13(extraout_var_04,
                                  CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_00))
                                 );
        uVar21 = SUB41(fVar19,0);
        uVar22 = (undefined1)((uint)fVar19 >> 8);
        uVar23 = (undefined1)((uint)fVar19 >> 0x10);
        uVar24 = (undefined1)((uint)fVar19 >> 0x18);
        if (0.0 <= fVar55) {
          uVar21 = extraout_b0_00;
          uVar22 = extraout_var_00;
          uVar23 = extraout_var_02;
          uVar24 = extraout_var_04;
        }
      }
      param_1[9] = (float)CONCAT13(uVar24,CONCAT12(uVar23,CONCAT11(uVar22,uVar21)));
      fVar17 = SQRT(fVar17);
      fVar18 = (float)_DAT_03888d10;
      fVar19 = (float)((ulong)_DAT_03888d10 >> 0x20) * fVar17;
      fVar20 = (float)((ulong)_UNK_03888d18 >> 0x20) * fVar17;
      *(ulong *)(param_1 + 6) =
           CONCAT17((char)((uint)fVar20 >> 0x18),
                    CONCAT16((char)((uint)fVar20 >> 0x10),
                             CONCAT15((char)((uint)fVar20 >> 8),
                                      CONCAT14(SUB41(fVar20,0),(float)_UNK_03888d18 * fVar17))));
      *(ulong *)(param_1 + 4) =
           CONCAT17((char)((uint)fVar19 >> 0x18),
                    CONCAT16((char)((uint)fVar19 >> 0x10),
                             CONCAT15((char)((uint)fVar19 >> 8),
                                      CONCAT14(SUB41(fVar19,0),fVar18 * fVar17))));
      goto LAB_01904174;
    }
    uVar14 = *(undefined8 *)(param_3 + 0x48);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_3 + 0x38);
    *(undefined8 *)(param_1 + 10) = uVar14;
    uVar14 = *(undefined8 *)(param_3 + 0x30);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_3 + 0x28);
    *(undefined8 *)(param_1 + 4) = uVar14;
    *(undefined8 *)param_1 = *(undefined8 *)(param_3 + 0x20);
    uVar14 = *(undefined8 *)(param_3 + 0x40);
    uVar15 = *(undefined8 *)(param_3 + 0x50);
  }
  *(undefined8 *)(param_1 + 0xc) = uVar15;
  *(undefined8 *)(param_1 + 8) = uVar14;
LAB_01904174:
  fVar20 = *(float *)(param_3 + 0x120);
  fVar19 = (float)((ulong)*(undefined8 *)param_1 >> 0x20) + *(float *)(param_3 + 0x124);
  fVar17 = (float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) + *(float *)(param_3 + 300);
  *(ulong *)(param_1 + 2) =
       CONCAT17((char)((uint)fVar17 >> 0x18),
                CONCAT16((char)((uint)fVar17 >> 0x10),
                         CONCAT15((char)((uint)fVar17 >> 8),
                                  CONCAT14(SUB41(fVar17,0),
                                           (float)*(undefined8 *)(param_1 + 2) +
                                           *(float *)(param_3 + 0x128)))));
  *(ulong *)param_1 =
       CONCAT17((char)((uint)fVar19 >> 0x18),
                CONCAT16((char)((uint)fVar19 >> 0x10),
                         CONCAT15((char)((uint)fVar19 >> 8),
                                  CONCAT14(SUB41(fVar19,0),(float)*(undefined8 *)param_1 + fVar20)))
               );
  return;
}


