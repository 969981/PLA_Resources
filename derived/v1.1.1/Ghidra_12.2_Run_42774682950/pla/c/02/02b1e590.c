/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b1e590; name: FUN_02b1e590
 */


void FUN_02b1e590(long *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  uVar2 = param_1[1];
  plVar6 = param_1 + 3;
  if (uVar2 < (ulong)param_1[2]) {
    FUN_00b834f4(plVar6,uVar2,param_2);
    param_1[1] = param_1[1] + 0x20;
  }
  else {
    uVar5 = param_1[4];
    lVar9 = (long)(uVar2 - *param_1) >> 5;
    uVar2 = lVar9 + 1;
    if (0x7ffffffffffffffe < uVar5) {
      uVar5 = 0x7fffffffffffffff;
    }
    if (uVar5 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = param_1[2] - *param_1;
    uVar4 = lVar3 >> 4;
    if (uVar2 <= uVar4) {
      uVar2 = uVar4;
    }
    if ((ulong)(lVar3 >> 5) < uVar5 >> 1) {
      uVar5 = uVar2;
    }
    if (uVar5 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,uVar5 << 5,8);
      if (lVar3 == 0) {
        (**(code **)(*(long *)*plVar6 + 0xb8))((long *)*plVar6);
      }
    }
    lVar10 = lVar3 + lVar9 * 0x20;
    FUN_00b834f4(plVar6,lVar10,param_2);
    lVar8 = *param_1;
    lVar7 = param_1[1];
    lVar9 = lVar10 + 0x20;
    if (lVar7 == lVar8) {
      lVar7 = lVar8;
    }
    else {
      do {
        lVar10 = lVar10 + -0x20;
        lVar7 = lVar7 + -0x20;
        FUN_00b835e0(plVar6,lVar10,lVar7);
      } while (lVar8 != lVar7);
      lVar8 = *param_1;
      lVar7 = param_1[1];
    }
    *param_1 = lVar10;
    param_1[1] = lVar9;
    lVar9 = param_1[2];
    param_1[2] = lVar3 + uVar5 * 0x20;
    while (lVar7 != lVar8) {
      plVar1 = (long *)(lVar7 + -8);
      lVar7 = lVar7 + -0x20;
      if ((long *)*plVar1 != (long *)0x0) {
        (**(code **)(*(long *)*plVar1 + 0x20))();
      }
    }
    if (lVar8 != 0) {
      plVar6 = (long *)*plVar6;
      uVar2 = (**(code **)(*plVar6 + 0xc0))(plVar6);
      if ((uVar2 & 1) != 0) {
        lVar3 = tpidr_el0;
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar3 + 0x38d480)) {
          FUN_02bcc824(plVar6,lVar8,lVar9 - lVar8,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x02b1e738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar8,lVar9 - lVar8,8);
      return;
    }
  }
  return;
}


