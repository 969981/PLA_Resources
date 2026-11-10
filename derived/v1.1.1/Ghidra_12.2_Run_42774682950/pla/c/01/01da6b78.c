/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01da6b78; name: FUN_01da6b78
 */


void FUN_01da6b78(long *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long *plStack_58;
  
  uVar2 = param_1[1];
  plVar8 = param_1 + 3;
  if (uVar2 < (ulong)param_1[2]) {
    FUN_01c6c97c(plVar8,uVar2,param_2);
    param_1[1] = param_1[1] + 0x20;
  }
  else {
    uVar6 = param_1[4];
    lVar9 = (long)(uVar2 - *param_1) >> 5;
    uVar2 = lVar9 + 1;
    if (0x7ffffffffffffffe < uVar6) {
      uVar6 = 0x7fffffffffffffff;
    }
    if (uVar6 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = param_1[2] - *param_1;
    uVar5 = lVar4 >> 4;
    local_60 = 0;
    if (uVar2 <= uVar5) {
      uVar2 = uVar5;
    }
    if ((ulong)(lVar4 >> 5) < uVar6 >> 1) {
      uVar6 = uVar2;
    }
    plStack_58 = plVar8;
    if (uVar6 == 0) {
      local_78 = 0;
    }
    else {
      local_78 = (**(code **)(*(long *)*plVar8 + 0x10))((long *)*plVar8,uVar6 << 5,8);
      if (local_78 == 0) {
        (**(code **)(*(long *)*plVar8 + 0xb8))((long *)*plVar8);
      }
    }
    lVar4 = local_78 + lVar9 * 0x20;
    lVar1 = local_78 + uVar6 * 0x20;
    local_70 = lVar4;
    local_60 = lVar1;
    FUN_01c6c97c(plVar8,lVar4,param_2);
    lVar9 = lVar4 + 0x20;
    lVar3 = *param_1;
    lVar7 = param_1[1];
    local_68 = lVar9;
    if (lVar7 == lVar3) {
      local_68 = lVar3;
    }
    else {
      do {
        lVar4 = lVar4 + -0x20;
        lVar7 = lVar7 + -0x20;
        FUN_01c6ca80(plVar8,lVar4,lVar7);
      } while (lVar3 != lVar7);
      lVar3 = *param_1;
      local_68 = param_1[1];
    }
    *param_1 = lVar4;
    param_1[1] = lVar9;
    local_60 = param_1[2];
    param_1[2] = lVar1;
    local_78 = lVar3;
    local_70 = lVar3;
    FUN_01da6df8(&local_78);
    lVar9 = local_78;
    if (local_78 != 0) {
      lVar4 = local_60 - local_78;
      plVar8 = (long *)*plStack_58;
      uVar2 = (**(code **)(*plVar8 + 0xc0))(plVar8);
      if ((uVar2 & 1) != 0) {
        lVar1 = tpidr_el0;
        if (*(char *)(lVar1 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar1 + 0x38d488) = 1;
          *(undefined8 *)(lVar1 + 0x38d478) = 0;
          *(undefined8 *)(lVar1 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar1 + 0x38d480)) {
          FUN_02bcc824(plVar8,lVar9,lVar4,8);
          return;
        }
      }
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar9,lVar4,8);
    }
  }
  return;
}


