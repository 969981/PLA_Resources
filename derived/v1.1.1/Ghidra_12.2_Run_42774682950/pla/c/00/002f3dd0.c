/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f3dd0; name: FUN_002f3dd0
 */


ulong FUN_002f3dd0(long *param_1,long *param_2)

{
  size_t __n;
  size_t sVar1;
  void *__s1;
  void *__s2;
  int iVar2;
  ulong uVar3;
  long local_90;
  ulong uStack_88;
  void *pvStack_80;
  long lStack_78;
  long local_70;
  ulong uStack_68;
  void *pvStack_60;
  long lStack_58;
  long local_50;
  ulong uStack_48;
  void *local_40;
  long lStack_38;
  long local_30;
  ulong uStack_28;
  void *local_20;
  long lStack_18;
  
  if ((*param_1 == 0) || (*param_2 == 0)) {
    uStack_68 = param_1[1];
    local_70 = *param_1;
    lStack_58 = param_1[3];
    pvStack_60 = (void *)param_1[2];
    uStack_88 = param_2[1];
    local_90 = *param_2;
    lStack_78 = param_2[3];
    pvStack_80 = (void *)param_2[2];
    if ((local_70 != 0) && ((local_90 != 0 && (*(int *)(local_70 + 8) == *(int *)(local_90 + 8)))))
    {
      uVar3 = FUN_002f3b28(local_70,&local_70,&local_90);
      return uVar3;
    }
    __n = uStack_68 & 0xff;
    if (local_70 != 0) {
      __n = uStack_68;
    }
    sVar1 = uStack_88 & 0xff;
    if (local_90 != 0) {
      sVar1 = uStack_88;
    }
    if (__n == sVar1) {
      if (__n == 0) {
        return 1;
      }
      __s1 = pvStack_60;
      if (local_70 == 0) {
        __s1 = (void *)(((ulong)&local_30 | 8) + 1);
      }
      __s2 = pvStack_80;
      if (local_90 == 0) {
        __s2 = (void *)(((ulong)&local_50 | 8) + 1);
      }
      local_50 = local_90;
      uStack_48 = uStack_88;
      local_40 = pvStack_80;
      lStack_38 = lStack_78;
      local_30 = local_70;
      uStack_28 = uStack_68;
      local_20 = pvStack_60;
      lStack_18 = lStack_58;
      iVar2 = memcmp(__s1,__s2,__n);
      return (ulong)(iVar2 == 0);
    }
  }
  else if (param_1[1] == param_2[1]) {
    return (ulong)(param_1[2] == param_2[2]);
  }
  return 0;
}


