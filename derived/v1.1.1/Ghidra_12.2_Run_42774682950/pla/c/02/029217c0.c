/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029217c0; name: FUN_029217c0
 */


void FUN_029217c0(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long local_58;
  
  if (*(char *)(param_1 + 0x32c) != '\0') {
    return;
  }
  local_58 = FUN_0291ef64(param_1,param_3,param_4 & 1);
  if (local_58 == 0) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x518));
  uVar2 = *(ulong *)(param_1 + 0x4e8);
  if (uVar2 < *(ulong *)(param_1 + 0x4f0)) {
    FUN_02925164(*(undefined8 *)(param_1 + 0x4f8),uVar2,param_2,&local_58);
    *(long *)(param_1 + 0x4e8) = *(long *)(param_1 + 0x4e8) + 0x28;
  }
  else {
    uVar6 = *(ulong *)(param_1 + 0x500);
    lVar5 = (long)(uVar2 - *(long *)(param_1 + 0x4e0)) >> 3;
    if (0x7ffffffffffffffe < uVar6) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar2 = lVar5 * -0x3333333333333333 + 1;
    if (uVar6 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = (long)(*(ulong *)(param_1 + 0x4f0) - *(long *)(param_1 + 0x4e0)) >> 3;
    uVar4 = lVar3 * -0x6666666666666666;
    if (uVar2 <= uVar4) {
      uVar2 = uVar4;
    }
    puVar1 = (undefined8 *)(param_1 + 0x4f8);
    if ((ulong)(lVar3 * -0x3333333333333333) < uVar6 >> 1) {
      uVar6 = uVar2;
    }
    if (uVar6 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar6 * 0x28,8);
      if (lVar3 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))();
      }
    }
    lVar9 = lVar3 + lVar5 * 8;
    FUN_02925164(*(undefined8 *)(param_1 + 0x4f8),lVar9,param_2,&local_58);
    lVar10 = *(long *)(param_1 + 0x4e0);
    lVar5 = lVar9 + 0x28;
    lVar8 = *(long *)(param_1 + 0x4e8);
    if (lVar8 == lVar10) {
      lVar8 = lVar10;
    }
    else {
      do {
        lVar9 = lVar9 + -0x28;
        lVar8 = lVar8 + -0x28;
        FUN_02924564(puVar1,lVar9,lVar8);
      } while (lVar10 != lVar8);
      lVar10 = *(long *)(param_1 + 0x4e0);
      lVar8 = *(long *)(param_1 + 0x4e8);
    }
    *(long *)(param_1 + 0x4e0) = lVar9;
    lVar9 = *(long *)(param_1 + 0x4f0);
    *(long *)(param_1 + 0x4e8) = lVar5;
    *(ulong *)(param_1 + 0x4f0) = lVar3 + uVar6 * 0x28;
    while (lVar8 != lVar10) {
      plVar7 = (long *)(lVar8 + -0x10);
      lVar8 = lVar8 + -0x28;
      if ((long *)*plVar7 != (long *)0x0) {
        (**(code **)(*(long *)*plVar7 + 0x20))();
      }
    }
    if (lVar10 != 0) {
      plVar7 = (long *)*puVar1;
      lVar9 = lVar9 - lVar10;
      uVar2 = (**(code **)(*plVar7 + 0xc0))(plVar7);
      if ((uVar2 & 1) != 0) {
        lVar5 = tpidr_el0;
        if (*(char *)(lVar5 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar5 + 0x38d488) = 1;
          *(undefined8 *)(lVar5 + 0x38d478) = 0;
          *(undefined8 *)(lVar5 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar5 + 0x38d480)) {
          FUN_02bcc824(plVar7,lVar10,lVar9,8);
          goto LAB_02921a00;
        }
      }
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar10,lVar9,8);
    }
  }
LAB_02921a00:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x518));
  return;
}


