/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f01740; name: FUN_02f01740
 */


void FUN_02f01740(float param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_2 * -1.2 + 1.0;
  if (0.5 <= param_2) {
    fVar2 = 0.8 - param_2 * 0.8;
  }
  fVar1 = 1.0 - fVar2;
  *param_3 = SQRT(fVar1 * (0.6666667 - param_1 * 0.6666667));
  param_3[1] = SQRT(fVar1 * param_1 * 0.6666667);
  param_3[2] = SQRT(fVar1 * 0.33333334);
  param_3[3] = SQRT(fVar2 - fVar2 * param_1);
  param_3[4] = SQRT(fVar2 * param_1);
  return;
}


