/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01090c00; name: FUN_01090c00
 */


undefined4 FUN_01090c00(long param_1)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  
  lVar7 = *(long *)(param_1 + 0x98);
  bVar1 = *(char *)(lVar7 + 0x19) == '\0';
  if (bVar1) {
    FUN_02c66480();
    lVar7 = *(long *)(param_1 + 0x98);
  }
  iVar3 = FUN_02c6849c(lVar7);
  uVar4 = FUN_02c6cf3c(*(undefined8 *)(param_1 + 0x98));
  uVar2 = *(ushort *)(*(long *)(*(long *)(param_1 + 0x98) + 0x10) + 4);
  uVar8 = FUN_02c6d278(*(long *)(param_1 + 0x98));
  uVar5 = FUN_02c6f5e8(*(undefined8 *)(param_1 + 0x98));
  if ((bVar1) && (*(char *)(*(long *)(param_1 + 0x98) + 0x19) != '\0')) {
    FUN_02c66640();
  }
  if ((uVar4 & 1) == 0 && (uVar2 & 4) == 0) {
    if (((uVar8 & 1) != 0) || ((uVar6 = 2, iVar3 != 0x1d && (iVar3 != 0x20)))) {
      uVar6 = uVar5;
    }
  }
  else {
    uVar6 = 2;
  }
  return uVar6;
}


