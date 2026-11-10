/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b91400; name: FUN_02b91400
 */


void FUN_02b91400(long *param_1,void *param_2,void *param_3)

{
  void *pvVar1;
  size_t __n;
  ulong uVar2;
  long lVar3;
  void *__dest;
  long lVar4;
  void *pvVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar8 = (long)param_3 - (long)param_2 >> 4;
  lVar3 = param_1[2];
  __dest = (void *)*param_1;
  lVar4 = lVar3 - (long)__dest;
  if (uVar8 <= (ulong)(lVar4 >> 4)) {
    uVar2 = param_1[1] - (long)__dest >> 4;
    pvVar5 = (void *)((long)param_2 + (param_1[1] - (long)__dest));
    pvVar1 = pvVar5;
    if (uVar8 <= uVar2) {
      pvVar1 = param_3;
    }
    __n = (long)pvVar1 - (long)param_2;
    if (__n != 0) {
      memmove(__dest,param_2,__n);
    }
    if (uVar8 <= uVar2) {
      param_1[1] = (long)((long)__dest + ((long)__n >> 4) * 0x10);
      return;
    }
    if (pvVar1 == param_3) {
      return;
    }
    lVar3 = param_1[1];
    do {
      FUN_02b9168c(param_1 + 3,lVar3,pvVar5);
      pvVar5 = (void *)((long)pvVar5 + 0x10);
      lVar3 = param_1[1] + 0x10;
      param_1[1] = lVar3;
    } while (param_3 != pvVar5);
    return;
  }
  if (__dest != (void *)0x0) {
    plVar6 = (long *)param_1[3];
    param_1[1] = (long)__dest;
    uVar2 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar2 & 1) == 0) {
LAB_02b914a8:
      (**(code **)(*plVar6 + 0x18))(plVar6,__dest,lVar4,8);
    }
    else {
      lVar3 = tpidr_el0;
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_02b914a8;
      FUN_02bcc824(plVar6,__dest,lVar4,8);
    }
    lVar3 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  uVar2 = param_1[4];
  if (0x7ffffffffffffffe < uVar2) {
    uVar2 = 0x7fffffffffffffff;
  }
  if (uVar2 < uVar8) {
LAB_02b91684:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  uVar7 = uVar2;
  if ((ulong)(lVar3 >> 4) < uVar2 >> 1) {
    uVar7 = uVar8;
    if (uVar8 <= (ulong)(lVar3 >> 3)) {
      uVar7 = lVar3 >> 3;
    }
    if (uVar2 < uVar7) goto LAB_02b91684;
  }
  plVar6 = param_1 + 3;
  lVar3 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,uVar7 << 4,8);
  if (lVar3 == 0) {
    (**(code **)(*(long *)*plVar6 + 0xb8))();
  }
  param_1[2] = lVar3 + uVar7 * 0x10;
  *param_1 = lVar3;
  param_1[1] = lVar3;
  for (; param_2 != param_3; param_2 = (void *)((long)param_2 + 0x10)) {
    FUN_02b9168c(plVar6,lVar3,param_2);
    lVar3 = param_1[1] + 0x10;
    param_1[1] = lVar3;
  }
  return;
}


