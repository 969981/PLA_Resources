/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4c2d0; name: FUN_02e4c2d0
 */


void FUN_02e4c2d0(float *param_1,long *param_2,float *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar8 = param_1[1] - param_3[1];
  fVar9 = *param_1 - *param_3;
  fVar11 = param_1[2] - param_3[2];
  uVar5 = (ulong)*(uint *)(param_2 + 1);
  uVar2 = 0;
  plVar3 = (long *)*param_2;
  do {
    uVar4 = uVar2;
    uVar1 = uVar5;
    if (uVar5 == uVar4) break;
    pfVar7 = (float *)*plVar3;
    fVar12 = param_1[1] - pfVar7[1];
    fVar10 = *param_1 - *pfVar7;
    fVar13 = param_1[2] - pfVar7[2];
    uVar2 = uVar4 + 1;
    plVar3 = plVar3 + 2;
    uVar1 = uVar4;
  } while (fVar10 * fVar10 + fVar12 * fVar12 + fVar13 * fVar13 <=
           fVar9 * fVar9 + fVar8 * fVar8 + fVar11 * fVar11);
  if (*(uint *)(param_2 + 1) != 0) {
    lVar6 = uVar5 << 4;
    plVar3 = (long *)*param_2;
    do {
      if ((float *)*plVar3 == param_3) {
        return;
      }
      lVar6 = lVar6 + -0x10;
      plVar3 = plVar3 + 2;
    } while (lVar6 != 0);
  }
  plVar3 = (long *)FUN_02e4c3a0(param_2,uVar1 & 0xffffffff);
  if (plVar3 != (long *)0x0) {
    *plVar3 = (long)param_3;
    *(undefined2 *)(plVar3 + 1) = 0;
  }
  return;
}


