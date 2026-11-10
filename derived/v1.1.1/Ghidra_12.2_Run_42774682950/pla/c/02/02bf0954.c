/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bf0954; name: FUN_02bf0954
 */


void FUN_02bf0954(long *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *param_1;
  lVar3 = 0;
  while (lVar3 = lVar3 + 8, lVar3 != 0x200) {
    if (lVar3 != 0) {
      *(ulong *)(lVar4 + 0x28 + lVar3) = *(ulong *)(lVar4 + 0x28 + lVar3) & 1;
    }
  }
  *(ulong *)(*param_1 + 0x28) = *(ulong *)(*param_1 + 0x28) | 1;
  *(ulong *)(*param_1 + 0x30) = *(ulong *)(*param_1 + 0x30) | 2;
  *(ulong *)(*param_1 + 0x38) = *(ulong *)(*param_1 + 0x38) | 4;
  *(ulong *)(*param_1 + 0x40) = *(ulong *)(*param_1 + 0x40) | 8;
  *(ulong *)(*param_1 + 0x48) = *(ulong *)(*param_1 + 0x48) | 0x10;
  *(ulong *)(*param_1 + 0x50) = *(ulong *)(*param_1 + 0x50) | 0x20;
  *(ulong *)(*param_1 + 0x58) = *(ulong *)(*param_1 + 0x58) | 0x40;
  *(ulong *)(*param_1 + 0x60) = *(ulong *)(*param_1 + 0x60) | 0x80;
  *(ulong *)(*param_1 + 0x68) = *(ulong *)(*param_1 + 0x68) | 0x100;
  *(ulong *)(*param_1 + 0x70) = *(ulong *)(*param_1 + 0x70) | 0x200;
  *(ulong *)(*param_1 + 0x78) = *(ulong *)(*param_1 + 0x78) | 0x400;
  *(ulong *)(*param_1 + 0x80) = *(ulong *)(*param_1 + 0x80) | 0x800;
  *(ulong *)(*param_1 + 0x88) = *(ulong *)(*param_1 + 0x88) | 0x1000;
  *(ulong *)(*param_1 + 0x90) = *(ulong *)(*param_1 + 0x90) | 0x2000;
  *(ulong *)(*param_1 + 0x98) = *(ulong *)(*param_1 + 0x98) | 0x4000;
  *(ulong *)(*param_1 + 0xa0) = *(ulong *)(*param_1 + 0xa0) | 0x8000;
  *(ulong *)(*param_1 + 0xa8) = *(ulong *)(*param_1 + 0xa8) | 0x10000;
  *(ulong *)(*param_1 + 0xb0) = *(ulong *)(*param_1 + 0xb0) | 0x20000;
  *(ulong *)(*param_1 + 0xb8) = *(ulong *)(*param_1 + 0xb8) | 0x40000;
  *(ulong *)(*param_1 + 0xc0) = *(ulong *)(*param_1 + 0xc0) | 0x80000;
  *(ulong *)(*param_1 + 200) = *(ulong *)(*param_1 + 200) | 0x100000;
  *(ulong *)(*param_1 + 0xd0) = *(ulong *)(*param_1 + 0xd0) | 0x200000;
  *(ulong *)(*param_1 + 0xd8) = *(ulong *)(*param_1 + 0xd8) | 0x400000;
  *(ulong *)(*param_1 + 0xe0) = *(ulong *)(*param_1 + 0xe0) | 0x800000;
  *(ulong *)(*param_1 + 0xe8) = *(ulong *)(*param_1 + 0xe8) | 0x1000000;
  *(ulong *)(*param_1 + 0xf0) = *(ulong *)(*param_1 + 0xf0) | 0x2000000;
  *(ulong *)(*param_1 + 0xf8) = *(ulong *)(*param_1 + 0xf8) | 0x4000000;
  *(ulong *)(*param_1 + 0x100) = *(ulong *)(*param_1 + 0x100) | 0x8000000;
  *(ulong *)(*param_1 + 0x108) = *(ulong *)(*param_1 + 0x108) | 0x10000000;
  *(ulong *)(*param_1 + 0x110) = *(ulong *)(*param_1 + 0x110) | 0x20000000;
  *(ulong *)(*param_1 + 0x118) = *(ulong *)(*param_1 + 0x118) | 0x40000000;
  *(ulong *)(*param_1 + 0x120) = *(ulong *)(*param_1 + 0x120) | 0x80000000;
  if (param_2 != 0) {
    lVar3 = 0;
    do {
      iVar1 = *(int *)(param_2 + lVar3);
      iVar2 = ((int *)(param_2 + lVar3))[1];
      if (iVar1 != 0 && iVar2 != 0) {
        lVar6 = (long)iVar1 * 8;
        lVar4 = *param_1 + 0x28;
        lVar5 = (long)iVar2 * 8;
        *(ulong *)(lVar4 + lVar6) = *(ulong *)(lVar4 + lVar6) | 1L << ((long)iVar2 & 0x3fU);
        *(ulong *)(lVar4 + lVar5) = *(ulong *)(lVar4 + lVar5) | 1L << ((long)iVar1 & 0x3fU);
      }
      lVar3 = lVar3 + 8;
    } while (lVar3 != 0x100);
  }
  return;
}


