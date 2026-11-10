/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d56ffc; name: FUN_00d56ffc
 */


void FUN_00d56ffc(long param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  
  if (*(char *)(param_1 + 0x1621) == '\0') {
    return;
  }
  iVar3 = 0;
  if (*(int *)(param_1 + 0x6d8) != 2) {
    iVar3 = *(int *)(param_1 + 0x6d8);
  }
  lVar7 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)iVar3 * 0x28);
  lVar7 = *(long *)(lVar7 + 0x8b0);
  piVar1 = (int *)(lVar7 + 0x20);
  if (*(int *)(lVar7 + 0x28) != 0) {
    piVar1 = (int *)(lVar7 + 0x24);
  }
  iVar3 = *(int *)(lVar7 + 0x14) + *piVar1 * *(int *)(lVar7 + 0x10);
  lVar7 = param_1 + (long)*(int *)(param_1 + 0x6d8) * 0x60;
  iVar2 = *(int *)(lVar7 + 0x640);
  iVar5 = 0;
  if (iVar2 != 0) {
    iVar5 = (int)(uint)*(ushort *)(param_1 + 0x6ec) / iVar2;
  }
  iVar6 = 0;
  if (iVar2 != 0) {
    iVar6 = iVar3 / iVar2;
  }
  iVar4 = (uint)*(ushort *)(param_1 + 0x6ec) - iVar5 * iVar2;
  iVar3 = iVar3 - iVar6 * iVar2;
  iVar2 = iVar5 - iVar6;
  if (iVar2 == 0 || iVar5 < iVar6) {
    iVar6 = iVar5;
  }
  iVar5 = iVar4 - iVar3;
  if (iVar5 == 0 || iVar4 < iVar3) {
    iVar3 = iVar4;
  }
  iVar4 = -iVar5;
  if (-1 < iVar5) {
    iVar4 = iVar5;
  }
  *(char *)(param_1 + 0x6ee) = (char)iVar4 + '\x01';
  iVar5 = -iVar2;
  if (-1 < iVar2) {
    iVar5 = iVar2;
  }
  *(char *)(param_1 + 0x6ef) = (char)iVar5 + '\x01';
  FUN_00d5d294(param_1);
  FUN_00d5d00c(param_1,iVar3 + *(int *)(lVar7 + 0x640) * iVar6);
  return;
}


