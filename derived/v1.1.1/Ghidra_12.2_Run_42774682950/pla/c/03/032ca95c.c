/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032ca95c; name: FUN_032ca95c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032ca95c(float *param_1,undefined1 (*param_2) [16],long param_3)

{
  float fVar1;
  float fVar3;
  float fVar4;
  undefined1 auVar2 [16];
  float fVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar13;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar14;
  float fVar18;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 local_40 [16];
  
  FUN_032cb3d8(local_40,param_3);
  auVar2._0_4_ = -*(float *)*param_2;
  auVar2._4_4_ = -*(float *)(*param_2 + 4);
  auVar2._8_4_ = -*(float *)(*param_2 + 8);
  auVar2._12_4_ = *(undefined4 *)(*param_2 + 0xc);
  auVar6._8_8_ = _UNK_038890f8;
  auVar6._0_8_ = _DAT_038890f0;
  auVar8._8_8_ = _UNK_03888e28;
  auVar8._0_8_ = _DAT_03888e20;
  auVar11._8_8_ = _UNK_03888d78;
  auVar11._0_8_ = _DAT_03888d70;
  auVar15._8_8_ = _UNK_03889108;
  auVar15._0_8_ = _DAT_03889100;
  auVar6 = a64_TBL(ZEXT816(0),auVar2,auVar6);
  auVar2 = a64_TBL(ZEXT816(0),auVar2,auVar8);
  auVar12 = a64_TBL(ZEXT816(0),local_40,auVar11);
  auVar9 = a64_TBL(ZEXT816(0),local_40,auVar15);
  fVar1 = *(float *)(param_3 + 0x30);
  fVar3 = *(float *)(param_3 + 0x34);
  fVar4 = *(float *)(param_3 + 0x38);
  fVar5 = *(float *)(param_3 + 0x3c);
  auVar16._0_4_ = auVar2._0_4_ * auVar9._0_4_ - auVar6._0_4_ * auVar12._0_4_;
  auVar16._4_4_ = auVar2._4_4_ * auVar9._4_4_ - auVar6._4_4_ * auVar12._4_4_;
  auVar16._8_4_ = auVar2._8_4_ * auVar9._8_4_ - auVar6._8_4_ * auVar12._8_4_;
  auVar16._12_4_ = auVar2._12_4_ * auVar9._12_4_ - auVar6._12_4_ * auVar12._12_4_;
  auVar17._8_8_ = _UNK_038895d8;
  auVar17._0_8_ = _DAT_038895d0;
  auVar17 = a64_TBL(ZEXT816(0),auVar16,auVar17);
  param_1[2] = -(auVar17._8_4_ - (auVar2._8_4_ * auVar12._8_4_ + auVar6._8_4_ * auVar9._8_4_));
  param_1[3] = auVar17._12_4_ - (auVar2._12_4_ * auVar12._12_4_ + auVar6._12_4_ * auVar9._12_4_);
  *param_1 = -(auVar17._0_4_ - (auVar2._0_4_ * auVar12._0_4_ + auVar6._0_4_ * auVar9._0_4_));
  param_1[1] = -(auVar17._4_4_ - (auVar2._4_4_ * auVar12._4_4_ + auVar6._4_4_ * auVar9._4_4_));
  auVar17 = *param_2;
  auVar9._0_4_ = fVar1 - *(float *)param_2[1];
  auVar9._4_4_ = fVar3 - *(float *)(param_2[1] + 4);
  auVar9._8_4_ = fVar4 - *(float *)(param_2[1] + 8);
  auVar9._12_4_ = fVar5 - *(float *)(param_2[1] + 0xc);
  auVar2 = NEON_ext(auVar17,auVar17,8,1);
  fVar13 = auVar2._4_4_ * auVar2._4_4_;
  uVar7 = NEON_ext(auVar17._0_8_,auVar2._0_8_,4,1);
  fVar10 = fVar13 + -0.5;
  fVar13 = fVar13 + -0.5;
  fVar1 = auVar17._0_4_;
  fVar3 = auVar17._4_4_;
  fVar4 = auVar17._8_4_;
  fVar5 = auVar17._12_4_;
  fVar14 = fVar1 * auVar9._0_4_ + fVar3 * auVar9._4_4_ + fVar4 * auVar9._8_4_;
  fVar18 = fVar1 * auVar9._0_4_ + fVar3 * auVar9._4_4_ + fVar4 * auVar9._8_4_;
  auVar17 = NEON_ext(auVar9,auVar9,4,1);
  auVar12._0_4_ = auVar9._0_4_ * (float)uVar7 - fVar1 * auVar17._0_4_;
  auVar12._4_4_ = auVar9._4_4_ * (float)((ulong)uVar7 >> 0x20) - fVar3 * auVar17._4_4_;
  auVar12._8_4_ = auVar9._8_4_ * fVar1 - fVar4 * auVar9._0_4_;
  auVar12._12_4_ = auVar9._12_4_ * fVar3 - fVar5 * auVar9._4_4_;
  auVar17 = NEON_ext(auVar12,auVar12,4,1);
  fVar1 = auVar9._0_4_ * fVar10 + fVar1 * fVar14 + auVar17._0_4_ * fVar5;
  fVar3 = auVar9._4_4_ * fVar13 + fVar3 * fVar18 + auVar17._4_4_ * fVar5;
  fVar4 = auVar9._8_4_ * fVar10 + fVar4 * fVar14 + auVar12._0_4_ * fVar5;
  fVar5 = auVar9._12_4_ * fVar13 + fVar5 * fVar18 + auVar12._4_4_ * fVar5;
  param_1[6] = fVar4 + fVar4;
  param_1[7] = fVar5 + fVar5;
  param_1[4] = fVar1 + fVar1;
  param_1[5] = fVar3 + fVar3;
  return;
}


