/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01666e04; name: FUN_01666e04
 */


void FUN_01666e04(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  plVar6 = param_1 + 3;
  lVar2 = FUN_01667010(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar1 = *param_1;
  lVar8 = param_1[1];
  lVar3 = 0;
  if ((lVar2 != 0) &&
     (lVar3 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,lVar2 << 3,8), lVar3 == 0)) {
    (**(code **)(*(long *)*plVar6 + 0xb8))((long *)*plVar6);
  }
  lVar8 = lVar3 + (lVar8 - lVar1 >> 3) * 8;
  FUN_01666d2c(plVar6,lVar8,param_2);
  lVar7 = *param_1;
  lVar5 = param_1[1];
  lVar1 = lVar8 + 8;
  if (lVar5 != lVar7) {
    do {
      lVar8 = lVar8 + -8;
      lVar5 = lVar5 + -8;
      FUN_01666d2c(plVar6,lVar8,lVar5);
    } while (lVar7 != lVar5);
    lVar7 = *param_1;
  }
  lVar5 = param_1[2];
  *param_1 = lVar8;
  param_1[1] = lVar1;
  param_1[2] = lVar3 + lVar2 * 8;
  if (lVar7 == 0) {
    return;
  }
  plVar6 = (long *)*plVar6;
  uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
  if ((uVar4 & 1) != 0) {
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar1 + 0x38d480)) {
      FUN_02bcc824(plVar6,lVar7,lVar5 - lVar7,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01666f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))(plVar6,lVar7,lVar5 - lVar7,8);
  return;
}


