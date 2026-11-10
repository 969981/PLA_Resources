/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fa2638; name: FUN_02fa2638
 */


void FUN_02fa2638(undefined1 (*param_1) [16],undefined8 *param_2)

{
  float fVar1;
  float fVar3;
  float fVar4;
  undefined1 auVar2 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  
  uVar20 = NEON_fmov(0x3f800000,4);
  auVar2._0_12_ = SUB1612(param_1[2],0);
  auVar2._12_4_ = 0x3f800000;
  auVar9 = NEON_frecpe(auVar2,4);
  auVar12 = NEON_frecps(auVar2,auVar9,4);
  auVar13._0_4_ = auVar9._0_4_ * auVar12._0_4_;
  auVar13._4_4_ = auVar9._4_4_ * auVar12._4_4_;
  auVar13._8_4_ = auVar9._8_4_ * auVar12._8_4_;
  auVar13._12_4_ = auVar9._12_4_ * auVar12._12_4_;
  auVar2 = NEON_frecps(auVar2,auVar13,4);
  fVar1 = auVar13._0_4_ * auVar2._0_4_;
  fVar3 = auVar13._4_4_ * auVar2._4_4_;
  fVar4 = auVar13._8_4_ * auVar2._8_4_;
  fVar5 = auVar13._12_4_ * auVar2._12_4_;
  auVar2 = *param_1;
  fVar6 = auVar2._0_4_;
  auVar9._0_4_ = fVar6 + fVar6;
  fVar11 = auVar2._4_4_;
  auVar9._4_4_ = fVar11 + fVar11;
  auVar9._8_4_ = auVar2._8_4_ + auVar2._8_4_;
  fVar10 = auVar2._12_4_;
  auVar9._12_4_ = fVar10 + fVar10;
  auVar2 = NEON_ext(auVar2,auVar2,8,1);
  auVar13 = NEON_ext(auVar9,auVar9,8,1);
  fVar7 = auVar2._0_4_ * auVar13._0_4_;
  fVar18 = auVar9._8_4_ * fVar11 - auVar9._0_4_ * fVar10;
  fVar19 = (float)uVar20;
  fVar14 = fVar1 * (fVar19 - (auVar9._4_4_ * fVar11 + fVar7));
  fVar15 = fVar3 * (auVar9._4_4_ * fVar6 - auVar9._8_4_ * fVar10);
  fVar16 = fVar4 * (auVar9._8_4_ * fVar6 + auVar9._4_4_ * fVar10);
  fVar17 = fVar5 * fVar18;
  fVar8 = fVar1 * (auVar9._4_4_ * fVar6 + auVar9._8_4_ * fVar10);
  fVar7 = fVar3 * (fVar19 - (auVar9._0_4_ * fVar6 + fVar7));
  fVar18 = fVar4 * fVar18;
  fVar1 = fVar1 * (auVar9._8_4_ * fVar6 - auVar9._4_4_ * fVar10);
  fVar3 = fVar3 * (auVar9._8_4_ * fVar11 + auVar9._0_4_ * fVar10);
  fVar4 = fVar4 * (fVar19 - (auVar9._0_4_ * fVar6 + auVar9._4_4_ * fVar11));
  param_2[1] = CONCAT44(fVar17,fVar16);
  *param_2 = CONCAT44(fVar15,fVar14);
  *(float *)(param_2 + 3) = fVar18;
  *(float *)((long)param_2 + 0x1c) = fVar5 * 0.0;
  *(float *)(param_2 + 2) = fVar8;
  *(float *)((long)param_2 + 0x14) = fVar7;
  *(float *)(param_2 + 5) = fVar4;
  *(float *)((long)param_2 + 0x2c) = fVar5 * 0.0;
  *(float *)(param_2 + 4) = fVar1;
  *(float *)((long)param_2 + 0x24) = fVar3;
  fVar6 = (float)*(undefined8 *)param_1[1];
  fVar10 = (float)((ulong)*(undefined8 *)param_1[1] >> 0x20);
  fVar11 = *(float *)(param_1[1] + 8);
  *(float *)(param_2 + 7) = -(fVar16 * fVar6 + fVar18 * fVar10 + fVar4 * fVar11);
  *(float *)((long)param_2 + 0x3c) = fVar17 * fVar6 + fVar5 * 0.0 * fVar10 + fVar5 * 0.0 * fVar11;
  *(float *)(param_2 + 6) = -(fVar14 * fVar6 + fVar8 * fVar10 + fVar1 * fVar11);
  *(float *)((long)param_2 + 0x34) = -(fVar15 * fVar6 + fVar7 * fVar10 + fVar3 * fVar11);
  return;
}


