/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e546e8; name: FUN_02e546e8
 */


void FUN_02e546e8(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar2 = param_2[0x1a];
  fVar4 = param_2[0x1b];
  fVar8 = *param_3;
  fVar10 = param_3[1];
  fVar5 = param_3[2];
  fVar3 = param_2[4];
  fVar1 = param_2[3];
  fVar9 = *param_2;
  fVar11 = param_2[1];
  fVar6 = param_2[0x14];
  fVar7 = param_2[0x15];
  param_1[2] = param_2[0x1c] * fVar8 + fVar10 * param_2[5] + fVar5 * param_2[2] + param_2[0x16];
  *param_1 = fVar2 * fVar8 + fVar10 * fVar1 + fVar5 * fVar9 + fVar6;
  param_1[1] = fVar4 * fVar8 + fVar10 * fVar3 + fVar5 * fVar11 + fVar7;
  return;
}


