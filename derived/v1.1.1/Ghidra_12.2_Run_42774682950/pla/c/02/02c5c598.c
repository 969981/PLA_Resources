/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c5c598; name: FUN_02c5c598
 */


void FUN_02c5c598(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_58 [24];
  
  lVar6 = param_1[0xb];
  *param_1 = &PTR_FUN_0428add0;
  param_1[9] = &PTR_LAB_0428ae10;
  param_1[0xb] = 0;
  lVar4 = tpidr_el0;
  if (lVar6 != 0) {
    FUN_02bcbe58(auStack_58,0);
    plVar1 = (long *)param_1[0xc];
    uVar2 = param_1[0xd];
    uVar8 = param_1[0xe];
    uVar5 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar5 & 1) == 0) {
LAB_02c5c640:
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar6,uVar2,uVar8);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_02c5c640;
      FUN_02bcc824(plVar1,lVar6,uVar2,uVar8);
    }
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar3 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar3;
    if (iVar3 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  lVar6 = param_1[0xf];
  param_1[0xf] = 0;
  if (lVar6 != 0) {
    FUN_02bcbe58(auStack_58,0);
    plVar1 = (long *)param_1[0x10];
    uVar2 = param_1[0x11];
    uVar8 = param_1[0x12];
    uVar5 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar5 & 1) == 0) {
LAB_02c5c750:
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar6,uVar2,uVar8);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_02c5c750;
      FUN_02bcc824(plVar1,lVar6,uVar2,uVar8);
    }
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar3 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar3;
    if (iVar3 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  puVar7 = (undefined8 *)param_1[0x13];
  param_1[0x13] = 0;
  if (puVar7 == (undefined8 *)0x0) {
    param_1[0x13] = 0;
  }
  else {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar7)(puVar7);
    plVar1 = (long *)param_1[0x14];
    uVar2 = param_1[0x15];
    uVar8 = param_1[0x16];
    uVar5 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar5 & 1) == 0) {
LAB_02c5c870:
      (**(code **)(*plVar1 + 0x18))(plVar1,puVar7,uVar2,uVar8);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_02c5c870;
      FUN_02bcc824(plVar1,puVar7,uVar2,uVar8);
    }
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar3 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar3;
    if (iVar3 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
    puVar7 = (undefined8 *)param_1[0x13];
    param_1[0x13] = 0;
    if (puVar7 != (undefined8 *)0x0) {
      FUN_02bcbe58(auStack_58,0);
      (**(code **)*puVar7)(puVar7);
      plVar1 = (long *)param_1[0x14];
      uVar2 = param_1[0x15];
      uVar8 = param_1[0x16];
      uVar5 = (**(code **)(*plVar1 + 0xc0))(plVar1);
      if ((uVar5 & 1) == 0) {
LAB_02c5c990:
        (**(code **)(*plVar1 + 0x18))(plVar1,puVar7,uVar2,uVar8);
      }
      else {
        if (*(char *)(lVar4 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar4 + 0x38d488) = 1;
          *(undefined8 *)(lVar4 + 0x38d478) = 0;
          *(undefined8 *)(lVar4 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_02c5c990;
        FUN_02bcc824(plVar1,puVar7,uVar2,uVar8);
      }
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar3 = *(int *)(lVar4 + 0x38d480) + -1;
      *(int *)(lVar4 + 0x38d480) = iVar3;
      if (iVar3 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar4 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar4 + 0x38d488) = 1;
          *(undefined8 *)(lVar4 + 0x38d478) = 0;
          *(undefined8 *)(lVar4 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar4 + 0x38d484) = 0;
      }
    }
  }
  lVar6 = param_1[0xf];
  param_1[0xf] = 0;
  if (lVar6 != 0) {
    FUN_02bcbe58(auStack_58,0);
    plVar1 = (long *)param_1[0x10];
    uVar2 = param_1[0x11];
    uVar8 = param_1[0x12];
    uVar5 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar5 & 1) == 0) {
LAB_02c5caa8:
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar6,uVar2,uVar8);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_02c5caa8;
      FUN_02bcc824(plVar1,lVar6,uVar2,uVar8);
    }
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar3 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar3;
    if (iVar3 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  lVar6 = param_1[0xb];
  param_1[0xb] = 0;
  if (lVar6 == 0) {
    return;
  }
  FUN_02bcbe58(auStack_58,0);
  plVar1 = (long *)param_1[0xc];
  uVar2 = param_1[0xd];
  uVar8 = param_1[0xe];
  uVar5 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  if ((uVar5 & 1) != 0) {
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar4 + 0x38d480)) {
      FUN_02bcc824(plVar1,lVar6,uVar2,uVar8);
      goto LAB_02c5cbd4;
    }
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar6,uVar2,uVar8);
LAB_02c5cbd4:
  if (*(char *)(lVar4 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar4 + 0x38d488) = 1;
    *(undefined8 *)(lVar4 + 0x38d478) = 0;
    *(undefined8 *)(lVar4 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar3 = *(int *)(lVar4 + 0x38d480) + -1;
  *(int *)(lVar4 + 0x38d480) = iVar3;
  if (iVar3 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar4 + 0x38d484) = 0;
  }
  return;
}


