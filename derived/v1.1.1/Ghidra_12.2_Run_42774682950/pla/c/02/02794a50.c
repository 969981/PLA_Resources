/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02794a50; name: FUN_02794a50
 */


void FUN_02794a50(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  plVar5 = param_1 + 3;
  lVar2 = FUN_02794c58(param_1,(param_1[1] - *param_1 >> 2) + 1);
  lVar1 = *param_1;
  lVar7 = param_1[1];
  lVar3 = 0;
  if ((lVar2 != 0) &&
     (lVar3 = (**(code **)(*(long *)*plVar5 + 0x10))((long *)*plVar5,lVar2 << 2,4), lVar3 == 0)) {
    (**(code **)(*(long *)*plVar5 + 0xb8))((long *)*plVar5);
  }
  lVar7 = lVar3 + (lVar7 - lVar1 >> 2) * 4;
  FUN_01665cfc(plVar5,lVar7,param_2);
  lVar6 = *param_1;
  lVar8 = param_1[1];
  lVar1 = lVar7 + 4;
  if (lVar8 != lVar6) {
    do {
      lVar7 = lVar7 + -4;
      lVar8 = lVar8 + -4;
      FUN_01665cfc(plVar5,lVar7,lVar8);
    } while (lVar6 != lVar8);
    lVar6 = *param_1;
  }
  lVar8 = param_1[2];
  *param_1 = lVar7;
  param_1[1] = lVar1;
  param_1[2] = lVar3 + lVar2 * 4;
  if (lVar6 == 0) {
    return;
  }
  plVar5 = (long *)*plVar5;
  uVar4 = (**(code **)(*plVar5 + 0xc0))(plVar5);
  if ((uVar4 & 1) != 0) {
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar1 + 0x38d480)) {
      FUN_02bcc824(plVar5,lVar6,lVar8 - lVar6,4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02794bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))(plVar5,lVar6,lVar8 - lVar6,4);
  return;
}


