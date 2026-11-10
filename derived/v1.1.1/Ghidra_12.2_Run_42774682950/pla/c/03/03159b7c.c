/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03159b7c; name: FUN_03159b7c
 */


void FUN_03159b7c(long param_1,undefined1 (*param_2) [16],float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auVar15 [16];
  undefined1 auVar14 [16];
  undefined1 auVar13 [16];
  undefined1 auVar12 [16];
  undefined1 auVar11 [16];
  undefined1 auVar10 [16];
  undefined1 auVar9 [16];
  undefined1 auVar8 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  auVar17 = *param_2;
  auVar8._2_14_ = auVar17._2_14_;
  auVar8._0_2_ = auVar17._8_2_;
  auVar10._6_10_ = auVar17._6_10_;
  auVar10._0_4_ = auVar8._0_4_;
  auVar10._4_2_ = auVar17._10_2_;
  auVar12._10_6_ = auVar17._10_6_;
  auVar12._0_8_ = auVar10._0_8_;
  auVar12._8_2_ = auVar17._12_2_;
  auVar14._0_12_ = auVar12._0_12_;
  auVar14._12_2_ = auVar17._14_2_;
  auVar14._14_2_ = auVar17._14_2_;
  auVar9._4_12_ = auVar14._4_12_;
  auVar9._0_4_ = auVar10._0_4_ & 0xffff;
  auVar11._8_8_ = auVar14._8_8_;
  auVar11._0_6_ = auVar9._0_6_;
  auVar11._6_2_ = 0;
  auVar13._12_4_ = auVar14._12_4_;
  auVar13._0_10_ = auVar11._0_10_;
  auVar13._10_2_ = 0;
  auVar15._0_14_ = auVar13._0_14_;
  auVar15._14_2_ = 0;
  lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
  auVar16._2_2_ = 0;
  auVar16._0_2_ = auVar17._0_2_;
  auVar16._4_2_ = auVar17._2_2_;
  auVar16._6_2_ = 0;
  auVar16._8_2_ = auVar17._4_2_;
  auVar16._10_2_ = 0;
  auVar16._12_2_ = auVar17._6_2_;
  auVar16._14_2_ = 0;
  auVar17 = NEON_ucvtf(auVar16,4);
  auVar16 = NEON_ucvtf(auVar15,4);
  fVar1 = (float)*(undefined8 *)(lVar7 + 0x90);
  fVar2 = (float)((ulong)*(undefined8 *)(lVar7 + 0x90) >> 0x20);
  fVar3 = (float)*(undefined8 *)(lVar7 + 0x98);
  fVar4 = (float)((ulong)*(undefined8 *)(lVar7 + 0x98) >> 0x20);
  fVar19 = (float)*(undefined8 *)(lVar7 + 0xa0);
  fVar20 = (float)((ulong)*(undefined8 *)(lVar7 + 0xa0) >> 0x20);
  auVar18._0_8_ = CONCAT44(fVar20 + fVar2 * auVar17._4_4_,fVar19 + fVar1 * auVar17._0_4_);
  fVar21 = (float)*(undefined8 *)(lVar7 + 0xa8);
  auVar18._8_4_ = fVar21 + fVar3 * auVar17._8_4_;
  fVar22 = (float)((ulong)*(undefined8 *)(lVar7 + 0xa8) >> 0x20);
  auVar18._12_4_ = fVar22 + fVar4 * auVar17._12_4_;
  auVar17._0_8_ = CONCAT44(fVar20 + fVar2 * auVar16._4_4_,fVar19 + fVar1 * auVar16._0_4_);
  auVar17._8_4_ = fVar21 + fVar3 * auVar16._8_4_;
  auVar17._12_4_ = fVar22 + fVar4 * auVar16._12_4_;
  *(long *)(param_3 + 2) = auVar18._8_8_;
  *(undefined8 *)param_3 = auVar18._0_8_;
  *(long *)(param_3 + 6) = auVar17._8_8_;
  *(undefined8 *)(param_3 + 4) = auVar17._0_8_;
  FUN_03159bfc(param_1 + 0x40,param_3);
  uVar6 = *(undefined8 *)(param_3 + 6);
  uVar5 = *(undefined8 *)(param_3 + 4);
  fVar1 = *(float *)(param_1 + 0x50);
  fVar2 = *(float *)(param_1 + 0x54);
  fVar3 = *(float *)(param_1 + 0x5c);
  param_3[2] = param_3[2] + *(float *)(param_1 + 0x58);
  param_3[3] = param_3[3] + fVar3;
  *param_3 = *param_3 + fVar1;
  param_3[1] = param_3[1] + fVar2;
  fVar1 = *(float *)(param_1 + 0x50);
  fVar2 = *(float *)(param_1 + 0x54);
  fVar3 = *(float *)(param_1 + 0x5c);
  param_3[6] = (float)uVar6 + *(float *)(param_1 + 0x58);
  param_3[7] = (float)((ulong)uVar6 >> 0x20) + fVar3;
  param_3[4] = (float)uVar5 + fVar1;
  param_3[5] = (float)((ulong)uVar5 >> 0x20) + fVar2;
  return;
}


