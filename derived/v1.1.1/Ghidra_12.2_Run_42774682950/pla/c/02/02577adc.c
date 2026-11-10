/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02577adc; name: FUN_02577adc
 */


void FUN_02577adc(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  
  iVar2 = *(int *)(param_1 + 0x700);
  iVar7 = iVar2 + 5;
  if (-1 < iVar2) {
    iVar7 = iVar2;
  }
  iVar11 = iVar7 + -5;
  if (iVar7 < 5) {
    iVar11 = iVar7;
  }
  lVar6 = *(long *)(param_1 + 0x5c0);
  lVar5 = *(long *)(param_1 + 0x5c8) - lVar6;
  *(int *)(param_1 + 0x670) = iVar11;
  uVar8 = (lVar5 >> 1) * -0x5555555555555555;
  iVar7 = (int)uVar8;
  if (lVar5 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = (iVar11 + *(int *)(param_1 + 0x6f8)) - 2;
    do {
      uVar9 = uVar9 + iVar7;
    } while ((int)(uVar9 - iVar7) < 0);
    do {
      iVar11 = uVar9 - iVar7;
      uVar9 = uVar9 - iVar7;
    } while (uVar8 <= (ulong)(long)iVar11);
  }
  puVar10 = (undefined4 *)(lVar6 + (ulong)uVar9 * 6);
  iVar11 = 4;
  if (0 < iVar2) {
    iVar11 = -1;
  }
  uVar3 = *puVar10;
  iVar11 = iVar11 + iVar2;
  *(undefined2 *)(param_1 + 0x66c) = *(undefined2 *)(puVar10 + 1);
  iVar1 = iVar11 + -5;
  if (iVar11 < 5) {
    iVar1 = iVar11;
  }
  *(undefined4 *)(param_1 + 0x668) = uVar3;
  *(int *)(param_1 + 0x6a0) = iVar1;
  if (lVar5 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = (iVar1 + *(int *)(param_1 + 0x6f8)) - 2;
    do {
      uVar9 = uVar9 + iVar7;
    } while ((int)(uVar9 - iVar7) < 0);
    do {
      iVar11 = uVar9 - iVar7;
      uVar9 = uVar9 - iVar7;
    } while (uVar8 <= (ulong)(long)iVar11);
  }
  puVar10 = (undefined4 *)(lVar6 + (ulong)uVar9 * 6);
  uVar3 = *puVar10;
  iVar11 = iVar2 + 3;
  if (-1 < iVar2 + -2) {
    iVar11 = iVar2 + -2;
  }
  *(undefined2 *)(param_1 + 0x69c) = *(undefined2 *)(puVar10 + 1);
  iVar1 = iVar11 + -5;
  if (iVar11 < 5) {
    iVar1 = iVar11;
  }
  *(undefined4 *)(param_1 + 0x698) = uVar3;
  *(int *)(param_1 + 0x694) = iVar1;
  if (lVar5 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = (iVar1 + *(int *)(param_1 + 0x6f8)) - 2;
    do {
      uVar9 = uVar9 + iVar7;
    } while ((int)(uVar9 - iVar7) < 0);
    do {
      iVar11 = uVar9 - iVar7;
      uVar9 = uVar9 - iVar7;
    } while (uVar8 <= (ulong)(long)iVar11);
  }
  puVar10 = (undefined4 *)(lVar6 + (ulong)uVar9 * 6);
  uVar3 = *puVar10;
  iVar11 = iVar2 + 6;
  if (-1 < iVar2 + 1) {
    iVar11 = iVar2 + 1;
  }
  *(undefined2 *)(param_1 + 0x690) = *(undefined2 *)(puVar10 + 1);
  iVar1 = iVar11 + -5;
  if (iVar11 < 5) {
    iVar1 = iVar11;
  }
  *(undefined4 *)(param_1 + 0x68c) = uVar3;
  *(int *)(param_1 + 0x67c) = iVar1;
  if (lVar5 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = (iVar1 + *(int *)(param_1 + 0x6f8)) - 2;
    do {
      uVar9 = uVar9 + iVar7;
    } while ((int)(uVar9 - iVar7) < 0);
    do {
      iVar11 = uVar9 - iVar7;
      uVar9 = uVar9 - iVar7;
    } while (uVar8 <= (ulong)(long)iVar11);
  }
  puVar10 = (undefined4 *)(lVar6 + (ulong)uVar9 * 6);
  iVar11 = iVar2 + 7;
  if (-1 < iVar2 + 2) {
    iVar11 = iVar2 + 2;
  }
  uVar3 = *puVar10;
  uVar4 = *(undefined2 *)(puVar10 + 1);
  iVar2 = iVar11 + -5;
  if (iVar11 < 5) {
    iVar2 = iVar11;
  }
  *(int *)(param_1 + 0x688) = iVar2;
  *(undefined2 *)(param_1 + 0x678) = uVar4;
  *(undefined4 *)(param_1 + 0x674) = uVar3;
  if (lVar5 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = (iVar2 + *(int *)(param_1 + 0x6f8)) - 2;
    do {
      uVar9 = uVar9 + iVar7;
    } while ((int)(uVar9 - iVar7) < 0);
    do {
      iVar2 = uVar9 - iVar7;
      uVar9 = uVar9 - iVar7;
    } while (uVar8 <= (ulong)(long)iVar2);
  }
  puVar10 = (undefined4 *)(lVar6 + (ulong)uVar9 * 6);
  uVar3 = *puVar10;
  *(undefined2 *)(param_1 + 0x684) = *(undefined2 *)(puVar10 + 1);
  *(undefined4 *)(param_1 + 0x680) = uVar3;
  return;
}


