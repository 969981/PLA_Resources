/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cc638; name: FUN_032cc638
 */


void FUN_032cc638(undefined8 *param_1,undefined1 (*param_2) [12],undefined1 (*param_3) [16])

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
  
  fVar3 = (float)*(undefined8 *)(*param_2 + 8);
  fVar4 = (float)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
  uVar5 = *(undefined8 *)*param_2;
  fVar1 = (float)uVar5;
  fVar2 = (float)((ulong)uVar5 >> 0x20);
  auVar6._12_4_ = fVar4;
  auVar6._0_12_ = *param_2;
  auVar15._12_4_ = fVar4;
  auVar15._0_12_ = *param_2;
  auVar6 = NEON_ext(auVar6,auVar15,8,1);
  fVar9 = auVar6._4_4_ * auVar6._4_4_;
  uVar5 = NEON_ext(uVar5,auVar6._0_8_,4,1);
  fVar8 = fVar9 + -0.5;
  fVar9 = fVar9 + -0.5;
  auVar6 = *param_3;
  fVar10 = auVar6._0_4_;
  fVar11 = auVar6._4_4_;
  fVar12 = auVar6._8_4_;
  fVar13 = fVar1 * fVar10 + fVar2 * fVar11 + fVar3 * fVar12;
  fVar16 = fVar1 * fVar10 + fVar2 * fVar11 + fVar3 * fVar12;
  auVar15 = NEON_ext(auVar6,auVar6,8,1);
  uVar14 = NEON_ext(auVar6._0_8_,auVar15._0_8_,4,1);
  auVar7._0_4_ = fVar10 * (float)uVar5 - fVar1 * (float)uVar14;
  auVar7._4_4_ = fVar11 * (float)((ulong)uVar5 >> 0x20) - fVar2 * (float)((ulong)uVar14 >> 0x20);
  auVar7._8_4_ = fVar12 * fVar1 - fVar3 * fVar10;
  auVar7._12_4_ = auVar6._12_4_ * fVar2 - fVar4 * fVar11;
  auVar15 = NEON_ext(auVar7,auVar7,4,1);
  fVar1 = fVar10 * fVar8 + fVar1 * fVar13 + auVar15._0_4_ * fVar4;
  fVar2 = fVar11 * fVar9 + fVar2 * fVar16 + auVar15._4_4_ * fVar4;
  fVar3 = fVar12 * fVar8 + fVar3 * fVar13 + auVar7._0_4_ * fVar4;
  fVar4 = auVar6._12_4_ * fVar9 + fVar4 * fVar16 + auVar7._4_4_ * fVar4;
  param_1[1] = CONCAT44(fVar4 + fVar4,fVar3 + fVar3);
  *param_1 = CONCAT44(fVar2 + fVar2,fVar1 + fVar1);
  return;
}


