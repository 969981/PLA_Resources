/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0183240c; name: FUN_0183240c
 */


void FUN_0183240c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
                 uint param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  
  uVar3 = param_2[5];
  param_1[3] = param_2[3];
  param_1[5] = uVar3;
  param_1[1] = param_2[1];
  uVar3 = *param_2;
  param_1[2] = param_2[2];
  *param_1 = uVar3;
  uVar3 = param_2[4];
  param_1[6] = param_2[6];
  param_1[4] = uVar3;
  memmove(param_1 + 0x10,param_2,0x38);
  uVar3 = *param_3;
  uVar4 = param_3[2];
  param_1[9] = param_3[1];
  param_1[10] = uVar4;
  param_1[8] = uVar3;
  uVar3 = param_3[3];
  uVar1 = param_3[4];
  uVar4 = param_3[5];
  uVar2 = param_3[6];
  *(undefined4 *)(param_1 + 0x18) = param_4;
  param_1[0xd] = uVar4;
  param_1[0xe] = uVar2;
  *(uint *)(param_1 + 0x19) = param_5;
  param_1[0xb] = uVar3;
  param_1[0xc] = uVar1;
  if (param_5 == 0) {
    fVar5 = 1.0;
  }
  else {
    fVar5 = 1.0 / (float)param_5;
  }
  *(float *)((long)param_1 + 0xc4) = fVar5;
  *(undefined4 *)((long)param_1 + 0xcc) = 0;
  return;
}


