/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b179d8; name: FUN_00b179d8
 */


void FUN_00b179d8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = (long *)*param_1;
  if (plVar5 == (long *)0x0) {
    return;
  }
  plVar6 = (long *)param_1[1];
  plVar4 = plVar5;
  if (plVar6 != plVar5) {
    plVar4 = plVar6 + -10;
    if ((long *)plVar6[-1] != (long *)0x0) {
      (**(code **)(*(long *)plVar6[-1] + 0x20))();
    }
    if ((long *)plVar6[-6] != (long *)0x0) {
      (**(code **)(*(long *)plVar6[-6] + 0x20))();
    }
    if ((long *)*plVar4 != (long *)0x0) {
      (**(code **)(*(long *)*plVar4 + 0x20))();
    }
    while (plVar4 != plVar5) {
      if ((long *)plVar4[-1] != (long *)0x0) {
        (**(code **)(*(long *)plVar4[-1] + 0x20))();
      }
      if ((long *)plVar4[-6] != (long *)0x0) {
        (**(code **)(*(long *)plVar4[-6] + 0x20))();
      }
      plVar6 = plVar4 + -10;
      plVar4 = plVar4 + -10;
      if ((long *)*plVar6 != (long *)0x0) {
        (**(code **)(*(long *)*plVar6 + 0x20))();
      }
    }
    plVar4 = (long *)*param_1;
  }
  param_1[1] = plVar5;
  lVar1 = param_1[2];
  plVar5 = (long *)param_1[3];
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
      FUN_02bcc824(plVar5,plVar4,lVar1 - (long)plVar4,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00b17b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))(plVar5,plVar4,lVar1 - (long)plVar4,8);
  return;
}


