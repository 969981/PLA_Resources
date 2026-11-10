/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b1d320; name: FUN_02b1d320
 */


void FUN_02b1d320(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar5 = (long *)*param_1;
  if (plVar5 == (long *)0x0) {
    return;
  }
  plVar6 = (long *)param_1[1];
  lVar1 = tpidr_el0;
  if (plVar6 == plVar5) {
    plVar6 = plVar5;
  }
  else {
    do {
      while( true ) {
        plVar7 = plVar6 + -7;
        lVar4 = *plVar7;
        if (lVar4 != 0) break;
LAB_02b1d390:
        plVar6 = plVar7;
        if (plVar7 == plVar5) goto LAB_02b1d494;
      }
      lVar3 = plVar6[-6];
      if (lVar3 == lVar4) {
        lVar3 = lVar4;
      }
      else {
        do {
          lVar3 = lVar3 + -0x30;
          FUN_009849e8(lVar3);
        } while (lVar4 != lVar3);
        lVar3 = *plVar7;
      }
      plVar6[-6] = lVar4;
      lVar4 = plVar6[-5];
      plVar6 = (long *)plVar6[-4];
      uVar2 = (**(code **)(*plVar6 + 0xc0))(plVar6);
      if ((uVar2 & 1) == 0) {
LAB_02b1d374:
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar3,lVar4 - lVar3,8);
        goto LAB_02b1d390;
      }
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_02b1d374;
      FUN_02bcc824(plVar6,lVar3,lVar4 - lVar3,8);
      plVar6 = plVar7;
    } while (plVar7 != plVar5);
LAB_02b1d494:
    plVar6 = (long *)*param_1;
  }
  lVar4 = param_1[2];
  plVar7 = (long *)param_1[3];
  param_1[1] = (long)plVar5;
  uVar2 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  if ((uVar2 & 1) != 0) {
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar1 + 0x38d480)) {
      FUN_02bcc824(plVar7,plVar6,lVar4 - (long)plVar6,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02b1d54c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x18))(plVar7,plVar6,lVar4 - (long)plVar6,8);
  return;
}


