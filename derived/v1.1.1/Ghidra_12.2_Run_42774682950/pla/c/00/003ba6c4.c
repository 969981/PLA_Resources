/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ba6c4; name: FUN_003ba6c4
 */


long FUN_003ba6c4(long param_1)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  lVar4 = FUN_00339d58(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0x38);
  lVar4 = lVar4 + (long)iVar3 * 2;
  puVar6 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x40) != 0) {
    puVar6 = (undefined8 *)(*(long *)(param_1 + 0x40) + 8);
  }
  if (iVar3 != 0) {
    lVar7 = (long)iVar3 << 3;
    do {
      lVar5 = FUN_003bc11c(*puVar6);
      lVar4 = lVar5 + lVar4 + (ulong)(((uint)LZCOUNT((uint)lVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      lVar7 = lVar7 + -8;
      puVar6 = puVar6 + 1;
    } while (lVar7 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0x28);
  if ((uVar2 & 3) != 0) {
    if ((uVar2 & 1) != 0) {
      lVar4 = lVar4 + 3;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      uVar1 = 0xc;
      if ((*(uint *)(param_1 + 0x4c) & 0x80000000) == 0) {
        uVar1 = (ulong)((((uint)LZCOUNT(*(uint *)(param_1 + 0x4c) | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2)
        ;
      }
      lVar4 = uVar1 + lVar4;
    }
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x2c) = (int)lVar4;
    return lVar4;
  }
  lVar4 = FUN_0031a310((byte *)(param_1 + 8),lVar4,param_1 + 0x2c);
  return lVar4;
}


