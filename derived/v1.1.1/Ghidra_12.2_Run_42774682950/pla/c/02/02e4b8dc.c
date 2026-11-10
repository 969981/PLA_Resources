/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4b8dc; name: FUN_02e4b8dc
 */


void FUN_02e4b8dc(float *param_1,float *param_2,float *param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_70;
  float fStack_6c;
  float local_68;
  undefined8 local_60;
  float local_58;
  
  fVar1 = *param_2;
  *param_1 = fVar1;
  fVar2 = param_2[1];
  param_1[1] = fVar2;
  fVar5 = param_2[2];
  param_1[2] = fVar5;
  fVar1 = *param_3 - fVar1;
  fVar5 = param_3[2] - fVar5;
  fVar2 = param_3[1] - fVar2;
  fVar4 = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar5 * fVar5);
  param_1[0x1a] = fVar4;
  fVar4 = 1.0 / fVar4;
  param_1[3] = fVar4 * fVar1;
  param_1[4] = fVar4 * fVar2;
  param_1[5] = fVar4 * fVar5;
  FUN_02e4b898(&local_60,param_1,param_4);
  fVar1 = SQRT((float)local_60 * (float)local_60 + local_60._4_4_ * local_60._4_4_ +
               local_58 * local_58);
  if (fVar1 == 0.0) {
    fVar2 = 0.0;
    fVar5 = 0.0;
    fVar1 = 0.0;
    local_60 = 0;
  }
  else {
    fVar1 = 1.0 / fVar1;
    fVar5 = (float)local_60 * fVar1;
    fVar2 = local_60._4_4_ * fVar1;
    local_60 = CONCAT44(fVar2,fVar5);
    fVar1 = local_58 * fVar1;
  }
  local_58 = fVar1;
  FUN_02e4b898(&local_70,param_1,param_6);
  fVar4 = SQRT(local_70 * local_70 + fStack_6c * fStack_6c + local_68 * local_68);
  if (fVar4 == 0.0) {
    fStack_6c = 0.0;
    local_70 = 0.0;
    local_68 = 0.0;
  }
  else {
    fVar4 = 1.0 / fVar4;
    local_70 = local_70 * fVar4;
    fStack_6c = fStack_6c * fVar4;
    local_68 = local_68 * fVar4;
  }
  *(undefined8 *)(param_1 + 0x1c) = param_5;
  *(undefined8 *)(param_1 + 0x1e) = param_7;
  if (((fVar5 == local_70) && (fVar2 == fStack_6c)) && (fVar1 == local_68)) {
    fVar3 = param_1[3];
    fVar4 = param_1[4];
    fVar6 = param_1[5];
  }
  else {
    fVar3 = param_1[3];
    fVar4 = param_1[4];
    fVar6 = param_1[5];
    if (fVar3 * (fStack_6c * fVar1 - local_68 * fVar2) +
        (local_68 * fVar5 - local_70 * fVar1) * fVar4 +
        (local_70 * fVar2 - fStack_6c * fVar5) * fVar6 < 0.0) {
      *(undefined8 *)(param_1 + 0x1c) = param_7;
      *(undefined8 *)(param_1 + 0x1e) = param_5;
      fVar7 = local_68;
      local_68 = fVar1;
      fVar1 = fStack_6c;
      fStack_6c = fVar2;
      fVar2 = local_70;
      local_70 = fVar5;
      goto LAB_02e4ba78;
    }
  }
  fVar7 = fVar1;
  fVar1 = fVar2;
  fVar2 = fVar5;
LAB_02e4ba78:
  param_1[6] = fVar4 * fVar7 - fVar6 * fVar1;
  param_1[7] = fVar6 * fVar2 - fVar7 * fVar3;
  param_1[8] = fVar1 * fVar3 - fVar4 * fVar2;
  param_1[9] = fVar6 * fStack_6c - fVar4 * local_68;
  param_1[10] = fVar3 * local_68 - fVar6 * local_70;
  param_1[0xb] = fVar4 * local_70 - fVar3 * fStack_6c;
  return;
}


