/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bbc404; name: FUN_02bbc404
 */


void FUN_02bbc404(long param_1,undefined4 param_2,int param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  void *__s;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_78 [24];
  
  if (param_3 == 0) {
    return;
  }
  __s = *(void **)(param_1 + 0x1d8);
  if (__s != (void *)0x0) goto LAB_02bbc6dc;
  plVar9 = *(long **)(param_1 + 8);
  __s = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,0x508,8);
  if (__s == (void *)0x0) {
    plVar9 = (long *)0x0;
    uVar11 = 0;
    uVar8 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar9;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    memset(__s,0,0x480);
    *(undefined4 *)((long)__s + 0x200) = 0xffffffff;
    *(undefined8 *)((long)__s + 0x204) = 0;
    *(undefined8 *)((long)__s + 0x20c) = 0;
    uVar11 = 0x508;
    *(undefined8 *)((long)__s + 0x274) = 0;
    *(undefined8 *)((long)__s + 0x279) = 0;
    *(undefined8 *)((long)__s + 0x214) = 0;
    *(undefined8 *)((long)__s + 0x21c) = 0;
    *(undefined8 *)((long)__s + 0x224) = 0;
    *(undefined8 *)((long)__s + 0x22c) = 0;
    *(undefined8 *)((long)__s + 0x234) = 0;
    *(undefined8 *)((long)__s + 0x23c) = 0;
    *(undefined8 *)((long)__s + 0x244) = 0;
    *(undefined8 *)((long)__s + 0x24c) = 0;
    *(undefined8 *)((long)__s + 0x254) = 0;
    *(undefined8 *)((long)__s + 0x25c) = 0;
    *(undefined8 *)((long)__s + 0x264) = 0;
    *(undefined8 *)((long)__s + 0x26c) = 0;
    uVar8 = 8;
    *(undefined4 *)((long)__s + 0x480) = 0xffffffff;
    *(undefined1 *)((long)__s + 0x290) = 0;
    *(undefined1 *)((long)__s + 0x2a0) = 0;
    *(undefined1 *)((long)__s + 0x2b0) = 0;
    *(undefined1 *)((long)__s + 0x2c0) = 0;
    *(undefined1 *)((long)__s + 0x2d0) = 0;
    *(undefined1 *)((long)__s + 0x2e0) = 0;
    *(undefined1 *)((long)__s + 0x2f0) = 0;
    *(undefined1 *)((long)__s + 0x300) = 0;
    *(undefined1 *)((long)__s + 0x310) = 0;
    *(undefined1 *)((long)__s + 800) = 0;
    *(undefined1 *)((long)__s + 0x330) = 0;
    *(undefined1 *)((long)__s + 0x340) = 0;
    *(undefined1 *)((long)__s + 0x350) = 0;
    *(undefined1 *)((long)__s + 0x360) = 0;
    *(undefined1 *)((long)__s + 0x370) = 0;
    *(undefined1 *)((long)__s + 0x380) = 0;
    *(undefined1 *)((long)__s + 0x390) = 0;
    *(undefined1 *)((long)__s + 0x3a0) = 0;
    *(undefined1 *)((long)__s + 0x3b0) = 0;
    *(undefined1 *)((long)__s + 0x3c0) = 0;
    *(undefined1 *)((long)__s + 0x3d0) = 0;
    *(undefined1 *)((long)__s + 0x3e0) = 0;
    *(undefined1 *)((long)__s + 0x3f0) = 0;
    *(undefined1 *)((long)__s + 0x400) = 0;
    *(undefined1 *)((long)__s + 0x410) = 0;
    *(undefined1 *)((long)__s + 0x420) = 0;
    *(undefined1 *)((long)__s + 0x430) = 0;
    *(undefined1 *)((long)__s + 0x440) = 0;
    *(undefined1 *)((long)__s + 0x450) = 0;
    *(undefined1 *)((long)__s + 0x460) = 0;
    *(undefined1 *)((long)__s + 0x470) = 0;
    *(undefined4 *)((long)__s + 0x4fc) = 0;
    *(undefined8 *)((long)__s + 0x484) = 0;
    *(undefined8 *)((long)__s + 0x4ec) = 0;
    *(undefined8 *)((long)__s + 0x4f4) = 0;
    *(undefined8 *)((long)__s + 0x4dc) = 0;
    *(undefined8 *)((long)__s + 0x4e4) = 0;
    *(undefined8 *)((long)__s + 0x4cc) = 0;
    *(undefined8 *)((long)__s + 0x4d4) = 0;
    *(undefined8 *)((long)__s + 0x4bc) = 0;
    *(undefined8 *)((long)__s + 0x4c4) = 0;
    *(undefined8 *)((long)__s + 0x4ac) = 0;
    *(undefined8 *)((long)__s + 0x4b4) = 0;
    *(undefined8 *)((long)__s + 0x49c) = 0;
    *(undefined8 *)((long)__s + 0x4a4) = 0;
    *(undefined8 *)((long)__s + 0x48c) = 0;
    *(undefined8 *)((long)__s + 0x494) = 0;
    *(undefined8 *)((long)__s + 0x500) = 0x800000008;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  lVar6 = *(long *)(param_1 + 0x1d8);
  *(void **)(param_1 + 0x1d8) = __s;
  if (lVar6 != 0) {
    FUN_02bcbe58(auStack_78,0);
    plVar1 = *(long **)(param_1 + 0x1e0);
    uVar2 = *(undefined8 *)(param_1 + 0x1e8);
    uVar10 = *(undefined8 *)(param_1 + 0x1f0);
    uVar7 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    lVar3 = tpidr_el0;
    if ((uVar7 & 1) == 0) {
LAB_02bbc630:
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar6,uVar2,uVar10);
    }
    else {
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_02bbc630;
      FUN_02bcc824(plVar1,lVar6,uVar2,uVar10);
    }
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar5 = *(int *)(lVar3 + 0x38d480) + -1;
    *(int *)(lVar3 + 0x38d480) = iVar5;
    if (iVar5 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar3 + 0x38d484) = 0;
    }
    __s = *(void **)(param_1 + 0x1d8);
  }
  *(long **)(param_1 + 0x1e0) = plVar9;
  *(undefined8 *)(param_1 + 0x1e8) = uVar11;
  *(undefined8 *)(param_1 + 0x1f0) = uVar8;
LAB_02bbc6dc:
  *(undefined4 *)((long)__s + 0x500) = param_2;
  *(int *)(*(long *)(param_1 + 0x1d8) + 0x504) = param_3;
  return;
}


