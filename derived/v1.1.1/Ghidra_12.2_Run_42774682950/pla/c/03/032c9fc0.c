/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c9fc0; name: FUN_032c9fc0
 */


void FUN_032c9fc0(undefined8 *param_1,undefined1 (*param_2) [12])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  undefined8 uVar13;
  
  fVar9 = (float)*(undefined8 *)(*param_2 + 8);
  fVar5 = (float)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
  fVar3 = (float)*(undefined8 *)*param_2;
  fVar4 = (float)((ulong)*(undefined8 *)*param_2 >> 0x20);
  fVar6 = fVar3 + fVar3;
  fVar8 = fVar4 + fVar4;
  fVar9 = fVar9 + fVar9;
  auVar10._12_4_ = fVar5;
  auVar10._0_12_ = *param_2;
  auVar11._12_4_ = fVar5;
  auVar11._0_12_ = *param_2;
  auVar10 = NEON_ext(auVar10,auVar11,8,1);
  auVar1._4_4_ = fVar8;
  auVar1._0_4_ = fVar6;
  auVar1._8_4_ = fVar9;
  auVar1._12_4_ = fVar5 + fVar5;
  auVar2._4_4_ = fVar8;
  auVar2._0_4_ = fVar6;
  auVar2._8_4_ = fVar9;
  auVar2._12_4_ = fVar5 + fVar5;
  auVar11 = NEON_ext(auVar1,auVar2,8,1);
  fVar7 = auVar10._0_4_ * auVar11._0_4_;
  uVar13 = NEON_fmov(0x3f800000,4);
  fVar12 = (float)uVar13;
  param_1[1] = (ulong)(uint)(fVar9 * fVar3 - fVar8 * fVar5);
  *param_1 = CONCAT44(fVar8 * fVar3 + fVar9 * fVar5,fVar12 - (fVar8 * fVar4 + fVar7));
  param_1[3] = (ulong)(uint)(fVar9 * fVar4 + fVar6 * fVar5);
  param_1[2] = CONCAT44(fVar12 - (fVar6 * fVar3 + fVar7),fVar8 * fVar3 - fVar9 * fVar5);
  param_1[5] = (ulong)(uint)(fVar12 - (fVar6 * fVar3 + fVar8 * fVar4));
  param_1[4] = CONCAT44(fVar9 * fVar4 - fVar6 * fVar5,fVar9 * fVar3 + fVar8 * fVar5);
  return;
}


