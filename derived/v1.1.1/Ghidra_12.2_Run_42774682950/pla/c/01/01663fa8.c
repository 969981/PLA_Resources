/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01663fa8; name: FUN_01663fa8
 */


void FUN_01663fa8(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  lVar3 = *param_1;
  if ((ulong)(param_1[2] - lVar3 >> 2) < param_2) {
    plVar6 = param_1 + 3;
    lVar4 = param_1[1];
    lVar1 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,param_2 << 2,4);
    if (lVar1 == 0) {
      (**(code **)(*(long *)*plVar6 + 0xb8))((long *)*plVar6);
    }
    lVar5 = *param_1;
    lVar7 = param_1[1];
    lVar3 = lVar1 + (lVar4 - lVar3 >> 2) * 4;
    lVar4 = lVar3;
    if (lVar7 != lVar5) {
      do {
        lVar4 = lVar4 + -4;
        lVar7 = lVar7 + -4;
        FUN_01665cfc(plVar6,lVar4,lVar7);
      } while (lVar5 != lVar7);
      lVar5 = *param_1;
    }
    *param_1 = lVar4;
    param_1[1] = lVar3;
    lVar3 = param_1[2];
    param_1[2] = lVar1 + param_2 * 4;
    if (lVar5 != 0) {
      plVar6 = (long *)*plVar6;
      uVar2 = (**(code **)(*plVar6 + 0xc0))(plVar6);
      if ((uVar2 & 1) != 0) {
        lVar1 = tpidr_el0;
        if (*(char *)(lVar1 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar1 + 0x38d488) = 1;
          *(undefined8 *)(lVar1 + 0x38d478) = 0;
          *(undefined8 *)(lVar1 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar1 + 0x38d480)) {
          FUN_02bcc824(plVar6,lVar5,lVar3 - lVar5,4);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x01664134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,lVar3 - lVar5,4);
      return;
    }
  }
  return;
}


