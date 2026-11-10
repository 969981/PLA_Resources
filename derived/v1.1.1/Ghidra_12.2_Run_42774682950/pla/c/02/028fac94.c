/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028fac94; name: FUN_028fac94
 */


void FUN_028fac94(long param_1)

{
  void *pvVar1;
  void *__src;
  void *pvVar2;
  size_t __n;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  void *pvVar7;
  long *plVar8;
  long lVar9;
  void *__dest;
  ulong uVar10;
  long lVar11;
  
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_1 + 8);
  plVar6 = (long *)(param_1 + 0x68);
  plVar8 = (long *)*plVar6;
  if (plVar8 == *(long **)(param_1 + 0x28)) {
    lVar9 = *(long *)(param_1 + 0x60);
    __dest = *(void **)(param_1 + 0x50);
  }
  else {
    lVar9 = *(long *)(param_1 + 0x50);
    *(long *)(param_1 + 0x58) = lVar9;
    lVar11 = *(long *)(param_1 + 0x60) - lVar9;
    uVar4 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar4 & 1) == 0) {
LAB_028fad40:
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar9,lVar11,0x10);
    }
    else {
      lVar3 = tpidr_el0;
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_028fad40;
      FUN_02bcc824(plVar8,lVar9,lVar11,0x10);
    }
    __dest = (void *)0x0;
    lVar9 = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  lVar11 = lVar9 - (long)__dest;
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x38);
  *plVar6 = *(long *)(param_1 + 0x28);
  __src = *(void **)(param_1 + 0x10);
  pvVar2 = *(void **)(param_1 + 0x18);
  uVar4 = (long)pvVar2 - (long)__src >> 6;
  if (uVar4 <= (ulong)(lVar11 >> 6)) {
    lVar9 = *(long *)(param_1 + 0x58) - (long)__dest;
    uVar5 = lVar9 >> 6;
    pvVar7 = (void *)((long)__src + lVar9);
    pvVar1 = pvVar7;
    if (uVar4 <= uVar5) {
      pvVar1 = pvVar2;
    }
    __n = (long)pvVar1 - (long)__src;
    if (__n != 0) {
      memmove(__dest,__src,__n);
    }
    if (uVar4 <= uVar5) {
      *(void **)(param_1 + 0x58) = (void *)((long)__dest + ((long)__n >> 6) * 0x40);
      return;
    }
    if (pvVar1 == pvVar2) {
      return;
    }
    lVar9 = *(long *)(param_1 + 0x58);
    do {
      FUN_028fb788(plVar6,lVar9,pvVar7);
      pvVar7 = (void *)((long)pvVar7 + 0x40);
      lVar9 = *(long *)(param_1 + 0x58) + 0x40;
      *(long *)(param_1 + 0x58) = lVar9;
    } while (pvVar2 != pvVar7);
    return;
  }
  if (__dest != (void *)0x0) {
    plVar8 = *(long **)(param_1 + 0x68);
    *(void **)(param_1 + 0x58) = __dest;
    uVar5 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar5 & 1) == 0) {
LAB_028fae0c:
      (**(code **)(*plVar8 + 0x18))(plVar8,__dest,lVar11,0x10);
    }
    else {
      lVar9 = tpidr_el0;
      if (*(char *)(lVar9 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar9 + 0x38d488) = 1;
        *(undefined8 *)(lVar9 + 0x38d478) = 0;
        *(undefined8 *)(lVar9 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar9 + 0x38d480) < 1) goto LAB_028fae0c;
      FUN_02bcc824(plVar8,__dest,lVar11,0x10);
    }
    lVar9 = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  uVar5 = *(ulong *)(param_1 + 0x70);
  if (0x7ffffffffffffffe < uVar5) {
    uVar5 = 0x7fffffffffffffff;
  }
  if (uVar5 < uVar4) {
LAB_028fb04c:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  uVar10 = uVar5;
  if ((ulong)(lVar9 >> 6) < uVar5 >> 1) {
    uVar10 = uVar4;
    if (uVar4 <= (ulong)(lVar9 >> 5)) {
      uVar10 = lVar9 >> 5;
    }
    if (uVar5 < uVar10) goto LAB_028fb04c;
  }
  lVar9 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,uVar10 << 6,0x10);
  if (lVar9 == 0) {
    (**(code **)(*(long *)*plVar6 + 0xb8))();
  }
  *(ulong *)(param_1 + 0x60) = lVar9 + uVar10 * 0x40;
  *(long *)(param_1 + 0x50) = lVar9;
  *(long *)(param_1 + 0x58) = lVar9;
  for (; __src != pvVar2; __src = (void *)((long)__src + 0x40)) {
    FUN_028fb788(plVar6,lVar9,__src);
    lVar9 = *(long *)(param_1 + 0x58) + 0x40;
    *(long *)(param_1 + 0x58) = lVar9;
  }
  return;
}


