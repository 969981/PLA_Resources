/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03157460; name: FUN_03157460
 */


undefined4 FUN_03157460(long param_1,uint *param_2,uint *param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  
  uVar1 = *param_2;
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + (ulong)(uVar1 >> 0x16) * 0xf0) + 0x20);
  uVar4 = (ulong)uVar1 & 0x3fffff;
  if ((int)uVar4 < *(int *)(lVar5 + 0x30)) {
    if (*(int *)(lVar5 + 0x78) != 0) {
      uVar2 = *(uint *)(*(long *)(lVar5 + 0x70) + uVar4 * 4);
      if (uVar2 == 0xffffffff) {
        lVar5 = *(long *)(lVar5 + 0x28) + uVar4 * 0x14;
        goto LAB_031574cc;
      }
      uVar4 = (ulong)uVar2;
    }
    lVar5 = *(long *)(lVar5 + 0xc0) + (long)(int)uVar4 * 0x14;
  }
  else {
    lVar5 = *(long *)(lVar5 + 0xe0) + (long)((int)uVar4 - *(int *)(lVar5 + 0x30)) * 0x14;
  }
LAB_031574cc:
  if ((*(int *)(lVar5 + 8) == -1) || ((*(byte *)(lVar5 + 0x10) >> 5 & 1) != 0)) {
    *param_2 = 0xffffffff;
    *param_3 = 0xffffffff;
    uVar3 = 1;
    if ((*(byte *)(lVar5 + 0x10) & 0x40) != 0) {
      uVar3 = 2;
    }
    return uVar3;
  }
  uVar4 = FUN_03165728(param_4,(ulong)uVar1,6);
  if ((uVar4 & 1) == 0) {
    *param_2 = 0xffffffff;
    *param_3 = 0xffffffff;
    return 1;
  }
  uVar4 = (ulong)*param_2 & 0x3fffff;
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + (ulong)(*param_2 >> 0x16) * 0xf0) + 0x20);
  if ((int)uVar4 < *(int *)(lVar5 + 0x30)) {
    if (*(int *)(lVar5 + 0x78) != 0) {
      uVar1 = *(uint *)(*(long *)(lVar5 + 0x70) + uVar4 * 4);
      if (uVar1 == 0xffffffff) {
        lVar6 = *(long *)(lVar5 + 0x28) + uVar4 * 0x14;
        goto LAB_03157540;
      }
      uVar4 = (ulong)uVar1;
    }
    lVar6 = *(long *)(lVar5 + 0xc0) + (long)(int)uVar4 * 0x14;
  }
  else {
    lVar6 = *(long *)(lVar5 + 0xe0) + (long)((int)uVar4 - *(int *)(lVar5 + 0x30)) * 0x14;
  }
LAB_03157540:
  uVar2 = *(uint *)(lVar6 + 0xc);
  uVar1 = 0xffffffff;
  if (uVar2 != 0xffffffff) {
    uVar1 = uVar2 & 0x3fffff | *(int *)(lVar5 + 0x17c) << 0x16;
  }
  if ((*(byte *)(lVar6 + 0x10) & 0x40) == 0) {
    uVar2 = uVar1;
  }
  *param_3 = uVar2;
  uVar4 = (ulong)*param_2 & 0x3fffff;
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + (ulong)(*param_2 >> 0x16) * 0xf0) + 0x20);
  if ((int)uVar4 < *(int *)(lVar5 + 0x30)) {
    if (*(int *)(lVar5 + 0x78) != 0) {
      uVar1 = *(uint *)(*(long *)(lVar5 + 0x70) + uVar4 * 4);
      if (uVar1 == 0xffffffff) {
        lVar6 = *(long *)(lVar5 + 0x28) + uVar4 * 0x14;
        goto LAB_031575bc;
      }
      uVar4 = (ulong)uVar1;
    }
    lVar6 = *(long *)(lVar5 + 0xc0) + (long)(int)uVar4 * 0x14;
  }
  else {
    lVar6 = *(long *)(lVar5 + 0xe0) + (long)((int)uVar4 - *(int *)(lVar5 + 0x30)) * 0x14;
  }
LAB_031575bc:
  uVar2 = *(uint *)(lVar6 + 8);
  uVar1 = 0xffffffff;
  if (uVar2 != 0xffffffff) {
    uVar1 = uVar2 & 0x3fffff | *(int *)(lVar5 + 0x17c) << 0x16;
  }
  if ((*(byte *)(lVar6 + 0x10) & 0x40) == 0) {
    uVar2 = uVar1;
  }
  *param_2 = uVar2;
  uVar4 = (ulong)*param_3 & 0x3fffff;
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + (ulong)(*param_3 >> 0x16) * 0xf0) + 0x20);
  if ((int)uVar4 < *(int *)(lVar5 + 0x20)) {
    if (*(int *)(lVar5 + 0x98) != 0) {
      uVar1 = *(uint *)(*(long *)(lVar5 + 0x90) + uVar4 * 4);
      if (uVar1 == 0xffffffff) {
        puVar7 = (uint *)(*(long *)(lVar5 + 0x18) + uVar4 * 0x10);
        goto LAB_03157638;
      }
      uVar4 = (ulong)uVar1;
    }
    puVar7 = (uint *)(*(long *)(lVar5 + 0xb0) + (long)(int)uVar4 * 0x10);
  }
  else {
    puVar7 = (uint *)(*(long *)(lVar5 + 0xd0) + (long)((int)uVar4 - *(int *)(lVar5 + 0x20)) * 0x10);
  }
LAB_03157638:
  uVar1 = *puVar7;
  if ((uVar2 & 0x3fffff) != ((int)(short)puVar7[2] + uVar1) - 1) {
    uVar1 = (uVar2 & 0x3fffff) + 1;
  }
  *param_2 = uVar1 | uVar2 & 0xffc00000;
  return 0;
}


