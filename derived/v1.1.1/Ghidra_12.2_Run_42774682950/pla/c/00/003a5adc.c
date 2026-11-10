/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003a5adc; name: FUN_003a5adc
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_003a5adc(long param_1)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  uVar11 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    uVar9 = 0;
    do {
      pbVar5 = (byte *)FUN_0032b79c(param_1 + 0x18,uVar9);
      uVar1 = (ulong)(*pbVar5 >> 1);
      if ((*pbVar5 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar5 + 8);
      }
      uVar9 = uVar9 + 1;
      uVar11 = uVar1 + uVar11 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (uVar2 != uVar9);
  }
  iVar4 = *(int *)(param_1 + 0x38);
  lVar8 = uVar11 + (long)iVar4;
  puVar10 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x40) != 0) {
    puVar10 = (undefined8 *)(*(long *)(param_1 + 0x40) + 8);
  }
  if (iVar4 != 0) {
    lVar12 = (long)iVar4 << 3;
    do {
      lVar6 = FUN_003a9fa0(*puVar10);
      lVar8 = lVar6 + lVar8 + (ulong)(((uint)LZCOUNT((uint)lVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      lVar12 = lVar12 + -8;
      puVar10 = puVar10 + 1;
    } while (lVar12 != 0);
  }
  iVar4 = *(int *)(param_1 + 0x50);
  lVar8 = lVar8 + iVar4;
  puVar10 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x58) != 0) {
    puVar10 = (undefined8 *)(*(long *)(param_1 + 0x58) + 8);
  }
  if (iVar4 != 0) {
    lVar12 = (long)iVar4 << 3;
    do {
      lVar6 = FUN_003afa74(*puVar10);
      lVar8 = lVar6 + lVar8 + (ulong)(((uint)LZCOUNT((uint)lVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      lVar12 = lVar12 + -8;
      puVar10 = puVar10 + 1;
    } while (lVar12 != 0);
  }
  iVar4 = *(int *)(param_1 + 0x68);
  lVar8 = lVar8 + iVar4;
  puVar10 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x70) != 0) {
    puVar10 = (undefined8 *)(*(long *)(param_1 + 0x70) + 8);
  }
  if (iVar4 != 0) {
    lVar12 = (long)iVar4 << 3;
    do {
      lVar6 = FUN_003b1df4(*puVar10);
      lVar8 = lVar6 + lVar8 + (ulong)(((uint)LZCOUNT((uint)lVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      lVar12 = lVar12 + -8;
      puVar10 = puVar10 + 1;
    } while (lVar12 != 0);
  }
  iVar4 = *(int *)(param_1 + 0x80);
  lVar8 = lVar8 + iVar4;
  puVar10 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x88) != 0) {
    puVar10 = (undefined8 *)(*(long *)(param_1 + 0x88) + 8);
  }
  if (iVar4 != 0) {
    lVar12 = (long)iVar4 << 3;
    do {
      lVar6 = FUN_003ac870(*puVar10);
      lVar8 = lVar6 + lVar8 + (ulong)(((uint)LZCOUNT((uint)lVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      lVar12 = lVar12 + -8;
      puVar10 = puVar10 + 1;
    } while (lVar12 != 0);
  }
  lVar12 = FUN_0033b68c(param_1 + 0x90);
  uVar2 = *(uint *)(param_1 + 0x90);
  lVar6 = FUN_0033b68c(param_1 + 0xa0);
  uVar9 = *(uint *)(param_1 + 0x10);
  lVar8 = lVar12 + lVar8 + (ulong)uVar2 + lVar6 + (ulong)*(uint *)(param_1 + 0xa0);
  if ((uVar9 & 0x1f) == 0) goto LAB_003a5e60;
  if ((uVar9 & 1) != 0) {
    bVar3 = **(byte **)(param_1 + 0xb0);
    uVar11 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar11 = *(ulong *)(*(byte **)(param_1 + 0xb0) + 8);
    }
    lVar8 = lVar8 + uVar11 + (ulong)(((uint)LZCOUNT((uint)uVar11 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  if ((uVar9 >> 1 & 1) != 0) {
    bVar3 = **(byte **)(param_1 + 0xb8);
    uVar11 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar11 = *(ulong *)(*(byte **)(param_1 + 0xb8) + 8);
    }
    lVar8 = lVar8 + uVar11 + (ulong)(((uint)LZCOUNT((uint)uVar11 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  if ((uVar9 >> 2 & 1) != 0) {
    bVar3 = **(byte **)(param_1 + 0xc0);
    uVar11 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar11 = *(ulong *)(*(byte **)(param_1 + 0xc0) + 8);
    }
    lVar8 = lVar8 + uVar11 + (ulong)(((uint)LZCOUNT((uint)uVar11 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  if ((uVar9 >> 3 & 1) != 0) {
    lVar12 = FUN_003b5a4c(*(undefined8 *)(param_1 + 200));
    lVar8 = lVar8 + lVar12 + (ulong)(((uint)LZCOUNT((uint)lVar12 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  if ((uVar9 >> 4 & 1) == 0) goto LAB_003a5e60;
  lVar6 = *(long *)(param_1 + 0xd0);
  lVar12 = (long)*(int *)(lVar6 + 0x18);
  puVar10 = (undefined8 *)0x0;
  if (*(long *)(lVar6 + 0x20) != 0) {
    puVar10 = (undefined8 *)(*(long *)(lVar6 + 0x20) + 8);
  }
  if (*(int *)(lVar6 + 0x18) == 0) {
    lVar12 = 0;
    if ((*(byte *)(lVar6 + 8) & 1) != 0) goto LAB_003a5e98;
LAB_003a5e38:
    *(int *)(lVar6 + 0x28) = (int)lVar12;
  }
  else {
    lVar13 = lVar12 << 3;
    do {
      lVar7 = FUN_003bd5f8(*puVar10);
      lVar12 = lVar7 + lVar12 + (ulong)(((uint)LZCOUNT((uint)lVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      lVar13 = lVar13 + -8;
      puVar10 = puVar10 + 1;
    } while (lVar13 != 0);
    if ((*(byte *)(lVar6 + 8) & 1) == 0) goto LAB_003a5e38;
LAB_003a5e98:
    lVar12 = FUN_0031a310(lVar6 + 8,lVar12,lVar6 + 0x28);
  }
  lVar8 = lVar8 + lVar12 + (ulong)(((uint)LZCOUNT((uint)lVar12 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
LAB_003a5e60:
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x14) = (int)lVar8;
    return lVar8;
  }
  lVar8 = FUN_0031a310((byte *)(param_1 + 8),lVar8,param_1 + 0x14);
  return lVar8;
}


