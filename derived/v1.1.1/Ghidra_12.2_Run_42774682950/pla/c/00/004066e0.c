/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004066e0; name: thunk_FUN_004002a0
 */


void * thunk_FUN_004002a0(size_t param_1)

{
  void *__s;
  
  if (PTR_FUN_04157670 == (undefined *)0x0 || PTR_FUN_04157670 == PTR_FUN_04374188) {
    if (param_1 == 0) {
      return (void *)0x0;
    }
    if ((DAT_0439cd98 & 1) == 0) {
      DAT_0439cd98 = 1;
    }
    __s = malloc(param_1);
  }
  else {
    __s = (void *)(*(code *)PTR_FUN_04157670)(param_1);
  }
  if (__s == (void *)0x0) {
    return (void *)0x0;
  }
  memset(__s,0,param_1);
  return __s;
}


