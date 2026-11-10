/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a720a0; name: FUN_02a720a0
 */


int FUN_02a720a0(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_2;
  lVar3 = *param_1;
  lVar2 = *param_3;
  iVar1 = *(int *)(lVar4 + 0x378);
  if (iVar1 < *(int *)(lVar3 + 0x378)) {
    if (*(int *)(lVar2 + 0x378) < iVar1) {
      *param_1 = lVar2;
      iVar1 = 1;
    }
    else {
      *param_1 = lVar4;
      *param_2 = lVar3;
      lVar2 = *param_3;
      if (*(int *)(lVar3 + 0x378) <= *(int *)(lVar2 + 0x378)) {
        iVar1 = 1;
        goto LAB_02a72158;
      }
      iVar1 = 2;
      *param_2 = lVar2;
    }
    *param_3 = lVar3;
    lVar2 = lVar3;
  }
  else if (*(int *)(lVar2 + 0x378) < iVar1) {
    *param_2 = lVar2;
    *param_3 = lVar4;
    lVar2 = *param_1;
    if (*(int *)(*param_2 + 0x378) < *(int *)(lVar2 + 0x378)) {
      *param_1 = *param_2;
      iVar1 = 2;
      *param_2 = lVar2;
      lVar2 = *param_3;
    }
    else {
      iVar1 = 1;
      lVar2 = lVar4;
    }
  }
  else {
    iVar1 = 0;
  }
LAB_02a72158:
  if (*(int *)(*param_4 + 0x378) < *(int *)(lVar2 + 0x378)) {
    *param_3 = *param_4;
    *param_4 = lVar2;
    lVar2 = *param_2;
    if (*(int *)(*param_3 + 0x378) < *(int *)(lVar2 + 0x378)) {
      *param_2 = *param_3;
      *param_3 = lVar2;
      lVar2 = *param_1;
      if (*(int *)(*param_2 + 0x378) < *(int *)(lVar2 + 0x378)) {
        iVar1 = iVar1 + 3;
        *param_1 = *param_2;
        *param_2 = lVar2;
      }
      else {
        iVar1 = iVar1 + 2;
      }
    }
    else {
      iVar1 = iVar1 + 1;
    }
  }
  lVar2 = *param_4;
  if (*(int *)(*param_5 + 0x378) < *(int *)(lVar2 + 0x378)) {
    *param_4 = *param_5;
    *param_5 = lVar2;
    lVar2 = *param_3;
    if (*(int *)(lVar2 + 0x378) <= *(int *)(*param_4 + 0x378)) {
      return iVar1 + 1;
    }
    *param_3 = *param_4;
    *param_4 = lVar2;
    lVar2 = *param_2;
    if (*(int *)(lVar2 + 0x378) <= *(int *)(*param_3 + 0x378)) {
      return iVar1 + 2;
    }
    *param_2 = *param_3;
    *param_3 = lVar2;
    lVar2 = *param_1;
    if (*(int *)(lVar2 + 0x378) <= *(int *)(*param_2 + 0x378)) {
      return iVar1 + 3;
    }
    iVar1 = iVar1 + 4;
    *param_1 = *param_2;
    *param_2 = lVar2;
  }
  return iVar1;
}


