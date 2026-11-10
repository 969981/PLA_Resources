/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01252908; name: FUN_01252908
 */


void FUN_01252908(long *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = (long)(PTR_DAT_0437e9e8 + 0x10);
  if ((long *)param_1[0x7b] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x7b] + 0x20))();
  }
  if ((long *)param_1[0x79] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x79] + 0x20))();
  }
  if ((long *)param_1[0x78] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x78] + 0x20))();
  }
  if ((long *)param_1[0x76] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x76] + 0x20))();
  }
  FUN_012532d0(param_1 + 0x3a);
  if (param_1[0x33] == 0) {
LAB_01252a18:
    if (param_1[0x2c] == 0) goto LAB_01252aa8;
LAB_01252a20:
    FUN_01253a58(param_1 + 0x2c);
    lVar5 = param_1[0x2c];
    lVar4 = param_1[0x2e];
    plVar1 = (long *)param_1[0x2f];
    uVar3 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar3 & 1) == 0) {
LAB_01252a8c:
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4 - lVar5,8);
      goto LAB_01252aa8;
    }
    lVar2 = tpidr_el0;
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_01252a8c;
    FUN_02bcc824(plVar1,lVar5,lVar4 - lVar5,8);
    lVar4 = param_1[0x25];
  }
  else {
    FUN_01253a58(param_1 + 0x33);
    lVar5 = param_1[0x33];
    lVar4 = param_1[0x35];
    plVar1 = (long *)param_1[0x36];
    uVar3 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar3 & 1) == 0) {
LAB_012529fc:
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4 - lVar5,8);
      goto LAB_01252a18;
    }
    lVar2 = tpidr_el0;
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_012529fc;
    FUN_02bcc824(plVar1,lVar5,lVar4 - lVar5,8);
    if (param_1[0x2c] != 0) goto LAB_01252a20;
LAB_01252aa8:
    lVar4 = param_1[0x25];
  }
  if (lVar4 != 0) {
    FUN_01253a58(param_1 + 0x25);
    lVar5 = param_1[0x25];
    lVar4 = param_1[0x27];
    plVar1 = (long *)param_1[0x28];
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
        goto LAB_01252b38;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4 - lVar5,8);
  }
LAB_01252b38:
  if (param_1[0x1e] != 0) {
    FUN_01253a58();
    lVar5 = param_1[0x1e];
    lVar4 = param_1[0x20];
    plVar1 = (long *)param_1[0x21];
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
        goto LAB_01252bc8;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4 - lVar5,8);
  }
LAB_01252bc8:
  if (param_1[0x17] != 0) {
    FUN_01253a58();
    lVar5 = param_1[0x17];
    lVar4 = param_1[0x19];
    plVar1 = (long *)param_1[0x1a];
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
        goto LAB_01252c58;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4 - lVar5,8);
  }
LAB_01252c58:
  if (param_1[0x10] != 0) {
    FUN_01253a58();
    lVar5 = param_1[0x10];
    lVar4 = param_1[0x12];
    plVar1 = (long *)param_1[0x13];
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
        goto LAB_01252ce8;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4 - lVar5,8);
  }
LAB_01252ce8:
  if (param_1[9] != 0) {
    FUN_01253a58();
    lVar5 = param_1[9];
    lVar4 = param_1[0xb];
    plVar1 = (long *)param_1[0xc];
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
        goto LAB_01252d78;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4 - lVar5,8);
  }
LAB_01252d78:
  if (param_1[2] == 0) {
    return;
  }
  FUN_01253a58();
  lVar5 = param_1[2];
  lVar4 = param_1[4];
  plVar1 = (long *)param_1[5];
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
                    /* WARNING: Could not recover jumptable at 0x01252e14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4 - lVar5,8);
  return;
}


