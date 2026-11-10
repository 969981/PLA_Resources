/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002b2b58; name: FUN_002b2b58
 */


long FUN_002b2b58(undefined *param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  
  pbVar4 = *(byte **)(param_1 + 0x10);
  bVar1 = *pbVar4;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 != 0) goto LAB_002b2b78;
LAB_002b2bc8:
    lVar6 = 0;
    pbVar4 = *(byte **)(param_1 + 0x18);
    uVar3 = (ulong)*pbVar4;
    if ((*pbVar4 & 1) != 0) goto LAB_002b2bd8;
LAB_002b2bb4:
    uVar5 = uVar3 >> 1;
  }
  else {
    if (*(long *)(pbVar4 + 8) == 0) goto LAB_002b2bc8;
LAB_002b2b78:
    uVar3 = (ulong)(bVar1 >> 1);
    if ((bVar1 & 1) != 0) {
      uVar3 = *(ulong *)(pbVar4 + 8);
    }
    lVar6 = uVar3 + (((uint)LZCOUNT((uint)uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    pbVar4 = *(byte **)(param_1 + 0x18);
    uVar3 = (ulong)*pbVar4;
    if ((*pbVar4 & 1) == 0) goto LAB_002b2bb4;
LAB_002b2bd8:
    uVar5 = *(ulong *)(pbVar4 + 8);
  }
  if (uVar5 != 0) {
    uVar5 = uVar3 >> 1;
    if ((uVar3 & 1) != 0) {
      uVar5 = *(ulong *)(pbVar4 + 8);
    }
    lVar6 = lVar6 + uVar5 + (ulong)(((uint)LZCOUNT((uint)uVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  pbVar4 = *(byte **)(param_1 + 0x20);
  bVar1 = *pbVar4;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) goto LAB_002b2c68;
  }
  else if (*(long *)(pbVar4 + 8) == 0) goto LAB_002b2c68;
  uVar3 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar3 = *(ulong *)(pbVar4 + 8);
  }
  lVar6 = lVar6 + uVar3 + (ulong)(((uint)LZCOUNT((uint)uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
LAB_002b2c68:
  if ((param_1 != PTR_DAT_04373190) && (*(long *)(param_1 + 0x28) != 0)) {
    lVar2 = FUN_0030c308();
    lVar6 = lVar6 + lVar2 + (ulong)(((uint)LZCOUNT((uint)lVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    bVar1 = *(byte *)(uVar3 + 8);
    if ((bVar1 & 1) == 0) {
      uVar3 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar3 = *(ulong *)(uVar3 + 0x10);
    }
    lVar6 = uVar3 + lVar6;
  }
  *(int *)(param_1 + 0x30) = (int)lVar6;
  return lVar6;
}


