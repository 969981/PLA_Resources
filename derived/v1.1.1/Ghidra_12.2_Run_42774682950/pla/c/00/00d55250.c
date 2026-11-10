/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d55250; name: FUN_00d55250
 */


undefined8 FUN_00d55250(long param_1)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(char *)(param_1 + 0x6f8) == '\0') {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x6d8) != 2) {
      iVar1 = *(int *)(param_1 + 0x6d8);
    }
    lVar3 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)iVar1 * 0x28);
    lVar3 = *(long *)(lVar3 + 0x8b0);
    piVar2 = (int *)(lVar3 + 0x20);
    if (*(int *)(lVar3 + 0x28) != 0) {
      piVar2 = (int *)(lVar3 + 0x24);
    }
    if (*(int *)(*(long *)(*(long *)(*(long *)(param_1 + (long)*(int *)(param_1 + 0x6d8) * 0x60 +
                                              0x638) + 0xa8) +
                          (ulong)(uint)(*(int *)(lVar3 + 0x14) + *piVar2 * *(int *)(lVar3 + 0x10)) *
                          0x10) + 8) != 1) {
      FUN_00d56700(param_1,1);
      return 1;
    }
  }
  else {
    uVar4 = FUN_00d56844(param_1);
    if ((uVar4 & 1) != 0) {
      FUN_00d55928(param_1,1,1);
      return 1;
    }
  }
  lVar3 = *(long *)(param_1 + 0x440);
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x62) == '\0')) {
    *(undefined1 *)(lVar3 + 0x60) = 1;
    if (*(char *)(lVar3 + 0x61) != '\0') {
      FUN_0283351c(*(undefined8 *)(lVar3 + 0x58),0);
    }
    FUN_02831808(*(undefined8 *)(lVar3 + 0x58),0);
  }
  return 0;
}


