/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01665dd4; name: FUN_01665dd4
 */


void FUN_01665dd4(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  plVar6 = param_1 + 3;
  lVar1 = FUN_016660cc(param_1,(param_1[1] - *param_1 >> 2) + 1);
  lVar5 = *param_1;
  lVar8 = param_1[1];
  lVar2 = 0;
  if ((lVar1 != 0) &&
     (lVar2 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,lVar1 << 2,4), lVar2 == 0)) {
    (**(code **)(*(long *)*plVar6 + 0xb8))((long *)*plVar6);
  }
  lVar8 = lVar2 + (lVar8 - lVar5 >> 2) * 4;
  FUN_01665ff4(plVar6,lVar8,param_2);
  lVar4 = *param_1;
  lVar7 = param_1[1];
  lVar5 = lVar8 + 4;
  if (lVar7 != lVar4) {
    do {
      lVar8 = lVar8 + -4;
      lVar7 = lVar7 + -4;
      FUN_01665cfc(plVar6,lVar8,lVar7);
    } while (lVar4 != lVar7);
    lVar4 = *param_1;
  }
  *param_1 = lVar8;
  param_1[1] = lVar5;
  lVar5 = param_1[2];
  param_1[2] = lVar2 + lVar1 * 4;
  if (lVar4 == 0) {
    return;
  }
  plVar6 = (long *)*plVar6;
  uVar3 = (**(code **)(*plVar6 + 0xc0))(plVar6);
  if ((uVar3 & 1) != 0) {
    lVar8 = tpidr_el0;
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar8 + 0x38d480)) {
      FUN_02bcc824(plVar6,lVar4,lVar5 - lVar4,4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01665f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))(plVar6,lVar4,lVar5 - lVar4,4);
  return;
}


