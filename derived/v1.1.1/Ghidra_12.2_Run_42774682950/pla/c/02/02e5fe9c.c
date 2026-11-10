/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5fe9c; name: FUN_02e5fe9c
 */


void FUN_02e5fe9c(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *param_2;
  fVar3 = param_2[1];
  fVar1 = param_2[2];
  if (0.0 < *param_1 * fVar2 + fVar3 * param_1[1] + fVar1 * param_1[2]) {
    *param_3 = *param_3 + fVar2 * 0.001;
    param_3[1] = param_3[1] + fVar3 * 0.001;
    param_3[2] = param_3[2] + fVar1 * 0.001;
    return;
  }
  *param_3 = *param_3 - fVar2 * 0.001;
  param_3[1] = param_3[1] - fVar3 * 0.001;
  param_3[2] = param_3[2] - fVar1 * 0.001;
  return;
}


