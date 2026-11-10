/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00633264; name: FUN_00633264
 */


long FUN_00633264(long param_1)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  
  pbVar3 = *(byte **)(param_1 + 0x10);
  bVar1 = *pbVar3;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 != 0) goto LAB_00633278;
LAB_006332c8:
    lVar2 = 0;
    pbVar3 = *(byte **)(param_1 + 0x18);
    uVar4 = (ulong)*pbVar3;
    if ((*pbVar3 & 1) != 0) goto LAB_006332d8;
LAB_006332b4:
    uVar5 = uVar4 >> 1;
  }
  else {
    if (*(long *)(pbVar3 + 8) == 0) goto LAB_006332c8;
LAB_00633278:
    uVar4 = (ulong)(bVar1 >> 1);
    if ((bVar1 & 1) != 0) {
      uVar4 = *(ulong *)(pbVar3 + 8);
    }
    lVar2 = uVar4 + (((uint)LZCOUNT((uint)uVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    pbVar3 = *(byte **)(param_1 + 0x18);
    uVar4 = (ulong)*pbVar3;
    if ((*pbVar3 & 1) == 0) goto LAB_006332b4;
LAB_006332d8:
    uVar5 = *(ulong *)(pbVar3 + 8);
  }
  if (uVar5 != 0) {
    uVar5 = uVar4 >> 1;
    if ((uVar4 & 1) != 0) {
      uVar5 = *(ulong *)(pbVar3 + 8);
    }
    lVar2 = lVar2 + uVar5 + (ulong)(((uint)LZCOUNT((uint)uVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  pbVar3 = *(byte **)(param_1 + 0x20);
  bVar1 = *pbVar3;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) goto LAB_00633368;
  }
  else if (*(long *)(pbVar3 + 8) == 0) goto LAB_00633368;
  uVar4 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar4 = *(ulong *)(pbVar3 + 8);
  }
  lVar2 = lVar2 + uVar4 + (ulong)(((uint)LZCOUNT((uint)uVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
LAB_00633368:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x28) = (int)lVar2;
    return lVar2;
  }
  uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  bVar1 = *(byte *)(uVar4 + 8);
  if ((bVar1 & 1) == 0) {
    lVar2 = (ulong)(bVar1 >> 1) + lVar2;
    *(int *)(param_1 + 0x28) = (int)lVar2;
    return lVar2;
  }
  lVar2 = *(long *)(uVar4 + 0x10) + lVar2;
  *(int *)(param_1 + 0x28) = (int)lVar2;
  return lVar2;
}


