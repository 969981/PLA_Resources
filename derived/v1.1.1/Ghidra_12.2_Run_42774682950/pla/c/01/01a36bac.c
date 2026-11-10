/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a36bac; name: FUN_01a36bac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a36bac(long param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  float *pfVar11;
  float fVar12;
  undefined1 extraout_b0;
  undefined1 uVar13;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 uVar14;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 uVar15;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 uVar18;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 uVar19;
  undefined1 extraout_var_14;
  undefined1 uVar20;
  undefined1 extraout_var_15;
  undefined1 uVar21;
  float fVar22;
  float fVar23;
  int iVar24;
  undefined1 auVar25 [12];
  undefined1 auVar26 [12];
  float fVar33;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  int iVar34;
  int iVar35;
  int iVar36;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar37;
  float fVar41;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float local_74;
  float local_70 [16];
  
  pcVar1 = (char *)(param_1 + 0xde00);
  if ((*(char *)(param_1 + 0xe110) == '\0') && (*pcVar1 == '\0')) {
    bVar9 = true;
    if (*(int *)(param_1 + 0x3e4) != 1) {
      if (*(int *)(param_1 + 0x3e4) == 2) {
        bVar9 = *(float *)(param_1 + 0x54c) < 1.0;
      }
      else {
        bVar9 = false;
      }
    }
  }
  else {
    bVar9 = false;
  }
  if ((((*(char *)(param_1 + 0x3ea) == '\0') || (0 < *(int *)(param_1 + 0x3f4))) ||
      (*(char *)(param_1 + 0x3f9) != '\0')) || ((bVar9 || (*(int *)(param_1 + 0x3e4) == 2)))) {
    *(undefined4 *)(param_1 + 0x3ec) = 0;
    goto LAB_01a36c28;
  }
  fVar22 = 0.0;
  fVar47 = 0.0;
  if (*(char *)(param_1 + 0x380) != '\0') {
    fVar47 = *(float *)(param_1 + 900);
    fVar22 = *(float *)(param_1 + 0x388);
  }
  FUN_01a4b7e0(param_1);
  if (fVar22 * fVar22 + fVar47 * fVar47 <= 0.010000001) {
LAB_01a36d80:
    fVar47 = -*(float *)(param_1 + 0x454);
    uVar14 = SUB41(fVar47,0);
    uVar15 = (undefined1)((uint)fVar47 >> 8);
    uVar16 = (undefined1)((uint)fVar47 >> 0x10);
    uVar17 = (undefined1)((uint)fVar47 >> 0x18);
  }
  else {
    fVar12 = (float)CONCAT13(extraout_var_05,
                             CONCAT12(extraout_var_02,CONCAT11(extraout_var,extraout_b0))) -
             *(float *)(param_1 + 0x550);
    fVar23 = (float)CONCAT13(extraout_var_11,
                             CONCAT12(extraout_var_10,CONCAT11(extraout_var_09,extraout_var_08))) -
             *(float *)(param_1 + 0x558);
    fVar33 = (float)CONCAT13(extraout_var_15,
                             CONCAT12(extraout_var_14,CONCAT11(extraout_var_13,extraout_var_12))) -
             *(float *)(param_1 + 0x55c);
    fVar12 = fVar12 * fVar12;
    fVar23 = fVar23 * fVar23;
    uVar13 = (undefined1)((uint)fVar23 >> 8);
    uVar14 = (undefined1)((uint)fVar23 >> 0x10);
    uVar15 = (undefined1)((uint)fVar23 >> 0x18);
    fVar33 = fVar33 * fVar33;
    uVar16 = (undefined1)((uint)fVar33 >> 8);
    uVar17 = (undefined1)((uint)fVar33 >> 0x10);
    uVar18 = (undefined1)((uint)fVar33 >> 0x18);
    auVar27._4_4_ = 0;
    auVar27._0_4_ = fVar12;
    auVar27[8] = SUB41(fVar23,0);
    auVar27[9] = uVar13;
    auVar27[10] = uVar14;
    auVar27[0xb] = uVar15;
    auVar27[0xc] = SUB41(fVar33,0);
    auVar27[0xd] = uVar16;
    auVar27[0xe] = uVar17;
    auVar27[0xf] = uVar18;
    auVar43._4_4_ = 0;
    auVar43._0_4_ = fVar12;
    auVar43[8] = SUB41(fVar23,0);
    auVar43[9] = uVar13;
    auVar43[10] = uVar14;
    auVar43[0xb] = uVar15;
    auVar43[0xc] = SUB41(fVar33,0);
    auVar43[0xd] = uVar16;
    auVar43[0xe] = uVar17;
    auVar43[0xf] = uVar18;
    auVar27 = NEON_ext(auVar27,auVar43,8,1);
    if (auVar27._0_4_ + fVar12 + auVar27._4_4_ + 0.0 <= 0.010000001) goto LAB_01a36d80;
    fVar47 = -fVar47;
    auVar28._0_4_ = fVar47 * fVar47;
    auVar28._4_4_ = 0;
    auVar28._8_4_ = fVar22 * fVar22;
    auVar28._12_4_ = 0;
    auVar27 = NEON_ext(auVar28,auVar28,8,1);
    fVar23 = auVar27._0_4_ + auVar28._0_4_;
    fVar33 = auVar27._4_4_ + 0.0;
    fVar12 = fVar23 + fVar33;
    fVar23 = fVar23 + fVar33;
    if (fVar12 == 0.0) {
      uVar13 = 0;
      uVar14 = 0;
      uVar15 = 0;
      uVar16 = 0;
    }
    else {
      auVar29._8_8_ = CONCAT44(fVar23,fVar12);
      auVar29._0_8_ = CONCAT44(fVar23,fVar12);
      auVar27 = NEON_frsqrte(auVar29,4);
      auVar42._0_4_ = auVar27._0_4_ * fVar12;
      auVar42._4_4_ = auVar27._4_4_ * fVar23;
      auVar42._8_4_ = auVar27._8_4_ * fVar12;
      auVar42._12_4_ = auVar27._12_4_ * fVar23;
      auVar43 = NEON_frsqrts(auVar27,auVar42,4);
      auVar38._0_4_ = auVar27._0_4_ * auVar43._0_4_;
      auVar38._4_4_ = auVar27._4_4_ * auVar43._4_4_;
      auVar38._8_4_ = auVar27._8_4_ * auVar43._8_4_;
      auVar38._12_4_ = auVar27._12_4_ * auVar43._12_4_;
      auVar44._0_4_ = fVar12 * auVar38._0_4_;
      auVar44._4_4_ = fVar23 * auVar38._4_4_;
      auVar44._8_4_ = fVar12 * auVar38._8_4_;
      auVar44._12_4_ = fVar23 * auVar38._12_4_;
      iVar24 = -(uint)(fVar12 == 0.0);
      iVar34 = -(uint)(fVar23 == 0.0);
      iVar35 = -(uint)(fVar12 == 0.0);
      iVar36 = -(uint)(fVar23 == 0.0);
      auVar27 = NEON_frsqrts(auVar38,auVar44,4);
      fVar47 = fVar47 * auVar38._0_4_ * auVar27._0_4_;
      fVar12 = auVar38._4_4_ * auVar27._4_4_ * 0.0;
      fVar22 = fVar22 * auVar38._8_4_ * auVar27._8_4_;
      fVar23 = auVar38._12_4_ * auVar27._12_4_ * 0.0;
      fVar33 = (float)CONCAT13((byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                               CONCAT12((byte)((uint)fVar47 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar47 >> 8) &
                                                  ~(byte)((uint)iVar24 >> 8),
                                                  SUB41(fVar47,0) & ~(byte)iVar24)));
      auVar25._0_8_ =
           CONCAT17((byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18),
                    CONCAT16((byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10),
                             CONCAT15((byte)((uint)fVar12 >> 8) & ~(byte)((uint)iVar34 >> 8),
                                      CONCAT14(SUB41(fVar12,0) & ~(byte)iVar34,fVar33))));
      auVar25[8] = SUB41(fVar22,0) & ~(byte)iVar35;
      auVar25[9] = (byte)((uint)fVar22 >> 8) & ~(byte)((uint)iVar35 >> 8);
      auVar25[10] = (byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10);
      auVar25[0xb] = (byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18);
      auVar30[0xc] = SUB41(fVar23,0) & ~(byte)iVar36;
      auVar30._0_12_ = auVar25;
      auVar30[0xd] = (byte)((uint)fVar23 >> 8) & ~(byte)((uint)iVar36 >> 8);
      auVar30[0xe] = (byte)((uint)fVar23 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10);
      auVar30[0xf] = (byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18);
      fVar47 = fVar33 * (float)_DAT_03888d10;
      fVar22 = (float)((ulong)auVar25._0_8_ >> 0x20) * (float)((ulong)_DAT_03888d10 >> 0x20);
      uVar13 = (undefined1)((uint)fVar22 >> 8);
      uVar14 = (undefined1)((uint)fVar22 >> 0x10);
      uVar15 = (undefined1)((uint)fVar22 >> 0x18);
      fVar12 = auVar25._8_4_ * (float)_UNK_03888d18;
      uVar16 = (undefined1)((uint)fVar12 >> 8);
      uVar17 = (undefined1)((uint)fVar12 >> 0x10);
      uVar18 = (undefined1)((uint)fVar12 >> 0x18);
      fVar23 = auVar30._12_4_ * (float)((ulong)_UNK_03888d18 >> 0x20);
      uVar19 = (undefined1)((uint)fVar23 >> 8);
      uVar20 = (undefined1)((uint)fVar23 >> 0x10);
      uVar21 = (undefined1)((uint)fVar23 >> 0x18);
      auVar4[4] = SUB41(fVar22,0);
      auVar4._0_4_ = fVar47;
      auVar4[5] = uVar13;
      auVar4[6] = uVar14;
      auVar4[7] = uVar15;
      auVar4[8] = SUB41(fVar12,0);
      auVar4[9] = uVar16;
      auVar4[10] = uVar17;
      auVar4[0xb] = uVar18;
      auVar4[0xc] = SUB41(fVar23,0);
      auVar4[0xd] = uVar19;
      auVar4[0xe] = uVar20;
      auVar4[0xf] = uVar21;
      auVar5[4] = SUB41(fVar22,0);
      auVar5._0_4_ = fVar47;
      auVar5[5] = uVar13;
      auVar5[6] = uVar14;
      auVar5[7] = uVar15;
      auVar5[8] = SUB41(fVar12,0);
      auVar5[9] = uVar16;
      auVar5[10] = uVar17;
      auVar5[0xb] = uVar18;
      auVar5[0xc] = SUB41(fVar23,0);
      auVar5[0xd] = uVar19;
      auVar5[0xe] = uVar20;
      auVar5[0xf] = uVar21;
      auVar27 = NEON_ext(auVar4,auVar5,8,1);
      fVar47 = auVar27._0_4_ + fVar47 + auVar27._4_4_ + fVar22;
      uVar13 = 0;
      if ((-1.0 <= fVar47) && (uVar13 = SUB41(fVar47,0), 1.0 < fVar47)) {
        uVar13 = 0;
      }
      FUN_01009610(uVar13);
      fVar47 = -(float)CONCAT13(extraout_var_06,
                                CONCAT12(extraout_var_03,CONCAT11(extraout_var_00,extraout_b0_00)));
      uVar13 = SUB41(fVar47,0);
      uVar14 = (undefined1)((uint)fVar47 >> 8);
      uVar15 = (undefined1)((uint)fVar47 >> 0x10);
      uVar16 = (undefined1)((uint)fVar47 >> 0x18);
      if (0.0 <= fVar33) {
        uVar13 = extraout_b0_00;
        uVar14 = extraout_var_00;
        uVar15 = extraout_var_03;
        uVar16 = extraout_var_06;
      }
    }
    fVar47 = *(float *)(param_1 + 0x448);
    if ((((-fVar47 <= (float)CONCAT13(uVar16,CONCAT12(uVar15,CONCAT11(uVar14,uVar13)))) &&
         ((float)CONCAT13(uVar16,CONCAT12(uVar15,CONCAT11(uVar14,uVar13))) < fVar47 ||
          (float)CONCAT13(uVar16,CONCAT12(uVar15,CONCAT11(uVar14,uVar13))) == fVar47)) ||
        (fVar47 = *(float *)(param_1 + 0x444),
        (float)CONCAT13(uVar16,CONCAT12(uVar15,CONCAT11(uVar14,uVar13))) < -fVar47)) ||
       (fVar47 <= (float)CONCAT13(uVar16,CONCAT12(uVar15,CONCAT11(uVar14,uVar13))) &&
        (float)CONCAT13(uVar16,CONCAT12(uVar15,CONCAT11(uVar14,uVar13))) != fVar47))
    goto LAB_01a36d80;
    bVar9 = NAN((float)CONCAT13(uVar16,CONCAT12(uVar15,CONCAT11(uVar14,uVar13))));
    bVar10 = (float)CONCAT13(uVar16,CONCAT12(uVar15,CONCAT11(uVar14,uVar13))) < 0.0;
    if ((bVar9 || (float)CONCAT13(uVar16,CONCAT12(uVar15,CONCAT11(uVar14,uVar13))) != 0.0) &&
        (!bVar9 && bVar10) == bVar9) {
      uVar13 = 0;
      if ((*(char *)(param_1 + 0x3f0) != '\0') && (uVar13 = 0, *(char *)(param_1 + 0x3f1) != '\0'))
      {
        uVar13 = 0;
        *(undefined4 *)(param_1 + 0x3ec) = 0;
      }
    }
    else {
      if (bVar9 || !bVar10) goto LAB_01a36d80;
      if ((*(char *)(param_1 + 0x3f0) != '\0') && (*(char *)(param_1 + 0x3f1) == '\0')) {
        *(undefined4 *)(param_1 + 0x3ec) = 0;
      }
      uVar13 = 1;
    }
    uVar8 = *(undefined4 *)(param_1 + 0x450);
    uVar14 = (undefined1)uVar8;
    uVar15 = (undefined1)((uint)uVar8 >> 8);
    uVar16 = (undefined1)((uint)uVar8 >> 0x10);
    uVar17 = (undefined1)((uint)uVar8 >> 0x18);
    *(undefined1 *)(param_1 + 0x3f1) = uVar13;
    *(undefined1 *)(param_1 + 0x3f0) = 1;
  }
  fVar47 = (float)CONCAT13(uVar17,CONCAT12(uVar16,CONCAT11(uVar15,uVar14))) +
           *(float *)(param_1 + 0x3ec);
  *(float *)(param_1 + 0x3ec) = fVar47;
  local_74 = 1.0;
  local_70[0] = 0.0;
  pfVar11 = &local_74;
  if (fVar47 <= 1.0) {
    pfVar11 = (float *)(param_1 + 0x3ec);
  }
  if (fVar47 < 0.0) {
    pfVar11 = local_70;
  }
  fVar47 = *pfVar11;
  *(float *)(param_1 + 0x3ec) = fVar47;
  if (fVar47 <= 0.0) {
LAB_01a36c28:
    *(undefined1 *)(param_1 + 0x3f0) = 0;
    return;
  }
  if (((*(char *)(param_1 + 0xe110) != '\0') || (*pcVar1 != '\0')) ||
     ((*(int *)(param_1 + 0x3e4) != 1 &&
      ((*(int *)(param_1 + 0x3e4) != 2 || (1.0 <= *(float *)(param_1 + 0x54c))))))) {
    if (*(char *)(param_1 + 0x370) == '\0') {
      fVar47 = *(float *)(param_1 + 0x360);
      goto LAB_01a36df8;
    }
    fVar22 = *(float *)(param_1 + 0x350) - (float)*(undefined8 *)(param_1 + 0x340);
    fVar12 = *(float *)(param_1 + 0x358) - (float)*(undefined8 *)(param_1 + 0x348);
    fVar23 = *(float *)(param_1 + 0x35c) - (float)((ulong)*(undefined8 *)(param_1 + 0x348) >> 0x20);
    fVar47 = 0.0;
    auVar39._0_4_ = fVar22 * fVar22;
    auVar39._4_4_ = 0;
    auVar39._8_4_ = fVar12 * fVar12;
    auVar39._12_4_ = fVar23 * fVar23;
    auVar27 = NEON_ext(auVar39,auVar39,8,1);
    fVar37 = auVar27._0_4_ + auVar39._0_4_;
    fVar41 = auVar27._4_4_ + 0.0;
    fVar33 = fVar37 + fVar41;
    fVar37 = fVar37 + fVar41;
    if (fVar33 != 0.0) {
      auVar40._8_8_ = CONCAT44(fVar37,fVar33);
      auVar40._0_8_ = CONCAT44(fVar37,fVar33);
      auVar27 = NEON_frsqrte(auVar40,4);
      auVar45._0_4_ = auVar27._0_4_ * fVar33;
      auVar45._4_4_ = auVar27._4_4_ * fVar37;
      auVar45._8_4_ = auVar27._8_4_ * fVar33;
      auVar45._12_4_ = auVar27._12_4_ * fVar37;
      auVar43 = NEON_frsqrts(auVar27,auVar45,4);
      auVar31._0_4_ = auVar27._0_4_ * auVar43._0_4_;
      auVar31._4_4_ = auVar27._4_4_ * auVar43._4_4_;
      auVar31._8_4_ = auVar27._8_4_ * auVar43._8_4_;
      auVar31._12_4_ = auVar27._12_4_ * auVar43._12_4_;
      auVar46._0_4_ = fVar33 * auVar31._0_4_;
      auVar46._4_4_ = fVar37 * auVar31._4_4_;
      auVar46._8_4_ = fVar33 * auVar31._8_4_;
      auVar46._12_4_ = fVar37 * auVar31._12_4_;
      auVar27 = NEON_frsqrts(auVar31,auVar46,4);
      fVar22 = fVar22 * auVar31._0_4_ * auVar27._0_4_;
      fVar47 = auVar31._4_4_ * auVar27._4_4_ * 0.0;
      fVar12 = fVar12 * auVar31._8_4_ * auVar27._8_4_;
      fVar23 = fVar23 * auVar31._12_4_ * auVar27._12_4_;
      iVar24 = -(uint)(fVar33 == 0.0);
      iVar34 = -(uint)(fVar37 == 0.0);
      iVar35 = -(uint)(fVar33 == 0.0);
      iVar36 = -(uint)(fVar37 == 0.0);
      fVar33 = (float)CONCAT13((byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                               CONCAT12((byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar22 >> 8) &
                                                  ~(byte)((uint)iVar24 >> 8),
                                                  SUB41(fVar22,0) & ~(byte)iVar24)));
      auVar26._0_8_ =
           CONCAT17((byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18),
                    CONCAT16((byte)((uint)fVar47 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10),
                             CONCAT15((byte)((uint)fVar47 >> 8) & ~(byte)((uint)iVar34 >> 8),
                                      CONCAT14(SUB41(fVar47,0) & ~(byte)iVar34,fVar33))));
      auVar26[8] = SUB41(fVar12,0) & ~(byte)iVar35;
      auVar26[9] = (byte)((uint)fVar12 >> 8) & ~(byte)((uint)iVar35 >> 8);
      auVar26[10] = (byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10);
      auVar26[0xb] = (byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18);
      auVar32[0xc] = SUB41(fVar23,0) & ~(byte)iVar36;
      auVar32._0_12_ = auVar26;
      auVar32[0xd] = (byte)((uint)fVar23 >> 8) & ~(byte)((uint)iVar36 >> 8);
      auVar32[0xe] = (byte)((uint)fVar23 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10);
      auVar32[0xf] = (byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18);
      fVar47 = fVar33 * (float)_DAT_03888d10;
      fVar22 = (float)((ulong)auVar26._0_8_ >> 0x20) * (float)((ulong)_DAT_03888d10 >> 0x20);
      uVar13 = (undefined1)((uint)fVar22 >> 8);
      uVar14 = (undefined1)((uint)fVar22 >> 0x10);
      uVar15 = (undefined1)((uint)fVar22 >> 0x18);
      fVar12 = auVar26._8_4_ * (float)_UNK_03888d18;
      uVar16 = (undefined1)((uint)fVar12 >> 8);
      uVar17 = (undefined1)((uint)fVar12 >> 0x10);
      uVar18 = (undefined1)((uint)fVar12 >> 0x18);
      fVar23 = auVar32._12_4_ * (float)((ulong)_UNK_03888d18 >> 0x20);
      uVar19 = (undefined1)((uint)fVar23 >> 8);
      uVar20 = (undefined1)((uint)fVar23 >> 0x10);
      uVar21 = (undefined1)((uint)fVar23 >> 0x18);
      auVar6[4] = SUB41(fVar22,0);
      auVar6._0_4_ = fVar47;
      auVar6[5] = uVar13;
      auVar6[6] = uVar14;
      auVar6[7] = uVar15;
      auVar6[8] = SUB41(fVar12,0);
      auVar6[9] = uVar16;
      auVar6[10] = uVar17;
      auVar6[0xb] = uVar18;
      auVar6[0xc] = SUB41(fVar23,0);
      auVar6[0xd] = uVar19;
      auVar6[0xe] = uVar20;
      auVar6[0xf] = uVar21;
      auVar7[4] = SUB41(fVar22,0);
      auVar7._0_4_ = fVar47;
      auVar7[5] = uVar13;
      auVar7[6] = uVar14;
      auVar7[7] = uVar15;
      auVar7[8] = SUB41(fVar12,0);
      auVar7[9] = uVar16;
      auVar7[10] = uVar17;
      auVar7[0xb] = uVar18;
      auVar7[0xc] = SUB41(fVar23,0);
      auVar7[0xd] = uVar19;
      auVar7[0xe] = uVar20;
      auVar7[0xf] = uVar21;
      auVar27 = NEON_ext(auVar6,auVar7,8,1);
      fVar47 = auVar27._0_4_ + fVar47 + auVar27._4_4_ + fVar22;
      uVar13 = 0;
      if ((-1.0 <= fVar47) && (uVar13 = SUB41(fVar47,0), 1.0 < fVar47)) {
        uVar13 = 0;
      }
      FUN_01009610(uVar13);
      fVar47 = -(float)CONCAT13(extraout_var_07,
                                CONCAT12(extraout_var_04,CONCAT11(extraout_var_01,extraout_b0_01)));
      if (0.0 <= fVar33) {
        fVar47 = (float)CONCAT13(extraout_var_07,
                                 CONCAT12(extraout_var_04,CONCAT11(extraout_var_01,extraout_b0_01)))
        ;
      }
      goto LAB_01a36df8;
    }
LAB_01a36e20:
    if (*(char *)(param_1 + 0x3f0) != '\0') goto LAB_01a36e28;
LAB_01a36e40:
    cVar3 = *(char *)(param_1 + 0xe110);
  }
  else {
    fVar47 = *(float *)(param_1 + 0x4e0);
LAB_01a36df8:
    if (fVar47 < -3.1415927) {
      fVar22 = 6.2831855;
    }
    else {
      if (fVar47 <= 3.1415927) goto LAB_01a36e20;
      fVar22 = -6.2831855;
    }
    fVar47 = fVar47 + fVar22;
    if (*(char *)(param_1 + 0x3f0) == '\0') goto LAB_01a36e40;
LAB_01a36e28:
    fVar22 = *(float *)(param_1 + 0x44c) * *(float *)(param_1 + 0x3ec);
    if (*(char *)(param_1 + 0x3f1) != '\0') {
      fVar47 = fVar47 - fVar22;
      goto LAB_01a36e40;
    }
    fVar47 = fVar47 + fVar22;
    cVar3 = *(char *)(param_1 + 0xe110);
  }
  if ((cVar3 != '\0') || (*pcVar1 != '\0')) {
LAB_01a36e64:
    if (*(char *)(param_1 + 0x370) == '\0') {
      *(float *)(param_1 + 0x360) = fVar47;
      return;
    }
    return;
  }
  if (*(int *)(param_1 + 0x3e4) == 1) {
    uVar13 = (undefined1)*(undefined4 *)(param_1 + 0x54c);
  }
  else if ((*(int *)(param_1 + 0x3e4) != 2) ||
          (uVar13 = SUB41(*(float *)(param_1 + 0x54c),0), 1.0 <= *(float *)(param_1 + 0x54c)))
  goto LAB_01a36e64;
  *(float *)(param_1 + 0x4e0) = fVar47;
  FUN_018324c8(local_70,uVar13,param_1 + 0x480);
  if (*(char *)(param_1 + 0x370) != '\0') {
    return;
  }
  puVar2 = (undefined4 *)(param_1 + 0x520);
  if (1.0 <= *(float *)(param_1 + 0x54c)) {
    puVar2 = (undefined4 *)(param_1 + 0x4e0);
  }
  *(undefined4 *)(param_1 + 0x360) = *puVar2;
  return;
}


