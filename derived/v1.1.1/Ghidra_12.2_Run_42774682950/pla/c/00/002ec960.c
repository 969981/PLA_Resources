/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ec960; name: FUN_002ec960
 */


void * FUN_002ec960(char *param_1,int param_2,ulong param_3)

{
  size_t sVar1;
  size_t __n;
  void *__s;
  
  __n = strlen(param_1);
  sVar1 = __n;
  if (__n <= param_3) {
    sVar1 = param_3;
  }
  __s = (void *)FUN_002ebd50(sVar1 + 1);
  memset(__s,param_2,sVar1 - __n);
  memcpy((undefined1 *)((long)__s + sVar1) + -__n,param_1,__n);
  *(undefined1 *)((long)__s + sVar1) = 0;
  return __s;
}


