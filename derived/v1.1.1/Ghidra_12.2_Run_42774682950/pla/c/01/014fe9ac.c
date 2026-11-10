/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014fe9ac; name: FUN_014fe9ac
 */


void FUN_014fe9ac(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  iVar2 = *(int *)(param_1 + 0x640);
  iVar1 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),0);
  if (iVar2 != iVar1) {
    uVar5 = 1;
    iVar2 = *(int *)(param_1 + 0x640);
    iVar1 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),1);
    if (iVar2 != iVar1) {
      uVar5 = 2;
      iVar2 = *(int *)(param_1 + 0x640);
      iVar1 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),2);
      if (iVar2 != iVar1) {
        uVar5 = 3;
        iVar2 = *(int *)(param_1 + 0x640);
        iVar1 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),3);
        if (iVar2 != iVar1) goto LAB_014fea4c;
      }
    }
    FUN_02c614dc(*(undefined8 *)(param_1 + 0x5b8),0,uVar5);
  }
LAB_014fea4c:
  iVar2 = *(int *)(param_1 + 0x644);
  iVar1 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),0);
  if (iVar2 == iVar1) {
    uVar5 = 0;
LAB_014feacc:
    FUN_02c614dc(*(undefined8 *)(param_1 + 0x5b8),1,uVar5);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x644);
    iVar1 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),1);
    if (iVar2 != iVar1) {
      uVar5 = 2;
      iVar2 = *(int *)(param_1 + 0x644);
      iVar1 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),2);
      if (iVar2 != iVar1) {
        uVar5 = 3;
        iVar2 = *(int *)(param_1 + 0x644);
        iVar1 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),3);
        if (iVar2 != iVar1) goto LAB_014feadc;
      }
      goto LAB_014feacc;
    }
  }
LAB_014feadc:
  iVar2 = *(int *)(param_1 + 0x648);
  iVar1 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),0);
  if (iVar2 == iVar1) {
    uVar5 = 0;
LAB_014feb5c:
    FUN_02c614dc(*(undefined8 *)(param_1 + 0x5b8),2,uVar5);
  }
  else {
    uVar5 = 1;
    iVar2 = *(int *)(param_1 + 0x648);
    iVar1 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),1);
    if (iVar2 == iVar1) goto LAB_014feb5c;
    iVar2 = *(int *)(param_1 + 0x648);
    iVar1 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),2);
    if (iVar2 != iVar1) {
      uVar5 = 3;
      iVar2 = *(int *)(param_1 + 0x648);
      iVar1 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),3);
      if (iVar2 == iVar1) goto LAB_014feb5c;
    }
  }
  iVar2 = *(int *)(param_1 + 0x64c);
  iVar1 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),0);
  if (iVar2 == iVar1) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
    iVar2 = *(int *)(param_1 + 0x64c);
    iVar1 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),1);
    if (iVar2 != iVar1) {
      uVar5 = 2;
      iVar2 = *(int *)(param_1 + 0x64c);
      iVar1 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),2);
      if (iVar2 != iVar1) {
        FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),3);
        goto LAB_014febf0;
      }
    }
  }
  FUN_02c614dc(*(undefined8 *)(param_1 + 0x5b8),3,uVar5);
LAB_014febf0:
  if (*(int *)(param_1 + 0x640) == 0) {
    FUN_02c60a58(*(long *)(param_1 + 0x5b8),0);
  }
  else {
    iVar2 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),0);
    if (*(int *)(param_1 + 0x640) != iVar2) {
      uVar3 = FUN_02c601d4(*(undefined8 *)(param_1 + 0x5b8),0);
      FUN_02c60fb0(*(undefined8 *)(param_1 + 0x5b8),0,*(undefined4 *)(param_1 + 0x640));
      uVar4 = FUN_02c602a0(*(undefined8 *)(param_1 + 0x5b8),0);
      if ((iVar2 == 0) || (uVar4 < uVar3)) {
        FUN_02c601f0(*(undefined8 *)(param_1 + 0x5b8),0);
      }
      else {
        FUN_02c601f0(*(undefined8 *)(param_1 + 0x5b8),0,uVar3);
      }
    }
  }
  if (*(int *)(param_1 + 0x644) == 0) {
    FUN_02c60a58(*(long *)(param_1 + 0x5b8),1);
  }
  else {
    iVar2 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),1);
    if (*(int *)(param_1 + 0x644) != iVar2) {
      uVar3 = FUN_02c601d4(*(undefined8 *)(param_1 + 0x5b8),1);
      FUN_02c60fb0(*(undefined8 *)(param_1 + 0x5b8),1,*(undefined4 *)(param_1 + 0x644));
      uVar4 = FUN_02c602a0(*(undefined8 *)(param_1 + 0x5b8),1);
      if ((iVar2 == 0) || (uVar4 < uVar3)) {
        FUN_02c601f0(*(undefined8 *)(param_1 + 0x5b8),1);
      }
      else {
        FUN_02c601f0(*(undefined8 *)(param_1 + 0x5b8),1,uVar3);
      }
    }
  }
  if (*(int *)(param_1 + 0x648) == 0) {
    FUN_02c60a58(*(long *)(param_1 + 0x5b8),2);
  }
  else {
    iVar2 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),2);
    if (*(int *)(param_1 + 0x648) != iVar2) {
      uVar3 = FUN_02c601d4(*(undefined8 *)(param_1 + 0x5b8),2);
      FUN_02c60fb0(*(undefined8 *)(param_1 + 0x5b8),2,*(undefined4 *)(param_1 + 0x648));
      uVar4 = FUN_02c602a0(*(undefined8 *)(param_1 + 0x5b8),2);
      if ((iVar2 == 0) || (uVar4 < uVar3)) {
        FUN_02c601f0(*(undefined8 *)(param_1 + 0x5b8),2);
      }
      else {
        FUN_02c601f0(*(undefined8 *)(param_1 + 0x5b8),2,uVar3);
      }
    }
  }
  if (*(int *)(param_1 + 0x64c) == 0) {
    FUN_02c60a58(*(long *)(param_1 + 0x5b8),3);
  }
  else {
    iVar2 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),3);
    if (*(int *)(param_1 + 0x64c) != iVar2) {
      uVar3 = FUN_02c601d4(*(undefined8 *)(param_1 + 0x5b8),3);
      FUN_02c60fb0(*(undefined8 *)(param_1 + 0x5b8),3,*(undefined4 *)(param_1 + 0x64c));
      uVar4 = FUN_02c602a0(*(undefined8 *)(param_1 + 0x5b8),3);
      if ((iVar2 == 0) || (uVar4 < uVar3)) {
        FUN_02c601f0(*(undefined8 *)(param_1 + 0x5b8),3);
      }
      else {
        FUN_02c601f0(*(undefined8 *)(param_1 + 0x5b8),3,uVar3);
      }
    }
  }
  FUN_02c61688(*(undefined8 *)(param_1 + 0x5b8));
  return;
}


