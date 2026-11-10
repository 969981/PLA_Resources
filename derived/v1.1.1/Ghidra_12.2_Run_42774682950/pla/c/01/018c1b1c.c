/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018c1b1c; name: FUN_018c1b1c
 */


void FUN_018c1b1c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar3 = *(long *)(param_1 + 0x248);
  if (lVar3 == 0) {
LAB_018c1bc0:
    plVar5 = *(long **)(param_1 + 0x238);
  }
  else {
    *(long *)(param_1 + 0x250) = lVar3;
    lVar4 = *(long *)(param_1 + 600) - lVar3;
    plVar5 = *(long **)(param_1 + 0x260);
    uVar2 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar2 & 1) == 0) {
LAB_018c1ba4:
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar3,lVar4,4);
      goto LAB_018c1bc0;
    }
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_018c1ba4;
    FUN_02bcc824(plVar5,lVar3,lVar4,4);
    plVar5 = *(long **)(param_1 + 0x238);
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  if (*(long **)(param_1 + 0x218) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x218) + 0x20))();
  }
  if (*(long **)(param_1 + 0x1f8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1f8) + 0x20))();
  }
  if (*(long **)(param_1 + 0x1d8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1d8) + 0x20))();
  }
  if (*(long **)(param_1 + 0x1b0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1b0) + 0x20))();
  }
  if (*(long **)(param_1 + 400) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 400) + 0x20))();
  }
  if (*(long *)(param_1 + 0x158) == 0) {
LAB_018c1cc8:
    lVar3 = *(long *)(param_1 + 0x120);
    if (lVar3 == 0) goto LAB_018c1d8c;
LAB_018c1cd0:
    lVar4 = *(long *)(param_1 + 0x128);
    if (lVar4 == lVar3) {
      lVar4 = lVar3;
    }
    else {
      do {
        plVar5 = (long *)(lVar4 + -0x48);
        lVar4 = lVar4 + -0x60;
        if ((long *)*plVar5 != (long *)0x0) {
          (**(code **)(*(long *)*plVar5 + 0x20))();
        }
      } while (lVar3 != lVar4);
      lVar4 = *(long *)(param_1 + 0x120);
    }
    plVar5 = *(long **)(param_1 + 0x138);
    *(long *)(param_1 + 0x128) = lVar3;
    lVar3 = *(long *)(param_1 + 0x130) - lVar4;
    uVar2 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar2 & 1) == 0) {
LAB_018c1d70:
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,lVar3,8);
      goto LAB_018c1d8c;
    }
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_018c1d70;
    FUN_02bcc824(plVar5,lVar4,lVar3,8);
    lVar3 = *(long *)(param_1 + 0xe8);
    if (lVar3 != 0) goto LAB_018c1d94;
LAB_018c1e54:
    lVar3 = *(long *)(param_1 + 0xb0);
    if (lVar3 == 0) goto LAB_018c1f1c;
LAB_018c1e5c:
    lVar4 = *(long *)(param_1 + 0xb8);
    if (lVar4 == lVar3) {
      lVar4 = lVar3;
    }
    else {
      do {
        plVar5 = (long *)(lVar4 + -8);
        lVar4 = lVar4 + -0x20;
        if ((long *)*plVar5 != (long *)0x0) {
          (**(code **)(*(long *)*plVar5 + 0x20))();
        }
      } while (lVar3 != lVar4);
      lVar4 = *(long *)(param_1 + 0xb0);
    }
    plVar5 = *(long **)(param_1 + 200);
    *(long *)(param_1 + 0xb8) = lVar3;
    lVar3 = *(long *)(param_1 + 0xc0) - lVar4;
    uVar2 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar2 & 1) == 0) {
LAB_018c1f00:
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,lVar3,8);
      goto LAB_018c1f1c;
    }
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_018c1f00;
    FUN_02bcc824(plVar5,lVar4,lVar3,8);
    lVar3 = *(long *)(param_1 + 0x78);
    if (lVar3 != 0) goto LAB_018c1f24;
LAB_018c1fe4:
    lVar3 = *(long *)(param_1 + 0x40);
  }
  else {
    FUN_018c2764(param_1 + 0x158);
    lVar3 = *(long *)(param_1 + 0x158);
    plVar5 = *(long **)(param_1 + 0x170);
    lVar4 = *(long *)(param_1 + 0x168) - lVar3;
    uVar2 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar2 & 1) == 0) {
LAB_018c1cac:
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar3,lVar4,8);
      goto LAB_018c1cc8;
    }
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_018c1cac;
    FUN_02bcc824(plVar5,lVar3,lVar4,8);
    lVar3 = *(long *)(param_1 + 0x120);
    if (lVar3 != 0) goto LAB_018c1cd0;
LAB_018c1d8c:
    lVar3 = *(long *)(param_1 + 0xe8);
    if (lVar3 == 0) goto LAB_018c1e54;
LAB_018c1d94:
    lVar4 = *(long *)(param_1 + 0xf0);
    if (lVar4 == lVar3) {
      lVar4 = lVar3;
    }
    else {
      do {
        plVar5 = (long *)(lVar4 + -8);
        lVar4 = lVar4 + -0x20;
        if ((long *)*plVar5 != (long *)0x0) {
          (**(code **)(*(long *)*plVar5 + 0x20))();
        }
      } while (lVar3 != lVar4);
      lVar4 = *(long *)(param_1 + 0xe8);
    }
    plVar5 = *(long **)(param_1 + 0x100);
    *(long *)(param_1 + 0xf0) = lVar3;
    lVar3 = *(long *)(param_1 + 0xf8) - lVar4;
    uVar2 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar2 & 1) == 0) {
LAB_018c1e38:
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,lVar3,8);
      goto LAB_018c1e54;
    }
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_018c1e38;
    FUN_02bcc824(plVar5,lVar4,lVar3,8);
    lVar3 = *(long *)(param_1 + 0xb0);
    if (lVar3 != 0) goto LAB_018c1e5c;
LAB_018c1f1c:
    lVar3 = *(long *)(param_1 + 0x78);
    if (lVar3 == 0) goto LAB_018c1fe4;
LAB_018c1f24:
    lVar4 = *(long *)(param_1 + 0x80);
    if (lVar4 == lVar3) {
      lVar4 = lVar3;
    }
    else {
      do {
        plVar5 = (long *)(lVar4 + -8);
        lVar4 = lVar4 + -0x20;
        if ((long *)*plVar5 != (long *)0x0) {
          (**(code **)(*(long *)*plVar5 + 0x20))();
        }
      } while (lVar3 != lVar4);
      lVar4 = *(long *)(param_1 + 0x78);
    }
    plVar5 = *(long **)(param_1 + 0x90);
    *(long *)(param_1 + 0x80) = lVar3;
    lVar3 = *(long *)(param_1 + 0x88) - lVar4;
    uVar2 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar2 & 1) == 0) {
LAB_018c1fc8:
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,lVar3,8);
      goto LAB_018c1fe4;
    }
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_018c1fc8;
    FUN_02bcc824(plVar5,lVar4,lVar3,8);
    lVar3 = *(long *)(param_1 + 0x40);
  }
  if (lVar3 != 0) {
    lVar4 = *(long *)(param_1 + 0x48);
    if (lVar4 == lVar3) {
      lVar4 = lVar3;
    }
    else {
      do {
        plVar5 = (long *)(lVar4 + -8);
        lVar4 = lVar4 + -0x20;
        if ((long *)*plVar5 != (long *)0x0) {
          (**(code **)(*(long *)*plVar5 + 0x20))();
        }
      } while (lVar3 != lVar4);
      lVar4 = *(long *)(param_1 + 0x40);
    }
    plVar5 = *(long **)(param_1 + 0x58);
    *(long *)(param_1 + 0x48) = lVar3;
    lVar3 = *(long *)(param_1 + 0x50) - lVar4;
    uVar2 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar2 & 1) != 0) {
      lVar1 = tpidr_el0;
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar5,lVar4,lVar3,8);
        lVar3 = *(long *)(param_1 + 8);
        goto joined_r0x018c225c;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,lVar3,8);
  }
  lVar3 = *(long *)(param_1 + 8);
joined_r0x018c225c:
  if (lVar3 == 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == lVar3) {
    lVar4 = lVar3;
  }
  else {
    do {
      plVar5 = (long *)(lVar4 + -8);
      lVar4 = lVar4 + -0x20;
      if ((long *)*plVar5 != (long *)0x0) {
        (**(code **)(*(long *)*plVar5 + 0x20))();
      }
    } while (lVar3 != lVar4);
    lVar4 = *(long *)(param_1 + 8);
  }
  *(long *)(param_1 + 0x10) = lVar3;
  plVar5 = *(long **)(param_1 + 0x20);
  lVar3 = *(long *)(param_1 + 0x18) - lVar4;
  uVar2 = (**(code **)(*plVar5 + 0xc0))(plVar5);
  if ((uVar2 & 1) != 0) {
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar1 + 0x38d480)) {
      FUN_02bcc824(plVar5,lVar4,lVar3,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x018c2180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,lVar3,8);
  return;
}


