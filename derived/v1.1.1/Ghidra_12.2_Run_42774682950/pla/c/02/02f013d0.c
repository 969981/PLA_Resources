/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f013d0; name: FUN_02f013d0
 */


void FUN_02f013d0(float param_1,float param_2,float param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (param_1 <= 0.5) {
    fVar2 = param_1 - param_1 * param_3;
    fVar4 = param_1;
  }
  else {
    fVar2 = param_1 + param_3 * (param_1 + -1.0);
    fVar4 = 1.0 - param_1;
  }
  fVar5 = 1.0 - param_2 * 1.3333334;
  fVar1 = param_2 * 1.3333334 + -0.33333334;
  fVar4 = (param_3 + param_3) * fVar4;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  fVar3 = (1.0 - fVar5) - fVar1;
  *param_4 = SQRT(((1.0 - fVar2) - fVar4) * fVar1);
  param_4[1] = SQRT(fVar2 * fVar1);
  param_4[2] = SQRT(fVar4 * fVar1);
  param_4[3] = SQRT((1.0 - param_1) * fVar5);
  param_4[4] = SQRT(fVar5 * param_1);
  param_4[5] = SQRT((1.0 - param_1) * fVar3);
  param_4[6] = SQRT(fVar3 * param_1);
  return;
}


