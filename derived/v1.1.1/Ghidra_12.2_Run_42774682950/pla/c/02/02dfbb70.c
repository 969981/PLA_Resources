/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dfbb70; name: FUN_02dfbb70
 */


void FUN_02dfbb70(float param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  fVar1 = param_2[5];
  param_2[5] = param_1;
  param_2[6] = fVar1;
  param_2[7] = (*param_2 * param_1 + param_2[1] * fVar1 + param_2[2] * fVar2) -
               (fVar3 * param_2[3] + param_2[4] * param_2[8]);
  param_2[8] = fVar3;
  return;
}


