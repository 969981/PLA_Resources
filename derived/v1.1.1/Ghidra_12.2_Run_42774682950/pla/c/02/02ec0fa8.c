/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec0fa8; name: FUN_02ec0fa8
 */


void FUN_02ec0fa8(uint param_1,long param_2,float *param_3,float *param_4)

{
  double dVar1;
  float fVar2;
  double dVar3;
  
  fVar2 = *(float *)(param_2 + 8);
  if (fVar2 == 0.0) {
    *param_4 = 0.0;
    fVar2 = 1.0;
  }
  else {
    dVar3 = (double)param_1;
    dVar1 = (double)NEON_fminnm((double)*(float *)(param_2 + 4),dVar3);
    dVar1 = log((dVar3 * 0.5) / dVar1);
    dVar1 = exp(-(dVar1 * (double)fVar2));
    dVar1 = cos((dVar3 * 3.141592653589793 * dVar1) / dVar3);
    dVar1 = 2.0 - dVar1;
    fVar2 = (float)(SQRT(dVar1 * dVar1 + -1.0) - dVar1);
    *param_4 = fVar2;
    fVar2 = fVar2 + 1.0;
  }
  *param_3 = fVar2;
  return;
}


