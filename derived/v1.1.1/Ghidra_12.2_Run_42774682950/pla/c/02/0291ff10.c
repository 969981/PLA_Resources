/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0291ff10; name: FUN_0291ff10
 */


void FUN_0291ff10(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    FUN_02924448(param_1[3],uVar2,param_2,param_3);
    param_1[1] = param_1[1] + 0x28;
  }
  else {
    uVar6 = param_1[4];
    lVar5 = (long)(uVar2 - *param_1) >> 3;
    if (0x7ffffffffffffffe < uVar6) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar2 = lVar5 * -0x3333333333333333 + 1;
    if (uVar6 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = param_1[2] - *param_1 >> 3;
    uVar4 = lVar3 * -0x6666666666666666;
    if (uVar2 <= uVar4) {
      uVar2 = uVar4;
    }
    plVar7 = param_1 + 3;
    if ((ulong)(lVar3 * -0x3333333333333333) < uVar6 >> 1) {
      uVar6 = uVar2;
    }
    if (uVar6 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (**(code **)(*(long *)*plVar7 + 0x10))((long *)*plVar7,uVar6 * 0x28,8);
      if (lVar3 == 0) {
        (**(code **)(*(long *)*plVar7 + 0xb8))();
      }
    }
    lVar10 = lVar3 + lVar5 * 8;
    FUN_02924448(param_1[3],lVar10,param_2,param_3);
    lVar9 = *param_1;
    lVar8 = param_1[1];
    lVar5 = lVar10 + 0x28;
    if (lVar8 == lVar9) {
      lVar8 = lVar9;
    }
    else {
      do {
        lVar10 = lVar10 + -0x28;
        lVar8 = lVar8 + -0x28;
        FUN_02924564(plVar7,lVar10,lVar8);
      } while (lVar9 != lVar8);
      lVar9 = *param_1;
      lVar8 = param_1[1];
    }
    *param_1 = lVar10;
    param_1[1] = lVar5;
    lVar5 = param_1[2];
    param_1[2] = lVar3 + uVar6 * 0x28;
    while (lVar8 != lVar9) {
      plVar1 = (long *)(lVar8 + -0x10);
      lVar8 = lVar8 + -0x28;
      if ((long *)*plVar1 != (long *)0x0) {
        (**(code **)(*(long *)*plVar1 + 0x20))();
      }
    }
    if (lVar9 != 0) {
      plVar7 = (long *)*plVar7;
      uVar2 = (**(code **)(*plVar7 + 0xc0))(plVar7);
      if ((uVar2 & 1) != 0) {
        lVar3 = tpidr_el0;
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar3 + 0x38d480)) {
          FUN_02bcc824(plVar7,lVar9,lVar5 - lVar9,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x029200f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar9,lVar5 - lVar9,8);
      return;
    }
  }
  return;
}


