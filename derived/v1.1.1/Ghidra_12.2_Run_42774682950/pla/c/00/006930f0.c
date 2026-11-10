/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006930f0; name: FUN_006930f0
 */


void FUN_006930f0(long param_1)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  if (iVar2 == 3) {
LAB_0069311c:
    uVar6 = *(ulong *)(*(long *)(param_1 + 0x10) + 8);
    if ((uVar6 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      uVar6 = uVar6 & 0xfffffffffffffffe;
      bVar1 = *(byte *)(uVar6 + 8);
      if ((bVar1 & 1) == 0) {
        uVar4 = (uint)(bVar1 >> 1);
      }
      else {
        uVar4 = (uint)*(undefined8 *)(uVar6 + 0x10);
      }
    }
    *(uint *)(*(long *)(param_1 + 0x10) + 0x10) = uVar4;
    iVar2 = uVar4 + (((uint)LZCOUNT(uVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    uVar6 = *(ulong *)(param_1 + 8);
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 != 1) {
        iVar2 = 0;
        uVar6 = *(ulong *)(param_1 + 8);
        goto joined_r0x006931fc;
      }
      goto LAB_0069311c;
    }
    lVar8 = *(long *)(param_1 + 0x10);
    lVar7 = (long)*(int *)(lVar8 + 0x18);
    puVar9 = (undefined8 *)0x0;
    if (*(long *)(lVar8 + 0x20) != 0) {
      puVar9 = (undefined8 *)(*(long *)(lVar8 + 0x20) + 8);
    }
    if (*(int *)(lVar8 + 0x18) == 0) {
      uVar4 = 0;
      uVar6 = *(ulong *)(lVar8 + 8);
    }
    else {
      lVar10 = lVar7 << 3;
      do {
        lVar3 = FUN_002dfd88(*puVar9);
        lVar7 = lVar3 + lVar7 + (ulong)(((uint)LZCOUNT((uint)lVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
        uVar4 = (uint)lVar7;
        lVar10 = lVar10 + -8;
        puVar9 = puVar9 + 1;
      } while (lVar10 != 0);
      uVar6 = *(ulong *)(lVar8 + 8);
    }
    if ((uVar6 & 1) != 0) {
      bVar1 = *(byte *)((uVar6 & 0xfffffffffffffffe) + 8);
      if ((bVar1 & 1) == 0) {
        uVar5 = (uint)(bVar1 >> 1);
      }
      else {
        uVar5 = (uint)*(undefined8 *)((uVar6 & 0xfffffffffffffffe) + 0x10);
      }
      uVar4 = uVar5 + uVar4;
    }
    *(uint *)(lVar8 + 0x28) = uVar4;
    iVar2 = uVar4 + (((uint)LZCOUNT(uVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    uVar6 = *(ulong *)(param_1 + 8);
  }
  iVar2 = iVar2 + 1;
joined_r0x006931fc:
  if ((uVar6 & 1) != 0) {
    bVar1 = *(byte *)((uVar6 & 0xfffffffffffffffe) + 8);
    if ((bVar1 & 1) == 0) {
      uVar4 = (uint)(bVar1 >> 1);
    }
    else {
      uVar4 = (uint)*(undefined8 *)((uVar6 & 0xfffffffffffffffe) + 0x10);
    }
    iVar2 = uVar4 + iVar2;
  }
  *(int *)(param_1 + 0x18) = iVar2;
  return;
}


