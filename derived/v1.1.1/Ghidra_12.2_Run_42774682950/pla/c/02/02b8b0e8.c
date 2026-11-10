/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b8b0e8; name: FUN_02b8b0e8
 */


void FUN_02b8b0e8(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  plVar9 = (long *)*param_1;
  if (plVar9 == (long *)0x0) {
    return;
  }
  lVar3 = tpidr_el0;
  if ((long *)param_1[1] == plVar9) {
    plVar6 = plVar9;
  }
  else {
    plVar6 = (long *)param_1[1];
    do {
      plVar5 = plVar6 + -4;
      lVar7 = *plVar5;
      *plVar5 = 0;
      if (lVar7 != 0) {
        plVar1 = (long *)plVar6[-3];
        lVar2 = plVar6[-2];
        lVar8 = plVar6[-1];
        uVar4 = (**(code **)(*plVar1 + 0xc0))(plVar1);
        if ((uVar4 & 1) != 0) {
          if (*(char *)(lVar3 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar3 + 0x38d488) = 1;
            *(undefined8 *)(lVar3 + 0x38d478) = 0;
            *(undefined8 *)(lVar3 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar3 + 0x38d480)) {
            FUN_02bcc824(plVar1,lVar7,lVar2,lVar8);
            goto LAB_02b8b154;
          }
        }
        (**(code **)(*plVar1 + 0x18))(plVar1,lVar7,lVar2,lVar8);
      }
LAB_02b8b154:
      plVar6 = plVar5;
    } while (plVar9 != plVar5);
    plVar6 = (long *)*param_1;
  }
  lVar7 = param_1[2];
  plVar5 = (long *)param_1[3];
  param_1[1] = plVar9;
  uVar4 = (**(code **)(*plVar5 + 0xc0))(plVar5);
  if ((uVar4 & 1) != 0) {
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar3 + 0x38d480)) {
      FUN_02bcc824(plVar5,plVar6,lVar7 - (long)plVar6,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02b8b2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))(plVar5,plVar6,lVar7 - (long)plVar6,8);
  return;
}


