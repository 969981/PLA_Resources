/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c1cc94; name: FUN_02c1cc94
 */


void FUN_02c1cc94(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  plVar6 = param_1 + 3;
  if ((ulong)(param_1[2] - param_1[1] >> 4) < param_2) {
    lVar8 = param_1[1] - *param_1 >> 4;
    uVar5 = param_1[4];
    uVar2 = lVar8 + param_2;
    if (0x7ffffffffffffffe < uVar5) {
      uVar5 = 0x7fffffffffffffff;
    }
    if (uVar5 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = param_1[2] - *param_1;
    uVar4 = lVar3 >> 3;
    uVar1 = uVar2;
    if (uVar2 <= uVar4) {
      uVar1 = uVar4;
    }
    if ((ulong)(lVar3 >> 4) < uVar5 >> 1) {
      uVar5 = uVar1;
    }
    if (uVar5 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,uVar5 << 4,0x10);
      if (lVar3 == 0) {
        (**(code **)(*(long *)*plVar6 + 0xb8))();
      }
    }
    lVar8 = lVar3 + lVar8 * 0x10;
    do {
      FUN_02c1cef0(plVar6);
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    lVar7 = *param_1;
    lVar9 = param_1[1];
    if (lVar9 != lVar7) {
      do {
        lVar8 = lVar8 + -0x10;
        lVar9 = lVar9 + -0x10;
        FUN_02c1cf8c(plVar6,lVar8,lVar9);
      } while (lVar7 != lVar9);
      lVar7 = *param_1;
    }
    lVar9 = param_1[2];
    *param_1 = lVar8;
    param_1[1] = lVar3 + uVar2 * 0x10;
    param_1[2] = lVar3 + uVar5 * 0x10;
    if (lVar7 != 0) {
      plVar6 = (long *)*plVar6;
      uVar2 = (**(code **)(*plVar6 + 0xc0))(plVar6);
      if ((uVar2 & 1) != 0) {
        lVar8 = tpidr_el0;
        if (*(char *)(lVar8 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar8 + 0x38d488) = 1;
          *(undefined8 *)(lVar8 + 0x38d478) = 0;
          *(undefined8 *)(lVar8 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar8 + 0x38d480)) {
          FUN_02bcc824(plVar6,lVar7,lVar9 - lVar7,0x10);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x02c1ce50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar7,lVar9 - lVar7,0x10);
      return;
    }
  }
  else {
    do {
      FUN_02c1cef0(plVar6);
      param_2 = param_2 - 1;
      param_1[1] = param_1[1] + 0x10;
    } while (param_2 != 0);
  }
  return;
}


