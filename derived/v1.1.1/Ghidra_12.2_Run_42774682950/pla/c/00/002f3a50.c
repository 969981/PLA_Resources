/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f3a50; name: FUN_002f3a50
 */


ulong FUN_002f3a50(long *param_1,long *param_2)

{
  size_t __n;
  size_t sVar1;
  void *__s1;
  void *__s2;
  int iVar2;
  ulong uVar3;
  long local_50;
  ulong uStack_48;
  void *local_40;
  long lStack_38;
  long local_30;
  ulong uStack_28;
  void *local_20;
  long lStack_18;
  
  if (((*param_1 != 0) && (*param_2 != 0)) && (*(int *)(*param_1 + 8) == *(int *)(*param_2 + 8))) {
    uVar3 = FUN_002f3b28();
    return uVar3;
  }
  uStack_28 = param_1[1];
  local_30 = *param_1;
  lStack_18 = param_1[3];
  local_20 = (void *)param_1[2];
  uStack_48 = param_2[1];
  local_50 = *param_2;
  lStack_38 = param_2[3];
  local_40 = (void *)param_2[2];
  __n = uStack_28 & 0xff;
  if (local_30 != 0) {
    __n = uStack_28;
  }
  sVar1 = uStack_48 & 0xff;
  if (local_50 != 0) {
    sVar1 = uStack_48;
  }
  if (__n != sVar1) {
    return 0;
  }
  if (__n == 0) {
    return 1;
  }
  __s1 = local_20;
  if (local_30 == 0) {
    __s1 = (void *)(((ulong)&local_30 | 8) + 1);
  }
  __s2 = local_40;
  if (local_50 == 0) {
    __s2 = (void *)(((ulong)&local_50 | 8) + 1);
  }
  iVar2 = memcmp(__s1,__s2,__n);
  return (ulong)(iVar2 == 0);
}


