/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f36d04; name: FUN_01f36d04
 */


void FUN_01f36d04(long *param_1,undefined8 param_2)

{
  long lVar1;
  void *__src;
  ulong uVar2;
  long lVar3;
  size_t __n;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  void *__dest;
  undefined8 *puVar9;
  long *plVar10;
  
  __src = (void *)param_1[1];
  if (__src == (void *)*param_1) {
    uVar4 = param_1[2];
    uVar2 = param_1[3];
    if (uVar4 < uVar2) {
      lVar7 = (long)(uVar2 - uVar4) >> 3;
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
      puVar9 = (undefined8 *)param_1[4];
      lVar7 = uVar2 - *param_1;
      lVar5 = lVar7 >> 2;
      if (lVar7 == 0) {
        lVar5 = 1;
      }
      lVar7 = (**(code **)(*(long *)*puVar9 + 0x10))((long *)*puVar9,lVar5 << 3,8);
      if (lVar7 == 0) {
        (**(code **)(*(long *)*puVar9 + 0xb8))();
      }
      lVar8 = lVar7 + (lVar5 + 3U >> 2) * 8;
      lVar3 = param_1[2];
      lVar1 = lVar8;
      for (lVar6 = param_1[1]; lVar6 != lVar3; lVar6 = lVar6 + 8) {
        FUN_01f36f48(puVar9,lVar1,lVar6);
        lVar1 = lVar1 + 8;
      }
      lVar6 = *param_1;
      *param_1 = lVar7;
      param_1[1] = lVar8;
      lVar8 = param_1[3];
      param_1[2] = lVar1;
      param_1[3] = lVar7 + lVar5 * 8;
      if (lVar6 != 0) {
        plVar10 = (long *)*puVar9;
        uVar4 = (**(code **)(*plVar10 + 0xc0))(plVar10);
        if ((uVar4 & 1) != 0) {
          lVar5 = tpidr_el0;
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar10,lVar6,lVar8 - lVar6,8);
            goto LAB_01f36d34;
          }
        }
        (**(code **)(*plVar10 + 0x18))(plVar10,lVar6,lVar8 - lVar6,8);
      }
    }
  }
LAB_01f36d34:
  FUN_01f37020(param_1[4],param_1[1] + -8,param_2);
  param_1[1] = param_1[1] + -8;
  return;
}


