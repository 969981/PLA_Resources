/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01471a84; name: FUN_01471a84
 */


void FUN_01471a84(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  uVar3 = param_1[1];
  plVar6 = param_1 + 3;
  if (uVar3 < (ulong)param_1[2]) {
    FUN_008b41d4(plVar6,uVar3,param_2);
    param_1[1] = param_1[1] + 1;
    return;
  }
  lVar9 = uVar3 - *param_1;
  uVar5 = param_1[4];
  uVar3 = lVar9 + 1;
  if (0x7ffffffffffffffe < uVar5) {
    uVar5 = 0x7fffffffffffffff;
  }
  if (uVar5 < uVar3) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  uVar4 = param_1[2] - *param_1;
  if (uVar4 < uVar5 >> 1) {
    uVar4 = uVar4 * 2;
    uVar5 = uVar3;
    if (uVar3 <= uVar4) {
      uVar5 = uVar4;
    }
  }
  if (uVar5 != 0) {
    lVar2 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,uVar5,1);
    if (lVar2 != 0) goto LAB_01471b10;
    (**(code **)(*(long *)*plVar6 + 0xb8))();
  }
  lVar2 = 0;
LAB_01471b10:
  lVar9 = lVar2 + lVar9;
  FUN_008b41d4(plVar6,lVar9,param_2);
  lVar7 = *param_1;
  lVar8 = param_1[1];
  lVar1 = lVar9 + 1;
  if (lVar8 != lVar7) {
    do {
      lVar9 = lVar9 + -1;
      lVar8 = lVar8 + -1;
      FUN_008b41d4(plVar6,lVar9,lVar8);
    } while (lVar7 != lVar8);
    lVar7 = *param_1;
  }
  lVar8 = param_1[2];
  *param_1 = lVar9;
  param_1[1] = lVar1;
  param_1[2] = lVar2 + uVar5;
  if (lVar7 == 0) {
    return;
  }
  plVar6 = (long *)*plVar6;
  uVar3 = (**(code **)(*plVar6 + 0xc0))(plVar6);
  if ((uVar3 & 1) != 0) {
    lVar9 = tpidr_el0;
    if (*(char *)(lVar9 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar9 + 0x38d488) = 1;
      *(undefined8 *)(lVar9 + 0x38d478) = 0;
      *(undefined8 *)(lVar9 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar9 + 0x38d480)) {
      FUN_02bcc824(plVar6,lVar7,lVar8 - lVar7,1);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01471bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))(plVar6,lVar7,lVar8 - lVar7,1);
  return;
}


