/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025786c0; name: FUN_025786c0
 */


void FUN_025786c0(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  lVar4 = *(long *)(param_1 + 0x630);
  if (lVar4 != *(long *)(param_1 + 0x638)) {
    iVar2 = *(int *)(param_1 + 0x700);
    iVar6 = iVar2 + 5;
    if (-1 < iVar2) {
      iVar6 = iVar2;
    }
    iVar8 = iVar6 + -5;
    if (iVar6 < 5) {
      iVar8 = iVar6;
    }
    uVar3 = *(long *)(param_1 + 0x638) - lVar4;
    uVar5 = (long)uVar3 >> 3;
    *(int *)(param_1 + 0x6b0) = iVar8;
    iVar6 = (int)(uVar3 >> 3);
    if (uVar3 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (iVar8 + *(int *)(param_1 + 0x6fc)) - 2;
      do {
        uVar7 = uVar7 + iVar6;
      } while ((int)(uVar7 - iVar6) < 0);
      do {
        iVar8 = uVar7 - iVar6;
        uVar7 = uVar7 - iVar6;
      } while (uVar5 <= (ulong)(long)iVar8);
    }
    *(ulong *)(param_1 + 0x6a8) = lVar4 + (ulong)uVar7 * 8;
    iVar8 = 4;
    if (0 < iVar2) {
      iVar8 = -1;
    }
    iVar8 = iVar8 + iVar2;
    iVar1 = iVar8 + -5;
    if (iVar8 < 5) {
      iVar1 = iVar8;
    }
    *(int *)(param_1 + 0x6f0) = iVar1;
    if (uVar3 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (iVar1 + *(int *)(param_1 + 0x6fc)) - 2;
      do {
        uVar7 = uVar7 + iVar6;
      } while ((int)(uVar7 - iVar6) < 0);
      do {
        iVar8 = uVar7 - iVar6;
        uVar7 = uVar7 - iVar6;
      } while (uVar5 <= (ulong)(long)iVar8);
    }
    *(ulong *)(param_1 + 0x6e8) = lVar4 + (ulong)uVar7 * 8;
    iVar8 = iVar2 + 3;
    if (-1 < iVar2 + -2) {
      iVar8 = iVar2 + -2;
    }
    iVar1 = iVar8 + -5;
    if (iVar8 < 5) {
      iVar1 = iVar8;
    }
    *(int *)(param_1 + 0x6e0) = iVar1;
    if (uVar3 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (iVar1 + *(int *)(param_1 + 0x6fc)) - 2;
      do {
        uVar7 = uVar7 + iVar6;
      } while ((int)(uVar7 - iVar6) < 0);
      do {
        iVar8 = uVar7 - iVar6;
        uVar7 = uVar7 - iVar6;
      } while (uVar5 <= (ulong)(long)iVar8);
    }
    *(ulong *)(param_1 + 0x6d8) = lVar4 + (ulong)uVar7 * 8;
    iVar8 = iVar2 + 6;
    if (-1 < iVar2 + 1) {
      iVar8 = iVar2 + 1;
    }
    iVar1 = iVar8 + -5;
    if (iVar8 < 5) {
      iVar1 = iVar8;
    }
    *(int *)(param_1 + 0x6c0) = iVar1;
    if (uVar3 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (iVar1 + *(int *)(param_1 + 0x6fc)) - 2;
      do {
        uVar7 = uVar7 + iVar6;
      } while ((int)(uVar7 - iVar6) < 0);
      do {
        iVar8 = uVar7 - iVar6;
        uVar7 = uVar7 - iVar6;
      } while (uVar5 <= (ulong)(long)iVar8);
    }
    *(ulong *)(param_1 + 0x6b8) = lVar4 + (ulong)uVar7 * 8;
    iVar8 = iVar2 + 7;
    if (-1 < iVar2 + 2) {
      iVar8 = iVar2 + 2;
    }
    iVar2 = iVar8 + -5;
    if (iVar8 < 5) {
      iVar2 = iVar8;
    }
    *(int *)(param_1 + 0x6d0) = iVar2;
    if (uVar3 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (iVar2 + *(int *)(param_1 + 0x6fc)) - 2;
      do {
        uVar7 = uVar7 + iVar6;
      } while ((int)(uVar7 - iVar6) < 0);
      do {
        iVar2 = uVar7 - iVar6;
        uVar7 = uVar7 - iVar6;
      } while (uVar5 <= (ulong)(long)iVar2);
    }
    *(ulong *)(param_1 + 0x6c8) = lVar4 + (ulong)uVar7 * 8;
  }
  return;
}


