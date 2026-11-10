/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013d4690; name: FUN_013d4690
 */


void FUN_013d4690(long *param_1)

{
  uint uVar1;
  uint uVar2;
  void *__s;
  long lVar3;
  size_t __n;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 == 0) {
    __s = (void *)*param_1;
    uVar4 = 7;
  }
  else {
    uVar2 = 0x40 - uVar1;
    uVar4 = (ulong)uVar2;
    if (6 < uVar2) {
      uVar4 = 7;
    }
    *(ulong *)*param_1 =
         *(ulong *)*param_1 &
         (0xffffffffffffffffU >> (uVar2 - uVar4 & 0x3f) & -1L << ((ulong)uVar1 & 0x3f) ^
         0xffffffffffffffff);
    uVar4 = uVar4 ^ 7;
    __s = (void *)(*param_1 + 8);
    *param_1 = (long)__s;
  }
  __n = (uVar4 >> 6) * 8;
  memset(__s,0,__n);
  if ((uVar4 & 0x3f) != 0) {
    lVar3 = *param_1;
    *param_1 = lVar3 + __n;
    *(ulong *)(lVar3 + __n) =
         *(ulong *)(lVar3 + __n) &
         (0xffffffffffffffffU >> (-(uVar4 & 0x3f) & 0x3f) ^ 0xffffffffffffffff);
  }
  return;
}


