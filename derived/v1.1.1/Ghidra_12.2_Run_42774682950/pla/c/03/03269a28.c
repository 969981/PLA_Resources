/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03269a28; name: FUN_03269a28
 */


void FUN_03269a28(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

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
  
  param_1[0x18] = *param_2;
  fVar1 = (float)*param_1;
  fVar5 = (float)param_1[2] - fVar1;
  fVar2 = (float)((ulong)*param_1 >> 0x20);
  fVar6 = (float)((ulong)param_1[2] >> 0x20) - fVar2;
  fVar3 = (float)param_1[1];
  fVar7 = (float)param_1[3] - fVar3;
  fVar4 = (float)((ulong)param_1[1] >> 0x20);
  fVar8 = (float)((ulong)param_1[3] >> 0x20) - fVar4;
  param_1[0x19] = *param_3;
  param_1[0x1a] = *param_4;
  param_1[0x1b] = *param_5;
  fVar9 = (float)*param_2;
  fVar10 = (float)((ulong)*param_2 >> 0x20);
  param_1[9] = CONCAT44(fVar4 + fVar8 * fVar10,fVar3 + fVar7 * fVar9);
  param_1[8] = CONCAT44(fVar2 + fVar6 * fVar10,fVar1 + fVar5 * fVar9);
  fVar9 = (float)*param_3;
  fVar10 = (float)((ulong)*param_3 >> 0x20);
  param_1[0xb] = CONCAT44(fVar4 + fVar8 * fVar10,fVar3 + fVar7 * fVar9);
  param_1[10] = CONCAT44(fVar2 + fVar6 * fVar10,fVar1 + fVar5 * fVar9);
  fVar1 = (float)param_1[4];
  fVar5 = (float)param_1[6] - fVar1;
  fVar2 = (float)((ulong)param_1[4] >> 0x20);
  fVar6 = (float)((ulong)param_1[6] >> 0x20) - fVar2;
  fVar3 = (float)param_1[5];
  fVar7 = (float)param_1[7] - fVar3;
  fVar4 = (float)((ulong)param_1[5] >> 0x20);
  fVar8 = (float)((ulong)param_1[7] >> 0x20) - fVar4;
  fVar9 = (float)*param_4;
  fVar10 = (float)((ulong)*param_4 >> 0x20);
  param_1[0xd] = CONCAT44(fVar4 + fVar8 * fVar10,fVar3 + fVar7 * fVar9);
  param_1[0xc] = CONCAT44(fVar2 + fVar6 * fVar10,fVar1 + fVar5 * fVar9);
  fVar9 = (float)*param_5;
  fVar10 = (float)((ulong)*param_5 >> 0x20);
  param_1[0xf] = CONCAT44(fVar4 + fVar8 * fVar10,fVar3 + fVar7 * fVar9);
  param_1[0xe] = CONCAT44(fVar2 + fVar6 * fVar10,fVar1 + fVar5 * fVar9);
  return;
}


