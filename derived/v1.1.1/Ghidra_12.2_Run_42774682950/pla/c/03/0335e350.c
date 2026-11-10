/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0335e350; name: FUN_0335e350
 */


void FUN_0335e350(long param_1,undefined1 (*param_2) [12],undefined1 (*param_3) [12],
                 undefined1 (*param_4) [16],undefined1 (*param_5) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long lVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar14;
  undefined1 auVar13 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar32;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar33;
  int iVar34;
  undefined8 uVar35;
  int iVar36;
  undefined8 uVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  
  fVar27 = (float)*(undefined8 *)(*param_2 + 8);
  fVar28 = (float)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
  uVar37 = *(undefined8 *)*param_2;
  fVar25 = (float)uVar37;
  fVar26 = (float)((ulong)uVar37 >> 0x20);
  auVar39._12_4_ = fVar28;
  auVar39._0_12_ = *param_2;
  auVar40._12_4_ = fVar28;
  auVar40._0_12_ = *param_2;
  auVar11 = NEON_ext(auVar39,auVar40,8,1);
  fVar22 = (float)*(undefined8 *)(*param_3 + 8);
  fVar19 = (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
  uVar29 = *(undefined8 *)*param_3;
  fVar21 = (float)uVar29;
  fVar23 = (float)((ulong)uVar29 >> 0x20);
  uVar37 = NEON_ext(uVar37,auVar11._0_8_,4,1);
  fVar20 = (float)((ulong)uVar37 >> 0x20);
  auVar11._12_4_ = fVar19;
  auVar11._0_12_ = *param_3;
  auVar31._12_4_ = fVar19;
  auVar31._0_12_ = *param_3;
  auVar11 = NEON_ext(auVar11,auVar31,8,1);
  uVar29 = NEON_ext(uVar29,auVar11._0_8_,4,1);
  fVar24 = (float)((ulong)uVar29 >> 0x20);
  auVar12._0_4_ = fVar25 * (float)uVar29 - fVar21 * (float)uVar37;
  auVar12._4_4_ = fVar26 * fVar24 - fVar23 * fVar20;
  auVar12._8_4_ = fVar27 * fVar21 - fVar22 * fVar25;
  auVar12._12_4_ = fVar28 * fVar23 - fVar19 * fVar26;
  auVar11 = NEON_ext(auVar12,auVar12,4,1);
  fVar32 = auVar11._0_4_;
  fVar38 = auVar11._4_4_;
  fVar33 = fVar32 * fVar32 + fVar38 * fVar38 + auVar12._0_4_ * auVar12._0_4_;
  uVar35 = CONCAT44(fVar32 * fVar32 + fVar38 * fVar38 + auVar12._0_4_ * auVar12._0_4_,fVar33);
  if (fVar33 <= 1.1920929e-07) {
    lVar9 = *(long *)(param_1 + 0x68);
  }
  else {
    uVar10 = NEON_frsqrte(uVar35,4);
    fVar33 = (float)uVar10;
    fVar14 = (float)((ulong)uVar10 >> 0x20);
    uVar10 = NEON_frsqrts(uVar35,CONCAT44(fVar14 * fVar14,fVar33 * fVar33),4);
    fVar33 = fVar33 * (float)uVar10;
    fVar14 = fVar14 * (float)((ulong)uVar10 >> 0x20);
    uVar35 = NEON_frsqrts(uVar35,CONCAT44(fVar14 * fVar14,fVar33 * fVar33),4);
    fVar33 = (float)uVar35 * fVar33;
    fVar14 = (float)((ulong)uVar35 >> 0x20) * fVar14;
    auVar13._0_4_ = fVar32 * fVar33;
    auVar13._4_4_ = fVar38 * fVar14;
    auVar13._8_4_ = auVar12._0_4_ * fVar33;
    auVar13._12_4_ = auVar12._4_4_ * fVar14;
    auVar11 = NEON_ext(auVar13,auVar13,4,1);
    lVar9 = *(long *)(param_1 + 0x68);
    fVar15 = fVar21 * *(float *)(param_3[1] + 4);
    fVar16 = fVar23 * *(float *)(param_3[1] + 8);
    fVar17 = fVar22 * *(float *)param_3[2];
    fVar18 = fVar19 * *(float *)(param_3[2] + 4);
    auVar30._0_4_ = fVar21 * auVar11._0_4_ - (float)uVar29 * auVar13._0_4_;
    auVar30._4_4_ = fVar23 * auVar11._4_4_ - fVar24 * auVar13._4_4_;
    auVar30._8_4_ = fVar22 * auVar13._0_4_ - fVar21 * auVar13._8_4_;
    auVar30._12_4_ = fVar19 * auVar13._4_4_ - fVar23 * auVar13._12_4_;
    auVar39 = NEON_ext(auVar30,auVar30,4,1);
    fVar19 = (float)uVar37 * auVar13._0_4_ - fVar25 * auVar11._0_4_;
    fVar20 = fVar20 * auVar13._4_4_ - fVar26 * auVar11._4_4_;
    fVar21 = fVar25 * auVar13._8_4_ - fVar27 * auVar13._0_4_;
    fVar23 = fVar26 * auVar13._12_4_ - fVar28 * auVar13._4_4_;
    auVar3._4_4_ = fVar20;
    auVar3._0_4_ = fVar19;
    auVar3._8_4_ = fVar21;
    auVar3._12_4_ = fVar23;
    auVar4._4_4_ = fVar20;
    auVar4._0_4_ = fVar19;
    auVar4._8_4_ = fVar21;
    auVar4._12_4_ = fVar23;
    auVar31 = NEON_ext(auVar3,auVar4,4,1);
    fVar25 = fVar25 * *(float *)(param_2[1] + 4);
    fVar26 = fVar26 * *(float *)(param_2[1] + 8);
    fVar27 = fVar27 * *(float *)param_2[2];
    fVar28 = fVar28 * *(float *)(param_2[2] + 4);
    auVar1._4_4_ = fVar16;
    auVar1._0_4_ = fVar15;
    auVar1._8_4_ = fVar17;
    auVar1._12_4_ = fVar18;
    auVar2._4_4_ = fVar16;
    auVar2._0_4_ = fVar15;
    auVar2._8_4_ = fVar17;
    auVar2._12_4_ = fVar18;
    auVar11 = NEON_ext(auVar1,auVar2,8,1);
    fVar21 = auVar13._0_4_ * (*(float *)(param_2[1] + 4) + *(float *)(param_3[1] + 4));
    fVar23 = auVar13._4_4_ * (*(float *)(param_2[1] + 8) + *(float *)(param_3[1] + 8));
    fVar22 = auVar13._8_4_ * (*(float *)param_2[2] + *(float *)param_3[2]);
    fVar24 = auVar13._12_4_ * (*(float *)(param_2[2] + 4) + *(float *)(param_3[2] + 4));
    auVar5._4_4_ = fVar23;
    auVar5._0_4_ = fVar21;
    auVar5._8_4_ = fVar22;
    auVar5._12_4_ = fVar24;
    auVar6._4_4_ = fVar23;
    auVar6._0_4_ = fVar21;
    auVar6._8_4_ = fVar22;
    auVar6._12_4_ = fVar24;
    auVar40 = NEON_ext(auVar5,auVar6,8,1);
    fVar24 = (fVar21 + fVar23 + auVar40._0_4_) * 0.5;
    auVar7._4_4_ = fVar26;
    auVar7._0_4_ = fVar25;
    auVar7._8_4_ = fVar27;
    auVar7._12_4_ = fVar28;
    auVar8._4_4_ = fVar26;
    auVar8._0_4_ = fVar25;
    auVar8._8_4_ = fVar27;
    auVar8._12_4_ = fVar28;
    auVar40 = NEON_ext(auVar7,auVar8,8,1);
    fVar25 = auVar40._0_4_ + fVar25 + fVar26;
    fVar21 = auVar11._0_4_ + fVar15 + fVar16;
    auVar11 = *(undefined1 (*) [16])(lVar9 + 0x20);
    fVar23 = fVar33 * (auVar31._0_4_ * fVar21 + fVar32 * fVar24 + auVar39._0_4_ * fVar25);
    fVar22 = fVar14 * (auVar31._4_4_ * fVar21 + fVar38 * fVar24 + auVar39._4_4_ * fVar25);
    fVar33 = fVar33 * (fVar19 * fVar21 + auVar12._0_4_ * fVar24 + auVar30._0_4_ * fVar25);
    fVar14 = fVar14 * (fVar20 * fVar21 + auVar12._4_4_ * fVar24 + auVar30._4_4_ * fVar25);
    if (ABS(fVar33) <= auVar11._8_4_ &&
        (ABS(fVar22) <= auVar11._4_4_ && ABS(fVar23) <= auVar11._0_4_)) {
      fVar21 = (float)*(undefined8 *)*param_4 - fVar23;
      fVar20 = (float)((ulong)*(undefined8 *)*param_4 >> 0x20) - fVar22;
      fVar25 = (float)*(undefined8 *)(*param_4 + 8) - fVar33;
      fVar26 = fVar21 * fVar21 + fVar20 * fVar20 + fVar25 * fVar25;
      fVar27 = fVar21 * fVar21 + fVar20 * fVar20 + fVar25 * fVar25;
      uVar29 = CONCAT44(fVar27,fVar26);
      fVar28 = auVar13._0_4_ * (float)*(undefined8 *)(lVar9 + 0x30) +
               auVar13._4_4_ * (float)((ulong)*(undefined8 *)(lVar9 + 0x30) >> 0x20) +
               auVar13._8_4_ * (float)*(undefined8 *)(lVar9 + 0x38);
      fVar19 = auVar13._8_4_ * fVar25 + auVar13._0_4_ * fVar21 + auVar13._4_4_ * fVar20;
      fVar21 = auVar13._8_4_ * fVar25 + auVar13._0_4_ * fVar21 + auVar13._4_4_ * fVar20;
      if (0.0 < fVar28 * fVar19) {
        fVar20 = *(float *)(param_2[4] + 4);
        fVar25 = *(float *)(param_3[4] + 4);
      }
      else {
        fVar20 = *(float *)(param_2[4] + 8);
        fVar25 = *(float *)(param_3[4] + 8);
      }
      fVar20 = (*(float *)param_2[4] + *(float *)param_3[4] + fVar28 * (fVar20 + fVar25)) * 0.5;
      fVar25 = fVar19 * fVar19;
      if (fVar25 <= (fVar26 - fVar25) * fVar20 * fVar20) {
        *(ulong *)(*param_5 + 8) = CONCAT44(fVar14,fVar33);
        *(ulong *)*param_5 = CONCAT44(fVar22,fVar23);
      }
      else {
        fVar20 = (*(float *)param_2[5] + *(float *)param_3[5]) * 0.5;
        if ((fVar20 < 1.0) && (fVar26 * 0.001 < fVar25)) {
          uVar37 = NEON_frsqrte(uVar29,4);
          fVar25 = (float)uVar37;
          fVar38 = (float)((ulong)uVar37 >> 0x20);
          uVar10 = NEON_frsqrts(uVar29,CONCAT44(fVar38 * fVar38,fVar25 * fVar25),4);
          uVar37 = NEON_frecpe(CONCAT44(fVar21,fVar19),4);
          uVar35 = NEON_frecps(CONCAT44(fVar21,fVar19),uVar37,4);
          fVar28 = (float)uVar37 * (float)uVar35;
          fVar32 = (float)((ulong)uVar37 >> 0x20) * (float)((ulong)uVar35 >> 0x20);
          fVar25 = fVar25 * (float)uVar10;
          fVar38 = fVar38 * (float)((ulong)uVar10 >> 0x20);
          uVar29 = NEON_frsqrts(uVar29,CONCAT44(fVar38 * fVar38,fVar25 * fVar25),4);
          uVar37 = NEON_frecps(CONCAT44(fVar21,fVar19),CONCAT44(fVar32,fVar28),4);
          iVar34 = -(uint)(fVar26 <= 0.0);
          iVar36 = -(uint)(fVar27 <= 0.0);
          fVar26 = fVar26 * (float)uVar29 * fVar25;
          fVar27 = fVar27 * (float)((ulong)uVar29 >> 0x20) * fVar38;
          fVar25 = (float)CONCAT13((byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18),
                                   CONCAT12((byte)((uint)fVar26 >> 0x10) &
                                            ~(byte)((uint)iVar34 >> 0x10),
                                            CONCAT11((byte)((uint)fVar26 >> 8) &
                                                     ~(byte)((uint)iVar34 >> 8),
                                                     SUB41(fVar26,0) & ~(byte)iVar34)));
          uVar29 = NEON_fmov(0x3f800000,4);
          fVar19 = fVar19 * (fVar20 + ((float)uVar29 - fVar20) *
                                      ABS(fVar28 * (float)uVar37) * fVar25);
          fVar21 = fVar21 * (fVar20 + ((float)((ulong)uVar29 >> 0x20) - fVar20) *
                                      ABS(fVar32 * (float)((ulong)uVar37 >> 0x20)) *
                                      (float)(CONCAT17((byte)((uint)fVar27 >> 0x18) &
                                                       ~(byte)((uint)iVar36 >> 0x18),
                                                       CONCAT16((byte)((uint)fVar27 >> 0x10) &
                                                                ~(byte)((uint)iVar36 >> 0x10),
                                                                CONCAT15((byte)((uint)fVar27 >> 8) &
                                                                         ~(byte)((uint)iVar36 >> 8),
                                                                         CONCAT14(SUB41(fVar27,0) &
                                                                                  ~(byte)iVar36,
                                                                                  fVar25)))) >> 0x20
                                             ));
        }
        *(float *)(*param_5 + 8) = fVar33 + auVar13._8_4_ * fVar19;
        *(float *)(*param_5 + 0xc) = fVar14 + auVar13._12_4_ * fVar21;
        *(float *)*param_5 = fVar23 + auVar13._0_4_ * fVar19;
        *(float *)(*param_5 + 4) = fVar22 + auVar13._4_4_ * fVar21;
      }
      return;
    }
  }
  *(undefined4 *)
   (*(long *)(*(long *)(param_1 + 0x70) + 0x28) +
    ((ulong)((long)param_2 - *(long *)(lVar9 + 0x48)) >> 4) * -0x3333333333333330 + 0xc) = 2;
  *(undefined4 *)
   (*(long *)(*(long *)(param_1 + 0x70) + 0x28) +
    ((ulong)((long)param_3 - *(long *)(*(long *)(param_1 + 0x68) + 0x48)) >> 4) *
    -0x3333333333333330 + 0xc) = 2;
  if (*(int *)(param_3[5] + 4) < *(int *)(param_2[5] + 4)) {
    FUN_0335e110(*param_4,*(undefined8 *)(param_1 + 0x68),param_3,param_5);
    auVar11 = *param_5;
  }
  else {
    FUN_0335e110(*param_4,*(undefined8 *)(param_1 + 0x68),param_2,param_5);
    auVar11 = *param_5;
    param_2 = param_3;
  }
  FUN_0335e110(auVar11,*(undefined8 *)(param_1 + 0x68),param_2,param_5);
  return;
}


