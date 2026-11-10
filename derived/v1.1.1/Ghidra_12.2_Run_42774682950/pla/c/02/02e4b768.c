/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4b768; name: FUN_02e4b768
 */


void FUN_02e4b768(float *param_1,float *param_2,float *param_3,undefined8 param_4,undefined8 param_5
                 )

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_30;
  float fStack_2c;
  float local_28;
  
  fVar1 = *param_2;
  *param_1 = fVar1;
  fVar3 = param_2[1];
  param_1[1] = fVar3;
  fVar4 = param_2[2];
  param_1[2] = fVar4;
  fVar2 = param_3[1];
  fVar1 = *param_3 - fVar1;
  fVar4 = param_3[2] - fVar4;
  *(undefined8 *)(param_1 + 0x1c) = param_5;
  *(undefined8 *)(param_1 + 0x1e) = param_5;
  fVar2 = fVar2 - fVar3;
  fVar3 = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar4 * fVar4);
  param_1[0x1a] = fVar3;
  fVar3 = 1.0 / fVar3;
  param_1[3] = fVar3 * fVar1;
  param_1[4] = fVar3 * fVar2;
  param_1[5] = fVar3 * fVar4;
  FUN_02e4b898(&local_30,param_1,param_4);
  fVar1 = SQRT(local_30 * local_30 + fStack_2c * fStack_2c + local_28 * local_28);
  if (fVar1 == 0.0) {
    local_30 = 0.0;
    fStack_2c = 0.0;
    local_28 = 0.0;
  }
  else {
    fVar1 = 1.0 / fVar1;
    local_30 = local_30 * fVar1;
    fStack_2c = fStack_2c * fVar1;
    local_28 = local_28 * fVar1;
  }
  fVar3 = param_1[4] * local_28;
  fVar4 = param_1[5] * fStack_2c;
  fVar1 = param_1[5] * local_30;
  local_28 = param_1[3] * local_28;
  fStack_2c = param_1[3] * fStack_2c;
  local_30 = param_1[4] * local_30;
  param_1[6] = fVar3 - fVar4;
  param_1[7] = fVar1 - local_28;
  param_1[8] = fStack_2c - local_30;
  param_1[9] = fVar4 - fVar3;
  param_1[10] = local_28 - fVar1;
  param_1[0xb] = local_30 - fStack_2c;
  return;
}


