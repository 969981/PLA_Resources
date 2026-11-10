/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0177ef4c; name: FUN_0177ef4c
 */


bool FUN_0177ef4c(float param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  
  fVar2 = (float)*param_3 - (float)*param_4;
  fVar3 = (float)param_3[1] - (float)param_4[1];
  fVar4 = (float)((ulong)param_3[1] >> 0x20) - (float)((ulong)param_4[1] >> 0x20);
  fVar2 = fVar2 * fVar2;
  fVar3 = fVar3 * fVar3;
  fVar4 = fVar4 * fVar4;
  auVar5._4_4_ = 0;
  auVar5._0_4_ = fVar2;
  auVar5._8_4_ = fVar3;
  auVar5._12_4_ = fVar4;
  auVar1._4_4_ = 0;
  auVar1._0_4_ = fVar2;
  auVar1._8_4_ = fVar3;
  auVar1._12_4_ = fVar4;
  auVar5 = NEON_ext(auVar5,auVar1,8,1);
  return auVar5._0_4_ + fVar2 + auVar5._4_4_ + 0.0 <= param_1 * param_1;
}


