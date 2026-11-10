/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0068fce0; name: FUN_0068fce0
 */


long FUN_0068fce0(long param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  
  pbVar5 = *(byte **)(param_1 + 0x10);
  bVar2 = *pbVar5;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) goto LAB_0068fd08;
LAB_0068fdc8:
    lVar7 = 0;
    iVar1 = *(int *)(param_1 + 0x24);
    if (iVar1 == 3) goto LAB_0068fdd8;
LAB_0068fd44:
    if (iVar1 != 2) goto LAB_0068fe94;
    lVar9 = *(long *)(param_1 + 0x18);
    uVar3 = *(uint *)(lVar9 + 0x18);
    uVar10 = (ulong)uVar3;
    if ((int)uVar3 < 1) {
      uVar4 = *(ulong *)(lVar9 + 8);
    }
    else {
      uVar8 = 0;
      do {
        pbVar5 = (byte *)FUN_0032b79c(lVar9 + 0x10,uVar8);
        uVar4 = (ulong)(*pbVar5 >> 1);
        if ((*pbVar5 & 1) != 0) {
          uVar4 = *(ulong *)(pbVar5 + 8);
        }
        uVar8 = uVar8 + 1;
        uVar10 = uVar4 + uVar10 + (ulong)(((uint)LZCOUNT((uint)uVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      } while (uVar3 != uVar8);
      uVar4 = *(ulong *)(lVar9 + 8);
    }
    if ((uVar4 & 1) != 0) {
      bVar2 = *(byte *)((uVar4 & 0xfffffffffffffffe) + 8);
      if ((bVar2 & 1) == 0) {
        uVar4 = (ulong)(bVar2 >> 1);
      }
      else {
        uVar4 = *(ulong *)((uVar4 & 0xfffffffffffffffe) + 0x10);
      }
      uVar10 = uVar4 + uVar10;
    }
    uVar3 = (uint)LZCOUNT((uint)uVar10 | 1);
    *(uint *)(lVar9 + 0x28) = (uint)uVar10;
    lVar7 = lVar7 + uVar10;
  }
  else {
    if (*(long *)(pbVar5 + 8) == 0) goto LAB_0068fdc8;
LAB_0068fd08:
    uVar10 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar10 = *(ulong *)(pbVar5 + 8);
    }
    lVar7 = uVar10 + (((uint)LZCOUNT((uint)uVar10 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    iVar1 = *(int *)(param_1 + 0x24);
    if (iVar1 != 3) goto LAB_0068fd44;
LAB_0068fdd8:
    lVar9 = *(long *)(param_1 + 0x18);
    pbVar5 = *(byte **)(lVar9 + 0x10);
    bVar2 = *pbVar5;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 != 0) goto LAB_0068fdf0;
LAB_0068fe34:
      lVar6 = 0;
      uVar10 = *(ulong *)(lVar9 + 8);
    }
    else {
      if (*(long *)(pbVar5 + 8) == 0) goto LAB_0068fe34;
LAB_0068fdf0:
      uVar10 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar10 = *(ulong *)(pbVar5 + 8);
      }
      lVar6 = uVar10 + (((uint)LZCOUNT((uint)uVar10 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
      uVar10 = *(ulong *)(lVar9 + 8);
    }
    if ((uVar10 & 1) != 0) {
      bVar2 = *(byte *)((uVar10 & 0xfffffffffffffffe) + 8);
      if ((bVar2 & 1) == 0) {
        uVar10 = (ulong)(bVar2 >> 1);
      }
      else {
        uVar10 = *(ulong *)((uVar10 & 0xfffffffffffffffe) + 0x10);
      }
      lVar6 = uVar10 + lVar6;
    }
    *(uint *)(lVar9 + 0x18) = (uint)lVar6;
    lVar7 = lVar7 + lVar6;
    uVar3 = (uint)LZCOUNT((uint)lVar6 | 1);
  }
  lVar7 = lVar7 + (ulong)((uVar3 ^ 0x1f) * 9 + 0x49 >> 6) + 1;
LAB_0068fe94:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar10 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    bVar2 = *(byte *)(uVar10 + 8);
    if ((bVar2 & 1) == 0) {
      uVar10 = (ulong)(bVar2 >> 1);
    }
    else {
      uVar10 = *(ulong *)(uVar10 + 0x10);
    }
    lVar7 = uVar10 + lVar7;
  }
  *(int *)(param_1 + 0x20) = (int)lVar7;
  return lVar7;
}


