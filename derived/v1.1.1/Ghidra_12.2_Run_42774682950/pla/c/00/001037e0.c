/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001037e0; name: calloc
 */


void * calloc(size_t __nmemb,size_t __size)

{
  long lVar1;
  long *plVar2;
  void *__s;
  long *plVar3;
  
  plVar2 = DAT_043f1798;
  lVar1 = tpidr_el0;
  plVar3 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar3 = plVar2;
  }
  __s = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,__size * __nmemb,8);
  if (__s != (void *)0x0) {
    memset(__s,0,__size * __nmemb);
  }
  return __s;
}


