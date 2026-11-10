/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e547ac; name: FUN_02e547ac
 */


void FUN_02e547ac(float *param_1,long param_2,long param_3,float *param_4,long param_5)

{
  float *pfVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_a0;
  float fStack_9c;
  float local_98;
  float local_90;
  float fStack_8c;
  float local_88;
  float local_80;
  float fStack_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  
  if (*(int *)(param_2 + 0x30) == 0) {
    lVar2 = -1;
  }
  else {
    lVar2 = *(long *)(**(long **)(param_2 + 0x28) + 0x40);
  }
  fVar3 = 1.0;
  if (lVar2 != param_3) {
    fVar3 = -1.0;
  }
  fVar4 = *param_4 - *(float *)(param_2 + 0x50);
  fVar7 = param_4[1] - *(float *)(param_2 + 0x54);
  fVar6 = param_4[2] - *(float *)(param_2 + 0x58);
  fVar8 = SQRT(fVar4 * fVar4 + fVar7 * fVar7 + fVar6 * fVar6);
  if (fVar8 == 0.0) {
    fVar5 = 0.0;
    fVar8 = 0.0;
    fVar4 = 0.0;
  }
  else {
    fVar8 = 1.0 / fVar8;
    fVar5 = fVar4 * 0.01 * fVar8;
    fVar4 = fVar6 * 0.01 * fVar8;
    fVar8 = fVar7 * 0.01 * fVar8;
  }
  fVar5 = fVar5 + *param_4;
  fVar8 = fVar8 + param_4[1];
  local_70 = fVar5;
  local_6c = fVar8;
  fVar4 = fVar4 + param_4[2];
  local_68 = fVar4;
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  fVar6 = *(float *)(param_2 + 100);
  if (fVar6 <= 0.0) {
    pfVar1 = &local_70;
    if (param_3 != param_5) {
      pfVar1 = (float *)(param_2 + 0x50);
    }
    *param_1 = *pfVar1;
    fVar3 = pfVar1[2];
    param_1[1] = pfVar1[1];
    param_1[2] = fVar3;
  }
  else {
    FUN_02e54748(&local_80,param_2,param_4);
    local_90 = -*(float *)(param_2 + 0x5c);
    fVar7 = (float)NEON_fminnm(local_80,*(float *)(param_2 + 0x5c));
    if (local_90 <= local_80) {
      local_90 = fVar7;
    }
    fStack_8c = -*(float *)(param_2 + 0x60);
    fVar7 = (float)NEON_fminnm(fStack_7c,*(float *)(param_2 + 0x60));
    if (fStack_8c <= fStack_7c) {
      fStack_8c = fVar7;
    }
    local_88 = fVar6 * fVar3;
    fVar3 = (float)NEON_fminnm(SQRT((local_80 - local_90) * (local_80 - local_90) +
                                    local_78 * local_78 +
                                    (fStack_7c - fStack_8c) * (fStack_7c - fStack_8c)) / fVar6,
                               0x3f800000);
    if (param_3 != param_5) {
      fVar3 = -fVar3;
    }
    fVar6 = fVar3 * 0.5 + 0.5;
    FUN_02e546e8(&local_a0,param_2,&local_90);
    fVar3 = 0.5 - fVar3 * 0.5;
    *param_1 = fVar3 * local_a0 + fVar5 * fVar6;
    param_1[1] = fVar3 * fStack_9c + fVar8 * fVar6;
    param_1[2] = fVar3 * local_98 + fVar4 * fVar6;
  }
  return;
}


