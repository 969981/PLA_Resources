/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f014a0; name: FUN_02f014a0
 */


void FUN_02f014a0(float param_1,float param_2,float *param_3,uint param_4)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = 1.0 - param_1;
  fVar5 = param_2 * 1.3333334 + -0.33333334;
  fVar2 = 1.0 - param_2 * 1.3333334;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar3 = (1.0 - fVar2) - fVar5;
  *param_3 = SQRT(fVar5 * fVar4);
  param_3[1] = SQRT(fVar5 * param_1);
  bVar1 = (param_4 >> 2 & 1) != 0;
  if (bVar1) {
    param_3[2] = 0.0;
  }
  param_3[bVar1 | 2] = SQRT(fVar2 * fVar4);
  param_3[bVar1 + 3] = SQRT(fVar2 * param_1);
  param_3[bVar1 | 4] = SQRT(fVar3 * fVar4);
  param_3[bVar1 + 5] = SQRT(fVar3 * param_1);
  return;
}


