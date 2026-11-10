/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015103c0; name: FUN_015103c0
 */


void FUN_015103c0(long *param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  code *pcVar9;
  undefined8 *puVar10;
  undefined8 local_18;
  
  *param_1 = (long)&PTR_FUN_042186d8;
  param_1[9] = (long)&PTR_LAB_04218738;
  param_1[10] = (long)&PTR_LAB_04218780;
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x45c));
  plVar7 = (long *)param_1[0x8a];
  if (plVar7 == (long *)0x0) {
LAB_01510418:
    pcVar9 = (code *)param_1[0x7b];
  }
  else {
    lVar8 = plVar7[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 != 0) goto LAB_01510418;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (**(code **)(*plVar7 + 0x20))();
    pcVar9 = (code *)param_1[0x7b];
  }
  if (pcVar9 != (code *)0x0) {
    param_1[0x7d] = 0;
    param_1[0x7c] = 0;
    param_1[0x7b] = 0;
    param_1[0x7a] = 0;
    (*pcVar9)(param_1 + 0x7e);
  }
  pcVar9 = (code *)param_1[0x6b];
  if (pcVar9 != (code *)0x0) {
    param_1[0x6d] = 0;
    param_1[0x6c] = 0;
    param_1[0x6b] = 0;
    param_1[0x6a] = 0;
    (*pcVar9)(param_1 + 0x6e);
  }
  pcVar9 = (code *)param_1[0x5b];
  if (pcVar9 != (code *)0x0) {
    param_1[0x5d] = 0;
    param_1[0x5c] = 0;
    param_1[0x5b] = 0;
    param_1[0x5a] = 0;
    (*pcVar9)(param_1 + 0x5e);
  }
  pcVar9 = (code *)param_1[0x4b];
  if (pcVar9 == (code *)0x0) {
    pcVar9 = (code *)param_1[0x3b];
  }
  else {
    param_1[0x4d] = 0;
    param_1[0x4c] = 0;
    param_1[0x4b] = 0;
    param_1[0x4a] = 0;
    (*pcVar9)(param_1 + 0x4e);
    pcVar9 = (code *)param_1[0x3b];
  }
  if (pcVar9 != (code *)0x0) {
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    (*pcVar9)(param_1 + 0x3e);
  }
  pcVar9 = (code *)param_1[0x2b];
  if (pcVar9 != (code *)0x0) {
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    (*pcVar9)(param_1 + 0x2e);
  }
  pcVar9 = (code *)param_1[0x1b];
  if (pcVar9 != (code *)0x0) {
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    (*pcVar9)(param_1 + 0x1e);
  }
  puVar10 = (undefined8 *)param_1[0x13];
  if (puVar10 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar10 + 1);
    do {
      iVar6 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      puVar10[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_18 = *puVar10;
      FUN_02a44274(lVar8 + 0xd8,&local_18);
    }
  }
  plVar7 = (long *)param_1[0x12];
  if (plVar7 != (long *)0x0) {
    lVar8 = plVar7[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))();
      plVar7 = (long *)param_1[0x11];
      goto joined_r0x01510550;
    }
  }
  plVar7 = (long *)param_1[0x11];
joined_r0x01510550:
  if (plVar7 != (long *)0x0) {
    lVar8 = plVar7[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))();
    }
  }
  puVar2 = PTR_DAT_04379610 + 0x58;
  puVar3 = PTR_DAT_04379610 + 0xa0;
  *param_1 = (long)(PTR_DAT_04379610 + 0x10);
  param_1[9] = (long)puVar2;
  param_1[10] = (long)puVar3;
  puVar10 = (undefined8 *)param_1[0xb];
  if (puVar10 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar10 + 1);
    do {
      iVar6 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      puVar10[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_18 = *puVar10;
      FUN_02a44274(lVar8 + 0xd8,&local_18);
    }
  }
  return;
}


