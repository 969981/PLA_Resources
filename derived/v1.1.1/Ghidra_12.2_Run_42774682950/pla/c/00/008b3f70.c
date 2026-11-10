/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008b3f70; name: FUN_008b3f70
 */


void FUN_008b3f70(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  plVar7 = param_1 + 3;
  lVar3 = FUN_008b42ac(param_1,(param_1[1] - *param_1) + 1);
  lVar6 = *param_1;
  lVar2 = param_1[1];
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*(long *)*plVar7 + 0x10))((long *)*plVar7,lVar3,1);
    if (lVar4 == 0) {
      (**(code **)(*(long *)*plVar7 + 0xb8))();
    }
  }
  lVar1 = lVar4 + (lVar2 - lVar6);
  FUN_008b41d4(plVar7,lVar1,param_2);
  lVar8 = *param_1;
  lVar10 = param_1[1];
  lVar9 = lVar1;
  if (lVar10 != lVar8) {
    lVar9 = lVar1 + -1;
    FUN_008b41d4(plVar7,lVar9,lVar10 + -1);
    if (lVar10 + -1 != lVar8) {
      lVar9 = lVar1 + -2;
      FUN_008b41d4(plVar7,lVar9,lVar10 + -2);
      if (lVar10 + -2 != lVar8) {
        lVar6 = (lVar2 - lVar6) + lVar4 + -3;
        do {
          lVar9 = lVar6;
          FUN_008b41d4(plVar7,lVar9,lVar10 + -3);
          lVar10 = lVar10 + -1;
          lVar6 = lVar9 + -1;
        } while (lVar8 + 2 != lVar10);
      }
    }
    lVar8 = *param_1;
  }
  lVar6 = param_1[2];
  *param_1 = lVar9;
  param_1[1] = lVar1 + 1;
  param_1[2] = lVar4 + lVar3;
  if (lVar8 == 0) {
    return;
  }
  plVar7 = (long *)*plVar7;
  uVar5 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  if ((uVar5 & 1) != 0) {
    lVar2 = tpidr_el0;
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar2 + 0x38d480)) {
      FUN_02bcc824(plVar7,lVar8,lVar6 - lVar8,1);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x008b40e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x18))(plVar7,lVar8,lVar6 - lVar8,1);
  return;
}


