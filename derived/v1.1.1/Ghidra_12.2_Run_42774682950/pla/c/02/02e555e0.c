/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e555e0; name: FUN_02e555e0
 */


void FUN_02e555e0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar5 = param_2[2];
  fVar7 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar5 * fVar5);
  fVar6 = 1.0 / fVar4;
  fVar4 = param_2[3] / fVar4;
  fVar1 = fVar6 * fVar1;
  fVar2 = fVar6 * fVar2;
  fVar6 = fVar6 * fVar5;
  fVar4 = (fVar1 * fVar4 - *param_3) * fVar1 + fVar2 * (fVar2 * fVar4 - fVar7) +
          fVar6 * (fVar6 * fVar4 - fVar3);
  *param_1 = *param_3 + fVar1 * fVar4;
  param_1[1] = fVar7 + fVar2 * fVar4;
  param_1[2] = fVar3 + fVar6 * fVar4;
  return;
}


