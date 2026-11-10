/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4d7e0; name: FUN_02f4d7e0
 */


void FUN_02f4d7e0(long param_1,long param_2)

{
  ushort *puVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ushort *puVar8;
  long lVar9;
  ushort *puVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  
  uVar2 = *(uint *)(*(long *)(param_2 + 8) + 0x30);
  if (1 < uVar2) {
    if (1 < uVar2 - 2) {
      return;
    }
    lVar9 = *(long *)(param_2 + 8);
    plVar12 = (long *)(lVar9 + 0x20);
    plVar6 = (long *)*plVar12;
    if (*(uint *)(lVar9 + 0x28) == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      lVar5 = (ulong)*(uint *)(lVar9 + 0x28) << 3;
      do {
        if (*plVar6 == param_2) break;
        uVar13 = (ulong)((int)uVar13 + 1);
        plVar6 = plVar6 + 1;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
    lVar5 = *(long *)(*(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x18) * 0x18 + -8);
    if (lVar5 == 0) {
      return;
    }
    uVar7 = uVar13 >> 3 & 0x1fff;
    *(byte *)(*(long *)(lVar5 + 0x30) + uVar7) =
         *(byte *)(*(long *)(lVar5 + 0x30) + uVar7) &
         ((byte)(1 << (ulong)((uint)uVar13 & 7)) ^ 0xff);
    FUN_02f4dd70(lVar5 + 0x18,uVar13);
    *(short *)(lVar5 + 0x12) = (short)*(undefined4 *)(lVar9 + 0x28);
    uVar2 = *(uint *)(lVar9 + 0x28);
    memset(*(void **)(lVar5 + 0x28),0,(ulong)uVar2 + 7 >> 3);
    iVar4 = *(int *)(lVar5 + 8);
    sVar3 = (short)uVar2;
    *(short *)(lVar5 + 0x10) = sVar3;
    *(int *)(lVar5 + 0xc) = iVar4;
    uVar2 = *(uint *)(lVar5 + 0x20);
    if (uVar2 != 0) {
      puVar10 = *(ushort **)(lVar5 + 0x18);
      lVar11 = (ulong)uVar2 * 2 + -2;
      puVar8 = puVar10;
      if (((uint)lVar11 >> 1 & 1) == 0) {
        puVar8 = puVar10 + 1;
        iVar4 = iVar4 - *(int *)(*(long *)(*plVar12 + (ulong)*puVar10 * 8) + 0x1c);
        *(int *)(lVar5 + 0xc) = iVar4;
      }
      if (lVar11 != 0) {
        do {
          iVar4 = iVar4 - *(int *)(*(long *)(*plVar12 + (ulong)*puVar8 * 8) + 0x1c);
          *(int *)(lVar5 + 0xc) = iVar4;
          puVar1 = puVar8 + 1;
          puVar8 = puVar8 + 2;
          iVar4 = iVar4 - *(int *)(*(long *)(*plVar12 + (ulong)*puVar1 * 8) + 0x1c);
          *(int *)(lVar5 + 0xc) = iVar4;
        } while (puVar8 != puVar10 + uVar2);
      }
    }
    *(short *)(lVar5 + 0x10) = sVar3 - (short)uVar2;
    FUN_02f4d9dc(lVar9,uVar13,plVar12,lVar5);
    return;
  }
  uVar2 = *(uint *)(*(long *)(param_2 + 8) + 0x28);
  if (uVar2 == 0) {
    sVar3 = 0;
  }
  else {
    plVar6 = *(long **)(*(long *)(param_2 + 8) + 0x20);
    sVar3 = 0;
    lVar9 = (ulong)uVar2 << 3;
    do {
      if (*plVar6 == param_2) break;
      sVar3 = sVar3 + 1;
      plVar6 = plVar6 + 1;
      lVar9 = lVar9 + -8;
    } while (lVar9 != 0);
  }
  lVar9 = *(long *)(*(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x18) * 0x18 + -8);
  if (lVar9 != 0) {
    *(short *)(lVar9 + 10) = sVar3;
  }
  return;
}


