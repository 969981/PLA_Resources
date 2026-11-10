/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00154e60; name: FUN_00154e60
 */


void FUN_00154e60(long param_1,char *param_2)

{
  size_t __n;
  void *__dest;
  
  __n = strlen(param_2);
  if (__n != 0) {
    __dest = (void *)FUN_00154c30(param_1,__n);
    memcpy(__dest,param_2,__n);
    *(size_t *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + __n;
  }
  return;
}


