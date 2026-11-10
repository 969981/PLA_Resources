/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d51cc8; name: FUN_00d51cc8
 */


void FUN_00d51cc8(long param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  uVar3 = *(uint *)(param_1 + 0x6d8) ^ 1;
  FUN_00d51790(param_1,uVar3,0xffffffff,0xffffffff);
  uVar1 = 0;
  if (uVar3 != 2) {
    uVar1 = uVar3;
  }
  lVar8 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)(int)uVar1 * 0x28);
  lVar8 = *(long *)(lVar8 + 0x8b0);
  iVar4 = *(int *)(lVar8 + 0x10);
  iVar5 = *(int *)(lVar8 + 0x14);
  piVar2 = (int *)(lVar8 + 0x20);
  if (*(int *)(lVar8 + 0x28) != 0) {
    piVar2 = (int *)(lVar8 + 0x24);
  }
  iVar6 = *piVar2;
  lVar9 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)(int)uVar1 * 0x28);
  lVar8 = **(long **)(lVar9 + 0x838);
  lVar9 = (*(long **)(lVar9 + 0x838))[1];
  if ((lVar8 != lVar9) &&
     (iVar5 = iVar5 + iVar6 * iVar4,
     *(char *)(lVar8 + 0x20) != '\0' || *(int *)(lVar8 + 0x24) != iVar5)) {
    lVar7 = lVar8 + 0x30;
    do {
      lVar10 = lVar7;
      lVar8 = lVar9;
      if (lVar9 == lVar10) break;
      lVar7 = lVar10 + 0x30;
    } while ((*(char *)(lVar10 + 0x20) != '\0') ||
            (lVar8 = lVar10, *(int *)(lVar10 + 0x24) != iVar5));
  }
  if ((lVar8 != 0) &&
     (((lVar9 != lVar8 && (*(int *)(lVar8 + 0x28) != -1)) &&
      (lVar8 = FUN_00d57364(param_1,uVar3), lVar8 != 0)))) {
    *(undefined1 *)(lVar8 + 0x2ab) = 1;
  }
  FUN_00d51790(param_1,*(undefined4 *)(param_1 + 0x6d8),param_2,param_3);
  return;
}


