/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003b1df4; name: FUN_003b1df4
 */


long FUN_003b1df4(long param_1)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  
  lVar7 = (long)*(int *)(param_1 + 0x20);
  puVar8 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x28) != 0) {
    puVar8 = (undefined8 *)(*(long *)(param_1 + 0x28) + 8);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    lVar7 = 0;
    uVar2 = *(uint *)(param_1 + 0x10);
  }
  else {
    lVar9 = lVar7 << 3;
    do {
      lVar5 = FUN_003b3298(*puVar8);
      lVar7 = lVar5 + lVar7 + (ulong)(((uint)LZCOUNT((uint)lVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      lVar9 = lVar9 + -8;
      puVar8 = puVar8 + 1;
    } while (lVar9 != 0);
    uVar2 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar2 & 3) != 0) {
    if ((uVar2 & 1) != 0) {
      bVar3 = **(byte **)(param_1 + 0x30);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(*(byte **)(param_1 + 0x30) + 8);
      }
      lVar7 = lVar7 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0x38);
      lVar9 = FUN_00339d58(lVar5 + 0x10);
      iVar4 = *(int *)(lVar5 + 0x38);
      lVar9 = lVar9 + (long)iVar4 * 2;
      puVar8 = (undefined8 *)0x0;
      if (*(long *)(lVar5 + 0x40) != 0) {
        puVar8 = (undefined8 *)(*(long *)(lVar5 + 0x40) + 8);
      }
      if (iVar4 != 0) {
        lVar10 = (long)iVar4 << 3;
        do {
          lVar6 = FUN_003bc11c(*puVar8);
          lVar9 = lVar6 + lVar9 + (ulong)(((uint)LZCOUNT((uint)lVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
          lVar10 = lVar10 + -8;
          puVar8 = puVar8 + 1;
        } while (lVar10 != 0);
      }
      if ((*(byte *)(lVar5 + 0x28) & 1) != 0) {
        lVar9 = lVar9 + 3;
      }
      if ((*(byte *)(lVar5 + 8) & 1) == 0) {
        *(int *)(lVar5 + 0x2c) = (int)lVar9;
      }
      else {
        lVar9 = FUN_0031a310((byte *)(lVar5 + 8),lVar9,lVar5 + 0x2c);
      }
      lVar7 = lVar7 + lVar9 + (ulong)(((uint)LZCOUNT((uint)lVar9 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
      bVar3 = *(byte *)(param_1 + 8);
      goto joined_r0x003b1f4c;
    }
  }
  bVar3 = *(byte *)(param_1 + 8);
joined_r0x003b1f4c:
  if ((bVar3 & 1) == 0) {
    *(int *)(param_1 + 0x14) = (int)lVar7;
    return lVar7;
  }
  lVar7 = FUN_0031a310(param_1 + 8,lVar7,param_1 + 0x14);
  return lVar7;
}


