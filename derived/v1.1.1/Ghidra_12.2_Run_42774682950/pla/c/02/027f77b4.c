/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027f77b4; name: FUN_027f77b4
 */


void FUN_027f77b4(undefined8 *param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  code *pcVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 local_38;
  
  *param_1 = &PTR_FUN_0426cdc0;
  param_1[9] = &PTR_LAB_0426ce90;
  param_1[10] = &DAT_0426ced8;
  plVar7 = (long *)param_1[0x32];
  param_1[0x32] = 0;
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))();
    }
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x8e));
  pcVar10 = (code *)param_1[0x7f];
  if (pcVar10 != (code *)0x0) {
    param_1[0x81] = 0;
    param_1[0x80] = 0;
    param_1[0x7f] = 0;
    param_1[0x7e] = 0;
    (*pcVar10)(param_1 + 0x82);
  }
  pcVar10 = (code *)param_1[0x6f];
  if (pcVar10 != (code *)0x0) {
    param_1[0x71] = 0;
    param_1[0x70] = 0;
    param_1[0x6f] = 0;
    param_1[0x6e] = 0;
    (*pcVar10)(param_1 + 0x72);
  }
  if ((long *)param_1[0x6a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x6a] + 0x20))();
  }
  if ((long *)param_1[0x66] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x66] + 0x20))();
  }
  pcVar10 = (code *)param_1[0x51];
  if (pcVar10 != (code *)0x0) {
    param_1[0x53] = 0;
    param_1[0x52] = 0;
    param_1[0x51] = 0;
    param_1[0x50] = 0;
    (*pcVar10)(param_1 + 0x54);
  }
  pcVar10 = (code *)param_1[0x41];
  if (pcVar10 != (code *)0x0) {
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    (*pcVar10)(param_1 + 0x44);
  }
  plVar7 = (long *)param_1[0x3b];
  if (plVar7 == (long *)0x0) {
LAB_027f78d8:
    puVar11 = (undefined8 *)param_1[0x39];
  }
  else {
    plVar2 = plVar7 + 10;
    do {
      iVar6 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 != 0) goto LAB_027f78d8;
    (**(code **)(*plVar7 + 0x10))();
    puVar11 = (undefined8 *)param_1[0x39];
  }
  if (puVar11 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar11 + 1);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      puVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_38 = *puVar11;
      FUN_02a44274(lVar9 + 0xd8,&local_38);
    }
  }
  puVar11 = (undefined8 *)param_1[0x37];
  if (puVar11 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar11 + 1);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      puVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_38 = *puVar11;
      FUN_02a44274(lVar9 + 0xd8,&local_38);
    }
  }
  puVar11 = (undefined8 *)param_1[0x35];
  if (puVar11 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar11 + 1);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      puVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_38 = *puVar11;
      FUN_02a44274(lVar9 + 0xd8,&local_38);
    }
  }
  plVar7 = (long *)param_1[0x32];
  if (plVar7 == (long *)0x0) {
LAB_027f7a1c:
    plVar7 = (long *)param_1[0x2d];
    if (plVar7 == (long *)0x0) goto LAB_027f7a40;
LAB_027f7a24:
    lVar9 = plVar7[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 != 0) goto LAB_027f7a40;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*plVar7 + 0x20))();
    plVar7 = (long *)param_1[0x29];
    if (plVar7 != (long *)0x0) goto LAB_027f7a48;
LAB_027f7a64:
    plVar7 = (long *)param_1[0x28];
    if (plVar7 == (long *)0x0) goto LAB_027f7a88;
LAB_027f7a6c:
    lVar9 = plVar7[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 != 0) goto LAB_027f7a88;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*plVar7 + 0x20))();
    plVar7 = (long *)param_1[0x27];
    if (plVar7 != (long *)0x0) goto LAB_027f7a90;
LAB_027f7aac:
    lVar9 = param_1[0x25];
    if (lVar9 == 0) goto LAB_027f7b30;
LAB_027f7ab4:
    plVar7 = (long *)param_1[0x1f];
    uVar12 = param_1[0x23];
    uVar8 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar8 & 1) == 0) {
LAB_027f7b14:
      (**(code **)(*plVar7 + 0x18))(plVar7,uVar12,lVar9,1);
      goto LAB_027f7b30;
    }
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_027f7b14;
    FUN_02bcc824(plVar7,uVar12,lVar9,1);
    plVar7 = (long *)param_1[0x1a];
  }
  else {
    lVar9 = plVar7[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 != 0) goto LAB_027f7a1c;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*plVar7 + 0x20))();
    plVar7 = (long *)param_1[0x2d];
    if (plVar7 != (long *)0x0) goto LAB_027f7a24;
LAB_027f7a40:
    plVar7 = (long *)param_1[0x29];
    if (plVar7 == (long *)0x0) goto LAB_027f7a64;
LAB_027f7a48:
    lVar9 = plVar7[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 != 0) goto LAB_027f7a64;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*plVar7 + 0x20))();
    plVar7 = (long *)param_1[0x28];
    if (plVar7 != (long *)0x0) goto LAB_027f7a6c;
LAB_027f7a88:
    plVar7 = (long *)param_1[0x27];
    if (plVar7 == (long *)0x0) goto LAB_027f7aac;
LAB_027f7a90:
    lVar9 = plVar7[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 != 0) goto LAB_027f7aac;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*plVar7 + 0x20))();
    lVar9 = param_1[0x25];
    if (lVar9 != 0) goto LAB_027f7ab4;
LAB_027f7b30:
    plVar7 = (long *)param_1[0x1a];
  }
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))();
      plVar7 = (long *)param_1[0x19];
      goto joined_r0x027f7b58;
    }
  }
  plVar7 = (long *)param_1[0x19];
joined_r0x027f7b58:
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))();
    }
  }
  FUN_00d910b8(param_1);
  return;
}


