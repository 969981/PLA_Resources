/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0091c8c0; name: FUN_0091c8c0
 */


void FUN_0091c8c0(long param_1,undefined8 param_2)

{
  void *__src;
  long lVar1;
  size_t __n;
  void *__dest;
  
  __dest = (void *)FUN_0091c9f0(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                                param_2);
  lVar1 = *(long *)(param_1 + 0x78) - (long)__dest;
  if (lVar1 != 0) {
    __src = (void *)((long)__dest + lVar1);
    __n = *(long *)(param_1 + 0x78) - (long)__src;
    if (__n != 0) {
      memmove(__dest,__src,__n);
    }
    *(size_t *)(param_1 + 0x78) = (long)__dest + __n;
  }
  FUN_0091ca88((undefined8 *)(param_1 + 0x70),param_2);
  return;
}


