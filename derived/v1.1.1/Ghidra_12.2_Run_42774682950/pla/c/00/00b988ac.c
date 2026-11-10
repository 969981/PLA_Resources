/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b988ac; name: FUN_00b988ac
 */


bool FUN_00b988ac(long param_1,float *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  float fVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar22;
  int iVar23;
  int iVar24;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  int iVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 uVar31;
  undefined8 uVar32;
  long *local_28;
  
  FUN_00b5f458(&local_28,*(undefined8 *)(param_1 + 0xa0));
  puVar4 = (undefined8 *)FUN_00b8a9f8(local_28[0xb],&DAT_03a77ae8);
  uVar32 = puVar4[1];
  uVar31 = *puVar4;
  if (local_28 != (long *)0x0) {
    plVar1 = local_28 + 10;
    do {
      iVar17 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar17;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar17 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
  }
  fVar6 = (float)*param_3 - *param_2;
  fVar18 = (float)param_3[1] - param_2[2];
  fVar19 = (float)((ulong)param_3[1] >> 0x20) - param_2[3];
  auVar20._0_4_ = fVar6 * fVar6;
  auVar20._4_4_ = 0;
  auVar20._8_4_ = fVar18 * fVar18;
  auVar20._12_4_ = fVar19 * fVar19;
  auVar26 = NEON_ext(auVar20,auVar20,8,1);
  fVar16 = auVar26._0_4_ + auVar20._0_4_;
  fVar22 = auVar26._4_4_ + 0.0;
  fVar5 = fVar16 + fVar22;
  fVar16 = fVar16 + fVar22;
  auVar21._8_8_ = CONCAT44(fVar16,fVar5);
  auVar21._0_8_ = CONCAT44(fVar16,fVar5);
  auVar26 = NEON_frsqrte(auVar21,4);
  auVar28._0_4_ = auVar26._0_4_ * fVar5;
  auVar28._4_4_ = auVar26._4_4_ * fVar16;
  auVar28._8_4_ = auVar26._8_4_ * fVar5;
  auVar28._12_4_ = auVar26._12_4_ * fVar16;
  auVar29 = NEON_frsqrts(auVar26,auVar28,4);
  auVar27._0_4_ = auVar26._0_4_ * auVar29._0_4_;
  auVar27._4_4_ = auVar26._4_4_ * auVar29._4_4_;
  auVar27._8_4_ = auVar26._8_4_ * auVar29._8_4_;
  auVar27._12_4_ = auVar26._12_4_ * auVar29._12_4_;
  auVar30._0_4_ = fVar5 * auVar27._0_4_;
  auVar30._4_4_ = fVar16 * auVar27._4_4_;
  auVar30._8_4_ = fVar5 * auVar27._8_4_;
  auVar30._12_4_ = fVar16 * auVar27._12_4_;
  iVar17 = -(uint)(fVar5 == 0.0);
  iVar23 = -(uint)(fVar16 == 0.0);
  iVar24 = -(uint)(fVar5 == 0.0);
  iVar25 = -(uint)(fVar16 == 0.0);
  auVar26 = NEON_frsqrts(auVar27,auVar30,4);
  fVar6 = fVar6 * auVar27._0_4_ * auVar26._0_4_;
  fVar5 = auVar27._4_4_ * auVar26._4_4_ * 0.0;
  fVar18 = fVar18 * auVar27._8_4_ * auVar26._8_4_;
  fVar19 = fVar19 * auVar27._12_4_ * auVar26._12_4_;
  fVar6 = (float)uVar31 *
          (float)CONCAT13((byte)((uint)fVar6 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18),
                          CONCAT12((byte)((uint)fVar6 >> 0x10) & ~(byte)((uint)iVar17 >> 0x10),
                                   CONCAT11((byte)((uint)fVar6 >> 8) & ~(byte)((uint)iVar17 >> 8),
                                            SUB41(fVar6,0) & ~(byte)iVar17)));
  fVar5 = (float)((ulong)uVar31 >> 0x20) *
          (float)CONCAT13((byte)((uint)fVar5 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                          CONCAT12((byte)((uint)fVar5 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10),
                                   CONCAT11((byte)((uint)fVar5 >> 8) & ~(byte)((uint)iVar23 >> 8),
                                            SUB41(fVar5,0) & ~(byte)iVar23)));
  uVar7 = (undefined1)((uint)fVar5 >> 8);
  uVar8 = (undefined1)((uint)fVar5 >> 0x10);
  uVar9 = (undefined1)((uint)fVar5 >> 0x18);
  fVar18 = (float)uVar32 *
           (float)CONCAT13((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                           CONCAT12((byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10),
                                    CONCAT11((byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar24 >> 8),
                                             SUB41(fVar18,0) & ~(byte)iVar24)));
  uVar10 = (undefined1)((uint)fVar18 >> 8);
  uVar11 = (undefined1)((uint)fVar18 >> 0x10);
  uVar12 = (undefined1)((uint)fVar18 >> 0x18);
  fVar19 = (float)((ulong)uVar32 >> 0x20) *
           (float)CONCAT13((byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18),
                           CONCAT12((byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar25 >> 0x10),
                                    CONCAT11((byte)((uint)fVar19 >> 8) & ~(byte)((uint)iVar25 >> 8),
                                             SUB41(fVar19,0) & ~(byte)iVar25)));
  uVar13 = (undefined1)((uint)fVar19 >> 8);
  uVar14 = (undefined1)((uint)fVar19 >> 0x10);
  uVar15 = (undefined1)((uint)fVar19 >> 0x18);
  auVar26[4] = SUB41(fVar5,0);
  auVar26._0_4_ = fVar6;
  auVar26[5] = uVar7;
  auVar26[6] = uVar8;
  auVar26[7] = uVar9;
  auVar26[8] = SUB41(fVar18,0);
  auVar26[9] = uVar10;
  auVar26[10] = uVar11;
  auVar26[0xb] = uVar12;
  auVar26[0xc] = SUB41(fVar19,0);
  auVar26[0xd] = uVar13;
  auVar26[0xe] = uVar14;
  auVar26[0xf] = uVar15;
  auVar29[4] = SUB41(fVar5,0);
  auVar29._0_4_ = fVar6;
  auVar29[5] = uVar7;
  auVar29[6] = uVar8;
  auVar29[7] = uVar9;
  auVar29[8] = SUB41(fVar18,0);
  auVar29[9] = uVar10;
  auVar29[10] = uVar11;
  auVar29[0xb] = uVar12;
  auVar29[0xc] = SUB41(fVar19,0);
  auVar29[0xd] = uVar13;
  auVar29[0xe] = uVar14;
  auVar29[0xf] = uVar15;
  auVar26 = NEON_ext(auVar26,auVar29,8,1);
  fVar6 = auVar26._0_4_ + fVar6 + auVar26._4_4_ + fVar5;
  fVar5 = -1.0;
  if (fVar6 < -1.0) {
LAB_00b98b34:
    fVar19 = 1.0 - fVar5 * fVar5;
    fVar6 = SQRT(fVar19);
    uVar7 = SUB41(fVar6,0);
    uVar8 = (undefined1)((uint)fVar6 >> 8);
    uVar9 = (undefined1)((uint)fVar6 >> 0x10);
    uVar10 = (undefined1)((uint)fVar6 >> 0x18);
    fVar18 = *(float *)PTR_FloatPi_04372cf0;
    if (NAN(fVar6)) {
      fVar6 = sqrtf(fVar19);
      uVar7 = SUB41(fVar6,0);
      uVar8 = (undefined1)((uint)fVar6 >> 8);
      uVar9 = (undefined1)((uint)fVar6 >> 0x10);
      uVar10 = (undefined1)((uint)fVar6 >> 0x18);
    }
    fVar5 = -(float)CONCAT13(uVar10,CONCAT12(uVar9,CONCAT11(uVar8,uVar7))) / fVar5;
    uVar7 = SUB41(fVar5,0);
    uVar8 = (undefined1)((uint)fVar5 >> 8);
    uVar9 = (undefined1)((uint)fVar5 >> 0x10);
    uVar10 = (undefined1)((uint)fVar5 >> 0x18);
    fVar5 = fVar5 * fVar5;
    fVar6 = fVar5 * (fVar5 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x18) +
                             fVar5 * (fVar5 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x10) +
                                              fVar5 * (fVar5 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar5 * (*(float *)PTR_AtanCoefficients_04372e40 *
                                                           fVar5 - *(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0xc)))
                                     - *(float *)(PTR_AtanCoefficients_04372e40 + 0x14))) -
                    *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c));
  }
  else {
    fVar5 = 1.0;
    if (1.0 < fVar6) {
LAB_00b989b4:
      fVar18 = 1.0 - fVar5 * fVar5;
      fVar6 = SQRT(fVar18);
      uVar7 = SUB41(fVar6,0);
      uVar8 = (undefined1)((uint)fVar6 >> 8);
      uVar9 = (undefined1)((uint)fVar6 >> 0x10);
      uVar10 = (undefined1)((uint)fVar6 >> 0x18);
      if (NAN(fVar6)) {
        fVar6 = sqrtf(fVar18);
        uVar7 = SUB41(fVar6,0);
        uVar8 = (undefined1)((uint)fVar6 >> 8);
        uVar9 = (undefined1)((uint)fVar6 >> 0x10);
        uVar10 = (undefined1)((uint)fVar6 >> 0x18);
      }
      fVar5 = (float)CONCAT13(uVar10,CONCAT12(uVar9,CONCAT11(uVar8,uVar7))) / fVar5;
      fVar6 = fVar5 * fVar5;
      fVar5 = fVar5 * (fVar6 * (fVar6 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x18) +
                                        fVar6 * (fVar6 * (*(float *)(PTR_AtanCoefficients_04372e40 +
                                                                    0x10) +
                                                         fVar6 * (fVar6 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar6 * (*(float *)PTR_AtanCoefficients_04372e40 *
                                                           fVar6 - *(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0xc)))
                                                - *(float *)(PTR_AtanCoefficients_04372e40 + 0x14)))
                               - *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c)) + 1.0);
      uVar7 = SUB41(fVar5,0);
      uVar8 = (undefined1)((uint)fVar5 >> 8);
      uVar9 = (undefined1)((uint)fVar5 >> 0x10);
      uVar10 = (undefined1)((uint)fVar5 >> 0x18);
      goto LAB_00b98a38;
    }
    if (fVar6 < 0.0) {
      fVar5 = fVar6;
      if (-0.70710677 <= fVar6) {
        fVar19 = 1.0 - fVar6 * fVar6;
        fVar5 = SQRT(fVar19);
        uVar7 = SUB41(fVar5,0);
        uVar8 = (undefined1)((uint)fVar5 >> 8);
        uVar9 = (undefined1)((uint)fVar5 >> 0x10);
        uVar10 = (undefined1)((uint)fVar5 >> 0x18);
        fVar18 = *(float *)PTR_FloatPiDivided2_04372d38;
        if (NAN(fVar5)) {
          fVar5 = sqrtf(fVar19);
          uVar7 = SUB41(fVar5,0);
          uVar8 = (undefined1)((uint)fVar5 >> 8);
          uVar9 = (undefined1)((uint)fVar5 >> 0x10);
          uVar10 = (undefined1)((uint)fVar5 >> 0x18);
        }
        fVar6 = -fVar6 / (float)CONCAT13(uVar10,CONCAT12(uVar9,CONCAT11(uVar8,uVar7)));
        fVar5 = fVar6 * fVar6;
        fVar18 = fVar18 + fVar6 * (fVar5 * (fVar5 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x18
                                                               ) +
                                                    fVar5 * (fVar5 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 0x10) +
                                                  fVar5 * (fVar5 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar5 * (*(float *)PTR_AtanCoefficients_04372e40 *
                                                           fVar5 - *(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_04372e40 + 0x14)
                                                  )) -
                                           *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c)) + 1.0);
        uVar7 = SUB41(fVar18,0);
        uVar8 = (undefined1)((uint)fVar18 >> 8);
        uVar9 = (undefined1)((uint)fVar18 >> 0x10);
        uVar10 = (undefined1)((uint)fVar18 >> 0x18);
        goto LAB_00b98a38;
      }
      goto LAB_00b98b34;
    }
    fVar5 = fVar6;
    if (0.70710677 < fVar6) goto LAB_00b989b4;
    fVar19 = 1.0 - fVar6 * fVar6;
    fVar5 = SQRT(fVar19);
    uVar7 = SUB41(fVar5,0);
    uVar8 = (undefined1)((uint)fVar5 >> 8);
    uVar9 = (undefined1)((uint)fVar5 >> 0x10);
    uVar10 = (undefined1)((uint)fVar5 >> 0x18);
    fVar18 = *(float *)PTR_FloatPiDivided2_04372d38;
    if (NAN(fVar5)) {
      fVar5 = sqrtf(fVar19);
      uVar7 = SUB41(fVar5,0);
      uVar8 = (undefined1)((uint)fVar5 >> 8);
      uVar9 = (undefined1)((uint)fVar5 >> 0x10);
      uVar10 = (undefined1)((uint)fVar5 >> 0x18);
    }
    fVar6 = fVar6 / (float)CONCAT13(uVar10,CONCAT12(uVar9,CONCAT11(uVar8,uVar7)));
    uVar7 = SUB41(fVar6,0);
    uVar8 = (undefined1)((uint)fVar6 >> 8);
    uVar9 = (undefined1)((uint)fVar6 >> 0x10);
    uVar10 = (undefined1)((uint)fVar6 >> 0x18);
    fVar6 = fVar6 * fVar6;
    fVar6 = fVar6 * (fVar6 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x18) +
                             fVar6 * (fVar6 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x10) +
                                              fVar6 * (fVar6 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar6 * (*(float *)PTR_AtanCoefficients_04372e40 *
                                                           fVar6 - *(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0xc)))
                                     - *(float *)(PTR_AtanCoefficients_04372e40 + 0x14))) -
                    *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c));
  }
  fVar18 = fVar18 - (float)CONCAT13(uVar10,CONCAT12(uVar9,CONCAT11(uVar8,uVar7))) * (fVar6 + 1.0);
  uVar7 = SUB41(fVar18,0);
  uVar8 = (undefined1)((uint)fVar18 >> 8);
  uVar9 = (undefined1)((uint)fVar18 >> 0x10);
  uVar10 = (undefined1)((uint)fVar18 >> 0x18);
LAB_00b98a38:
  return (float)CONCAT13(uVar10,CONCAT12(uVar9,CONCAT11(uVar8,uVar7))) <=
         *(float *)(param_1 + 0xa8) * 0.5;
}


