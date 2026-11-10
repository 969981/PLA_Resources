/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f015d0; name: FUN_02f015d0
 */


void FUN_02f015d0(float param_1,float param_2,float *param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  
  *param_3 = SQRT((1.0 - param_1) * param_2);
  param_3[1] = SQRT(param_2 * param_1);
  bVar1 = (param_4 >> 2 & 1) != 0;
  if (bVar1) {
    param_3[2] = 0.0;
  }
  uVar2 = (uint)bVar1;
  param_3[uVar2 | 2] = SQRT((1.0 - param_2) * (1.0 - param_1));
  param_3[uVar2 + 3] = SQRT((1.0 - param_2) * param_1);
  return;
}


