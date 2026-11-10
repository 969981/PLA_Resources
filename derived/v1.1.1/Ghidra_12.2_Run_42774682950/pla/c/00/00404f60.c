/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00404f60; name: FUN_00404f60
 */


void * FUN_00404f60(char *param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  void *__dest;
  char *pcVar1;
  size_t __n;
  
  if (param_1 == (char *)0x0) {
    return (void *)0x0;
  }
  pcVar1 = param_1;
  if (param_2 != 0) {
    do {
      if (*pcVar1 == '\0') break;
      param_2 = param_2 + -1;
      pcVar1 = pcVar1 + 1;
    } while (param_2 != 0);
  }
  __n = (long)pcVar1 - (long)param_1;
  __dest = (void *)FUN_00400260(__n + 1,param_3,param_4);
  if (__dest != (void *)0x0) {
    memcpy(__dest,param_1,__n);
    *(undefined1 *)((long)__dest + __n) = 0;
  }
  return __dest;
}


