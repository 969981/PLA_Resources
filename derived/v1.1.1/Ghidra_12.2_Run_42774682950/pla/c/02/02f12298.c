/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f12298; name: FUN_02f12298
 */


void FUN_02f12298(undefined8 *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float __x;
  float fVar3;
  
  __x = *param_3;
  fVar1 = param_3[1];
  fVar3 = param_3[2];
  fVar2 = atan2f(fVar1,__x);
  *param_2 = fVar2;
  fVar1 = asinf(param_3[2] / SQRT(__x * __x + fVar1 * fVar1 + fVar3 * fVar3));
  param_2[1] = fVar1;
  FUN_02f12728(param_2);
  *param_1 = *(undefined8 *)param_2;
  return;
}


