/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030c7920; name: FUN_030c7920
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030c7920(long param_1,long param_2,int param_3,uint param_4,undefined8 *param_5,
                 double *param_6,undefined8 *param_7,long *param_8)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  long *plVar3;
  double dVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar9;
  double dVar8;
  double dVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar26;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  
  *param_8 = param_2;
  lVar2 = *(long *)(param_2 + 0x78);
  if ((lVar2 == 0) || (*(char *)(lVar2 + 0x18) != '\x15')) {
    *(undefined4 *)(param_8 + 3) = 0xffffffff;
    param_8[4] = lVar2;
  }
  else {
    plVar3 = (long *)(lVar2 + (ulong)(byte)param_3 * 8 + 0x48);
    lVar2 = *plVar3;
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar2 + (long)plVar3;
    }
    param_8[4] = lVar2;
    *(uint *)(param_8 + 3) = param_3 << 0x1d | 0x1fffffff;
  }
  uVar6 = NEON_fmov(0x3f800000,4);
  pauVar1 = (undefined1 (*) [16])
            (*(long *)(*(long *)(*(long *)(param_1 + 0x298) + 8) + 0x150) +
            (long)*(int *)(param_2 + 0x80) * 0x80);
  param_8[1] = (long)pauVar1;
  param_8[2] = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x298) + 8) + 0x898) + 0x48) +
               (ulong)*(ushort *)(param_2 + 0x8a) * 0x50;
  fVar5 = (float)uVar6;
  if ((param_4 & 1) == 0) {
    dVar4 = *(double *)pauVar1[1];
    dVar8 = *(double *)(pauVar1[1] + 8);
    dVar11 = 0.0;
    dVar10 = *(double *)pauVar1[2];
    auVar20 = *pauVar1;
  }
  else {
    fVar7 = -(float)*(undefined8 *)(param_1 + 0x2b8);
    fVar9 = -(float)((ulong)*(undefined8 *)(param_1 + 0x2b8) >> 0x20);
    dVar11 = (double)fVar7;
    dVar4 = *(double *)pauVar1[1] + dVar11 * (double)(float)*(undefined8 *)(pauVar1[3] + 8);
    fVar12 = (float)((ulong)*(undefined8 *)pauVar1[3] >> 0x20);
    auVar32._0_4_ = (float)*(undefined8 *)(pauVar1[2] + 8) * fVar7 * 0.5;
    auVar32._4_4_ = (float)((ulong)*(undefined8 *)(pauVar1[2] + 8) >> 0x20) * fVar9 * 0.5;
    auVar32._8_4_ = (float)*(undefined8 *)pauVar1[3] * fVar7 * 0.5;
    auVar32._12_4_ = fVar12 * fVar9 * 0.5;
    dVar8 = *(double *)(pauVar1[1] + 8) +
            dVar11 * (double)(float)((ulong)*(undefined8 *)(pauVar1[3] + 8) >> 0x20);
    auVar33 = NEON_ext(auVar32,auVar32,4,1);
    fVar7 = auVar32._8_4_ * auVar32._8_4_ +
            auVar32._0_4_ * auVar32._0_4_ + auVar32._4_4_ * auVar32._4_4_;
    fVar9 = auVar32._8_4_ * auVar32._8_4_ +
            auVar32._0_4_ * auVar32._0_4_ + auVar32._4_4_ * auVar32._4_4_;
    auVar20 = *pauVar1;
    auVar29 = NEON_ext(auVar20,auVar20,8,1);
    uVar28 = NEON_ext(auVar20._0_8_,auVar29._0_8_,4,1);
    fVar7 = fVar7 * (fVar7 * (fVar7 * -0.0029562549 + -0.02144013) + -0.33352822) + fVar5;
    fVar13 = auVar20._0_4_;
    fVar26 = auVar20._4_4_;
    fVar27 = auVar20._8_4_;
    fVar34 = auVar20._12_4_;
    auVar29._0_4_ = auVar33._0_4_ * fVar13 - auVar32._0_4_ * (float)uVar28;
    auVar29._4_4_ = auVar33._4_4_ * fVar26 - auVar32._4_4_ * (float)((ulong)uVar28 >> 0x20);
    auVar29._8_4_ = auVar32._0_4_ * fVar27 - auVar32._8_4_ * fVar13;
    auVar29._12_4_ = auVar32._4_4_ * fVar34 - auVar32._12_4_ * fVar26;
    auVar30 = NEON_ext(auVar29,auVar29,4,1);
    dVar10 = dVar11 * (double)fVar12 + *(double *)pauVar1[2];
    auVar33._0_4_ = auVar32._0_4_ * fVar13;
    auVar33._4_4_ = auVar32._4_4_ * fVar26;
    auVar33._8_4_ = auVar32._8_4_ * fVar27;
    auVar33._12_4_ = auVar32._12_4_ * fVar34;
    auVar20 = NEON_ext(auVar33,auVar33,8,1);
    fVar14 = fVar7 * fVar34 - (auVar33._0_4_ + auVar33._4_4_ + auVar20._0_4_);
    fVar12 = auVar32._0_4_ * fVar34 + auVar30._0_4_ + fVar13 * fVar7;
    fVar9 = auVar32._4_4_ * fVar34 + auVar30._4_4_ +
            fVar26 * (fVar9 * (fVar9 * (fVar9 * -0.0029562549 + -0.02144013) + -0.33352822) +
                     (float)((ulong)uVar6 >> 0x20));
    fVar13 = auVar32._8_4_ * fVar34 + auVar29._0_4_ + fVar27 * fVar7;
    auVar30._0_4_ = fVar12 * fVar12;
    auVar30._4_4_ = fVar9 * fVar9;
    auVar30._8_4_ = fVar13 * fVar13;
    auVar30._12_4_ = fVar14 * fVar14;
    auVar20 = NEON_ext(auVar30,auVar30,8,1);
    fVar7 = auVar20._0_4_ + auVar20._4_4_;
    uVar6 = CONCAT44(auVar30._0_4_ + auVar30._4_4_ + fVar7,auVar30._0_4_ + auVar30._4_4_ + fVar7);
    uVar28 = NEON_frsqrte(uVar6,4);
    fVar7 = (float)uVar28;
    fVar26 = (float)((ulong)uVar28 >> 0x20);
    uVar28 = NEON_frsqrts(uVar6,CONCAT44(fVar26 * fVar26,fVar7 * fVar7),4);
    fVar7 = fVar7 * (float)uVar28;
    fVar26 = fVar26 * (float)((ulong)uVar28 >> 0x20);
    uVar6 = NEON_frsqrts(uVar6,CONCAT44(fVar26 * fVar26,fVar7 * fVar7),4);
    fVar7 = (float)uVar6 * fVar7;
    fVar26 = (float)((ulong)uVar6 >> 0x20) * fVar26;
    dVar11 = dVar11 * 0.0 + 0.0;
    auVar20._0_4_ = fVar7 * fVar12;
    auVar20._4_4_ = fVar26 * fVar9;
    auVar20._8_4_ = fVar7 * fVar13;
    auVar20._12_4_ = fVar26 * fVar14;
  }
  param_5[1] = auVar20._8_8_;
  *param_5 = auVar20._0_8_;
  auVar15._8_8_ = _UNK_03888e28;
  auVar15._0_8_ = _DAT_03888e20;
  *param_6 = dVar4;
  param_6[1] = dVar8;
  auVar29 = a64_TBL(ZEXT816(0),auVar20,auVar15);
  param_6[2] = dVar10;
  param_6[3] = dVar11;
  auVar17._0_4_ = -*(float *)(param_2 + 0xa0);
  auVar17._4_4_ = -*(float *)(param_2 + 0xa4);
  auVar17._8_4_ = -*(float *)(param_2 + 0xa8);
  auVar31._8_8_ = _UNK_03888d78;
  auVar31._0_8_ = _DAT_03888d70;
  auVar17._12_4_ = *(undefined4 *)(param_2 + 0xac);
  auVar21._8_8_ = _UNK_038890f8;
  auVar21._0_8_ = _DAT_038890f0;
  auVar20 = a64_TBL(ZEXT816(0),auVar20,auVar21);
  auVar22._8_8_ = _UNK_03889108;
  auVar22._0_8_ = _DAT_03889100;
  auVar32 = a64_TBL(ZEXT816(0),auVar17,auVar31);
  auVar33 = a64_TBL(ZEXT816(0),auVar17,auVar22);
  auVar18._0_4_ = auVar29._0_4_ * auVar33._0_4_ - auVar20._0_4_ * auVar32._0_4_;
  auVar18._4_4_ = auVar29._4_4_ * auVar33._4_4_ - auVar20._4_4_ * auVar32._4_4_;
  auVar18._8_4_ = auVar29._8_4_ * auVar33._8_4_ - auVar20._8_4_ * auVar32._8_4_;
  auVar18._12_4_ = auVar29._12_4_ * auVar33._12_4_ - auVar20._12_4_ * auVar32._12_4_;
  auVar23._8_8_ = _UNK_038895d8;
  auVar23._0_8_ = _DAT_038895d0;
  auVar30 = a64_TBL(ZEXT816(0),auVar18,auVar23);
  fVar9 = auVar30._12_4_ - (auVar29._12_4_ * auVar32._12_4_ + auVar20._12_4_ * auVar33._12_4_);
  fVar12 = -(auVar30._0_4_ - (auVar29._0_4_ * auVar32._0_4_ + auVar20._0_4_ * auVar33._0_4_));
  fVar13 = -(auVar30._4_4_ - (auVar29._4_4_ * auVar32._4_4_ + auVar20._4_4_ * auVar33._4_4_));
  auVar16._0_8_ = CONCAT44(fVar13,fVar12);
  auVar16._8_4_ = -(auVar30._8_4_ - (auVar29._8_4_ * auVar32._8_4_ + auVar20._8_4_ * auVar33._8_4_))
  ;
  auVar16._12_4_ = -fVar9;
  auVar24._8_8_ = auVar16._8_8_;
  auVar24._0_8_ = auVar16._0_8_;
  auVar25._0_12_ = auVar24._0_12_;
  auVar25._12_4_ = fVar9;
  auVar19._0_4_ = fVar12 + fVar12;
  auVar19._4_4_ = fVar13 + fVar13;
  auVar19._8_4_ = auVar16._8_4_ + auVar16._8_4_;
  auVar19._12_4_ = fVar9 + fVar9;
  auVar29 = NEON_ext(auVar25,auVar25,8,1);
  auVar20 = NEON_ext(auVar19,auVar19,8,1);
  fVar14 = auVar29._0_4_ * auVar20._0_4_;
  fVar36 = auVar19._4_4_ * fVar12 + auVar19._8_4_ * fVar9;
  fVar37 = auVar19._8_4_ * fVar12 - auVar19._4_4_ * fVar9;
  fVar7 = auVar19._4_4_ * fVar12 - auVar19._8_4_ * fVar9;
  fVar26 = auVar19._8_4_ * fVar13 + auVar19._0_4_ * fVar9;
  fVar34 = auVar19._8_4_ * fVar12 + auVar19._4_4_ * fVar9;
  fVar9 = auVar19._8_4_ * fVar13 - auVar19._0_4_ * fVar9;
  fVar35 = fVar5 - (auVar19._0_4_ * fVar12 + auVar19._4_4_ * fVar13);
  fVar13 = fVar5 - (auVar19._4_4_ * fVar13 + fVar14);
  fVar5 = fVar5 - (auVar19._0_4_ * fVar12 + fVar14);
  fVar12 = *(float *)(param_2 + 0xc);
  fVar14 = *(float *)(param_2 + 0x1c);
  fVar27 = *(float *)(param_2 + 0x2c);
  param_7[1] = (ulong)(uint)fVar37;
  *param_7 = CONCAT44(fVar36,fVar13);
  param_7[3] = (ulong)(uint)fVar26;
  param_7[2] = CONCAT44(fVar5,fVar7);
  dVar4 = dVar4 - (double)(fVar34 * fVar27 + fVar13 * fVar12 + fVar7 * fVar14);
  dVar8 = dVar8 - (double)(fVar9 * fVar27 + fVar36 * fVar12 + fVar5 * fVar14);
  fVar13 = (float)dVar4;
  dVar11 = dVar11 - (double)(fVar27 * 0.0 + fVar12 * 0.0 + fVar14 * 0.0);
  fVar5 = (float)dVar8;
  dVar10 = dVar10 - (double)(fVar35 * fVar27 + fVar37 * fVar12 + fVar26 * fVar14);
  fVar12 = (float)dVar10;
  fVar7 = (float)dVar11;
  param_7[5] = (ulong)(uint)fVar35;
  param_7[4] = CONCAT44(fVar9,fVar34);
  *(float *)(param_7 + 7) = fVar12;
  *(float *)((long)param_7 + 0x3c) = fVar7;
  *(float *)(param_7 + 6) = fVar13;
  *(float *)((long)param_7 + 0x34) = fVar5;
  param_7[9] = CONCAT44((float)(dVar11 - (double)fVar7),(float)(dVar10 - (double)fVar12));
  param_7[8] = CONCAT44((float)(dVar8 - (double)fVar5),(float)(dVar4 - (double)fVar13));
  param_8[6] = (long)param_7;
  return;
}


