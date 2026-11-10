/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f01630; name: FUN_02f01630
 */


void FUN_02f01630(float param_1,float param_2,float *param_3)

{
  float fVar1;
  
  if (param_1 <= 0.5) {
    fVar1 = param_1 - param_1 * param_2;
  }
  else {
    fVar1 = param_1 + param_2 * (param_1 + -1.0);
    param_1 = 1.0 - param_1;
  }
  param_1 = (param_2 + param_2) * param_1;
  param_3[2] = SQRT(param_1);
  *param_3 = SQRT((1.0 - fVar1) - param_1);
  param_3[1] = SQRT(fVar1);
  return;
}


