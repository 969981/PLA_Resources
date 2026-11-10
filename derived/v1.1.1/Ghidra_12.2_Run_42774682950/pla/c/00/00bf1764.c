/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00bf1764; name: FUN_00bf1764
 */


undefined1  [16] FUN_00bf1764(float param_1,long param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar2 = (float)*(undefined8 *)(param_2 + 0x150);
  fVar6 = (float)*(undefined8 *)(param_2 + 0x140);
  fVar3 = (float)((ulong)*(undefined8 *)(param_2 + 0x150) >> 0x20);
  fVar7 = (float)((ulong)*(undefined8 *)(param_2 + 0x140) >> 0x20);
  fVar4 = (float)*(undefined8 *)(param_2 + 0x158);
  fVar8 = (float)*(undefined8 *)(param_2 + 0x148);
  fVar5 = (float)((ulong)*(undefined8 *)(param_2 + 0x158) >> 0x20);
  fVar9 = (float)((ulong)*(undefined8 *)(param_2 + 0x148) >> 0x20);
  fVar10 = 1.0 - param_1;
  auVar1._0_4_ = (fVar6 + (fVar2 - fVar6) * param_1) * fVar10 +
                 (fVar2 + ((float)*(undefined8 *)(param_2 + 0x130) - fVar2) * param_1) * param_1;
  auVar1._4_4_ = (fVar7 + (fVar3 - fVar7) * param_1) * fVar10 +
                 (fVar3 + ((float)((ulong)*(undefined8 *)(param_2 + 0x130) >> 0x20) - fVar3) *
                          param_1) * param_1;
  auVar1._8_4_ = (fVar8 + (fVar4 - fVar8) * param_1) * fVar10 +
                 (fVar4 + ((float)*(undefined8 *)(param_2 + 0x138) - fVar4) * param_1) * param_1;
  auVar1._12_4_ =
       (fVar9 + (fVar5 - fVar9) * param_1) * fVar10 +
       (fVar5 + ((float)((ulong)*(undefined8 *)(param_2 + 0x138) >> 0x20) - fVar5) * param_1) *
       param_1;
  return auVar1;
}


