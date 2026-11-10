/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0282e634; name: FUN_0282e634
 */


void FUN_0282e634(undefined8 *param_1,void *param_2,undefined8 param_3,void *param_4,
                 undefined8 param_5)

{
  size_t __n;
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  void *__src;
  long *plVar5;
  
  __src = (void *)param_1[4];
  if (__src == (void *)0x0) {
    FUN_0282e4a0(param_1,param_2,param_5);
    pvVar3 = (void *)((long)param_2 + 0x30);
  }
  else {
    pvVar3 = param_2;
    if (__src != param_4) {
      memmove(param_2,__src,(long)param_4 - (long)__src);
      pvVar3 = (void *)((long)param_2 + ((long)param_4 - (long)__src));
    }
    FUN_0282e4a0(param_1,pvVar3,param_5);
    pvVar3 = (void *)((long)pvVar3 + 0x30);
    __n = (long)__src + (param_1[5] * 0x30 - (long)param_4);
    if (__n != 0) {
      memmove(pvVar3,param_4,__n);
      pvVar3 = (void *)((long)pvVar3 + __n);
    }
    lVar2 = param_1[6];
    plVar5 = (long *)*param_1;
    uVar4 = param_1[4];
    uVar1 = FUN_02bcc75c(plVar5);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5,uVar4,lVar2 * 0x30,0x10);
    }
    else {
      FUN_02bcc824(plVar5,uVar4,lVar2 * 0x30,0x10);
    }
  }
  param_1[6] = param_3;
  param_1[4] = param_2;
  param_1[5] = ((long)pvVar3 - (long)param_2 >> 4) * -0x5555555555555555;
  return;
}


