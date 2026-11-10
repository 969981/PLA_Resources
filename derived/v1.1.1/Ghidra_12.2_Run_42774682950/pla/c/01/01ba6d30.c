/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ba6d30; name: FUN_01ba6d30
 */


undefined8 FUN_01ba6d30(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_2 + 1);
  if (*(float *)(param_1 + 1) <= fVar4) {
    if (fVar4 <= *(float *)(param_3 + 1)) {
      return 0;
    }
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_3[1];
    *param_2 = *param_3;
    param_2[1] = uVar3;
    *param_3 = uVar1;
    param_3[1] = uVar2;
    if (*(float *)(param_1 + 1) <= *(float *)(param_2 + 1)) {
      return 1;
    }
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar3;
    *param_2 = uVar1;
    param_2[1] = uVar2;
  }
  else {
    if (*(float *)(param_3 + 1) < fVar4) {
      uVar1 = *param_1;
      uVar2 = param_1[1];
      uVar3 = param_3[1];
      *param_1 = *param_3;
      param_1[1] = uVar3;
      *param_3 = uVar1;
      param_3[1] = uVar2;
      return 1;
    }
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar3;
    *param_2 = uVar1;
    param_2[1] = uVar2;
    if (*(float *)(param_2 + 1) <= *(float *)(param_3 + 1)) {
      return 1;
    }
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_3[1];
    *param_2 = *param_3;
    param_2[1] = uVar3;
    *param_3 = uVar1;
    param_3[1] = uVar2;
  }
  return 2;
}


