/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5f550; name: FUN_02e5f550
 */


undefined8
FUN_02e5f550(undefined8 param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  
  local_30 = *param_2;
  local_2c = param_2[1];
  local_28 = param_2[2];
  local_40 = *param_3;
  local_3c = param_3[1];
  local_38 = param_3[2];
  uVar1 = FUN_02e61810(param_1,&local_30,&local_40);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    fVar8 = local_2c - param_4[1];
    fVar4 = param_4[1] - local_3c;
    fVar6 = local_30 - *param_4;
    fVar3 = *param_4 - local_40;
    fVar7 = local_28 - param_4[2];
    fVar5 = param_4[2] - local_38;
    fVar3 = (float)NEON_fminnm((fVar3 * fVar6 + fVar8 * fVar4 + fVar7 * fVar5) /
                               SQRT((fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5) *
                                    (fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7)),0x3f800000);
    if (fVar3 <= -1.0) {
      fVar3 = -1.0;
    }
    fVar3 = acosf(fVar3);
    uVar2 = 1;
    *param_5 = fVar3 * 0.63661975;
  }
  return uVar2;
}


