/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009575b8; name: FUN_009575b8
 */


void FUN_009575b8(long *param_1,void *param_2,void *param_3)

{
  void *pvVar1;
  void *pvVar2;
  size_t __n;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  void *__dest;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar8 = (long)param_3 - (long)param_2 >> 2;
  lVar4 = param_1[2];
  __dest = (void *)*param_1;
  lVar6 = lVar4 - (long)__dest;
  if (uVar8 <= (ulong)(lVar6 >> 2)) {
    uVar5 = param_1[1] - (long)__dest >> 2;
    pvVar1 = (void *)((long)param_2 + (param_1[1] - (long)__dest));
    pvVar2 = pvVar1;
    if (uVar8 <= uVar5) {
      pvVar2 = param_3;
    }
    __n = (long)pvVar2 - (long)param_2;
    if (__n != 0) {
      memmove(__dest,param_2,__n);
    }
    if (uVar8 <= uVar5) {
      param_1[1] = (long)((long)__dest + ((long)__n >> 2) * 4);
      return;
    }
    if (pvVar2 == param_3) {
      return;
    }
    plVar7 = param_1 + 3;
    FUN_00957978(plVar7,param_1[1],pvVar1);
    lVar4 = param_1[1];
    param_1[1] = lVar4 + 4;
    if ((void *)((long)pvVar1 + 4) == param_3) {
      return;
    }
    FUN_00957978(plVar7,lVar4 + 4,(void *)((long)pvVar1 + 4));
    lVar4 = param_1[1];
    param_1[1] = lVar4 + 4;
    if ((void *)((long)pvVar1 + 8) == param_3) {
      return;
    }
    FUN_00957978(plVar7,lVar4 + 4,(void *)((long)pvVar1 + 8));
    lVar4 = param_1[1];
    param_1[1] = lVar4 + 4;
    if ((void *)((long)pvVar1 + 0xc) == param_3) {
      return;
    }
    FUN_00957978(plVar7,lVar4 + 4,(void *)((long)pvVar1 + 0xc));
    lVar4 = param_1[1] + 4;
    param_1[1] = lVar4;
    for (pvVar1 = (void *)((long)pvVar1 + 0x10); pvVar1 != param_3;
        pvVar1 = (void *)((long)pvVar1 + 4)) {
      FUN_00957978(plVar7,lVar4,pvVar1);
      lVar4 = param_1[1] + 4;
      param_1[1] = lVar4;
    }
    return;
  }
  if (__dest != (void *)0x0) {
    plVar7 = (long *)param_1[3];
    param_1[1] = (long)__dest;
    uVar5 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar5 & 1) == 0) {
LAB_009578b4:
      (**(code **)(*plVar7 + 0x18))(plVar7,__dest,lVar6,4);
    }
    else {
      lVar4 = tpidr_el0;
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_009578b4;
      FUN_02bcc824(plVar7,__dest,lVar6,4);
    }
    lVar4 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  uVar5 = param_1[4];
  if (0x7ffffffffffffffe < uVar5) {
    uVar5 = 0x7fffffffffffffff;
  }
  if (uVar5 < uVar8) {
LAB_00957970:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)(lVar4 >> 2) < uVar5 >> 1) {
    if (uVar8 <= (ulong)(lVar4 >> 1)) {
      uVar8 = lVar4 >> 1;
    }
    bVar3 = uVar5 < uVar8;
    uVar5 = uVar8;
    if (bVar3) goto LAB_00957970;
  }
  plVar7 = param_1 + 3;
  lVar4 = (**(code **)(*(long *)*plVar7 + 0x10))((long *)*plVar7,uVar5 << 2,4);
  if (lVar4 == 0) {
    (**(code **)(*(long *)*plVar7 + 0xb8))();
  }
  param_1[2] = lVar4 + uVar5 * 4;
  *param_1 = lVar4;
  param_1[1] = lVar4;
  if (param_2 != param_3) {
    FUN_00957978(plVar7,lVar4,param_2);
    param_1[1] = param_1[1] + 4;
    if ((void *)((long)param_2 + 4) != param_3) {
      FUN_00957978(plVar7);
      param_1[1] = param_1[1] + 4;
      if ((void *)((long)param_2 + 8) != param_3) {
        FUN_00957978(plVar7);
        param_1[1] = param_1[1] + 4;
        if ((void *)((long)param_2 + 0xc) != param_3) {
          FUN_00957978(plVar7);
          lVar4 = param_1[1] + 4;
          param_1[1] = lVar4;
          for (param_2 = (void *)((long)param_2 + 0x10); param_2 != param_3;
              param_2 = (void *)((long)param_2 + 4)) {
            FUN_00957978(plVar7,lVar4,param_2);
            lVar4 = param_1[1] + 4;
            param_1[1] = lVar4;
          }
        }
      }
    }
  }
  return;
}


