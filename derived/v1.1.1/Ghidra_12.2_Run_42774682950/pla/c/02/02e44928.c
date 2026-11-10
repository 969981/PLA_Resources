/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e44928; name: FUN_02e44928
 */


void * FUN_02e44928(undefined8 param_1,void *param_2,ulong param_3,undefined8 param_4)

{
  void *__dest;
  
  __dest = (void *)(*DAT_0442d140)(9,param_4,0x10);
  if ((param_2 != (void *)0x0) && (__dest != (void *)0x0)) {
    memcpy(__dest,param_2,param_3 & 0xffffffff);
    (*DAT_0442d158)(9,param_2);
  }
  return __dest;
}


