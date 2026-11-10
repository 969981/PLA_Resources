/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0096775c; name: FUN_0096775c
 */


void FUN_0096775c(long *param_1,void *param_2,void *param_3)

{
  void *pvVar1;
  size_t __n;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  void *__dest;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  void *pvVar9;
  
  __dest = (void *)*param_1;
  uVar7 = ((long)param_3 - (long)param_2 >> 2) * -0x5555555555555555;
  lVar3 = param_1[2];
  lVar5 = lVar3 - (long)__dest;
  if (uVar7 <= (ulong)((lVar5 >> 2) * -0x5555555555555555)) {
    uVar8 = (param_1[1] - (long)__dest >> 2) * -0x5555555555555555;
    pvVar1 = (void *)((long)param_2 + (param_1[1] - (long)__dest));
    pvVar9 = pvVar1;
    if (uVar7 <= uVar8) {
      pvVar9 = param_3;
    }
    __n = (long)pvVar9 - (long)param_2;
    if (__n != 0) {
      memmove(__dest,param_2,__n);
    }
    if (uVar7 <= uVar8) {
      param_1[1] = (long)((long)__dest + ((long)__n >> 2) * 4);
      return;
    }
    if (pvVar9 == param_3) {
      return;
    }
    FUN_00967a80(param_1 + 3,param_1[1],pvVar1);
    lVar3 = param_1[1] + 0xc;
    param_1[1] = lVar3;
    while (pvVar1 = (void *)((long)pvVar1 + 0xc), pvVar1 != param_3) {
      FUN_00967a80(param_1 + 3,lVar3,pvVar1);
      lVar3 = param_1[1] + 0xc;
      param_1[1] = lVar3;
    }
    return;
  }
  if (__dest != (void *)0x0) {
    plVar6 = (long *)param_1[3];
    param_1[1] = (long)__dest;
    uVar8 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar8 & 1) == 0) {
LAB_009679bc:
      (**(code **)(*plVar6 + 0x18))(plVar6,__dest,lVar5,4);
    }
    else {
      lVar3 = tpidr_el0;
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_009679bc;
      FUN_02bcc824(plVar6,__dest,lVar5,4);
    }
    lVar3 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  uVar8 = param_1[4];
  if (0x7ffffffffffffffe < uVar8) {
    uVar8 = 0x7fffffffffffffff;
  }
  if (uVar8 < uVar7) {
LAB_00967a78:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)((lVar3 >> 2) * -0x5555555555555555) < uVar8 >> 1) {
    uVar4 = (lVar3 >> 2) * 0x5555555555555556;
    if (uVar7 <= uVar4) {
      uVar7 = uVar4;
    }
    bVar2 = uVar8 < uVar7;
    uVar8 = uVar7;
    if (bVar2) goto LAB_00967a78;
  }
  plVar6 = param_1 + 3;
  lVar3 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,uVar8 * 0xc,4);
  if (lVar3 == 0) {
    (**(code **)(*(long *)*plVar6 + 0xb8))();
  }
  *param_1 = lVar3;
  param_1[1] = lVar3;
  param_1[2] = lVar3 + uVar8 * 0xc;
  if (param_2 != param_3) {
    FUN_00967a80(plVar6,lVar3,param_2);
    lVar3 = param_1[1] + 0xc;
    param_1[1] = lVar3;
    while (param_2 = (void *)((long)param_2 + 0xc), param_2 != param_3) {
      FUN_00967a80(plVar6,lVar3,param_2);
      lVar3 = param_1[1] + 0xc;
      param_1[1] = lVar3;
    }
  }
  return;
}


