/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007aed38; name: FUN_007aed38
 */


long FUN_007aed38(long param_1)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  
  pbVar5 = *(byte **)(param_1 + 0x10);
  bVar2 = *pbVar5;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_007aed58:
      uVar4 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar4 = *(ulong *)(pbVar5 + 8);
      }
      lVar6 = uVar4 + (((uint)LZCOUNT((uint)uVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
      iVar1 = *(int *)(param_1 + 0x24);
      goto joined_r0x007aedb4;
    }
  }
  else if (*(long *)(pbVar5 + 8) != 0) goto LAB_007aed58;
  lVar6 = 0;
  iVar1 = *(int *)(param_1 + 0x24);
joined_r0x007aedb4:
  if ((iVar1 == 3) || (iVar1 == 2)) {
    lVar3 = FUN_002dfd88(*(undefined8 *)(param_1 + 0x18));
    lVar6 = lVar6 + lVar3 + (ulong)(((uint)LZCOUNT((uint)lVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    bVar2 = *(byte *)(uVar4 + 8);
    if ((bVar2 & 1) == 0) {
      uVar4 = (ulong)(bVar2 >> 1);
    }
    else {
      uVar4 = *(ulong *)(uVar4 + 0x10);
    }
    lVar6 = uVar4 + lVar6;
  }
  *(int *)(param_1 + 0x20) = (int)lVar6;
  return lVar6;
}


