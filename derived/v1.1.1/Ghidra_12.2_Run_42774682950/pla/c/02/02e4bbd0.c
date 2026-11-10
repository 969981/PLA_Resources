/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4bbd0; name: FUN_02e4bbd0
 */


void FUN_02e4bbd0(float *param_1,float *param_2,undefined1 *param_3,undefined1 *param_4,
                 undefined1 *param_5,undefined1 *param_6,undefined1 *param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float local_a0;
  float fStack_9c;
  float local_98;
  float local_90;
  float fStack_8c;
  float local_88;
  float local_80;
  float fStack_7c;
  float local_78;
  
  fVar8 = (param_1[9] + param_1[6] + param_2[6] + param_2[9]) * 0.001;
  fVar6 = (param_1[0xb] + param_1[8] + param_2[8] + param_2[0xb]) * 0.001;
  local_80 = *param_2 + fVar8;
  fVar7 = (param_1[10] + param_1[7] + param_2[7] + param_2[10]) * 0.001;
  fStack_7c = param_2[1] + fVar7;
  local_78 = param_2[2] + fVar6;
  fVar5 = param_2[0x1a];
  local_90 = local_80 + fVar5 * param_2[3];
  fStack_8c = fStack_7c + fVar5 * param_2[4];
  local_88 = local_78 + fVar5 * param_2[5];
  uVar1 = FUN_02e4bb18(param_1,&local_80);
  uVar2 = FUN_02e4bb18(param_1,&local_90);
  if (-1 < (int)(uVar2 & uVar1)) {
    fStack_9c = param_1[1] + fVar7;
    local_a0 = *param_1 + fVar8;
    local_98 = param_1[2] + fVar6;
    fVar5 = param_1[0x1a];
    local_b0 = local_a0 + fVar5 * param_1[3];
    fStack_ac = fStack_9c + fVar5 * param_1[4];
    local_a8 = local_98 + fVar5 * param_1[5];
    uVar3 = FUN_02e4bb18(param_2,&local_a0);
    uVar4 = FUN_02e4bb18(param_2,&local_b0);
    if (-1 < (int)(uVar4 & uVar3)) {
      *param_3 = 1;
      *param_4 = (char)uVar1;
      *param_5 = (char)uVar2;
      *param_6 = (char)uVar3;
      *param_7 = (char)uVar4;
      return;
    }
  }
  *param_3 = 0;
  return;
}


