/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f8b20; name: FUN_002f8b20
 */


void FUN_002f8b20(double *param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  pdVar1 = param_1 + 3;
  dVar2 = *pdVar1;
  dVar4 = param_1[1];
  dVar3 = param_1[4];
  if (0.0 < dVar4) {
    dVar2 = dVar2 + dVar4 * *param_1;
    dVar3 = dVar3 + dVar4;
    dVar4 = param_1[2];
  }
  else {
    dVar4 = param_1[2];
  }
  if (0.0 < dVar4) {
    dVar2 = dVar2 + dVar4 * param_1[5] * param_1[6];
    dVar3 = dVar3 + dVar4 * param_1[5];
  }
  if (dVar3 <= 0.0) {
    param_1[5] = dVar3;
    param_1[6] = *param_1;
    *pdVar1 = 0.0;
    param_1[4] = 0.0;
    return;
  }
  param_1[5] = dVar3;
  param_1[6] = dVar2 / dVar3;
  *pdVar1 = 0.0;
  param_1[4] = 0.0;
  return;
}


