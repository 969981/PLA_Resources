/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0013e890; name: FUN_0013e890
 */


int FUN_0013e890(long *param_1,long param_2,long param_3,void *param_4,int param_5,long param_6,
                long param_7)

{
  void *pvVar1;
  undefined1 *__s;
  size_t __n;
  void *pvVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulong __n_00;
  undefined1 auStack_60 [32];
  
  if (param_3 - param_2 < 8) {
    return -1;
  }
  *param_1 = param_2 - param_7;
  param_1[1] = param_2;
  pvVar1 = (void *)((long)param_4 + (long)param_5);
  param_1[8] = 0x1000000000000;
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 9) = 0x10000;
  pvVar2 = param_4;
  if (0xf < (ulong)(param_6 - (long)param_4)) {
    pvVar2 = pvVar1;
    if ((void *)(param_6 - 0x10U) <= pvVar1) {
      pvVar2 = (void *)(param_6 - 0x10U);
    }
    pvVar2 = (void *)FUN_0013e9b0(param_1,param_4,pvVar2);
    if (pvVar1 < pvVar2) {
      return -1;
    }
    uVar4 = *(uint *)(param_1 + 8);
    if (1 < uVar4) goto LAB_0013e978;
  }
  __n_00 = (long)pvVar1 - (long)pvVar2;
  __s = auStack_60 + __n_00;
  __n = 0;
  if (__n_00 < 0x20) {
    __n = 0x20 - __n_00;
  }
  memset(__s,0,__n);
  memcpy(auStack_60,pvVar2,__n_00);
  puVar3 = (undefined1 *)FUN_0013e9b0(param_1,auStack_60,__s);
  if (__s < puVar3) {
    return -1;
  }
  pvVar2 = (void *)((long)pvVar2 + ((long)puVar3 - (long)auStack_60));
  uVar4 = *(uint *)(param_1 + 8);
LAB_0013e978:
  if ((uVar4 == 2) && (param_1[1] == param_1[2])) {
    return (int)pvVar2 - (int)param_4;
  }
  return -1;
}


