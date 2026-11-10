/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e54748; name: FUN_02e54748
 */


void FUN_02e54748(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = param_3[1] - param_2[0x15];
  fVar1 = *param_3 - param_2[0x14];
  fVar4 = param_3[2] - param_2[0x16];
  *param_1 = param_2[0x1a] * fVar1 + fVar2 * param_2[0x1b] + fVar4 * param_2[0x1c];
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar3 = param_2[2];
  param_1[1] = param_2[3] * fVar1 + fVar2 * param_2[4] + fVar4 * param_2[5];
  param_1[2] = fVar5 * fVar1 + fVar2 * fVar6 + fVar4 * fVar3;
  return;
}


