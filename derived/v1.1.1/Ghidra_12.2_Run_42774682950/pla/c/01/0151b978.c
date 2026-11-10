/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0151b978; name: FUN_0151b978
 */


void FUN_0151b978(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if ((ulong)param_1[1] < (ulong)param_1[2]) {
    FUN_00d2739c(param_1 + 3,param_1[1],param_2);
    param_1[1] = param_1[1] + 0x20;
    return;
  }
  plVar4 = param_1 + 3;
  lVar1 = FUN_0151bc48(param_1,(param_1[1] - *param_1 >> 5) + 1);
  lVar8 = *param_1;
  lVar7 = param_1[1];
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (**(code **)(*(long *)*plVar4 + 0x10))((long *)*plVar4,lVar1 << 5,8);
    if (lVar2 == 0) {
      (**(code **)(*(long *)*plVar4 + 0xb8))();
    }
  }
  lVar7 = lVar2 + (lVar7 - lVar8 >> 5) * 0x20;
  FUN_00d2739c(plVar4,lVar7,param_2);
  lVar6 = *param_1;
  lVar5 = param_1[1];
  lVar8 = lVar7 + 0x20;
  if (lVar5 == lVar6) {
    lVar5 = lVar6;
  }
  else {
    do {
      lVar7 = lVar7 + -0x20;
      lVar5 = lVar5 + -0x20;
      FUN_00d2739c(plVar4,lVar7,lVar5);
    } while (lVar6 != lVar5);
    lVar6 = *param_1;
    lVar5 = param_1[1];
  }
  *param_1 = lVar7;
  param_1[1] = lVar8;
  lVar8 = param_1[2];
  param_1[2] = lVar2 + lVar1 * 0x20;
  while (lVar5 != lVar6) {
    lVar5 = lVar5 + -0x20;
    FUN_0151bc98(lVar5);
  }
  if (lVar6 == 0) {
    return;
  }
  plVar4 = (long *)*plVar4;
  uVar3 = (**(code **)(*plVar4 + 0xc0))(plVar4);
  if ((uVar3 & 1) != 0) {
    lVar7 = tpidr_el0;
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar7 + 0x38d480)) {
      FUN_02bcc824(plVar4,lVar6,lVar8 - lVar6,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0151bbb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))(plVar4,lVar6,lVar8 - lVar6,8);
  return;
}


