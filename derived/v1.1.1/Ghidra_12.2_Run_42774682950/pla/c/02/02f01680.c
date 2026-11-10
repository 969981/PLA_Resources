/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f01680; name: FUN_02f01680
 */


void FUN_02f01680(float param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = param_2 * 1.1428572 + -0.14285715;
  fVar1 = param_2 * -1.4285715 + 1.0;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *param_3 = SQRT(fVar3 * (0.6666667 - param_1 * 0.6666667));
  param_3[1] = SQRT(fVar3 * param_1 * 0.6666667);
  fVar2 = (1.0 - fVar1) - fVar3;
  param_3[2] = SQRT(fVar3 * 0.33333334);
  param_3[3] = SQRT(fVar1 * (1.0 - param_1));
  param_3[4] = SQRT(fVar1 * param_1);
  param_3[5] = SQRT(fVar2 * (1.0 - param_1));
  param_3[6] = SQRT(fVar2 * param_1);
  return;
}


