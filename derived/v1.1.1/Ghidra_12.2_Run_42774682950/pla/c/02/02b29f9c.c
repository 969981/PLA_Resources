/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b29f9c; name: FUN_02b29f9c
 */


void FUN_02b29f9c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x80);
  if (lVar5 == 0) {
LAB_02b2a090:
    lVar5 = *(long *)(param_1 + 0x48);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x88);
    if (lVar4 == lVar5) {
      lVar4 = lVar5;
    }
    else {
      do {
        if (*(long **)(lVar4 + -0x10) != (long *)0x0) {
          (**(code **)(**(long **)(lVar4 + -0x10) + 0x20))();
        }
        plVar3 = (long *)(lVar4 + -0x30);
        lVar4 = lVar4 + -0x48;
        if ((long *)*plVar3 != (long *)0x0) {
          (**(code **)(*(long *)*plVar3 + 0x20))();
        }
      } while (lVar5 != lVar4);
      lVar4 = *(long *)(param_1 + 0x80);
    }
    plVar3 = *(long **)(param_1 + 0x98);
    *(long *)(param_1 + 0x88) = lVar5;
    lVar5 = *(long *)(param_1 + 0x90) - lVar4;
    uVar2 = (**(code **)(*plVar3 + 0xc0))(plVar3);
    if ((uVar2 & 1) == 0) {
LAB_02b2a074:
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar4,lVar5,8);
      goto LAB_02b2a090;
    }
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_02b2a074;
    FUN_02bcc824(plVar3,lVar4,lVar5,8);
    lVar5 = *(long *)(param_1 + 0x48);
  }
  if (lVar5 != 0) {
    lVar4 = *(long *)(param_1 + 0x50);
    if (lVar4 == lVar5) {
      lVar4 = lVar5;
    }
    else {
      do {
        plVar3 = (long *)(lVar4 + -8);
        lVar4 = lVar4 + -0x28;
        if ((long *)*plVar3 != (long *)0x0) {
          (**(code **)(*(long *)*plVar3 + 0x20))();
        }
      } while (lVar5 != lVar4);
      lVar4 = *(long *)(param_1 + 0x48);
    }
    plVar3 = *(long **)(param_1 + 0x60);
    *(long *)(param_1 + 0x50) = lVar5;
    lVar5 = *(long *)(param_1 + 0x58) - lVar4;
    uVar2 = (**(code **)(*plVar3 + 0xc0))(plVar3);
    if ((uVar2 & 1) != 0) {
      lVar1 = tpidr_el0;
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar3,lVar4,lVar5,8);
        plVar3 = *(long **)(param_1 + 0x38);
        goto joined_r0x02b2a1dc;
      }
    }
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar4,lVar5,8);
  }
  plVar3 = *(long **)(param_1 + 0x38);
joined_r0x02b2a1dc:
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  if (*(long **)(param_1 + 0x18) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02b2a18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  return;
}


