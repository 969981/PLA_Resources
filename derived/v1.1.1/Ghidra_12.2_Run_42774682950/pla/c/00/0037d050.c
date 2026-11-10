/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0037d050; name: FUN_0037d050
 */


ulong FUN_0037d050(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = FUN_0037ceb0();
  lVar3 = *param_5;
  iVar1 = (int)uVar2;
  lVar4 = *param_4;
  if (*(char *)(lVar3 + 0x43) == '\0') {
    if ((*(char *)(lVar4 + 0x43) == '\0') &&
       ((int)((ulong)(lVar4 - *(long *)(*(long *)(lVar4 + 0x50) + 0x28)) >> 3) * 0x286bca1b <=
        (int)((ulong)(lVar3 - *(long *)(*(long *)(lVar3 + 0x50) + 0x28)) >> 3) * 0x286bca1b)) {
      return uVar2;
    }
  }
  else {
    if (*(char *)(lVar4 + 0x43) == '\0') {
      return uVar2;
    }
    if (*(int *)(lVar4 + 0x44) <= *(int *)(lVar3 + 0x44)) {
      return uVar2;
    }
  }
  *param_4 = lVar3;
  uVar2 = (ulong)(iVar1 + 1);
  *param_5 = lVar4;
  lVar3 = *param_4;
  lVar4 = *param_3;
  if (*(char *)(lVar3 + 0x43) == '\0') {
    if ((*(char *)(lVar4 + 0x43) == '\0') &&
       ((int)((ulong)(lVar4 - *(long *)(*(long *)(lVar4 + 0x50) + 0x28)) >> 3) * 0x286bca1b <=
        (int)((ulong)(lVar3 - *(long *)(*(long *)(lVar3 + 0x50) + 0x28)) >> 3) * 0x286bca1b)) {
      return uVar2;
    }
  }
  else {
    if (*(char *)(lVar4 + 0x43) == '\0') {
      return uVar2;
    }
    if (*(int *)(lVar4 + 0x44) <= *(int *)(lVar3 + 0x44)) {
      return uVar2;
    }
  }
  *param_3 = lVar3;
  uVar2 = (ulong)(iVar1 + 2);
  *param_4 = lVar4;
  lVar3 = *param_3;
  lVar4 = *param_2;
  if (*(char *)(lVar3 + 0x43) == '\0') {
    if ((*(char *)(lVar4 + 0x43) == '\0') &&
       ((int)((ulong)(lVar4 - *(long *)(*(long *)(lVar4 + 0x50) + 0x28)) >> 3) * 0x286bca1b <=
        (int)((ulong)(lVar3 - *(long *)(*(long *)(lVar3 + 0x50) + 0x28)) >> 3) * 0x286bca1b)) {
      return uVar2;
    }
  }
  else {
    if (*(char *)(lVar4 + 0x43) == '\0') {
      return uVar2;
    }
    if (*(int *)(lVar4 + 0x44) <= *(int *)(lVar3 + 0x44)) {
      return uVar2;
    }
  }
  *param_2 = lVar3;
  *param_3 = lVar4;
  lVar4 = *param_2;
  lVar3 = *param_1;
  if (*(char *)(lVar4 + 0x43) == '\0') {
    if ((*(char *)(lVar3 + 0x43) != '\0') ||
       ((int)((ulong)(lVar4 - *(long *)(*(long *)(lVar4 + 0x50) + 0x28)) >> 3) * 0x286bca1b <
        (int)((ulong)(lVar3 - *(long *)(*(long *)(lVar3 + 0x50) + 0x28)) >> 3) * 0x286bca1b))
    goto LAB_0037d248;
  }
  else if ((*(char *)(lVar3 + 0x43) != '\0') && (*(int *)(lVar4 + 0x44) < *(int *)(lVar3 + 0x44))) {
LAB_0037d248:
    *param_1 = lVar4;
    *param_2 = lVar3;
    return (ulong)(iVar1 + 4);
  }
  return (ulong)(iVar1 + 3);
}


