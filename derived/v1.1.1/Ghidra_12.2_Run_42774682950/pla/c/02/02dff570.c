/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dff570; name: FUN_02dff570
 */


void FUN_02dff570(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float *param_4,
                 float *param_5,uint param_6)

{
  float *pfVar1;
  float *pfVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar5 = *param_4;
  fVar7 = param_4[1];
  if (param_6 != 0) {
    pfVar1 = param_5 + param_6;
    fVar4 = param_4[2];
    pfVar2 = pfVar1;
    if (pfVar1 <= param_5 + 1) {
      pfVar2 = param_5 + 1;
    }
    uVar3 = ~(ulong)param_5;
    fVar6 = fVar7;
    if (((uint)((long)pfVar2 + uVar3) >> 2 & 1) == 0) {
      fVar8 = *param_5;
      fVar6 = (fVar8 - fVar5) + fVar7 * fVar4;
      *param_5 = fVar6;
      fVar5 = fVar8;
      param_5 = param_5 + 1;
      param_3 = fVar6;
    }
    fVar7 = param_3;
    if (3 < (long)pfVar2 + uVar3) {
      fVar7 = fVar6;
      do {
        fVar6 = (*param_5 - fVar5) + fVar7 * fVar4;
        fVar5 = param_5[1];
        fVar7 = (fVar5 - *param_5) + fVar6 * fVar4;
        pfVar2 = param_5 + 2;
        *param_5 = fVar6;
        param_5[1] = fVar7;
        param_5 = pfVar2;
      } while (pfVar2 < pfVar1);
    }
  }
  *param_4 = fVar5;
  param_4[1] = fVar7;
  return;
}


