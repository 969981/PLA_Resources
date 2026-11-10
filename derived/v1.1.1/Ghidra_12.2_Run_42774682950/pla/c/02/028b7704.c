/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028b7704; name: FUN_028b7704
 */


undefined1  [16] FUN_028b7704(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  float *pfVar7;
  undefined1 auVar8 [16];
  uint uVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar15;
  undefined8 uVar13;
  float fVar16;
  float fVar18;
  undefined8 uVar17;
  undefined1 auVar14 [16];
  float fVar19;
  int iVar20;
  float fVar21;
  int iVar22;
  float fVar23;
  int iVar24;
  float fVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar32 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  
  fVar11 = *(float *)(param_3 + 8);
  fVar41 = (float)param_1;
  *(float *)(param_3 + 8) = fVar41;
  *(undefined1 *)(param_3 + 2) = 0;
  if (fVar11 <= fVar41) {
    uVar9 = *(uint *)(param_3 + 0xc);
    uVar3 = uVar9 + 1 & 7;
    if (fVar41 <= *(float *)(param_3 + (ulong)uVar3 * 4 + 0x10)) goto LAB_028b77f0;
    uVar4 = uVar9 + 2 & 7;
    if (fVar41 <= *(float *)(param_3 + (ulong)uVar4 * 4 + 0x10)) {
      uVar5 = uVar9 + 1 & 3;
      *(uint *)(param_3 + 0xc) = uVar3;
      uVar9 = uVar3;
    }
    else {
      uVar5 = uVar9 + 2 & 3;
      if (uVar5 == 3) {
        *(uint *)(param_3 + 0xc) = uVar4;
        *(undefined1 *)(param_3 + 2) = 1;
        goto LAB_028b7744;
      }
      if (*(float *)(param_3 + (ulong)(uVar9 + 3 & 7) * 4 + 0x10) < fVar41) {
        iVar20 = -1;
        goto LAB_028b7738;
      }
      *(uint *)(param_3 + 0xc) = uVar4;
      uVar9 = uVar4;
    }
    if (uVar5 != 2) goto LAB_028b77f0;
  }
  else {
    iVar20 = -(uint)(0.0 < fVar41);
LAB_028b7738:
    *(int *)(param_3 + 4) = iVar20;
    *(undefined4 *)(param_3 + 0xc) = 1;
  }
LAB_028b7744:
  FUN_028b7e7c(param_1,param_2,param_3);
  uVar9 = *(uint *)(param_3 + 0xc);
LAB_028b77f0:
  uVar10 = (ulong)(uVar9 + 1 & 7);
  fVar11 = *(float *)(param_3 + 0x10 + (ulong)(uVar9 & 7) * 4);
  lVar1 = param_3 + (ulong)(uVar9 & 7) * 0x10;
  fVar11 = (fVar41 - fVar11) / (*(float *)(param_3 + 0x10 + uVar10 * 4) - fVar11);
  if (fVar11 <= 0.0) {
    uVar17 = *(undefined8 *)(lVar1 + 0x38);
    uVar13 = *(undefined8 *)(lVar1 + 0x30);
  }
  else {
    lVar2 = param_3 + uVar10 * 0x10;
    if (1.0 <= fVar11) {
      uVar17 = *(undefined8 *)(lVar2 + 0x38);
      uVar13 = *(undefined8 *)(lVar2 + 0x30);
    }
    else {
      fVar29 = (float)*(undefined8 *)(lVar2 + 0x38);
      fVar30 = (float)((ulong)*(undefined8 *)(lVar2 + 0x38) >> 0x20);
      uVar13 = *(undefined8 *)(lVar2 + 0x30);
      fVar27 = (float)uVar13;
      fVar28 = (float)((ulong)uVar13 >> 0x20);
      uVar38 = *(undefined8 *)(lVar1 + 0x30);
      puVar6 = (undefined8 *)(param_3 + 0x30 + (ulong)(uVar9 - 1 & 7) * 0x10);
      uVar17 = puVar6[1];
      uVar13 = *puVar6;
      pfVar7 = (float *)(param_3 + 0x30 + (ulong)(uVar9 + 2 & 7) * 0x10);
      auVar40 = NEON_fmov(0x40400000,4);
      fVar12 = (float)uVar38;
      fVar15 = (float)((ulong)uVar38 >> 0x20);
      fVar16 = (float)*(undefined8 *)(lVar1 + 0x38);
      fVar18 = (float)((ulong)*(undefined8 *)(lVar1 + 0x38) >> 0x20);
      fVar19 = (fVar27 - (float)uVar13) * 0.5;
      fVar21 = (fVar28 - (float)((ulong)uVar13 >> 0x20)) * 0.5;
      fVar23 = (fVar29 - (float)uVar17) * 0.5;
      fVar25 = (fVar30 - (float)((ulong)uVar17 >> 0x20)) * 0.5;
      fVar31 = (*pfVar7 - fVar12) * 0.5;
      fVar33 = (pfVar7[1] - fVar15) * 0.5;
      fVar34 = (pfVar7[2] - fVar16) * 0.5;
      fVar35 = (pfVar7[3] - fVar18) * 0.5;
      auVar39 = NEON_fmov(0xc0400000,4);
      fVar41 = *(float *)PTR_FloatQuaternionEpsilon_0437a118;
      fVar12 = fVar12 + (fVar19 + ((((fVar27 * auVar40._0_4_ + fVar12 * auVar39._0_4_) -
                                    (fVar19 + fVar19)) - fVar31) +
                                  (fVar31 + fVar19 + ((fVar12 + fVar12) - (fVar27 + fVar27))) *
                                  fVar11) * fVar11) * fVar11;
      fVar15 = fVar15 + (fVar21 + ((((fVar28 * auVar40._4_4_ + fVar15 * auVar39._4_4_) -
                                    (fVar21 + fVar21)) - fVar33) +
                                  (fVar33 + fVar21 + ((fVar15 + fVar15) - (fVar28 + fVar28))) *
                                  fVar11) * fVar11) * fVar11;
      fVar16 = fVar16 + (fVar23 + ((((fVar29 * auVar40._8_4_ + fVar16 * auVar39._8_4_) -
                                    (fVar23 + fVar23)) - fVar34) +
                                  (fVar34 + fVar23 + ((fVar16 + fVar16) - (fVar29 + fVar29))) *
                                  fVar11) * fVar11) * fVar11;
      fVar18 = fVar18 + (fVar25 + ((((fVar30 * auVar40._12_4_ + fVar18 * auVar39._12_4_) -
                                    (fVar25 + fVar25)) - fVar35) +
                                  (fVar35 + fVar25 + ((fVar18 + fVar18) - (fVar30 + fVar30))) *
                                  fVar11) * fVar11) * fVar11;
      fVar19 = fVar12 * fVar12;
      fVar21 = fVar15 * fVar15;
      auVar39._4_4_ = fVar21;
      auVar39._0_4_ = fVar19;
      auVar39._8_4_ = fVar16 * fVar16;
      auVar39._12_4_ = fVar18 * fVar18;
      auVar40._4_4_ = fVar21;
      auVar40._0_4_ = fVar19;
      auVar40._8_4_ = fVar16 * fVar16;
      auVar40._12_4_ = fVar18 * fVar18;
      auVar39 = NEON_ext(auVar39,auVar40,8,1);
      fVar19 = auVar39._0_4_ + fVar19;
      fVar21 = auVar39._4_4_ + fVar21;
      fVar11 = fVar19 + fVar21;
      fVar19 = fVar19 + fVar21;
      auVar8._4_4_ = fVar19;
      auVar8._0_4_ = fVar11;
      auVar8._8_4_ = fVar11;
      auVar8._12_4_ = fVar19;
      auVar39 = NEON_frsqrte(auVar8,4);
      iVar20 = -(uint)(fVar11 < fVar41);
      iVar22 = -(uint)(fVar19 < fVar41);
      iVar24 = -(uint)(fVar11 < fVar41);
      iVar26 = -(uint)(fVar19 < fVar41);
      auVar36._0_4_ = auVar39._0_4_ * fVar11;
      auVar36._4_4_ = auVar39._4_4_ * fVar19;
      auVar36._8_4_ = auVar39._8_4_ * fVar11;
      auVar36._12_4_ = auVar39._12_4_ * fVar19;
      auVar40 = NEON_frsqrts(auVar39,auVar36,4);
      auVar32._0_4_ = auVar39._0_4_ * auVar40._0_4_;
      auVar32._4_4_ = auVar39._4_4_ * auVar40._4_4_;
      auVar32._8_4_ = auVar39._8_4_ * auVar40._8_4_;
      auVar32._12_4_ = auVar39._12_4_ * auVar40._12_4_;
      auVar37._0_4_ = fVar11 * auVar32._0_4_;
      auVar37._4_4_ = fVar19 * auVar32._4_4_;
      auVar37._8_4_ = fVar11 * auVar32._8_4_;
      auVar37._12_4_ = fVar19 * auVar32._12_4_;
      auVar39 = NEON_frsqrts(auVar32,auVar37,4);
      fVar12 = auVar32._0_4_ * auVar39._0_4_ * fVar12;
      fVar15 = auVar32._4_4_ * auVar39._4_4_ * fVar15;
      fVar16 = auVar32._8_4_ * auVar39._8_4_ * fVar16;
      fVar18 = auVar32._12_4_ * auVar39._12_4_ * fVar18;
      uVar13 = CONCAT17((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                        CONCAT16((byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10),
                                 CONCAT15((byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar22 >> 8),
                                          CONCAT14(SUB41(fVar15,0) & ~(byte)iVar22,
                                                   CONCAT13((byte)((uint)fVar12 >> 0x18) &
                                                            ~(byte)((uint)iVar20 >> 0x18),
                                                            CONCAT12((byte)((uint)fVar12 >> 0x10) &
                                                                     ~(byte)((uint)iVar20 >> 0x10),
                                                                     CONCAT11((byte)((uint)fVar12 >>
                                                                                    8) &
                                                                              ~(byte)((uint)iVar20
                                                                                     >> 8),
                                                                              SUB41(fVar12,0) &
                                                                              ~(byte)iVar20)))))));
      uVar17 = CONCAT17((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                        CONCAT16((byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10),
                                 CONCAT15((byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar26 >> 8),
                                          CONCAT14(SUB41(fVar18,0) & ~(byte)iVar26,
                                                   CONCAT13((byte)((uint)fVar16 >> 0x18) &
                                                            ~(byte)((uint)iVar24 >> 0x18),
                                                            CONCAT12((byte)((uint)fVar16 >> 0x10) &
                                                                     ~(byte)((uint)iVar24 >> 0x10),
                                                                     CONCAT11((byte)((uint)fVar16 >>
                                                                                    8) &
                                                                              ~(byte)((uint)iVar24
                                                                                     >> 8),
                                                                              SUB41(fVar16,0) &
                                                                              ~(byte)iVar24)))))));
    }
  }
  auVar14._8_8_ = uVar17;
  auVar14._0_8_ = uVar13;
  return auVar14;
}


