/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ba2e60; name: FUN_02ba2e60
 */


void FUN_02ba2e60(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_58 [24];
  
  *param_1 = &PTR_FUN_04286028;
  param_1[9] = &PTR_LAB_04286080;
  plVar7 = (long *)param_1[0x29];
  if (plVar7 == (long *)0x0) {
LAB_02ba2eb0:
    plVar7 = (long *)param_1[0x1c];
    if (plVar7 == (long *)0x0) goto LAB_02ba2ed0;
LAB_02ba2eb8:
    plVar1 = plVar7 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_02ba2ed0;
    (**(code **)(*plVar7 + 0x10))();
    plVar7 = (long *)param_1[0x1b];
  }
  else {
    plVar1 = plVar7 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_02ba2eb0;
    (**(code **)(*plVar7 + 0x10))();
    plVar7 = (long *)param_1[0x1c];
    if (plVar7 != (long *)0x0) goto LAB_02ba2eb8;
LAB_02ba2ed0:
    plVar7 = (long *)param_1[0x1b];
  }
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  FUN_02ba2a78(param_1 + 0x17,0);
  lVar9 = param_1[0x13];
  param_1[0x13] = 0;
  lVar6 = tpidr_el0;
  if (lVar9 != 0) {
    FUN_02bcbe58(auStack_58,0);
    FUN_02bc0f5c(lVar9);
    plVar7 = (long *)param_1[0x14];
    uVar2 = param_1[0x15];
    uVar10 = param_1[0x16];
    uVar8 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar8 & 1) == 0) {
LAB_02ba2f7c:
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar9,uVar2,uVar10);
    }
    else {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_02ba2f7c;
      FUN_02bcc824(plVar7,lVar9,uVar2,uVar10);
    }
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar5 = *(int *)(lVar6 + 0x38d480) + -1;
    *(int *)(lVar6 + 0x38d480) = iVar5;
    if (iVar5 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar6 + 0x38d484) = 0;
    }
  }
  lVar9 = param_1[0xf];
  param_1[0xf] = 0;
  if (lVar9 != 0) {
    FUN_02bcbe58(auStack_58,0);
    FUN_02bb9bbc(lVar9);
    plVar7 = (long *)param_1[0x10];
    uVar2 = param_1[0x11];
    uVar10 = param_1[0x12];
    uVar8 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar8 & 1) == 0) {
LAB_02ba3094:
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar9,uVar2,uVar10);
    }
    else {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_02ba3094;
      FUN_02bcc824(plVar7,lVar9,uVar2,uVar10);
    }
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar5 = *(int *)(lVar6 + 0x38d480) + -1;
    *(int *)(lVar6 + 0x38d480) = iVar5;
    if (iVar5 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar6 + 0x38d484) = 0;
    }
  }
  lVar9 = param_1[0xb];
  param_1[0xb] = 0;
  if (lVar9 == 0) {
    return;
  }
  FUN_02bcbe58(auStack_58,0);
  FUN_02b78ea8(lVar9);
  plVar7 = (long *)param_1[0xc];
  uVar2 = param_1[0xd];
  uVar10 = param_1[0xe];
  uVar8 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  if ((uVar8 & 1) != 0) {
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar6 + 0x38d480)) {
      FUN_02bcc824(plVar7,lVar9,uVar2,uVar10);
      goto LAB_02ba31c8;
    }
  }
  (**(code **)(*plVar7 + 0x18))(plVar7,lVar9,uVar2,uVar10);
LAB_02ba31c8:
  if (*(char *)(lVar6 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar6 + 0x38d488) = 1;
    *(undefined8 *)(lVar6 + 0x38d478) = 0;
    *(undefined8 *)(lVar6 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar5 = *(int *)(lVar6 + 0x38d480) + -1;
  *(int *)(lVar6 + 0x38d480) = iVar5;
  if (iVar5 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar6 + 0x38d484) = 0;
  }
  return;
}


