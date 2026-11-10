/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01213ca4; name: FUN_01213ca4
 */


void FUN_01213ca4(undefined8 *param_1,void *param_2,undefined8 param_3,void *param_4)

{
  size_t __n;
  long lVar1;
  ulong uVar2;
  long lVar3;
  void *__dest;
  undefined8 uVar4;
  void *__src;
  long *plVar5;
  
  __src = (void *)param_1[4];
  __dest = param_2;
  if (__src != param_4 && __src != (void *)0x0) {
    memmove(param_2,__src,(long)param_4 - (long)__src);
    __dest = (void *)((long)param_2 + ((long)param_4 - (long)__src));
  }
  if (__src != (void *)0x0) {
    __n = (long)__src + (param_1[5] * 6 - (long)param_4);
    if (__n != 0) {
      memmove(__dest,param_4,__n);
      __dest = (void *)((long)__dest + __n);
    }
    lVar3 = param_1[6];
    plVar5 = (long *)*param_1;
    uVar4 = param_1[4];
    uVar2 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar2 & 1) != 0) {
      lVar1 = tpidr_el0;
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar5,uVar4,lVar3 * 6,2);
        goto LAB_01213ce4;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,uVar4,lVar3 * 6,2);
  }
LAB_01213ce4:
  param_1[6] = param_3;
  param_1[4] = param_2;
  param_1[5] = ((long)__dest - (long)param_2 >> 1) * -0x5555555555555555;
  return;
}


