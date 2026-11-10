/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01abd680; name: FUN_01abd680
 */


void FUN_01abd680(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  code *pcVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 local_28;
  
  *param_1 = &PTR_FUN_0423bdd0;
  param_1[9] = &PTR_LAB_0423bed8;
  param_1[10] = &PTR_LAB_0423bfb8;
  param_1[0x3e] = &PTR_LAB_0423bfe0;
  if (param_1[0x75] == 0) {
    uVar6 = param_1[0x74];
  }
  else {
    FUN_032d647c();
    uVar6 = param_1[0x74];
  }
  if ((uVar6 & 1) != 0) {
    lVar9 = tpidr_el0;
    lVar10 = *(long *)(lVar9 + 0x38d490);
    if (lVar10 == 0) {
      lVar10 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar10;
    }
    plVar5 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
    *(undefined8 *)(uVar6 - 0x11) = 0;
    (**(code **)(*plVar5 + 0x18))
              (plVar5,(undefined8 *)(uVar6 - 0x11),(long)*(int *)(uVar6 - 9) + 0x10);
  }
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x37c));
  pcVar7 = (code *)param_1[0x5f];
  if (pcVar7 != (code *)0x0) {
    param_1[0x61] = 0;
    param_1[0x60] = 0;
    param_1[0x5f] = 0;
    param_1[0x5e] = 0;
    (*pcVar7)(param_1 + 0x62);
  }
  puVar8 = (undefined8 *)param_1[0x4f];
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
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_28 = *puVar8;
      FUN_02a44274(lVar9 + 0xd8,&local_28);
    }
  }
  puVar8 = (undefined8 *)param_1[0x4d];
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
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_28 = *puVar8;
      FUN_02a44274(lVar9 + 0xd8,&local_28);
    }
  }
  puVar8 = (undefined8 *)param_1[0x4b];
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
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_28 = *puVar8;
      FUN_02a44274(lVar9 + 0xd8,&local_28);
    }
  }
  puVar8 = (undefined8 *)param_1[0x49];
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
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_28 = *puVar8;
      FUN_02a44274(lVar9 + 0xd8,&local_28);
    }
  }
  puVar8 = (undefined8 *)param_1[0x47];
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
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_28 = *puVar8;
      FUN_02a44274(lVar9 + 0xd8,&local_28);
    }
  }
  puVar8 = (undefined8 *)param_1[0x45];
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
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_28 = *puVar8;
      FUN_02a44274(lVar9 + 0xd8,&local_28);
    }
  }
  puVar8 = (undefined8 *)param_1[0x43];
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
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_28 = *puVar8;
      FUN_02a44274(lVar9 + 0xd8,&local_28);
    }
  }
  puVar8 = (undefined8 *)param_1[0x41];
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
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_28 = *puVar8;
      FUN_02a44274(lVar9 + 0xd8,&local_28);
    }
  }
  param_1[0x3e] = &PTR_FUN_04255188;
  puVar8 = (undefined8 *)param_1[0x3f];
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
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_28 = *puVar8;
      FUN_02a44274(lVar9 + 0xd8,&local_28);
    }
  }
  FUN_02a4c4ec(param_1);
  return;
}


