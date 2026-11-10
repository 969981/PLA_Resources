/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01121528; name: FUN_01121528
 */


void FUN_01121528(long param_1,void *param_2)

{
  void *__src;
  long lVar1;
  
  if (*(char *)((long)param_2 + 0xe) == '\0') {
    return;
  }
  __src = (void *)(param_1 + 0x7470);
  lVar1 = -0x30;
  while( true ) {
    memcpy((void *)((long)__src + 0x4f0),(void *)((long)__src + 0x278),0x278);
    if (lVar1 == 0) break;
    memcpy((void *)((long)__src + 0x278),__src,0x278);
    __src = (void *)((long)__src + -0x4f0);
    lVar1 = lVar1 + 2;
  }
  memcpy((void *)(param_1 + 0x68),param_2,0x278);
  return;
}


