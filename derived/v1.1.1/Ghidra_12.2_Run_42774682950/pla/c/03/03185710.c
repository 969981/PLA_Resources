/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03185710; name: FUN_03185710
 */


void FUN_03185710(undefined8 *param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  
  fVar2 = (float)((ulong)param_1[8] >> 0x20);
  fVar6 = (float)param_1[8];
  fVar4 = (float)param_1[9];
  fVar1 = ABS((float)*param_1 * fVar6) + ABS((float)param_1[2] * fVar2) +
          ABS((float)param_1[4] * fVar4);
  fVar3 = ABS((float)((ulong)*param_1 >> 0x20) * fVar6) +
          ABS((float)((ulong)param_1[2] >> 0x20) * fVar2) +
          ABS((float)((ulong)param_1[4] >> 0x20) * fVar4);
  fVar5 = ABS((float)param_1[1] * fVar6) + ABS((float)param_1[3] * fVar2) +
          ABS((float)param_1[5] * fVar4);
  fVar6 = ABS((float)((ulong)param_1[1] >> 0x20) * fVar6) +
          ABS((float)((ulong)param_1[3] >> 0x20) * fVar2) +
          ABS((float)((ulong)param_1[5] >> 0x20) * fVar4);
  param_2[1] = CONCAT44(-fVar6,-fVar5);
  *param_2 = CONCAT44(-fVar3,-fVar1);
  param_2[3] = CONCAT44(fVar6,fVar5);
  param_2[2] = CONCAT44(fVar3,fVar1);
  uVar7 = param_1[6];
  param_2[1] = CONCAT44((float)((ulong)param_1[7] >> 0x20) - fVar6,(float)param_1[7] - fVar5);
  *param_2 = CONCAT44((float)((ulong)uVar7 >> 0x20) - fVar3,(float)uVar7 - fVar1);
  uVar7 = param_1[6];
  param_2[3] = CONCAT44(fVar6 + (float)((ulong)param_1[7] >> 0x20),fVar5 + (float)param_1[7]);
  param_2[2] = CONCAT44(fVar3 + (float)((ulong)uVar7 >> 0x20),fVar1 + (float)uVar7);
  return;
}


