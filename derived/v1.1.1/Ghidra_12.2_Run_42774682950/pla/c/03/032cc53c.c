/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cc53c; name: FUN_032cc53c
 */


void FUN_032cc53c(undefined8 *param_1,undefined1 (*param_2) [12],undefined1 (*param_3) [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar17;
  undefined1 auVar16 [16];
  
  fVar3 = (float)*(undefined8 *)(*param_2 + 8);
  fVar4 = (float)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
  uVar6 = *(undefined8 *)*param_2;
  fVar1 = (float)uVar6;
  fVar2 = (float)((ulong)uVar6 >> 0x20);
  uVar5 = *(undefined8 *)(param_2[1] + 4);
  auVar7._12_4_ = fVar4;
  auVar7._0_12_ = *param_2;
  auVar16._12_4_ = fVar4;
  auVar16._0_12_ = *param_2;
  auVar7 = NEON_ext(auVar7,auVar16,8,1);
  fVar10 = auVar7._4_4_ * auVar7._4_4_;
  uVar6 = NEON_ext(uVar6,auVar7._0_8_,4,1);
  fVar9 = fVar10 + -0.5;
  fVar10 = fVar10 + -0.5;
  auVar7 = *param_3;
  fVar11 = auVar7._0_4_;
  fVar12 = auVar7._4_4_;
  fVar13 = auVar7._8_4_;
  fVar14 = fVar11 * fVar1 + fVar12 * fVar2 + fVar13 * fVar3;
  fVar17 = fVar11 * fVar1 + fVar12 * fVar2 + fVar13 * fVar3;
  auVar16 = NEON_ext(auVar7,auVar7,8,1);
  uVar15 = NEON_ext(auVar7._0_8_,auVar16._0_8_,4,1);
  auVar8._0_4_ = fVar1 * (float)uVar15 - fVar11 * (float)uVar6;
  auVar8._4_4_ = fVar2 * (float)((ulong)uVar15 >> 0x20) - fVar12 * (float)((ulong)uVar6 >> 0x20);
  auVar8._8_4_ = fVar3 * fVar11 - fVar13 * fVar1;
  auVar8._12_4_ = fVar4 * fVar12 - auVar7._12_4_ * fVar2;
  auVar16 = NEON_ext(auVar8,auVar8,4,1);
  fVar1 = fVar11 * fVar9 + fVar1 * fVar14 + auVar16._0_4_ * fVar4;
  fVar2 = fVar12 * fVar10 + fVar2 * fVar17 + auVar16._4_4_ * fVar4;
  fVar3 = fVar13 * fVar9 + fVar3 * fVar14 + auVar8._0_4_ * fVar4;
  fVar4 = auVar7._12_4_ * fVar10 + fVar4 * fVar17 + auVar8._4_4_ * fVar4;
  param_1[1] = CONCAT44((float)((ulong)*(undefined8 *)param_2[2] >> 0x20) + fVar4 + fVar4,
                        (float)*(undefined8 *)param_2[2] + fVar3 + fVar3);
  *param_1 = CONCAT44((float)((ulong)uVar5 >> 0x20) + fVar2 + fVar2,(float)uVar5 + fVar1 + fVar1);
  return;
}


