/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0128b960; name: FUN_0128b960
 */


void FUN_0128b960(long param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = FUN_0128ac64();
  iVar2 = *(int *)(param_1 + 0x6d8);
  iVar3 = 0;
  if (iVar2 != 2) {
    iVar3 = iVar2;
  }
  lVar6 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)iVar3 * 0x28);
  lVar6 = *(long *)(lVar6 + 0x8b0);
  piVar1 = (int *)(lVar6 + 0x20);
  if (*(int *)(lVar6 + 0x28) != 0) {
    piVar1 = (int *)(lVar6 + 0x24);
  }
  bVar4 = *(int *)(*(long *)(*(long *)(*(long *)(param_1 + (long)iVar2 * 0x60 + 0x638) + 0xa8) +
                            (ulong)(uint)(*(int *)(lVar6 + 0x14) + *piVar1 * *(int *)(lVar6 + 0x10))
                            * 0x10) + 8) == 1;
  if ((uVar5 & 1) == 0) {
    if (bVar4) {
      FUN_0128f488(param_1);
      return;
    }
    FUN_0128f444();
    return;
  }
  if (bVar4) {
    FUN_0128f718(param_1);
    return;
  }
  iVar3 = *(int *)(param_1 + 0x6d8);
  iVar2 = iVar3;
  if (iVar3 == 2) {
    iVar2 = 0;
  }
  lVar6 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)iVar2 * 0x28);
  lVar6 = *(long *)(lVar6 + 0x8b0);
  piVar1 = (int *)(lVar6 + 0x20);
  if (*(int *)(lVar6 + 0x28) != 0) {
    piVar1 = (int *)(lVar6 + 0x24);
  }
  uVar5 = FUN_0128f528(param_1,iVar3,*(int *)(lVar6 + 0x14) + *piVar1 * *(int *)(lVar6 + 0x10));
  if ((uVar5 & 1) == 0) {
    FUN_0128f6d4(param_1);
    return;
  }
  FUN_0128f690(param_1);
  return;
}


