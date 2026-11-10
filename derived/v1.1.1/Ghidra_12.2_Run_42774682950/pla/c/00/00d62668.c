/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d62668; name: FUN_00d62668
 */


void FUN_00d62668(undefined8 *param_1,void *param_2,undefined8 param_3,void *param_4,long param_5,
                 undefined8 param_6)

{
  size_t __n;
  long lVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  void *__src;
  long *plVar6;
  
  __src = (void *)param_1[4];
  if (__src == (void *)0x0) {
    FUN_00d62524(param_1,param_2,param_6);
    pvVar4 = (void *)((long)param_2 + param_5 * 0x10);
  }
  else {
    pvVar4 = param_2;
    if (__src != param_4) {
      memmove(param_2,__src,(long)param_4 - (long)__src);
      pvVar4 = (void *)((long)param_2 + ((long)param_4 - (long)__src));
    }
    FUN_00d62524(param_1,pvVar4,param_6);
    pvVar4 = (void *)((long)pvVar4 + param_5 * 0x10);
    __n = (long)__src + (param_1[5] * 0x10 - (long)param_4);
    if (__n != 0) {
      memmove(pvVar4,param_4,__n);
      pvVar4 = (void *)((long)pvVar4 + __n);
    }
    lVar3 = param_1[6];
    plVar6 = (long *)*param_1;
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
        FUN_02bcc824(plVar6,uVar5,lVar3 << 4,8);
        goto LAB_00d62780;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,uVar5,lVar3 << 4,8);
  }
LAB_00d62780:
  param_1[6] = param_3;
  param_1[4] = param_2;
  param_1[5] = (long)pvVar4 - (long)param_2 >> 4;
  return;
}


