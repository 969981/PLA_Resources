/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03018628; name: FUN_03018628
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03018628(long param_1,undefined1 (*param_2) [16],undefined8 *param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  float fVar10;
  undefined1 auVar9 [16];
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar20;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  
  fVar16 = (float)*param_3;
  uVar3 = NEON_fmov(0x3f800000,4);
  fVar8 = (float)((ulong)*param_3 >> 0x20);
  fVar2 = (float)uVar3;
  fVar1 = (float)((ulong)uVar3 >> 0x20);
  if (fVar16 <= 0.0) {
    dVar7 = (double)fVar16;
    auVar24._0_4_ = fVar16 * *(float *)(param_2[2] + 8) * 0.5;
    auVar24._4_4_ = fVar8 * *(float *)(param_2[2] + 0xc) * 0.5;
    auVar24._8_4_ = fVar16 * *(float *)param_2[3] * 0.5;
    auVar24._12_4_ = fVar8 * *(float *)(param_2[3] + 4) * 0.5;
    dVar4 = *(double *)param_2[1] + dVar7 * (double)(float)*(undefined8 *)(param_2[3] + 8);
    auVar32 = *param_2;
    auVar31 = NEON_ext(auVar32,auVar32,8,1);
    uVar3 = NEON_ext(auVar32._0_8_,auVar31._0_8_,4,1);
    auVar31 = NEON_ext(auVar24,auVar24,4,1);
    fVar16 = auVar24._8_4_ * auVar24._8_4_ +
             auVar24._0_4_ * auVar24._0_4_ + auVar24._4_4_ * auVar24._4_4_;
    fVar20 = auVar24._8_4_ * auVar24._8_4_ +
             auVar24._0_4_ * auVar24._0_4_ + auVar24._4_4_ * auVar24._4_4_;
    fVar11 = auVar32._0_4_;
    fVar27 = auVar32._4_4_;
    fVar35 = auVar32._8_4_;
    fVar36 = auVar32._12_4_;
    auVar32._0_4_ = auVar31._0_4_ * fVar11 - auVar24._0_4_ * (float)uVar3;
    auVar32._4_4_ = auVar31._4_4_ * fVar27 - auVar24._4_4_ * (float)((ulong)uVar3 >> 0x20);
    auVar32._8_4_ = auVar24._0_4_ * fVar35 - auVar24._8_4_ * fVar11;
    auVar32._12_4_ = auVar24._4_4_ * fVar36 - auVar24._12_4_ * fVar27;
    auVar31 = NEON_ext(auVar32,auVar32,4,1);
    fVar16 = fVar16 * (fVar16 * (fVar16 * -0.0029562549 + -0.02144013) + -0.33352822) + fVar2;
    dVar5 = *(double *)(param_2[1] + 8) +
            dVar7 * (double)(float)((ulong)*(undefined8 *)(param_2[3] + 8) >> 0x20);
    fVar8 = auVar24._0_4_ * fVar36 + auVar31._0_4_ + fVar11 * fVar16;
    fVar20 = auVar24._4_4_ * fVar36 + auVar31._4_4_ +
             fVar27 * (fVar20 * (fVar20 * (fVar20 * -0.0029562549 + -0.02144013) + -0.33352822) +
                      fVar1);
    fVar10 = auVar24._8_4_ * fVar36 + auVar32._0_4_ + fVar35 * fVar16;
    dVar6 = dVar7 * (double)*(float *)(param_2[3] + 4) + *(double *)param_2[2];
    auVar31._0_4_ = auVar24._0_4_ * fVar11;
    auVar31._4_4_ = auVar24._4_4_ * fVar27;
    auVar31._8_4_ = auVar24._8_4_ * fVar35;
    auVar31._12_4_ = auVar24._12_4_ * fVar36;
    auVar32 = NEON_ext(auVar31,auVar31,8,1);
    fVar11 = fVar16 * fVar36 - (auVar31._0_4_ + auVar31._4_4_ + auVar32._0_4_);
    dVar7 = dVar7 * 0.0;
    auVar33._0_4_ = fVar8 * fVar8;
    auVar33._4_4_ = fVar20 * fVar20;
    auVar33._8_4_ = fVar10 * fVar10;
    auVar33._12_4_ = fVar11 * fVar11;
    auVar32 = NEON_ext(auVar33,auVar33,8,1);
    fVar1 = auVar33._0_4_ + auVar33._4_4_;
    fVar16 = auVar32._0_4_ + auVar32._4_4_;
  }
  else {
    dVar6 = (double)fVar16;
    auVar30._0_4_ = fVar16 * (float)*(undefined8 *)param_2[7] * 0.5;
    auVar30._4_4_ = fVar8 * (float)((ulong)*(undefined8 *)param_2[7] >> 0x20) * 0.5;
    auVar30._8_4_ = fVar16 * (float)*(undefined8 *)(param_2[7] + 8) * 0.5;
    auVar30._12_4_ = fVar8 * (float)((ulong)*(undefined8 *)(param_2[7] + 8) >> 0x20) * 0.5;
    auVar33 = NEON_ext(auVar30,auVar30,4,1);
    fVar16 = auVar30._0_4_ * auVar30._0_4_ + auVar30._4_4_ * auVar30._4_4_ +
             auVar30._8_4_ * auVar30._8_4_;
    fVar20 = auVar30._0_4_ * auVar30._0_4_ + auVar30._4_4_ * auVar30._4_4_ +
             auVar30._8_4_ * auVar30._8_4_;
    auVar32 = *param_2;
    auVar31 = NEON_ext(auVar32,auVar32,8,1);
    uVar3 = NEON_ext(auVar32._0_8_,auVar31._0_8_,4,1);
    fVar8 = auVar32._0_4_;
    fVar10 = auVar32._4_4_;
    fVar11 = auVar32._8_4_;
    fVar27 = auVar32._12_4_;
    fVar16 = fVar16 * (fVar16 * (fVar16 * -0.0029562549 + -0.02144013) + -0.33352822) + fVar2;
    dVar4 = *(double *)param_2[1] + dVar6 * (double)(float)*(undefined8 *)param_2[6];
    auVar21._0_4_ = fVar8 * auVar33._0_4_ - auVar30._0_4_ * (float)uVar3;
    auVar21._4_4_ = fVar10 * auVar33._4_4_ - auVar30._4_4_ * (float)((ulong)uVar3 >> 0x20);
    auVar21._8_4_ = fVar11 * auVar30._0_4_ - auVar30._8_4_ * fVar8;
    auVar21._12_4_ = fVar27 * auVar30._4_4_ - auVar30._12_4_ * fVar10;
    auVar32 = NEON_ext(auVar21,auVar21,4,1);
    auVar12._0_4_ = auVar30._0_4_ * fVar8;
    auVar12._4_4_ = auVar30._4_4_ * fVar10;
    auVar12._8_4_ = auVar30._8_4_ * fVar11;
    auVar12._12_4_ = auVar30._12_4_ * fVar27;
    fVar8 = auVar30._0_4_ * fVar27 + auVar32._0_4_ + fVar8 * fVar16;
    fVar20 = auVar30._4_4_ * fVar27 + auVar32._4_4_ +
             fVar10 * (fVar20 * (fVar20 * (fVar20 * -0.0029562549 + -0.02144013) + -0.33352822) +
                      fVar1);
    fVar10 = auVar30._8_4_ * fVar27 + auVar21._0_4_ + fVar11 * fVar16;
    dVar5 = *(double *)(param_2[1] + 8) +
            dVar6 * (double)(float)((ulong)*(undefined8 *)param_2[6] >> 0x20);
    auVar32 = NEON_ext(auVar12,auVar12,8,1);
    dVar7 = dVar6 * (double)(float)((ulong)*(undefined8 *)(param_2[6] + 8) >> 0x20);
    fVar11 = fVar16 * fVar27 - (auVar12._0_4_ + auVar12._4_4_ + auVar32._0_4_);
    dVar6 = *(double *)param_2[2] + dVar6 * (double)(float)*(undefined8 *)(param_2[6] + 8);
    auVar13._0_4_ = fVar8 * fVar8;
    auVar13._4_4_ = fVar20 * fVar20;
    auVar13._8_4_ = fVar10 * fVar10;
    auVar13._12_4_ = fVar11 * fVar11;
    auVar32 = NEON_ext(auVar13,auVar13,8,1);
    fVar1 = auVar13._0_4_ + auVar13._4_4_;
    fVar16 = auVar32._0_4_ + auVar32._4_4_;
  }
  uVar3 = CONCAT44(fVar1 + fVar16,fVar1 + fVar16);
  uVar17 = NEON_frsqrte(uVar3,4);
  fVar1 = (float)uVar17;
  fVar16 = (float)((ulong)uVar17 >> 0x20);
  uVar17 = NEON_frsqrts(uVar3,CONCAT44(fVar16 * fVar16,fVar1 * fVar1),4);
  fVar1 = fVar1 * (float)uVar17;
  fVar16 = fVar16 * (float)((ulong)uVar17 >> 0x20);
  uVar3 = NEON_frsqrts(uVar3,CONCAT44(fVar16 * fVar16,fVar1 * fVar1),4);
  fVar1 = (float)uVar3 * fVar1;
  fVar16 = (float)((ulong)uVar3 >> 0x20) * fVar16;
  auVar9._0_4_ = fVar1 * fVar8;
  auVar9._4_4_ = fVar16 * fVar20;
  auVar9._8_4_ = fVar1 * fVar10;
  auVar9._12_4_ = fVar16 * fVar11;
  auVar14._0_4_ = -*(float *)(param_1 + 0xa0);
  auVar14._4_4_ = -*(float *)(param_1 + 0xa4);
  auVar14._8_4_ = -*(float *)(param_1 + 0xa8);
  auVar14._12_4_ = *(undefined4 *)(param_1 + 0xac);
  auVar18._8_8_ = _UNK_038890f8;
  auVar18._0_8_ = _DAT_038890f0;
  auVar22._8_8_ = _UNK_03888e28;
  auVar22._0_8_ = _DAT_03888e20;
  auVar33 = a64_TBL(ZEXT816(0),auVar9,auVar18);
  auVar32 = a64_TBL(ZEXT816(0),auVar9,auVar22);
  auVar23._8_8_ = _UNK_03888d78;
  auVar23._0_8_ = _DAT_03888d70;
  auVar28._8_8_ = _UNK_03889108;
  auVar28._0_8_ = _DAT_03889100;
  auVar24 = a64_TBL(ZEXT816(0),auVar14,auVar23);
  auVar31 = a64_TBL(ZEXT816(0),auVar14,auVar28);
  auVar34._8_8_ = _UNK_038895d8;
  auVar34._0_8_ = _DAT_038895d0;
  auVar29._0_4_ = auVar32._0_4_ * auVar31._0_4_ - auVar33._0_4_ * auVar24._0_4_;
  auVar29._4_4_ = auVar32._4_4_ * auVar31._4_4_ - auVar33._4_4_ * auVar24._4_4_;
  auVar29._8_4_ = auVar32._8_4_ * auVar31._8_4_ - auVar33._8_4_ * auVar24._8_4_;
  auVar29._12_4_ = auVar32._12_4_ * auVar31._12_4_ - auVar33._12_4_ * auVar24._12_4_;
  auVar30 = a64_TBL(ZEXT816(0),auVar29,auVar34);
  fVar1 = auVar30._12_4_ - (auVar32._12_4_ * auVar24._12_4_ + auVar33._12_4_ * auVar31._12_4_);
  fVar20 = -(auVar30._0_4_ - (auVar32._0_4_ * auVar24._0_4_ + auVar33._0_4_ * auVar31._0_4_));
  fVar10 = -(auVar30._4_4_ - (auVar32._4_4_ * auVar24._4_4_ + auVar33._4_4_ * auVar31._4_4_));
  auVar19._0_8_ = CONCAT44(fVar10,fVar20);
  auVar19._8_4_ = -(auVar30._8_4_ - (auVar32._8_4_ * auVar24._8_4_ + auVar33._8_4_ * auVar31._8_4_))
  ;
  auVar19._12_4_ = -fVar1;
  auVar25._8_8_ = auVar19._8_8_;
  auVar25._0_8_ = auVar19._0_8_;
  auVar26._0_12_ = auVar25._0_12_;
  auVar26._12_4_ = fVar1;
  auVar15._0_4_ = fVar20 + fVar20;
  auVar15._4_4_ = fVar10 + fVar10;
  auVar15._8_4_ = auVar19._8_4_ + auVar19._8_4_;
  auVar15._12_4_ = fVar1 + fVar1;
  auVar31 = NEON_ext(auVar26,auVar26,8,1);
  auVar32 = NEON_ext(auVar15,auVar15,8,1);
  fVar16 = auVar31._0_4_ * auVar32._0_4_;
  fVar38 = auVar15._4_4_ * fVar20 + auVar15._8_4_ * fVar1;
  fVar35 = auVar15._4_4_ * fVar20 - auVar15._8_4_ * fVar1;
  fVar37 = auVar15._8_4_ * fVar10 + auVar15._0_4_ * fVar1;
  fVar8 = auVar15._8_4_ * fVar10 - auVar15._0_4_ * fVar1;
  fVar39 = auVar15._8_4_ * fVar20 - auVar15._4_4_ * fVar1;
  fVar27 = *(float *)(param_1 + 0x2c);
  fVar11 = fVar2 - (auVar15._4_4_ * fVar10 + fVar16);
  fVar16 = fVar2 - (auVar15._0_4_ * fVar20 + fVar16);
  fVar2 = fVar2 - (auVar15._0_4_ * fVar20 + auVar15._4_4_ * fVar10);
  fVar36 = auVar15._8_4_ * fVar20 + auVar15._4_4_ * fVar1;
  fVar20 = *(float *)(param_1 + 0x1c);
  fVar1 = *(float *)(param_1 + 0xc);
  param_4[1] = (ulong)(uint)fVar39;
  *param_4 = CONCAT44(fVar38,fVar11);
  param_4[3] = (ulong)(uint)fVar37;
  param_4[2] = CONCAT44(fVar16,fVar35);
  dVar4 = dVar4 - (double)(fVar36 * fVar27 + fVar11 * fVar1 + fVar35 * fVar20);
  dVar5 = dVar5 - (double)(fVar8 * fVar27 + fVar38 * fVar1 + fVar16 * fVar20);
  dVar7 = (dVar7 + 0.0) - (double)(fVar27 * 0.0 + fVar1 * 0.0 + fVar20 * 0.0);
  fVar16 = (float)dVar4;
  dVar6 = dVar6 - (double)(fVar2 * fVar27 + fVar39 * fVar1 + fVar37 * fVar20);
  fVar1 = (float)dVar5;
  fVar20 = (float)dVar6;
  fVar10 = (float)dVar7;
  param_4[5] = (ulong)(uint)fVar2;
  param_4[4] = CONCAT44(fVar8,fVar36);
  *(float *)(param_4 + 7) = fVar20;
  *(float *)((long)param_4 + 0x3c) = fVar10;
  *(float *)(param_4 + 6) = fVar16;
  *(float *)((long)param_4 + 0x34) = fVar1;
  param_4[9] = CONCAT44((float)(dVar7 - (double)fVar10),(float)(dVar6 - (double)fVar20));
  param_4[8] = CONCAT44((float)(dVar5 - (double)fVar1),(float)(dVar4 - (double)fVar16));
  return;
}


