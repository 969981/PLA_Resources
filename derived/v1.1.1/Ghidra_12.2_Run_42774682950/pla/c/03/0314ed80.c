/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0314ed80; name: FUN_0314ed80
 */


void FUN_0314ed80(float param_1,float param_2,float *param_3,float *param_4,float *param_5)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  param_1 = param_3[0x11] * param_1;
  fVar8 = *param_3 * param_2;
  fVar2 = param_1 * param_1 + fVar8 * fVar8;
  if (fVar2 <= 1.0) {
    uVar1 = 0;
    do {
      fVar3 = fVar2;
      fVar6 = fVar8;
      fVar5 = param_1;
      param_1 = param_3[0x10] * fVar5;
      fVar8 = param_3[uVar1 + 1] * param_2;
      fVar2 = param_1 * param_1 + fVar8 * fVar8;
      if (0xd < uVar1) break;
      uVar1 = uVar1 + 1;
    } while (fVar2 <= 1.0);
  }
  else {
    fVar6 = 0.0;
    fVar3 = 0.0;
    fVar5 = 0.0;
  }
  fVar2 = (float)FUN_032c8ed0();
  fVar3 = (float)FUN_032c8ed0(fVar3);
  fVar7 = (fVar2 + -1.0) - (fVar3 + -1.0);
  fVar4 = (float)FUN_032c8ef0(fVar7);
  if (1.1920929e-07 < fVar4) {
    fVar7 = 1.0 / fVar7;
  }
  else {
    fVar7 = 8388608.0;
  }
  fVar3 = (fVar3 + -1.0) * fVar7;
  fVar7 = (fVar2 + -1.0) * fVar7;
  fVar5 = fVar5 * fVar7 - param_1 * fVar3;
  fVar2 = fVar6 * fVar7 - fVar8 * fVar3;
  fVar8 = fVar5;
  if (1.1 < fVar5) {
    fVar8 = 1.1;
  }
  fVar3 = fVar2;
  if (1.1 < fVar2) {
    fVar3 = 1.1;
  }
  fVar6 = -1.1;
  if (-1.1 <= fVar5) {
    fVar6 = fVar8;
  }
  fVar8 = -1.1;
  if (-1.1 <= fVar2) {
    fVar8 = fVar3;
  }
  *param_4 = fVar6;
  *param_5 = fVar8;
  return;
}


