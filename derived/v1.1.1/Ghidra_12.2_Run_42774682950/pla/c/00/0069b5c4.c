/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0069b5c4; name: FUN_0069b5c4
 */


long FUN_0069b5c4(undefined *param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  
  pbVar5 = *(byte **)(param_1 + 0x10);
  bVar2 = *pbVar5;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_0069b5e4:
      uVar4 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar4 = *(ulong *)(pbVar5 + 8);
      }
      lVar6 = uVar4 + (((uint)LZCOUNT((uint)uVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
      goto joined_r0x0069b678;
    }
  }
  else if (*(long *)(pbVar5 + 8) != 0) goto LAB_0069b5e4;
  lVar6 = 0;
joined_r0x0069b678:
  if ((param_1 == PTR_DAT_04375c10) || (*(long *)(param_1 + 0x18) == 0)) {
    uVar1 = *(uint *)(param_1 + 0x20);
  }
  else {
    lVar3 = FUN_006e5b68();
    lVar6 = lVar6 + lVar3 + (ulong)(((uint)LZCOUNT((uint)lVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    uVar1 = *(uint *)(param_1 + 0x20);
  }
  if (uVar1 != 0) {
    if ((int)uVar1 < 0) {
      uVar4 = 0xb;
    }
    else {
      uVar4 = (ulong)((((uint)LZCOUNT(uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1);
    }
    lVar6 = uVar4 + lVar6;
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
  *(int *)(param_1 + 0x24) = (int)lVar6;
  return lVar6;
}


