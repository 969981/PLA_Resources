/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012532d0; name: FUN_012532d0
 */


void FUN_012532d0(long *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if ((long *)param_1[0x37] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x37] + 0x20))();
  }
  if ((long *)param_1[0x35] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x35] + 0x20))();
  }
  if ((long *)param_1[0x34] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x34] + 0x20))();
  }
  if ((long *)param_1[0x32] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x32] + 0x20))();
  }
  if (param_1[0x2a] == 0) {
LAB_012533c8:
    lVar4 = param_1[0x23];
  }
  else {
    FUN_01253a58(param_1 + 0x2a);
    lVar5 = param_1[0x2a];
    lVar4 = param_1[0x2c];
    plVar1 = (long *)param_1[0x2d];
    uVar3 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar3 & 1) == 0) {
LAB_012533ac:
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4 - lVar5,8);
      goto LAB_012533c8;
    }
    lVar2 = tpidr_el0;
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_012533ac;
    FUN_02bcc824(plVar1,lVar5,lVar4 - lVar5,8);
    lVar4 = param_1[0x23];
  }
  if (lVar4 != 0) {
    FUN_01253a58(param_1 + 0x23);
    lVar5 = param_1[0x23];
    lVar4 = param_1[0x25];
    plVar1 = (long *)param_1[0x26];
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
        goto LAB_01253458;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4 - lVar5,8);
  }
LAB_01253458:
  if (param_1[0x1c] != 0) {
    FUN_01253a58();
    lVar5 = param_1[0x1c];
    lVar4 = param_1[0x1e];
    plVar1 = (long *)param_1[0x1f];
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
        goto LAB_012534e8;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4 - lVar5,8);
  }
LAB_012534e8:
  if (param_1[0x15] != 0) {
    FUN_01253a58();
    lVar5 = param_1[0x15];
    lVar4 = param_1[0x17];
    plVar1 = (long *)param_1[0x18];
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
        goto LAB_01253578;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4 - lVar5,8);
  }
LAB_01253578:
  if (param_1[0xe] != 0) {
    FUN_01253a58();
    lVar5 = param_1[0xe];
    lVar4 = param_1[0x10];
    plVar1 = (long *)param_1[0x11];
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
        goto LAB_01253608;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4 - lVar5,8);
  }
LAB_01253608:
  if (param_1[7] != 0) {
    FUN_01253a58();
    lVar5 = param_1[7];
    lVar4 = param_1[9];
    plVar1 = (long *)param_1[10];
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
        lVar4 = *param_1;
        goto joined_r0x012537d0;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4 - lVar5,8);
  }
  lVar4 = *param_1;
joined_r0x012537d0:
  if (lVar4 == 0) {
    return;
  }
  FUN_01253a58(param_1);
  lVar5 = *param_1;
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
                    /* WARNING: Could not recover jumptable at 0x01253734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4 - lVar5,8);
  return;
}


