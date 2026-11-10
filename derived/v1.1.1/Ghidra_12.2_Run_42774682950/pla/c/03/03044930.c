/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03044930; name: FUN_03044930
 */


void FUN_03044930(undefined1 (*param_1) [16],undefined1 (*param_2) [12],undefined8 *param_3,
                 float *param_4)

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
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar15;
  float fVar16;
  undefined1 auVar14 [16];
  undefined8 uVar17;
  undefined1 auVar18 [16];
  
  auVar2 = *param_1;
  auVar14 = NEON_ext(auVar2,auVar2,8,1);
  fVar11 = (float)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
  uVar13 = *(undefined8 *)*param_2;
  fVar10 = (float)((ulong)uVar13 >> 0x20);
  auVar18._12_4_ = fVar11;
  auVar18._0_12_ = *param_2;
  auVar1._12_4_ = fVar11;
  auVar1._0_12_ = *param_2;
  auVar18 = NEON_ext(auVar18,auVar1,8,1);
  uVar12 = NEON_ext(auVar2._0_8_,auVar14._0_8_,4,1);
  uVar17 = NEON_ext(uVar13,auVar18._0_8_,4,1);
  fVar3 = auVar2._0_4_ * (float)uVar17 - (float)uVar13 * (float)uVar12;
  fVar5 = auVar2._4_4_ * (float)((ulong)uVar17 >> 0x20) - fVar10 * (float)((ulong)uVar12 >> 0x20);
  fVar8 = auVar2._8_4_ * (float)uVar13 - (float)*(undefined8 *)(*param_2 + 8) * auVar2._0_4_;
  fVar10 = auVar2._12_4_ * fVar10 - fVar11 * auVar2._4_4_;
  auVar2._4_4_ = fVar5;
  auVar2._0_4_ = fVar3;
  auVar2._8_4_ = fVar8;
  auVar2._12_4_ = fVar10;
  auVar14._4_4_ = fVar5;
  auVar14._0_4_ = fVar3;
  auVar14._8_4_ = fVar8;
  auVar14._12_4_ = fVar10;
  auVar18 = NEON_ext(auVar2,auVar14,4,1);
  fVar10 = auVar18._0_4_;
  fVar8 = auVar18._4_4_;
  fVar11 = fVar10 * fVar10 + fVar8 * fVar8 + fVar3 * fVar3;
  uVar13 = CONCAT44(fVar10 * fVar10 + fVar8 * fVar8 + fVar3 * fVar3,fVar11);
  if (1.1920929e-07 < fVar11) {
    uVar12 = NEON_frsqrte(uVar13,4);
    fVar11 = (float)uVar12;
    fVar6 = (float)((ulong)uVar12 >> 0x20);
    uVar12 = NEON_frsqrts(uVar13,CONCAT44(fVar6 * fVar6,fVar11 * fVar11),4);
    fVar11 = fVar11 * (float)uVar12;
    fVar6 = fVar6 * (float)((ulong)uVar12 >> 0x20);
    uVar13 = NEON_frsqrts(uVar13,CONCAT44(fVar6 * fVar6,fVar11 * fVar11),4);
    fVar11 = (float)uVar13 * fVar11;
    fVar6 = (float)((ulong)uVar13 >> 0x20) * fVar6;
    fVar10 = fVar10 * fVar11;
    fVar8 = fVar8 * fVar6;
    fVar3 = fVar3 * fVar11;
    fVar11 = (float)*param_3 * fVar10;
    fVar7 = (float)((ulong)*param_3 >> 0x20) * fVar8;
    fVar9 = (float)param_3[1] * fVar3;
    fVar4 = fVar11 + fVar7 + fVar9;
    fVar9 = fVar11 + fVar7 + fVar9;
    param_4[2] = fVar3 * fVar4 + 0.0;
    param_4[3] = fVar5 * fVar6 * fVar9 + 0.0;
    *param_4 = fVar10 * fVar4 + 0.0;
    param_4[1] = fVar8 * fVar9 + 0.0;
    return;
  }
  *(undefined4 *)(param_1[4] + 8) = 2;
  *(undefined4 *)param_2[6] = 2;
  fVar3 = (float)param_3[1];
  fVar10 = (float)*param_3;
  fVar8 = (float)((ulong)*param_3 >> 0x20);
  fVar5 = *(float *)*param_2 * fVar10;
  fVar4 = *(float *)(*param_2 + 4) * fVar8;
  fVar6 = *(float *)(*param_2 + 8) * fVar3;
  fVar11 = fVar5 + fVar4 + fVar6;
  fVar6 = fVar5 + fVar4 + fVar6;
  fVar10 = fVar10 - *(float *)*param_2 * fVar11;
  fVar8 = fVar8 - *(float *)(*param_2 + 4) * fVar6;
  fVar3 = fVar3 - *(float *)(*param_2 + 8) * fVar11;
  fVar5 = (float)((ulong)param_3[1] >> 0x20) - *(float *)param_2[1] * fVar6;
  param_4[2] = fVar3;
  param_4[3] = fVar5;
  *param_4 = fVar10;
  param_4[1] = fVar8;
  uVar13 = *(undefined8 *)(*param_1 + 8);
  fVar6 = (float)uVar13;
  fVar11 = (float)*(undefined8 *)*param_1;
  fVar4 = (float)((ulong)*(undefined8 *)*param_1 >> 0x20);
  fVar7 = fVar11 * fVar10;
  fVar15 = fVar4 * fVar8;
  fVar16 = fVar6 * fVar3;
  fVar9 = fVar7 + fVar15 + fVar16;
  fVar16 = fVar7 + fVar15 + fVar16;
  param_4[2] = fVar3 - fVar6 * fVar9;
  param_4[3] = fVar5 - (float)((ulong)uVar13 >> 0x20) * fVar16;
  *param_4 = fVar10 - fVar11 * fVar9;
  param_4[1] = fVar8 - fVar4 * fVar16;
  return;
}


