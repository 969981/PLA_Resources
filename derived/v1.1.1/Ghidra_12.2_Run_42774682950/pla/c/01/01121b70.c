/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01121b70; name: FUN_01121b70
 */


void FUN_01121b70(long param_1,long param_2)

{
  int *__dest;
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_1d0 [400];
  
  iVar3 = *(int *)(param_2 + 8);
  __dest = (int *)(param_1 + 0x7d78);
  piVar4 = __dest;
  do {
    if ((*piVar4 == iVar3) && ((char)piVar4[1] == *(char *)(param_2 + 0x11))) {
LAB_01121bf0:
      if (piVar4 != (int *)(param_1 + 0x7f08)) {
        return;
      }
      break;
    }
    if ((piVar4[2] == iVar3) && ((char)piVar4[3] == *(char *)(param_2 + 0x11))) {
      piVar4 = piVar4 + 2;
      goto LAB_01121bf0;
    }
    piVar4 = piVar4 + 4;
  } while (piVar4 != (int *)(param_1 + 0x7f08));
  FUN_01121f50(__dest,iVar3);
  uVar2 = 2;
  if (*__dest != iVar3) {
    uVar2 = 1;
  }
  uVar1 = (ulong)(*__dest == iVar3);
  if (*(int *)(param_1 + 0x7d80) == iVar3) {
    uVar1 = uVar2;
  }
  if (*(int *)(param_1 + 0x7d88) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7d90) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7d98) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7da0) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7da8) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7db0) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7db8) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7dc0) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7dc8) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7dd0) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7dd8) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7de0) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7de8) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7df0) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7df8) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e00) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e08) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e10) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e18) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e20) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e28) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e30) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e38) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e40) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e48) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e50) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e58) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e60) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e68) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e70) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e78) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e80) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e88) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e90) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e98) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7ea0) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7ea8) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7eb0) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7eb8) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7ec0) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7ec8) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7ed0) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7ed8) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7ee0) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7ee8) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7ef0) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7ef8) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7f00) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(byte *)(param_2 + 0x10) <= uVar1) {
    memset(auStack_1d0,0,400);
    puVar5 = (undefined1 *)(param_1 + 0x7f04);
    lVar6 = -400;
    do {
      if (*(int *)(puVar5 + -4) != iVar3) {
        FUN_01121f50(auStack_1d0,*(int *)(puVar5 + -4),*puVar5);
      }
      puVar5 = puVar5 + -8;
      lVar6 = lVar6 + 8;
    } while (lVar6 != 0);
    memcpy(__dest,auStack_1d0,400);
  }
  return;
}


