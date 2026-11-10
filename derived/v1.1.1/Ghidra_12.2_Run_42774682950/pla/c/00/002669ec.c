/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002669ec; name: FUN_002669ec
 */


void FUN_002669ec(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = *(char *)(*(long *)(param_2 + 0xa0) + 0x752);
  if (cVar2 == '\0') {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + *(int *)(param_2 + 0x2c);
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    cVar2 = *(char *)(*(long *)(param_2 + 0xa0) + 0x752);
  }
  if (cVar2 == '\x01') {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + *(int *)(param_2 + 0x28);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    cVar2 = *(char *)(*(long *)(param_2 + 0xa0) + 0x752);
  }
  if (cVar2 == '\x02') {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + *(int *)(param_2 + 0x28);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  iVar3 = *(int *)(*(long *)(param_2 + 0x238) + 0x330);
  if (iVar3 == 3) {
    iVar3 = FUN_002816b8(param_2);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar3;
  }
  else if (iVar3 == 2) {
    iVar3 = FUN_0027c02c(param_2);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + iVar3;
  }
  else if (iVar3 == 1) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + *(int *)(param_2 + 0xc);
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + *(long *)(param_2 + 0x830);
  lVar1 = *(long *)(param_1 + 0x40) + *(long *)(param_2 + 0x6f8);
  *(long *)(param_1 + 0x40) = lVar1;
  lVar1 = *(long *)(param_2 + 0x7c0) + lVar1;
  *(long *)(param_1 + 0x40) = lVar1;
  lVar1 = lVar1 + *(long *)(param_2 + 0x720);
  *(long *)(param_1 + 0x40) = lVar1;
  lVar1 = lVar1 + *(long *)(param_2 + 0x740);
  *(long *)(param_1 + 0x40) = lVar1;
  lVar1 = lVar1 + *(long *)(param_2 + 0x760);
  *(long *)(param_1 + 0x40) = lVar1;
  lVar1 = lVar1 + *(long *)(param_2 + 0x780);
  *(long *)(param_1 + 0x40) = lVar1;
  *(long *)(param_1 + 0x40) = lVar1 + *(long *)(param_2 + 0x7a0);
  return;
}


