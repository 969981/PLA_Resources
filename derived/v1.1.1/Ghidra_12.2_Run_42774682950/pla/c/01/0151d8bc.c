/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0151d8bc; name: FUN_0151d8bc
 */


void FUN_0151d8bc(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  plVar4 = param_1 + 3;
  lVar1 = FUN_0151db00(param_1,(param_1[1] - *param_1 >> 5) + 1);
  lVar9 = *param_1;
  lVar8 = param_1[1];
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (**(code **)(*(long *)*plVar4 + 0x10))((long *)*plVar4,lVar1 << 5,8);
    if (lVar2 == 0) {
      (**(code **)(*(long *)*plVar4 + 0xb8))();
    }
  }
  lVar8 = lVar2 + (lVar8 - lVar9 >> 5) * 0x20;
  FUN_00d2739c(plVar4,lVar8,param_2);
  plVar7 = (long *)*param_1;
  plVar6 = (long *)param_1[1];
  lVar9 = lVar8 + 0x20;
  if (plVar6 == plVar7) {
    plVar6 = plVar7;
  }
  else {
    do {
      lVar8 = lVar8 + -0x20;
      plVar6 = plVar6 + -4;
      FUN_00d2739c(plVar4,lVar8,plVar6);
    } while (plVar7 != plVar6);
    plVar7 = (long *)*param_1;
    plVar6 = (long *)param_1[1];
  }
  *param_1 = lVar8;
  param_1[1] = lVar9;
  lVar9 = param_1[2];
  param_1[2] = lVar2 + lVar1 * 0x20;
  if (plVar6 != plVar7) {
    do {
      plVar5 = plVar6 + -4;
      lVar8 = *plVar5;
      *plVar5 = 0;
      if (lVar8 != 0) {
        FUN_01518e0c(plVar6 + -3);
      }
      plVar6 = plVar5;
    } while (plVar7 != plVar5);
  }
  if (plVar7 == (long *)0x0) {
    return;
  }
  plVar4 = (long *)*plVar4;
  uVar3 = (**(code **)(*plVar4 + 0xc0))(plVar4);
  if ((uVar3 & 1) != 0) {
    lVar8 = tpidr_el0;
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar8 + 0x38d480)) {
      FUN_02bcc824(plVar4,plVar7,lVar9 - (long)plVar7,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0151da6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))(plVar4,plVar7,lVar9 - (long)plVar7,8);
  return;
}


