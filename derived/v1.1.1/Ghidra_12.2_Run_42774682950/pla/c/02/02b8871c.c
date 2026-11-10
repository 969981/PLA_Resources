/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b8871c; name: FUN_02b8871c
 */


void FUN_02b8871c(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x44));
  plVar6 = (long *)*param_1;
  if (plVar6 == (long *)0x0) {
    return;
  }
  if ((long *)param_1[1] == plVar6) {
    plVar5 = plVar6;
  }
  else {
    plVar5 = (long *)param_1[1];
    do {
      plVar4 = plVar5 + -4;
      lVar3 = *plVar4;
      *plVar4 = 0;
      if (lVar3 != 0) {
        FUN_02b82590(plVar5 + -3);
      }
      plVar5 = plVar4;
    } while (plVar6 != plVar4);
    plVar5 = (long *)*param_1;
  }
  param_1[1] = plVar6;
  lVar3 = param_1[2];
  plVar6 = (long *)param_1[3];
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
      FUN_02bcc824(plVar6,plVar5,lVar3 - (long)plVar5,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02b8881c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))(plVar6,plVar5,lVar3 - (long)plVar5,8);
  return;
}


