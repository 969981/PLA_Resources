/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0c03c; name: FUN_02f0c03c
 */


undefined8 FUN_02f0c03c(void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  void *__dest;
  void *__src;
  
  uVar2 = *(uint *)((long)param_1 + 0x10);
  uVar1 = *(int *)((long)param_1 + 0x14) + param_2;
  __src = *(void **)((long)param_1 + 8);
  __dest = param_1;
  if (1 < uVar1) {
    __dest = (void *)(*DAT_0442d140)(0,(ulong)uVar1 << 2,4);
  }
  if ((__src == (void *)0x0) || (__dest == __src || __dest == (void *)0x0)) {
    if (__dest == (void *)0x0) {
      return 0;
    }
  }
  else {
    memcpy(__dest,__src,((ulong)uVar2 & 0x3fffffff) << 2);
    if (param_1 != __src) {
      (*DAT_0442d158)(0,__src);
    }
  }
  *(void **)((long)param_1 + 8) = __dest;
  *(uint *)((long)param_1 + 0x14) = uVar1;
  return 1;
}


