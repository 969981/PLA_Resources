/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f01290; name: FUN_02f01290
 */


void FUN_02f01290(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float *param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  param_1 = param_1 - param_4;
  param_2 = param_2 - param_5;
  param_3 = param_3 - param_6;
  if (param_1 * param_1 + param_2 * param_2 + param_3 * param_3 <= 0.0) {
    param_8[8] = 1.0;
    param_8[0] = 1.0;
    param_8[1] = 0.0;
    param_8[2] = 0.0;
    param_8[3] = 0.0;
    param_8[4] = 1.0;
    param_8[5] = 0.0;
    param_8[6] = 0.0;
    param_8[7] = 0.0;
    return;
  }
  fVar2 = *param_7 * param_1 + param_2 * param_7[1] + param_3 * param_7[2];
  fVar4 = param_7[3] * param_1 + param_2 * param_7[4] + param_3 * param_7[5];
  fVar1 = param_7[6] * param_1 + param_2 * param_7[7] + param_3 * param_7[8];
  fVar7 = 1.0 / SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar1 * fVar1);
  fVar2 = fVar7 * fVar2;
  fVar4 = fVar7 * fVar4;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  fVar7 = fVar7 * fVar1;
  if (1.1920929e-07 < fVar5) {
    fVar5 = SQRT(fVar5);
    param_8[8] = fVar7;
    fVar8 = 1.0 / fVar5;
    fVar6 = 1.0 - fVar7;
    fVar2 = fVar8 * fVar2;
    fVar3 = -(fVar8 * fVar4);
    fVar1 = fVar2 * fVar6 * fVar3;
    param_8[2] = -(fVar2 * fVar5);
    param_8[3] = fVar1;
    *param_8 = fVar7 + fVar6 * fVar8 * fVar4 * fVar8 * fVar4;
    param_8[1] = fVar1;
    param_8[4] = fVar7 + fVar6 * fVar2 * fVar2;
    param_8[5] = fVar5 * fVar3;
    param_8[6] = fVar2 * fVar5;
    param_8[7] = -(fVar5 * fVar3);
    return;
  }
  param_8[0] = 1.0;
  param_8[1] = 0.0;
  param_8[2] = 0.0;
  param_8[3] = 0.0;
  if (fVar7 < 0.0) {
    param_8[8] = -1.0;
    param_8[4] = -1.0;
    param_8[5] = 0.0;
    param_8[6] = 0.0;
    param_8[7] = 0.0;
    return;
  }
  param_8[4] = 1.0;
  param_8[5] = 0.0;
  param_8[6] = 0.0;
  param_8[7] = 0.0;
  param_8[8] = 1.0;
  return;
}


