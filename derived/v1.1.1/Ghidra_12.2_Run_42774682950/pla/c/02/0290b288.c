/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0290b288; name: FUN_0290b288
 */


void FUN_0290b288(long param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 local_58;
  
  if (*(char *)(param_1 + 0x32c) != '\0') {
    return;
  }
  FUN_0290b54c();
  nn::os::LockMutex((MutexType *)(param_1 + 0x248));
  local_58 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(ulong *)(param_1 + 0x270);
  puVar1 = (undefined8 *)(param_1 + 0x280);
  if (uVar2 < *(ulong *)(param_1 + 0x278)) {
    FUN_0290e790(puVar1,uVar2,&local_58);
    *(long *)(param_1 + 0x270) = *(long *)(param_1 + 0x270) + 8;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x288);
    lVar7 = (long)(uVar2 - *(long *)(param_1 + 0x268)) >> 3;
    uVar2 = lVar7 + 1;
    if (0x7ffffffffffffffe < uVar5) {
      uVar5 = 0x7fffffffffffffff;
    }
    if (uVar5 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = *(ulong *)(param_1 + 0x278) - *(long *)(param_1 + 0x268);
    if ((ulong)(lVar3 >> 3) < uVar5 >> 1) {
      uVar4 = lVar3 >> 2;
      uVar5 = uVar2;
      if (uVar2 <= uVar4) {
        uVar5 = uVar4;
      }
    }
    if (uVar5 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar5 << 3,8);
      if (lVar3 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))();
      }
    }
    lVar8 = lVar3 + lVar7 * 8;
    FUN_0290e790(puVar1,lVar8,&local_58);
    plVar9 = *(long **)(param_1 + 0x268);
    lVar7 = lVar8 + 8;
    plVar6 = *(long **)(param_1 + 0x270);
    if (plVar6 == plVar9) {
      plVar6 = plVar9;
    }
    else {
      do {
        lVar8 = lVar8 + -8;
        plVar6 = plVar6 + -1;
        FUN_00e8dc78(puVar1,lVar8,plVar6);
      } while (plVar9 != plVar6);
      plVar9 = *(long **)(param_1 + 0x268);
      plVar6 = *(long **)(param_1 + 0x270);
    }
    *(long *)(param_1 + 0x268) = lVar8;
    lVar8 = *(long *)(param_1 + 0x278);
    *(long *)(param_1 + 0x270) = lVar7;
    *(ulong *)(param_1 + 0x278) = lVar3 + uVar5 * 8;
    while (plVar6 != plVar9) {
      plVar6 = plVar6 + -1;
      if ((long *)*plVar6 != (long *)0x0) {
        (**(code **)(*(long *)*plVar6 + 0x20))();
      }
    }
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)*puVar1;
      lVar8 = lVar8 - (long)plVar9;
      uVar2 = (**(code **)(*plVar6 + 0xc0))(plVar6);
      if ((uVar2 & 1) != 0) {
        lVar7 = tpidr_el0;
        if (*(char *)(lVar7 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar7 + 0x38d488) = 1;
          *(undefined8 *)(lVar7 + 0x38d478) = 0;
          *(undefined8 *)(lVar7 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar7 + 0x38d480)) {
          FUN_02bcc824(plVar6,plVar9,lVar8,8);
          goto LAB_0290b41c;
        }
      }
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar9,lVar8,8);
    }
  }
LAB_0290b41c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x248));
  return;
}


