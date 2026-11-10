/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028d4e8c; name: FUN_028d4e8c
 */


void FUN_028d4e8c(long *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
    return;
  }
  lVar5 = param_1[1];
  if (lVar5 == lVar4) {
    lVar5 = lVar4;
  }
  else {
    do {
      if (*(long **)(lVar5 + -0x20) != (long *)0x0) {
        (**(code **)(**(long **)(lVar5 + -0x20) + 0x20))();
      }
      if (*(long **)(lVar5 + -0x40) != (long *)0x0) {
        (**(code **)(**(long **)(lVar5 + -0x40) + 0x20))();
      }
      plVar1 = (long *)(lVar5 + -0x60);
      lVar5 = lVar5 + -0x1d0;
      if ((long *)*plVar1 != (long *)0x0) {
        (**(code **)(*(long *)*plVar1 + 0x20))();
      }
      FUN_028d5028(lVar5);
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
      FUN_02bcc824(plVar1,lVar5,lVar4 - lVar5,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x028d4fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4 - lVar5,8);
  return;
}


