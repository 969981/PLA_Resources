/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cc68e4; name: FUN_02cc68e4
 */


void FUN_02cc68e4(undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined1 auStack_58 [24];
  
  *param_1 = &PTR_FUN_04296cc0;
  param_1[9] = &PTR_LAB_04296cf0;
  FUN_02cc70e0();
  lVar10 = param_1[0xf];
  param_1[0xf] = 0;
  lVar8 = tpidr_el0;
  if (lVar10 != 0) {
    FUN_02bcbe58(auStack_58,0);
    plVar11 = (long *)param_1[0x10];
    uVar2 = param_1[0x11];
    uVar13 = param_1[0x12];
    uVar6 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar6 & 1) == 0) {
LAB_02cc6990:
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar10,uVar2,uVar13);
    }
    else {
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_02cc6990;
      FUN_02bcc824(plVar11,lVar10,uVar2,uVar13);
    }
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar5 = *(int *)(lVar8 + 0x38d480) + -1;
    *(int *)(lVar8 + 0x38d480) = iVar5;
    if (iVar5 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar8 + 0x38d484) = 0;
    }
  }
  if (param_1[10] != 0) {
    if (param_1[0xe] == 0) {
      param_1[10] = 0;
    }
    else {
      *(undefined1 *)(param_1[0xe] + 0x19) = 1;
      param_1[0xe] = 0;
      lVar10 = DAT_04408ba0;
      (**(code **)**(undefined8 **)(DAT_04408ba0 + 8))();
      *(undefined8 *)(lVar10 + 8) = 0;
      plVar11 = *(long **)(lVar10 + 0x10);
      uVar2 = *(undefined8 *)(lVar10 + 0x18);
      uVar13 = *(undefined8 *)(lVar10 + 0x20);
      uVar6 = (**(code **)(*plVar11 + 0xc0))(plVar11);
      if ((uVar6 & 1) == 0) {
LAB_02cc6ac0:
        (**(code **)(*plVar11 + 0x18))(plVar11,uVar2,uVar13,8);
      }
      else {
        if (*(char *)(lVar8 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar8 + 0x38d488) = 1;
          *(undefined8 *)(lVar8 + 0x38d478) = 0;
          *(undefined8 *)(lVar8 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_02cc6ac0;
        FUN_02bcc824(plVar11,uVar2,uVar13,8);
      }
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(undefined8 *)(lVar10 + 0x20) = 0;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      lVar10 = param_1[10];
      param_1[10] = 0;
      if (lVar10 == 0) goto LAB_02cc6b00;
    }
    FUN_02cc8b20(param_1 + 0xb);
  }
LAB_02cc6b00:
  plVar11 = (long *)param_1[0x41];
  if (plVar11 != (long *)0x0) {
    plVar12 = plVar11 + 1;
    do {
      lVar10 = *plVar12;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(char *)(param_1 + 0x3c) != '\0') {
    *(undefined1 *)(param_1 + 0x3c) = 0;
  }
  pcVar9 = (code *)param_1[0x2d];
  if (pcVar9 != (code *)0x0) {
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    (*pcVar9)(param_1 + 0x30);
  }
  pcVar9 = (code *)param_1[0x1d];
  if (pcVar9 != (code *)0x0) {
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    (*pcVar9)(param_1 + 0x20);
  }
  plVar11 = (long *)param_1[0x15];
  if (plVar11 == (long *)0x0) {
LAB_02cc6c50:
    plVar11 = (long *)param_1[0x14];
  }
  else {
    plVar12 = (long *)param_1[0x16];
    if (plVar12 == plVar11) {
      plVar12 = plVar11;
    }
    else {
      do {
        plVar12 = plVar12 + -1;
        plVar7 = (long *)*plVar12;
        if (plVar7 != (long *)0x0) {
          lVar10 = plVar7[0xb];
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            iVar5 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar5 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 + -1 == 0) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*plVar7 + 0x20))();
          }
        }
      } while (plVar12 != plVar11);
      plVar12 = (long *)param_1[0x15];
    }
    lVar10 = param_1[0x17];
    plVar7 = (long *)param_1[0x18];
    param_1[0x16] = plVar11;
    uVar6 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar6 & 1) == 0) {
LAB_02cc6c34:
      (**(code **)(*plVar7 + 0x18))(plVar7,plVar12,lVar10 - (long)plVar12,8);
      goto LAB_02cc6c50;
    }
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_02cc6c34;
    FUN_02bcc824(plVar7,plVar12,lVar10 - (long)plVar12,8);
    plVar11 = (long *)param_1[0x14];
  }
  if (plVar11 != (long *)0x0) {
    plVar12 = plVar11 + 1;
    do {
      lVar10 = *plVar12;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar10 = param_1[0xf];
  param_1[0xf] = 0;
  if (lVar10 == 0) goto LAB_02cc6d98;
  FUN_02bcbe58(auStack_58,0);
  plVar11 = (long *)param_1[0x10];
  uVar2 = param_1[0x11];
  uVar13 = param_1[0x12];
  uVar6 = (**(code **)(*plVar11 + 0xc0))(plVar11);
  if ((uVar6 & 1) == 0) {
LAB_02cc6cfc:
    (**(code **)(*plVar11 + 0x18))(plVar11,lVar10,uVar2,uVar13);
  }
  else {
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_02cc6cfc;
    FUN_02bcc824(plVar11,lVar10,uVar2,uVar13);
  }
  if (*(char *)(lVar8 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar8 + 0x38d488) = 1;
    *(undefined8 *)(lVar8 + 0x38d478) = 0;
    *(undefined8 *)(lVar8 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar5 = *(int *)(lVar8 + 0x38d480) + -1;
  *(int *)(lVar8 + 0x38d480) = iVar5;
  if (iVar5 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar8 + 0x38d484) = 0;
  }
LAB_02cc6d98:
  lVar8 = param_1[10];
  param_1[10] = 0;
  if (lVar8 == 0) {
    return;
  }
  FUN_02cc8b20(param_1 + 0xb);
  return;
}


