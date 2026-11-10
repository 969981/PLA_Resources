/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007a1910; name: FUN_007a1910
 */


int FUN_007a1910(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = *param_2;
  if (iVar1 < *param_1) {
    if (*param_3 < iVar1) {
      uVar4 = *(undefined8 *)(param_1 + 2);
      uVar2 = *(undefined8 *)param_1;
      iVar1 = 1;
      uVar3 = *(undefined8 *)param_3;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_1 = uVar3;
      *(undefined8 *)(param_3 + 2) = uVar4;
      *(undefined8 *)param_3 = uVar2;
      if (*param_3 <= *param_4) {
        return 1;
      }
      goto LAB_007a1a18;
    }
    uVar4 = *(undefined8 *)(param_1 + 2);
    uVar2 = *(undefined8 *)param_1;
    uVar3 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar3;
    *(undefined8 *)(param_2 + 2) = uVar4;
    *(undefined8 *)param_2 = uVar2;
    if (*param_2 <= *param_3) {
LAB_007a1a04:
      iVar1 = 1;
      if (*param_3 <= *param_4) {
        return 1;
      }
      goto LAB_007a1a18;
    }
    uVar4 = *(undefined8 *)(param_2 + 2);
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)param_3;
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)param_2 = uVar3;
    *(undefined8 *)(param_3 + 2) = uVar4;
    *(undefined8 *)param_3 = uVar2;
  }
  else {
    if (iVar1 <= *param_3) {
      iVar1 = 0;
      if (*param_3 <= *param_4) {
        return 0;
      }
      goto LAB_007a1a18;
    }
    uVar4 = *(undefined8 *)(param_2 + 2);
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)param_3;
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)param_2 = uVar3;
    *(undefined8 *)(param_3 + 2) = uVar4;
    *(undefined8 *)param_3 = uVar2;
    if (*param_1 <= *param_2) goto LAB_007a1a04;
    uVar4 = *(undefined8 *)(param_1 + 2);
    uVar2 = *(undefined8 *)param_1;
    uVar3 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar3;
    *(undefined8 *)(param_2 + 2) = uVar4;
    *(undefined8 *)param_2 = uVar2;
  }
  iVar1 = 2;
  if (*param_3 <= *param_4) {
    return 2;
  }
LAB_007a1a18:
  uVar4 = *(undefined8 *)(param_3 + 2);
  uVar2 = *(undefined8 *)param_3;
  uVar3 = *(undefined8 *)param_4;
  *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_4 + 2);
  *(undefined8 *)param_3 = uVar3;
  *(undefined8 *)(param_4 + 2) = uVar4;
  *(undefined8 *)param_4 = uVar2;
  if (*param_2 <= *param_3) {
    return iVar1 + 1;
  }
  uVar4 = *(undefined8 *)(param_2 + 2);
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)param_3;
  *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)param_2 = uVar3;
  *(undefined8 *)(param_3 + 2) = uVar4;
  *(undefined8 *)param_3 = uVar2;
  if (*param_2 < *param_1) {
    uVar4 = *(undefined8 *)(param_1 + 2);
    uVar2 = *(undefined8 *)param_1;
    uVar3 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar3;
    *(undefined8 *)(param_2 + 2) = uVar4;
    *(undefined8 *)param_2 = uVar2;
    return iVar1 + 3;
  }
  return iVar1 + 2;
}


