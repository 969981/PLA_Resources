/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002fee98; name: FUN_002fee98
 */


long FUN_002fee98(long *param_1,uint param_2,ulong param_3)

{
  long lVar1;
  size_t __n;
  void *pvVar2;
  long lVar3;
  
  __n = param_1[1] - param_3;
  if ((ulong)param_1[1] < param_3 || __n == 0) {
    return -1;
  }
  lVar3 = *param_1;
  pvVar2 = memchr((void *)(lVar3 + param_3),param_2 & 0xff,__n);
  lVar1 = -1;
  if (pvVar2 != (void *)0x0) {
    lVar1 = (long)pvVar2 - lVar3;
  }
  return lVar1;
}


