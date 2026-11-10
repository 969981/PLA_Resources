/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03076014; name: FUN_03076014
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03076014(undefined8 *param_1,undefined8 *param_2,float *param_3)

{
  uint uVar1;
  undefined1 (*pauVar2) [12];
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar16;
  undefined1 auVar15 [16];
  float fVar22;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  undefined8 uVar33;
  undefined1 auVar34 [16];
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  undefined4 local_14;
  
  pauVar2 = (undefined1 (*) [12])param_1[0x61];
  dVar6 = *(double *)(pauVar2[1] + 4) + (double)(float)*param_2;
  dVar7 = *(double *)pauVar2[2] + (double)(float)((ulong)*param_2 >> 0x20);
  dVar4 = *(double *)(pauVar2[2] + 8) + (double)(float)param_2[1];
  dVar5 = (double)(float)((ulong)param_2[1] >> 0x20) + 0.0;
  uVar9 = NEON_fmov(0x3f800000,4);
  param_1[0x16] = dVar4;
  param_1[0x17] = dVar5;
  param_1[0x14] = dVar6;
  param_1[0x15] = dVar7;
  fVar13 = (float)*(undefined8 *)(*pauVar2 + 8);
  fVar22 = (float)((ulong)*(undefined8 *)(*pauVar2 + 8) >> 0x20);
  uVar33 = *(undefined8 *)*pauVar2;
  fVar10 = (float)uVar33;
  fVar11 = (float)((ulong)uVar33 >> 0x20);
  auVar19._0_4_ = *param_3 * 0.5;
  auVar19._4_4_ = param_3[1] * 0.5;
  auVar19._8_4_ = param_3[2] * 0.5;
  auVar19._12_4_ = param_3[3] * 0.5;
  auVar37 = NEON_ext(auVar19,auVar19,4,1);
  fVar12 = auVar19._0_4_ * auVar19._0_4_ + auVar19._4_4_ * auVar19._4_4_ +
           auVar19._8_4_ * auVar19._8_4_;
  fVar16 = auVar19._0_4_ * auVar19._0_4_ + auVar19._4_4_ * auVar19._4_4_ +
           auVar19._8_4_ * auVar19._8_4_;
  auVar34._12_4_ = fVar22;
  auVar34._0_12_ = *pauVar2;
  auVar29._12_4_ = fVar22;
  auVar29._0_12_ = *pauVar2;
  auVar34 = NEON_ext(auVar34,auVar29,8,1);
  uVar33 = NEON_ext(uVar33,auVar34._0_8_,4,1);
  fVar8 = (float)uVar9;
  fVar12 = fVar12 * (fVar12 * (fVar12 * -0.0029562549 + -0.02144013) + -0.33352822) + fVar8;
  auVar23._0_4_ = fVar10 * auVar37._0_4_ - auVar19._0_4_ * (float)uVar33;
  auVar23._4_4_ = fVar11 * auVar37._4_4_ - auVar19._4_4_ * (float)((ulong)uVar33 >> 0x20);
  auVar23._8_4_ = fVar13 * auVar19._0_4_ - auVar19._8_4_ * fVar10;
  auVar23._12_4_ = fVar22 * auVar19._4_4_ - auVar19._12_4_ * fVar11;
  auVar34 = NEON_ext(auVar23,auVar23,4,1);
  auVar36._0_4_ = auVar19._0_4_ * fVar10;
  auVar36._4_4_ = auVar19._4_4_ * fVar11;
  auVar36._8_4_ = auVar19._8_4_ * fVar13;
  auVar36._12_4_ = auVar19._12_4_ * fVar22;
  auVar24._8_8_ = _UNK_038890f8;
  auVar24._0_8_ = _DAT_038890f0;
  auVar29 = NEON_ext(auVar36,auVar36,8,1);
  fVar10 = auVar19._0_4_ * fVar22 + auVar34._0_4_ + fVar10 * fVar12;
  fVar16 = auVar19._4_4_ * fVar22 + auVar34._4_4_ +
           fVar11 * (fVar16 * (fVar16 * (fVar16 * -0.0029562549 + -0.02144013) + -0.33352822) +
                    (float)((ulong)uVar9 >> 0x20));
  fVar11 = auVar19._8_4_ * fVar22 + auVar23._0_4_ + fVar13 * fVar12;
  fVar13 = fVar12 * fVar22 - (auVar36._0_4_ + auVar36._4_4_ + auVar29._0_4_);
  auVar31._0_4_ = fVar10 * fVar10;
  auVar31._4_4_ = fVar16 * fVar16;
  auVar31._8_4_ = fVar11 * fVar11;
  auVar31._12_4_ = fVar13 * fVar13;
  auVar34 = NEON_ext(auVar31,auVar31,8,1);
  fVar12 = auVar34._0_4_ + auVar34._4_4_;
  uVar33 = CONCAT44(auVar31._0_4_ + auVar31._4_4_ + fVar12,auVar31._0_4_ + auVar31._4_4_ + fVar12);
  uVar9 = NEON_frsqrte(uVar33,4);
  fVar12 = (float)uVar9;
  fVar22 = (float)((ulong)uVar9 >> 0x20);
  uVar9 = NEON_frsqrts(uVar33,CONCAT44(fVar22 * fVar22,fVar12 * fVar12),4);
  fVar12 = fVar12 * (float)uVar9;
  fVar22 = fVar22 * (float)((ulong)uVar9 >> 0x20);
  uVar33 = NEON_frsqrts(uVar33,CONCAT44(fVar22 * fVar22,fVar12 * fVar12),4);
  fVar12 = (float)uVar33 * fVar12;
  fVar22 = (float)((ulong)uVar33 >> 0x20) * fVar22;
  auVar17._8_8_ = _UNK_03888e28;
  auVar17._0_8_ = _DAT_03888e20;
  lVar3 = param_1[0x60];
  auVar37._0_8_ = CONCAT44(fVar22 * fVar16,fVar12 * fVar10);
  auVar37._8_4_ = fVar12 * fVar11;
  auVar37._12_4_ = fVar22 * fVar13;
  param_1[0x19] = auVar37._8_8_;
  param_1[0x18] = auVar37._0_8_;
  auVar29 = a64_TBL(ZEXT816(0),auVar37,auVar17);
  auVar18._0_4_ = -*(float *)(lVar3 + 0xa0);
  auVar18._4_4_ = -*(float *)(lVar3 + 0xa4);
  auVar18._8_4_ = -*(float *)(lVar3 + 0xa8);
  auVar34 = a64_TBL(ZEXT816(0),auVar37,auVar24);
  auVar25._8_8_ = _UNK_03889108;
  auVar25._0_8_ = _DAT_03889100;
  auVar18._12_4_ = *(undefined4 *)(lVar3 + 0xac);
  auVar30._8_8_ = _UNK_03888d78;
  auVar30._0_8_ = _DAT_03888d70;
  auVar31 = a64_TBL(ZEXT816(0),auVar18,auVar30);
  auVar19 = a64_TBL(ZEXT816(0),auVar18,auVar25);
  auVar20._0_4_ = auVar29._0_4_ * auVar19._0_4_ - auVar34._0_4_ * auVar31._0_4_;
  auVar20._4_4_ = auVar29._4_4_ * auVar19._4_4_ - auVar34._4_4_ * auVar31._4_4_;
  auVar20._8_4_ = auVar29._8_4_ * auVar19._8_4_ - auVar34._8_4_ * auVar31._8_4_;
  auVar20._12_4_ = auVar29._12_4_ * auVar19._12_4_ - auVar34._12_4_ * auVar31._12_4_;
  auVar26._8_8_ = _UNK_038895d8;
  auVar26._0_8_ = _DAT_038895d0;
  auVar37 = a64_TBL(ZEXT816(0),auVar20,auVar26);
  fVar12 = auVar37._12_4_ - (auVar29._12_4_ * auVar31._12_4_ + auVar34._12_4_ * auVar19._12_4_);
  fVar10 = -(auVar37._0_4_ - (auVar29._0_4_ * auVar31._0_4_ + auVar34._0_4_ * auVar19._0_4_));
  fVar16 = -(auVar37._4_4_ - (auVar29._4_4_ * auVar31._4_4_ + auVar34._4_4_ * auVar19._4_4_));
  auVar15._0_8_ = CONCAT44(fVar16,fVar10);
  auVar15._8_4_ = -(auVar37._8_4_ - (auVar29._8_4_ * auVar31._8_4_ + auVar34._8_4_ * auVar19._8_4_))
  ;
  auVar15._12_4_ = -fVar12;
  auVar27._8_8_ = auVar15._8_8_;
  auVar27._0_8_ = auVar15._0_8_;
  auVar28._0_12_ = auVar27._0_12_;
  auVar28._12_4_ = fVar12;
  auVar21._0_4_ = fVar10 + fVar10;
  auVar21._4_4_ = fVar16 + fVar16;
  auVar21._8_4_ = auVar15._8_4_ + auVar15._8_4_;
  auVar21._12_4_ = fVar12 + fVar12;
  auVar29 = NEON_ext(auVar28,auVar28,8,1);
  auVar34 = NEON_ext(auVar21,auVar21,8,1);
  fVar11 = auVar29._0_4_ * auVar34._0_4_;
  fVar38 = auVar21._4_4_ * fVar10 + auVar21._8_4_ * fVar12;
  fVar22 = auVar21._4_4_ * fVar10 - auVar21._8_4_ * fVar12;
  fVar39 = auVar21._8_4_ * fVar10 - auVar21._4_4_ * fVar12;
  fVar40 = auVar21._8_4_ * fVar16 + auVar21._0_4_ * fVar12;
  fVar32 = auVar21._8_4_ * fVar10 + auVar21._4_4_ * fVar12;
  fVar35 = auVar21._8_4_ * fVar16 - auVar21._0_4_ * fVar12;
  fVar13 = fVar8 - (auVar21._0_4_ * fVar10 + auVar21._4_4_ * fVar16);
  fVar12 = fVar8 - (auVar21._4_4_ * fVar16 + fVar11);
  fVar8 = fVar8 - (auVar21._0_4_ * fVar10 + fVar11);
  fVar10 = *(float *)(lVar3 + 0xc);
  uVar33 = CONCAT44(fVar38,fVar12);
  uVar14 = CONCAT44(fVar8,fVar22);
  uVar9 = CONCAT44(fVar35,fVar32);
  fVar11 = *(float *)(lVar3 + 0x2c);
  auVar34 = NEON_fmov(0x3f800000,4);
  fVar16 = *(float *)(lVar3 + 0x1c);
  param_1[0x9a] = 8;
  param_1[0x9d] = auVar34._8_8_;
  param_1[0x9c] = auVar34._0_8_;
  param_1[1] = (ulong)(uint)fVar39;
  *param_1 = uVar33;
  param_1[3] = (ulong)(uint)fVar40;
  param_1[2] = uVar14;
  param_1[0x9e] = 0;
  param_1[0x6f] = (ulong)(uint)fVar39;
  param_1[0x6e] = uVar33;
  param_1[0x71] = (ulong)(uint)fVar40;
  param_1[0x70] = uVar14;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  dVar6 = dVar6 - (double)(fVar32 * fVar11 + fVar12 * fVar10 + fVar22 * fVar16);
  fVar22 = (float)dVar6;
  dVar7 = dVar7 - (double)(fVar35 * fVar11 + fVar38 * fVar10 + fVar8 * fVar16);
  dVar5 = dVar5 - (double)(fVar11 * 0.0 + fVar10 * 0.0 + fVar16 * 0.0);
  fVar12 = (float)dVar7;
  dVar4 = dVar4 - (double)(fVar13 * fVar11 + fVar39 * fVar10 + fVar40 * fVar16);
  fVar10 = (float)dVar4;
  fVar8 = (float)dVar5;
  uVar33 = CONCAT44((float)(dVar7 - (double)fVar12),(float)(dVar6 - (double)fVar22));
  param_1[5] = (ulong)(uint)fVar13;
  param_1[4] = uVar9;
  *(float *)(param_1 + 7) = fVar10;
  *(float *)((long)param_1 + 0x3c) = fVar8;
  *(float *)(param_1 + 6) = fVar22;
  *(float *)((long)param_1 + 0x34) = fVar12;
  param_1[0x73] = (ulong)(uint)fVar13;
  param_1[0x72] = uVar9;
  *(float *)(param_1 + 0x75) = fVar10;
  *(float *)((long)param_1 + 0x3ac) = fVar8;
  *(float *)(param_1 + 0x74) = fVar22;
  *(float *)((long)param_1 + 0x3a4) = fVar12;
  uVar9 = CONCAT44((float)(dVar5 - (double)fVar8),(float)(dVar4 - (double)fVar10));
  param_1[9] = uVar9;
  param_1[8] = uVar33;
  param_1[0x77] = uVar9;
  param_1[0x76] = uVar33;
  local_14 = 0x34000000;
  uVar1 = FUN_032c91c4((int)param_1,&DAT_03aae430,&local_14);
  if ((uVar1 & 1) != 0) {
    uVar1 = *(uint *)(param_1 + 0x9a);
    *(uint *)(param_1 + 0x9a) = uVar1 | 4;
    if ((ABS((float)param_1[6]) <= 1.1920929e-07 &&
        ABS((float)((ulong)param_1[6] >> 0x20)) <= 1.1920929e-07) &&
        ABS((float)param_1[7]) <= 1.1920929e-07) {
      *(uint *)(param_1 + 0x9a) = uVar1 | 5;
    }
  }
  *(undefined2 *)(param_1 + 0x1ed) = 0xffff;
  return;
}


