/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e06a24; name: FUN_02e06a24
 */


void FUN_02e06a24(long *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  pfVar2 = (float *)*param_1;
  fVar7 = *pfVar2;
  fVar6 = pfVar2[1];
  pfVar1 = pfVar2 + (ulong)(*(uint *)(param_1 + 1) >> 1) * 2;
  fVar5 = *pfVar1;
  fVar4 = pfVar1[1];
  FUN_02e07020(pfVar2);
  *pfVar2 = SQRT(fVar7 * fVar7 + fVar6 * fVar6);
  if (fVar7 == 0.0) {
    if (fVar6 <= 0.0) {
      fVar3 = fVar6;
      if (fVar6 != 0.0) {
        fVar3 = -1.5707964;
      }
    }
    else {
      fVar3 = 1.5707964;
    }
  }
  else {
    fVar3 = fVar6 / fVar7;
    if (1.0 <= ABS(fVar3)) {
      if (fVar6 < 0.0) {
        fVar6 = -1.5707964;
      }
      else {
        fVar6 = 1.5707964;
      }
      fVar3 = fVar6 - fVar3 / (fVar3 * fVar3 + 0.28);
    }
    else {
      fVar3 = fVar3 / (fVar3 * fVar3 * 0.28 + 1.0);
      if (fVar7 < 0.0) {
        if (0.0 <= fVar6) {
          fVar6 = 3.1415927;
        }
        else {
          fVar6 = -3.1415927;
        }
        fVar3 = fVar3 + fVar6;
      }
    }
  }
  pfVar2[1] = fVar3;
  *pfVar1 = SQRT(fVar5 * fVar5 + fVar4 * fVar4);
  if (fVar5 == 0.0) {
    if (fVar4 <= 0.0) {
      fVar6 = fVar4;
      if (fVar4 != 0.0) {
        fVar6 = -1.5707964;
      }
    }
    else {
      fVar6 = 1.5707964;
    }
  }
  else {
    fVar6 = fVar4 / fVar5;
    if (1.0 <= ABS(fVar6)) {
      if (fVar4 < 0.0) {
        fVar4 = -1.5707964;
      }
      else {
        fVar4 = 1.5707964;
      }
      fVar6 = fVar4 - fVar6 / (fVar6 * fVar6 + 0.28);
    }
    else {
      fVar6 = fVar6 / (fVar6 * fVar6 * 0.28 + 1.0);
      if (fVar5 < 0.0) {
        if (0.0 <= fVar4) {
          fVar4 = 3.1415927;
        }
        else {
          fVar4 = -3.1415927;
        }
        fVar6 = fVar6 + fVar4;
      }
    }
  }
  pfVar1[1] = fVar6;
  *(undefined1 *)((long)param_1 + 0xd) = 1;
  return;
}


