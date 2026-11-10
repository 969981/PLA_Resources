/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ef698; name: FUN_001ef698
 */


ulong FUN_001ef698(undefined8 param_1,void *param_2,size_t param_3)

{
  void *__dest;
  ulong uVar1;
  
  if ((param_2 == (void *)0x0) || (param_3 == 0)) {
    uVar1 = FUN_001e4144(param_1,param_2);
    return uVar1;
  }
  __dest = (void *)FUN_002044c4(param_3 + 1);
  if (__dest == (void *)0x0) {
    uVar1 = 0x1b;
  }
  else {
    memcpy(__dest,param_2,param_3);
    *(undefined1 *)((long)__dest + param_3) = 0;
    uVar1 = FUN_001e4144(param_1,__dest);
    uVar1 = uVar1 & 0xffffffff;
    FUN_002044d4(__dest);
  }
  return uVar1;
}


