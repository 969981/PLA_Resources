/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4a0cc; name: FUN_02e4a0cc
 */


float FUN_02e4a0cc(long param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (param_2[5] - param_2[1]) * 0.5;
  fVar1 = (param_2[4] - *param_2) * 0.5;
  fVar3 = (param_2[6] - param_2[2]) * 0.5;
  fVar1 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
  return fVar1 * *(float *)(param_1 + 0x10) * SQRT(fVar1);
}


