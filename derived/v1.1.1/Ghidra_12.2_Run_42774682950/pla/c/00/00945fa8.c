/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00945fa8; name: FUN_00945fa8
 */


void FUN_00945fa8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  uVar1 = param_1[1];
  if (uVar1 < (ulong)param_1[2]) {
    FUN_00946cb4(param_1[3],uVar1,param_2,param_3);
    param_1[1] = param_1[1] + 0x18;
  }
  else {
    uVar5 = param_1[4];
    lVar4 = (long)(uVar1 - *param_1) >> 3;
    if (0x7ffffffffffffffe < uVar5) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar1 = lVar4 * -0x5555555555555555 + 1;
    if (uVar5 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar2 = param_1[2] - *param_1 >> 3;
    uVar3 = lVar2 * 0x5555555555555556;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    plVar6 = param_1 + 3;
    if ((ulong)(lVar2 * -0x5555555555555555) < uVar5 >> 1) {
      uVar5 = uVar1;
    }
    if (uVar5 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,uVar5 * 0x18,8);
      if (lVar2 == 0) {
        (**(code **)(*(long *)*plVar6 + 0xb8))();
      }
    }
    lVar9 = lVar2 + lVar4 * 8;
    FUN_00946cb4(param_1[3],lVar9,param_2,param_3);
    lVar7 = *param_1;
    lVar8 = param_1[1];
    lVar4 = lVar9 + 0x18;
    if (lVar8 == lVar7) {
      lVar8 = lVar7;
    }
    else {
      do {
        lVar9 = lVar9 + -0x18;
        lVar8 = lVar8 + -0x18;
        FUN_00946e5c(plVar6,lVar9,lVar8);
      } while (lVar7 != lVar8);
      lVar7 = *param_1;
      lVar8 = param_1[1];
    }
    *param_1 = lVar9;
    param_1[1] = lVar4;
    lVar4 = param_1[2];
    param_1[2] = lVar2 + uVar5 * 0x18;
    if ((lVar8 != lVar7) && (FUN_008c4500(lVar8 + -0x18), lVar8 + -0x18 != lVar7)) {
      do {
        FUN_008c4500(lVar8 + -0x30);
        lVar8 = lVar8 + -0x18;
      } while (lVar7 + 0x18 != lVar8);
    }
    if (lVar7 != 0) {
      plVar6 = (long *)*plVar6;
      uVar1 = (**(code **)(*plVar6 + 0xc0))(plVar6);
      if ((uVar1 & 1) != 0) {
        lVar2 = tpidr_el0;
        if (*(char *)(lVar2 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar2 + 0x38d488) = 1;
          *(undefined8 *)(lVar2 + 0x38d478) = 0;
          *(undefined8 *)(lVar2 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar2 + 0x38d480)) {
          FUN_02bcc824(plVar6,lVar7,lVar4 - lVar7,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0094615c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar7,lVar4 - lVar7,8);
      return;
    }
  }
  return;
}


