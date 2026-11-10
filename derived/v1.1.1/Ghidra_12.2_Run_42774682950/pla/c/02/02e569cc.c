/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e569cc; name: FUN_02e569cc
 */


float FUN_02e569cc(long param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulong uVar4;
  float fVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar4 = (ulong)*(uint *)(param_1 + 0xe8);
  if (*(uint *)(param_1 + 0xe8) == 0) {
    return 0.0;
  }
  fVar9 = 0.0;
  pfVar6 = (float *)(param_1 + 8);
  fVar7 = param_3[1];
  fVar5 = param_3[2];
  fVar8 = *param_3;
  do {
    fVar1 = pfVar6[-2];
    fVar2 = pfVar6[-1];
    uVar4 = uVar4 - 1;
    fVar3 = *pfVar6;
    fVar9 = SQRT((fVar1 - fVar8) * (fVar1 - fVar8) + (fVar2 - fVar7) * (fVar2 - fVar7) +
                 (fVar3 - fVar5) * (fVar3 - fVar5)) + fVar9;
    pfVar6 = pfVar6 + 4;
    fVar7 = fVar2;
    fVar5 = fVar3;
    fVar8 = fVar1;
  } while (uVar4 != 0);
  return SQRT((*param_2 - fVar1) * (*param_2 - fVar1) + (param_2[1] - fVar2) * (param_2[1] - fVar2)
              + (param_2[2] - fVar3) * (param_2[2] - fVar3)) + fVar9;
}


