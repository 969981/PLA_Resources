/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0033eca8; name: FUN_0033eca8
 */


void FUN_0033eca8(long param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *__src;
  size_t __n;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  long lVar13;
  
  iVar2 = (int)((ulong)(*(long *)(param_1 + 0xc0) - *(long *)(param_1 + 0xb8)) >> 3) * -0x55555555;
  puVar1 = *(undefined4 **)(param_1 + 0x1a0);
  uVar7 = (undefined4)((ulong)(*(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8)) >> 3);
  uVar9 = (undefined4)((ulong)(*(long *)(param_1 + 0xd8) - *(long *)(param_1 + 0xd0)) >> 3);
  uVar6 = (undefined4)((ulong)(*(long *)(param_1 + 0x108) - *(long *)(param_1 + 0x100)) >> 3);
  uVar8 = (undefined4)((ulong)(*(long *)(param_1 + 0x120) - *(long *)(param_1 + 0x118)) >> 3);
  uVar10 = (undefined4)((ulong)(*(long *)(param_1 + 0x1b8) - *(long *)(param_1 + 0x1b0)) >> 3);
  uVar11 = (undefined4)((ulong)(*(long *)(param_1 + 0x1d0) - *(long *)(param_1 + 0x1c8)) >> 3);
  uVar12 = (undefined4)((ulong)(*(long *)(param_1 + 0x1e8) - *(long *)(param_1 + 0x1e0)) >> 4);
  if (puVar1 < *(undefined4 **)(param_1 + 0x1a8)) {
    *puVar1 = uVar9;
    puVar1[1] = uVar7;
    puVar1[2] = uVar6;
    puVar1[3] = uVar8;
    puVar1[4] = iVar2;
    puVar1[5] = uVar10;
    puVar1[6] = uVar11;
    puVar1[7] = uVar12;
    *(long *)(param_1 + 0x1a0) = *(long *)(param_1 + 0x1a0) + 0x20;
    return;
  }
  lVar4 = *(long *)(param_1 + 0x198);
  lVar13 = (long)puVar1 - lVar4 >> 5;
  uVar5 = lVar13 + 1;
  if (uVar5 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = (long)*(undefined4 **)(param_1 + 0x1a8) - lVar4;
  if ((ulong)(lVar4 >> 5) < 0x3ffffffffffffff) {
    uVar3 = lVar4 >> 4;
    if (uVar5 <= uVar3) {
      uVar5 = uVar3;
    }
    if (uVar5 == 0) {
      lVar4 = 0;
      goto LAB_0033edbc;
    }
  }
  else {
    uVar5 = 0x7ffffffffffffff;
  }
  lVar4 = FUN_002e2e80(PTR_FUN_04373078,uVar5 << 5);
LAB_0033edbc:
  puVar1 = (undefined4 *)(lVar4 + lVar13 * 0x20);
  *puVar1 = uVar9;
  puVar1[1] = uVar7;
  puVar1[2] = uVar6;
  puVar1[3] = uVar8;
  puVar1[4] = iVar2;
  puVar1[5] = uVar10;
  puVar1[6] = uVar11;
  puVar1[7] = uVar12;
  __src = *(void **)(param_1 + 0x198);
  __n = *(long *)(param_1 + 0x1a0) - (long)__src;
  if (0 < (long)__n) {
    memcpy((void *)((long)puVar1 - __n),__src,__n);
    __src = *(void **)(param_1 + 0x198);
  }
  *(void **)(param_1 + 0x198) = (void *)((long)puVar1 - __n);
  *(undefined4 **)(param_1 + 0x1a0) = puVar1 + 8;
  *(ulong *)(param_1 + 0x1a8) = lVar4 + uVar5 * 0x20;
  if (__src == (void *)0x0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088);
  return;
}


