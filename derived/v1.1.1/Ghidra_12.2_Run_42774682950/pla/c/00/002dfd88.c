/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002dfd88; name: FUN_002dfd88
 */


void FUN_002dfd88(long param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 1:
    if ((int)*(uint *)(param_1 + 0x10) < 0) {
      iVar3 = 0xb;
      uVar6 = *(ulong *)(param_1 + 8);
    }
    else {
      iVar3 = (((uint)LZCOUNT(*(uint *)(param_1 + 0x10) | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
      uVar6 = *(ulong *)(param_1 + 8);
    }
    break;
  case 2:
    iVar3 = 2;
    uVar6 = *(ulong *)(param_1 + 8);
    goto joined_r0x002dfe78;
  case 3:
    iVar3 = (int)((LZCOUNT(*(ulong *)(param_1 + 0x10) | 1) ^ 0x3fU) * 9 + 0x49 >> 6) + 1;
    uVar6 = *(ulong *)(param_1 + 8);
joined_r0x002dfe78:
    if ((uVar6 & 1) == 0) goto LAB_002dff84;
    goto LAB_002dff98;
  case 4:
    iVar3 = 5;
    uVar6 = *(ulong *)(param_1 + 8);
    break;
  case 5:
    iVar3 = 9;
    uVar6 = *(ulong *)(param_1 + 8);
    break;
  case 6:
    uVar2 = FUN_00602744(*(undefined8 *)(param_1 + 0x10));
    goto LAB_002dff10;
  case 7:
  case 8:
    bVar1 = **(byte **)(param_1 + 0x10);
    uVar2 = (uint)(bVar1 >> 1);
    if ((bVar1 & 1) != 0) {
      uVar2 = (uint)*(undefined8 *)(*(byte **)(param_1 + 0x10) + 8);
    }
    iVar3 = uVar2 + (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    uVar6 = *(ulong *)(param_1 + 8);
    goto joined_r0x002dfdfc;
  case 9:
    lVar8 = *(long *)(param_1 + 0x10);
    lVar7 = (long)*(int *)(lVar8 + 0x18);
    puVar9 = (undefined8 *)0x0;
    if (*(long *)(lVar8 + 0x20) != 0) {
      puVar9 = (undefined8 *)(*(long *)(lVar8 + 0x20) + 8);
    }
    if (*(int *)(lVar8 + 0x18) == 0) {
      uVar2 = 0;
      uVar6 = *(ulong *)(lVar8 + 8);
    }
    else {
      lVar10 = lVar7 << 3;
      do {
        lVar4 = FUN_002dfd88(*puVar9);
        lVar7 = lVar4 + lVar7 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
        uVar2 = (uint)lVar7;
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
      uVar2 = uVar5 + uVar2;
    }
    *(uint *)(lVar8 + 0x28) = uVar2;
    iVar3 = uVar2 + (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    uVar6 = *(ulong *)(param_1 + 8);
    break;
  case 10:
    uVar2 = FUN_002e1558(*(undefined8 *)(param_1 + 0x10));
LAB_002dff10:
    iVar3 = uVar2 + (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    uVar6 = *(ulong *)(param_1 + 8);
joined_r0x002dfdfc:
    iVar3 = iVar3 + 1;
    break;
  default:
    iVar3 = 0;
    uVar6 = *(ulong *)(param_1 + 8);
  }
  if ((uVar6 & 1) != 0) {
LAB_002dff98:
    bVar1 = *(byte *)((uVar6 & 0xfffffffffffffffe) + 8);
    if ((bVar1 & 1) == 0) {
      uVar2 = (uint)(bVar1 >> 1);
    }
    else {
      uVar2 = (uint)*(undefined8 *)((uVar6 & 0xfffffffffffffffe) + 0x10);
    }
    iVar3 = uVar2 + iVar3;
  }
LAB_002dff84:
  *(int *)(param_1 + 0x18) = iVar3;
  return;
}


