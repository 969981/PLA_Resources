/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00af0e80; name: FUN_00af0e80
 */


void FUN_00af0e80(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 local_58 [3];
  
  lVar7 = param_1[0x5a];
  *param_1 = &PTR_FUN_041d3af8;
  param_1[9] = &PTR_LAB_041d3bf8;
  param_1[10] = &PTR_LAB_041d3cd8;
  param_1[0x5a] = 0;
  if (lVar7 != 0) {
    FUN_02bcbe58(local_58,0);
    FUN_00af2598(lVar7);
    plVar11 = (long *)param_1[0x5b];
    uVar9 = param_1[0x5c];
    uVar10 = param_1[0x5d];
    uVar6 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    lVar4 = tpidr_el0;
    if ((uVar6 & 1) == 0) {
LAB_00af122c:
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar7,uVar9,uVar10);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_00af122c;
      FUN_02bcc824(plVar11,lVar7,uVar9,uVar10);
    }
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar5 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar5;
    if (iVar5 == 0) {
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
  lVar7 = param_1[0x56];
  param_1[0x56] = 0;
  if (lVar7 != 0) {
    FUN_02bcbe58(local_58,0);
    FUN_00af221c(lVar7);
    plVar11 = (long *)param_1[0x57];
    uVar9 = param_1[0x58];
    uVar10 = param_1[0x59];
    uVar6 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar6 & 1) == 0) {
LAB_00af0ff4:
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar7,uVar9,uVar10);
    }
    else {
      lVar4 = tpidr_el0;
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_00af0ff4;
      FUN_02bcc824(plVar11,lVar7,uVar9,uVar10);
    }
    lVar7 = tpidr_el0;
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar5 = *(int *)(lVar7 + 0x38d480) + -1;
    *(int *)(lVar7 + 0x38d480) = iVar5;
    if (iVar5 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar7 + 0x38d484) = 0;
    }
  }
  lVar7 = param_1[0x52];
  param_1[0x52] = 0;
  if (lVar7 != 0) {
    FUN_02bcbe58(local_58,0);
    FUN_00af1fa0(lVar7);
    plVar11 = (long *)param_1[0x53];
    uVar9 = param_1[0x54];
    uVar10 = param_1[0x55];
    uVar6 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar6 & 1) == 0) {
LAB_00af1460:
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar7,uVar9,uVar10);
    }
    else {
      lVar4 = tpidr_el0;
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_00af1460;
      FUN_02bcc824(plVar11,lVar7,uVar9,uVar10);
    }
    lVar7 = tpidr_el0;
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar5 = *(int *)(lVar7 + 0x38d480) + -1;
    *(int *)(lVar7 + 0x38d480) = iVar5;
    if (iVar5 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar7 + 0x38d484) = 0;
    }
  }
  lVar7 = param_1[0x4e];
  param_1[0x4e] = 0;
  if (lVar7 != 0) {
    FUN_02bcbe58(local_58,0);
    FUN_00af2598(lVar7);
    plVar11 = (long *)param_1[0x4f];
    uVar9 = param_1[0x50];
    uVar10 = param_1[0x51];
    uVar6 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar6 & 1) == 0) {
LAB_00af1344:
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar7,uVar9,uVar10);
    }
    else {
      lVar4 = tpidr_el0;
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_00af1344;
      FUN_02bcc824(plVar11,lVar7,uVar9,uVar10);
    }
    lVar7 = tpidr_el0;
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar5 = *(int *)(lVar7 + 0x38d480) + -1;
    *(int *)(lVar7 + 0x38d480) = iVar5;
    if (iVar5 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar7 + 0x38d484) = 0;
    }
  }
  lVar7 = param_1[0x4a];
  param_1[0x4a] = 0;
  if (lVar7 != 0) {
    FUN_02bcbe58(local_58,0);
    FUN_00af221c(lVar7);
    plVar11 = (long *)param_1[0x4b];
    uVar9 = param_1[0x4c];
    uVar10 = param_1[0x4d];
    uVar6 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar6 & 1) == 0) {
LAB_00af1110:
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar7,uVar9,uVar10);
    }
    else {
      lVar4 = tpidr_el0;
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_00af1110;
      FUN_02bcc824(plVar11,lVar7,uVar9,uVar10);
    }
    lVar7 = tpidr_el0;
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar5 = *(int *)(lVar7 + 0x38d480) + -1;
    *(int *)(lVar7 + 0x38d480) = iVar5;
    if (iVar5 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar7 + 0x38d484) = 0;
    }
  }
  lVar7 = param_1[0x46];
  param_1[0x46] = 0;
  if (lVar7 != 0) {
    FUN_02bcbe58(local_58,0);
    FUN_00af1fa0(lVar7);
    plVar11 = (long *)param_1[0x47];
    uVar9 = param_1[0x48];
    uVar10 = param_1[0x49];
    uVar6 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar6 & 1) == 0) {
LAB_00af157c:
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar7,uVar9,uVar10);
    }
    else {
      lVar4 = tpidr_el0;
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_00af157c;
      FUN_02bcc824(plVar11,lVar7,uVar9,uVar10);
    }
    lVar7 = tpidr_el0;
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar5 = *(int *)(lVar7 + 0x38d480) + -1;
    *(int *)(lVar7 + 0x38d480) = iVar5;
    if (iVar5 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar7 + 0x38d484) = 0;
      puVar8 = (undefined8 *)param_1[0x3e];
      goto joined_r0x00af1620;
    }
  }
  puVar8 = (undefined8 *)param_1[0x3e];
joined_r0x00af1620:
  if (puVar8 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar8 + 1);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      puVar8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_58[0] = *puVar8;
      FUN_02a44274(lVar7 + 0xd8,local_58);
    }
  }
  FUN_02a4c4ec(param_1);
  return;
}


