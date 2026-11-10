/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b39078; name: FUN_01b39078
 */


void FUN_01b39078(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 local_68;
  
  *param_1 = &PTR_FUN_0423ed38;
  param_1[9] = &PTR_LAB_0423ee80;
  param_1[10] = &PTR_LAB_0423ef60;
  plVar5 = (long *)param_1[0xc4];
  if (plVar5 == (long *)0x0) {
LAB_01b390d8:
    puVar8 = (undefined8 *)param_1[0xc0];
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
    if (iVar4 + -1 != 0) goto LAB_01b390d8;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar5 + 0x20))();
    puVar8 = (undefined8 *)param_1[0xc0];
  }
  if (puVar8 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar8 + 1);
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
      puVar8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_68 = *puVar8;
      FUN_02a44274(lVar7 + 0xd8,&local_68);
    }
  }
  puVar8 = (undefined8 *)param_1[0xbe];
  if (puVar8 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar8 + 1);
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
      puVar8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_68 = *puVar8;
      FUN_02a44274(lVar7 + 0xd8,&local_68);
    }
  }
  plVar5 = (long *)param_1[0xbd];
  if (plVar5 == (long *)0x0) {
LAB_01b391b8:
    lVar7 = param_1[0xb8];
  }
  else {
    plVar9 = plVar5 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 != 0) goto LAB_01b391b8;
    (**(code **)(*plVar5 + 0x10))();
    lVar7 = param_1[0xb8];
  }
  if (lVar7 == 0) goto LAB_01b391c0;
  plVar9 = (long *)param_1[0xb7];
  plVar5 = param_1 + 0xb6;
  lVar7 = param_1[0xb6];
  *(undefined8 *)(*plVar9 + 8) = *(undefined8 *)(lVar7 + 8);
  **(long **)(lVar7 + 8) = *plVar9;
  param_1[0xb8] = 0;
  if (plVar9 == plVar5) goto LAB_01b391c0;
  plVar10 = (long *)param_1[0xb9];
  plVar11 = (long *)plVar9[1];
  uVar6 = (**(code **)(*plVar10 + 0xc0))(plVar10);
  if ((uVar6 & 1) == 0) {
LAB_01b392e8:
    (**(code **)(*plVar10 + 0x18))(plVar10,plVar9,0x18,4);
  }
  else {
    lVar7 = tpidr_el0;
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar7 + 0x38d480) < 1) goto LAB_01b392e8;
    FUN_02bcc824(plVar10,plVar9,0x18,4);
  }
  if (plVar11 == plVar5) goto LAB_01b391c0;
  plVar9 = (long *)plVar11[1];
  plVar10 = (long *)param_1[0xb9];
  uVar6 = (**(code **)(*plVar10 + 0xc0))(plVar10);
  if ((uVar6 & 1) == 0) {
LAB_01b39370:
    (**(code **)(*plVar10 + 0x18))(plVar10,plVar11,0x18,4);
  }
  else {
    lVar7 = tpidr_el0;
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar7 + 0x38d480) < 1) goto LAB_01b39370;
    FUN_02bcc824(plVar10,plVar11,0x18,4);
  }
  if (plVar9 != plVar5) {
    lVar7 = tpidr_el0;
    do {
      plVar10 = (long *)param_1[0xb9];
      plVar11 = (long *)plVar9[1];
      uVar6 = (**(code **)(*plVar10 + 0xc0))(plVar10);
      if ((uVar6 & 1) == 0) {
LAB_01b39410:
        (**(code **)(*plVar10 + 0x18))(plVar10,plVar9,0x18,4);
      }
      else {
        if (*(char *)(lVar7 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar7 + 0x38d488) = 1;
          *(undefined8 *)(lVar7 + 0x38d478) = 0;
          *(undefined8 *)(lVar7 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar7 + 0x38d480) < 1) goto LAB_01b39410;
        FUN_02bcc824(plVar10,plVar9,0x18,4);
      }
      plVar9 = plVar11;
    } while (plVar11 != plVar5);
  }
LAB_01b391c0:
  puVar8 = (undefined8 *)param_1[0xb4];
  if (puVar8 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar8 + 1);
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
      puVar8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_68 = *puVar8;
      FUN_02a44274(lVar7 + 0xd8,&local_68);
    }
  }
  FUN_01a70470(param_1);
  return;
}


