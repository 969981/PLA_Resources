/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03151380; name: FUN_03151380
 */


void FUN_03151380(float param_1,long param_2,long param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  
  fVar3 = (float)*(undefined8 *)(param_2 + 0xf0);
  fVar7 = fVar3 * fVar3;
  fVar4 = (float)((ulong)*(undefined8 *)(param_2 + 0xf0) >> 0x20);
  fVar8 = fVar4 * fVar4;
  fVar5 = (float)*(undefined8 *)(param_2 + 0xf8);
  fVar6 = (float)((ulong)*(undefined8 *)(param_2 + 0xf8) >> 0x20);
  auVar9._4_4_ = fVar8;
  auVar9._0_4_ = fVar7;
  auVar9._8_4_ = fVar5 * fVar5;
  auVar9._12_4_ = fVar6 * fVar6;
  auVar2._4_4_ = fVar8;
  auVar2._0_4_ = fVar7;
  auVar2._8_4_ = fVar5 * fVar5;
  auVar2._12_4_ = fVar6 * fVar6;
  auVar9 = NEON_ext(auVar9,auVar2,8,1);
  lVar1 = 0x1c;
  if (fVar7 + fVar8 + auVar9._0_4_ <= *(float *)(param_3 + 0x20) * *(float *)(param_3 + 0x20)) {
    lVar1 = 0x18;
  }
  fVar7 = 1.0 - *(float *)(param_3 + lVar1) * param_1;
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  *(ulong *)(param_2 + 0xf8) = CONCAT44(fVar6 * fVar7,fVar5 * fVar7);
  *(ulong *)(param_2 + 0xf0) = CONCAT44(fVar4 * fVar7,fVar3 * fVar7);
  return;
}


