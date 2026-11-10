/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016ae07c; name: FUN_016ae07c
 */


void FUN_016ae07c(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  if ((ulong)param_1[1] < (ulong)param_1[2]) {
    FUN_00e8db8c(param_1 + 3,param_1[1],param_2);
    param_1[1] = param_1[1] + 8;
    return;
  }
  plVar4 = param_1 + 3;
  lVar1 = FUN_016ae308(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar8 = *param_1;
  lVar7 = param_1[1];
  lVar2 = 0;
  if ((lVar1 != 0) &&
     (lVar2 = (**(code **)(*(long *)*plVar4 + 0x10))((long *)*plVar4,lVar1 << 3,8), lVar2 == 0)) {
    (**(code **)(*(long *)*plVar4 + 0xb8))((long *)*plVar4);
  }
  lVar7 = lVar2 + (lVar7 - lVar8 >> 3) * 8;
  FUN_00e8db8c(plVar4,lVar7,param_2);
  plVar6 = (long *)*param_1;
  plVar5 = (long *)param_1[1];
  lVar8 = lVar7 + 8;
  if (plVar5 == plVar6) {
    plVar5 = plVar6;
  }
  else {
    do {
      lVar7 = lVar7 + -8;
      plVar5 = plVar5 + -1;
      FUN_00e8dc78(plVar4,lVar7,plVar5);
    } while (plVar6 != plVar5);
    plVar6 = (long *)*param_1;
    plVar5 = (long *)param_1[1];
  }
  *param_1 = lVar7;
  param_1[1] = lVar8;
  lVar8 = param_1[2];
  param_1[2] = lVar2 + lVar1 * 8;
  while (plVar5 != plVar6) {
    plVar5 = plVar5 + -1;
    if ((long *)*plVar5 != (long *)0x0) {
      (**(code **)(*(long *)*plVar5 + 0x20))();
    }
  }
  if (plVar6 == (long *)0x0) {
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
      FUN_02bcc824(plVar4,plVar6,lVar8 - (long)plVar6,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x016ae268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))(plVar4,plVar6,lVar8 - (long)plVar6,8);
  return;
}


