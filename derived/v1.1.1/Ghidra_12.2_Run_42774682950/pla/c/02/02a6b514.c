/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a6b514; name: FUN_02a6b514
 */


void FUN_02a6b514(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = param_1[1];
  plVar5 = param_1 + 3;
  if (lVar7 == param_1[2]) {
    uVar4 = param_1[4];
    lVar7 = lVar7 - *param_1 >> 3;
    uVar1 = lVar7 + 1;
    if (0x7ffffffffffffffe < uVar4) {
      uVar4 = 0x7fffffffffffffff;
    }
    if (uVar4 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar2 = param_1[2] - *param_1;
    uVar3 = lVar2 >> 2;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    if ((ulong)(lVar2 >> 3) < uVar4 >> 1) {
      uVar4 = uVar1;
    }
    if (uVar4 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (**(code **)(*(long *)*plVar5 + 0x10))((long *)*plVar5,uVar4 << 3,8);
      if (lVar2 == 0) {
        (**(code **)(*(long *)*plVar5 + 0xb8))();
      }
    }
    lVar8 = lVar2 + lVar7 * 8;
    FUN_02a6babc(plVar5,lVar8,param_2);
    lVar6 = *param_1;
    lVar9 = param_1[1];
    lVar7 = lVar8 + 8;
    if (lVar9 != lVar6) {
      do {
        lVar8 = lVar8 + -8;
        lVar9 = lVar9 + -8;
        FUN_02a6b9e4(plVar5,lVar8,lVar9);
      } while (lVar6 != lVar9);
      lVar6 = *param_1;
    }
    lVar9 = param_1[2];
    *param_1 = lVar8;
    param_1[1] = lVar7;
    param_1[2] = lVar2 + uVar4 * 8;
    if (lVar6 != 0) {
      plVar5 = (long *)*plVar5;
      uVar1 = (**(code **)(*plVar5 + 0xc0))(plVar5);
      if ((uVar1 & 1) != 0) {
        lVar7 = tpidr_el0;
        if (*(char *)(lVar7 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar7 + 0x38d488) = 1;
          *(undefined8 *)(lVar7 + 0x38d478) = 0;
          *(undefined8 *)(lVar7 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar7 + 0x38d480)) {
          FUN_02bcc824(plVar5,lVar6,lVar9 - lVar6,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x02a6b6dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar6,lVar9 - lVar6,8);
      return;
    }
  }
  else {
    FUN_02a6babc(plVar5,lVar7,param_2);
    param_1[1] = param_1[1] + 8;
  }
  return;
}


