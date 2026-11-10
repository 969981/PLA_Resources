/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03398ebc; name: FUN_03398ebc
 */


void FUN_03398ebc(long param_1,long param_2,void *param_3)

{
  void *__dest;
  
  param_2 = param_2 - *(long *)(param_1 + 0x20);
  if ((param_2 < 0) ||
     (__dest = (void *)(*(long *)(param_1 + 0x10) + param_2),
     *(ulong *)(param_1 + 8) < (long)__dest + 4U)) {
    FUN_033222b0();
    return;
  }
  memcpy(__dest,param_3,4);
  return;
}


