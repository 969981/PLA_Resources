/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019fb340; name: FUN_019fb340
 */


void FUN_019fb340(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  size_t __n;
  ulong uVar4;
  void *__src;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  void *pvVar8;
  ulong *puVar9;
  long *plVar10;
  ulong uVar11;
  
  if (param_1[2] == param_1[3]) {
    pvVar8 = (void *)*param_1;
    __src = (void *)param_1[1];
    if (__src < pvVar8 || (long)__src - (long)pvVar8 == 0) {
      lVar1 = param_1[3] - (long)pvVar8;
      uVar5 = lVar1 >> 2;
      puVar9 = param_1 + 4;
      if (lVar1 == 0) {
        uVar5 = 1;
      }
      uVar4 = (**(code **)(*(long *)*puVar9 + 0x10))((long *)*puVar9,uVar5 << 3,0x10);
      if (uVar4 == 0) {
        (**(code **)(*(long *)*puVar9 + 0xb8))();
      }
      uVar11 = param_1[2];
      uVar3 = uVar4 + (uVar5 >> 2) * 8;
      uVar2 = uVar3;
      for (uVar6 = param_1[1]; uVar6 != uVar11; uVar6 = uVar6 + 8) {
        FUN_019fb9fc(puVar9,uVar2,uVar6);
        uVar2 = uVar2 + 8;
      }
      uVar11 = *param_1;
      *param_1 = uVar4;
      param_1[1] = uVar3;
      uVar6 = param_1[3];
      param_1[2] = uVar2;
      param_1[3] = uVar4 + uVar5 * 8;
      if (uVar11 != 0) {
        plVar10 = (long *)*puVar9;
        uVar5 = (**(code **)(*plVar10 + 0xc0))(plVar10);
        if ((uVar5 & 1) != 0) {
          lVar1 = tpidr_el0;
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar1 + 0x38d480)) {
            FUN_02bcc824(plVar10,uVar11,uVar6 - uVar11,0x10);
            goto LAB_019fb370;
          }
        }
        (**(code **)(*plVar10 + 0x18))(plVar10,uVar11,uVar6 - uVar11,0x10);
      }
    }
    else {
      lVar7 = (long)__src - (long)pvVar8 >> 3;
      lVar1 = lVar7 + 2;
      if (-1 < lVar7 + 1) {
        lVar1 = lVar7 + 1;
      }
      __n = param_1[2] - (long)__src;
      pvVar8 = (void *)((long)__src + (lVar1 >> 1) * -8);
      if (__n != 0) {
        memmove(pvVar8,__src,__n);
        __src = (void *)param_1[1];
      }
      param_1[1] = (ulong)((long)__src + (lVar1 >> 1) * -8);
      param_1[2] = (ulong)((long)pvVar8 + ((long)__n >> 3) * 8);
    }
  }
LAB_019fb370:
  FUN_019fb9fc(param_1 + 4,param_1[2],param_2);
  param_1[2] = param_1[2] + 8;
  return;
}


