/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007a9c50; name: FUN_007a9c50
 */


long FUN_007a9c50(long param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  
  lVar6 = (long)*(int *)(param_1 + 0x18);
  puVar7 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x20) != 0) {
    puVar7 = (undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar6 = 0;
    pbVar4 = *(byte **)(param_1 + 0x28);
    uVar3 = (ulong)*pbVar4;
    if ((*pbVar4 & 1) != 0) goto LAB_007a9cd4;
LAB_007a9cb8:
    uVar5 = uVar3 >> 1;
  }
  else {
    lVar8 = lVar6 << 3;
    do {
      lVar2 = FUN_007aed38(*puVar7);
      lVar6 = lVar2 + lVar6 + (ulong)(((uint)LZCOUNT((uint)lVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      lVar8 = lVar8 + -8;
      puVar7 = puVar7 + 1;
    } while (lVar8 != 0);
    pbVar4 = *(byte **)(param_1 + 0x28);
    uVar3 = (ulong)*pbVar4;
    if ((*pbVar4 & 1) == 0) goto LAB_007a9cb8;
LAB_007a9cd4:
    uVar5 = *(ulong *)(pbVar4 + 8);
  }
  if (uVar5 != 0) {
    uVar5 = uVar3 >> 1;
    if ((uVar3 & 1) != 0) {
      uVar5 = *(ulong *)(pbVar4 + 8);
    }
    lVar6 = lVar6 + uVar5 + (ulong)(((uint)LZCOUNT((uint)uVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  pbVar4 = *(byte **)(param_1 + 0x30);
  bVar1 = *pbVar4;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) goto LAB_007a9d64;
  }
  else if (*(long *)(pbVar4 + 8) == 0) goto LAB_007a9d64;
  uVar3 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar3 = *(ulong *)(pbVar4 + 8);
  }
  lVar6 = lVar6 + uVar3 + (ulong)(((uint)LZCOUNT((uint)uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
LAB_007a9d64:
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
  *(int *)(param_1 + 0x38) = (int)lVar6;
  return lVar6;
}


