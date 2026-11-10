/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00af1fa0; name: FUN_00af1fa0
 */


void FUN_00af1fa0(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  if ((long *)param_1[6] != (long *)0x0) {
    lVar4 = tpidr_el0;
    plVar5 = (long *)param_1[6];
LAB_00af2090:
    do {
      plVar7 = (long *)*plVar5;
      if ((long *)plVar5[5] != (long *)0x0) {
        (**(code **)(*(long *)plVar5[5] + 0x20))();
      }
      plVar6 = (long *)param_1[7];
      uVar3 = (**(code **)(*plVar6 + 0xc0))(plVar6);
      if ((uVar3 & 1) != 0) {
        if (*(char *)(lVar4 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar4 + 0x38d488) = 1;
          *(undefined8 *)(lVar4 + 0x38d478) = 0;
          *(undefined8 *)(lVar4 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar4 + 0x38d480)) {
          FUN_02bcc824(plVar6,plVar5,0x38,8);
          plVar5 = plVar7;
          if (plVar7 == (long *)0x0) break;
          goto LAB_00af2090;
        }
      }
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar5,0x38,8);
      plVar5 = plVar7;
    } while (plVar7 != (long *)0x0);
  }
  lVar4 = *param_1;
  *param_1 = 0;
  if (lVar4 == 0) {
    return;
  }
  lVar1 = param_1[1];
  plVar5 = (long *)param_1[2];
  uVar3 = (**(code **)(*plVar5 + 0xc0))(plVar5);
  if ((uVar3 & 1) != 0) {
    lVar2 = tpidr_el0;
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar2 + 0x38d480)) {
      FUN_02bcc824(plVar5,lVar4,lVar1 << 3,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00af2064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,lVar1 << 3,8);
  return;
}


