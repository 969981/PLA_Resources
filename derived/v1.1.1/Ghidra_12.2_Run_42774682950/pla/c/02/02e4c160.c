/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4c160; name: FUN_02e4c160
 */


float FUN_02e4c160(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = param_1[0x1a];
  fVar3 = param_1[3] * fVar1;
  fVar2 = param_1[4] * fVar1;
  fVar1 = param_1[5] * fVar1;
  fVar4 = param_2[2] - param_1[2];
  fVar5 = param_2[1] - param_1[1];
  fVar6 = *param_2 - *param_1;
  fVar7 = fVar6 * fVar3 + fVar2 * fVar5 + fVar1 * fVar4;
  if (fVar7 <= 0.0) {
    return fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4;
  }
  fVar8 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  if (fVar7 < fVar8) {
    return (fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) - (fVar7 * fVar7) / fVar8;
  }
  fVar3 = (*param_2 - fVar3) - *param_1;
  fVar2 = (param_2[1] - fVar2) - param_1[1];
  fVar1 = (param_2[2] - fVar1) - param_1[2];
  return fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
}


