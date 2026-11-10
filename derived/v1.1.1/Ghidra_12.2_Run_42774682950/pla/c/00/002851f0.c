/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002851f0; name: FUN_002851f0
 */


int FUN_002851f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *(uint *)(param_2 + 1);
  if (*(uint *)(param_1 + 1) < uVar4) {
    if (uVar4 < *(uint *)(param_3 + 1)) {
      uVar1 = *param_1;
      uVar2 = param_1[1];
      uVar3 = param_3[1];
      *param_1 = *param_3;
      param_1[1] = uVar3;
      *param_3 = uVar1;
      param_3[1] = uVar2;
    }
    else {
      uVar1 = *param_1;
      uVar2 = param_1[1];
      uVar3 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar3;
      *param_2 = uVar1;
      param_2[1] = uVar2;
      if (*(uint *)(param_2 + 1) < *(uint *)(param_3 + 1)) {
        uVar1 = *param_2;
        uVar2 = param_2[1];
        uVar3 = param_3[1];
        *param_2 = *param_3;
        param_2[1] = uVar3;
        *param_3 = uVar1;
        param_3[1] = uVar2;
LAB_002852b8:
        iVar5 = 2;
        if (*(uint *)(param_4 + 1) <= *(uint *)(param_3 + 1)) {
          return 2;
        }
        goto LAB_002852e4;
      }
    }
  }
  else {
    if (*(uint *)(param_3 + 1) <= uVar4) {
      iVar5 = 0;
      if (*(uint *)(param_4 + 1) <= *(uint *)(param_3 + 1)) {
        return 0;
      }
      goto LAB_002852e4;
    }
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_3[1];
    *param_2 = *param_3;
    param_2[1] = uVar3;
    *param_3 = uVar1;
    param_3[1] = uVar2;
    if (*(uint *)(param_1 + 1) < *(uint *)(param_2 + 1)) {
      uVar1 = *param_1;
      uVar2 = param_1[1];
      uVar3 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar3;
      *param_2 = uVar1;
      param_2[1] = uVar2;
      goto LAB_002852b8;
    }
  }
  iVar5 = 1;
  if (*(uint *)(param_4 + 1) <= *(uint *)(param_3 + 1)) {
    return 1;
  }
LAB_002852e4:
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_4[1];
  *param_3 = *param_4;
  param_3[1] = uVar3;
  *param_4 = uVar1;
  param_4[1] = uVar2;
  if (*(uint *)(param_3 + 1) <= *(uint *)(param_2 + 1)) {
    return iVar5 + 1;
  }
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = uVar3;
  *param_3 = uVar1;
  param_3[1] = uVar2;
  if (*(uint *)(param_1 + 1) < *(uint *)(param_2 + 1)) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar3;
    *param_2 = uVar1;
    param_2[1] = uVar2;
    return iVar5 + 3;
  }
  return iVar5 + 2;
}


