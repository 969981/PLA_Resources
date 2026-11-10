/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ae3290; name: FUN_01ae3290
 */


void FUN_01ae3290(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 local_58;
  
  puVar5 = PTR_DAT_0437a7d0;
  puVar4 = PTR_DAT_0437a7c0;
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)**(undefined8 **)(param_1 + 0x10))();
    if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_0437a7c0), iVar7 != 0)) {
      local_58 = FUN_00938550();
      puVar6 = PTR_DAT_0437a7d0;
      FUN_00b0fde8(PTR_DAT_0437a7d0,&local_58);
      FUN_00100250(PTR_LAB_0437a8d8,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a7c0);
      plVar10 = *(long **)puVar5;
    }
    else {
      plVar10 = *(long **)puVar5;
    }
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
    plVar8 = *(long **)(param_1 + 8);
    *(long **)(param_1 + 8) = plVar10;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))();
    }
    plVar10 = *(long **)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar9 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar9 & 1) == 0) {
LAB_01ae3368:
      (**(code **)(*plVar10 + 0x18))(plVar10,uVar1,uVar2,8);
    }
    else {
      lVar3 = tpidr_el0;
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_01ae3368;
      FUN_02bcc824(plVar10,uVar1,uVar2,8);
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(long *)(param_1 + 0x48) == 0) {
    return;
  }
  (**(code **)**(undefined8 **)(param_1 + 0x38))();
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_0437a7c0), iVar7 != 0)) {
    local_58 = FUN_00938550();
    puVar4 = PTR_DAT_0437a7d0;
    FUN_00b0fde8(PTR_DAT_0437a7d0,&local_58);
    FUN_00100250(PTR_LAB_0437a8d8,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a7c0);
    plVar10 = *(long **)puVar5;
  }
  else {
    plVar10 = *(long **)puVar5;
  }
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  plVar8 = *(long **)(param_1 + 0x30);
  *(long **)(param_1 + 0x30) = plVar10;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  plVar10 = *(long **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uVar9 = (**(code **)(*plVar10 + 0xc0))(plVar10);
  if ((uVar9 & 1) != 0) {
    lVar3 = tpidr_el0;
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar3 + 0x38d480)) {
      FUN_02bcc824(plVar10,uVar1,uVar2,8);
      goto LAB_01ae344c;
    }
  }
  (**(code **)(*plVar10 + 0x18))(plVar10,uVar1,uVar2,8);
LAB_01ae344c:
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}


