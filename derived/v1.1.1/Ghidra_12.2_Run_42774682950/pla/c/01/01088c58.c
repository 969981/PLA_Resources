/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01088c58; name: FUN_01088c58
 */


void FUN_01088c58(long *param_1,ulong param_2)

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
  
  plVar6 = param_1 + 3;
  if ((ulong)(param_1[2] - param_1[1] >> 2) < param_2) {
    uVar5 = param_1[4];
    lVar8 = param_1[1] - *param_1 >> 2;
    uVar1 = lVar8 + param_2;
    if (0x7ffffffffffffffe < uVar5) {
      uVar5 = 0x7fffffffffffffff;
    }
    if (uVar5 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar2 = param_1[2] - *param_1;
    uVar3 = lVar2 >> 1;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    if ((ulong)(lVar2 >> 2) < uVar5 >> 1) {
      uVar5 = uVar1;
    }
    if (uVar5 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,uVar5 << 2,4);
      if (lVar2 == 0) {
        (**(code **)(*(long *)*plVar6 + 0xb8))();
      }
    }
    lVar9 = lVar2 + lVar8 * 4;
    lVar8 = lVar9;
    do {
      FUN_01088ec4(plVar6,lVar8);
      lVar8 = lVar8 + 4;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    lVar7 = *param_1;
    lVar4 = param_1[1];
    if (lVar4 != lVar7) {
      do {
        lVar9 = lVar9 + -4;
        lVar4 = lVar4 + -4;
        FUN_01088f90(plVar6,lVar9,lVar4);
      } while (lVar7 != lVar4);
      lVar7 = *param_1;
    }
    lVar4 = param_1[2];
    *param_1 = lVar9;
    param_1[1] = lVar8;
    param_1[2] = lVar2 + uVar5 * 4;
    if (lVar7 != 0) {
      plVar6 = (long *)*plVar6;
      uVar1 = (**(code **)(*plVar6 + 0xc0))(plVar6);
      if ((uVar1 & 1) != 0) {
        lVar8 = tpidr_el0;
        if (*(char *)(lVar8 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar8 + 0x38d488) = 1;
          *(undefined8 *)(lVar8 + 0x38d478) = 0;
          *(undefined8 *)(lVar8 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar8 + 0x38d480)) {
          FUN_02bcc824(plVar6,lVar7,lVar4 - lVar7,4);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x01088e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar7,lVar4 - lVar7,4);
      return;
    }
  }
  else {
    do {
      FUN_01088ec4(plVar6);
      param_2 = param_2 - 1;
      param_1[1] = param_1[1] + 4;
    } while (param_2 != 0);
  }
  return;
}


