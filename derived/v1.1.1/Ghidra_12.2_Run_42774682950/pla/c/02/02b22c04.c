/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b22c04; name: FUN_02b22c04
 */


void FUN_02b22c04(long *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  FUN_02ad0c84(param_1 + 0xe);
  lVar4 = param_1[7];
  if (lVar4 == 0) {
    lVar4 = *param_1;
  }
  else {
    lVar5 = param_1[9];
    plVar1 = (long *)param_1[10];
    uVar3 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar3 & 1) != 0) {
      lVar2 = tpidr_el0;
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar2 + 0x38d480)) {
        FUN_02bcc824(plVar1,lVar4,lVar5 << 3,1);
        lVar4 = *param_1;
        goto joined_r0x02b22dc4;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5 << 3,1);
    lVar4 = *param_1;
  }
joined_r0x02b22dc4:
  if (lVar4 == 0) {
    return;
  }
  lVar5 = param_1[1];
  if (lVar5 == lVar4) {
    lVar5 = lVar4;
  }
  else {
    do {
      lVar5 = lVar5 + -0x1b0;
      FUN_02b22e7c(lVar5);
    } while (lVar4 != lVar5);
    lVar5 = *param_1;
  }
  param_1[1] = lVar4;
  lVar4 = param_1[2];
  plVar1 = (long *)param_1[3];
  uVar3 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  if ((uVar3 & 1) != 0) {
    lVar2 = tpidr_el0;
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar2 + 0x38d480)) {
      FUN_02bcc824(plVar1,lVar5,lVar4 - lVar5,0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02b22d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4 - lVar5,0x10);
  return;
}


