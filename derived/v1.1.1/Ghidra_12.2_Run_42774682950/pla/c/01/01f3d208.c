/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f3d208; name: FUN_01f3d208
 */


void FUN_01f3d208(long *param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 local_38;
  
  *param_1 = (long)&PTR_FUN_0425a158;
  param_1[9] = (long)&PTR_LAB_0425a1a8;
  param_1[10] = (long)&PTR_LAB_0425a1f0;
  FUN_01591de4(param_1 + 0xa8);
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x52c));
  FUN_01f460e8(param_1 + 0x98);
  puVar12 = (undefined8 *)param_1[0x95];
  if (puVar12 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar12 + 1);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      puVar12[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_38 = *puVar12;
      FUN_02a44274(lVar10 + 0xd8,&local_38);
    }
  }
  puVar12 = (undefined8 *)param_1[0x93];
  if (puVar12 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar12 + 1);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      puVar12[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_38 = *puVar12;
      FUN_02a44274(lVar10 + 0xd8,&local_38);
    }
  }
  puVar12 = (undefined8 *)param_1[0x91];
  if (puVar12 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar12 + 1);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      puVar12[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_38 = *puVar12;
      FUN_02a44274(lVar10 + 0xd8,&local_38);
    }
  }
  puVar12 = (undefined8 *)param_1[0x8f];
  if (puVar12 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar12 + 1);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      puVar12[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_38 = *puVar12;
      FUN_02a44274(lVar10 + 0xd8,&local_38);
    }
  }
  puVar12 = (undefined8 *)param_1[0x8d];
  if (puVar12 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar12 + 1);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      puVar12[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_38 = *puVar12;
      FUN_02a44274(lVar10 + 0xd8,&local_38);
    }
  }
  plVar8 = (long *)param_1[0x8c];
  if (plVar8 == (long *)0x0) {
LAB_01f3d454:
    plVar8 = (long *)param_1[0x8b];
    if (plVar8 == (long *)0x0) goto LAB_01f3d478;
LAB_01f3d45c:
    lVar10 = plVar8[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 != 0) goto LAB_01f3d478;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar8 + 0x20))();
    plVar8 = (long *)param_1[0x8a];
    if (plVar8 != (long *)0x0) goto LAB_01f3d480;
LAB_01f3d49c:
    plVar8 = (long *)param_1[0x89];
    if (plVar8 == (long *)0x0) goto LAB_01f3d4c0;
LAB_01f3d4a4:
    lVar10 = plVar8[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 != 0) goto LAB_01f3d4c0;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar8 + 0x20))();
    plVar8 = (long *)param_1[0x88];
  }
  else {
    lVar10 = plVar8[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 != 0) goto LAB_01f3d454;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar8 + 0x20))();
    plVar8 = (long *)param_1[0x8b];
    if (plVar8 != (long *)0x0) goto LAB_01f3d45c;
LAB_01f3d478:
    plVar8 = (long *)param_1[0x8a];
    if (plVar8 == (long *)0x0) goto LAB_01f3d49c;
LAB_01f3d480:
    lVar10 = plVar8[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 != 0) goto LAB_01f3d49c;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar8 + 0x20))();
    plVar8 = (long *)param_1[0x89];
    if (plVar8 != (long *)0x0) goto LAB_01f3d4a4;
LAB_01f3d4c0:
    plVar8 = (long *)param_1[0x88];
  }
  if (plVar8 != (long *)0x0) {
    lVar10 = plVar8[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))();
    }
  }
  FUN_01f46480(param_1 + 0x7b);
  FUN_01f46930(param_1 + 0x74);
  FUN_01f46930(param_1 + 0x6d);
  FUN_01f46930(param_1 + 0x66);
  FUN_01f46b5c(param_1 + 0x55);
  lVar10 = param_1[0x49];
  if (lVar10 == 0) {
LAB_01f3d59c:
    lVar10 = param_1[0x42];
  }
  else {
    lVar11 = param_1[0x4b];
    param_1[0x4a] = lVar10;
    plVar8 = (long *)param_1[0x4c];
    uVar9 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar9 & 1) == 0) {
LAB_01f3d580:
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar10,lVar11 - lVar10,4);
      goto LAB_01f3d59c;
    }
    lVar6 = tpidr_el0;
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_01f3d580;
    FUN_02bcc824(plVar8,lVar10,lVar11 - lVar10,4);
    lVar10 = param_1[0x42];
  }
  if (lVar10 != 0) {
    lVar11 = param_1[0x44];
    param_1[0x43] = lVar10;
    plVar8 = (long *)param_1[0x45];
    uVar9 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar9 & 1) != 0) {
      lVar6 = tpidr_el0;
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar8,lVar10,lVar11 - lVar10,4);
        goto LAB_01f3d628;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar10,lVar11 - lVar10,4);
  }
LAB_01f3d628:
  FUN_01f47110(param_1 + 0x33);
  puVar12 = (undefined8 *)param_1[0x2f];
  if (puVar12 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar12 + 1);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      puVar12[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_38 = *puVar12;
      FUN_02a44274(lVar10 + 0xd8,&local_38);
    }
  }
  puVar12 = (undefined8 *)param_1[0x2d];
  if (puVar12 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar12 + 1);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      puVar12[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_38 = *puVar12;
      FUN_02a44274(lVar10 + 0xd8,&local_38);
    }
  }
  plVar8 = (long *)param_1[0x2c];
  if (plVar8 != (long *)0x0) {
    lVar10 = plVar8[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))();
      plVar8 = (long *)param_1[0x2b];
      goto joined_r0x01f3d718;
    }
  }
  plVar8 = (long *)param_1[0x2b];
joined_r0x01f3d718:
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))();
  }
  FUN_01f47598(param_1 + 0x24);
  FUN_01f3ddd0(param_1 + 0x16);
  puVar12 = (undefined8 *)param_1[0x14];
  if (puVar12 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar12 + 1);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      puVar12[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_38 = *puVar12;
      FUN_02a44274(lVar10 + 0xd8,&local_38);
    }
  }
  puVar12 = (undefined8 *)param_1[0x12];
  if (puVar12 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar12 + 1);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      puVar12[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_38 = *puVar12;
      FUN_02a44274(lVar10 + 0xd8,&local_38);
    }
  }
  puVar12 = (undefined8 *)param_1[0x10];
  if (puVar12 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar12 + 1);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      puVar12[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_38 = *puVar12;
      FUN_02a44274(lVar10 + 0xd8,&local_38);
    }
  }
  puVar12 = (undefined8 *)param_1[0xe];
  if (puVar12 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar12 + 1);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      puVar12[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_38 = *puVar12;
      FUN_02a44274(lVar10 + 0xd8,&local_38);
    }
  }
  plVar8 = (long *)param_1[0xd];
  if (plVar8 != (long *)0x0) {
    lVar10 = plVar8[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))();
    }
  }
  puVar2 = PTR_DAT_04379610 + 0x58;
  puVar3 = PTR_DAT_04379610 + 0xa0;
  *param_1 = (long)(PTR_DAT_04379610 + 0x10);
  param_1[9] = (long)puVar2;
  param_1[10] = (long)puVar3;
  puVar12 = (undefined8 *)param_1[0xb];
  if (puVar12 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar12 + 1);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      puVar12[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_38 = *puVar12;
      FUN_02a44274(lVar10 + 0xd8,&local_38);
    }
  }
  return;
}


