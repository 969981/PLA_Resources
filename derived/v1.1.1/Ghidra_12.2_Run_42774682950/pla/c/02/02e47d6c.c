/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e47d6c; name: FUN_02e47d6c
 */


void FUN_02e47d6c(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  FUN_02e54be8();
  if (*(long *)(param_1 + 0x78) != 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    FUN_02f59e60(9);
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  if (*(long *)(param_1 + 0x98) == 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x620);
  }
  else {
    *(undefined4 *)(param_1 + 0xa0) = 0;
    FUN_02f59e70(9);
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    puVar2 = *(undefined8 **)(param_1 + 0x620);
  }
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x658);
  }
  else {
    if (*(uint *)(param_1 + 0x628) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 0x628) * 0x50;
      do {
        (**(code **)*puVar2)(puVar2);
        lVar4 = lVar4 + -0x50;
        puVar2 = puVar2 + 10;
      } while (lVar4 != 0);
      puVar2 = *(undefined8 **)(param_1 + 0x620);
    }
    *(undefined4 *)(param_1 + 0x628) = 0;
    FUN_02f59e70(0xb,puVar2);
    *(undefined8 *)(param_1 + 0x620) = 0;
    *(undefined4 *)(param_1 + 0x62c) = 0;
    puVar2 = *(undefined8 **)(param_1 + 0x658);
  }
  if (puVar2 == (undefined8 *)0x0) {
    iVar1 = *(int *)(param_1 + 0x678);
  }
  else {
    if (*(uint *)(param_1 + 0x660) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 0x660) * 0x50;
      do {
        (**(code **)*puVar2)(puVar2);
        lVar4 = lVar4 + -0x50;
        puVar2 = puVar2 + 10;
      } while (lVar4 != 0);
      puVar2 = *(undefined8 **)(param_1 + 0x658);
    }
    *(undefined4 *)(param_1 + 0x660) = 0;
    FUN_02f59e70(0xb,puVar2);
    *(undefined8 *)(param_1 + 0x658) = 0;
    *(undefined4 *)(param_1 + 0x664) = 0;
    iVar1 = *(int *)(param_1 + 0x678);
  }
  if (iVar1 != 0) {
    uVar5 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x670);
      plVar3 = *(long **)(lVar4 + uVar5 * 8);
      if (plVar3 != (long *)0x0) {
        do {
          plVar3 = (long *)*plVar3;
          FUN_02f59e60(0xb);
        } while (plVar3 != (long *)0x0);
        lVar4 = *(long *)(param_1 + 0x670);
      }
      *(undefined8 *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x678));
  }
  *(undefined4 *)(param_1 + 0x680) = 0;
  if (*(long *)(param_1 + 0x670) == 0) {
    iVar1 = *(int *)(param_1 + 0x640);
  }
  else {
    *(undefined4 *)(param_1 + 0x678) = 0;
    FUN_02f59e60(0xb);
    *(undefined8 *)(param_1 + 0x670) = 0;
    *(undefined4 *)(param_1 + 0x67c) = 0;
    iVar1 = *(int *)(param_1 + 0x640);
  }
  if (iVar1 != 0) {
    uVar5 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x638);
      plVar3 = *(long **)(lVar4 + uVar5 * 8);
      if (plVar3 != (long *)0x0) {
        do {
          plVar3 = (long *)*plVar3;
          FUN_02f59e60(0xb);
        } while (plVar3 != (long *)0x0);
        lVar4 = *(long *)(param_1 + 0x638);
      }
      *(undefined8 *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x640));
  }
  *(undefined4 *)(param_1 + 0x648) = 0;
  if (*(long *)(param_1 + 0x638) != 0) {
    *(undefined4 *)(param_1 + 0x640) = 0;
    FUN_02f59e60(0xb);
    *(undefined8 *)(param_1 + 0x638) = 0;
    *(undefined4 *)(param_1 + 0x644) = 0;
  }
  FUN_02e4c274(param_1 + 0x588);
  FUN_02e4c274(param_1 + 0x500);
  FUN_02e4c274(param_1 + 0x478);
  FUN_02e4c274(param_1 + 0x3f0);
  FUN_02e4c274(param_1 + 0x2d8);
  FUN_02e4c274(param_1 + 0x250);
  FUN_02e4c274(param_1 + 0x1c8);
  FUN_02e4c274(param_1 + 0x140);
  if (*(long *)(param_1 + 0x78) != 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    FUN_02f59e60(9);
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  FUN_02e4809c(param_1);
  return;
}


