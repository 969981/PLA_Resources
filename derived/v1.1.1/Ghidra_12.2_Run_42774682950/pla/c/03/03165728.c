/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03165728; name: FUN_03165728
 */


uint FUN_03165728(long param_1,ulong param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 in_x7;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  
  if ((*(long *)(param_1 + 0x20) == 0) && (*(long *)(param_1 + 0x28) == 0)) {
    return 1;
  }
  uVar2 = (uint)param_2 & 0x3fffff;
  lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 0x38);
  lVar5 = *(long *)(*(long *)(lVar6 + (param_2 >> 0x16 & 0x3ff) * 0xf0) + 0x20);
  iVar1 = *(int *)(lVar5 + 0x60);
  uVar8 = uVar2 - *(int *)(lVar5 + 0x30);
  if ((int)uVar2 < *(int *)(lVar5 + 0x30)) {
    if (*(int *)(lVar5 + 0x78) == 0) {
      uVar8 = uVar2;
LAB_03165898:
      lVar3 = *(long *)(lVar5 + 0x130) + (long)(int)(uVar8 * iVar1) * 4;
      lVar5 = *(long *)(lVar5 + 0xc0);
      goto LAB_031657d4;
    }
    uVar8 = *(uint *)(*(long *)(lVar5 + 0x70) + (ulong)uVar2 * 4);
    if (uVar8 != 0xffffffff) goto LAB_03165898;
    lVar3 = *(long *)(lVar5 + 0x58) + (long)(int)(iVar1 * uVar2) * 4;
    lVar5 = *(long *)(lVar5 + 0x28) + (ulong)uVar2 * 0x14;
    lVar4 = lVar3 + (long)iVar1 * 4;
  }
  else {
    lVar3 = *(long *)(lVar5 + 0x150) + (long)(int)(iVar1 * uVar8) * 4;
    lVar5 = *(long *)(lVar5 + 0xe0);
LAB_031657d4:
    lVar4 = lVar3 + (long)iVar1 * 4;
    lVar5 = lVar5 + (long)(int)uVar8 * 0x14;
  }
  uVar8 = *(uint *)(lVar5 + 0xc);
  uVar2 = 0xffffffff;
  if (uVar8 != 0xffffffff) {
    uVar2 = uVar8 & 0x3fffff | (uint)param_2 & 0xffc00000;
  }
  if ((*(byte *)(lVar5 + 0x10) & 0x40) == 0) {
    uVar8 = uVar2;
  }
  uVar2 = uVar8 & 0x3fffff;
  lVar6 = *(long *)(*(long *)(lVar6 + (ulong)(uVar8 >> 0x16) * 0xf0) + 0x20);
  iVar1 = *(int *)(lVar6 + 0x50);
  uVar9 = uVar2 - *(int *)(lVar6 + 0x20);
  if ((int)uVar2 < *(int *)(lVar6 + 0x20)) {
    if (*(int *)(lVar6 + 0x98) == 0) {
      uVar9 = uVar2;
    }
    else {
      uVar9 = *(uint *)(*(long *)(lVar6 + 0x90) + (ulong)uVar2 * 4);
      if (uVar9 == 0xffffffff) {
        lVar7 = *(long *)(lVar6 + 0x48) + (long)(int)(iVar1 * uVar2) * 4;
        lVar6 = *(long *)(lVar6 + 0x18) + (ulong)uVar2 * 0x10;
        goto LAB_03165878;
      }
    }
    lVar7 = *(long *)(lVar6 + 0x120) + (long)(int)(uVar9 * iVar1) * 4;
    lVar6 = *(long *)(lVar6 + 0xb0);
  }
  else {
    lVar7 = *(long *)(lVar6 + 0x140) + (long)(int)(iVar1 * uVar9) * 4;
    lVar6 = *(long *)(lVar6 + 0xd0);
  }
  lVar6 = lVar6 + (long)(int)uVar9 * 0x10;
LAB_03165878:
  uVar2 = FUN_031658c4(param_1,param_2 & 0xffffffff,lVar5,lVar3,lVar4,uVar8,lVar6,in_x7,lVar7,
                       lVar7 + (long)iVar1 * 4,param_3);
  return uVar2 & 1;
}


