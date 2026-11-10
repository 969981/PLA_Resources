/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f3f72c; name: FUN_01f3f72c
 */


void FUN_01f3f72c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 local_28;
  
  uVar5 = *(ulong *)(param_1 + 0x40);
  puVar7 = *(undefined8 **)
            (*(long *)(*(long *)(param_1 + 8) + (uVar5 >> 4 & 0xffffffffffffff8)) +
            (uVar5 & 0x7f) * 0x20);
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar6 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar6;
      local_28 = *puVar7;
      FUN_02a44274(lVar6 + 0xd8,&local_28);
    }
    uVar5 = *(ulong *)(param_1 + 0x40);
  }
  *(ulong *)(param_1 + 0x40) = uVar5 + 1;
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -1;
  if (uVar5 + 1 < 0x100) {
    return;
  }
  plVar9 = *(long **)(param_1 + 0x50);
  uVar8 = **(undefined8 **)(param_1 + 8);
  uVar5 = (**(code **)(*plVar9 + 0xc0))(plVar9);
  if ((uVar5 & 1) != 0) {
    lVar6 = tpidr_el0;
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar6 + 0x38d480)) {
      FUN_02bcc824(plVar9,uVar8,0x1000,8);
      goto LAB_01f3f870;
    }
  }
  (**(code **)(*plVar9 + 0x18))(plVar9,uVar8,0x1000,8);
LAB_01f3f870:
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -0x80;
  return;
}


