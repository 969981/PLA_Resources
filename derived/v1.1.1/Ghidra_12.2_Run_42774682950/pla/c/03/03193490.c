/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03193490; name: FUN_03193490
 */


void FUN_03193490(long *param_1,int param_2,undefined1 (*param_3) [16],undefined8 *param_4)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar9;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined1 auVar14 [16];
  
  puVar1 = (undefined8 *)(*param_1 + (long)param_2 * 0x10);
  auVar10 = *param_3;
  auVar14 = NEON_ext(auVar10,auVar10,8,1);
  uVar13 = NEON_ext(auVar10._0_8_,auVar14._0_8_,4,1);
  fVar4 = (float)puVar1[1];
  fVar5 = (float)((ulong)puVar1[1] >> 0x20);
  fVar2 = (float)*puVar1;
  fVar3 = (float)((ulong)*puVar1 >> 0x20);
  auVar7._0_4_ = *(float *)(puVar1 + 2) - fVar2;
  auVar7._4_4_ = *(float *)((long)puVar1 + 0x14) - fVar3;
  auVar7._8_4_ = *(float *)(puVar1 + 3) - fVar4;
  auVar7._12_4_ = *(float *)((long)puVar1 + 0x1c) - fVar5;
  auVar14 = NEON_ext(auVar7,auVar7,4,1);
  fVar6 = auVar7._0_4_ * (float)uVar13 - auVar10._0_4_ * auVar14._0_4_;
  fVar9 = auVar7._4_4_ * (float)((ulong)uVar13 >> 0x20) - auVar10._4_4_ * auVar14._4_4_;
  auVar8._0_8_ = CONCAT44(fVar9,fVar6);
  auVar8._8_4_ = auVar7._8_4_ * auVar10._0_4_ - auVar10._8_4_ * auVar7._0_4_;
  auVar8._12_4_ = auVar7._12_4_ * auVar10._4_4_ - auVar10._12_4_ * auVar7._4_4_;
  auVar10 = NEON_ext(auVar8,auVar8,4,1);
  auVar11._0_8_ = auVar10._0_8_;
  auVar11._8_8_ = auVar8._0_8_;
  fVar2 = fVar2 * auVar10._0_4_;
  fVar3 = fVar3 * auVar10._4_4_;
  fVar4 = fVar4 * fVar6;
  fVar5 = fVar5 * fVar9;
  auVar10._4_4_ = fVar3;
  auVar10._0_4_ = fVar2;
  auVar10._8_4_ = fVar4;
  auVar10._12_4_ = fVar5;
  auVar14._4_4_ = fVar3;
  auVar14._0_4_ = fVar2;
  auVar14._8_4_ = fVar4;
  auVar14._12_4_ = fVar5;
  auVar10 = NEON_ext(auVar10,auVar14,8,1);
  auVar12._0_12_ = auVar11._0_12_;
  auVar12._12_4_ = -(fVar2 + fVar3 + auVar10._0_4_);
  param_4[1] = auVar12._8_8_;
  *param_4 = auVar11._0_8_;
  return;
}


