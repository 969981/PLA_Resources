/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03186a80; name: FUN_03186a80
 */


void FUN_03186a80(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 float *param_5)

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
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined8 uVar16;
  
  uVar12 = *param_4;
  fVar7 = (float)*param_2;
  fVar3 = (float)*param_3 - fVar7;
  fVar8 = (float)((ulong)*param_2 >> 0x20);
  fVar4 = (float)((ulong)*param_3 >> 0x20) - fVar8;
  fVar9 = (float)param_2[1];
  fVar5 = (float)param_3[1] - fVar9;
  fVar6 = (float)((ulong)param_3[1] >> 0x20) - (float)((ulong)param_2[1] >> 0x20);
  param_1[3] = param_4[1];
  param_1[2] = uVar12;
  uVar12 = *(undefined8 *)param_5;
  param_1[5] = *(undefined8 *)(param_5 + 2);
  param_1[4] = uVar12;
  fVar7 = fVar7 * fVar3 + fVar8 * fVar4 + fVar9 * fVar5;
  fVar8 = fVar3 * (float)*param_4;
  fVar9 = fVar4 * (float)((ulong)*param_4 >> 0x20);
  fVar10 = fVar5 * (float)param_4[1];
  fVar11 = fVar6 * (float)((ulong)param_4[1] >> 0x20);
  auVar13._4_4_ = fVar9;
  auVar13._0_4_ = fVar8;
  auVar13._8_4_ = fVar10;
  auVar13._12_4_ = fVar11;
  auVar2._4_4_ = fVar9;
  auVar2._0_4_ = fVar8;
  auVar2._8_4_ = fVar10;
  auVar2._12_4_ = fVar11;
  auVar13 = NEON_ext(auVar13,auVar2,8,1);
  uVar12 = CONCAT44(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4,
                    fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4);
  uVar14 = NEON_frecpe(uVar12,4);
  uVar16 = NEON_frecps(uVar12,uVar14,4);
  fVar10 = (float)uVar14 * (float)uVar16;
  uVar12 = NEON_frecps(uVar12,CONCAT44((float)((ulong)uVar14 >> 0x20) *
                                       (float)((ulong)uVar16 >> 0x20),fVar10),4);
  fVar10 = fVar10 * (float)uVar12;
  fVar3 = fVar3 * *param_5;
  fVar4 = fVar4 * param_5[1];
  fVar6 = fVar6 * param_5[3];
  auVar15._4_4_ = fVar4;
  auVar15._0_4_ = fVar3;
  auVar15._8_4_ = fVar5 * param_5[2];
  auVar15._12_4_ = fVar6;
  auVar1._4_4_ = fVar4;
  auVar1._0_4_ = fVar3;
  auVar1._8_4_ = fVar5 * param_5[2];
  auVar1._12_4_ = fVar6;
  auVar15 = NEON_ext(auVar15,auVar1,8,1);
  *param_1 = CONCAT44(fVar10 * ((fVar3 + fVar4 + auVar15._0_4_) - fVar7),
                      ((fVar8 + fVar9 + auVar13._0_4_) - fVar7) * fVar10);
  return;
}


