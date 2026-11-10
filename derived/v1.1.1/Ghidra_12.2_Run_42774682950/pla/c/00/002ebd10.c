/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ebd10; name: FUN_002ebd10
 */


void FUN_002ebd10(size_t param_1)

{
  void *__s;
  
  __s = (void *)0x0;
  if ((param_1 != 0) && (__s = (void *)(*(code *)PTR_malloc_04152f78)(param_1), __s == (void *)0x0))
  {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  memset(__s,0,param_1);
  return;
}


