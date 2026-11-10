/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026cc95c; name: FUN_026cc95c
 */


undefined1  [16] FUN_026cc95c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  
  fVar1 = (float)FUN_026c3894();
  fVar2 = -fVar1;
  auVar3._0_4_ = (float)*param_2 + 0.0 + (float)*param_3 * fVar2;
  auVar3._4_4_ = (float)((ulong)*param_2 >> 0x20) + fVar1 + (float)((ulong)*param_3 >> 0x20) * fVar2
  ;
  auVar3._8_4_ = (float)param_2[1] + 0.0 + (float)param_3[1] * fVar2;
  auVar3._12_4_ =
       (float)((ulong)param_2[1] >> 0x20) + 0.0 + (float)((ulong)param_3[1] >> 0x20) * fVar2;
  return auVar3;
}


