/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e05e70; name: FUN_02e05e70
 */


void FUN_02e05e70(float *param_1,float *param_2,long param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar4 = *param_2;
  fVar5 = param_2[1];
  pfVar1 = param_2 + param_3 * 2;
  fVar6 = param_2[param_3 * 8];
  fVar7 = (param_2 + param_3 * 8)[1];
  fVar8 = *pfVar1;
  fVar9 = pfVar1[1];
  pfVar2 = pfVar1 + param_3 * 2;
  fVar12 = *pfVar2;
  fVar13 = pfVar2[1];
  pfVar3 = pfVar2 + param_3 * 2;
  param_1[2] = fVar4 - fVar6;
  param_1[3] = fVar5 - fVar7;
  fVar10 = pfVar1[param_3 * 8];
  fVar11 = (pfVar1 + param_3 * 8)[1];
  *param_1 = fVar6 + fVar4;
  param_1[1] = fVar7 + fVar5;
  fVar6 = pfVar2[param_3 * 8];
  fVar14 = (pfVar2 + param_3 * 8)[1];
  fVar4 = *pfVar3;
  fVar5 = pfVar3[1];
  param_1[6] = fVar8 - fVar10;
  param_1[7] = fVar9 - fVar11;
  param_1[4] = fVar10 + fVar8;
  param_1[5] = fVar11 + fVar9;
  param_1[8] = fVar6 + fVar12;
  param_1[9] = fVar14 + fVar13;
  fVar7 = pfVar3[param_3 * 8];
  fVar8 = (pfVar3 + param_3 * 8)[1];
  param_1[10] = fVar12 - fVar6;
  param_1[0xb] = fVar13 - fVar14;
  param_1[0xe] = fVar4 - fVar7;
  param_1[0xf] = fVar5 - fVar8;
  param_1[0xc] = fVar7 + fVar4;
  param_1[0xd] = fVar8 + fVar5;
  return;
}


