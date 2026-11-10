/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0290aff0; name: FUN_0290aff0
 */


void FUN_0290aff0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  uVar1 = param_1[1];
  if (uVar1 < (ulong)param_1[2]) {
    FUN_0290e690(param_1[3],uVar1,param_2,param_3);
    param_1[1] = param_1[1] + 0x10;
  }
  else {
    uVar4 = param_1[4];
    lVar8 = (long)(uVar1 - *param_1) >> 4;
    uVar1 = lVar8 + 1;
    if (0x7ffffffffffffffe < uVar4) {
      uVar4 = 0x7fffffffffffffff;
    }
    if (uVar4 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar2 = param_1[2] - *param_1;
    uVar3 = lVar2 >> 3;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    plVar5 = param_1 + 3;
    if ((ulong)(lVar2 >> 4) < uVar4 >> 1) {
      uVar4 = uVar1;
    }
    if (uVar4 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (**(code **)(*(long *)*plVar5 + 0x10))((long *)*plVar5,uVar4 << 4,8);
      if (lVar2 == 0) {
        (**(code **)(*(long *)*plVar5 + 0xb8))();
      }
    }
    lVar9 = lVar2 + lVar8 * 0x10;
    FUN_0290e690(param_1[3],lVar9,param_2,param_3);
    plVar7 = (long *)*param_1;
    plVar6 = (long *)param_1[1];
    lVar8 = lVar9 + 0x10;
    if (plVar6 == plVar7) {
      plVar6 = plVar7;
    }
    else {
      do {
        lVar9 = lVar9 + -0x10;
        plVar6 = plVar6 + -2;
        FUN_0290e248(plVar5,lVar9,plVar6);
      } while (plVar7 != plVar6);
      plVar7 = (long *)*param_1;
      plVar6 = (long *)param_1[1];
    }
    *param_1 = lVar9;
    param_1[1] = lVar8;
    lVar8 = param_1[2];
    param_1[2] = lVar2 + uVar4 * 0x10;
    while (plVar6 != plVar7) {
      plVar6 = plVar6 + -2;
      if ((long *)*plVar6 != (long *)0x0) {
        (**(code **)(*(long *)*plVar6 + 0x20))();
      }
    }
    if (plVar7 != (long *)0x0) {
      plVar5 = (long *)*plVar5;
      uVar1 = (**(code **)(*plVar5 + 0xc0))(plVar5);
      if ((uVar1 & 1) != 0) {
        lVar2 = tpidr_el0;
        if (*(char *)(lVar2 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar2 + 0x38d488) = 1;
          *(undefined8 *)(lVar2 + 0x38d478) = 0;
          *(undefined8 *)(lVar2 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar2 + 0x38d480)) {
          FUN_02bcc824(plVar5,plVar7,lVar8 - (long)plVar7,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0290b1c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x18))(plVar5,plVar7,lVar8 - (long)plVar7,8);
      return;
    }
  }
  return;
}


