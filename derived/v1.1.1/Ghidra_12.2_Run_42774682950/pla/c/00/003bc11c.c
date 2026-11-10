/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003bc11c; name: FUN_003bc11c
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_003bc11c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  lVar5 = (long)*(int *)(param_1 + 0x20);
  puVar6 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x28) != 0) {
    puVar6 = (undefined8 *)(*(long *)(param_1 + 0x28) + 8);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    lVar5 = 0;
    uVar2 = *(uint *)(param_1 + 0x10);
  }
  else {
    lVar7 = lVar5 << 3;
    do {
      lVar4 = FUN_003baf3c(*puVar6);
      lVar5 = lVar4 + lVar5 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      lVar7 = lVar7 + -8;
      puVar6 = puVar6 + 1;
    } while (lVar7 != 0);
    uVar2 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar2 & 0x3f) != 0) {
    if ((uVar2 & 1) != 0) {
      bVar3 = **(byte **)(param_1 + 0x30);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(*(byte **)(param_1 + 0x30) + 8);
      }
      lVar5 = lVar5 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      bVar3 = **(byte **)(param_1 + 0x38);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(*(byte **)(param_1 + 0x38) + 8);
      }
      lVar5 = lVar5 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 2 & 1) != 0) {
      bVar3 = **(byte **)(param_1 + 0x40);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(*(byte **)(param_1 + 0x40) + 8);
      }
      lVar5 = lVar5 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 3 & 1) != 0) {
      lVar5 = lVar5 + ((LZCOUNT(*(ulong *)(param_1 + 0x48) | 1) ^ 0x3fU) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 4 & 1) != 0) {
      lVar5 = lVar5 + ((LZCOUNT(*(ulong *)(param_1 + 0x50) | 1) ^ 0x3fU) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 & 0x20) != 0) {
      lVar5 = lVar5 + 9;
    }
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x14) = (int)lVar5;
    return lVar5;
  }
  lVar5 = FUN_0031a310((byte *)(param_1 + 8),lVar5,param_1 + 0x14);
  return lVar5;
}


