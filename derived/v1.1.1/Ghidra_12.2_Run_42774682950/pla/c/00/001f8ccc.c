/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f8ccc; name: FUN_001f8ccc
 */


void * FUN_001f8ccc(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_002044c4(param_2);
  if (__dest != (void *)0x0) {
    memcpy(__dest,param_1,param_2);
  }
  return __dest;
}


