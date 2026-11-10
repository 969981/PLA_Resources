/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00885a14; name: FUN_00885a14
 */


void FUN_00885a14(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined1 auStack_58 [24];
  
  puVar4 = (undefined8 *)param_1[0x39c];
  param_1[0x39c] = 0;
  lVar2 = tpidr_el0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x39d];
    uVar5 = param_1[0x39e];
    uVar6 = param_1[0x39f];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00885abc:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00885abc;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x398];
  param_1[0x398] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x399];
    uVar5 = param_1[0x39a];
    uVar6 = param_1[0x39b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00885be0:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00885be0;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x394];
  param_1[0x394] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x395];
    uVar5 = param_1[0x396];
    uVar6 = param_1[0x397];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00885d04:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00885d04;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x390];
  param_1[0x390] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x391];
    uVar5 = param_1[0x392];
    uVar6 = param_1[0x393];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00885e28:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00885e28;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x38c];
  param_1[0x38c] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x38d];
    uVar5 = param_1[0x38e];
    uVar6 = param_1[0x38f];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00885f4c:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00885f4c;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x388];
  param_1[0x388] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x389];
    uVar5 = param_1[0x38a];
    uVar6 = param_1[0x38b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00886070:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00886070;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[900];
  param_1[900] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x385];
    uVar5 = param_1[0x386];
    uVar6 = param_1[0x387];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00886194:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00886194;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x380];
  param_1[0x380] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x381];
    uVar5 = param_1[0x382];
    uVar6 = param_1[899];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_008862b8:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008862b8;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x37c];
  param_1[0x37c] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x37d];
    uVar5 = param_1[0x37e];
    uVar6 = param_1[0x37f];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_008863dc:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008863dc;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x378];
  param_1[0x378] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x379];
    uVar5 = param_1[0x37a];
    uVar6 = param_1[0x37b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00886500:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00886500;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x374];
  param_1[0x374] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x375];
    uVar5 = param_1[0x376];
    uVar6 = param_1[0x377];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00886624:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00886624;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x370];
  param_1[0x370] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x371];
    uVar5 = param_1[0x372];
    uVar6 = param_1[0x373];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00886748:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00886748;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x36c];
  param_1[0x36c] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x36d];
    uVar5 = param_1[0x36e];
    uVar6 = param_1[0x36f];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088686c:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088686c;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x368];
  param_1[0x368] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x369];
    uVar5 = param_1[0x36a];
    uVar6 = param_1[0x36b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00886990:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00886990;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x364];
  param_1[0x364] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x365];
    uVar5 = param_1[0x366];
    uVar6 = param_1[0x367];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00886ab4:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00886ab4;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x360];
  param_1[0x360] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x361];
    uVar5 = param_1[0x362];
    uVar6 = param_1[0x363];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00886bd8:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00886bd8;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x35c];
  param_1[0x35c] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x35d];
    uVar5 = param_1[0x35e];
    uVar6 = param_1[0x35f];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00886cfc:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00886cfc;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x358];
  param_1[0x358] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x359];
    uVar5 = param_1[0x35a];
    uVar6 = param_1[0x35b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00886e20:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00886e20;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x354];
  param_1[0x354] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x355];
    uVar5 = param_1[0x356];
    uVar6 = param_1[0x357];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00886f44:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00886f44;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x350];
  param_1[0x350] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x351];
    uVar5 = param_1[0x352];
    uVar6 = param_1[0x353];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00887068:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00887068;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x34c];
  param_1[0x34c] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x34d];
    uVar5 = param_1[0x34e];
    uVar6 = param_1[0x34f];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088718c:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088718c;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x348];
  param_1[0x348] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x349];
    uVar5 = param_1[0x34a];
    uVar6 = param_1[0x34b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_008872b0:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008872b0;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x344];
  param_1[0x344] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x345];
    uVar5 = param_1[0x346];
    uVar6 = param_1[0x347];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_008873d4:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008873d4;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x340];
  param_1[0x340] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x341];
    uVar5 = param_1[0x342];
    uVar6 = param_1[0x343];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_008874f8:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008874f8;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x33c];
  param_1[0x33c] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x33d];
    uVar5 = param_1[0x33e];
    uVar6 = param_1[0x33f];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088761c:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088761c;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x338];
  param_1[0x338] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x339];
    uVar5 = param_1[0x33a];
    uVar6 = param_1[0x33b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00887740:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00887740;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x334];
  param_1[0x334] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x335];
    uVar5 = param_1[0x336];
    uVar6 = param_1[0x337];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00887864:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00887864;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x330];
  param_1[0x330] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x331];
    uVar5 = param_1[0x332];
    uVar6 = param_1[0x333];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00887988:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00887988;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x32c];
  param_1[0x32c] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x32d];
    uVar5 = param_1[0x32e];
    uVar6 = param_1[0x32f];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00887aac:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00887aac;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x328];
  param_1[0x328] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x329];
    uVar5 = param_1[0x32a];
    uVar6 = param_1[0x32b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00887bd0:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00887bd0;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x324];
  param_1[0x324] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x325];
    uVar5 = param_1[0x326];
    uVar6 = param_1[0x327];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00887cf4:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00887cf4;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[800];
  param_1[800] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x321];
    uVar5 = param_1[0x322];
    uVar6 = param_1[0x323];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00887e18:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00887e18;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x31c];
  param_1[0x31c] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x31d];
    uVar5 = param_1[0x31e];
    uVar6 = param_1[799];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00887f3c:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00887f3c;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x318];
  param_1[0x318] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x319];
    uVar5 = param_1[0x31a];
    uVar6 = param_1[0x31b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00888060:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00888060;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x314];
  param_1[0x314] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x315];
    uVar5 = param_1[0x316];
    uVar6 = param_1[0x317];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00888184:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00888184;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x310];
  param_1[0x310] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x311];
    uVar5 = param_1[0x312];
    uVar6 = param_1[0x313];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_008882a8:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008882a8;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x30c];
  param_1[0x30c] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x30d];
    uVar5 = param_1[0x30e];
    uVar6 = param_1[0x30f];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_008883cc:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008883cc;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x308];
  param_1[0x308] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x309];
    uVar5 = param_1[0x30a];
    uVar6 = param_1[0x30b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_008884f0:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008884f0;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x304];
  param_1[0x304] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x305];
    uVar5 = param_1[0x306];
    uVar6 = param_1[0x307];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00888614:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00888614;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x300];
  param_1[0x300] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x301];
    uVar5 = param_1[0x302];
    uVar6 = param_1[0x303];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00888738:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00888738;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x2fc];
  param_1[0x2fc] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x2fd];
    uVar5 = param_1[0x2fe];
    uVar6 = param_1[0x2ff];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088885c:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088885c;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x2f8];
  param_1[0x2f8] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x2f9];
    uVar5 = param_1[0x2fa];
    uVar6 = param_1[0x2fb];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00888980:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00888980;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x2f4];
  param_1[0x2f4] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x2f5];
    uVar5 = param_1[0x2f6];
    uVar6 = param_1[0x2f7];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00888aa4:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00888aa4;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x2f0];
  param_1[0x2f0] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x2f1];
    uVar5 = param_1[0x2f2];
    uVar6 = param_1[0x2f3];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00888bc8:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00888bc8;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x2ec];
  param_1[0x2ec] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x2ed];
    uVar5 = param_1[0x2ee];
    uVar6 = param_1[0x2ef];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00888cec:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00888cec;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x2e8];
  param_1[0x2e8] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x2e9];
    uVar5 = param_1[0x2ea];
    uVar6 = param_1[0x2eb];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00888e10:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00888e10;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x2e4];
  param_1[0x2e4] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x2e5];
    uVar5 = param_1[0x2e6];
    uVar6 = param_1[0x2e7];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00888f34:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00888f34;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x2e0];
  param_1[0x2e0] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x2e1];
    uVar5 = param_1[0x2e2];
    uVar6 = param_1[0x2e3];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00889058:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00889058;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x2dc];
  param_1[0x2dc] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x2dd];
    uVar5 = param_1[0x2de];
    uVar6 = param_1[0x2df];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088917c:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088917c;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x2d8];
  param_1[0x2d8] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x2d9];
    uVar5 = param_1[0x2da];
    uVar6 = param_1[0x2db];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_008892a0:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008892a0;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x2d4];
  param_1[0x2d4] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x2d5];
    uVar5 = param_1[0x2d6];
    uVar6 = param_1[0x2d7];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_008893c4:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008893c4;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x2d0];
  param_1[0x2d0] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x2d1];
    uVar5 = param_1[0x2d2];
    uVar6 = param_1[0x2d3];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_008894e8:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008894e8;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x2cc];
  param_1[0x2cc] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x2cd];
    uVar5 = param_1[0x2ce];
    uVar6 = param_1[0x2cf];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088960c:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088960c;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x2c8];
  param_1[0x2c8] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x2c9];
    uVar5 = param_1[0x2ca];
    uVar6 = param_1[0x2cb];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00889730:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00889730;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x2c4];
  param_1[0x2c4] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x2c5];
    uVar5 = param_1[0x2c6];
    uVar6 = param_1[0x2c7];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00889854:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00889854;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x2c0];
  param_1[0x2c0] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x2c1];
    uVar5 = param_1[0x2c2];
    uVar6 = param_1[0x2c3];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00889978:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00889978;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[700];
  param_1[700] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x2bd];
    uVar5 = param_1[0x2be];
    uVar6 = param_1[0x2bf];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00889a9c:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00889a9c;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x2b8];
  param_1[0x2b8] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x2b9];
    uVar5 = param_1[0x2ba];
    uVar6 = param_1[699];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00889bc0:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00889bc0;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x2b4];
  param_1[0x2b4] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x2b5];
    uVar5 = param_1[0x2b6];
    uVar6 = param_1[0x2b7];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00889ce4:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00889ce4;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x2b0];
  param_1[0x2b0] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x2b1];
    uVar5 = param_1[0x2b2];
    uVar6 = param_1[0x2b3];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00889e08:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00889e08;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x2ac];
  param_1[0x2ac] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x2ad];
    uVar5 = param_1[0x2ae];
    uVar6 = param_1[0x2af];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00889f2c:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00889f2c;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x2a8];
  param_1[0x2a8] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x2a9];
    uVar5 = param_1[0x2aa];
    uVar6 = param_1[0x2ab];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088a050:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088a050;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x2a4];
  param_1[0x2a4] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x2a5];
    uVar5 = param_1[0x2a6];
    uVar6 = param_1[0x2a7];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088a174:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088a174;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x2a0];
  param_1[0x2a0] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x2a1];
    uVar5 = param_1[0x2a2];
    uVar6 = param_1[0x2a3];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088a298:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088a298;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x29c];
  param_1[0x29c] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x29d];
    uVar5 = param_1[0x29e];
    uVar6 = param_1[0x29f];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088a3bc:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088a3bc;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x298];
  param_1[0x298] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x299];
    uVar5 = param_1[0x29a];
    uVar6 = param_1[0x29b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088a4e0:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088a4e0;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x294];
  param_1[0x294] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x295];
    uVar5 = param_1[0x296];
    uVar6 = param_1[0x297];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088a604:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088a604;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x290];
  param_1[0x290] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x291];
    uVar5 = param_1[0x292];
    uVar6 = param_1[0x293];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088a728:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088a728;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x28c];
  param_1[0x28c] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x28d];
    uVar5 = param_1[0x28e];
    uVar6 = param_1[0x28f];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088a84c:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088a84c;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x288];
  param_1[0x288] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x289];
    uVar5 = param_1[0x28a];
    uVar6 = param_1[0x28b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088a970:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088a970;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x284];
  param_1[0x284] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x285];
    uVar5 = param_1[0x286];
    uVar6 = param_1[0x287];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088aa94:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088aa94;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x280];
  param_1[0x280] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x281];
    uVar5 = param_1[0x282];
    uVar6 = param_1[0x283];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088abb8:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088abb8;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x27c];
  param_1[0x27c] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x27d];
    uVar5 = param_1[0x27e];
    uVar6 = param_1[0x27f];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088acdc:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088acdc;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x278];
  param_1[0x278] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x279];
    uVar5 = param_1[0x27a];
    uVar6 = param_1[0x27b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088ae00:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088ae00;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x274];
  param_1[0x274] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x275];
    uVar5 = param_1[0x276];
    uVar6 = param_1[0x277];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088af24:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088af24;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x270];
  param_1[0x270] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x271];
    uVar5 = param_1[0x272];
    uVar6 = param_1[0x273];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088b048:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088b048;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x26c];
  param_1[0x26c] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x26d];
    uVar5 = param_1[0x26e];
    uVar6 = param_1[0x26f];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088b16c:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088b16c;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x268];
  param_1[0x268] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x269];
    uVar5 = param_1[0x26a];
    uVar6 = param_1[0x26b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088b290:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088b290;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x264];
  param_1[0x264] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x265];
    uVar5 = param_1[0x266];
    uVar6 = param_1[0x267];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088b3b4:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088b3b4;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x260];
  param_1[0x260] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x261];
    uVar5 = param_1[0x262];
    uVar6 = param_1[0x263];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088b4d8:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088b4d8;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x25c];
  param_1[0x25c] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x25d];
    uVar5 = param_1[0x25e];
    uVar6 = param_1[0x25f];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088b5fc:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088b5fc;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[600];
  param_1[600] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x259];
    uVar5 = param_1[0x25a];
    uVar6 = param_1[0x25b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088b720:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088b720;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x254];
  param_1[0x254] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x255];
    uVar5 = param_1[0x256];
    uVar6 = param_1[599];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088b844:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088b844;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x250];
  param_1[0x250] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x251];
    uVar5 = param_1[0x252];
    uVar6 = param_1[0x253];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088b968:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088b968;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x24c];
  param_1[0x24c] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x24d];
    uVar5 = param_1[0x24e];
    uVar6 = param_1[0x24f];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088ba8c:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088ba8c;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x248];
  param_1[0x248] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x249];
    uVar5 = param_1[0x24a];
    uVar6 = param_1[0x24b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088bbb0:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088bbb0;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x244];
  param_1[0x244] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x245];
    uVar5 = param_1[0x246];
    uVar6 = param_1[0x247];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088bcd4:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088bcd4;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x240];
  param_1[0x240] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x241];
    uVar5 = param_1[0x242];
    uVar6 = param_1[0x243];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088bdf8:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088bdf8;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x23c];
  param_1[0x23c] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x23d];
    uVar5 = param_1[0x23e];
    uVar6 = param_1[0x23f];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088bf1c:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088bf1c;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x238];
  param_1[0x238] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x239];
    uVar5 = param_1[0x23a];
    uVar6 = param_1[0x23b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088c040:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088c040;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x234];
  param_1[0x234] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x235];
    uVar5 = param_1[0x236];
    uVar6 = param_1[0x237];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088c164:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088c164;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x230];
  param_1[0x230] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x231];
    uVar5 = param_1[0x232];
    uVar6 = param_1[0x233];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088c288:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088c288;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x22c];
  param_1[0x22c] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x22d];
    uVar5 = param_1[0x22e];
    uVar6 = param_1[0x22f];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088c3ac:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088c3ac;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x228];
  param_1[0x228] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x229];
    uVar5 = param_1[0x22a];
    uVar6 = param_1[0x22b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088c4d0:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088c4d0;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x224];
  param_1[0x224] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x225];
    uVar5 = param_1[0x226];
    uVar6 = param_1[0x227];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088c5f4:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088c5f4;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x220];
  param_1[0x220] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x221];
    uVar5 = param_1[0x222];
    uVar6 = param_1[0x223];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088c718:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088c718;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x21c];
  param_1[0x21c] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x21d];
    uVar5 = param_1[0x21e];
    uVar6 = param_1[0x21f];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088c83c:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088c83c;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x218];
  param_1[0x218] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x219];
    uVar5 = param_1[0x21a];
    uVar6 = param_1[0x21b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088c960:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088c960;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x214];
  param_1[0x214] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x215];
    uVar5 = param_1[0x216];
    uVar6 = param_1[0x217];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088ca84:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088ca84;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x210];
  param_1[0x210] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x211];
    uVar5 = param_1[0x212];
    uVar6 = param_1[0x213];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088cba8:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088cba8;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x20c];
  param_1[0x20c] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x20d];
    uVar5 = param_1[0x20e];
    uVar6 = param_1[0x20f];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088cccc:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088cccc;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x208];
  param_1[0x208] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x209];
    uVar5 = param_1[0x20a];
    uVar6 = param_1[0x20b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088cdf0:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088cdf0;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x204];
  param_1[0x204] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x205];
    uVar5 = param_1[0x206];
    uVar6 = param_1[0x207];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088cf14:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088cf14;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x200];
  param_1[0x200] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x201];
    uVar5 = param_1[0x202];
    uVar6 = param_1[0x203];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088d038:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088d038;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x1fc];
  param_1[0x1fc] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x1fd];
    uVar5 = param_1[0x1fe];
    uVar6 = param_1[0x1ff];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088d15c:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088d15c;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x1f8];
  param_1[0x1f8] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x1f9];
    uVar5 = param_1[0x1fa];
    uVar6 = param_1[0x1fb];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088d280:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088d280;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[500];
  param_1[500] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x1f5];
    uVar5 = param_1[0x1f6];
    uVar6 = param_1[0x1f7];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088d3a4:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088d3a4;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x1f0];
  param_1[0x1f0] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x1f1];
    uVar5 = param_1[0x1f2];
    uVar6 = param_1[499];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088d4c8:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088d4c8;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x1ec];
  param_1[0x1ec] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x1ed];
    uVar5 = param_1[0x1ee];
    uVar6 = param_1[0x1ef];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088d5ec:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088d5ec;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x1e8];
  param_1[0x1e8] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x1e9];
    uVar5 = param_1[0x1ea];
    uVar6 = param_1[0x1eb];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088d710:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088d710;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x1e4];
  param_1[0x1e4] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x1e5];
    uVar5 = param_1[0x1e6];
    uVar6 = param_1[0x1e7];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088d834:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088d834;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x1e0];
  param_1[0x1e0] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x1e1];
    uVar5 = param_1[0x1e2];
    uVar6 = param_1[0x1e3];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088d958:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088d958;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x1dc];
  param_1[0x1dc] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x1dd];
    uVar5 = param_1[0x1de];
    uVar6 = param_1[0x1df];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088da7c:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088da7c;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x1d8];
  param_1[0x1d8] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x1d9];
    uVar5 = param_1[0x1da];
    uVar6 = param_1[0x1db];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088dba0:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088dba0;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x1d4];
  param_1[0x1d4] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x1d5];
    uVar5 = param_1[0x1d6];
    uVar6 = param_1[0x1d7];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088dcc4:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088dcc4;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x1d0];
  param_1[0x1d0] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x1d1];
    uVar5 = param_1[0x1d2];
    uVar6 = param_1[0x1d3];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088dde8:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088dde8;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x1cc];
  param_1[0x1cc] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x1cd];
    uVar5 = param_1[0x1ce];
    uVar6 = param_1[0x1cf];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088df0c:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088df0c;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x1c8];
  param_1[0x1c8] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x1c9];
    uVar5 = param_1[0x1ca];
    uVar6 = param_1[0x1cb];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088e030:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088e030;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x1c4];
  param_1[0x1c4] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x1c5];
    uVar5 = param_1[0x1c6];
    uVar6 = param_1[0x1c7];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088e154:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088e154;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x1c0];
  param_1[0x1c0] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x1c1];
    uVar5 = param_1[0x1c2];
    uVar6 = param_1[0x1c3];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088e278:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088e278;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x1bc];
  param_1[0x1bc] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x1bd];
    uVar5 = param_1[0x1be];
    uVar6 = param_1[0x1bf];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088e39c:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088e39c;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x1b8];
  param_1[0x1b8] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x1b9];
    uVar5 = param_1[0x1ba];
    uVar6 = param_1[0x1bb];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088e4c0:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088e4c0;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x1b4];
  param_1[0x1b4] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x1b5];
    uVar5 = param_1[0x1b6];
    uVar6 = param_1[0x1b7];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088e5e4:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088e5e4;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x1b0];
  param_1[0x1b0] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x1b1];
    uVar5 = param_1[0x1b2];
    uVar6 = param_1[0x1b3];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088e708:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088e708;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x1ac];
  param_1[0x1ac] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x1ad];
    uVar5 = param_1[0x1ae];
    uVar6 = param_1[0x1af];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088e82c:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088e82c;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x1a8];
  param_1[0x1a8] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x1a9];
    uVar5 = param_1[0x1aa];
    uVar6 = param_1[0x1ab];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088e950:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088e950;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x1a4];
  param_1[0x1a4] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x1a5];
    uVar5 = param_1[0x1a6];
    uVar6 = param_1[0x1a7];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088ea74:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088ea74;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x1a0];
  param_1[0x1a0] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x1a1];
    uVar5 = param_1[0x1a2];
    uVar6 = param_1[0x1a3];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088eb98:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088eb98;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x19c];
  param_1[0x19c] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x19d];
    uVar5 = param_1[0x19e];
    uVar6 = param_1[0x19f];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088ecbc:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088ecbc;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x198];
  param_1[0x198] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x199];
    uVar5 = param_1[0x19a];
    uVar6 = param_1[0x19b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088ede0:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088ede0;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x194];
  param_1[0x194] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x195];
    uVar5 = param_1[0x196];
    uVar6 = param_1[0x197];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088ef04:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088ef04;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[400];
  param_1[400] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x191];
    uVar5 = param_1[0x192];
    uVar6 = param_1[0x193];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088f028:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088f028;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x18c];
  param_1[0x18c] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x18d];
    uVar5 = param_1[0x18e];
    uVar6 = param_1[399];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088f14c:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088f14c;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x188];
  param_1[0x188] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x189];
    uVar5 = param_1[0x18a];
    uVar6 = param_1[0x18b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088f270:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088f270;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x184];
  param_1[0x184] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x185];
    uVar5 = param_1[0x186];
    uVar6 = param_1[0x187];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088f394:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088f394;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x180];
  param_1[0x180] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x181];
    uVar5 = param_1[0x182];
    uVar6 = param_1[0x183];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088f4b8:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088f4b8;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x17c];
  param_1[0x17c] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x17d];
    uVar5 = param_1[0x17e];
    uVar6 = param_1[0x17f];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088f5dc:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088f5dc;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x178];
  param_1[0x178] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x179];
    uVar5 = param_1[0x17a];
    uVar6 = param_1[0x17b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088f700:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088f700;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x174];
  param_1[0x174] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x175];
    uVar5 = param_1[0x176];
    uVar6 = param_1[0x177];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088f824:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088f824;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x170];
  param_1[0x170] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x171];
    uVar5 = param_1[0x172];
    uVar6 = param_1[0x173];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088f948:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088f948;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x16c];
  param_1[0x16c] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x16d];
    uVar5 = param_1[0x16e];
    uVar6 = param_1[0x16f];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088fa6c:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088fa6c;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x168];
  param_1[0x168] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x169];
    uVar5 = param_1[0x16a];
    uVar6 = param_1[0x16b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088fb90:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088fb90;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x164];
  param_1[0x164] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x165];
    uVar5 = param_1[0x166];
    uVar6 = param_1[0x167];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088fcb4:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088fcb4;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x160];
  param_1[0x160] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x161];
    uVar5 = param_1[0x162];
    uVar6 = param_1[0x163];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088fdd8:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088fdd8;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x15c];
  param_1[0x15c] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x15d];
    uVar5 = param_1[0x15e];
    uVar6 = param_1[0x15f];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0088fefc:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0088fefc;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x158];
  param_1[0x158] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x159];
    uVar5 = param_1[0x15a];
    uVar6 = param_1[0x15b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00890020:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00890020;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x154];
  param_1[0x154] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x155];
    uVar5 = param_1[0x156];
    uVar6 = param_1[0x157];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00890144:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00890144;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x150];
  param_1[0x150] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x151];
    uVar5 = param_1[0x152];
    uVar6 = param_1[0x153];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00890268:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00890268;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x14c];
  param_1[0x14c] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x14d];
    uVar5 = param_1[0x14e];
    uVar6 = param_1[0x14f];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0089038c:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0089038c;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x148];
  param_1[0x148] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x149];
    uVar5 = param_1[0x14a];
    uVar6 = param_1[0x14b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_008904b0:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008904b0;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x144];
  param_1[0x144] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x145];
    uVar5 = param_1[0x146];
    uVar6 = param_1[0x147];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_008905d4:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008905d4;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x140];
  param_1[0x140] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x141];
    uVar5 = param_1[0x142];
    uVar6 = param_1[0x143];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_008906f8:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008906f8;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x13c];
  param_1[0x13c] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x13d];
    uVar5 = param_1[0x13e];
    uVar6 = param_1[0x13f];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0089081c:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0089081c;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x138];
  param_1[0x138] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x139];
    uVar5 = param_1[0x13a];
    uVar6 = param_1[0x13b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00890940:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00890940;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x134];
  param_1[0x134] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x135];
    uVar5 = param_1[0x136];
    uVar6 = param_1[0x137];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00890a64:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00890a64;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x130];
  param_1[0x130] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x131];
    uVar5 = param_1[0x132];
    uVar6 = param_1[0x133];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00890b88:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00890b88;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[300];
  param_1[300] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x12d];
    uVar5 = param_1[0x12e];
    uVar6 = param_1[0x12f];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00890cac:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00890cac;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x128];
  param_1[0x128] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x129];
    uVar5 = param_1[0x12a];
    uVar6 = param_1[299];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00890dd0:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00890dd0;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x124];
  param_1[0x124] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x125];
    uVar5 = param_1[0x126];
    uVar6 = param_1[0x127];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00890ef4:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00890ef4;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x120];
  param_1[0x120] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x121];
    uVar5 = param_1[0x122];
    uVar6 = param_1[0x123];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00891018:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00891018;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x11c];
  param_1[0x11c] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x11d];
    uVar5 = param_1[0x11e];
    uVar6 = param_1[0x11f];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0089113c:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0089113c;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x118];
  param_1[0x118] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x119];
    uVar5 = param_1[0x11a];
    uVar6 = param_1[0x11b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00891260:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00891260;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x114];
  param_1[0x114] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x115];
    uVar5 = param_1[0x116];
    uVar6 = param_1[0x117];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00891384:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00891384;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x110];
  param_1[0x110] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x111];
    uVar5 = param_1[0x112];
    uVar6 = param_1[0x113];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_008914a8:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008914a8;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x10c];
  param_1[0x10c] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x10d];
    uVar5 = param_1[0x10e];
    uVar6 = param_1[0x10f];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_008915cc:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008915cc;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x108];
  param_1[0x108] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x109];
    uVar5 = param_1[0x10a];
    uVar6 = param_1[0x10b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_008916f0:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008916f0;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x104];
  param_1[0x104] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x105];
    uVar5 = param_1[0x106];
    uVar6 = param_1[0x107];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00891814:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00891814;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x100];
  param_1[0x100] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x101];
    uVar5 = param_1[0x102];
    uVar6 = param_1[0x103];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00891938:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00891938;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0xfc];
  param_1[0xfc] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0xfd];
    uVar5 = param_1[0xfe];
    uVar6 = param_1[0xff];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00891a5c:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00891a5c;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0xf8];
  param_1[0xf8] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0xf9];
    uVar5 = param_1[0xfa];
    uVar6 = param_1[0xfb];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00891b80:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00891b80;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0xf4];
  param_1[0xf4] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0xf5];
    uVar5 = param_1[0xf6];
    uVar6 = param_1[0xf7];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00891ca4:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00891ca4;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0xf0];
  param_1[0xf0] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0xf1];
    uVar5 = param_1[0xf2];
    uVar6 = param_1[0xf3];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00891dc8:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00891dc8;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0xec];
  param_1[0xec] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0xed];
    uVar5 = param_1[0xee];
    uVar6 = param_1[0xef];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00891eec:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00891eec;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0xe8];
  param_1[0xe8] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0xe9];
    uVar5 = param_1[0xea];
    uVar6 = param_1[0xeb];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00892010:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00892010;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0xe4];
  param_1[0xe4] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0xe5];
    uVar5 = param_1[0xe6];
    uVar6 = param_1[0xe7];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00892134:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00892134;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0xe0];
  param_1[0xe0] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0xe1];
    uVar5 = param_1[0xe2];
    uVar6 = param_1[0xe3];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00892258:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00892258;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0xdc];
  param_1[0xdc] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0xdd];
    uVar5 = param_1[0xde];
    uVar6 = param_1[0xdf];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0089237c:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0089237c;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0xd8];
  param_1[0xd8] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0xd9];
    uVar5 = param_1[0xda];
    uVar6 = param_1[0xdb];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_008924a0:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008924a0;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0xd4];
  param_1[0xd4] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0xd5];
    uVar5 = param_1[0xd6];
    uVar6 = param_1[0xd7];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_008925c4:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008925c4;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0xd0];
  param_1[0xd0] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0xd1];
    uVar5 = param_1[0xd2];
    uVar6 = param_1[0xd3];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_008926e8:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008926e8;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0xcc];
  param_1[0xcc] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0xcd];
    uVar5 = param_1[0xce];
    uVar6 = param_1[0xcf];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0089280c:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0089280c;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[200];
  param_1[200] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0xc9];
    uVar5 = param_1[0xca];
    uVar6 = param_1[0xcb];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00892930:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00892930;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0xc4];
  param_1[0xc4] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0xc5];
    uVar5 = param_1[0xc6];
    uVar6 = param_1[199];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00892a54:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00892a54;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0xc0];
  param_1[0xc0] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0xc1];
    uVar5 = param_1[0xc2];
    uVar6 = param_1[0xc3];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00892b78:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00892b78;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0xbc];
  param_1[0xbc] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0xbd];
    uVar5 = param_1[0xbe];
    uVar6 = param_1[0xbf];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00892c9c:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00892c9c;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0xb8];
  param_1[0xb8] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0xb9];
    uVar5 = param_1[0xba];
    uVar6 = param_1[0xbb];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00892dc0:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00892dc0;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0xb4];
  param_1[0xb4] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0xb5];
    uVar5 = param_1[0xb6];
    uVar6 = param_1[0xb7];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00892ee4:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00892ee4;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0xb0];
  param_1[0xb0] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0xb1];
    uVar5 = param_1[0xb2];
    uVar6 = param_1[0xb3];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00893008:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00893008;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0xac];
  param_1[0xac] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0xad];
    uVar5 = param_1[0xae];
    uVar6 = param_1[0xaf];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0089312c:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0089312c;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0xa8];
  param_1[0xa8] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0xa9];
    uVar5 = param_1[0xaa];
    uVar6 = param_1[0xab];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00893250:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00893250;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0xa4];
  param_1[0xa4] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0xa5];
    uVar5 = param_1[0xa6];
    uVar6 = param_1[0xa7];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00893374:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00893374;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0xa0];
  param_1[0xa0] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0xa1];
    uVar5 = param_1[0xa2];
    uVar6 = param_1[0xa3];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00893498:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00893498;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x9c];
  param_1[0x9c] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x9d];
    uVar5 = param_1[0x9e];
    uVar6 = param_1[0x9f];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_008935bc:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008935bc;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x98];
  param_1[0x98] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x99];
    uVar5 = param_1[0x9a];
    uVar6 = param_1[0x9b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_008936e0:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008936e0;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x94];
  param_1[0x94] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x95];
    uVar5 = param_1[0x96];
    uVar6 = param_1[0x97];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00893804:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00893804;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x90];
  param_1[0x90] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x91];
    uVar5 = param_1[0x92];
    uVar6 = param_1[0x93];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00893928:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00893928;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x8c];
  param_1[0x8c] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x8d];
    uVar5 = param_1[0x8e];
    uVar6 = param_1[0x8f];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00893a4c:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00893a4c;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x88];
  param_1[0x88] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x89];
    uVar5 = param_1[0x8a];
    uVar6 = param_1[0x8b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00893b70:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00893b70;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x84];
  param_1[0x84] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x85];
    uVar5 = param_1[0x86];
    uVar6 = param_1[0x87];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00893c94:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00893c94;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x80];
  param_1[0x80] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x81];
    uVar5 = param_1[0x82];
    uVar6 = param_1[0x83];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00893db8:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00893db8;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x7c];
  param_1[0x7c] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x7d];
    uVar5 = param_1[0x7e];
    uVar6 = param_1[0x7f];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00893edc:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00893edc;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x78];
  param_1[0x78] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x79];
    uVar5 = param_1[0x7a];
    uVar6 = param_1[0x7b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00894000:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00894000;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x74];
  param_1[0x74] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x75];
    uVar5 = param_1[0x76];
    uVar6 = param_1[0x77];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00894124:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00894124;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x70];
  param_1[0x70] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x71];
    uVar5 = param_1[0x72];
    uVar6 = param_1[0x73];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00894248:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00894248;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x6c];
  param_1[0x6c] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x6d];
    uVar5 = param_1[0x6e];
    uVar6 = param_1[0x6f];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0089436c:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0089436c;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x68];
  param_1[0x68] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x69];
    uVar5 = param_1[0x6a];
    uVar6 = param_1[0x6b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00894490:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00894490;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[100];
  param_1[100] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x65];
    uVar5 = param_1[0x66];
    uVar6 = param_1[0x67];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_008945b4:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008945b4;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x60];
  param_1[0x60] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x61];
    uVar5 = param_1[0x62];
    uVar6 = param_1[99];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_008946d8:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008946d8;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x5c];
  param_1[0x5c] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x5d];
    uVar5 = param_1[0x5e];
    uVar6 = param_1[0x5f];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_008947fc:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008947fc;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x58];
  param_1[0x58] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x59];
    uVar5 = param_1[0x5a];
    uVar6 = param_1[0x5b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00894920:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00894920;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x54];
  param_1[0x54] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x55];
    uVar5 = param_1[0x56];
    uVar6 = param_1[0x57];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00894a44:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00894a44;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x50];
  param_1[0x50] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x51];
    uVar5 = param_1[0x52];
    uVar6 = param_1[0x53];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00894b68:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00894b68;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x4c];
  param_1[0x4c] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x4d];
    uVar5 = param_1[0x4e];
    uVar6 = param_1[0x4f];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00894c8c:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00894c8c;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x48];
  param_1[0x48] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x49];
    uVar5 = param_1[0x4a];
    uVar6 = param_1[0x4b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00894db0:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00894db0;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x44];
  param_1[0x44] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x45];
    uVar5 = param_1[0x46];
    uVar6 = param_1[0x47];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00894ed4:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00894ed4;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x40];
  param_1[0x40] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x41];
    uVar5 = param_1[0x42];
    uVar6 = param_1[0x43];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00894ff8:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00894ff8;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x3c];
  param_1[0x3c] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x3d];
    uVar5 = param_1[0x3e];
    uVar6 = param_1[0x3f];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00895118:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00895118;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x38];
  param_1[0x38] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x39];
    uVar5 = param_1[0x3a];
    uVar6 = param_1[0x3b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00895238:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00895238;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x34];
  param_1[0x34] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x35];
    uVar5 = param_1[0x36];
    uVar6 = param_1[0x37];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00895358:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00895358;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x30];
  param_1[0x30] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x31];
    uVar5 = param_1[0x32];
    uVar6 = param_1[0x33];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00895478:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00895478;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x2c];
  param_1[0x2c] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x2d];
    uVar5 = param_1[0x2e];
    uVar6 = param_1[0x2f];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00895598:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00895598;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x28];
  param_1[0x28] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x29];
    uVar5 = param_1[0x2a];
    uVar6 = param_1[0x2b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_008956b8:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008956b8;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x24];
  param_1[0x24] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x25];
    uVar5 = param_1[0x26];
    uVar6 = param_1[0x27];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_008957d8:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008957d8;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x20];
  param_1[0x20] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x21];
    uVar5 = param_1[0x22];
    uVar6 = param_1[0x23];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_008958f8:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008958f8;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x1c];
  param_1[0x1c] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x1d];
    uVar5 = param_1[0x1e];
    uVar6 = param_1[0x1f];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00895a18:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00895a18;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x18];
  param_1[0x18] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x19];
    uVar5 = param_1[0x1a];
    uVar6 = param_1[0x1b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00895b38:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00895b38;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x14];
  param_1[0x14] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x15];
    uVar5 = param_1[0x16];
    uVar6 = param_1[0x17];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00895c58:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00895c58;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0x10];
  param_1[0x10] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0x11];
    uVar5 = param_1[0x12];
    uVar6 = param_1[0x13];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00895d78:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00895d78;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[0xc];
  param_1[0xc] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[0xd];
    uVar5 = param_1[0xe];
    uVar6 = param_1[0xf];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00895e98:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00895e98;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[8];
  param_1[8] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[9];
    uVar5 = param_1[10];
    uVar6 = param_1[0xb];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_00895fb8:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00895fb8;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)param_1[4];
  param_1[4] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar4)(puVar4);
    plVar7 = (long *)param_1[5];
    uVar5 = param_1[6];
    uVar6 = param_1[7];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_008960d8:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008960d8;
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar4 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  FUN_02bcbe58(auStack_58,0);
  (**(code **)*puVar4)(puVar4);
  plVar7 = (long *)param_1[1];
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  if ((uVar3 & 1) != 0) {
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar2 + 0x38d480)) {
      FUN_02bcc824(plVar7,puVar4,uVar5,uVar6);
      goto LAB_00896214;
    }
  }
  (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,uVar5,uVar6);
LAB_00896214:
  if (*(char *)(lVar2 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar2 + 0x38d488) = 1;
    *(undefined8 *)(lVar2 + 0x38d478) = 0;
    *(undefined8 *)(lVar2 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
  *(int *)(lVar2 + 0x38d480) = iVar1;
  if (iVar1 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar2 + 0x38d484) = 0;
  }
  return;
}


