/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030763bc; name: FUN_030763bc
 */


void FUN_030763bc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  
  *param_1 = &PTR_FUN_042b2bf0;
  uVar2 = *param_2;
  fVar4 = (float)param_2[1];
  param_1[3] = param_2[1] & 0xffffffff;
  param_1[2] = uVar2;
  fVar3 = (float)((ulong)uVar2 >> 0x20);
  fVar11 = (float)uVar2;
  fVar5 = (float)param_3[4] * fVar4 + (float)*param_3 * fVar11 + (float)param_3[2] * fVar3;
  fVar6 = (float)((ulong)param_3[4] >> 0x20) * fVar4 +
          (float)((ulong)*param_3 >> 0x20) * fVar11 + (float)((ulong)param_3[2] >> 0x20) * fVar3;
  fVar7 = (float)param_3[5] * fVar4 + (float)param_3[1] * fVar11 + (float)param_3[3] * fVar3;
  fVar8 = *(float *)(param_3 + 6) * fVar5;
  fVar9 = *(float *)((long)param_3 + 0x34) * fVar6;
  fVar10 = *(float *)(param_3 + 7) * fVar7;
  fVar11 = *(float *)((long)param_3 + 0x3c) *
           ((float)((ulong)param_3[5] >> 0x20) * fVar4 +
           (float)((ulong)param_3[1] >> 0x20) * fVar11 + (float)((ulong)param_3[3] >> 0x20) * fVar3)
  ;
  auVar12._4_4_ = fVar9;
  auVar12._0_4_ = fVar8;
  auVar12._8_4_ = fVar10;
  auVar12._12_4_ = fVar11;
  auVar1._4_4_ = fVar9;
  auVar1._0_4_ = fVar8;
  auVar1._8_4_ = fVar10;
  auVar1._12_4_ = fVar11;
  auVar12 = NEON_ext(auVar12,auVar1,8,1);
  param_1[5] = CONCAT44(0.0 - (fVar8 + fVar9 + auVar12._0_4_),fVar7);
  param_1[4] = CONCAT44(fVar6,fVar5);
  return;
}


