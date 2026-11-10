/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0152b064; name: FUN_0152b064
 */


void FUN_0152b064(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  plVar5 = param_1 + 3;
  lVar2 = FUN_0152b440(param_1,(param_1[1] - *param_1 >> 4) * -0x3333333333333333 + 1);
  lVar9 = *param_1;
  lVar6 = param_1[1];
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (**(code **)(*(long *)*plVar5 + 0x10))((long *)*plVar5,lVar2 * 0x50,8);
    if (lVar3 == 0) {
      (**(code **)(*(long *)*plVar5 + 0xb8))();
    }
  }
  lVar8 = lVar3 + (lVar6 - lVar9 >> 4) * 0x10;
  FUN_0152b2e4(plVar5,lVar8,param_2);
  lVar6 = *param_1;
  lVar7 = param_1[1];
  lVar9 = lVar8 + 0x50;
  if (lVar7 == lVar6) {
    lVar7 = lVar6;
  }
  else {
    do {
      lVar8 = lVar8 + -0x50;
      lVar7 = lVar7 + -0x50;
      FUN_0152b2e4(plVar5,lVar8,lVar7);
    } while (lVar6 != lVar7);
    lVar6 = *param_1;
    lVar7 = param_1[1];
  }
  *param_1 = lVar8;
  param_1[1] = lVar9;
  lVar9 = param_1[2];
  param_1[2] = lVar3 + lVar2 * 0x50;
  while (lVar7 != lVar6) {
    if (*(long **)(lVar7 + -8) != (long *)0x0) {
      (**(code **)(**(long **)(lVar7 + -8) + 0x20))();
    }
    if (*(long **)(lVar7 + -0x30) != (long *)0x0) {
      (**(code **)(**(long **)(lVar7 + -0x30) + 0x20))();
    }
    plVar1 = (long *)(lVar7 + -0x50);
    lVar7 = lVar7 + -0x50;
    if ((long *)*plVar1 != (long *)0x0) {
      (**(code **)(*(long *)*plVar1 + 0x20))();
    }
  }
  if (lVar6 == 0) {
    return;
  }
  plVar5 = (long *)*plVar5;
  uVar4 = (**(code **)(*plVar5 + 0xc0))(plVar5);
  if ((uVar4 & 1) != 0) {
    lVar2 = tpidr_el0;
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar2 + 0x38d480)) {
      FUN_02bcc824(plVar5,lVar6,lVar9 - lVar6,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0152b250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))(plVar5,lVar6,lVar9 - lVar6,8);
  return;
}


