/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b8b77c; name: FUN_00b8b77c
 */


bool FUN_00b8b77c(float param_1,float param_2,undefined8 *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined2 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  float fVar28;
  int iVar29;
  int iVar34;
  undefined8 uVar30;
  int iVar35;
  undefined1 auVar31 [16];
  float fVar33;
  undefined1 auVar32 [16];
  int iVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined8 uVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  
  fVar17 = (float)*param_3 - *param_4;
  fVar33 = (float)param_3[1] - param_4[2];
  fVar1 = (float)((ulong)param_3[1] >> 0x20) - param_4[3];
  fVar18 = fVar17 * fVar17;
  fVar28 = fVar33 * fVar33;
  uVar19 = (undefined1)((uint)fVar28 >> 8);
  uVar20 = (undefined1)((uint)fVar28 >> 0x10);
  uVar21 = (undefined1)((uint)fVar28 >> 0x18);
  fVar16 = fVar1 * fVar1;
  uVar22 = (undefined1)((uint)fVar16 >> 8);
  uVar23 = (undefined1)((uint)fVar16 >> 0x10);
  uVar24 = (undefined1)((uint)fVar16 >> 0x18);
  auVar3._4_4_ = 0;
  auVar3._0_4_ = fVar18;
  auVar3[8] = SUB41(fVar28,0);
  auVar3[9] = uVar19;
  auVar3[10] = uVar20;
  auVar3[0xb] = uVar21;
  auVar3[0xc] = SUB41(fVar16,0);
  auVar3[0xd] = uVar22;
  auVar3[0xe] = uVar23;
  auVar3[0xf] = uVar24;
  auVar4._4_4_ = 0;
  auVar4._0_4_ = fVar18;
  auVar4[8] = SUB41(fVar28,0);
  auVar4[9] = uVar19;
  auVar4[10] = uVar20;
  auVar4[0xb] = uVar21;
  auVar4[0xc] = SUB41(fVar16,0);
  auVar4[0xd] = uVar22;
  auVar4[0xe] = uVar23;
  auVar4[0xf] = uVar24;
  auVar37 = NEON_ext(auVar3,auVar4,8,1);
  fVar18 = auVar37._0_4_ + fVar18;
  fVar28 = auVar37._4_4_ + 0.0;
  fVar16 = fVar18 + fVar28;
  fVar18 = fVar18 + fVar28;
  uVar19 = SUB41(fVar18,0);
  uVar20 = (undefined1)((uint)fVar18 >> 8);
  uVar21 = (undefined1)((uint)fVar18 >> 0x10);
  uVar22 = (undefined1)((uint)fVar18 >> 0x18);
  auVar5[4] = uVar19;
  auVar5._0_4_ = fVar16;
  auVar5[5] = uVar20;
  auVar5[6] = uVar21;
  auVar5[7] = uVar22;
  auVar5[8] = SUB41(fVar16,0);
  auVar5[9] = (char)((uint)fVar16 >> 8);
  auVar5[10] = (char)((uint)fVar16 >> 0x10);
  auVar5[0xb] = (char)((uint)fVar16 >> 0x18);
  auVar5[0xc] = uVar19;
  auVar5[0xd] = uVar20;
  auVar5[0xe] = uVar21;
  auVar5[0xf] = uVar22;
  auVar37 = NEON_frsqrte(auVar5,4);
  auVar40._0_4_ = auVar37._0_4_ * fVar16;
  auVar40._4_4_ = auVar37._4_4_ * fVar18;
  auVar40._8_4_ = auVar37._8_4_ * fVar16;
  uVar6 = (undefined2)(CONCAT15(uVar20,CONCAT14(uVar19,fVar16)) >> 0x20);
  auVar40._12_4_ = auVar37._12_4_ * (float)CONCAT13(uVar22,CONCAT12(uVar21,uVar6));
  auVar41 = NEON_frsqrts(auVar37,auVar40,4);
  auVar38._0_4_ = auVar37._0_4_ * auVar41._0_4_;
  auVar38._4_4_ = auVar37._4_4_ * auVar41._4_4_;
  auVar38._8_4_ = auVar37._8_4_ * auVar41._8_4_;
  auVar38._12_4_ = auVar37._12_4_ * auVar41._12_4_;
  auVar42._0_4_ = fVar16 * auVar38._0_4_;
  auVar42._4_4_ = fVar18 * auVar38._4_4_;
  auVar42._8_4_ = fVar16 * auVar38._8_4_;
  auVar42._12_4_ = (float)CONCAT13(uVar22,CONCAT12(uVar21,uVar6)) * auVar38._12_4_;
  iVar29 = -(uint)(fVar16 == 0.0);
  iVar34 = -(uint)(fVar18 == 0.0);
  iVar35 = -(uint)(fVar16 == 0.0);
  iVar36 = -(uint)((float)CONCAT13(uVar22,CONCAT12(uVar21,uVar6)) == 0.0);
  auVar37 = NEON_frsqrts(auVar38,auVar42,4);
  fVar17 = fVar17 * auVar38._0_4_ * auVar37._0_4_;
  fVar28 = auVar38._4_4_ * auVar37._4_4_ * 0.0;
  fVar33 = fVar33 * auVar38._8_4_ * auVar37._8_4_;
  fVar1 = fVar1 * auVar38._12_4_ * auVar37._12_4_;
  fVar18 = *param_5;
  fVar16 = param_5[2];
  fVar2 = param_5[3];
  bVar47 = SUB41(fVar17,0) & ~(byte)iVar29;
  bVar48 = (byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar29 >> 8);
  bVar49 = (byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10);
  bVar50 = (byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18);
  bVar51 = SUB41(fVar28,0) & ~(byte)iVar34;
  bVar52 = (byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar34 >> 8);
  bVar53 = (byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10);
  bVar54 = (byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18);
  bVar55 = SUB41(fVar33,0) & ~(byte)iVar35;
  bVar56 = (byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar35 >> 8);
  bVar57 = (byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10);
  bVar58 = (byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18);
  bVar59 = SUB41(fVar1,0) & ~(byte)iVar36;
  bVar60 = (byte)((uint)fVar1 >> 8) & ~(byte)((uint)iVar36 >> 8);
  bVar61 = (byte)((uint)fVar1 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10);
  bVar62 = (byte)((uint)fVar1 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18);
  auVar31._0_4_ = fVar18 * fVar18;
  auVar31._4_4_ = 0;
  auVar31._8_4_ = fVar16 * fVar16;
  auVar31._12_4_ = fVar2 * fVar2;
  auVar37 = NEON_ext(auVar31,auVar31,8,1);
  fVar28 = auVar37._0_4_ + auVar31._0_4_;
  fVar33 = auVar37._4_4_ + 0.0;
  fVar17 = fVar28 + fVar33;
  fVar28 = fVar28 + fVar33;
  auVar32._8_8_ = CONCAT44(fVar28,fVar17);
  auVar32._0_8_ = CONCAT44(fVar28,fVar17);
  auVar37 = NEON_frsqrte(auVar32,4);
  auVar44._0_4_ = auVar37._0_4_ * fVar17;
  auVar44._4_4_ = auVar37._4_4_ * fVar28;
  auVar44._8_4_ = auVar37._8_4_ * fVar17;
  auVar44._12_4_ = auVar37._12_4_ * fVar28;
  auVar41 = NEON_frsqrts(auVar37,auVar44,4);
  auVar43._0_4_ = auVar37._0_4_ * auVar41._0_4_;
  auVar43._4_4_ = auVar37._4_4_ * auVar41._4_4_;
  auVar43._8_4_ = auVar37._8_4_ * auVar41._8_4_;
  auVar43._12_4_ = auVar37._12_4_ * auVar41._12_4_;
  auVar45._0_4_ = fVar17 * auVar43._0_4_;
  auVar45._4_4_ = fVar28 * auVar43._4_4_;
  auVar45._8_4_ = fVar17 * auVar43._8_4_;
  auVar45._12_4_ = fVar28 * auVar43._12_4_;
  iVar29 = -(uint)(fVar17 == 0.0);
  iVar34 = -(uint)(fVar28 == 0.0);
  iVar35 = -(uint)(fVar17 == 0.0);
  iVar36 = -(uint)(fVar28 == 0.0);
  auVar37 = NEON_frsqrts(auVar43,auVar45,4);
  fVar18 = fVar18 * auVar43._0_4_ * auVar37._0_4_;
  fVar17 = auVar43._4_4_ * auVar37._4_4_ * 0.0;
  fVar16 = fVar16 * auVar43._8_4_ * auVar37._8_4_;
  fVar2 = fVar2 * auVar43._12_4_ * auVar37._12_4_;
  bVar63 = SUB41(fVar18,0) & ~(byte)iVar29;
  bVar64 = (byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar29 >> 8);
  bVar65 = (byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10);
  bVar66 = (byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18);
  bVar67 = SUB41(fVar17,0) & ~(byte)iVar34;
  bVar68 = (byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar34 >> 8);
  bVar69 = (byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10);
  bVar70 = (byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18);
  bVar71 = SUB41(fVar16,0) & ~(byte)iVar35;
  bVar72 = (byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar35 >> 8);
  bVar73 = (byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10);
  bVar74 = (byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18);
  bVar75 = SUB41(fVar2,0) & ~(byte)iVar36;
  bVar76 = (byte)((uint)fVar2 >> 8) & ~(byte)((uint)iVar36 >> 8);
  bVar77 = (byte)((uint)fVar2 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10);
  bVar78 = (byte)((uint)fVar2 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18);
  fVar17 = (float)CONCAT13(bVar50,CONCAT12(bVar49,CONCAT11(bVar48,bVar47))) *
           (float)CONCAT13(bVar66,CONCAT12(bVar65,CONCAT11(bVar64,bVar63)));
  fVar18 = (float)CONCAT13(bVar54,CONCAT12(bVar53,CONCAT11(bVar52,bVar51))) *
           (float)CONCAT13(bVar70,CONCAT12(bVar69,CONCAT11(bVar68,bVar67)));
  uVar19 = (undefined1)((uint)fVar18 >> 8);
  uVar20 = (undefined1)((uint)fVar18 >> 0x10);
  uVar21 = (undefined1)((uint)fVar18 >> 0x18);
  fVar28 = (float)CONCAT13(bVar58,CONCAT12(bVar57,CONCAT11(bVar56,bVar55))) *
           (float)CONCAT13(bVar74,CONCAT12(bVar73,CONCAT11(bVar72,bVar71)));
  uVar22 = (undefined1)((uint)fVar28 >> 8);
  uVar23 = (undefined1)((uint)fVar28 >> 0x10);
  uVar24 = (undefined1)((uint)fVar28 >> 0x18);
  fVar33 = (float)CONCAT13(bVar62,CONCAT12(bVar61,CONCAT11(bVar60,bVar59))) *
           (float)CONCAT13(bVar78,CONCAT12(bVar77,CONCAT11(bVar76,bVar75)));
  uVar25 = (undefined1)((uint)fVar33 >> 8);
  uVar26 = (undefined1)((uint)fVar33 >> 0x10);
  uVar27 = (undefined1)((uint)fVar33 >> 0x18);
  auVar37[4] = SUB41(fVar18,0);
  auVar37._0_4_ = fVar17;
  auVar37[5] = uVar19;
  auVar37[6] = uVar20;
  auVar37[7] = uVar21;
  auVar37[8] = SUB41(fVar28,0);
  auVar37[9] = uVar22;
  auVar37[10] = uVar23;
  auVar37[0xb] = uVar24;
  auVar37[0xc] = SUB41(fVar33,0);
  auVar37[0xd] = uVar25;
  auVar37[0xe] = uVar26;
  auVar37[0xf] = uVar27;
  auVar41[4] = SUB41(fVar18,0);
  auVar41._0_4_ = fVar17;
  auVar41[5] = uVar19;
  auVar41[6] = uVar20;
  auVar41[7] = uVar21;
  auVar41[8] = SUB41(fVar28,0);
  auVar41[9] = uVar22;
  auVar41[10] = uVar23;
  auVar41[0xb] = uVar24;
  auVar41[0xc] = SUB41(fVar33,0);
  auVar41[0xd] = uVar25;
  auVar41[0xe] = uVar26;
  auVar41[0xf] = uVar27;
  auVar37 = NEON_ext(auVar37,auVar41,8,1);
  fVar17 = auVar37._0_4_ + fVar17 + auVar37._4_4_ + fVar18;
  fVar18 = -1.0;
  if (fVar17 < -1.0) {
LAB_00b8ba4c:
    fVar33 = 1.0 - fVar18 * fVar18;
    fVar17 = SQRT(fVar33);
    uVar19 = SUB41(fVar17,0);
    uVar20 = (undefined1)((uint)fVar17 >> 8);
    uVar21 = (undefined1)((uint)fVar17 >> 0x10);
    uVar22 = (undefined1)((uint)fVar17 >> 0x18);
    fVar28 = *(float *)PTR_FloatPi_04372cf0;
    if (NAN(fVar17)) {
      fVar17 = sqrtf(fVar33);
      uVar19 = SUB41(fVar17,0);
      uVar20 = (undefined1)((uint)fVar17 >> 8);
      uVar21 = (undefined1)((uint)fVar17 >> 0x10);
      uVar22 = (undefined1)((uint)fVar17 >> 0x18);
    }
    fVar18 = -(float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19))) / fVar18;
    uVar19 = SUB41(fVar18,0);
    uVar20 = (undefined1)((uint)fVar18 >> 8);
    uVar21 = (undefined1)((uint)fVar18 >> 0x10);
    uVar22 = (undefined1)((uint)fVar18 >> 0x18);
    fVar18 = fVar18 * fVar18;
    fVar17 = fVar18 * (fVar18 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x18) +
                                fVar18 * (fVar18 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x10)
                                                   + fVar18 * (fVar18 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar18 * (*(float *)PTR_AtanCoefficients_04372e40
                                                            * fVar18 -
                                                           *(float *)(PTR_AtanCoefficients_04372e40
                                                                     + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0xc)))
                                         - *(float *)(PTR_AtanCoefficients_04372e40 + 0x14))) -
                      *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c));
  }
  else {
    fVar18 = 1.0;
    if (1.0 < fVar17) {
LAB_00b8b880:
      fVar28 = 1.0 - fVar18 * fVar18;
      fVar17 = SQRT(fVar28);
      uVar19 = SUB41(fVar17,0);
      uVar20 = (undefined1)((uint)fVar17 >> 8);
      uVar21 = (undefined1)((uint)fVar17 >> 0x10);
      uVar22 = (undefined1)((uint)fVar17 >> 0x18);
      if (NAN(fVar17)) {
        fVar17 = sqrtf(fVar28);
        uVar19 = SUB41(fVar17,0);
        uVar20 = (undefined1)((uint)fVar17 >> 8);
        uVar21 = (undefined1)((uint)fVar17 >> 0x10);
        uVar22 = (undefined1)((uint)fVar17 >> 0x18);
      }
      fVar18 = (float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19))) / fVar18;
      fVar17 = fVar18 * fVar18;
      fVar18 = fVar18 * (fVar17 * (fVar17 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x18) +
                                            fVar17 * (fVar17 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 0x10) +
                                                  fVar17 * (fVar17 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar17 * (*(float *)PTR_AtanCoefficients_04372e40
                                                            * fVar17 -
                                                           *(float *)(PTR_AtanCoefficients_04372e40
                                                                     + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_04372e40 + 0x14)
                                                  )) -
                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c)) + 1.0);
      uVar19 = SUB41(fVar18,0);
      uVar20 = (undefined1)((uint)fVar18 >> 8);
      uVar21 = (undefined1)((uint)fVar18 >> 0x10);
      uVar22 = (undefined1)((uint)fVar18 >> 0x18);
      goto LAB_00b8b90c;
    }
    if (fVar17 < 0.0) {
      fVar18 = fVar17;
      if (-0.70710677 <= fVar17) {
        fVar33 = 1.0 - fVar17 * fVar17;
        fVar18 = SQRT(fVar33);
        uVar19 = SUB41(fVar18,0);
        uVar20 = (undefined1)((uint)fVar18 >> 8);
        uVar21 = (undefined1)((uint)fVar18 >> 0x10);
        uVar22 = (undefined1)((uint)fVar18 >> 0x18);
        fVar28 = *(float *)PTR_FloatPiDivided2_04372d38;
        if (NAN(fVar18)) {
          fVar18 = sqrtf(fVar33);
          uVar19 = SUB41(fVar18,0);
          uVar20 = (undefined1)((uint)fVar18 >> 8);
          uVar21 = (undefined1)((uint)fVar18 >> 0x10);
          uVar22 = (undefined1)((uint)fVar18 >> 0x18);
        }
        fVar17 = -fVar17 / (float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19)));
        fVar18 = fVar17 * fVar17;
        fVar28 = fVar28 + fVar17 * (fVar18 * (fVar18 * (*(float *)(PTR_AtanCoefficients_04372e40 +
                                                                  0x18) +
                                                       fVar18 * (fVar18 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 0x10) +
                                                  fVar18 * (fVar18 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar18 * (*(float *)PTR_AtanCoefficients_04372e40
                                                            * fVar18 -
                                                           *(float *)(PTR_AtanCoefficients_04372e40
                                                                     + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_04372e40 + 0x14)
                                                  )) - *(float *)(PTR_AtanCoefficients_04372e40 +
                                                                 0x1c)) + 1.0);
        uVar19 = SUB41(fVar28,0);
        uVar20 = (undefined1)((uint)fVar28 >> 8);
        uVar21 = (undefined1)((uint)fVar28 >> 0x10);
        uVar22 = (undefined1)((uint)fVar28 >> 0x18);
        goto LAB_00b8b90c;
      }
      goto LAB_00b8ba4c;
    }
    fVar18 = fVar17;
    if (0.70710677 < fVar17) goto LAB_00b8b880;
    fVar33 = 1.0 - fVar17 * fVar17;
    fVar18 = SQRT(fVar33);
    uVar19 = SUB41(fVar18,0);
    uVar20 = (undefined1)((uint)fVar18 >> 8);
    uVar21 = (undefined1)((uint)fVar18 >> 0x10);
    uVar22 = (undefined1)((uint)fVar18 >> 0x18);
    fVar28 = *(float *)PTR_FloatPiDivided2_04372d38;
    if (NAN(fVar18)) {
      fVar18 = sqrtf(fVar33);
      uVar19 = SUB41(fVar18,0);
      uVar20 = (undefined1)((uint)fVar18 >> 8);
      uVar21 = (undefined1)((uint)fVar18 >> 0x10);
      uVar22 = (undefined1)((uint)fVar18 >> 0x18);
    }
    fVar17 = fVar17 / (float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19)));
    uVar19 = SUB41(fVar17,0);
    uVar20 = (undefined1)((uint)fVar17 >> 8);
    uVar21 = (undefined1)((uint)fVar17 >> 0x10);
    uVar22 = (undefined1)((uint)fVar17 >> 0x18);
    fVar17 = fVar17 * fVar17;
    fVar17 = fVar17 * (fVar17 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x18) +
                                fVar17 * (fVar17 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x10)
                                                   + fVar17 * (fVar17 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar17 * (*(float *)PTR_AtanCoefficients_04372e40
                                                            * fVar17 -
                                                           *(float *)(PTR_AtanCoefficients_04372e40
                                                                     + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0xc)))
                                         - *(float *)(PTR_AtanCoefficients_04372e40 + 0x14))) -
                      *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c));
  }
  fVar28 = fVar28 - (float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19))) *
                    (fVar17 + 1.0);
  uVar19 = SUB41(fVar28,0);
  uVar20 = (undefined1)((uint)fVar28 >> 8);
  uVar21 = (undefined1)((uint)fVar28 >> 0x10);
  uVar22 = (undefined1)((uint)fVar28 >> 0x18);
LAB_00b8b90c:
  auVar12[1] = bVar64;
  auVar12[0] = bVar63;
  auVar12[2] = bVar65;
  auVar12[3] = bVar66;
  auVar12[4] = bVar67;
  auVar12[5] = bVar68;
  auVar12[6] = bVar69;
  auVar12[7] = bVar70;
  auVar12[8] = bVar71;
  auVar12[9] = bVar72;
  auVar12[10] = bVar73;
  auVar12[0xb] = bVar74;
  auVar12[0xc] = bVar75;
  auVar12[0xd] = bVar76;
  auVar12[0xe] = bVar77;
  auVar12[0xf] = bVar78;
  uVar7 = a64_TBL(ZEXT816(0),auVar12,DAT_0388a880);
  auVar8[1] = bVar48;
  auVar8[0] = bVar47;
  auVar8[2] = bVar49;
  auVar8[3] = bVar50;
  auVar8[4] = bVar51;
  auVar8[5] = bVar52;
  auVar8[6] = bVar53;
  auVar8[7] = bVar54;
  auVar8[8] = bVar55;
  auVar8[9] = bVar56;
  auVar8[10] = bVar57;
  auVar8[0xb] = bVar58;
  auVar8[0xc] = bVar59;
  auVar8[0xd] = bVar60;
  auVar8[0xe] = bVar61;
  auVar8[0xf] = bVar62;
  uVar46 = a64_TBL(ZEXT816(0),auVar8,DAT_0388a680);
  auVar13[1] = bVar64;
  auVar13[0] = bVar63;
  auVar13[2] = bVar65;
  auVar13[3] = bVar66;
  auVar13[4] = bVar67;
  auVar13[5] = bVar68;
  auVar13[6] = bVar69;
  auVar13[7] = bVar70;
  auVar13[8] = bVar71;
  auVar13[9] = bVar72;
  auVar13[10] = bVar73;
  auVar13[0xb] = bVar74;
  auVar13[0xc] = bVar75;
  auVar13[0xd] = bVar76;
  auVar13[0xe] = bVar77;
  auVar13[0xf] = bVar78;
  a64_TBL(ZEXT816(0),auVar13,DAT_0388a6f0);
  auVar9[1] = bVar48;
  auVar9[0] = bVar47;
  auVar9[2] = bVar49;
  auVar9[3] = bVar50;
  auVar9[4] = bVar51;
  auVar9[5] = bVar52;
  auVar9[6] = bVar53;
  auVar9[7] = bVar54;
  auVar9[8] = bVar55;
  auVar9[9] = bVar56;
  auVar9[10] = bVar57;
  auVar9[0xb] = bVar58;
  auVar9[0xc] = bVar59;
  auVar9[0xd] = bVar60;
  auVar9[0xe] = bVar61;
  auVar9[0xf] = bVar62;
  a64_TBL(ZEXT816(0),auVar9,DAT_0388a6f0);
  auVar10[1] = bVar48;
  auVar10[0] = bVar47;
  auVar10[2] = bVar49;
  auVar10[3] = bVar50;
  auVar10[4] = bVar51;
  auVar10[5] = bVar52;
  auVar10[6] = bVar53;
  auVar10[7] = bVar54;
  auVar10[8] = bVar55;
  auVar10[9] = bVar56;
  auVar10[10] = bVar57;
  auVar10[0xb] = bVar58;
  auVar10[0xc] = bVar59;
  auVar10[0xd] = bVar60;
  auVar10[0xe] = bVar61;
  auVar10[0xf] = bVar62;
  a64_TBL(ZEXT816(0),auVar10,DAT_0388a6d8);
  auVar14[1] = bVar64;
  auVar14[0] = bVar63;
  auVar14[2] = bVar65;
  auVar14[3] = bVar66;
  auVar14[4] = bVar67;
  auVar14[5] = bVar68;
  auVar14[6] = bVar69;
  auVar14[7] = bVar70;
  auVar14[8] = bVar71;
  auVar14[9] = bVar72;
  auVar14[10] = bVar73;
  auVar14[0xb] = bVar74;
  auVar14[0xc] = bVar75;
  auVar14[0xd] = bVar76;
  auVar14[0xe] = bVar77;
  auVar14[0xf] = bVar78;
  uVar39 = a64_TBL(ZEXT816(0),auVar14,DAT_0388a680);
  auVar15[1] = bVar64;
  auVar15[0] = bVar63;
  auVar15[2] = bVar65;
  auVar15[3] = bVar66;
  auVar15[4] = bVar67;
  auVar15[5] = bVar68;
  auVar15[6] = bVar69;
  auVar15[7] = bVar70;
  auVar15[8] = bVar71;
  auVar15[9] = bVar72;
  auVar15[10] = bVar73;
  auVar15[0xb] = bVar74;
  auVar15[0xc] = bVar75;
  auVar15[0xd] = bVar76;
  auVar15[0xe] = bVar77;
  auVar15[0xf] = bVar78;
  a64_TBL(ZEXT816(0),auVar15,DAT_0388a6d8);
  auVar11[1] = bVar48;
  auVar11[0] = bVar47;
  auVar11[2] = bVar49;
  auVar11[3] = bVar50;
  auVar11[4] = bVar51;
  auVar11[5] = bVar52;
  auVar11[6] = bVar53;
  auVar11[7] = bVar54;
  auVar11[8] = bVar55;
  auVar11[9] = bVar56;
  auVar11[10] = bVar57;
  auVar11[0xb] = bVar58;
  auVar11[0xc] = bVar59;
  auVar11[0xd] = bVar60;
  auVar11[0xe] = bVar61;
  auVar11[0xf] = bVar62;
  uVar30 = a64_TBL(ZEXT816(0),auVar11,DAT_0388a880);
  if (0.0 <= (float)((ulong)uVar7 >> 0x20) * (float)((ulong)uVar46 >> 0x20) -
             (float)((ulong)uVar39 >> 0x20) * (float)((ulong)uVar30 >> 0x20)) {
    param_2 = param_1;
  }
  return (float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19))) < param_2 ||
         (float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19))) == param_2;
}


