/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dfebd0; name: FUN_02dfebd0
 */


void FUN_02dfebd0(float param_1,float param_2,long param_3,float *param_4,undefined8 *param_5,
                 float *param_6,undefined8 *param_7,undefined8 *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = *(float *)(param_3 + 0x18) * param_1;
  fVar1 = fVar6 + param_1 * *(float *)(param_3 + 0x20);
  *param_4 = fVar1;
  fVar1 = fVar1 + fVar6;
  fVar5 = fVar1 + fVar6;
  param_4[1] = fVar1;
  fVar1 = fVar6 * 4.0;
  fVar4 = param_2 * 4.0;
  param_4[2] = fVar5;
  param_4[3] = fVar5 + fVar6;
  param_5[1] = CONCAT44(fVar1,fVar1);
  *param_5 = CONCAT44(fVar1,fVar1);
  fVar1 = *(float *)(param_3 + 0x14);
  *param_6 = fVar1;
  fVar1 = fVar1 + param_2 * *param_4;
  param_6[1] = fVar1;
  fVar1 = fVar1 + param_2 * param_4[1];
  param_6[2] = fVar1;
  param_6[3] = fVar1 + param_2 * param_4[2];
  fVar1 = (float)*(undefined8 *)param_6;
  fVar5 = (float)((ulong)*(undefined8 *)param_6 >> 0x20);
  fVar2 = (float)*(undefined8 *)(param_6 + 2);
  fVar3 = (float)((ulong)*(undefined8 *)(param_6 + 2) >> 0x20);
  *(ulong *)(param_6 + 2) = CONCAT44(fVar3 - (float)(int)fVar3,fVar2 - (float)(int)fVar2);
  *(ulong *)param_6 = CONCAT44(fVar5 - (float)(int)fVar5,fVar1 - (float)(int)fVar1);
  param_7[1] = CONCAT44(fVar4,fVar4);
  *param_7 = CONCAT44(fVar4,fVar4);
  fVar6 = param_2 * 6.0 * fVar6;
  param_8[1] = CONCAT44(fVar6,fVar6);
  *param_8 = CONCAT44(fVar6,fVar6);
  return;
}


