/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02841940; name: FUN_02841940
 */


void FUN_02841940(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x40);
  if (lVar5 != 0) {
    lVar4 = *(long *)(param_1 + 0x48);
    lVar3 = lVar5;
    if (lVar4 != lVar5) {
      do {
        lVar4 = lVar4 + -0x30;
        FUN_00d20548(lVar4);
      } while (lVar5 != lVar4);
      lVar3 = *(long *)(param_1 + 0x40);
    }
    *(long *)(param_1 + 0x48) = lVar5;
    plVar1 = *(long **)(param_1 + 0x58);
    lVar5 = *(long *)(param_1 + 0x50) - lVar3;
    uVar2 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar4 = tpidr_el0;
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar4 + 0x38d480)) {
        FUN_02bcc824(plVar1,lVar3,lVar5,8);
        lVar5 = *(long *)(param_1 + 8);
        goto joined_r0x02841af8;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar5,8);
  }
  lVar5 = *(long *)(param_1 + 8);
joined_r0x02841af8:
  if (lVar5 == 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == lVar5) {
    lVar3 = lVar5;
  }
  else {
    do {
      plVar1 = (long *)(lVar3 + -8);
      lVar3 = lVar3 + -0x20;
      if ((long *)*plVar1 != (long *)0x0) {
        (**(code **)(*(long *)*plVar1 + 0x20))();
      }
    } while (lVar5 != lVar3);
    lVar3 = *(long *)(param_1 + 8);
  }
  *(long *)(param_1 + 0x10) = lVar5;
  plVar1 = *(long **)(param_1 + 0x20);
  lVar5 = *(long *)(param_1 + 0x18) - lVar3;
  uVar2 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  if ((uVar2 & 1) != 0) {
    lVar4 = tpidr_el0;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar4 + 0x38d480)) {
      FUN_02bcc824(plVar1,lVar3,lVar5,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02841adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar5,8);
  return;
}


