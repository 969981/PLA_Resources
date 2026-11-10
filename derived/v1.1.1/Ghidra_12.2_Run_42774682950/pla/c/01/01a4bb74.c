/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a4bb74; name: FUN_01a4bb74
 */


undefined1  [16] FUN_01a4bb74(long param_1)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  float fVar3;
  float fVar6;
  float fVar7;
  undefined1 auVar4 [16];
  float fVar8;
  undefined1 auVar5 [16];
  undefined1 auVar9 [16];
  
  uVar2 = *(ulong *)(param_1 + 0x358);
  if (*(char *)(param_1 + 0x370) == '\0') {
    auVar4._0_8_ = uVar2 & 0xffffffff;
    auVar4._8_8_ = 0;
    return auVar4;
  }
  fVar3 = (float)*(undefined8 *)(param_1 + 0x350) - *(float *)(param_1 + 0x340);
  fVar6 = (float)((ulong)*(undefined8 *)(param_1 + 0x350) >> 0x20) - *(float *)(param_1 + 0x344);
  fVar7 = (float)uVar2 - *(float *)(param_1 + 0x348);
  fVar8 = (float)(uVar2 >> 0x20) - *(float *)(param_1 + 0x34c);
  fVar3 = fVar3 * fVar3;
  fVar6 = fVar6 * fVar6;
  fVar7 = fVar7 * fVar7;
  fVar8 = fVar8 * fVar8;
  auVar9._4_4_ = fVar6;
  auVar9._0_4_ = fVar3;
  auVar9._8_4_ = fVar7;
  auVar9._12_4_ = fVar8;
  auVar1._4_4_ = fVar6;
  auVar1._0_4_ = fVar3;
  auVar1._8_4_ = fVar7;
  auVar1._12_4_ = fVar8;
  auVar9 = NEON_ext(auVar9,auVar1,8,1);
  fVar3 = auVar9._0_4_ + fVar3;
  fVar6 = auVar9._4_4_ + fVar6;
  fVar7 = fVar3 + fVar6;
  fVar3 = fVar3 + fVar6;
  auVar5._0_4_ = SQRT(fVar7);
  auVar5._4_4_ = SQRT(fVar3);
  auVar5._8_4_ = SQRT(fVar7);
  auVar5._12_4_ = SQRT(fVar3);
  return auVar5;
}


