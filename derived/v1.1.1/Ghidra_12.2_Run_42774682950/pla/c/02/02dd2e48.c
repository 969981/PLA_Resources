/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dd2e48; name: FUN_02dd2e48
 */


void FUN_02dd2e48(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auStack_58 [24];
  
  *param_1 = &PTR_FUN_0429a958;
  plVar7 = (long *)param_1[2];
  if (plVar7 != (long *)0x0) {
    puVar10 = *(undefined8 **)param_1[0x13];
    puVar2 = (undefined8 *)((long *)param_1[0x13])[1];
    if (puVar10 != puVar2) {
      while( true ) {
        lVar8 = (**(code **)(*plVar7 + 0x2f0))(plVar7,*puVar10);
        if (*(int *)(lVar8 + 0x34) != 0x7fffffff) {
          (**(code **)(*(long *)param_1[2] + 0x308))();
        }
        (**(code **)(*(long *)param_1[2] + 0x2a0))((long *)param_1[2],puVar10,1,0);
        if (puVar2 + -1 == puVar10) break;
        plVar7 = (long *)param_1[2];
        puVar10 = puVar10 + 1;
      }
    }
    lVar11 = ((long *)param_1[0xb])[1];
    for (lVar8 = *(long *)param_1[0xb]; lVar8 != lVar11; lVar8 = lVar8 + 0x30) {
      (**(code **)(*(long *)param_1[2] + 0xe0))((long *)param_1[2],lVar8,1,0);
    }
    lVar11 = ((long *)param_1[0xf])[1];
    for (lVar8 = *(long *)param_1[0xf]; lVar8 != lVar11; lVar8 = lVar8 + 0x30) {
      (**(code **)(*(long *)param_1[2] + 0xe0))((long *)param_1[2],lVar8,1,0);
    }
    for (plVar7 = *(long **)(param_1[7] + 0x30); plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      (**(code **)(*(long *)param_1[2] + 0x98))((long *)param_1[2],(long)plVar7 + 0x12,1);
    }
    for (plVar7 = *(long **)(param_1[3] + 0x30); plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      (**(code **)(*(long *)param_1[2] + 0x88))((long *)param_1[2],(long)plVar7 + 0x12,1);
    }
  }
  lVar11 = param_1[0x17];
  param_1[0x17] = 0;
  lVar8 = tpidr_el0;
  if (lVar11 != 0) {
    FUN_02bcbe58(auStack_58,0);
    FUN_02dd892c(lVar11);
    plVar7 = (long *)param_1[0x18];
    uVar3 = param_1[0x19];
    uVar12 = param_1[0x1a];
    uVar9 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar9 & 1) == 0) {
LAB_02dd3034:
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar11,uVar3,uVar12);
    }
    else {
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_02dd3034;
      FUN_02bcc824(plVar7,lVar11,uVar3,uVar12);
    }
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar6 = *(int *)(lVar8 + 0x38d480) + -1;
    *(int *)(lVar8 + 0x38d480) = iVar6;
    if (iVar6 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar8 + 0x38d484) = 0;
    }
  }
  lVar11 = param_1[0x13];
  param_1[0x13] = 0;
  if (lVar11 != 0) {
    FUN_02bfad10(param_1 + 0x14);
  }
  lVar11 = param_1[0xf];
  param_1[0xf] = 0;
  if (lVar11 != 0) {
    FUN_02bcbe58(auStack_58,0);
    FUN_02dd876c(lVar11);
    plVar7 = (long *)param_1[0x10];
    uVar3 = param_1[0x11];
    uVar12 = param_1[0x12];
    uVar9 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar9 & 1) == 0) {
LAB_02dd3160:
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar11,uVar3,uVar12);
    }
    else {
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_02dd3160;
      FUN_02bcc824(plVar7,lVar11,uVar3,uVar12);
    }
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar6 = *(int *)(lVar8 + 0x38d480) + -1;
    *(int *)(lVar8 + 0x38d480) = iVar6;
    if (iVar6 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar8 + 0x38d484) = 0;
    }
  }
  lVar11 = param_1[0xb];
  param_1[0xb] = 0;
  if (lVar11 != 0) {
    FUN_02bcbe58(auStack_58,0);
    FUN_02dd876c(lVar11);
    plVar7 = (long *)param_1[0xc];
    uVar3 = param_1[0xd];
    uVar12 = param_1[0xe];
    uVar9 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar9 & 1) == 0) {
LAB_02dd3278:
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar11,uVar3,uVar12);
    }
    else {
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_02dd3278;
      FUN_02bcc824(plVar7,lVar11,uVar3,uVar12);
    }
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar6 = *(int *)(lVar8 + 0x38d480) + -1;
    *(int *)(lVar8 + 0x38d480) = iVar6;
    if (iVar6 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar8 + 0x38d484) = 0;
    }
  }
  lVar11 = param_1[7];
  param_1[7] = 0;
  if (lVar11 != 0) {
    FUN_02bcbe58(auStack_58,0);
    FUN_02dd8504(lVar11);
    plVar7 = (long *)param_1[8];
    uVar3 = param_1[9];
    uVar12 = param_1[10];
    uVar9 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar9 & 1) == 0) {
LAB_02dd3390:
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar11,uVar3,uVar12);
    }
    else {
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_02dd3390;
      FUN_02bcc824(plVar7,lVar11,uVar3,uVar12);
    }
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar6 = *(int *)(lVar8 + 0x38d480) + -1;
    *(int *)(lVar8 + 0x38d480) = iVar6;
    if (iVar6 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar8 + 0x38d484) = 0;
    }
  }
  lVar11 = param_1[3];
  param_1[3] = 0;
  if (lVar11 == 0) goto LAB_02dd3544;
  FUN_02bcbe58(auStack_58,0);
  FUN_02dd829c(lVar11);
  plVar7 = (long *)param_1[4];
  uVar3 = param_1[5];
  uVar12 = param_1[6];
  uVar9 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  if ((uVar9 & 1) == 0) {
LAB_02dd34a8:
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar11,uVar3,uVar12);
  }
  else {
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_02dd34a8;
    FUN_02bcc824(plVar7,lVar11,uVar3,uVar12);
  }
  if (*(char *)(lVar8 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar8 + 0x38d488) = 1;
    *(undefined8 *)(lVar8 + 0x38d478) = 0;
    *(undefined8 *)(lVar8 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar6 = *(int *)(lVar8 + 0x38d480) + -1;
  *(int *)(lVar8 + 0x38d480) = iVar6;
  if (iVar6 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar8 + 0x38d484) = 0;
  }
LAB_02dd3544:
  plVar7 = (long *)param_1[2];
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar1 = plVar7 + 2;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02dd3b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x18))();
      return;
    }
  }
  return;
}


