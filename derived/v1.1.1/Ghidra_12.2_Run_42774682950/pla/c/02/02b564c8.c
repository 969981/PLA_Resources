/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b564c8; name: FUN_02b564c8
 */


void FUN_02b564c8(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x178);
  if (lVar5 == 0) {
LAB_02b565a8:
    lVar5 = *(long *)(param_1 + 0x140);
    if (lVar5 == 0) goto LAB_02b56670;
LAB_02b565b0:
    lVar4 = *(long *)(param_1 + 0x148);
    if (lVar4 == lVar5) {
      lVar4 = lVar5;
    }
    else {
      do {
        plVar3 = (long *)(lVar4 + -8);
        lVar4 = lVar4 + -0x20;
        if ((long *)*plVar3 != (long *)0x0) {
          (**(code **)(*(long *)*plVar3 + 0x20))();
        }
      } while (lVar5 != lVar4);
      lVar4 = *(long *)(param_1 + 0x140);
    }
    plVar3 = *(long **)(param_1 + 0x158);
    *(long *)(param_1 + 0x148) = lVar5;
    lVar5 = *(long *)(param_1 + 0x150) - lVar4;
    uVar2 = (**(code **)(*plVar3 + 0xc0))(plVar3);
    if ((uVar2 & 1) == 0) {
LAB_02b56654:
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar4,lVar5,8);
      goto LAB_02b56670;
    }
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_02b56654;
    FUN_02bcc824(plVar3,lVar4,lVar5,8);
    lVar5 = *(long *)(param_1 + 0x108);
    if (lVar5 != 0) goto LAB_02b56678;
LAB_02b56738:
    lVar5 = *(long *)(param_1 + 0xd0);
    if (lVar5 == 0) goto LAB_02b56800;
LAB_02b56740:
    lVar4 = *(long *)(param_1 + 0xd8);
    if (lVar4 == lVar5) {
      lVar4 = lVar5;
    }
    else {
      do {
        plVar3 = (long *)(lVar4 + -8);
        lVar4 = lVar4 + -0x20;
        if ((long *)*plVar3 != (long *)0x0) {
          (**(code **)(*(long *)*plVar3 + 0x20))();
        }
      } while (lVar5 != lVar4);
      lVar4 = *(long *)(param_1 + 0xd0);
    }
    plVar3 = *(long **)(param_1 + 0xe8);
    *(long *)(param_1 + 0xd8) = lVar5;
    lVar5 = *(long *)(param_1 + 0xe0) - lVar4;
    uVar2 = (**(code **)(*plVar3 + 0xc0))(plVar3);
    if ((uVar2 & 1) == 0) {
LAB_02b567e4:
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar4,lVar5,8);
      goto LAB_02b56800;
    }
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_02b567e4;
    FUN_02bcc824(plVar3,lVar4,lVar5,8);
    lVar5 = *(long *)(param_1 + 0x98);
    if (lVar5 != 0) goto LAB_02b56808;
LAB_02b568c8:
    lVar5 = *(long *)(param_1 + 0x58);
    if (lVar5 == 0) goto LAB_02b56950;
LAB_02b568d0:
    plVar3 = *(long **)(param_1 + 0x70);
    *(long *)(param_1 + 0x60) = lVar5;
    lVar4 = *(long *)(param_1 + 0x68) - lVar5;
    uVar2 = (**(code **)(*plVar3 + 0xc0))(plVar3);
    if ((uVar2 & 1) == 0) {
LAB_02b56934:
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar5,lVar4,4);
      goto LAB_02b56950;
    }
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_02b56934;
    FUN_02bcc824(plVar3,lVar5,lVar4,4);
    lVar5 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x180);
    if (lVar4 == lVar5) {
      lVar4 = lVar5;
    }
    else {
      do {
        plVar3 = (long *)(lVar4 + -8);
        lVar4 = lVar4 + -0x20;
        if ((long *)*plVar3 != (long *)0x0) {
          (**(code **)(*(long *)*plVar3 + 0x20))();
        }
      } while (lVar5 != lVar4);
      lVar4 = *(long *)(param_1 + 0x178);
    }
    plVar3 = *(long **)(param_1 + 400);
    *(long *)(param_1 + 0x180) = lVar5;
    lVar5 = *(long *)(param_1 + 0x188) - lVar4;
    uVar2 = (**(code **)(*plVar3 + 0xc0))(plVar3);
    if ((uVar2 & 1) == 0) {
LAB_02b5658c:
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar4,lVar5,8);
      goto LAB_02b565a8;
    }
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_02b5658c;
    FUN_02bcc824(plVar3,lVar4,lVar5,8);
    lVar5 = *(long *)(param_1 + 0x140);
    if (lVar5 != 0) goto LAB_02b565b0;
LAB_02b56670:
    lVar5 = *(long *)(param_1 + 0x108);
    if (lVar5 == 0) goto LAB_02b56738;
LAB_02b56678:
    lVar4 = *(long *)(param_1 + 0x110);
    if (lVar4 == lVar5) {
      lVar4 = lVar5;
    }
    else {
      do {
        plVar3 = (long *)(lVar4 + -8);
        lVar4 = lVar4 + -0x20;
        if ((long *)*plVar3 != (long *)0x0) {
          (**(code **)(*(long *)*plVar3 + 0x20))();
        }
      } while (lVar5 != lVar4);
      lVar4 = *(long *)(param_1 + 0x108);
    }
    plVar3 = *(long **)(param_1 + 0x120);
    *(long *)(param_1 + 0x110) = lVar5;
    lVar5 = *(long *)(param_1 + 0x118) - lVar4;
    uVar2 = (**(code **)(*plVar3 + 0xc0))(plVar3);
    if ((uVar2 & 1) == 0) {
LAB_02b5671c:
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar4,lVar5,8);
      goto LAB_02b56738;
    }
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_02b5671c;
    FUN_02bcc824(plVar3,lVar4,lVar5,8);
    lVar5 = *(long *)(param_1 + 0xd0);
    if (lVar5 != 0) goto LAB_02b56740;
LAB_02b56800:
    lVar5 = *(long *)(param_1 + 0x98);
    if (lVar5 == 0) goto LAB_02b568c8;
LAB_02b56808:
    lVar4 = *(long *)(param_1 + 0xa0);
    if (lVar4 == lVar5) {
      lVar4 = lVar5;
    }
    else {
      do {
        plVar3 = (long *)(lVar4 + -8);
        lVar4 = lVar4 + -0x20;
        if ((long *)*plVar3 != (long *)0x0) {
          (**(code **)(*(long *)*plVar3 + 0x20))();
        }
      } while (lVar5 != lVar4);
      lVar4 = *(long *)(param_1 + 0x98);
    }
    plVar3 = *(long **)(param_1 + 0xb0);
    *(long *)(param_1 + 0xa0) = lVar5;
    lVar5 = *(long *)(param_1 + 0xa8) - lVar4;
    uVar2 = (**(code **)(*plVar3 + 0xc0))(plVar3);
    if ((uVar2 & 1) == 0) {
LAB_02b568ac:
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar4,lVar5,8);
      goto LAB_02b568c8;
    }
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_02b568ac;
    FUN_02bcc824(plVar3,lVar4,lVar5,8);
    lVar5 = *(long *)(param_1 + 0x58);
    if (lVar5 != 0) goto LAB_02b568d0;
LAB_02b56950:
    lVar5 = *(long *)(param_1 + 0x20);
  }
  if (lVar5 != 0) {
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 == lVar5) {
      lVar4 = lVar5;
    }
    else {
      do {
        plVar3 = (long *)(lVar4 + -0x10);
        lVar4 = lVar4 + -0x28;
        if ((long *)*plVar3 != (long *)0x0) {
          (**(code **)(*(long *)*plVar3 + 0x20))();
        }
      } while (lVar5 != lVar4);
      lVar4 = *(long *)(param_1 + 0x20);
    }
    plVar3 = *(long **)(param_1 + 0x38);
    *(long *)(param_1 + 0x28) = lVar5;
    lVar5 = *(long *)(param_1 + 0x30) - lVar4;
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
        plVar3 = *(long **)(param_1 + 0x18);
        goto joined_r0x02b56b14;
      }
    }
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar4,lVar5,8);
  }
  plVar3 = *(long **)(param_1 + 0x18);
joined_r0x02b56b14:
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02b56a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x20))();
  return;
}


