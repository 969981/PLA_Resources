/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0044e550; name: FUN_0044e550
 */


int FUN_0044e550(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  size_t __n;
  ulong uVar3;
  ulong uVar4;
  
  FUN_00456b10(param_1,0xffffffff,0);
  FUN_00456b10(param_2,0xffffffff,0);
  uVar4 = (*(ulong *)(param_1 + 0x130) & 0xff00ff00ff00ff00) >> 8 |
          (*(ulong *)(param_1 + 0x130) & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  uVar3 = uVar4 >> 0x20 | uVar4 << 0x20;
  uVar4 = (*(ulong *)(param_2 + 0x130) & 0xff00ff00ff00ff00) >> 8 |
          (*(ulong *)(param_2 + 0x130) & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
  if (uVar3 == uVar4) {
    uVar4 = (*(ulong *)(param_1 + 0x138) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(param_1 + 0x138) & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    uVar3 = uVar4 >> 0x20 | uVar4 << 0x20;
    uVar4 = (*(ulong *)(param_2 + 0x138) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(param_2 + 0x138) & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
    if (uVar3 == uVar4) {
      uVar1 = (*(uint *)(param_1 + 0x140) & 0xff00ff00) >> 8 |
              (*(uint *)(param_1 + 0x140) & 0xff00ff) << 8;
      uVar3 = (ulong)(uVar1 >> 0x10 | uVar1 << 0x10);
      uVar1 = (*(uint *)(param_2 + 0x140) & 0xff00ff00) >> 8 |
              (*(uint *)(param_2 + 0x140) & 0xff00ff) << 8;
      uVar4 = (ulong)(uVar1 >> 0x10 | uVar1 << 0x10);
      if (uVar3 == uVar4) goto LAB_0044e5e8;
    }
  }
  iVar2 = 1;
  if (uVar3 < uVar4) {
    iVar2 = -1;
  }
  if (iVar2 != 0) {
    return iVar2;
  }
LAB_0044e5e8:
  if (*(int *)(param_1 + 0x80) != 0) {
    return 0;
  }
  if (*(int *)(param_2 + 0x80) != 0) {
    return 0;
  }
  __n = *(size_t *)(param_1 + 0x78);
  if ((long)__n < *(long *)(param_2 + 0x78)) {
    return -1;
  }
  if (*(long *)(param_2 + 0x78) < (long)__n) {
    return 1;
  }
  iVar2 = memcmp(*(void **)(param_1 + 0x70),*(void **)(param_2 + 0x70),__n);
  return iVar2;
}


