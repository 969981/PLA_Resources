/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b268a8; name: FUN_02b268a8
 */


void FUN_02b268a8(long *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  if (lVar5 == 0) {
    return;
  }
  lVar4 = param_1[1];
  if (lVar4 == lVar5) {
    lVar4 = lVar5;
  }
  else {
    do {
      if (*(long **)(lVar4 + -0x28) != (long *)0x0) {
        (**(code **)(**(long **)(lVar4 + -0x28) + 0x20))();
      }
      if (*(long **)(lVar4 + -0x48) != (long *)0x0) {
        (**(code **)(**(long **)(lVar4 + -0x48) + 0x20))();
      }
      if (*(long **)(lVar4 + -0x68) != (long *)0x0) {
        (**(code **)(**(long **)(lVar4 + -0x68) + 0x20))();
      }
      if (*(long **)(lVar4 + -0x88) != (long *)0x0) {
        (**(code **)(**(long **)(lVar4 + -0x88) + 0x20))();
      }
      plVar1 = (long *)(lVar4 + -0xa8);
      lVar4 = lVar4 + -0xc0;
      if ((long *)*plVar1 != (long *)0x0) {
        (**(code **)(*(long *)*plVar1 + 0x20))();
      }
    } while (lVar5 != lVar4);
    lVar4 = *param_1;
  }
  param_1[1] = lVar5;
  lVar5 = param_1[2];
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
      FUN_02bcc824(plVar1,lVar4,lVar5 - lVar4,0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02b269dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5 - lVar4,0x10);
  return;
}


