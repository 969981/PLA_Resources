/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00154e10; name: FUN_00154e10
 */


void FUN_00154e10(long param_1,void *param_2,size_t param_3)

{
  void *__dest;
  
  if (param_3 != 0) {
    __dest = (void *)FUN_00154c30(param_1,param_3);
    memcpy(__dest,param_2,param_3);
    *(size_t *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_3;
  }
  return;
}


