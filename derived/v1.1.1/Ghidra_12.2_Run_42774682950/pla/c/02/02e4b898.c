/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4b898; name: FUN_02e4b898
 */


void FUN_02e4b898(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = param_3[1];
  fVar3 = param_2[1];
  fVar5 = param_2[2];
  fVar2 = param_3[2];
  fVar6 = param_2[4];
  fVar7 = param_2[5];
  fVar4 = param_2[3] * (*param_3 - *param_2) + (fVar1 - fVar3) * fVar6 + (fVar2 - fVar5) * fVar7;
  *param_1 = (*param_3 - *param_2) - param_2[3] * fVar4;
  param_1[1] = (fVar1 - fVar3) - fVar6 * fVar4;
  param_1[2] = (fVar2 - fVar5) - fVar7 * fVar4;
  return;
}


