/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a853a8; name: FUN_01a853a8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a853a8(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined2 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined1 auVar11 [12];
  float fVar15;
  float fVar17;
  float fVar18;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar16;
  undefined1 auVar14 [16];
  int iVar19;
  undefined1 auVar20 [12];
  int iVar28;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  int iVar30;
  int iVar31;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar29;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 uVar32;
  undefined1 uVar33;
  byte bVar34;
  undefined1 uVar35;
  byte bVar36;
  undefined1 uVar37;
  byte bVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fStack_3c;
  long *local_18;
  
  fVar17 = (float)param_2[1];
  fVar9 = (float)*param_2;
  fVar8 = fVar17 * fVar17 + fVar9 * fVar9;
  fVar7 = fVar8 + 0.0;
  fVar8 = fVar8 + 0.0;
  uVar32 = (undefined1)((uint)fVar8 >> 8);
  uVar33 = (undefined1)((uint)fVar8 >> 0x10);
  uVar35 = (undefined1)((uint)fVar8 >> 0x18);
  if (SQRT(fVar7) < 1.1920929e-07) {
    return;
  }
  if (fVar7 == 0.0) {
    return;
  }
  auVar21[4] = SUB41(fVar8,0);
  auVar21._0_4_ = fVar7;
  auVar21[5] = uVar32;
  auVar21[6] = uVar33;
  auVar21[7] = uVar35;
  auVar21[8] = SUB41(fVar7,0);
  auVar21[9] = (char)((uint)fVar7 >> 8);
  auVar21[10] = (char)((uint)fVar7 >> 0x10);
  auVar21[0xb] = (char)((uint)fVar7 >> 0x18);
  auVar21[0xc] = SUB41(fVar8,0);
  auVar21[0xd] = uVar32;
  auVar21[0xe] = uVar33;
  auVar21[0xf] = uVar35;
  auVar21 = NEON_frsqrte(auVar21,4);
  auVar39._0_4_ = fVar7 * auVar21._0_4_;
  auVar39._4_4_ = fVar8 * auVar21._4_4_;
  auVar39._8_4_ = fVar7 * auVar21._8_4_;
  auVar39._12_4_ = fVar8 * auVar21._12_4_;
  auVar40 = NEON_frsqrts(auVar21,auVar39,4);
  auVar22._0_4_ = auVar21._0_4_ * auVar40._0_4_;
  auVar22._4_4_ = auVar21._4_4_ * auVar40._4_4_;
  auVar22._8_4_ = auVar21._8_4_ * auVar40._8_4_;
  auVar22._12_4_ = auVar21._12_4_ * auVar40._12_4_;
  auVar41._0_4_ = fVar7 * auVar22._0_4_;
  auVar41._4_4_ = fVar8 * auVar22._4_4_;
  auVar41._8_4_ = fVar7 * auVar22._8_4_;
  auVar41._12_4_ = fVar8 * auVar22._12_4_;
  auVar21 = NEON_frsqrts(auVar22,auVar41,4);
  fVar9 = fVar9 * auVar22._0_4_ * auVar21._0_4_;
  fVar15 = auVar22._4_4_ * auVar21._4_4_ * 0.0;
  fVar17 = fVar17 * auVar22._8_4_ * auVar21._8_4_;
  fVar18 = auVar22._12_4_ * auVar21._12_4_ * 0.0;
  iVar19 = -(uint)(fVar7 == 0.0);
  iVar28 = -(uint)(fVar8 == 0.0);
  iVar30 = -(uint)(fVar7 == 0.0);
  iVar31 = -(uint)(fVar8 == 0.0);
  fVar8 = (float)CONCAT13((byte)((uint)fVar9 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                          CONCAT12((byte)((uint)fVar9 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10),
                                   CONCAT11((byte)((uint)fVar9 >> 8) & ~(byte)((uint)iVar19 >> 8),
                                            SUB41(fVar9,0) & ~(byte)iVar19)));
  auVar20._0_8_ =
       CONCAT17((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18),
                CONCAT16((byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10),
                         CONCAT15((byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar28 >> 8),
                                  CONCAT14(SUB41(fVar15,0) & ~(byte)iVar28,fVar8))));
  auVar20[8] = SUB41(fVar17,0) & ~(byte)iVar30;
  auVar20[9] = (byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar30 >> 8);
  auVar20[10] = (byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10);
  auVar20[0xb] = (byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18);
  auVar23[0xc] = SUB41(fVar18,0) & ~(byte)iVar31;
  auVar23._0_12_ = auVar20;
  auVar23[0xd] = (byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar31 >> 8);
  auVar23[0xe] = (byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10);
  auVar23[0xf] = (byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18);
  fStack_3c = (float)((ulong)auVar20._0_8_ >> 0x20);
  auVar40._0_4_ = fVar8 * (float)_DAT_03888d10;
  auVar40._4_4_ = fStack_3c * (float)((ulong)_DAT_03888d10 >> 0x20);
  auVar40._8_4_ = auVar20._8_4_ * (float)_UNK_03888d18;
  auVar40._12_4_ = auVar23._12_4_ * (float)((ulong)_UNK_03888d18 >> 0x20);
  auVar21 = NEON_ext(auVar40,auVar40,8,1);
  fVar17 = auVar21._0_4_ + auVar40._0_4_ + auVar21._4_4_ + auVar40._4_4_;
  fVar9 = -1.0;
  if ((-1.0 <= fVar17) && (fVar9 = fVar17, 1.0 < fVar17)) {
    fVar9 = 1.0;
  }
  fVar7 = acosf(fVar9);
  fVar9 = (float)((ulong)DAT_0388a7e8 >> 0x20);
  fVar17 = (float)DAT_0388a7e8 + fVar9;
  fVar9 = (float)DAT_0388a7e8 + fVar9;
  uVar32 = SUB41(fVar9,0);
  uVar33 = (undefined1)((uint)fVar9 >> 8);
  uVar35 = (undefined1)((uint)fVar9 >> 0x10);
  uVar37 = (undefined1)((uint)fVar9 >> 0x18);
  fVar15 = 1.0;
  if (fVar8 <= 0.0) {
    fVar15 = -1.0;
  }
  fVar8 = fVar15 * fVar7 * 0.5;
  fVar7 = 0.5;
  if (fVar8 < 0.0) {
    fVar7 = -0.5;
  }
  auVar4[4] = uVar32;
  auVar4._0_4_ = fVar17;
  auVar4[5] = uVar33;
  auVar4[6] = uVar35;
  auVar4[7] = uVar37;
  auVar4[8] = SUB41(fVar17,0);
  auVar4[9] = (char)((uint)fVar17 >> 8);
  auVar4[10] = (char)((uint)fVar17 >> 0x10);
  auVar4[0xb] = (char)((uint)fVar17 >> 0x18);
  auVar4[0xc] = uVar32;
  auVar4[0xd] = uVar33;
  auVar4[0xe] = uVar35;
  auVar4[0xf] = uVar37;
  auVar40 = NEON_frsqrte(auVar4,4);
  auVar12._0_4_ = auVar40._0_4_ * fVar17;
  auVar12._4_4_ = auVar40._4_4_ * fVar9;
  auVar12._8_4_ = auVar40._8_4_ * fVar17;
  uVar5 = (undefined2)(CONCAT15(uVar33,CONCAT14(uVar32,fVar17)) >> 0x20);
  auVar12._12_4_ = auVar40._12_4_ * (float)CONCAT13(uVar37,CONCAT12(uVar35,uVar5));
  auVar21 = NEON_frsqrts(auVar40,auVar12,4);
  auVar13._0_4_ = auVar40._0_4_ * auVar21._0_4_;
  auVar13._4_4_ = auVar40._4_4_ * auVar21._4_4_;
  auVar13._8_4_ = auVar40._8_4_ * auVar21._8_4_;
  auVar13._12_4_ = auVar40._12_4_ * auVar21._12_4_;
  auVar24._0_4_ = fVar17 * auVar13._0_4_;
  auVar24._4_4_ = fVar9 * auVar13._4_4_;
  auVar24._8_4_ = fVar17 * auVar13._8_4_;
  auVar24._12_4_ = (float)CONCAT13(uVar37,CONCAT12(uVar35,uVar5)) * auVar13._12_4_;
  iVar19 = -(uint)(fVar17 == 0.0);
  iVar28 = -(uint)(fVar9 == 0.0);
  iVar30 = -(uint)(fVar17 == 0.0);
  auVar21 = NEON_frsqrts(auVar13,auVar24,4);
  fVar9 = auVar13._0_4_ * auVar21._0_4_ * (float)DAT_0388a140;
  fVar17 = auVar13._4_4_ * auVar21._4_4_ * (float)((ulong)DAT_0388a140 >> 0x20);
  fVar15 = auVar13._8_4_ * auVar21._8_4_ * (float)DAT_0388a148;
  fVar9 = (float)CONCAT13((byte)((uint)fVar9 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                          CONCAT12((byte)((uint)fVar9 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10),
                                   CONCAT11((byte)((uint)fVar9 >> 8) & ~(byte)((uint)iVar19 >> 8),
                                            SUB41(fVar9,0) & ~(byte)iVar19)));
  auVar11._0_8_ =
       CONCAT17((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18),
                CONCAT16((byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10),
                         CONCAT15((byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar28 >> 8),
                                  CONCAT14(SUB41(fVar17,0) & ~(byte)iVar28,fVar9))));
  auVar11[8] = SUB41(fVar15,0) & ~(byte)iVar30;
  auVar11[9] = (byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar30 >> 8);
  auVar11[10] = (byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10);
  auVar11[0xb] = (byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18);
  fVar8 = fVar8 - *(float *)PTR_Float2Pi_04372d30 *
                  (float)(int)(fVar7 + fVar8 * *(float *)PTR_Float1Divided2Pi_04372d20);
  uVar32 = SUB41(fVar8,0);
  uVar33 = (undefined1)((uint)fVar8 >> 8);
  uVar35 = (undefined1)((uint)fVar8 >> 0x10);
  uVar37 = (undefined1)((uint)fVar8 >> 0x18);
  if (*(float *)PTR_FloatPiDivided2_04372d38 < fVar8) {
    fVar17 = *(float *)PTR_FloatPi_04372cf0;
  }
  else {
    if (-*(float *)PTR_FloatPiDivided2_04372d38 <= fVar8) {
      fVar17 = 1.0;
      goto LAB_01a8552c;
    }
    fVar17 = -*(float *)PTR_FloatPi_04372cf0;
  }
  fVar17 = fVar17 - fVar8;
  uVar32 = SUB41(fVar17,0);
  uVar33 = (undefined1)((uint)fVar17 >> 8);
  uVar35 = (undefined1)((uint)fVar17 >> 0x10);
  uVar37 = (undefined1)((uint)fVar17 >> 0x18);
  fVar17 = -1.0;
LAB_01a8552c:
  fVar15 = (float)CONCAT13(uVar37,CONCAT12(uVar35,CONCAT11(uVar33,uVar32))) *
           (float)CONCAT13(uVar37,CONCAT12(uVar35,CONCAT11(uVar33,uVar32)));
  fVar7 = (float)CONCAT13(uVar37,CONCAT12(uVar35,CONCAT11(uVar33,uVar32))) *
          (fVar15 * (fVar15 * (*(float *)(PTR_SinCoefficients_04372d28 + 0xc) +
                              fVar15 * (fVar15 * (*(float *)(PTR_SinCoefficients_04372d28 + 4) -
                                                 *(float *)PTR_SinCoefficients_04372d28 * fVar15) -
                                       *(float *)(PTR_SinCoefficients_04372d28 + 8))) -
                    *(float *)(PTR_SinCoefficients_04372d28 + 0x10)) + 1.0);
  fVar9 = fVar9 * fVar7;
  fVar16 = (float)((ulong)auVar11._0_8_ >> 0x20) * fVar7;
  fVar7 = auVar11._8_4_ * fVar7;
  fVar8 = *(float *)PTR_FloatQuaternionEpsilon_0437a118;
  fVar17 = fVar17 * (fVar15 * (fVar15 * (*(float *)(PTR_CosCoefficients_04372d40 + 0xc) +
                                        fVar15 * (fVar15 * (*(float *)(PTR_CosCoefficients_04372d40
                                                                      + 4) -
                                                           fVar15 * *(float *)
                                                  PTR_CosCoefficients_04372d40) -
                                                 *(float *)(PTR_CosCoefficients_04372d40 + 8))) -
                              *(float *)(PTR_CosCoefficients_04372d40 + 0x10)) + 1.0);
  auVar25._0_4_ = fVar9 * fVar9;
  auVar25._4_4_ = fVar16 * fVar16;
  auVar25._8_4_ = fVar7 * fVar7;
  auVar25._12_4_ = fVar17 * fVar17;
  auVar21 = NEON_ext(auVar25,auVar25,8,1);
  fVar18 = auVar21._0_4_ + auVar25._0_4_;
  fVar29 = auVar21._4_4_ + auVar25._4_4_;
  fVar15 = fVar18 + fVar29;
  fVar18 = fVar18 + fVar29;
  auVar26._8_8_ = CONCAT44(fVar18,fVar15);
  auVar26._0_8_ = CONCAT44(fVar18,fVar15);
  iVar19 = -(uint)(fVar15 < fVar8);
  bVar34 = (byte)((uint)iVar19 >> 8);
  bVar36 = (byte)((uint)iVar19 >> 0x10);
  bVar38 = (byte)((uint)iVar19 >> 0x18);
  iVar28 = -(uint)(fVar18 < fVar8);
  iVar30 = -(uint)(fVar15 < fVar8);
  iVar31 = -(uint)(fVar18 < fVar8);
  if ((float)CONCAT13((byte)((uint)fVar15 >> 0x18) & ~bVar38,
                      CONCAT12((byte)((uint)fVar15 >> 0x10) & ~bVar36,
                               CONCAT11((byte)((uint)fVar15 >> 8) & ~bVar34,
                                        SUB41(fVar15,0) & ~(byte)iVar19))) != 0.0) {
    auVar21 = NEON_frsqrte(auVar26,4);
    auVar43._0_4_ = auVar21._0_4_ * fVar15;
    auVar43._4_4_ = auVar21._4_4_ * fVar18;
    auVar43._8_4_ = auVar21._8_4_ * fVar15;
    auVar43._12_4_ = auVar21._12_4_ * fVar18;
    auVar40 = NEON_frsqrts(auVar21,auVar43,4);
    auVar42._0_4_ = auVar21._0_4_ * auVar40._0_4_;
    auVar42._4_4_ = auVar21._4_4_ * auVar40._4_4_;
    auVar42._8_4_ = auVar21._8_4_ * auVar40._8_4_;
    auVar42._12_4_ = auVar21._12_4_ * auVar40._12_4_;
    auVar27._0_4_ = fVar15 * auVar42._0_4_;
    auVar27._4_4_ = fVar18 * auVar42._4_4_;
    auVar27._8_4_ = fVar15 * auVar42._8_4_;
    auVar27._12_4_ = fVar18 * auVar42._12_4_;
    auVar21 = NEON_frsqrts(auVar42,auVar27,4);
    fVar9 = fVar9 * auVar42._0_4_ * auVar21._0_4_;
    fVar16 = fVar16 * auVar42._4_4_ * auVar21._4_4_;
    fVar7 = fVar7 * auVar42._8_4_ * auVar21._8_4_;
    fVar17 = fVar17 * auVar42._12_4_ * auVar21._12_4_;
    uVar10 = CONCAT13((byte)((uint)fVar9 >> 0x18) & ~bVar38,
                      CONCAT12((byte)((uint)fVar9 >> 0x10) & ~bVar36,
                               CONCAT11((byte)((uint)fVar9 >> 8) & ~bVar34,
                                        SUB41(fVar9,0) & ~(byte)iVar19)));
    auVar14._0_8_ =
         CONCAT17((byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18),
                  CONCAT16((byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10),
                           CONCAT15((byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar28 >> 8),
                                    CONCAT14(SUB41(fVar16,0) & ~(byte)iVar28,uVar10))));
    auVar14[8] = SUB41(fVar7,0) & ~(byte)iVar30;
    auVar14[9] = (byte)((uint)fVar7 >> 8) & ~(byte)((uint)iVar30 >> 8);
    auVar14[10] = (byte)((uint)fVar7 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10);
    auVar14[0xb] = (byte)((uint)fVar7 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18);
    auVar14[0xc] = SUB41(fVar17,0) & ~(byte)iVar31;
    auVar14[0xd] = (byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar31 >> 8);
    auVar14[0xe] = (byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10);
    auVar14[0xf] = (byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18);
    fStack_3c = (float)((ulong)auVar14._0_8_ >> 0x20);
    FUN_009c69bc(&local_18,param_1);
    *(undefined1 *)(local_18 + 0x1c) = 1;
    local_18[0x19] = auVar14._8_8_;
    local_18[0x18] = CONCAT44(fStack_3c,uVar10);
    if (local_18 != (long *)0x0) {
      lVar6 = local_18[0xb];
      piVar1 = (int *)(lVar6 + 0xc);
      do {
        iVar19 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar19 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar19 + -1 == 0) {
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*local_18 + 0x20))();
      }
    }
  }
  return;
}


