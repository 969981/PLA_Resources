/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0181e6d4; name: FUN_0181e6d4
 */


void FUN_0181e6d4(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long lVar8;
  undefined8 local_18;
  
  *param_1 = &PTR_FUN_04227458;
  param_1[9] = &PTR_LAB_04227558;
  param_1[10] = &PTR_LAB_04227638;
  puVar6 = (undefined8 *)param_1[0x86];
  if (puVar6 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar6 + 1);
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
      puVar6[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_18 = *puVar6;
      FUN_02a44274(lVar8 + 0xd8,&local_18);
    }
  }
  plVar5 = (long *)param_1[0x81];
  if (plVar5 == (long *)0x0) {
LAB_0181e784:
    plVar5 = (long *)param_1[0x80];
    if (plVar5 == (long *)0x0) goto LAB_0181e7a8;
LAB_0181e78c:
    lVar8 = plVar5[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 != 0) goto LAB_0181e7a8;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (**(code **)(*plVar5 + 0x20))();
    plVar5 = (long *)param_1[0x7f];
    if (plVar5 != (long *)0x0) goto LAB_0181e7b0;
LAB_0181e7cc:
    plVar5 = (long *)param_1[0x7e];
  }
  else {
    lVar8 = plVar5[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 != 0) goto LAB_0181e784;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (**(code **)(*plVar5 + 0x20))();
    plVar5 = (long *)param_1[0x80];
    if (plVar5 != (long *)0x0) goto LAB_0181e78c;
LAB_0181e7a8:
    plVar5 = (long *)param_1[0x7f];
    if (plVar5 == (long *)0x0) goto LAB_0181e7cc;
LAB_0181e7b0:
    lVar8 = plVar5[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 != 0) goto LAB_0181e7cc;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (**(code **)(*plVar5 + 0x20))();
    plVar5 = (long *)param_1[0x7e];
  }
  if (plVar5 != (long *)0x0) {
    lVar8 = plVar5[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
      pcVar7 = (code *)param_1[0x57];
      goto joined_r0x0181e9d8;
    }
  }
  pcVar7 = (code *)param_1[0x57];
joined_r0x0181e9d8:
  if (pcVar7 != (code *)0x0) {
    param_1[0x59] = 0;
    param_1[0x58] = 0;
    param_1[0x57] = 0;
    param_1[0x56] = 0;
    (*pcVar7)(param_1 + 0x5a);
  }
  if (*(char *)(param_1 + 0x4c) == '\0') {
    cVar2 = *(char *)(param_1 + 0x48);
  }
  else {
    *(undefined1 *)(param_1 + 0x4c) = 0;
    cVar2 = *(char *)(param_1 + 0x48);
  }
  if (cVar2 == '\0') {
    puVar6 = (undefined8 *)param_1[0x42];
  }
  else {
    *(undefined1 *)(param_1 + 0x48) = 0;
    puVar6 = (undefined8 *)param_1[0x42];
  }
  if (puVar6 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar6 + 1);
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
      puVar6[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_18 = *puVar6;
      FUN_02a44274(lVar8 + 0xd8,&local_18);
    }
  }
  puVar6 = (undefined8 *)param_1[0x40];
  if (puVar6 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar6 + 1);
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
      puVar6[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_18 = *puVar6;
      FUN_02a44274(lVar8 + 0xd8,&local_18);
    }
  }
  puVar6 = (undefined8 *)param_1[0x3e];
  if (puVar6 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar6 + 1);
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
      puVar6[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_18 = *puVar6;
      FUN_02a44274(lVar8 + 0xd8,&local_18);
    }
  }
  FUN_02a4c4ec(param_1);
  return;
}


