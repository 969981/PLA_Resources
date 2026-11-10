/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002a91a4; name: FUN_002a91a4
 */


long FUN_002a91a4(long param_1)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  
  pbVar3 = *(byte **)(param_1 + 0x10);
  bVar1 = *pbVar3;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 != 0) {
LAB_002a91b8:
      uVar4 = (ulong)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        uVar4 = *(ulong *)(pbVar3 + 8);
      }
      lVar2 = uVar4 + (((uint)LZCOUNT((uint)uVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
      pbVar3 = *(byte **)(param_1 + 0x18);
      bVar1 = *pbVar3;
      goto joined_r0x002a9214;
    }
  }
  else if (*(long *)(pbVar3 + 8) != 0) goto LAB_002a91b8;
  lVar2 = 0;
  pbVar3 = *(byte **)(param_1 + 0x18);
  bVar1 = *pbVar3;
joined_r0x002a9214:
  if ((bVar1 & 1) == 0) {
    uVar4 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar4 = *(ulong *)(pbVar3 + 8);
  }
  if (uVar4 != 0) {
    uVar4 = (ulong)(bVar1 >> 1);
    if ((bVar1 & 1) != 0) {
      uVar4 = *(ulong *)(pbVar3 + 8);
    }
    lVar2 = lVar2 + uVar4 + (ulong)(((uint)LZCOUNT((uint)uVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x20) = (int)lVar2;
    return lVar2;
  }
  uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  bVar1 = *(byte *)(uVar4 + 8);
  if ((bVar1 & 1) == 0) {
    lVar2 = (ulong)(bVar1 >> 1) + lVar2;
    *(int *)(param_1 + 0x20) = (int)lVar2;
    return lVar2;
  }
  lVar2 = *(long *)(uVar4 + 0x10) + lVar2;
  *(int *)(param_1 + 0x20) = (int)lVar2;
  return lVar2;
}


