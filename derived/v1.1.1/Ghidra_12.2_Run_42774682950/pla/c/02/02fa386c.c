/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fa386c; name: FUN_02fa386c
 */


void FUN_02fa386c(undefined8 *param_1,long *param_2,float *param_3,undefined1 param_4,long param_5)

{
  ushort *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar11;
  float fVar12;
  undefined1 auVar8 [16];
  float fVar13;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar14;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined4 local_58;
  undefined1 auStack_54 [4];
  float local_50 [4];
  
  FUN_02fd66e4(param_1,0xe);
  *param_1 = &PTR_LAB_042b85e0;
  param_1[9] = param_2;
  if (param_2 != (long *)0x0) {
    FUN_032d645c(param_2);
  }
  plVar4 = param_1 + 10;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  lVar3 = 0;
  if (param_5 != 0) {
    lVar3 = param_5 - (long)plVar4;
  }
  param_1[10] = lVar3;
  *(ushort *)((long)param_1 + 0x1a) = *(ushort *)((long)param_1 + 0x1a) | 8;
  *(undefined1 *)((long)param_1 + 0x19) = param_4;
  auVar8._0_8_ = CONCAT44(ABS(param_3[1]),ABS(*param_3));
  auVar8._8_4_ = ABS(param_3[2]);
  auVar8._12_4_ = 0x3f800000;
  param_1[0x11] = auVar8._8_8_;
  param_1[0x10] = auVar8._0_8_;
  (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0xb,(int *)((long)param_1 + 0x5c));
  auVar8 = *(undefined1 (*) [16])(param_1 + 0x10);
  auVar21 = NEON_frecpe(auVar8,4);
  uVar5 = *(int *)(param_1 + 0xb) - 1;
  uVar6 = *(int *)((long)param_1 + 0x5c) - 1;
  *(uint *)(param_1 + 0xb) = uVar5;
  *(uint *)((long)param_1 + 0x5c) = uVar6;
  uVar5 = uVar5 | uVar5 >> 1;
  auVar23 = NEON_frecps(auVar8,auVar21,4);
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar6 = uVar6 | uVar6 >> 1;
  uVar6 = uVar6 | uVar6 >> 2;
  auVar22._0_4_ = auVar21._0_4_ * auVar23._0_4_;
  auVar22._4_4_ = auVar21._4_4_ * auVar23._4_4_;
  auVar22._8_4_ = auVar21._8_4_ * auVar23._8_4_;
  auVar22._12_4_ = auVar21._12_4_ * auVar23._12_4_;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  uVar6 = uVar6 | uVar6 >> 4;
  uVar6 = uVar6 | uVar6 >> 8;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x55555555);
  iVar14 = -(uint)(auVar8._0_4_ == 0.0);
  iVar18 = -(uint)(auVar8._4_4_ == 0.0);
  iVar19 = -(uint)(auVar8._8_4_ == 0.0);
  iVar20 = -(uint)(auVar8._12_4_ == 0.0);
  uVar6 = uVar6 | uVar6 >> 0x10;
  auVar8 = NEON_frecps(auVar8,auVar22,4);
  uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
  uVar6 = uVar6 - (uVar6 >> 1 & 0x55555555);
  uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
  fVar7 = auVar22._0_4_ * auVar8._0_4_;
  fVar11 = auVar22._4_4_ * auVar8._4_4_;
  fVar12 = auVar22._8_4_ * auVar8._8_4_;
  fVar13 = auVar22._12_4_ * auVar8._12_4_;
  uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f) * 0x1010101;
  uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101;
  auVar21._0_8_ =
       CONCAT17((byte)((uint)fVar11 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18),
                CONCAT16((byte)((uint)fVar11 >> 0x10) & ~(byte)((uint)iVar18 >> 0x10),
                         CONCAT15((byte)((uint)fVar11 >> 8) & ~(byte)((uint)iVar18 >> 8),
                                  CONCAT14(SUB41(fVar11,0) & ~(byte)iVar18,
                                           CONCAT13((byte)((uint)fVar7 >> 0x18) &
                                                    ~(byte)((uint)iVar14 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar7 >> 0x10) &
                                                             ~(byte)((uint)iVar14 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar7 >> 8) &
                                                                      ~(byte)((uint)iVar14 >> 8),
                                                                      SUB41(fVar7,0) & ~(byte)iVar14
                                                                     )))))));
  auVar21[8] = SUB41(fVar12,0) & ~(byte)iVar19;
  auVar21[9] = (byte)((uint)fVar12 >> 8) & ~(byte)((uint)iVar19 >> 8);
  auVar21[10] = (byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10);
  auVar21[0xb] = (byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18);
  auVar21[0xc] = SUB41(fVar13,0) & ~(byte)iVar20;
  auVar21[0xd] = (byte)((uint)fVar13 >> 8) & ~(byte)((uint)iVar20 >> 8);
  auVar21[0xe] = (byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar20 >> 0x10);
  auVar21[0xf] = (byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18);
  *(uint *)(param_1 + 0xc) = uVar5 >> 0x18;
  *(uint *)((long)param_1 + 100) = uVar6 >> 0x18;
  *(char *)((long)param_1 + 0x1c) = (char)(uVar6 >> 0x18) + (char)(uVar5 >> 0x18) + '\x02';
  param_1[0xf] = auVar21._8_8_;
  param_1[0xe] = auVar21._0_8_;
  (**(code **)(*param_2 + 0x28))(param_2,0,0,local_50,auStack_54,&local_58);
  lVar3 = param_1[10];
  *(undefined1 *)(param_1 + 0xd) = 0;
  auVar15._0_8_ =
       CONCAT44(local_50[0] * *(float *)((long)param_1 + 0x84),*(float *)(param_1 + 0x10) * 0.0);
  auVar15._8_4_ = *(float *)(param_1 + 0x11) * 0.0;
  auVar15._12_4_ = *(float *)((long)param_1 + 0x8c) * 0.0;
  auVar23._0_8_ =
       CONCAT44(*(float *)((long)param_1 + 0x84) * local_50[0],
                *(float *)(param_1 + 0x10) * (float)*(int *)(param_1 + 0xb));
  auVar23._8_4_ = *(float *)(param_1 + 0x11) * (float)*(int *)((long)param_1 + 0x5c);
  auVar23._12_4_ = *(float *)((long)param_1 + 0x8c) * 0.0;
  param_1[0x13] = auVar15._8_8_;
  param_1[0x12] = auVar15._0_8_;
  param_1[0x15] = auVar23._8_8_;
  param_1[0x14] = auVar23._0_8_;
  if ((lVar3 == 0) || (lVar3 + (long)plVar4 == 0)) {
    if ((0 < *(int *)(param_1 + 0xb)) && (0 < *(int *)((long)param_1 + 0x5c))) {
      lVar2 = FUN_02fa40f4(param_1[9],2);
      lVar3 = 0;
      if (lVar2 != 0) {
        lVar3 = lVar2 - (long)plVar4;
      }
      param_1[10] = lVar3;
    }
  }
  else {
    FUN_032d645c();
    lVar3 = *plVar4;
  }
  if ((lVar3 != 0) && (lVar3 = lVar3 + (long)plVar4, lVar3 != 0)) {
    iVar14 = *(int *)(param_1 + 0xb);
    iVar18 = *(int *)((long)param_1 + 0x5c);
    fVar7 = (float)(iVar14 + -1);
    auVar9 = ZEXT416((uint)fVar7);
    fVar11 = (float)(iVar18 + -1);
    auVar16 = ZEXT416((uint)fVar11);
    uVar5 = (uint)fVar7;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = uVar5 - (uVar5 >> 1 & 0x55555555);
    uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
    uVar6 = (uint)fVar11;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = uVar6 - (uVar6 >> 1 & 0x55555555);
    uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
    uVar5 = 0x20 - ((uVar5 + (uVar5 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
    uVar6 = 0x20 - ((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
    if (uVar6 <= uVar5) {
      uVar5 = uVar6;
    }
    if (*(int *)(lVar3 + 0x50) < (int)(0x20 - uVar5)) {
      iVar14 = 0x1f - (*(int *)(lVar3 + 0x50) + uVar5);
      plVar4 = (long *)(lVar3 + 0x20);
      lVar2 = *plVar4;
      if ((*(short *)((long)plVar4 + (long)iVar14 * 0x18 + lVar2 + 0x10) != 0) &&
         (*(short *)((long)plVar4 + (long)iVar14 * 0x18 + lVar2 + 0x12) != 0)) {
        plVar4 = (long *)((long)plVar4 + (long)iVar14 * 0x18 + lVar2);
        puVar1 = (ushort *)(*plVar4 + (long)plVar4);
        auVar17._2_2_ = 0;
        auVar17._0_2_ = *puVar1;
        auVar17._4_2_ = puVar1[1];
        auVar17._6_2_ = 0;
        auVar17._8_2_ = puVar1[2];
        auVar17._10_2_ = 0;
        auVar17._12_2_ = puVar1[3];
        auVar17._14_2_ = 0;
        auVar10._2_2_ = 0;
        auVar10._0_2_ = puVar1[4];
        auVar10._4_2_ = puVar1[5];
        auVar10._6_2_ = 0;
        auVar10._8_2_ = puVar1[6];
        auVar10._10_2_ = 0;
        auVar10._12_2_ = puVar1[7];
        auVar10._14_2_ = 0;
        auVar21 = NEON_ucvtf(auVar17,4);
        auVar8 = NEON_ucvtf(auVar10,4);
        fVar7 = *(float *)(lVar3 + 0x40);
        auVar16._0_4_ = *(float *)(lVar3 + 0x30) + auVar21._0_4_ * fVar7;
        auVar16._4_4_ = *(float *)(lVar3 + 0x34) + auVar21._4_4_ * fVar7;
        auVar16._8_4_ = *(float *)(lVar3 + 0x38) + auVar21._8_4_ * fVar7;
        auVar16._12_4_ = *(float *)(lVar3 + 0x3c) + auVar21._12_4_ * fVar7;
        auVar9._0_4_ = *(float *)(lVar3 + 0x30) + auVar8._0_4_ * fVar7;
        auVar9._4_4_ = *(float *)(lVar3 + 0x34) + auVar8._4_4_ * fVar7;
        auVar9._8_4_ = *(float *)(lVar3 + 0x38) + auVar8._8_4_ * fVar7;
        auVar9._12_4_ = *(float *)(lVar3 + 0x3c) + auVar8._12_4_ * fVar7;
      }
      fVar11 = (float)NEON_fminnmv(auVar16,4);
      fVar7 = (float)NEON_fmaxnmv(auVar9,4);
      *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_1 + 0x13);
      *(undefined4 *)((long)param_1 + 0x9c) = *(undefined4 *)((long)param_1 + 0x9c);
      param_1[0x12] =
           CONCAT44(fVar11 * *(float *)((long)param_1 + 0x84),*(undefined4 *)(param_1 + 0x12));
      param_1[0x15] = param_1[0x15];
      param_1[0x14] = CONCAT44(fVar7 * *(float *)((long)param_1 + 0x84),(int)param_1[0x14]);
    }
    else {
      FUN_02fa4cac(param_1,0,0,iVar14,iVar18,local_50,&local_58);
      *(float *)((long)param_1 + 0x94) = local_50[0];
      *(undefined4 *)((long)param_1 + 0xa4) = local_58;
    }
  }
  return;
}


