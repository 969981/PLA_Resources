/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03076418; name: FUN_03076418
 */


void FUN_03076418(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  fVar3 = (float)*(undefined8 *)(param_1 + 0x10);
  fVar6 = (float)*param_3;
  fVar9 = fVar3 * fVar6;
  fVar4 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  fVar7 = (float)((ulong)*param_3 >> 0x20);
  fVar12 = fVar4 * fVar7;
  fVar5 = (float)*(undefined8 *)(param_1 + 0x18);
  fVar8 = (float)param_3[1];
  fVar14 = fVar5 * fVar8;
  fVar10 = fVar9 + fVar12 + fVar14;
  fVar14 = fVar9 + fVar12 + fVar14;
  local_50 = CONCAT44(fVar7 - fVar4 * fVar14,fVar6 - fVar3 * fVar10);
  uStack_48 = CONCAT44((float)((ulong)param_3[1] >> 0x20) -
                       (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) * fVar14,
                       fVar8 - fVar5 * fVar10);
  FUN_030765b4(param_2,&local_50,param_6);
  puVar2 = param_6 + 2;
  fVar3 = (float)*(undefined8 *)(param_1 + 0x10);
  fVar6 = (float)*param_6;
  fVar9 = fVar3 * fVar6;
  fVar4 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  fVar7 = (float)((ulong)*param_6 >> 0x20);
  fVar12 = fVar4 * fVar7;
  fVar5 = (float)*(undefined8 *)(param_1 + 0x18);
  fVar8 = (float)param_6[1];
  fVar14 = fVar5 * fVar8;
  fVar10 = fVar9 + fVar12 + fVar14;
  fVar14 = fVar9 + fVar12 + fVar14;
  param_6[1] = CONCAT44((float)((ulong)param_6[1] >> 0x20) -
                        (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) * fVar14,
                        fVar8 - fVar5 * fVar10);
  *param_6 = CONCAT44(fVar7 - fVar4 * fVar14,fVar6 - fVar3 * fVar10);
  fVar3 = -(float)*param_3;
  fVar5 = -(float)((ulong)*param_3 >> 0x20);
  fVar7 = -(float)param_3[1];
  fVar4 = (float)param_5[4] * fVar7 + (float)*param_5 * fVar3 + (float)param_5[2] * fVar5;
  fVar6 = (float)((ulong)param_5[4] >> 0x20) * fVar7 +
          (float)((ulong)*param_5 >> 0x20) * fVar3 + (float)((ulong)param_5[2] >> 0x20) * fVar5;
  fVar8 = (float)param_5[5] * fVar7 + (float)param_5[1] * fVar3 + (float)param_5[3] * fVar5;
  fVar9 = (float)*(undefined8 *)(param_1 + 0x20);
  fVar14 = fVar4 * fVar9;
  fVar10 = (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
  fVar13 = fVar6 * fVar10;
  fVar12 = (float)*(undefined8 *)(param_1 + 0x28);
  fVar15 = fVar8 * fVar12;
  fVar11 = fVar14 + fVar13 + fVar15;
  fVar15 = fVar14 + fVar13 + fVar15;
  local_60 = CONCAT44(fVar6 - fVar10 * fVar15,fVar4 - fVar9 * fVar11);
  uStack_58 = CONCAT44(((float)((ulong)param_5[5] >> 0x20) * fVar7 +
                       (float)((ulong)param_5[1] >> 0x20) * fVar3 +
                       (float)((ulong)param_5[3] >> 0x20) * fVar5) -
                       (float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) * fVar15,
                       fVar8 - fVar12 * fVar11);
  FUN_030765b4(param_4,&local_60,puVar2);
  fVar5 = (float)*(undefined8 *)(param_1 + 0x20);
  fVar8 = (float)*puVar2;
  fVar14 = fVar5 * fVar8;
  fVar6 = (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
  fVar9 = (float)((ulong)*puVar2 >> 0x20);
  fVar11 = fVar6 * fVar9;
  fVar7 = (float)*(undefined8 *)(param_1 + 0x28);
  fVar10 = (float)param_6[3];
  fVar3 = fVar7 * fVar10;
  fVar4 = (float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
  fVar12 = (float)((ulong)param_6[3] >> 0x20);
  fVar13 = fVar4 * fVar12;
  auVar16._4_4_ = fVar11;
  auVar16._0_4_ = fVar14;
  auVar16._8_4_ = fVar3;
  auVar16._12_4_ = fVar13;
  auVar1._4_4_ = fVar11;
  auVar1._0_4_ = fVar14;
  auVar1._8_4_ = fVar3;
  auVar1._12_4_ = fVar13;
  auVar16 = NEON_ext(auVar16,auVar1,8,1);
  fVar4 = auVar16._0_4_ + fVar4;
  fVar3 = fVar14 + fVar11 + fVar4;
  fVar4 = fVar14 + fVar11 + fVar4;
  param_6[3] = CONCAT44(fVar12 - fVar4 * 0.0,fVar10 - fVar7 * fVar3);
  *puVar2 = CONCAT44(fVar9 - fVar6 * fVar4,fVar8 - fVar5 * fVar3);
  return;
}


