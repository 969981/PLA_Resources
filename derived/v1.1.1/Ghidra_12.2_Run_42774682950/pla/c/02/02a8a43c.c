/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a8a43c; name: FUN_02a8a43c
 */


void FUN_02a8a43c(long param_1,undefined4 param_2,int param_3)

{
  ushort *puVar1;
  code *pcVar2;
  long *plVar3;
  ushort uVar4;
  short sVar5;
  void *pvVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  void *__src;
  size_t sVar11;
  
  plVar3 = DAT_043f1798;
  if (*(char *)(param_1 + 0xa5) == '\0') {
    puVar1 = *(ushort **)(param_1 + 0x78);
    uVar4 = (ushort)param_2 & 0xff | (ushort)(param_3 << 8);
    if (*(ushort **)(param_1 + 0x80) <= puVar1) {
      __src = *(void **)(param_1 + 0x70);
      sVar11 = (long)puVar1 - (long)__src;
      uVar7 = ((long)sVar11 >> 1) + 1;
      if ((long)uVar7 < 0) goto LAB_02a8a8b0;
      uVar9 = (long)*(ushort **)(param_1 + 0x80) - (long)__src;
      if (uVar7 <= uVar9) {
        uVar7 = uVar9;
      }
      if (0x3ffffffffffffffe < (ulong)((long)uVar9 >> 1)) {
        uVar7 = 0x7fffffffffffffff;
      }
      if (uVar7 == 0) {
        pvVar6 = (void *)0x0;
      }
      else {
        if ((long)uVar7 < 0) goto LAB_02a8a8b4;
        lVar10 = tpidr_el0;
        plVar8 = *(long **)(lVar10 + 0x20);
        if (*(long **)(lVar10 + 0x20) == (long *)0x0) {
          *(long **)(lVar10 + 0x20) = DAT_043f1798;
          plVar8 = plVar3;
        }
        pvVar6 = (void *)(**(code **)(*plVar8 + 0x10))(plVar8,uVar7 << 1,8);
      }
      puVar1 = (ushort *)((long)pvVar6 + ((long)sVar11 >> 1) * 2);
      *puVar1 = uVar4;
      if (0 < (long)sVar11) {
        memcpy(pvVar6,__src,sVar11);
      }
      *(void **)(param_1 + 0x70) = pvVar6;
      *(ushort **)(param_1 + 0x78) = puVar1 + 1;
      *(void **)(param_1 + 0x80) = (void *)((long)pvVar6 + uVar7 * 2);
      plVar3 = DAT_043f1798;
      if (__src == (void *)0x0) {
        return;
      }
      lVar10 = tpidr_el0;
      plVar8 = *(long **)(lVar10 + 0x20);
      if (*(long **)(lVar10 + 0x20) == (long *)0x0) {
        *(long **)(lVar10 + 0x20) = DAT_043f1798;
        plVar8 = plVar3;
      }
      uVar7 = (**(code **)(*plVar8 + 0xc0))(plVar8);
      if ((uVar7 & 1) != 0) {
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar10 + 0x38d480)) goto LAB_02a8a7e8;
      }
      lVar10 = *plVar8;
      goto LAB_02a8a7b0;
    }
    *puVar1 = uVar4;
  }
  else {
    uVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),param_2);
    sVar5 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),param_3);
    plVar3 = DAT_043f1798;
    puVar1 = *(ushort **)(param_1 + 0x78);
    uVar4 = uVar4 & 0xff | sVar5 << 8;
    if (*(ushort **)(param_1 + 0x80) <= puVar1) {
      __src = *(void **)(param_1 + 0x70);
      sVar11 = (long)puVar1 - (long)__src;
      uVar7 = ((long)sVar11 >> 1) + 1;
      if ((long)uVar7 < 0) {
LAB_02a8a8b0:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      uVar9 = (long)*(ushort **)(param_1 + 0x80) - (long)__src;
      if (uVar7 <= uVar9) {
        uVar7 = uVar9;
      }
      if (0x3ffffffffffffffe < (ulong)((long)uVar9 >> 1)) {
        uVar7 = 0x7fffffffffffffff;
      }
      lVar10 = tpidr_el0;
      if (uVar7 == 0) {
        pvVar6 = (void *)0x0;
      }
      else {
        if ((long)uVar7 < 0) {
LAB_02a8a8b4:
          FUN_02a82960();
                    /* WARNING: Does not return */
          pcVar2 = (code *)UndefinedInstructionException(0,0x2a8a8b8);
          (*pcVar2)();
        }
        plVar8 = *(long **)(lVar10 + 0x20);
        if (*(long **)(lVar10 + 0x20) == (long *)0x0) {
          *(long **)(lVar10 + 0x20) = DAT_043f1798;
          plVar8 = plVar3;
        }
        pvVar6 = (void *)(**(code **)(*plVar8 + 0x10))(plVar8,uVar7 << 1,8);
      }
      puVar1 = (ushort *)((long)pvVar6 + ((long)sVar11 >> 1) * 2);
      *puVar1 = uVar4;
      if (0 < (long)sVar11) {
        memcpy(pvVar6,__src,sVar11);
      }
      *(void **)(param_1 + 0x70) = pvVar6;
      *(ushort **)(param_1 + 0x78) = puVar1 + 1;
      *(void **)(param_1 + 0x80) = (void *)((long)pvVar6 + uVar7 * 2);
      plVar3 = DAT_043f1798;
      if (__src == (void *)0x0) {
        return;
      }
      plVar8 = *(long **)(lVar10 + 0x20);
      if (*(long **)(lVar10 + 0x20) == (long *)0x0) {
        *(long **)(lVar10 + 0x20) = DAT_043f1798;
        plVar8 = plVar3;
      }
      uVar7 = (**(code **)(*plVar8 + 0xc0))(plVar8);
      if ((uVar7 & 1) != 0) {
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar10 + 0x38d480)) {
LAB_02a8a7e8:
          FUN_02bcc824(plVar8,__src,0,8);
          return;
        }
      }
      lVar10 = *plVar8;
LAB_02a8a7b0:
                    /* WARNING: Could not recover jumptable at 0x02a8a7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar10 + 0x18))(plVar8,__src,0,8);
      return;
    }
    *puVar1 = uVar4;
  }
  *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 2;
  return;
}


