/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2b438; name: FUN_02f2b438
 */


void FUN_02f2b438(float param_1,long param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar3 = *(float *)(param_2 + 0x10);
  fVar4 = param_3[1];
  fVar6 = *(float *)(param_2 + 0x18);
  fVar1 = *param_3;
  param_3[1] = fVar1;
  fVar7 = *(float *)(param_2 + 0x14);
  *param_3 = param_1;
  fVar2 = param_3[3];
  fVar5 = *(float *)(param_2 + 0x20);
  param_3[3] = param_3[2];
  param_3[2] = fVar3 * param_1 + fVar4 * fVar6 + fVar1 * fVar7 + fVar2 * fVar5 +
               param_3[2] * *(float *)(param_2 + 0x1c);
  return;
}


