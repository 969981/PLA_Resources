/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003b6890; name: FUN_003b6890
 */


long FUN_003b6890(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  lVar3 = FUN_00339d58(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x38);
  lVar3 = lVar3 + (long)iVar2 * 2;
  puVar5 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x40) != 0) {
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x40) + 8);
  }
  if (iVar2 != 0) {
    lVar6 = (long)iVar2 << 3;
    do {
      lVar4 = FUN_003bc11c(*puVar5);
      lVar3 = lVar4 + lVar3 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      lVar6 = lVar6 + -8;
      puVar5 = puVar5 + 1;
    } while (lVar6 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar3 = lVar3 + 2;
    }
    if ((uVar1 & 2) != 0) {
      lVar3 = lVar3 + 2;
    }
    if ((uVar1 & 4) != 0) {
      lVar3 = lVar3 + 2;
    }
    if ((uVar1 & 8) != 0) {
      lVar3 = lVar3 + 2;
    }
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x2c) = (int)lVar3;
    return lVar3;
  }
  lVar3 = FUN_0031a310((byte *)(param_1 + 8),lVar3,param_1 + 0x2c);
  return lVar3;
}


