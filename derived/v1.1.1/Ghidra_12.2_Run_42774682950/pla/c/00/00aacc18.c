/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00aacc18; name: FUN_00aacc18
 */


void FUN_00aacc18(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = (float)*param_2 - (float)*param_1;
  fVar4 = (float)((ulong)*param_2 >> 0x20) - (float)((ulong)*param_1 >> 0x20);
  fVar5 = (float)param_2[1] - (float)param_1[1];
  fVar2 = (float)FUN_00aacd40(CONCAT44(fVar4,fVar1),fVar5);
  fVar6 = (float)((ulong)*param_3 >> 0x20);
  fVar3 = fVar2 + -360.0;
  if (fVar2 - fVar6 <= 180.0) {
    fVar3 = fVar2;
  }
  if (fVar3 - fVar6 < -180.0) {
    fVar3 = fVar3 + 360.0;
  }
  param_3[1] = param_3[1];
  *param_3 = CONCAT44(fVar3,(int)*param_3);
  if ((param_4 & 1) != 0) {
    fVar3 = fVar1 * fVar1 + fVar5 * fVar5;
    fVar1 = SQRT(fVar3);
    if (NAN(fVar1)) {
      fVar1 = sqrtf(fVar3);
    }
    fVar1 = (float)FUN_00aacd40(fVar4,fVar1);
    fVar3 = fVar1 + -360.0;
    if (fVar1 <= 180.0) {
      fVar3 = fVar1;
    }
    fVar1 = fVar3 + 360.0;
    if (-180.0 <= fVar3) {
      fVar1 = fVar3;
    }
    param_3[1] = param_3[1];
    *param_3 = CONCAT44((int)((ulong)*param_3 >> 0x20),-fVar1);
  }
  return;
}


