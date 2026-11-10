/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f11dfc; name: FUN_02f11dfc
 */


uint FUN_02f11dfc(uint *param_1,long param_2,uint param_3,uint param_4,uint param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  float fVar10;
  
  pfVar1 = (float *)(param_2 + (long)(int)param_3 * 8);
  pfVar2 = (float *)(param_2 + (long)(int)param_5 * 8);
  pfVar3 = (float *)(param_2 + (long)(int)param_4 * 8);
  fVar10 = (*pfVar1 - *pfVar2) * (pfVar3[1] - pfVar1[1]) +
           (*pfVar3 - *pfVar1) * (pfVar2[1] - pfVar1[1]);
  if (fVar10 == 0.0) {
    uVar8 = 1;
  }
  else {
    uVar7 = *param_1;
    uVar6 = param_5;
    if (0.0 <= fVar10) {
      uVar6 = param_4;
      param_4 = param_5;
    }
    if (uVar7 == 0) {
      uVar8 = 0;
    }
    else {
      lVar4 = param_2 + (long)(int)uVar6 * 8;
      uVar9 = 0;
      lVar5 = param_2 + (long)(int)param_4 * 8;
      do {
        uVar8 = 0;
        if (((param_4 != uVar9) && (param_3 != uVar9)) && (uVar6 != uVar9)) {
          uVar8 = FUN_02f12030(param_2,pfVar1,lVar4,lVar5);
        }
        uVar9 = uVar9 + 1;
      } while ((uVar9 < uVar7) && (param_2 = param_2 + 8, (uVar8 & 1) == 0));
    }
  }
  return uVar8 & 1;
}


