/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e58c5c; name: FUN_02e58c5c
 */


void FUN_02e58c5c(float param_1,float param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 local_80;
  float local_7c;
  float fStack_78;
  float local_74;
  undefined4 local_70;
  float local_6c;
  float local_68;
  float fStack_64;
  undefined4 local_60;
  float local_58;
  float local_54;
  float fStack_50;
  float local_4c;
  float fStack_48;
  float local_44;
  float fStack_40;
  float local_3c;
  float fStack_38;
  
  *param_3 = param_2;
  param_3[3] = 0.0;
  fStack_38 = 1.0 - param_2;
  param_3[1] = 0.0;
  param_3[2] = 0.0;
  param_3[4] = param_2;
  param_3[7] = 0.0;
  param_3[5] = 0.0;
  param_3[6] = 0.0;
  param_3[8] = param_2;
  fVar1 = *param_4;
  fVar2 = param_4[1];
  fVar3 = param_4[2];
  fStack_48 = fVar2 * fVar2 * fStack_38;
  local_58 = fVar1 * fVar1 * fStack_38;
  local_54 = fVar1 * fStack_38 * fVar2;
  fStack_50 = fVar1 * fStack_38 * fVar3;
  local_44 = fStack_38 * fVar2 * fVar3;
  fStack_38 = fVar3 * fVar3 * fStack_38;
  local_4c = local_54;
  fStack_40 = fStack_50;
  local_3c = local_44;
  FUN_02e59cd8(param_3,param_3,&local_58);
  local_68 = param_4[1] * param_1;
  local_80 = 0;
  local_70 = 0;
  local_60 = 0;
  local_7c = param_4[2] * param_1;
  local_6c = *param_4 * param_1;
  fStack_64 = -(*param_4 * param_1);
  local_74 = -(param_4[2] * param_1);
  fStack_78 = -(param_4[1] * param_1);
  FUN_02e59cd8(param_3,param_3,&local_80);
  return;
}


