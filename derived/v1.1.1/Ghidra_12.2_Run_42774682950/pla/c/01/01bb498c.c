/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bb498c; name: FUN_01bb498c
 */


void FUN_01bb498c(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 local_68;
  
  *param_1 = &PTR_FUN_04244170;
  param_1[9] = &PTR_LAB_04244298;
  param_1[10] = &PTR_LAB_04244378;
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x67c));
  lVar8 = param_1[199];
  lVar4 = tpidr_el0;
  if (lVar8 == 0) {
    plVar10 = (long *)param_1[0xc0];
  }
  else {
    lVar7 = param_1[0xc9];
    plVar10 = (long *)param_1[0xca];
    uVar6 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar6 & 1) != 0) {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar4 + 0x38d480)) {
        FUN_02bcc824(plVar10,lVar8,lVar7 << 3,1);
        plVar10 = (long *)param_1[0xc0];
        goto joined_r0x01bb4aac;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,lVar7 << 3,1);
    plVar10 = (long *)param_1[0xc0];
  }
joined_r0x01bb4aac:
  plVar11 = plVar10;
  if (plVar10 != (long *)0x0) {
    do {
      plVar12 = (long *)param_1[0xc1];
      plVar10 = (long *)*plVar11;
      uVar6 = (**(code **)(*plVar12 + 0xc0))(plVar12);
      if ((uVar6 & 1) != 0) {
        if (*(char *)(lVar4 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar4 + 0x38d488) = 1;
          *(undefined8 *)(lVar4 + 0x38d478) = 0;
          *(undefined8 *)(lVar4 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar4 + 0x38d480)) goto code_r0x01bb4b80;
      }
      (**(code **)(*plVar12 + 0x18))(plVar12,plVar11,0x20,8);
      plVar11 = plVar10;
      if (plVar10 == (long *)0x0) break;
    } while( true );
  }
  lVar8 = param_1[0xba];
  param_1[0xba] = 0;
  if (lVar8 == 0) {
LAB_01bb4c24:
    if (param_1[0xb0] == 0) goto LAB_01bb4c2c;
LAB_01bb4ebc:
    FUN_01bbf298(param_1 + 0xb0);
    lVar7 = param_1[0xb0];
    lVar8 = param_1[0xb2];
    plVar10 = (long *)param_1[0xb3];
    uVar6 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar6 & 1) == 0) {
LAB_01bb4f28:
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar7,lVar8 - lVar7,8);
      puVar9 = (undefined8 *)param_1[0xae];
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_01bb4f28;
      FUN_02bcc824(plVar10,lVar7,lVar8 - lVar7,8);
      puVar9 = (undefined8 *)param_1[0xae];
    }
  }
  else {
    lVar7 = param_1[0xbb];
    plVar10 = (long *)param_1[0xbc];
    uVar6 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar6 & 1) == 0) {
LAB_01bb4c08:
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,lVar7 << 3,8);
      goto LAB_01bb4c24;
    }
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_01bb4c08;
    FUN_02bcc824(plVar10,lVar8,lVar7 << 3,8);
    if (param_1[0xb0] != 0) goto LAB_01bb4ebc;
LAB_01bb4c2c:
    puVar9 = (undefined8 *)param_1[0xae];
  }
  if (puVar9 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar9 + 1);
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
      puVar9[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_68 = *puVar9;
      FUN_02a44274(lVar8 + 0xd8,&local_68);
    }
  }
  puVar9 = (undefined8 *)param_1[0xac];
  if (puVar9 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar9 + 1);
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
      puVar9[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_68 = *puVar9;
      FUN_02a44274(lVar8 + 0xd8,&local_68);
    }
  }
  puVar9 = (undefined8 *)param_1[0xaa];
  if (puVar9 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar9 + 1);
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
      puVar9[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_68 = *puVar9;
      FUN_02a44274(lVar8 + 0xd8,&local_68);
    }
  }
  puVar9 = (undefined8 *)param_1[0xa8];
  if (puVar9 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar9 + 1);
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
      puVar9[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_68 = *puVar9;
      FUN_02a44274(lVar8 + 0xd8,&local_68);
    }
  }
  lVar8 = param_1[0x6e];
  if (lVar8 != 0) {
    lVar7 = param_1[0x70];
    param_1[0x6f] = lVar8;
    plVar10 = (long *)param_1[0x71];
    uVar6 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar6 & 1) != 0) {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar4 + 0x38d480)) {
        FUN_02bcc824(plVar10,lVar8,lVar7 - lVar8,4);
        goto LAB_01bb4e34;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,lVar7 - lVar8,4);
  }
LAB_01bb4e34:
  FUN_01bb5174(param_1 + 0x3e);
  FUN_02a4c4ec(param_1);
  return;
code_r0x01bb4b80:
  FUN_02bcc824(plVar12,plVar11,0x20,8);
  goto joined_r0x01bb4aac;
}


