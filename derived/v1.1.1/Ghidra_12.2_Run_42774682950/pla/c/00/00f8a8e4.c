/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f8a8e4; name: FUN_00f8a8e4
 */


void FUN_00f8a8e4(undefined8 *param_1)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  code *pcVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 local_38;
  
  *param_1 = &DAT_04272b08;
  param_1[9] = &PTR_LAB_04272c90;
  param_1[10] = &PTR_LAB_04272df0;
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x354));
  pcVar8 = (code *)param_1[0x5b];
  if (pcVar8 == (code *)0x0) {
    pcVar8 = (code *)param_1[0x4b];
    if (pcVar8 == (code *)0x0) goto LAB_00f8a92c;
LAB_00f8aecc:
    param_1[0x4d] = 0;
    param_1[0x4c] = 0;
    param_1[0x4b] = 0;
    param_1[0x4a] = 0;
    (*pcVar8)(param_1 + 0x4e);
    pcVar8 = (code *)param_1[0x3b];
    if (pcVar8 != (code *)0x0) goto LAB_00f8aeec;
LAB_00f8a934:
    pcVar8 = (code *)param_1[0x2b];
    if (pcVar8 == (code *)0x0) goto LAB_00f8a93c;
LAB_00f8af04:
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    (*pcVar8)(param_1 + 0x2e);
    lVar11 = param_1[0x23];
    if (lVar11 != 0) goto LAB_00f8a944;
LAB_00f8a9f8:
    lVar11 = param_1[0x1c];
    if (lVar11 == 0) goto LAB_00f8aac0;
LAB_00f8aa00:
    lVar9 = param_1[0x1d];
    if (lVar9 == lVar11) {
      lVar9 = lVar11;
    }
    else {
      do {
        plVar1 = (long *)(lVar9 + -0x10);
        lVar9 = lVar9 + -0x30;
        if ((long *)*plVar1 != (long *)0x0) {
          (**(code **)(*(long *)*plVar1 + 0x20))();
        }
      } while (lVar11 != lVar9);
      lVar9 = param_1[0x1c];
    }
    lVar3 = param_1[0x1e];
    plVar1 = (long *)param_1[0x1f];
    param_1[0x1d] = lVar11;
    uVar7 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar7 & 1) == 0) {
LAB_00f8aaa4:
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar9,lVar3 - lVar9,8);
      goto LAB_00f8aac0;
    }
    lVar11 = tpidr_el0;
    if (*(char *)(lVar11 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar11 + 0x38d488) = 1;
      *(undefined8 *)(lVar11 + 0x38d478) = 0;
      *(undefined8 *)(lVar11 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_00f8aaa4;
    FUN_02bcc824(plVar1,lVar9,lVar3 - lVar9,8);
    lVar11 = param_1[0x15];
    if (lVar11 != 0) goto LAB_00f8aac8;
LAB_00f8ab88:
    lVar11 = param_1[0xe];
  }
  else {
    param_1[0x5d] = 0;
    param_1[0x5c] = 0;
    param_1[0x5b] = 0;
    param_1[0x5a] = 0;
    (*pcVar8)(param_1 + 0x5e);
    pcVar8 = (code *)param_1[0x4b];
    if (pcVar8 != (code *)0x0) goto LAB_00f8aecc;
LAB_00f8a92c:
    pcVar8 = (code *)param_1[0x3b];
    if (pcVar8 == (code *)0x0) goto LAB_00f8a934;
LAB_00f8aeec:
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    (*pcVar8)(param_1 + 0x3e);
    pcVar8 = (code *)param_1[0x2b];
    if (pcVar8 != (code *)0x0) goto LAB_00f8af04;
LAB_00f8a93c:
    lVar11 = param_1[0x23];
    if (lVar11 == 0) goto LAB_00f8a9f8;
LAB_00f8a944:
    lVar9 = param_1[0x24];
    if (lVar9 == lVar11) {
      lVar9 = lVar11;
    }
    else {
      do {
        plVar1 = (long *)(lVar9 + -0x10);
        lVar9 = lVar9 + -0x30;
        if ((long *)*plVar1 != (long *)0x0) {
          (**(code **)(*(long *)*plVar1 + 0x20))();
        }
      } while (lVar11 != lVar9);
      lVar9 = param_1[0x23];
    }
    lVar3 = param_1[0x25];
    plVar1 = (long *)param_1[0x26];
    param_1[0x24] = lVar11;
    uVar7 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar7 & 1) == 0) {
LAB_00f8a9dc:
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar9,lVar3 - lVar9,8);
      goto LAB_00f8a9f8;
    }
    lVar11 = tpidr_el0;
    if (*(char *)(lVar11 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar11 + 0x38d488) = 1;
      *(undefined8 *)(lVar11 + 0x38d478) = 0;
      *(undefined8 *)(lVar11 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_00f8a9dc;
    FUN_02bcc824(plVar1,lVar9,lVar3 - lVar9,8);
    lVar11 = param_1[0x1c];
    if (lVar11 != 0) goto LAB_00f8aa00;
LAB_00f8aac0:
    lVar11 = param_1[0x15];
    if (lVar11 == 0) goto LAB_00f8ab88;
LAB_00f8aac8:
    lVar9 = param_1[0x16];
    if (lVar9 == lVar11) {
      lVar9 = lVar11;
    }
    else {
      do {
        plVar1 = (long *)(lVar9 + -0x10);
        lVar9 = lVar9 + -0x30;
        if ((long *)*plVar1 != (long *)0x0) {
          (**(code **)(*(long *)*plVar1 + 0x20))();
        }
      } while (lVar11 != lVar9);
      lVar9 = param_1[0x15];
    }
    lVar3 = param_1[0x17];
    plVar1 = (long *)param_1[0x18];
    param_1[0x16] = lVar11;
    uVar7 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar7 & 1) == 0) {
LAB_00f8ab6c:
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar9,lVar3 - lVar9,8);
      goto LAB_00f8ab88;
    }
    lVar11 = tpidr_el0;
    if (*(char *)(lVar11 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar11 + 0x38d488) = 1;
      *(undefined8 *)(lVar11 + 0x38d478) = 0;
      *(undefined8 *)(lVar11 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_00f8ab6c;
    FUN_02bcc824(plVar1,lVar9,lVar3 - lVar9,8);
    lVar11 = param_1[0xe];
  }
  if (lVar11 != 0) {
    lVar9 = param_1[0xf];
    if (lVar9 == lVar11) {
      lVar9 = lVar11;
    }
    else {
      do {
        plVar1 = (long *)(lVar9 + -0x10);
        lVar9 = lVar9 + -0x30;
        if ((long *)*plVar1 != (long *)0x0) {
          (**(code **)(*(long *)*plVar1 + 0x20))();
        }
      } while (lVar11 != lVar9);
      lVar9 = param_1[0xe];
    }
    lVar3 = param_1[0x10];
    plVar1 = (long *)param_1[0x11];
    param_1[0xf] = lVar11;
    uVar7 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar7 & 1) != 0) {
      lVar11 = tpidr_el0;
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar11 + 0x38d480)) {
        FUN_02bcc824(plVar1,lVar9,lVar3 - lVar9,8);
        goto LAB_00f8ac50;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar9,lVar3 - lVar9,8);
  }
LAB_00f8ac50:
  *param_1 = &PTR_LAB_041eed40;
  param_1[9] = &PTR_LAB_041eed88;
  param_1[10] = &PTR_LAB_041eeee8;
  puVar10 = (undefined8 *)param_1[0xb];
  if (puVar10 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar10 + 1);
    do {
      iVar6 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar6 + -1;
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
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_38 = *puVar10;
      FUN_02a44274(lVar11 + 0xd8,&local_38);
    }
  }
  return;
}


