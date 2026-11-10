/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b1e370; name: FUN_02b1e370
 */


void FUN_02b1e370(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  lVar4 = *param_1;
  if ((ulong)(param_1[2] - lVar4 >> 5) < param_2) {
    plVar6 = param_1 + 3;
    lVar5 = param_1[1];
    lVar2 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,param_2 << 5,8);
    if (lVar2 == 0) {
      (**(code **)(*(long *)*plVar6 + 0xb8))();
    }
    lVar4 = lVar2 + (lVar5 - lVar4 >> 5) * 0x20;
    lVar5 = *param_1;
    lVar7 = param_1[1];
    lVar8 = lVar4;
    if (lVar7 == lVar5) {
      lVar7 = lVar5;
    }
    else {
      do {
        lVar8 = lVar8 + -0x20;
        lVar7 = lVar7 + -0x20;
        FUN_00b835e0(plVar6,lVar8,lVar7);
      } while (lVar5 != lVar7);
      lVar5 = *param_1;
      lVar7 = param_1[1];
    }
    *param_1 = lVar8;
    param_1[1] = lVar4;
    lVar4 = param_1[2];
    param_1[2] = lVar2 + param_2 * 0x20;
    while (lVar7 != lVar5) {
      plVar1 = (long *)(lVar7 + -8);
      lVar7 = lVar7 + -0x20;
      if ((long *)*plVar1 != (long *)0x0) {
        (**(code **)(*(long *)*plVar1 + 0x20))();
      }
    }
    if (lVar5 != 0) {
      plVar6 = (long *)*plVar6;
      uVar3 = (**(code **)(*plVar6 + 0xc0))(plVar6);
      if ((uVar3 & 1) != 0) {
        lVar2 = tpidr_el0;
        if (*(char *)(lVar2 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar2 + 0x38d488) = 1;
          *(undefined8 *)(lVar2 + 0x38d478) = 0;
          *(undefined8 *)(lVar2 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar2 + 0x38d480)) {
          FUN_02bcc824(plVar6,lVar5,lVar4 - lVar5,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x02b1e4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,lVar4 - lVar5,8);
      return;
    }
  }
  return;
}


