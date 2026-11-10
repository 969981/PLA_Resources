/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b51d98; name: FUN_02b51d98
 */


void FUN_02b51d98(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x120);
  if (lVar5 == 0) {
LAB_02b51e78:
    lVar5 = *(long *)(param_1 + 0xe8);
    if (lVar5 == 0) goto LAB_02b51f00;
LAB_02b51e80:
    plVar3 = *(long **)(param_1 + 0x100);
    *(long *)(param_1 + 0xf0) = lVar5;
    lVar4 = *(long *)(param_1 + 0xf8) - lVar5;
    uVar2 = (**(code **)(*plVar3 + 0xc0))(plVar3);
    if ((uVar2 & 1) == 0) {
LAB_02b51ee4:
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar5,lVar4,4);
      goto LAB_02b51f00;
    }
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_02b51ee4;
    FUN_02bcc824(plVar3,lVar5,lVar4,4);
    lVar5 = *(long *)(param_1 + 0xb0);
    if (lVar5 != 0) goto LAB_02b51f08;
LAB_02b51fc8:
    lVar5 = *(long *)(param_1 + 0x78);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x128);
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
      lVar4 = *(long *)(param_1 + 0x120);
    }
    plVar3 = *(long **)(param_1 + 0x138);
    *(long *)(param_1 + 0x128) = lVar5;
    lVar5 = *(long *)(param_1 + 0x130) - lVar4;
    uVar2 = (**(code **)(*plVar3 + 0xc0))(plVar3);
    if ((uVar2 & 1) == 0) {
LAB_02b51e5c:
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar4,lVar5,8);
      goto LAB_02b51e78;
    }
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_02b51e5c;
    FUN_02bcc824(plVar3,lVar4,lVar5,8);
    lVar5 = *(long *)(param_1 + 0xe8);
    if (lVar5 != 0) goto LAB_02b51e80;
LAB_02b51f00:
    lVar5 = *(long *)(param_1 + 0xb0);
    if (lVar5 == 0) goto LAB_02b51fc8;
LAB_02b51f08:
    lVar4 = *(long *)(param_1 + 0xb8);
    if (lVar4 == lVar5) {
      lVar4 = lVar5;
    }
    else {
      do {
        plVar3 = (long *)(lVar4 + -0x10);
        lVar4 = lVar4 + -0x38;
        if ((long *)*plVar3 != (long *)0x0) {
          (**(code **)(*(long *)*plVar3 + 0x20))();
        }
      } while (lVar5 != lVar4);
      lVar4 = *(long *)(param_1 + 0xb0);
    }
    plVar3 = *(long **)(param_1 + 200);
    *(long *)(param_1 + 0xb8) = lVar5;
    lVar5 = *(long *)(param_1 + 0xc0) - lVar4;
    uVar2 = (**(code **)(*plVar3 + 0xc0))(plVar3);
    if ((uVar2 & 1) == 0) {
LAB_02b51fac:
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar4,lVar5,8);
      goto LAB_02b51fc8;
    }
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_02b51fac;
    FUN_02bcc824(plVar3,lVar4,lVar5,8);
    lVar5 = *(long *)(param_1 + 0x78);
  }
  if (lVar5 != 0) {
    lVar4 = *(long *)(param_1 + 0x80);
    if (lVar4 == lVar5) {
      lVar4 = lVar5;
    }
    else {
      do {
        lVar4 = lVar4 + -0x70;
        FUN_02b52298(lVar4);
      } while (lVar5 != lVar4);
      lVar4 = *(long *)(param_1 + 0x78);
    }
    plVar3 = *(long **)(param_1 + 0x90);
    *(long *)(param_1 + 0x80) = lVar5;
    lVar5 = *(long *)(param_1 + 0x88) - lVar4;
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
        goto joined_r0x02b52140;
      }
    }
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar4,lVar5,8);
  }
  plVar3 = *(long **)(param_1 + 0x38);
joined_r0x02b52140:
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  if (*(long **)(param_1 + 0x18) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02b520b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  return;
}


