/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e34b44; name: FUN_02e34b44
 */


uint FUN_02e34b44(float param_1,int *param_2,float *param_3,uint param_4)

{
  float *pfVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar2 = *(long *)(param_2 + 4);
  uVar4 = *param_2 - param_2[3];
  if (uVar4 == 0) {
    return 0;
  }
  fVar9 = (float)param_2[7];
  uVar5 = 0;
  pfVar1 = (float *)(param_2 + 6);
  uVar3 = param_2[1];
  while( true ) {
    pfVar7 = param_3;
    pfVar8 = pfVar1;
    if (0.0 <= fVar9) {
      uVar6 = (uint)fVar9;
      if ((int)((param_4 & 0xffff) - 1) <= (int)uVar6) {
        if (uVar6 < (param_4 & 0xffff)) {
          *pfVar1 = param_3[uVar6];
          fVar10 = (float)(int)(uVar6 + 1);
        }
        else {
          fVar10 = (float)(param_4 & 0xffff);
        }
        fVar9 = fVar9 - fVar10;
        uVar4 = uVar5 & 0xffff;
        goto LAB_02e34c48;
      }
      pfVar8 = param_3 + uVar6;
      pfVar7 = param_3 + (uVar6 + 1);
    }
    fVar10 = *pfVar8;
    if (uVar4 == (uVar5 & 0xffff)) break;
    uVar5 = uVar5 + 1;
    fVar11 = fVar9 + 1.0;
    if (0.0 <= fVar9) {
      fVar11 = fVar9 - (float)(int)fVar9;
    }
    *(float *)(lVar2 + (ulong)uVar3 * 4) = fVar10 + (*pfVar7 - fVar10) * fVar11;
    fVar9 = fVar9 + param_1;
    uVar6 = 0;
    if (uVar3 + 1 != *param_2) {
      uVar6 = uVar3 + 1;
    }
    uVar3 = uVar6;
  }
  *pfVar1 = fVar10;
  if (fVar9 <= 0.0) {
    param_4 = 0;
  }
  else {
    param_4 = (int)fVar9 + 1;
    fVar9 = fVar9 - (float)(int)param_4;
  }
LAB_02e34c48:
  param_2[1] = uVar3;
  param_2[7] = (int)fVar9;
  param_2[3] = param_2[3] + uVar4;
  return param_4 & 0xffff;
}


