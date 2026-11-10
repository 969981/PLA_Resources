/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d508c; name: FUN_031d508c
 */


undefined8
FUN_031d508c(long *param_1,undefined1 (*param_2) [12],undefined8 *param_3,undefined8 *param_4,
            undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int *piVar10;
  long lVar11;
  int *piVar12;
  int iVar13;
  long *plVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  undefined8 uVar34;
  float fVar36;
  float fVar37;
  undefined1 auVar35 [16];
  undefined8 uVar38;
  
  piVar3 = (int *)param_1[3];
  iVar13 = piVar3[-5];
  if ((int *)param_1[2] == piVar3) {
    uVar20 = 0;
    uVar22 = NEON_fmov(0x3f800000,4);
  }
  else {
    fVar15 = (float)*param_3;
    fVar16 = (float)((ulong)*param_3 >> 0x20);
    fVar17 = (float)param_3[1];
    fVar19 = (float)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
    uVar7 = *(undefined8 *)*param_2;
    fVar18 = (float)((ulong)uVar7 >> 0x20);
    auVar21._12_4_ = fVar19;
    auVar21._0_12_ = *param_2;
    auVar6._12_4_ = fVar19;
    auVar6._0_12_ = *param_2;
    auVar21 = NEON_ext(auVar21,auVar6,8,1);
    lVar11 = *(long *)(*param_1 + 0x20);
    iVar4 = *(int *)(lVar11 + 0x40);
    plVar14 = (long *)(lVar11 + 0x38);
    if (iVar4 <= iVar13) {
      plVar14 = (long *)(lVar11 + 0xf0);
    }
    uVar23 = NEON_ext(uVar7,auVar21._0_8_,4,1);
    iVar2 = 0;
    if (iVar4 <= iVar13) {
      iVar2 = iVar4;
    }
    uVar22 = NEON_fmov(0x3f800000,4);
    puVar5 = (undefined8 *)(*plVar14 + (long)(iVar13 - iVar2) * 0x10);
    uVar25 = puVar5[1];
    uVar24 = *puVar5;
    uVar20 = 0;
    piVar10 = piVar3 + -5;
    piVar12 = (int *)param_1[2];
    do {
      fVar28 = (float)uVar25;
      fVar30 = (float)((ulong)uVar25 >> 0x20);
      fVar26 = (float)uVar24;
      fVar27 = (float)((ulong)uVar24 >> 0x20);
      if (*piVar12 < iVar4) {
        iVar13 = 0;
        plVar14 = (long *)(lVar11 + 0x38);
      }
      else {
        plVar14 = (long *)(lVar11 + 0xf0);
        iVar13 = iVar4;
      }
      puVar5 = (undefined8 *)(*plVar14 + (long)(*piVar12 - iVar13) * 0x10);
      uVar25 = puVar5[1];
      uVar24 = *puVar5;
      auVar31._0_4_ = (float)uVar24 - fVar26;
      fVar29 = (float)((ulong)uVar24 >> 0x20);
      auVar31._4_4_ = fVar29 - fVar27;
      auVar31._8_4_ = (float)uVar25 - fVar28;
      fVar37 = (float)((ulong)uVar25 >> 0x20);
      auVar31._12_4_ = fVar37 - fVar30;
      auVar21 = NEON_ext(auVar31,auVar31,4,1);
      auVar32._0_4_ = (float)uVar7 * auVar21._0_4_ - (float)uVar23 * auVar31._0_4_;
      auVar32._4_4_ = fVar18 * auVar21._4_4_ - (float)((ulong)uVar23 >> 0x20) * auVar31._4_4_;
      auVar32._8_4_ =
           (float)*(undefined8 *)(*param_2 + 8) * auVar31._0_4_ - (float)uVar7 * auVar31._8_4_;
      auVar32._12_4_ = fVar19 * auVar31._4_4_ - fVar18 * auVar31._12_4_;
      auVar21 = NEON_ext(auVar32,auVar32,4,1);
      fVar33 = auVar21._0_4_;
      fVar26 = (fVar26 + (float)uVar24) * fVar33;
      fVar36 = auVar21._4_4_;
      fVar27 = (fVar27 + fVar29) * fVar36;
      fVar28 = (fVar28 + (float)uVar25) * auVar32._0_4_;
      fVar30 = (fVar30 + fVar37) * auVar32._4_4_;
      auVar8._4_4_ = fVar27;
      auVar8._0_4_ = fVar26;
      auVar8._8_4_ = fVar28;
      auVar8._12_4_ = fVar30;
      auVar9._4_4_ = fVar27;
      auVar9._0_4_ = fVar26;
      auVar9._8_4_ = fVar28;
      auVar9._12_4_ = fVar30;
      auVar21 = NEON_ext(auVar8,auVar9,8,1);
      fVar27 = (fVar26 + fVar27 + auVar21._0_4_) * -0.5;
      fVar26 = ((float)*param_4 - fVar15) * fVar33;
      fVar30 = ((float)((ulong)*param_4 >> 0x20) - fVar16) * fVar36;
      fVar29 = ((float)param_4[1] - fVar17) * auVar32._0_4_;
      auVar35._0_4_ = fVar15 * fVar33;
      auVar35._4_4_ = fVar16 * fVar36;
      auVar35._8_4_ = fVar17 * auVar32._0_4_;
      auVar35._12_4_ = (float)((ulong)param_3[1] >> 0x20) * fVar27;
      fVar28 = fVar26 + fVar30 + fVar29;
      fVar29 = fVar26 + fVar30 + fVar29;
      auVar21 = NEON_ext(auVar35,auVar35,8,1);
      fVar27 = auVar21._0_4_ + fVar27;
      fVar26 = auVar35._0_4_ + auVar35._4_4_ + fVar27;
      if (fVar28 == 0.0) {
        if (fVar26 == 0.0) {
          if (((*(byte *)(piVar10 + 4) >> 2 & 1) == 0) && (piVar10[3] <= (int)param_1[1])) {
            return 0;
          }
        }
        else if (fVar26 < 0.0) {
          return 0;
        }
      }
      else {
        uVar34 = NEON_frecpe(CONCAT44(fVar29,fVar28),4);
        uVar38 = NEON_frecps(CONCAT44(fVar29,fVar28),uVar34,4);
        fVar30 = (float)uVar34 * (float)uVar38;
        fVar37 = (float)((ulong)uVar34 >> 0x20) * (float)((ulong)uVar38 >> 0x20);
        uVar34 = NEON_frecps(CONCAT44(fVar29,fVar28),CONCAT44(fVar37,fVar30),4);
        fVar26 = -(fVar26 * fVar30 * (float)uVar34);
        uVar34 = CONCAT44(-((auVar35._0_4_ + auVar35._4_4_ + fVar27) *
                           fVar37 * (float)((ulong)uVar34 >> 0x20)),fVar26);
        if (fVar28 < 0.0) {
          if (fVar26 <= (float)uVar20) {
            return 0;
          }
          uVar22 = NEON_fmin(uVar22,uVar34,4);
        }
        else {
          if ((float)uVar22 <= fVar26) {
            return 0;
          }
          uVar20 = NEON_fmax(uVar20,uVar34,4);
        }
      }
      piVar1 = piVar12 + 5;
      piVar10 = piVar12;
      piVar12 = piVar1;
    } while (piVar3 != piVar1);
  }
  *param_6 = uVar20;
  *param_7 = uVar22;
  if ((float)uVar22 - (float)uVar20 < (float)*param_5) {
    return 0;
  }
  return 1;
}


