/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03016510; name: FUN_03016510
 */


void FUN_03016510(undefined1 (*param_1) [12],undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar16;
  undefined1 auVar15 [16];
  
  fVar3 = (float)*(undefined8 *)(*param_1 + 8);
  fVar4 = (float)((ulong)*(undefined8 *)(*param_1 + 8) >> 0x20);
  uVar5 = *(undefined8 *)*param_1;
  fVar1 = (float)uVar5;
  fVar2 = (float)((ulong)uVar5 >> 0x20);
  auVar6._12_4_ = fVar4;
  auVar6._0_12_ = *param_1;
  auVar15._12_4_ = fVar4;
  auVar15._0_12_ = *param_1;
  auVar6 = NEON_ext(auVar6,auVar15,8,1);
  fVar9 = auVar6._4_4_ * auVar6._4_4_;
  uVar5 = NEON_ext(uVar5,auVar6._0_8_,4,1);
  fVar8 = fVar9 + -0.5;
  fVar9 = fVar9 + -0.5;
  auVar6 = *(undefined1 (*) [16])(param_1[9] + 4);
  fVar10 = auVar6._0_4_;
  fVar11 = auVar6._4_4_;
  fVar12 = auVar6._8_4_;
  fVar13 = fVar1 * fVar10 + fVar2 * fVar11 + fVar3 * fVar12;
  fVar16 = fVar1 * fVar10 + fVar2 * fVar11 + fVar3 * fVar12;
  auVar15 = NEON_ext(auVar6,auVar6,8,1);
  uVar14 = NEON_ext(auVar6._0_8_,auVar15._0_8_,4,1);
  auVar7._0_4_ = fVar1 * (float)uVar14 - fVar10 * (float)uVar5;
  auVar7._4_4_ = fVar2 * (float)((ulong)uVar14 >> 0x20) - fVar11 * (float)((ulong)uVar5 >> 0x20);
  auVar7._8_4_ = fVar3 * fVar10 - fVar12 * fVar1;
  auVar7._12_4_ = fVar4 * fVar11 - auVar6._12_4_ * fVar2;
  auVar15 = NEON_ext(auVar7,auVar7,4,1);
  fVar1 = fVar10 * fVar8 + fVar1 * fVar13 + auVar15._0_4_ * fVar4;
  fVar2 = fVar11 * fVar9 + fVar2 * fVar16 + auVar15._4_4_ * fVar4;
  fVar3 = fVar12 * fVar8 + fVar3 * fVar13 + auVar7._0_4_ * fVar4;
  fVar4 = auVar6._12_4_ * fVar9 + fVar4 * fVar16 + auVar7._4_4_ * fVar4;
  param_2[1] = CONCAT44(fVar4 + fVar4,fVar3 + fVar3);
  *param_2 = CONCAT44(fVar2 + fVar2,fVar1 + fVar1);
  return;
}


