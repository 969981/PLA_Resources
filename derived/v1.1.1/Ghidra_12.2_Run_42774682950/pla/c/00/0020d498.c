/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020d498; name: FUN_0020d498
 */


void * FUN_0020d498(void *param_1,long param_2,undefined8 param_3)

{
  void *__dest;
  size_t __n;
  
  __n = param_2 << 3;
  if (__n == 0) {
    __dest = (void *)0x0;
  }
  else {
    __dest = (void *)FUN_0020c738(param_3,__n);
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_1,__n);
    }
  }
  return __dest;
}


