/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dfaec0; name: FUN_02dfaec0
 */


void FUN_02dfaec0(float param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = tanf((param_1 * 3.1415927) / param_2);
  fVar1 = 1.0 / fVar1;
  fVar2 = fVar1 * fVar1;
  fVar3 = 1.0 / (fVar1 * 1.4142135 + 1.0 + fVar2);
  *param_3 = fVar3;
  param_3[1] = fVar3 + fVar3;
  param_3[2] = fVar3;
  param_3[3] = fVar3 * (2.0 - fVar2 * 2.0);
  param_3[4] = fVar3 * ((1.0 - fVar1 * 1.4142135) + fVar2);
  return;
}


