/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003a9fa0; name: FUN_003a9fa0
 */


long FUN_003a9fa0(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  
  lVar8 = (long)*(int *)(param_1 + 0x20);
  puVar10 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x28) != 0) {
    puVar10 = (undefined8 *)(*(long *)(param_1 + 0x28) + 8);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    lVar8 = 0;
  }
  else {
    lVar12 = lVar8 << 3;
    do {
      lVar4 = FUN_003ac870(*puVar10);
      lVar8 = lVar4 + lVar8 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      lVar12 = lVar12 + -8;
      puVar10 = puVar10 + 1;
    } while (lVar12 != 0);
  }
  iVar3 = *(int *)(param_1 + 0x38);
  lVar8 = lVar8 + iVar3;
  puVar10 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x40) != 0) {
    puVar10 = (undefined8 *)(*(long *)(param_1 + 0x40) + 8);
  }
  if (iVar3 != 0) {
    lVar12 = (long)iVar3 << 3;
    do {
      lVar4 = FUN_003a9fa0(*puVar10);
      lVar8 = lVar4 + lVar8 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      lVar12 = lVar12 + -8;
      puVar10 = puVar10 + 1;
    } while (lVar12 != 0);
  }
  iVar3 = *(int *)(param_1 + 0x50);
  lVar8 = lVar8 + iVar3;
  puVar10 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x58) != 0) {
    puVar10 = (undefined8 *)(*(long *)(param_1 + 0x58) + 8);
  }
  if (iVar3 != 0) {
    lVar12 = (long)iVar3 << 3;
    do {
      lVar4 = FUN_003afa74(*puVar10);
      lVar8 = lVar4 + lVar8 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      lVar12 = lVar12 + -8;
      puVar10 = puVar10 + 1;
    } while (lVar12 != 0);
  }
  iVar3 = *(int *)(param_1 + 0x68);
  lVar8 = lVar8 + iVar3;
  puVar10 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x70) != 0) {
    puVar10 = (undefined8 *)(*(long *)(param_1 + 0x70) + 8);
  }
  if (iVar3 != 0) {
    lVar12 = (long)iVar3 << 3;
    do {
      lVar4 = FUN_003a73d0(*puVar10);
      lVar8 = lVar4 + lVar8 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      lVar12 = lVar12 + -8;
      puVar10 = puVar10 + 1;
    } while (lVar12 != 0);
  }
  iVar3 = *(int *)(param_1 + 0x80);
  lVar8 = lVar8 + iVar3;
  puVar10 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x88) != 0) {
    puVar10 = (undefined8 *)(*(long *)(param_1 + 0x88) + 8);
  }
  if (iVar3 != 0) {
    lVar12 = (long)iVar3 << 3;
    do {
      lVar4 = FUN_003ac870(*puVar10);
      lVar8 = lVar4 + lVar8 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      lVar12 = lVar12 + -8;
      puVar10 = puVar10 + 1;
    } while (lVar12 != 0);
  }
  iVar3 = *(int *)(param_1 + 0x98);
  lVar8 = lVar8 + iVar3;
  puVar10 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0xa0) != 0) {
    puVar10 = (undefined8 *)(*(long *)(param_1 + 0xa0) + 8);
  }
  if (iVar3 != 0) {
    lVar12 = (long)iVar3 << 3;
    do {
      lVar4 = FUN_003adb40(*puVar10);
      lVar8 = lVar4 + lVar8 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      lVar12 = lVar12 + -8;
      puVar10 = puVar10 + 1;
    } while (lVar12 != 0);
  }
  iVar3 = *(int *)(param_1 + 0xb0);
  lVar8 = lVar8 + iVar3;
  plVar11 = (long *)0x0;
  if (*(long *)(param_1 + 0xb8) != 0) {
    plVar11 = (long *)(*(long *)(param_1 + 0xb8) + 8);
  }
  if (iVar3 != 0) {
    lVar12 = (long)iVar3 << 3;
    do {
      lVar4 = *plVar11;
      uVar1 = *(uint *)(lVar4 + 0x10);
      if ((uVar1 & 3) == 0) {
        uVar6 = 0;
        if ((*(byte *)(lVar4 + 8) & 1) != 0) goto LAB_003aa290;
LAB_003aa250:
        *(int *)(lVar4 + 0x14) = (int)uVar6;
      }
      else {
        if ((uVar1 & 1) == 0) {
          uVar6 = 0;
        }
        else if ((int)*(uint *)(lVar4 + 0x18) < 0) {
          uVar6 = 0xb;
        }
        else {
          uVar6 = (ulong)((((uint)LZCOUNT(*(uint *)(lVar4 + 0x18) | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1)
          ;
        }
        if ((uVar1 >> 1 & 1) != 0) {
          if ((int)*(uint *)(lVar4 + 0x1c) < 0) {
            uVar7 = 0xb;
          }
          else {
            uVar7 = (ulong)((((uint)LZCOUNT(*(uint *)(lVar4 + 0x1c) | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
                           1);
          }
          uVar6 = uVar7 + uVar6;
        }
        if ((*(byte *)(lVar4 + 8) & 1) == 0) goto LAB_003aa250;
LAB_003aa290:
        uVar6 = FUN_0031a310(lVar4 + 8,uVar6,lVar4 + 0x14);
      }
      lVar8 = uVar6 + lVar8 + (ulong)(((uint)LZCOUNT((uint)uVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      plVar11 = plVar11 + 1;
      lVar12 = lVar12 + -8;
    } while (lVar12 != 0);
  }
  uVar1 = *(uint *)(param_1 + 200);
  lVar8 = lVar8 + (ulong)uVar1;
  if (0 < (int)uVar1) {
    uVar9 = 0;
    do {
      pbVar5 = (byte *)FUN_0032b79c(param_1 + 0xc0,uVar9);
      uVar6 = (ulong)(*pbVar5 >> 1);
      if ((*pbVar5 & 1) != 0) {
        uVar6 = *(ulong *)(pbVar5 + 8);
      }
      uVar9 = uVar9 + 1;
      lVar8 = uVar6 + lVar8 + (ulong)(((uint)LZCOUNT((uint)uVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (uVar1 != uVar9);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      bVar2 = **(byte **)(param_1 + 0xd8);
      uVar6 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar6 = *(ulong *)(*(byte **)(param_1 + 0xd8) + 8);
      }
      lVar8 = lVar8 + uVar6 + (ulong)(((uint)LZCOUNT((uint)uVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar12 = FUN_003b6890(*(undefined8 *)(param_1 + 0xe0));
      lVar8 = lVar8 + lVar12 + (ulong)(((uint)LZCOUNT((uint)lVar12 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1
      ;
    }
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x14) = (int)lVar8;
    return lVar8;
  }
  lVar8 = FUN_0031a310((byte *)(param_1 + 8),lVar8,param_1 + 0x14);
  return lVar8;
}


