/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028f4a4c; name: FUN_028f4a4c
 */


void FUN_028f4a4c(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *param_1;
  if ((ulong)(param_1[2] - lVar3 >> 3) < param_2) {
    plVar5 = param_1 + 3;
    lVar4 = param_1[1];
    lVar1 = (**(code **)(*(long *)*plVar5 + 0x10))((long *)*plVar5,param_2 << 3,8);
    if (lVar1 == 0) {
      (**(code **)(*(long *)*plVar5 + 0xb8))();
    }
    lVar3 = lVar1 + (lVar4 - lVar3 >> 3) * 8;
    lVar4 = *param_1;
    lVar7 = param_1[1];
    lVar6 = lVar3;
    if (lVar7 != lVar4) {
      do {
        lVar6 = lVar6 + -8;
        lVar7 = lVar7 + -8;
        FUN_028f5898(plVar5,lVar6,lVar7);
      } while (lVar4 != lVar7);
      lVar4 = *param_1;
    }
    lVar7 = param_1[2];
    *param_1 = lVar6;
    param_1[1] = lVar3;
    param_1[2] = lVar1 + param_2 * 8;
    if (lVar4 != 0) {
      plVar5 = (long *)*plVar5;
      uVar2 = (**(code **)(*plVar5 + 0xc0))(plVar5);
      if ((uVar2 & 1) != 0) {
        lVar3 = tpidr_el0;
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar3 + 0x38d480)) {
          FUN_02bcc824(plVar5,lVar4,lVar7 - lVar4,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x028f4b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,lVar7 - lVar4,8);
      return;
    }
  }
  return;
}


