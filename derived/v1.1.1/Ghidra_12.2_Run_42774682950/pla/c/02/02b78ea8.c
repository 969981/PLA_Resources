/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b78ea8; name: FUN_02b78ea8
 */


undefined8 * FUN_02b78ea8(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 auStack_58 [24];
  
  lVar5 = param_1[0xc67];
  *param_1 = &PTR_LAB_04285dc8;
  if (lVar5 == 0) {
LAB_02b78f5c:
    lVar5 = param_1[0xc60];
    if (lVar5 == 0) goto LAB_02b78fe8;
LAB_02b78f64:
    lVar4 = param_1[0xc62];
    param_1[0xc61] = lVar5;
    plVar7 = (long *)param_1[0xc63];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_02b78fcc:
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,lVar4 - lVar5,8);
      goto LAB_02b78fe8;
    }
    lVar2 = tpidr_el0;
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_02b78fcc;
    FUN_02bcc824(plVar7,lVar5,lVar4 - lVar5,8);
    lVar5 = param_1[0xc59];
  }
  else {
    lVar4 = param_1[0xc69];
    param_1[0xc68] = lVar5;
    plVar7 = (long *)param_1[0xc6a];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_02b78f40:
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,lVar4 - lVar5,8);
      goto LAB_02b78f5c;
    }
    lVar2 = tpidr_el0;
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_02b78f40;
    FUN_02bcc824(plVar7,lVar5,lVar4 - lVar5,8);
    lVar5 = param_1[0xc60];
    if (lVar5 != 0) goto LAB_02b78f64;
LAB_02b78fe8:
    lVar5 = param_1[0xc59];
  }
  if (lVar5 != 0) {
    lVar4 = param_1[0xc5b];
    param_1[0xc5a] = lVar5;
    plVar7 = (long *)param_1[0xc5c];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) != 0) {
      lVar2 = tpidr_el0;
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar2 + 0x38d480)) {
        FUN_02bcc824(plVar7,lVar5,lVar4 - lVar5,8);
        goto LAB_02b79074;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,lVar4 - lVar5,8);
  }
LAB_02b79074:
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x62b4));
  lVar5 = param_1[0xc50];
  param_1[0xc50] = 0;
  if (lVar5 != 0) {
    FUN_02b8aa6c(param_1 + 0xc51);
  }
  lVar5 = param_1[0xc4c];
  param_1[0xc4c] = 0;
  if (lVar5 != 0) {
    FUN_02b8a4c8(param_1 + 0xc4d);
  }
  lVar5 = param_1[0xc48];
  param_1[0xc48] = 0;
  if (lVar5 != 0) {
    FUN_02b89f24(param_1 + 0xc49);
  }
  lVar5 = param_1[0xc44];
  param_1[0xc44] = 0;
  if (lVar5 != 0) {
    FUN_02b89980(param_1 + 0xc45);
  }
  lVar5 = param_1[0xc40];
  param_1[0xc40] = 0;
  if (lVar5 != 0) {
    FUN_02b893dc(param_1 + 0xc41);
  }
  lVar5 = param_1[0xc3c];
  param_1[0xc3c] = 0;
  if (lVar5 != 0) {
    FUN_02b88e38(param_1 + 0xc3d);
  }
  lVar5 = param_1[0xc38];
  param_1[0xc38] = 0;
  if (lVar5 != 0) {
    FUN_02b88894(param_1 + 0xc39);
  }
  lVar5 = param_1[0xc34];
  param_1[0xc34] = 0;
  if (lVar5 != 0) {
    FUN_02bcbe58(auStack_58,0);
    FUN_02b8871c(lVar5);
    plVar7 = (long *)param_1[0xc35];
    uVar6 = param_1[0xc36];
    uVar8 = param_1[0xc37];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_02b791ac:
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,uVar6,uVar8);
    }
    else {
      lVar4 = tpidr_el0;
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_02b791ac;
      FUN_02bcc824(plVar7,lVar5,uVar6,uVar8);
    }
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar5 + 0x38d480) + -1;
    *(int *)(lVar5 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar5 + 0x38d484) = 0;
    }
  }
  lVar5 = param_1[0xc30];
  param_1[0xc30] = 0;
  if (lVar5 != 0) {
    FUN_02bcbe58(auStack_58,0);
    FUN_02b885a4(lVar5);
    plVar7 = (long *)param_1[0xc31];
    uVar6 = param_1[0xc32];
    uVar8 = param_1[0xc33];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_02b792d0:
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,uVar6,uVar8);
    }
    else {
      lVar4 = tpidr_el0;
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_02b792d0;
      FUN_02bcc824(plVar7,lVar5,uVar6,uVar8);
    }
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar5 + 0x38d480) + -1;
    *(int *)(lVar5 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar5 + 0x38d484) = 0;
    }
  }
  lVar5 = param_1[0xc2c];
  param_1[0xc2c] = 0;
  if (lVar5 != 0) {
    FUN_02bcbe58(auStack_58,0);
    FUN_02b99c54(lVar5);
    plVar7 = (long *)param_1[0xc2d];
    uVar6 = param_1[0xc2e];
    uVar8 = param_1[0xc2f];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_02b793f4:
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,uVar6,uVar8);
    }
    else {
      lVar4 = tpidr_el0;
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_02b793f4;
      FUN_02bcc824(plVar7,lVar5,uVar6,uVar8);
    }
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar5 + 0x38d480) + -1;
    *(int *)(lVar5 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar5 + 0x38d484) = 0;
    }
  }
  lVar5 = param_1[0xc28];
  param_1[0xc28] = 0;
  if (lVar5 != 0) {
    FUN_02bcbe58(auStack_58,0);
    FUN_02b95410(lVar5);
    plVar7 = (long *)param_1[0xc29];
    uVar6 = param_1[0xc2a];
    uVar8 = param_1[0xc2b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_02b79518:
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,uVar6,uVar8);
    }
    else {
      lVar4 = tpidr_el0;
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_02b79518;
      FUN_02bcc824(plVar7,lVar5,uVar6,uVar8);
    }
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar5 + 0x38d480) + -1;
    *(int *)(lVar5 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar5 + 0x38d484) = 0;
    }
  }
  lVar5 = param_1[0xc24];
  param_1[0xc24] = 0;
  if (lVar5 != 0) {
    FUN_02bcbe58(auStack_58,0);
    FUN_02ba0c64(lVar5);
    plVar7 = (long *)param_1[0xc25];
    uVar6 = param_1[0xc26];
    uVar8 = param_1[0xc27];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_02b7963c:
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,uVar6,uVar8);
    }
    else {
      lVar4 = tpidr_el0;
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_02b7963c;
      FUN_02bcc824(plVar7,lVar5,uVar6,uVar8);
    }
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar5 + 0x38d480) + -1;
    *(int *)(lVar5 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar5 + 0x38d484) = 0;
    }
  }
  lVar5 = param_1[0xc20];
  param_1[0xc20] = 0;
  if (lVar5 != 0) {
    FUN_02bcbe58(auStack_58,0);
    nn::os::FinalizeLightEvent((LightEventType *)(lVar5 + 0x74));
    FUN_02b9fe0c(lVar5 + 8);
    plVar7 = (long *)param_1[0xc21];
    uVar6 = param_1[0xc22];
    uVar8 = param_1[0xc23];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_02b79768:
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,uVar6,uVar8);
    }
    else {
      lVar4 = tpidr_el0;
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_02b79768;
      FUN_02bcc824(plVar7,lVar5,uVar6,uVar8);
    }
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar5 + 0x38d480) + -1;
    *(int *)(lVar5 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar5 + 0x38d484) = 0;
    }
  }
  lVar5 = param_1[0xc1c];
  param_1[0xc1c] = 0;
  if (lVar5 != 0) {
    FUN_02bcbe58(auStack_58,0);
    FUN_02b9dacc(lVar5);
    plVar7 = (long *)param_1[0xc1d];
    uVar6 = param_1[0xc1e];
    uVar8 = param_1[0xc1f];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_02b7988c:
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,uVar6,uVar8);
    }
    else {
      lVar4 = tpidr_el0;
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_02b7988c;
      FUN_02bcc824(plVar7,lVar5,uVar6,uVar8);
    }
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar5 + 0x38d480) + -1;
    *(int *)(lVar5 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar5 + 0x38d484) = 0;
    }
  }
  lVar5 = param_1[0xc18];
  param_1[0xc18] = 0;
  if (lVar5 != 0) {
    FUN_02bcbe58(auStack_58,0);
    nn::os::FinalizeLightEvent((LightEventType *)(lVar5 + 0x74));
    FUN_02b9dd50(lVar5 + 8);
    plVar7 = (long *)param_1[0xc19];
    uVar6 = param_1[0xc1a];
    uVar8 = param_1[0xc1b];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_02b799b8:
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,uVar6,uVar8);
    }
    else {
      lVar4 = tpidr_el0;
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_02b799b8;
      FUN_02bcc824(plVar7,lVar5,uVar6,uVar8);
    }
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar5 + 0x38d480) + -1;
    *(int *)(lVar5 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar5 + 0x38d484) = 0;
    }
  }
  lVar5 = param_1[0xc14];
  param_1[0xc14] = 0;
  if (lVar5 == 0) goto LAB_02b79b7c;
  FUN_02bcbe58(auStack_58,0);
  FUN_02b9bf94(lVar5);
  plVar7 = (long *)param_1[0xc15];
  uVar6 = param_1[0xc16];
  uVar8 = param_1[0xc17];
  uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  if ((uVar3 & 1) == 0) {
LAB_02b79adc:
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,uVar6,uVar8);
  }
  else {
    lVar4 = tpidr_el0;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_02b79adc;
    FUN_02bcc824(plVar7,lVar5,uVar6,uVar8);
  }
  lVar5 = tpidr_el0;
  if (*(char *)(lVar5 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar5 + 0x38d488) = 1;
    *(undefined8 *)(lVar5 + 0x38d478) = 0;
    *(undefined8 *)(lVar5 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar1 = *(int *)(lVar5 + 0x38d480) + -1;
  *(int *)(lVar5 + 0x38d480) = iVar1;
  if (iVar1 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar5 + 0x38d484) = 0;
  }
LAB_02b79b7c:
  *param_1 = &PTR_FUN_04285de8;
  FUN_02b8c0b8(param_1 + 0xc0d);
  FUN_02b8c760(param_1 + 0xc06);
  return param_1 + 0x602;
}


