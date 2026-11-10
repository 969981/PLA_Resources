/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027fb814; name: FUN_027fb814
 */


void FUN_027fb814(undefined8 *param_1,void *param_2,undefined8 param_3,void *param_4,long param_5,
                 undefined8 param_6)

{
  size_t __n;
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *__src;
  long *plVar6;
  
  __src = (void *)param_1[4];
  if (__src == (void *)0x0) {
    FUN_027fb6d0(param_1,param_2,param_6);
    pvVar3 = (void *)((long)param_2 + param_5);
  }
  else {
    pvVar3 = param_2;
    if (__src != param_4) {
      memmove(param_2,__src,(long)param_4 - (long)__src);
      pvVar3 = (void *)((long)param_2 + ((long)param_4 - (long)__src));
    }
    FUN_027fb6d0(param_1,pvVar3,param_6);
    pvVar3 = (void *)((long)pvVar3 + param_5);
    __n = (long)__src + (param_1[5] - (long)param_4);
    if (__n != 0) {
      memmove(pvVar3,param_4,__n);
      pvVar3 = (void *)((long)pvVar3 + __n);
    }
    plVar6 = (long *)*param_1;
    uVar4 = param_1[6];
    uVar5 = param_1[4];
    uVar2 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar2 & 1) != 0) {
      lVar1 = tpidr_el0;
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar6,uVar5,uVar4,1);
        goto LAB_027fb928;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,uVar5,uVar4,1);
  }
LAB_027fb928:
  param_1[4] = param_2;
  param_1[5] = (long)pvVar3 - (long)param_2;
  param_1[6] = param_3;
  return;
}


