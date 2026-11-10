/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4488c; name: FUN_02e4488c
 */


undefined8 FUN_02e4488c(undefined8 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  void *__dest;
  void *__src;
  
  iVar2 = *(int *)(param_1 + 1);
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  __src = (void *)*param_1;
  __dest = (void *)(*DAT_0442d140)(9,(ulong)uVar1 * 0x158,0x10);
  if ((__src == (void *)0x0) || (__dest == (void *)0x0)) {
    if (__dest == (void *)0x0) {
      return 0;
    }
  }
  else {
    memcpy(__dest,__src,(ulong)(uint)(iVar2 * 0x158));
    (*DAT_0442d158)(9,__src);
  }
  *param_1 = __dest;
  *(uint *)((long)param_1 + 0xc) = uVar1;
  return 1;
}


