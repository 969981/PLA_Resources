/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e49984; name: FUN_02e49984
 */


void FUN_02e49984(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 0.0;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[10] = 0.0;
  param_1[0xb] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  fVar6 = param_3[1] - param_2[1];
  fVar5 = *param_3 - *param_2;
  fVar4 = param_4[1] - param_2[1];
  fVar3 = *param_4 - *param_2;
  fVar7 = param_3[2] - param_2[2];
  fVar2 = param_4[2] - param_2[2];
  fVar1 = fVar2 * fVar6 - fVar4 * fVar7;
  fVar2 = fVar3 * fVar7 - fVar2 * fVar5;
  fVar3 = fVar4 * fVar5 - fVar3 * fVar6;
  fVar4 = SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
  if (fVar4 == 0.0) {
    fVar1 = 0.0;
    fVar2 = 0.0;
    fVar3 = 0.0;
  }
  else {
    fVar4 = 1.0 / fVar4;
    fVar1 = fVar1 * fVar4;
    fVar2 = fVar2 * fVar4;
    fVar3 = fVar3 * fVar4;
  }
  *param_1 = fVar1;
  param_1[1] = fVar2;
  param_1[2] = fVar3;
  param_1[3] = *param_2 * fVar1 + fVar2 * param_2[1] + fVar3 * param_2[2];
  return;
}


