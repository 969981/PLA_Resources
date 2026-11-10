/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016aa5a8; name: FUN_016aa5a8
 */


void FUN_016aa5a8(long param_1,long *param_2)

{
  long lVar1;
  size_t __n;
  void *__dest;
  ulong uVar2;
  void *__src;
  
  lVar1 = *(long *)(param_1 + 0x1d0) - (long)*(void **)(param_1 + 0x1c8);
  if (lVar1 != 0) {
    uVar2 = 0;
    __dest = *(void **)(param_1 + 0x1c8);
    do {
      __src = (void *)((long)__dest + 0xb0);
      if (*(long *)((long)__dest + 0xa0) == *param_2) {
        __n = *(long *)(param_1 + 0x1d0) - (long)__src;
        if (__n != 0) {
          memmove(__dest,__src,__n);
        }
        *(long *)(param_1 + 0x1d0) = (long)__src + ((long)__n >> 4) * 0x10 + -0xb0;
        return;
      }
      uVar2 = uVar2 + 1;
      __dest = __src;
    } while (uVar2 < (ulong)((lVar1 >> 4) * 0x2e8ba2e8ba2e8ba3));
  }
  return;
}


