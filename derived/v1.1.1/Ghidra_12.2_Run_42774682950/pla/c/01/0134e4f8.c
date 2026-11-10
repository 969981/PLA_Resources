/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0134e4f8; name: FUN_0134e4f8
 */


bool FUN_0134e4f8(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = param_2[1];
  fVar2 = param_3[1];
  fVar3 = fVar1 + fVar2 + 132.0;
  if (fVar3 <= 492.0) {
    fVar4 = *param_2 + *param_3;
    fVar5 = 0.0;
    if (910.0 < fVar4 + 130.0) {
      fVar5 = 910.0 - (fVar4 + 130.0);
    }
    if (fVar4 + -130.0 < -910.0) {
      fVar5 = -910.0 - (fVar4 + -130.0);
    }
    if (param_1 != (float *)0x0) {
      *param_1 = fVar4 + fVar5;
      param_1[1] = fVar1 + fVar2 + 0.0;
    }
  }
  return fVar3 <= 492.0;
}


