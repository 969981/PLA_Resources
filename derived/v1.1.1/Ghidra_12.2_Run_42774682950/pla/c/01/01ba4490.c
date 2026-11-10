/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ba4490; name: FUN_01ba4490
 */


void FUN_01ba4490(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  if (lVar5 == 0) {
    return;
  }
  lVar3 = param_1[1];
  lVar4 = lVar5;
  if (lVar3 != lVar5) {
    do {
      plVar1 = (long *)(lVar3 + -0x48);
      lVar3 = lVar3 + -0x80;
      if ((long *)*plVar1 != (long *)0x0) {
        (**(code **)(*(long *)*plVar1 + 0x20))();
      }
    } while (lVar5 != lVar3);
    lVar4 = *param_1;
  }
  lVar3 = param_1[2];
  plVar1 = (long *)param_1[3];
  param_1[1] = lVar5;
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
      FUN_02bcc824(plVar1,lVar4,lVar3 - lVar4,0x10);
      goto LAB_01ba4554;
    }
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar3 - lVar4,0x10);
LAB_01ba4554:
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}


