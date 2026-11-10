/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b35180; name: FUN_01b35180
 */


void FUN_01b35180(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
    return;
  }
  lVar5 = param_1[1];
  lVar3 = lVar4;
  if (lVar5 != lVar4) {
    FUN_01b2b604(lVar5 + -0x378);
    if (lVar5 + -0x378 != lVar4) {
      do {
        FUN_01b2b604(lVar5 + -0x6f0);
        lVar5 = lVar5 + -0x378;
      } while (lVar4 + 0x378 != lVar5);
    }
    lVar3 = *param_1;
  }
  param_1[1] = lVar4;
  lVar4 = param_1[2];
  plVar1 = (long *)param_1[3];
  uVar2 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  if ((uVar2 & 1) != 0) {
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar5 + 0x38d480)) {
      FUN_02bcc824(plVar1,lVar3,lVar4 - lVar3,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01b35264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar4 - lVar3,8);
  return;
}


