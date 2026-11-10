/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0335e110; name: FUN_0335e110
 */


void FUN_0335e110(undefined1 param_1 [16],long param_2,undefined1 (*param_3) [12],
                 undefined8 *param_4)

{
  undefined1 (*pauVar1) [12];
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  bool bVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int iVar27;
  undefined8 uVar28;
  int iVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  float fVar40;
  undefined1 auVar41 [16];
  undefined8 uVar42;
  
  fVar21 = (float)*(undefined8 *)(*param_3 + 8);
  fVar22 = (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
  fVar19 = (float)*(undefined8 *)*param_3;
  fVar20 = (float)((ulong)*(undefined8 *)*param_3 >> 0x20);
  uVar17 = *(undefined8 *)param_3[2];
  uVar15 = *(undefined8 *)(param_3[1] + 4);
  fVar10 = param_1._0_4_ - (float)uVar15;
  fVar16 = (float)((ulong)uVar15 >> 0x20);
  fVar12 = param_1._4_4_ - fVar16;
  fVar14 = param_1._8_4_ - (float)uVar17;
  fVar18 = (float)((ulong)uVar17 >> 0x20);
  fVar23 = fVar10 * fVar19 + fVar12 * fVar20 + fVar14 * fVar21;
  fVar25 = fVar10 * fVar19 + fVar12 * fVar20 + fVar14 * fVar21;
  fVar33 = fVar23 * fVar23;
  fVar24 = fVar10 * fVar10 + fVar12 * fVar12 + fVar14 * fVar14;
  pauVar1 = (undefined1 (*) [12])(param_2 + 0x30);
  fVar40 = (float)*(undefined8 *)(param_2 + 0x38);
  fVar38 = (float)((ulong)*(undefined8 *)(param_2 + 0x38) >> 0x20);
  fVar36 = (float)*(undefined8 *)*pauVar1;
  fVar37 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  fVar11 = fVar10 - fVar19 * fVar23;
  fVar13 = fVar12 - fVar20 * fVar25;
  fVar23 = fVar14 - fVar21 * fVar23;
  fVar25 = (param_1._12_4_ - fVar18) - fVar22 * fVar25;
  fVar26 = *(float *)param_3[4];
  fVar30 = fVar36 * fVar11;
  fVar31 = fVar37 * fVar13;
  fVar32 = fVar40 * fVar23;
  auVar35._4_4_ = fVar31;
  auVar35._0_4_ = fVar30;
  auVar35._8_4_ = fVar32;
  auVar35._12_4_ = fVar38 * fVar25;
  auVar41._4_4_ = fVar31;
  auVar41._0_4_ = fVar30;
  auVar41._8_4_ = fVar32;
  auVar41._12_4_ = fVar38 * fVar25;
  auVar35 = NEON_ext(auVar35,auVar41,8,1);
  lVar2 = 0x38;
  if (0.0 < fVar30 + fVar31 + auVar35._0_4_) {
    lVar2 = 0x34;
  }
  fVar30 = *(float *)param_3[5];
  if (0.0 < *(float *)(*param_3 + lVar2)) {
    auVar5._12_4_ = fVar38;
    auVar5._0_12_ = *pauVar1;
    auVar6._12_4_ = fVar38;
    auVar6._0_12_ = *pauVar1;
    auVar35 = NEON_ext(auVar5,auVar6,4,1);
    auVar3._12_4_ = fVar22;
    auVar3._0_12_ = *param_3;
    auVar4._12_4_ = fVar22;
    auVar4._0_12_ = *param_3;
    auVar41 = NEON_ext(auVar3,auVar4,4,1);
    auVar39._0_4_ = auVar41._0_4_ * fVar36 - fVar19 * auVar35._0_4_;
    auVar39._4_4_ = auVar41._4_4_ * fVar37 - fVar20 * auVar35._4_4_;
    auVar39._8_4_ = fVar19 * fVar40 - fVar21 * fVar36;
    auVar39._12_4_ = fVar20 * fVar38 - fVar22 * fVar37;
    auVar35 = NEON_ext(auVar39,auVar39,4,1);
    fVar36 = auVar35._0_4_;
    fVar37 = auVar35._4_4_;
    fVar40 = auVar39._0_4_ * auVar39._0_4_ + fVar36 * fVar36 + fVar37 * fVar37;
    uVar28 = CONCAT44(auVar39._0_4_ * auVar39._0_4_ + fVar36 * fVar36 + fVar37 * fVar37,fVar40);
    fVar31 = 0.0;
    fVar32 = 0.0;
    if (1.1920929e-07 < fVar40) {
      uVar42 = NEON_frsqrte(uVar28,4);
      fVar31 = (float)uVar42;
      fVar32 = (float)((ulong)uVar42 >> 0x20);
      uVar42 = NEON_frsqrts(uVar28,CONCAT44(fVar32 * fVar32,fVar31 * fVar31),4);
      fVar31 = fVar31 * (float)uVar42;
      fVar32 = fVar32 * (float)((ulong)uVar42 >> 0x20);
      uVar28 = NEON_frsqrts(uVar28,CONCAT44(fVar32 * fVar32,fVar31 * fVar31),4);
      fVar31 = (float)uVar28 * fVar31;
      fVar32 = (float)((ulong)uVar28 >> 0x20) * fVar32;
      fVar36 = fVar36 * fVar31;
      fVar37 = fVar37 * fVar32;
      auVar39._0_4_ = auVar39._0_4_ * fVar31;
      auVar39._4_4_ = auVar39._4_4_ * fVar32;
      fVar31 = fVar11 * fVar36 + fVar13 * fVar37 + fVar23 * auVar39._0_4_;
      fVar32 = fVar11 * fVar36 + fVar13 * fVar37 + fVar23 * auVar39._0_4_;
      if (fVar31 * fVar31 <= fVar26 * fVar26 * fVar33) {
        fVar11 = fVar11 - fVar36 * fVar31;
        fVar13 = fVar13 - fVar37 * fVar32;
        fVar23 = fVar23 - auVar39._0_4_ * fVar31;
        fVar25 = fVar25 - auVar39._4_4_ * fVar32;
        fVar31 = 0.0;
        fVar32 = 0.0;
      }
    }
    fVar26 = fVar26 + *(float *)(*param_3 + lVar2);
    if ((fVar24 - fVar31 * fVar31) - fVar33 <= fVar33 * fVar26 * fVar26) {
      if (fVar31 == 0.0) goto LAB_0335e1a8;
      fVar11 = fVar36 * fVar31;
      fVar13 = fVar37 * fVar32;
      fVar23 = auVar39._0_4_ * fVar31;
      fVar25 = auVar39._4_4_ * fVar32;
    }
  }
  else if (fVar24 <= (fVar26 * fVar26 + 1.0) * fVar33) goto LAB_0335e1a8;
  if (fVar30 < 1.0) {
    fVar26 = fVar23 * fVar23 + fVar11 * fVar11 + fVar13 * fVar13;
    uVar28 = CONCAT44(fVar23 * fVar23 + fVar11 * fVar11 + fVar13 * fVar13,fVar26);
    fVar31 = fVar24 * 0.001;
    bVar7 = false;
    bVar8 = true;
    bVar9 = false;
    if (1.1920929e-07 <= fVar26) {
      bVar7 = false;
      bVar8 = false;
      bVar9 = true;
      if (!NAN(fVar26) && !NAN(fVar31)) {
        bVar7 = fVar26 < fVar31;
        bVar8 = fVar26 == fVar31;
        bVar9 = false;
      }
    }
    if (!bVar8 && bVar7 == bVar9) {
      uVar42 = NEON_frecpe(uVar28,4);
      uVar34 = NEON_frecps(uVar28,uVar42,4);
      fVar26 = (float)uVar42 * (float)uVar34;
      fVar31 = (float)((ulong)uVar42 >> 0x20) * (float)((ulong)uVar34 >> 0x20);
      uVar28 = NEON_frecps(uVar28,CONCAT44(fVar31,fVar26),4);
      fVar24 = fVar24 * fVar26 * (float)uVar28;
      fVar14 = (fVar10 * fVar10 + fVar12 * fVar12 + fVar14 * fVar14) *
               fVar31 * (float)((ulong)uVar28 >> 0x20);
      uVar42 = CONCAT44(fVar14,fVar24);
      uVar28 = NEON_frsqrte(uVar42,4);
      fVar10 = (float)uVar28;
      fVar12 = (float)((ulong)uVar28 >> 0x20);
      uVar28 = NEON_frsqrts(uVar42,CONCAT44(fVar12 * fVar12,fVar10 * fVar10),4);
      fVar10 = fVar10 * (float)uVar28;
      fVar12 = fVar12 * (float)((ulong)uVar28 >> 0x20);
      uVar28 = NEON_frsqrts(uVar42,CONCAT44(fVar12 * fVar12,fVar10 * fVar10),4);
      iVar27 = -(uint)(fVar24 <= 0.0);
      iVar29 = -(uint)(fVar14 <= 0.0);
      fVar24 = fVar24 * (float)uVar28 * fVar10;
      fVar14 = fVar14 * (float)((ulong)uVar28 >> 0x20) * fVar12;
      fVar12 = (float)CONCAT13((byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18),
                               CONCAT12((byte)((uint)fVar24 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar24 >> 8) &
                                                  ~(byte)((uint)iVar27 >> 8),
                                                  SUB41(fVar24,0) & ~(byte)iVar27)));
      uVar28 = NEON_fmov(0x3f800000,4);
      fVar10 = fVar30 + ((float)uVar28 - fVar30) * fVar12;
      fVar30 = fVar30 + ((float)((ulong)uVar28 >> 0x20) - fVar30) *
                        (float)(CONCAT17((byte)((uint)fVar14 >> 0x18) &
                                         ~(byte)((uint)iVar29 >> 0x18),
                                         CONCAT16((byte)((uint)fVar14 >> 0x10) &
                                                  ~(byte)((uint)iVar29 >> 0x10),
                                                  CONCAT15((byte)((uint)fVar14 >> 8) &
                                                           ~(byte)((uint)iVar29 >> 8),
                                                           CONCAT14(SUB41(fVar14,0) & ~(byte)iVar29,
                                                                    fVar12)))) >> 0x20);
      fVar11 = fVar11 * fVar10;
      fVar13 = fVar13 * fVar30;
      fVar23 = fVar23 * fVar10;
      fVar10 = fVar19 * fVar11;
      fVar14 = fVar20 * fVar13;
      fVar24 = fVar21 * fVar23;
      fVar12 = fVar10 + fVar14 + fVar24;
      fVar24 = fVar10 + fVar14 + fVar24;
      fVar11 = fVar11 - fVar19 * fVar12;
      fVar13 = fVar13 - fVar20 * fVar24;
      fVar23 = fVar23 - fVar21 * fVar12;
      fVar25 = fVar25 * fVar30 - fVar22 * fVar24;
    }
  }
  uVar15 = CONCAT44(fVar16 + fVar13,(float)uVar15 + fVar11);
  uVar17 = CONCAT44(fVar18 + fVar25,(float)uVar17 + fVar23);
LAB_0335e1a8:
  param_4[1] = uVar17;
  *param_4 = uVar15;
  return;
}


