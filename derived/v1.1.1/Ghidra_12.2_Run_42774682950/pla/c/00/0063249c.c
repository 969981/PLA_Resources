/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0063249c; name: FUN_0063249c
 */


long FUN_0063249c(undefined *param_1)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  pbVar3 = *(byte **)(param_1 + 0x10);
  bVar1 = *pbVar3;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 != 0) goto LAB_006324b0;
LAB_00632500:
    lVar2 = 0;
    pbVar3 = *(byte **)(param_1 + 0x18);
    uVar4 = (ulong)*pbVar3;
    if ((*pbVar3 & 1) != 0) goto LAB_00632510;
LAB_006324ec:
    uVar7 = uVar4 >> 1;
  }
  else {
    if (*(long *)(pbVar3 + 8) == 0) goto LAB_00632500;
LAB_006324b0:
    uVar4 = (ulong)(bVar1 >> 1);
    if ((bVar1 & 1) != 0) {
      uVar4 = *(ulong *)(pbVar3 + 8);
    }
    lVar2 = uVar4 + (((uint)LZCOUNT((uint)uVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    pbVar3 = *(byte **)(param_1 + 0x18);
    uVar4 = (ulong)*pbVar3;
    if ((*pbVar3 & 1) == 0) goto LAB_006324ec;
LAB_00632510:
    uVar7 = *(ulong *)(pbVar3 + 8);
  }
  if (uVar7 != 0) {
    uVar7 = uVar4 >> 1;
    if ((uVar4 & 1) != 0) {
      uVar7 = *(ulong *)(pbVar3 + 8);
    }
    lVar2 = lVar2 + uVar7 + (ulong)(((uint)LZCOUNT((uint)uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  pbVar3 = *(byte **)(param_1 + 0x20);
  bVar1 = *pbVar3;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) goto LAB_006325a0;
  }
  else if (*(long *)(pbVar3 + 8) == 0) goto LAB_006325a0;
  uVar4 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar4 = *(ulong *)(pbVar3 + 8);
  }
  lVar2 = lVar2 + uVar4 + (ulong)(((uint)LZCOUNT((uint)uVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
LAB_006325a0:
  if ((param_1 != PTR_DAT_04375638) && (lVar5 = *(long *)(param_1 + 0x28), lVar5 != 0)) {
    lVar6 = (ulong)*(byte *)(lVar5 + 0x10) * 2;
    if (*(char *)(lVar5 + 0x11) != '\0') {
      lVar6 = lVar6 + 2;
    }
    if (*(char *)(lVar5 + 0x12) != '\0') {
      lVar6 = lVar6 + 2;
    }
    if ((*(ulong *)(lVar5 + 8) & 1) != 0) {
      uVar4 = *(ulong *)(lVar5 + 8) & 0xfffffffffffffffe;
      bVar1 = *(byte *)(uVar4 + 8);
      if ((bVar1 & 1) == 0) {
        uVar4 = (ulong)(bVar1 >> 1);
      }
      else {
        uVar4 = *(ulong *)(uVar4 + 0x10);
      }
      lVar6 = uVar4 + lVar6;
    }
    *(uint *)(lVar5 + 0x14) = (uint)lVar6;
    lVar2 = lVar2 + lVar6 + (ulong)(((uint)LZCOUNT((uint)lVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x30) = (int)lVar2;
    return lVar2;
  }
  uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  bVar1 = *(byte *)(uVar4 + 8);
  if ((bVar1 & 1) == 0) {
    lVar2 = (ulong)(bVar1 >> 1) + lVar2;
    *(int *)(param_1 + 0x30) = (int)lVar2;
    return lVar2;
  }
  lVar2 = *(long *)(uVar4 + 0x10) + lVar2;
  *(int *)(param_1 + 0x30) = (int)lVar2;
  return lVar2;
}


