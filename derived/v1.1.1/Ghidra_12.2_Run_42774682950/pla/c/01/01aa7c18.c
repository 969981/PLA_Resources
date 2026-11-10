/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01aa7c18; name: FUN_01aa7c18
 */


void FUN_01aa7c18(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  void *__src;
  ulong uVar3;
  size_t __n;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  void *__dest;
  long *plVar8;
  long lVar9;
  
  __src = (void *)param_1[1];
  if (__src == (void *)*param_1) {
    uVar4 = param_1[2];
    uVar3 = param_1[3];
    if (uVar4 < uVar3) {
      lVar7 = (long)(uVar3 - uVar4) >> 3;
      lVar5 = lVar7 + 2;
      if (-1 < lVar7 + 1) {
        lVar5 = lVar7 + 1;
      }
      __n = uVar4 - (long)__src;
      __dest = (void *)(uVar4 + (lVar5 >> 1) * 8);
      if (__n != 0) {
        __dest = (void *)((long)__dest - __n);
        memmove(__dest,__src,__n);
        uVar4 = param_1[2];
      }
      param_1[1] = (long)__dest;
      param_1[2] = uVar4 + (lVar5 >> 1) * 8;
    }
    else {
      lVar7 = uVar3 - *param_1;
      lVar5 = lVar7 >> 2;
      if (lVar7 == 0) {
        lVar5 = 1;
      }
      plVar8 = param_1 + 4;
      lVar7 = (**(code **)(*(long *)*plVar8 + 0x10))((long *)*plVar8,lVar5 << 3,0x10);
      if (lVar7 == 0) {
        (**(code **)(*(long *)*plVar8 + 0xb8))();
      }
      lVar9 = param_1[2];
      lVar2 = lVar7 + (lVar5 + 3U >> 2) * 8;
      lVar1 = lVar2;
      for (lVar6 = param_1[1]; lVar6 != lVar9; lVar6 = lVar6 + 8) {
        FUN_01aa7e58(plVar8,lVar1,lVar6);
        lVar1 = lVar1 + 8;
      }
      lVar9 = *param_1;
      *param_1 = lVar7;
      param_1[1] = lVar2;
      lVar6 = param_1[3];
      param_1[2] = lVar1;
      param_1[3] = lVar7 + lVar5 * 8;
      if (lVar9 != 0) {
        plVar8 = (long *)*plVar8;
        uVar4 = (**(code **)(*plVar8 + 0xc0))(plVar8);
        if ((uVar4 & 1) != 0) {
          lVar5 = tpidr_el0;
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar8,lVar9,lVar6 - lVar9,0x10);
            goto LAB_01aa7c48;
          }
        }
        (**(code **)(*plVar8 + 0x18))(plVar8,lVar9,lVar6 - lVar9,0x10);
      }
    }
  }
LAB_01aa7c48:
  FUN_01aa7e58(param_1 + 4,param_1[1] + -8,param_2);
  param_1[1] = param_1[1] + -8;
  return;
}


