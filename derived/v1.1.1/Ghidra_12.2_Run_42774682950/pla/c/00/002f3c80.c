/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f3c80; name: FUN_002f3c80
 */


int FUN_002f3c80(long *param_1,long param_2)

{
  void *__s1;
  size_t __n;
  int iVar1;
  
  __s1 = (void *)((long)param_1 + 9);
  __n = param_1[1] & 0xff;
  if (*param_1 != 0) {
    __s1 = (void *)param_1[2];
    __n = param_1[1];
  }
  if (__n == *(size_t *)(param_2 + 8)) {
    if (__n == 0) {
      return 0;
    }
    if (__s1 != (void *)0x0) {
      iVar1 = memcmp(__s1,*(void **)(param_2 + 0x10),__n);
      return iVar1;
    }
  }
  return 1;
}


