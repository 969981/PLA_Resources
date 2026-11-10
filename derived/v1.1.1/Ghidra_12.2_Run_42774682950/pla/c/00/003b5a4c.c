/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003b5a4c; name: FUN_003b5a4c
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_003b5a4c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  
  lVar5 = FUN_00339d58(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x38);
  lVar5 = lVar5 + (long)iVar4 * 2;
  puVar7 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x40) != 0) {
    puVar7 = (undefined8 *)(*(long *)(param_1 + 0x40) + 8);
  }
  if (iVar4 != 0) {
    lVar8 = (long)iVar4 << 3;
    do {
      lVar6 = FUN_003bc11c(*puVar7);
      lVar5 = lVar6 + lVar5 + (ulong)(((uint)LZCOUNT((uint)lVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      lVar8 = lVar8 + -8;
      puVar7 = puVar7 + 1;
    } while (lVar8 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0x28);
  if ((uVar2 & 0xff) != 0) {
    if ((uVar2 & 1) != 0) {
      bVar3 = **(byte **)(param_1 + 0x48);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(*(byte **)(param_1 + 0x48) + 8);
      }
      lVar5 = lVar5 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      bVar3 = **(byte **)(param_1 + 0x50);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(*(byte **)(param_1 + 0x50) + 8);
      }
      lVar5 = lVar5 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 2 & 1) != 0) {
      bVar3 = **(byte **)(param_1 + 0x58);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(*(byte **)(param_1 + 0x58) + 8);
      }
      lVar5 = lVar5 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 3 & 1) != 0) {
      bVar3 = **(byte **)(param_1 + 0x60);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(*(byte **)(param_1 + 0x60) + 8);
      }
      lVar5 = lVar5 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
    if ((uVar2 >> 4 & 1) != 0) {
      bVar3 = **(byte **)(param_1 + 0x68);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(*(byte **)(param_1 + 0x68) + 8);
      }
      lVar5 = lVar5 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
    if ((uVar2 >> 5 & 1) != 0) {
      bVar3 = **(byte **)(param_1 + 0x70);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(*(byte **)(param_1 + 0x70) + 8);
      }
      lVar5 = lVar5 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
    if ((uVar2 >> 6 & 1) != 0) {
      bVar3 = **(byte **)(param_1 + 0x78);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(*(byte **)(param_1 + 0x78) + 8);
      }
      lVar5 = lVar5 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
    if ((uVar2 >> 7 & 1) != 0) {
      bVar3 = **(byte **)(param_1 + 0x80);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(*(byte **)(param_1 + 0x80) + 8);
      }
      lVar5 = lVar5 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
  }
  if ((uVar2 & 0xff00) != 0) {
    if ((uVar2 >> 8 & 1) != 0) {
      bVar3 = **(byte **)(param_1 + 0x88);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(*(byte **)(param_1 + 0x88) + 8);
      }
      lVar5 = lVar5 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
    if ((uVar2 >> 9 & 1) != 0) {
      bVar3 = **(byte **)(param_1 + 0x90);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(*(byte **)(param_1 + 0x90) + 8);
      }
      lVar5 = lVar5 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
    if ((uVar2 & 0x400) != 0) {
      lVar5 = lVar5 + 2;
    }
    if ((uVar2 & 0x800) != 0) {
      lVar5 = lVar5 + 3;
    }
    if ((uVar2 & 0x1000) != 0) {
      lVar5 = lVar5 + 3;
    }
    if ((uVar2 & 0x2000) != 0) {
      lVar5 = lVar5 + 3;
    }
    if ((uVar2 & 0x4000) != 0) {
      lVar5 = lVar5 + 3;
    }
    if ((uVar2 & 0x8000) != 0) {
      lVar5 = lVar5 + 3;
    }
  }
  if ((uVar2 & 0xf0000) != 0) {
    if ((uVar2 & 0x10000) != 0) {
      lVar5 = lVar5 + 3;
    }
    if ((uVar2 & 0x20000) != 0) {
      lVar5 = lVar5 + 3;
    }
    if ((uVar2 >> 0x12 & 1) != 0) {
      uVar1 = 0xb;
      if ((*(uint *)(param_1 + 0xa0) & 0x80000000) == 0) {
        uVar1 = (ulong)((((uint)LZCOUNT(*(uint *)(param_1 + 0xa0) | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1)
        ;
      }
      lVar5 = uVar1 + lVar5;
    }
    if ((uVar2 & 0x80000) != 0) {
      lVar5 = lVar5 + 3;
    }
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x2c) = (int)lVar5;
    return lVar5;
  }
  lVar5 = FUN_0031a310((byte *)(param_1 + 8),lVar5,param_1 + 0x2c);
  return lVar5;
}


