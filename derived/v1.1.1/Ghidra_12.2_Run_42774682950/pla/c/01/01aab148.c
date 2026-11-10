/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01aab148; name: FUN_01aab148
 */


void FUN_01aab148(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 local_68;
  
  *param_1 = &PTR_FUN_0423a708;
  param_1[9] = &PTR_LAB_0423a858;
  param_1[10] = &PTR_LAB_0423a938;
  if (*(char *)(param_1 + 0x61) == '\0') {
    plVar6 = (long *)param_1[0x60];
    if (plVar6 == (long *)0x0) goto LAB_01aab1b0;
LAB_01aab194:
    lVar8 = plVar6[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 != 0) goto LAB_01aab1b0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x59];
  }
  else {
    *(undefined1 *)(param_1 + 0x61) = 0;
    plVar6 = (long *)param_1[0x60];
    if (plVar6 != (long *)0x0) goto LAB_01aab194;
LAB_01aab1b0:
    plVar6 = (long *)param_1[0x59];
  }
  if (plVar6 != (long *)0x0) {
    lVar8 = tpidr_el0;
    do {
      while( true ) {
        plVar12 = (long *)*plVar6;
        FUN_00984b00(plVar6 + 3);
        plVar11 = (long *)param_1[0x5a];
        uVar7 = (**(code **)(*plVar11 + 0xc0))(plVar11);
        if ((uVar7 & 1) != 0) break;
LAB_01aab23c:
        (**(code **)(*plVar11 + 0x18))(plVar11,plVar6,0x48,8);
        plVar6 = plVar12;
        if (plVar12 == (long *)0x0) goto LAB_01aab2f0;
      }
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_01aab23c;
      FUN_02bcc824(plVar11,plVar6,0x48,8);
      plVar6 = plVar12;
    } while (plVar12 != (long *)0x0);
  }
LAB_01aab2f0:
  lVar8 = param_1[0x53];
  param_1[0x53] = 0;
  if (lVar8 == 0) {
    plVar6 = (long *)param_1[0x52];
  }
  else {
    lVar9 = param_1[0x54];
    plVar6 = (long *)param_1[0x55];
    uVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar7 & 1) != 0) {
      lVar4 = tpidr_el0;
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar4 + 0x38d480)) {
        FUN_02bcc824(plVar6,lVar8,lVar9 << 3,8);
        plVar6 = (long *)param_1[0x52];
        goto joined_r0x01aab658;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar8,lVar9 << 3,8);
    plVar6 = (long *)param_1[0x52];
  }
joined_r0x01aab658:
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  puVar10 = (undefined8 *)param_1[0x4c];
  if (puVar10 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar10 + 1);
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
      puVar10[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_68 = *puVar10;
      FUN_02a44274(lVar8 + 0xd8,&local_68);
    }
  }
  puVar10 = (undefined8 *)param_1[0x4a];
  if (puVar10 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar10 + 1);
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
      puVar10[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_68 = *puVar10;
      FUN_02a44274(lVar8 + 0xd8,&local_68);
    }
  }
  puVar10 = (undefined8 *)param_1[0x48];
  if (puVar10 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar10 + 1);
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
      puVar10[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_68 = *puVar10;
      FUN_02a44274(lVar8 + 0xd8,&local_68);
    }
  }
  puVar10 = (undefined8 *)param_1[0x44];
  if (puVar10 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar10 + 1);
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
      puVar10[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_68 = *puVar10;
      FUN_02a44274(lVar8 + 0xd8,&local_68);
    }
  }
  puVar10 = (undefined8 *)param_1[0x42];
  if (puVar10 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar10 + 1);
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
      puVar10[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_68 = *puVar10;
      FUN_02a44274(lVar8 + 0xd8,&local_68);
    }
  }
  puVar10 = (undefined8 *)param_1[0x40];
  if (puVar10 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar10 + 1);
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
      puVar10[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_68 = *puVar10;
      FUN_02a44274(lVar8 + 0xd8,&local_68);
    }
  }
  puVar10 = (undefined8 *)param_1[0x3e];
  if (puVar10 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar10 + 1);
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
      puVar10[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_68 = *puVar10;
      FUN_02a44274(lVar8 + 0xd8,&local_68);
    }
  }
  FUN_02a4c4ec(param_1);
  return;
}


