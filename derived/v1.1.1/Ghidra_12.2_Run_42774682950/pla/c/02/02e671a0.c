/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e671a0; name: FUN_02e671a0
 */


void * FUN_02e671a0(void *param_1,void *param_2,ulong param_3,ulong param_4)

{
  void *__dest;
  
  __dest = param_1;
  if (1 < param_4) {
    __dest = (void *)FUN_02f59e40(0,param_4,4);
  }
  if ((((param_2 != (void *)0x0) && (__dest != param_2)) && (__dest != (void *)0x0)) &&
     (memcpy(__dest,param_2,param_3 & 0xffffffff), param_1 != param_2)) {
    FUN_02f59e70(0,param_2);
  }
  return __dest;
}


