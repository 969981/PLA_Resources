/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a31f14; name: FUN_01a31f14
 */


void FUN_01a31f14(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_78 [3];
  
  *param_1 = &PTR_FUN_04238420;
  param_1[9] = &PTR_LAB_042385b0;
  param_1[10] = &PTR_FUN_04238690;
  plVar5 = (long *)param_1[0x1d9a];
  if (plVar5 == (long *)0x0) {
LAB_01a31f80:
    puVar9 = (undefined8 *)param_1[0x1d98];
  }
  else {
    lVar7 = plVar5[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 != 0) goto LAB_01a31f80;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar5 + 0x20))();
    puVar9 = (undefined8 *)param_1[0x1d98];
  }
  if (puVar9 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar9 + 1);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      puVar9[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_78[0] = *puVar9;
      FUN_02a44274(lVar7 + 0xd8,local_78);
    }
  }
  puVar9 = (undefined8 *)param_1[0x1d96];
  if (puVar9 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar9 + 1);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      puVar9[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_78[0] = *puVar9;
      FUN_02a44274(lVar7 + 0xd8,local_78);
    }
  }
  puVar9 = (undefined8 *)param_1[0x1d94];
  if (puVar9 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar9 + 1);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      puVar9[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_78[0] = *puVar9;
      FUN_02a44274(lVar7 + 0xd8,local_78);
    }
  }
  puVar9 = (undefined8 *)param_1[0x1c8e];
  param_1[0x1c8e] = 0;
  lVar7 = tpidr_el0;
  if (puVar9 == (undefined8 *)0x0) {
LAB_01a3218c:
    puVar9 = (undefined8 *)param_1[0x1c63];
  }
  else {
    FUN_02bcbe58(local_78,0);
    (**(code **)*puVar9)(puVar9);
    plVar5 = (long *)param_1[0x1c8f];
    uVar10 = param_1[0x1c90];
    uVar11 = param_1[0x1c91];
    uVar6 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar6 & 1) == 0) {
LAB_01a3212c:
      (**(code **)(*plVar5 + 0x18))(plVar5,puVar9,uVar10,uVar11);
    }
    else {
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar7 + 0x38d480) < 1) goto LAB_01a3212c;
      FUN_02bcc824(plVar5,puVar9,uVar10,uVar11);
    }
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar4 = *(int *)(lVar7 + 0x38d480) + -1;
    *(int *)(lVar7 + 0x38d480) = iVar4;
    if (iVar4 != 0) goto LAB_01a3218c;
    FUN_02bcc320();
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar7 + 0x38d484) = 0;
    puVar9 = (undefined8 *)param_1[0x1c63];
  }
  if (puVar9 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar9 + 1);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      puVar9[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_78[0] = *puVar9;
      FUN_02a44274(lVar8 + 0xd8,local_78);
    }
  }
  puVar9 = (undefined8 *)param_1[0x1c5e];
  if (puVar9 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar9 + 1);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      puVar9[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_78[0] = *puVar9;
      FUN_02a44274(lVar8 + 0xd8,local_78);
    }
  }
  puVar9 = (undefined8 *)param_1[0x1c5a];
  param_1[0x1c5a] = 0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_02bcbe58(local_78,0);
    (**(code **)*puVar9)(puVar9);
    plVar5 = (long *)param_1[0x1c5b];
    uVar10 = param_1[0x1c5c];
    uVar11 = param_1[0x1c5d];
    uVar6 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar6 & 1) == 0) {
LAB_01a3241c:
      (**(code **)(*plVar5 + 0x18))(plVar5,puVar9,uVar10,uVar11);
    }
    else {
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar7 + 0x38d480) < 1) goto LAB_01a3241c;
      FUN_02bcc824(plVar5,puVar9,uVar10,uVar11);
    }
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar4 = *(int *)(lVar7 + 0x38d480) + -1;
    *(int *)(lVar7 + 0x38d480) = iVar4;
    if (iVar4 == 0) {
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
  puVar9 = (undefined8 *)param_1[0x1c56];
  param_1[0x1c56] = 0;
  if (puVar9 == (undefined8 *)0x0) {
LAB_01a32264:
    puVar9 = (undefined8 *)param_1[0x1c20];
  }
  else {
    FUN_02bcbe58(local_78,0);
    (**(code **)*puVar9)(puVar9);
    plVar5 = (long *)param_1[0x1c57];
    uVar10 = param_1[0x1c58];
    uVar11 = param_1[0x1c59];
    uVar6 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar6 & 1) == 0) {
LAB_01a32538:
      (**(code **)(*plVar5 + 0x18))(plVar5,puVar9,uVar10,uVar11);
    }
    else {
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar7 + 0x38d480) < 1) goto LAB_01a32538;
      FUN_02bcc824(plVar5,puVar9,uVar10,uVar11);
    }
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar4 = *(int *)(lVar7 + 0x38d480) + -1;
    *(int *)(lVar7 + 0x38d480) = iVar4;
    if (iVar4 != 0) goto LAB_01a32264;
    FUN_02bcc320();
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar7 + 0x38d484) = 0;
    puVar9 = (undefined8 *)param_1[0x1c20];
  }
  if (puVar9 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar9 + 1);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      puVar9[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_78[0] = *puVar9;
      FUN_02a44274(lVar8 + 0xd8,local_78);
    }
  }
  puVar9 = (undefined8 *)param_1[0x1c1e];
  if (puVar9 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar9 + 1);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      puVar9[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_78[0] = *puVar9;
      FUN_02a44274(lVar8 + 0xd8,local_78);
    }
  }
  if (*(char *)(param_1 + 0x1bf8) != '\0') {
    *(undefined1 *)(param_1 + 0x1bf8) = 0;
  }
  if (*(char *)(param_1 + 0x1bec) != '\0') {
    puVar9 = (undefined8 *)param_1[0x1bf0];
    if (puVar9 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar9 + 1);
      do {
        iVar4 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 + -1 == 0) {
        puVar9[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_78[0] = *puVar9;
        FUN_02a44274(lVar8 + 0xd8,local_78);
      }
    }
    puVar9 = (undefined8 *)param_1[0x1bee];
    if (puVar9 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar9 + 1);
      do {
        iVar4 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 + -1 == 0) {
        puVar9[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_78[0] = *puVar9;
        FUN_02a44274(lVar8 + 0xd8,local_78);
      }
    }
    *(char *)(param_1 + 0x1bec) = '\0';
  }
  lVar8 = 0xce40;
  do {
    puVar9 = *(undefined8 **)((long)param_1 + lVar8 + 0x6e0);
    *(undefined8 *)((long)param_1 + lVar8 + 0x6e0) = 0;
    if (puVar9 != (undefined8 *)0x0) {
      FUN_02bcbe58(local_78,0);
      (**(code **)*puVar9)(puVar9);
      plVar5 = *(long **)((long)param_1 + lVar8 + 0x6e8);
      uVar10 = *(undefined8 *)((long)param_1 + lVar8 + 0x6f0);
      uVar11 = *(undefined8 *)((long)param_1 + lVar8 + 0x6f8);
      uVar6 = (**(code **)(*plVar5 + 0xc0))(plVar5);
      if ((uVar6 & 1) == 0) {
LAB_01a32cc0:
        (**(code **)(*plVar5 + 0x18))(plVar5,puVar9,uVar10,uVar11);
      }
      else {
        if (*(char *)(lVar7 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar7 + 0x38d488) = 1;
          *(undefined8 *)(lVar7 + 0x38d478) = 0;
          *(undefined8 *)(lVar7 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar7 + 0x38d480) < 1) goto LAB_01a32cc0;
        FUN_02bcc824(plVar5,puVar9,uVar10,uVar11);
      }
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar4 = *(int *)(lVar7 + 0x38d480) + -1;
      *(int *)(lVar7 + 0x38d480) = iVar4;
      if (iVar4 == 0) {
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
    lVar8 = lVar8 + -0x960;
  } while (lVar8 != 0);
  puVar9 = (undefined8 *)param_1[0xdc];
  param_1[0xdc] = 0;
  if (puVar9 == (undefined8 *)0x0) goto LAB_01a32e38;
  FUN_02bcbe58(local_78,0);
  (**(code **)*puVar9)(puVar9);
  plVar5 = (long *)param_1[0xdd];
  uVar10 = param_1[0xde];
  uVar11 = param_1[0xdf];
  uVar6 = (**(code **)(*plVar5 + 0xc0))(plVar5);
  if ((uVar6 & 1) == 0) {
LAB_01a32dd8:
    (**(code **)(*plVar5 + 0x18))(plVar5,puVar9,uVar10,uVar11);
  }
  else {
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar7 + 0x38d480) < 1) goto LAB_01a32dd8;
    FUN_02bcc824(plVar5,puVar9,uVar10,uVar11);
  }
  if (*(char *)(lVar7 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar7 + 0x38d488) = 1;
    *(undefined8 *)(lVar7 + 0x38d478) = 0;
    *(undefined8 *)(lVar7 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar4 = *(int *)(lVar7 + 0x38d480) + -1;
  *(int *)(lVar7 + 0x38d480) = iVar4;
  if (iVar4 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar7 + 0x38d484) = 0;
  }
LAB_01a32e38:
  FUN_01a330a4(param_1);
  return;
}


