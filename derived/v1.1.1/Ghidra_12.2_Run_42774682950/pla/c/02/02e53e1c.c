/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e53e1c; name: FUN_02e53e1c
 */


void FUN_02e53e1c(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
  if (fVar4 == 0.0) {
    param_1[0] = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    return;
  }
  fVar4 = 1.0 / fVar4;
  *param_1 = fVar1 * fVar4;
  param_1[1] = fVar2 * fVar4;
  param_1[2] = fVar3 * fVar4;
  return;
}


