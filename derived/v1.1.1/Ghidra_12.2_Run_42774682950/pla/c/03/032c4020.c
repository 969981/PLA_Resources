/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c4020; name: FUN_032c4020
 */


void * FUN_032c4020(long *param_1,uint param_2,ulong param_3)

{
  size_t __n;
  void *pvVar1;
  ulong uVar2;
  
  uVar2 = param_1[1] - *param_1;
  __n = uVar2 - param_3;
  if (uVar2 < param_3 || __n == 0) {
    return (void *)0x0;
  }
  pvVar1 = memchr((void *)(*param_1 + param_3),param_2 & 0xff,__n);
  return pvVar1;
}


