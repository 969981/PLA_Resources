/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028cec70; name: FUN_028cec70
 */


void FUN_028cec70(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  plVar5 = param_1 + 3;
  if ((ulong)(param_1[2] - param_1[1] >> 1) < param_2) {
    uVar4 = param_1[4];
    lVar7 = param_1[1] - *param_1 >> 1;
    uVar2 = lVar7 + param_2;
    if (0x7ffffffffffffffe < uVar4) {
      uVar4 = 0x7fffffffffffffff;
    }
    if (uVar4 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    uVar3 = param_1[2] - *param_1;
    if (uVar2 <= uVar3) {
      uVar2 = uVar3;
    }
    if (uVar4 >> 1 <= (ulong)((long)uVar3 >> 1)) {
      uVar2 = uVar4;
    }
    if (uVar2 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = (**(code **)(*(long *)*plVar5 + 0x10))((long *)*plVar5,uVar2 << 1,2);
      if (lVar1 == 0) {
        (**(code **)(*(long *)*plVar5 + 0xb8))();
      }
    }
    lVar8 = lVar1 + lVar7 * 2;
    lVar7 = lVar8;
    do {
      FUN_028ceed0(plVar5,lVar7);
      lVar7 = lVar7 + 2;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    lVar6 = *param_1;
    lVar9 = param_1[1];
    if (lVar9 != lVar6) {
      do {
        lVar8 = lVar8 + -2;
        lVar9 = lVar9 + -2;
        FUN_028cef9c(plVar5,lVar8,lVar9);
      } while (lVar6 != lVar9);
      lVar6 = *param_1;
    }
    lVar9 = param_1[2];
    *param_1 = lVar8;
    param_1[1] = lVar7;
    param_1[2] = lVar1 + uVar2 * 2;
    if (lVar6 != 0) {
      plVar5 = (long *)*plVar5;
      uVar2 = (**(code **)(*plVar5 + 0xc0))(plVar5);
      if ((uVar2 & 1) != 0) {
        lVar7 = tpidr_el0;
        if (*(char *)(lVar7 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar7 + 0x38d488) = 1;
          *(undefined8 *)(lVar7 + 0x38d478) = 0;
          *(undefined8 *)(lVar7 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar7 + 0x38d480)) {
          FUN_02bcc824(plVar5,lVar6,lVar9 - lVar6,2);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x028cee30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar6,lVar9 - lVar6,2);
      return;
    }
  }
  else {
    do {
      FUN_028ceed0(plVar5);
      param_2 = param_2 - 1;
      param_1[1] = param_1[1] + 2;
    } while (param_2 != 0);
  }
  return;
}


