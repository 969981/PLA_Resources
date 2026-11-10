/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0071b25c; name: FUN_0071b25c
 */


long FUN_0071b25c(long param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  
  pbVar4 = *(byte **)(param_1 + 0x10);
  bVar2 = *pbVar4;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_0071b270:
      uVar5 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar5 = *(ulong *)(pbVar4 + 8);
      }
      lVar3 = uVar5 + (((uint)LZCOUNT((uint)uVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
      pbVar4 = *(byte **)(param_1 + 0x18);
      bVar2 = *pbVar4;
      goto joined_r0x0071b2cc;
    }
  }
  else if (*(long *)(pbVar4 + 8) != 0) goto LAB_0071b270;
  lVar3 = 0;
  pbVar4 = *(byte **)(param_1 + 0x18);
  bVar2 = *pbVar4;
joined_r0x0071b2cc:
  if ((bVar2 & 1) == 0) {
    uVar5 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar5 = *(ulong *)(pbVar4 + 8);
  }
  if (uVar5 != 0) {
    uVar5 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar5 = *(ulong *)(pbVar4 + 8);
    }
    lVar3 = lVar3 + uVar5 + (ulong)(((uint)LZCOUNT((uint)uVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  if (uVar1 != 0) {
    if ((int)uVar1 < 0) {
      uVar5 = 0xb;
    }
    else {
      uVar5 = (ulong)((((uint)LZCOUNT(uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1);
    }
    lVar3 = uVar5 + lVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x24) = (int)lVar3;
    return lVar3;
  }
  uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  bVar2 = *(byte *)(uVar5 + 8);
  if ((bVar2 & 1) == 0) {
    lVar3 = (ulong)(bVar2 >> 1) + lVar3;
    *(int *)(param_1 + 0x24) = (int)lVar3;
    return lVar3;
  }
  lVar3 = *(long *)(uVar5 + 0x10) + lVar3;
  *(int *)(param_1 + 0x24) = (int)lVar3;
  return lVar3;
}


