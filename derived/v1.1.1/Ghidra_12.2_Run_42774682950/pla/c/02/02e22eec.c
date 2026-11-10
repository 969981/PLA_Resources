/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e22eec; name: FUN_02e22eec
 */


void * FUN_02e22eec(void *param_1,size_t param_2,undefined8 param_3)

{
  void *__dest;
  
  __dest = (void *)(**(code **)(*(long *)*DAT_044094f8 + 0x10))((long *)*DAT_044094f8,param_3);
  if ((param_1 != (void *)0x0) && (__dest != (void *)0x0)) {
    memcpy(__dest,param_1,param_2);
    (**(code **)(*(long *)*DAT_044094f8 + 0x18))((long *)*DAT_044094f8,param_1);
  }
  return __dest;
}


