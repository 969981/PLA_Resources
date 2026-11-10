/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028ce5d4; name: FUN_028ce5d4
 */


void FUN_028ce5d4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = param_1[0x1e];
  *param_1 = &PTR_FUN_04273488;
  if (lVar5 == 0) {
LAB_028ce680:
    lVar5 = param_1[0x17];
    if (lVar5 == 0) goto LAB_028ce688;
LAB_028ce74c:
    lVar1 = param_1[0x19];
    plVar2 = (long *)param_1[0x1a];
    uVar4 = (**(code **)(*plVar2 + 0xc0))(plVar2);
    if ((uVar4 & 1) == 0) {
LAB_028ce7ac:
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar1 << 3,1);
      lVar5 = param_1[0x10];
      goto joined_r0x028ce7cc;
    }
    lVar3 = tpidr_el0;
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_028ce7ac;
    FUN_02bcc824(plVar2,lVar5,lVar1 << 3,1);
    lVar5 = param_1[0x10];
    if (lVar5 == 0) goto LAB_028ce690;
LAB_028ce7d0:
    lVar1 = param_1[0x12];
    plVar2 = (long *)param_1[0x13];
    param_1[0x11] = lVar5;
    uVar4 = (**(code **)(*plVar2 + 0xc0))(plVar2);
    if ((uVar4 & 1) != 0) {
      lVar3 = tpidr_el0;
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar3 + 0x38d480)) {
        FUN_02bcc824(plVar2,lVar5,lVar1 - lVar5,1);
        lVar5 = param_1[9];
        goto joined_r0x028ce694;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar1 - lVar5,1);
    lVar5 = param_1[9];
  }
  else {
    lVar1 = param_1[0x20];
    plVar2 = (long *)param_1[0x21];
    param_1[0x1f] = lVar5;
    uVar4 = (**(code **)(*plVar2 + 0xc0))(plVar2);
    if ((uVar4 & 1) == 0) {
LAB_028ce664:
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar1 - lVar5,0x10);
      goto LAB_028ce680;
    }
    lVar3 = tpidr_el0;
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_028ce664;
    FUN_02bcc824(plVar2,lVar5,lVar1 - lVar5,0x10);
    lVar5 = param_1[0x17];
    if (lVar5 != 0) goto LAB_028ce74c;
LAB_028ce688:
    lVar5 = param_1[0x10];
joined_r0x028ce7cc:
    if (lVar5 != 0) goto LAB_028ce7d0;
LAB_028ce690:
    lVar5 = param_1[9];
  }
joined_r0x028ce694:
  if (lVar5 == 0) {
    lVar5 = param_1[2];
  }
  else {
    lVar1 = param_1[0xb];
    plVar2 = (long *)param_1[0xc];
    param_1[10] = lVar5;
    uVar4 = (**(code **)(*plVar2 + 0xc0))(plVar2);
    if ((uVar4 & 1) != 0) {
      lVar3 = tpidr_el0;
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar3 + 0x38d480)) {
        FUN_02bcc824(plVar2,lVar5,lVar1 - lVar5,0x10);
        lVar5 = param_1[2];
        goto joined_r0x028ce950;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar1 - lVar5,0x10);
    lVar5 = param_1[2];
  }
joined_r0x028ce950:
  if (lVar5 == 0) {
    return;
  }
  lVar1 = param_1[4];
  plVar2 = (long *)param_1[5];
  param_1[3] = lVar5;
  uVar4 = (**(code **)(*plVar2 + 0xc0))(plVar2);
  if ((uVar4 & 1) != 0) {
    lVar3 = tpidr_el0;
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar3 + 0x38d480)) {
      FUN_02bcc824(plVar2,lVar5,lVar1 - lVar5,2);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x028ce72c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar1 - lVar5,2);
  return;
}


