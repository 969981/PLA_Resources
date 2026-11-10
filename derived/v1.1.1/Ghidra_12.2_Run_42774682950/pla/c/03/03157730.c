/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03157730; name: FUN_03157730
 */


undefined4 FUN_03157730(long param_1,uint *param_2,uint *param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  
  uVar2 = *param_2;
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + (ulong)(uVar2 >> 0x16) * 0xf0) + 0x20);
  uVar4 = (ulong)uVar2 & 0x3fffff;
  if ((int)uVar4 < *(int *)(lVar5 + 0x30)) {
    if (*(int *)(lVar5 + 0x78) != 0) {
      uVar1 = *(uint *)(*(long *)(lVar5 + 0x70) + uVar4 * 4);
      if (uVar1 == 0xffffffff) {
        lVar5 = *(long *)(lVar5 + 0x28) + uVar4 * 0x14;
        goto LAB_0315779c;
      }
      uVar4 = (ulong)uVar1;
    }
    lVar5 = *(long *)(lVar5 + 0xc0) + (long)(int)uVar4 * 0x14;
  }
  else {
    lVar5 = *(long *)(lVar5 + 0xe0) + (long)((int)uVar4 - *(int *)(lVar5 + 0x30)) * 0x14;
  }
LAB_0315779c:
  if ((*(int *)(lVar5 + 8) == -1) || ((*(byte *)(lVar5 + 0x10) >> 5 & 1) != 0)) {
    *param_2 = 0xffffffff;
    *param_3 = 0xffffffff;
    uVar3 = 1;
    if ((*(byte *)(lVar5 + 0x10) & 0x40) != 0) {
      uVar3 = 2;
    }
    return uVar3;
  }
  uVar4 = FUN_03165728(param_4,(ulong)uVar2,6);
  if ((uVar4 & 1) == 0) {
    *param_2 = 0xffffffff;
    *param_3 = 0xffffffff;
    return 1;
  }
  uVar4 = (ulong)*param_2 & 0x3fffff;
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + (ulong)(*param_2 >> 0x16) * 0xf0) + 0x20);
  if ((int)uVar4 < *(int *)(lVar5 + 0x30)) {
    if (*(int *)(lVar5 + 0x78) != 0) {
      uVar2 = *(uint *)(*(long *)(lVar5 + 0x70) + uVar4 * 4);
      if (uVar2 == 0xffffffff) {
        lVar6 = *(long *)(lVar5 + 0x28) + uVar4 * 0x14;
        goto LAB_03157810;
      }
      uVar4 = (ulong)uVar2;
    }
    lVar6 = *(long *)(lVar5 + 0xc0) + (long)(int)uVar4 * 0x14;
  }
  else {
    lVar6 = *(long *)(lVar5 + 0xe0) + (long)((int)uVar4 - *(int *)(lVar5 + 0x30)) * 0x14;
  }
LAB_03157810:
  uVar1 = *(uint *)(lVar6 + 0xc);
  uVar2 = 0xffffffff;
  if (uVar1 != 0xffffffff) {
    uVar2 = uVar1 & 0x3fffff | *(int *)(lVar5 + 0x17c) << 0x16;
  }
  if ((*(byte *)(lVar6 + 0x10) & 0x40) == 0) {
    uVar1 = uVar2;
  }
  *param_3 = uVar1;
  uVar4 = (ulong)*param_2 & 0x3fffff;
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + (ulong)(*param_2 >> 0x16) * 0xf0) + 0x20);
  if ((int)uVar4 < *(int *)(lVar5 + 0x30)) {
    if (*(int *)(lVar5 + 0x78) != 0) {
      uVar2 = *(uint *)(*(long *)(lVar5 + 0x70) + uVar4 * 4);
      if (uVar2 == 0xffffffff) {
        lVar6 = *(long *)(lVar5 + 0x28) + uVar4 * 0x14;
        goto LAB_0315788c;
      }
      uVar4 = (ulong)uVar2;
    }
    lVar6 = *(long *)(lVar5 + 0xc0) + (long)(int)uVar4 * 0x14;
  }
  else {
    lVar6 = *(long *)(lVar5 + 0xe0) + (long)((int)uVar4 - *(int *)(lVar5 + 0x30)) * 0x14;
  }
LAB_0315788c:
  uVar1 = *(uint *)(lVar6 + 8);
  uVar2 = 0xffffffff;
  if (uVar1 != 0xffffffff) {
    uVar2 = uVar1 & 0x3fffff | *(int *)(lVar5 + 0x17c) << 0x16;
  }
  if ((*(byte *)(lVar6 + 0x10) & 0x40) == 0) {
    uVar1 = uVar2;
  }
  *param_2 = uVar1;
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + (ulong)(*param_3 >> 0x16) * 0xf0) + 0x20);
  uVar4 = (ulong)*param_3 & 0x3fffff;
  if ((int)uVar4 < *(int *)(lVar5 + 0x20)) {
    if (*(int *)(lVar5 + 0x98) != 0) {
      uVar2 = *(uint *)(*(long *)(lVar5 + 0x90) + uVar4 * 4);
      if (uVar2 == 0xffffffff) {
        puVar7 = (uint *)(*(long *)(lVar5 + 0x18) + uVar4 * 0x10);
        goto LAB_03157904;
      }
      uVar4 = (ulong)uVar2;
    }
    puVar7 = (uint *)(*(long *)(lVar5 + 0xb0) + (long)(int)uVar4 * 0x10);
  }
  else {
    puVar7 = (uint *)(*(long *)(lVar5 + 0xd0) + (long)((int)uVar4 - *(int *)(lVar5 + 0x20)) * 0x10);
  }
LAB_03157904:
  uVar2 = uVar1 & 0x3fffff;
  if (uVar2 == *puVar7) {
    uVar2 = uVar2 + (int)(short)puVar7[2];
  }
  *param_2 = uVar2 - 1 | uVar1 & 0xffc00000;
  return 0;
}


