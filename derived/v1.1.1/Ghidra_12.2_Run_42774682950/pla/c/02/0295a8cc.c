/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0295a8cc; name: FUN_0295a8cc
 */


void FUN_0295a8cc(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  int *piVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  void *__s;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined2 *puVar13;
  undefined4 *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined8 uVar24;
  byte *pbVar25;
  undefined8 local_88 [3];
  void *local_70;
  undefined1 auStack_68 [8];
  
  plVar19 = param_1 + 1;
  *param_1 = &PTR_FUN_04276bc0;
  memset(plVar19,0,0x228);
  plVar20 = (long *)*param_2;
  __s = (void *)(**(code **)(*plVar20 + 0x10))(plVar20,0x1e8,8);
  pbVar25 = PTR_DAT_04379520;
  if (__s == (void *)0x0) {
    uVar21 = 0;
    uVar17 = 0;
    plVar20 = (long *)0x0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_0295e18c;
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar20;
    uVar21 = 0x1e8;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    memset(__s,0,0x1e8);
    FUN_02941260(__s);
    uVar17 = 8;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  lVar23 = param_1[5];
  param_1[5] = __s;
  lVar8 = tpidr_el0;
  if (lVar23 != 0) {
    FUN_02bcbe58(local_88,0);
    plVar11 = (long *)param_1[6];
    uVar3 = param_1[7];
    uVar24 = param_1[8];
    uVar9 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar9 & 1) == 0) {
LAB_0295aa30:
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar23,uVar3,uVar24);
    }
    else {
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_0295aa30;
      FUN_02bcc824(plVar11,lVar23,uVar3,uVar24);
    }
    pbVar25 = PTR_DAT_04379520;
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar7 = *(int *)(lVar8 + 0x38d480) + -1;
    *(int *)(lVar8 + 0x38d480) = iVar7;
    if (iVar7 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar8 + 0x38d484) = 0;
    }
    __s = (void *)param_1[5];
  }
  param_1[6] = plVar20;
  param_1[7] = uVar21;
  param_1[8] = uVar17;
  plVar20 = (long *)*param_2;
  puVar10 = (undefined8 *)(**(code **)(*plVar20 + 0x10))(plVar20,0x300,8);
  if (puVar10 == (undefined8 *)0x0) {
    plVar20 = (long *)0x0;
    uVar21 = 0;
    uVar17 = 0;
  }
  else {
    if (((*pbVar25 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar23 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar23 + 0x80)) goto LAB_0295e18c;
    *(long **)(lVar23 + *(ulong *)(lVar23 + 0x80) * 8) = plVar20;
    *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + 1;
    local_88[0] = *param_2;
    uVar17 = param_2[1];
    puVar10[6] = 0;
    *puVar10 = uVar17;
    puVar10[1] = 0;
    *(undefined1 *)(puVar10 + 7) = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    *(undefined1 *)(puVar10 + 0xe) = 0;
    puVar10[4] = 0;
    puVar10[5] = 0;
    *(undefined1 *)(puVar10 + 0x15) = 0;
    *(undefined1 *)(puVar10 + 0x1c) = 0;
    *(undefined1 *)(puVar10 + 0x23) = 0;
    puVar10[8] = 0;
    puVar10[9] = 0;
    puVar10[10] = 0;
    puVar10[0xb] = 0;
    puVar10[0xc] = 0;
    puVar10[0xd] = 0;
    puVar10[0xf] = 0;
    puVar10[0x10] = 0;
    puVar10[0x11] = 0;
    puVar10[0x12] = 0;
    puVar10[0x13] = 0;
    puVar10[0x14] = 0;
    puVar10[0x1a] = 0;
    puVar10[0x1b] = 0;
    puVar10[0x18] = 0;
    puVar10[0x19] = 0;
    puVar10[0x16] = 0;
    puVar10[0x17] = 0;
    puVar10[0x1d] = 0;
    puVar10[0x1e] = 0;
    puVar10[0x1f] = 0;
    puVar10[0x20] = 0;
    puVar10[0x21] = 0;
    puVar10[0x22] = 0;
    local_70 = __s;
    memset(puVar10 + 0x24,0,0x1e0);
    lVar18 = 0;
    do {
      plVar11 = (long *)puVar10[lVar18 + 0x24];
      puVar10[lVar18 + 0x24] = 0;
      if (plVar11 != (long *)0x0) {
        plVar1 = plVar11 + 10;
        do {
          iVar7 = (int)*plVar1 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar11 + 0x10))();
        }
      }
      lVar12 = FUN_0294d91c(auStack_68,local_88[0],local_88,&local_70);
      if (lVar12 != 0) {
        piVar2 = (int *)(lVar12 + 0x50);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = *piVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar11 = (long *)puVar10[lVar18 + 0x42];
      lVar15 = lVar18 + 0x42;
      puVar10[lVar18 + 0x42] = 0;
      if (plVar11 != (long *)0x0) {
        plVar1 = plVar11 + 10;
        do {
          iVar7 = (int)*plVar1 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar11 + 0x10))();
        }
      }
      lVar18 = lVar18 + 1;
      puVar10[lVar15] = lVar12;
    } while (lVar18 != 0x1e);
    uVar17 = 8;
    uVar21 = 0x300;
    *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + -1;
  }
  lVar23 = *plVar19;
  *plVar19 = (long)puVar10;
  if (lVar23 != 0) {
    FUN_02bcbe58(local_88,0);
    FUN_0294ca04(lVar23);
    plVar19 = (long *)param_1[2];
    uVar3 = param_1[3];
    uVar24 = param_1[4];
    uVar9 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar9 & 1) == 0) {
LAB_0295ad0c:
      (**(code **)(*plVar19 + 0x18))(plVar19,lVar23,uVar3,uVar24);
    }
    else {
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_0295ad0c;
      FUN_02bcc824(plVar19,lVar23,uVar3,uVar24);
    }
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar7 = *(int *)(lVar8 + 0x38d480) + -1;
    *(int *)(lVar8 + 0x38d480) = iVar7;
    if (iVar7 == 0) {
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
  param_1[2] = plVar20;
  param_1[3] = uVar21;
  param_1[4] = uVar17;
  plVar19 = (long *)*param_2;
  puVar10 = (undefined8 *)(**(code **)(*plVar19 + 0x10))(plVar19,0x4c8,8);
  if (puVar10 == (undefined8 *)0x0) {
    plVar19 = (long *)0x0;
    uVar21 = 0;
    uVar17 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar23 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar23 + 0x80)) goto LAB_0295e18c;
    *(long **)(lVar23 + *(ulong *)(lVar23 + 0x80) * 8) = plVar19;
    *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + 1;
    uVar17 = *param_2;
    *puVar10 = &PTR_FUN_04276be0;
    memset(puVar10 + 1,0,0x4c0);
    FUN_029608f8(puVar10,uVar17);
    uVar17 = 8;
    uVar21 = 0x4c8;
    *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + -1;
  }
  puVar22 = (undefined8 *)param_1[9];
  param_1[9] = puVar10;
  if (puVar22 != (undefined8 *)0x0) {
    FUN_02bcbe58(local_88,0);
    (**(code **)*puVar22)(puVar22);
    plVar20 = (long *)param_1[10];
    uVar3 = param_1[0xb];
    uVar24 = param_1[0xc];
    uVar9 = (**(code **)(*plVar20 + 0xc0))(plVar20);
    if ((uVar9 & 1) == 0) {
LAB_0295aef0:
      (**(code **)(*plVar20 + 0x18))(plVar20,puVar22,uVar3,uVar24);
    }
    else {
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_0295aef0;
      FUN_02bcc824(plVar20,puVar22,uVar3,uVar24);
    }
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar7 = *(int *)(lVar8 + 0x38d480) + -1;
    *(int *)(lVar8 + 0x38d480) = iVar7;
    if (iVar7 == 0) {
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
  param_1[10] = plVar19;
  param_1[0xb] = uVar21;
  param_1[0xc] = uVar17;
  plVar19 = (long *)*param_2;
  puVar10 = (undefined8 *)(**(code **)(*plVar19 + 0x10))(plVar19,0x3c8,8);
  if (puVar10 == (undefined8 *)0x0) {
    plVar19 = (long *)0x0;
    uVar21 = 0;
    uVar17 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar23 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar23 + 0x80)) goto LAB_0295e18c;
    *(long **)(lVar23 + *(ulong *)(lVar23 + 0x80) * 8) = plVar19;
    *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + 1;
    uVar17 = *param_2;
    *puVar10 = &PTR_FUN_04276c00;
    memset(puVar10 + 1,0,0x3c0);
    FUN_02961e1c(puVar10,uVar17);
    uVar17 = 8;
    uVar21 = 0x3c8;
    *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + -1;
  }
  puVar22 = (undefined8 *)param_1[0xd];
  param_1[0xd] = puVar10;
  if (puVar22 != (undefined8 *)0x0) {
    FUN_02bcbe58(local_88,0);
    (**(code **)*puVar22)(puVar22);
    plVar20 = (long *)param_1[0xe];
    uVar3 = param_1[0xf];
    uVar24 = param_1[0x10];
    uVar9 = (**(code **)(*plVar20 + 0xc0))(plVar20);
    if ((uVar9 & 1) == 0) {
LAB_0295b0d4:
      (**(code **)(*plVar20 + 0x18))(plVar20,puVar22,uVar3,uVar24);
    }
    else {
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_0295b0d4;
      FUN_02bcc824(plVar20,puVar22,uVar3,uVar24);
    }
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar7 = *(int *)(lVar8 + 0x38d480) + -1;
    *(int *)(lVar8 + 0x38d480) = iVar7;
    if (iVar7 == 0) {
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
  param_1[0xe] = plVar19;
  param_1[0xf] = uVar21;
  param_1[0x10] = uVar17;
  plVar19 = (long *)*param_2;
  puVar10 = (undefined8 *)(**(code **)(*plVar19 + 0x10))(plVar19,0x14d8,8);
  if (puVar10 == (undefined8 *)0x0) {
    plVar19 = (long *)0x0;
    uVar21 = 0;
    uVar17 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar23 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar23 + 0x80)) goto LAB_0295e18c;
    *(long **)(lVar23 + *(ulong *)(lVar23 + 0x80) * 8) = plVar19;
    *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + 1;
    uVar17 = *param_2;
    *puVar10 = &PTR_LAB_04276d68;
    memset(puVar10 + 1,0,0x14d0);
    FUN_029645bc(puVar10,uVar17);
    lVar18 = -0x14c0;
    puVar10[0x29a] = 0;
    puVar10[0x299] = 0;
    do {
      lVar12 = *(long *)((long)puVar10 + lVar18 + 0x14c8);
      lVar15 = *(long *)(lVar12 + 0x10);
      lVar16 = *(long *)(lVar12 + 0x18);
      if (lVar15 != 0) {
        *(long *)(lVar15 + 0x18) = lVar16;
      }
      if (lVar16 != 0) {
        *(long *)(lVar16 + 0x10) = lVar15;
      }
      *(undefined8 *)(lVar12 + 0x50) = 0;
      *(undefined8 *)(lVar12 + 0x58) = 0;
      *(undefined8 *)(lVar12 + 0x40) = 0;
      *(undefined8 *)(lVar12 + 0x48) = 0;
      *(undefined8 *)(lVar12 + 0x30) = 0;
      *(undefined8 *)(lVar12 + 0x38) = 0;
      *(undefined8 *)(lVar12 + 0x20) = 0;
      *(undefined8 *)(lVar12 + 0x28) = 0;
      *(long *)(lVar12 + 0x10) = 0;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      lVar15 = puVar10[0x29a];
      *(long *)(lVar12 + 0x18) = lVar15;
      if (lVar15 != 0) {
        *(long *)(lVar15 + 0x10) = lVar12;
      }
      lVar18 = lVar18 + 0x20;
      puVar10[0x29a] = lVar12;
    } while (lVar18 != 0);
    uVar17 = 8;
    uVar21 = 0x14d8;
    *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + -1;
  }
  puVar22 = (undefined8 *)param_1[0x11];
  param_1[0x11] = puVar10;
  if (puVar22 != (undefined8 *)0x0) {
    FUN_02bcbe58(local_88,0);
    (**(code **)*puVar22)(puVar22);
    plVar20 = (long *)param_1[0x12];
    uVar3 = param_1[0x13];
    uVar24 = param_1[0x14];
    uVar9 = (**(code **)(*plVar20 + 0xc0))(plVar20);
    if ((uVar9 & 1) == 0) {
LAB_0295b320:
      (**(code **)(*plVar20 + 0x18))(plVar20,puVar22,uVar3,uVar24);
    }
    else {
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_0295b320;
      FUN_02bcc824(plVar20,puVar22,uVar3,uVar24);
    }
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar7 = *(int *)(lVar8 + 0x38d480) + -1;
    *(int *)(lVar8 + 0x38d480) = iVar7;
    if (iVar7 == 0) {
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
  param_1[0x12] = plVar19;
  param_1[0x13] = uVar21;
  param_1[0x14] = uVar17;
  plVar19 = (long *)*param_2;
  puVar13 = (undefined2 *)(**(code **)(*plVar19 + 0x10))(plVar19,0x40,8);
  if (puVar13 == (undefined2 *)0x0) {
    plVar19 = (long *)0x0;
    uVar21 = 0;
    uVar17 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar23 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar23 + 0x80)) goto LAB_0295e18c;
    *(long **)(lVar23 + *(ulong *)(lVar23 + 0x80) * 8) = plVar19;
    *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + 1;
    *puVar13 = 0x500;
    *(undefined2 *)((long)puVar13 + 3) = 0x500;
    puVar13[3] = 0x500;
    *(undefined2 *)((long)puVar13 + 9) = 0x500;
    puVar13[6] = 0x500;
    *(undefined2 *)((long)puVar13 + 0xf) = 0x500;
    uVar17 = 8;
    uVar21 = 0x40;
    *(undefined1 *)(puVar13 + 0x1e) = 0;
    *(undefined1 *)(puVar13 + 1) = 0x1f;
    *(undefined1 *)(puVar13 + 4) = 0x1f;
    *(undefined1 *)((long)puVar13 + 0xb) = 0x1f;
    *(undefined1 *)(puVar13 + 7) = 0x1f;
    *(undefined1 *)((long)puVar13 + 0x11) = 0x1f;
    *(undefined2 **)(puVar13 + 0x18) = puVar13 + 9;
    *(undefined1 *)((long)puVar13 + 5) = 0x1f;
    *(undefined4 *)(puVar13 + 0x1c) = 0x1e;
    *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + -1;
  }
  lVar23 = param_1[0x15];
  param_1[0x15] = puVar13;
  if (lVar23 != 0) {
    FUN_02bcbe58(local_88,0);
    plVar20 = (long *)param_1[0x16];
    uVar3 = param_1[0x17];
    uVar24 = param_1[0x18];
    uVar9 = (**(code **)(*plVar20 + 0xc0))(plVar20);
    if ((uVar9 & 1) == 0) {
LAB_0295b50c:
      (**(code **)(*plVar20 + 0x18))(plVar20,lVar23,uVar3,uVar24);
    }
    else {
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_0295b50c;
      FUN_02bcc824(plVar20,lVar23,uVar3,uVar24);
    }
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar7 = *(int *)(lVar8 + 0x38d480) + -1;
    *(int *)(lVar8 + 0x38d480) = iVar7;
    if (iVar7 == 0) {
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
  param_1[0x16] = plVar19;
  param_1[0x17] = uVar21;
  param_1[0x18] = uVar17;
  plVar19 = (long *)*param_2;
  puVar10 = (undefined8 *)(**(code **)(*plVar19 + 0x10))(plVar19,0x14f,1);
  if (puVar10 == (undefined8 *)0x0) {
    plVar19 = (long *)0x0;
    uVar21 = 0;
    uVar17 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar23 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar23 + 0x80)) goto LAB_0295e18c;
    *(long **)(lVar23 + *(ulong *)(lVar23 + 0x80) * 8) = plVar19;
    *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + 1;
    *(undefined8 *)((long)puVar10 + 0x17) = 0;
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    *(undefined8 *)((long)puVar10 + 0x2f) = 0x1f1f1f1f1f1f1f1f;
    *(undefined8 *)((long)puVar10 + 0x1f) = 0x1f1f1f1f1f1f1f1f;
    uVar17 = 1;
    uVar21 = 0x14f;
    *(undefined8 *)((long)puVar10 + 0x27) = 0x1f1f1f1f1f1f1f1f;
    *(undefined8 *)((long)puVar10 + 0x35) = 0x1f1f1f1f1f1f1f1f;
    *(undefined8 *)((long)puVar10 + 0x3d) = 0;
    *(undefined8 *)((long)puVar10 + 0x45) = 0;
    *(undefined8 *)((long)puVar10 + 0x4d) = 0;
    *(undefined8 *)((long)puVar10 + 0x54) = 0;
    *(undefined8 *)((long)puVar10 + 0x5c) = 0x1f1f1f1f1f1f1f1f;
    *(undefined8 *)((long)puVar10 + 100) = 0x1f1f1f1f1f1f1f1f;
    *(undefined8 *)((long)puVar10 + 0x6c) = 0x1f1f1f1f1f1f1f1f;
    *(undefined8 *)((long)puVar10 + 0x72) = 0x1f1f1f1f1f1f1f1f;
    *(undefined8 *)((long)puVar10 + 0x91) = 0;
    *(undefined8 *)((long)puVar10 + 0x8a) = 0;
    *(undefined8 *)((long)puVar10 + 0x82) = 0;
    *(undefined8 *)((long)puVar10 + 0x7a) = 0;
    *(undefined8 *)((long)puVar10 + 0xaf) = 0x1f1f1f1f1f1f1f1f;
    *(undefined8 *)((long)puVar10 + 0xa9) = 0x1f1f1f1f1f1f1f1f;
    *(undefined8 *)((long)puVar10 + 0xa1) = 0x1f1f1f1f1f1f1f1f;
    *(undefined8 *)((long)puVar10 + 0x99) = 0x1f1f1f1f1f1f1f1f;
    *(undefined8 *)((long)puVar10 + 0xb7) = 0;
    *(undefined8 *)((long)puVar10 + 0xbf) = 0;
    *(undefined8 *)((long)puVar10 + 199) = 0;
    *(undefined8 *)((long)puVar10 + 0xce) = 0;
    *(undefined8 *)((long)puVar10 + 0xd6) = 0x1f1f1f1f1f1f1f1f;
    *(undefined8 *)((long)puVar10 + 0xde) = 0x1f1f1f1f1f1f1f1f;
    *(undefined8 *)((long)puVar10 + 0xe6) = 0x1f1f1f1f1f1f1f1f;
    *(undefined8 *)((long)puVar10 + 0xec) = 0x1f1f1f1f1f1f1f1f;
    *(undefined8 *)((long)puVar10 + 0xf4) = 0;
    *(undefined8 *)((long)puVar10 + 0xfc) = 0;
    *(undefined8 *)((long)puVar10 + 0x124) = 0;
    *(undefined4 *)((long)puVar10 + 300) = 0;
    *(undefined8 *)((long)puVar10 + 0x104) = 0;
    *(undefined8 *)((long)puVar10 + 0x10c) = 0;
    *(undefined8 *)((long)puVar10 + 0x114) = 0;
    *(undefined8 *)((long)puVar10 + 0x11c) = 0;
    *(undefined8 *)((long)puVar10 + 0x146) = 0x1f1f1f1f1f1f1f1f;
    puVar10[0x26] = 0x1f1f1f1f1f1f1f1f;
    *(undefined1 *)((long)puVar10 + 0x14e) = 0;
    puVar10[0x27] = 0x1f1f1f1f1f1f1f1f;
    puVar10[0x28] = 0x1f1f1f1f1f1f1f1f;
    *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + -1;
  }
  lVar23 = param_1[0x19];
  param_1[0x19] = puVar10;
  if (lVar23 != 0) {
    FUN_02bcbe58(local_88,0);
    plVar20 = (long *)param_1[0x1a];
    uVar3 = param_1[0x1b];
    uVar24 = param_1[0x1c];
    uVar9 = (**(code **)(*plVar20 + 0xc0))(plVar20);
    if ((uVar9 & 1) == 0) {
LAB_0295b75c:
      (**(code **)(*plVar20 + 0x18))(plVar20,lVar23,uVar3,uVar24);
    }
    else {
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_0295b75c;
      FUN_02bcc824(plVar20,lVar23,uVar3,uVar24);
    }
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar7 = *(int *)(lVar8 + 0x38d480) + -1;
    *(int *)(lVar8 + 0x38d480) = iVar7;
    if (iVar7 == 0) {
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
  param_1[0x1a] = plVar19;
  param_1[0x1b] = uVar21;
  param_1[0x1c] = uVar17;
  plVar19 = (long *)*param_2;
  puVar14 = (undefined4 *)(**(code **)(*plVar19 + 0x10))(plVar19,0x12c4,4);
  if (puVar14 == (undefined4 *)0x0) {
    plVar19 = (long *)0x0;
    uVar21 = 0;
    uVar17 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar23 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar23 + 0x80)) goto LAB_0295e18c;
    *(long **)(lVar23 + *(ulong *)(lVar23 + 0x80) * 8) = plVar19;
    *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + 1;
    lVar18 = 4;
    *puVar14 = 0;
    do {
      puVar10 = (undefined8 *)((long)puVar14 + lVar18);
      lVar18 = lVar18 + 0x18;
      *puVar10 = 0;
      *(undefined2 *)(puVar10 + 1) = 0x1f;
      *(undefined8 *)((long)puVar10 + 0xc) = 0;
      *(undefined2 *)((long)puVar10 + 0x14) = 0x1f;
    } while (puVar10 + 3 != (undefined8 *)(puVar14 + 0x4b1));
    uVar17 = 4;
    uVar21 = 0x12c4;
    *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + -1;
  }
  lVar23 = param_1[0x1d];
  param_1[0x1d] = puVar14;
  if (lVar23 != 0) {
    FUN_02bcbe58(local_88,0);
    plVar20 = (long *)param_1[0x1e];
    uVar3 = param_1[0x1f];
    uVar24 = param_1[0x20];
    uVar9 = (**(code **)(*plVar20 + 0xc0))(plVar20);
    if ((uVar9 & 1) == 0) {
LAB_0295b934:
      (**(code **)(*plVar20 + 0x18))(plVar20,lVar23,uVar3,uVar24);
    }
    else {
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_0295b934;
      FUN_02bcc824(plVar20,lVar23,uVar3,uVar24);
    }
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar7 = *(int *)(lVar8 + 0x38d480) + -1;
    *(int *)(lVar8 + 0x38d480) = iVar7;
    if (iVar7 == 0) {
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
  param_1[0x1e] = plVar19;
  param_1[0x1f] = uVar21;
  param_1[0x20] = uVar17;
  plVar19 = (long *)*param_2;
  puVar10 = (undefined8 *)(**(code **)(*plVar19 + 0x10))(plVar19,0xc,2);
  if (puVar10 == (undefined8 *)0x0) {
    plVar19 = (long *)0x0;
    uVar21 = 0;
    uVar17 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar23 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar23 + 0x80)) goto LAB_0295e18c;
    *(long **)(lVar23 + *(ulong *)(lVar23 + 0x80) * 8) = plVar19;
    *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + 1;
    *(undefined4 *)(puVar10 + 1) = 0;
    *puVar10 = 0;
    uVar17 = 2;
    uVar21 = 0xc;
    *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + -1;
  }
  lVar23 = param_1[0x21];
  param_1[0x21] = puVar10;
  if (lVar23 != 0) {
    FUN_02bcbe58(local_88,0);
    plVar20 = (long *)param_1[0x22];
    uVar3 = param_1[0x23];
    uVar24 = param_1[0x24];
    uVar9 = (**(code **)(*plVar20 + 0xc0))(plVar20);
    if ((uVar9 & 1) == 0) {
LAB_0295badc:
      (**(code **)(*plVar20 + 0x18))(plVar20,lVar23,uVar3,uVar24);
    }
    else {
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_0295badc;
      FUN_02bcc824(plVar20,lVar23,uVar3,uVar24);
    }
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar7 = *(int *)(lVar8 + 0x38d480) + -1;
    *(int *)(lVar8 + 0x38d480) = iVar7;
    if (iVar7 == 0) {
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
  param_1[0x22] = plVar19;
  param_1[0x23] = uVar21;
  param_1[0x24] = uVar17;
  plVar19 = (long *)*param_2;
  puVar10 = (undefined8 *)(**(code **)(*plVar19 + 0x10))(plVar19,0xf8,8);
  if (puVar10 == (undefined8 *)0x0) {
    plVar19 = (long *)0x0;
    uVar21 = 0;
    uVar17 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar23 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar23 + 0x80)) goto LAB_0295e18c;
    *(long **)(lVar23 + *(ulong *)(lVar23 + 0x80) * 8) = plVar19;
    *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + 1;
    *puVar10 = &PTR_LAB_04276c38;
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[0x1e] = 0;
    puVar10[4] = 0;
    puVar10[5] = 0;
    uVar17 = 8;
    uVar21 = 0xf8;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[8] = 0;
    puVar10[9] = 0;
    puVar10[10] = 0;
    puVar10[0xb] = 0;
    puVar10[0xc] = 0;
    puVar10[0xd] = 0;
    puVar10[0xe] = 0;
    puVar10[0xf] = 0;
    puVar10[0x10] = 0;
    puVar10[0x11] = 0;
    puVar10[0x12] = 0;
    puVar10[0x13] = 0;
    puVar10[0x14] = 0;
    puVar10[0x15] = 0;
    puVar10[0x16] = 0;
    puVar10[0x17] = 0;
    puVar10[0x18] = 0;
    puVar10[0x19] = 0;
    puVar10[0x1a] = 0;
    puVar10[0x1b] = 0;
    puVar10[0x1c] = 0;
    puVar10[0x1d] = 0;
    *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + -1;
  }
  puVar22 = (undefined8 *)param_1[0x25];
  param_1[0x25] = puVar10;
  if (puVar22 != (undefined8 *)0x0) {
    FUN_02bcbe58(local_88,0);
    (**(code **)*puVar22)(puVar22);
    plVar20 = (long *)param_1[0x26];
    uVar3 = param_1[0x27];
    uVar24 = param_1[0x28];
    uVar9 = (**(code **)(*plVar20 + 0xc0))(plVar20);
    if ((uVar9 & 1) == 0) {
LAB_0295bcd4:
      (**(code **)(*plVar20 + 0x18))(plVar20,puVar22,uVar3,uVar24);
    }
    else {
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_0295bcd4;
      FUN_02bcc824(plVar20,puVar22,uVar3,uVar24);
    }
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar7 = *(int *)(lVar8 + 0x38d480) + -1;
    *(int *)(lVar8 + 0x38d480) = iVar7;
    if (iVar7 == 0) {
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
  param_1[0x26] = plVar19;
  param_1[0x27] = uVar21;
  param_1[0x28] = uVar17;
  plVar19 = (long *)*param_2;
  puVar10 = (undefined8 *)(**(code **)(*plVar19 + 0x10))(plVar19,0x10,8);
  if (puVar10 == (undefined8 *)0x0) {
    plVar19 = (long *)0x0;
    uVar21 = 0;
    uVar17 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar23 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar23 + 0x80)) goto LAB_0295e18c;
    *(long **)(lVar23 + *(ulong *)(lVar23 + 0x80) * 8) = plVar19;
    *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + 1;
    *puVar10 = &PTR_LAB_04276c58;
    *(undefined4 *)(puVar10 + 1) = 0;
    uVar17 = 8;
    uVar21 = 0x10;
    *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + -1;
  }
  puVar22 = (undefined8 *)param_1[0x29];
  param_1[0x29] = puVar10;
  if (puVar22 != (undefined8 *)0x0) {
    FUN_02bcbe58(local_88,0);
    (**(code **)*puVar22)(puVar22);
    plVar20 = (long *)param_1[0x2a];
    uVar3 = param_1[0x2b];
    uVar24 = param_1[0x2c];
    uVar9 = (**(code **)(*plVar20 + 0xc0))(plVar20);
    if ((uVar9 & 1) == 0) {
LAB_0295be94:
      (**(code **)(*plVar20 + 0x18))(plVar20,puVar22,uVar3,uVar24);
    }
    else {
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_0295be94;
      FUN_02bcc824(plVar20,puVar22,uVar3,uVar24);
    }
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar7 = *(int *)(lVar8 + 0x38d480) + -1;
    *(int *)(lVar8 + 0x38d480) = iVar7;
    if (iVar7 == 0) {
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
  param_1[0x2a] = plVar19;
  param_1[0x2b] = uVar21;
  param_1[0x2c] = uVar17;
  plVar19 = (long *)*param_2;
  puVar10 = (undefined8 *)(**(code **)(*plVar19 + 0x10))(plVar19,10,2);
  if (puVar10 == (undefined8 *)0x0) {
    plVar19 = (long *)0x0;
    uVar21 = 0;
    uVar17 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar23 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar23 + 0x80)) goto LAB_0295e18c;
    *(long **)(lVar23 + *(ulong *)(lVar23 + 0x80) * 8) = plVar19;
    *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + 1;
    *(undefined2 *)(puVar10 + 1) = 0;
    *puVar10 = 0;
    uVar17 = 2;
    uVar21 = 10;
    *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + -1;
  }
  lVar23 = param_1[0x2d];
  param_1[0x2d] = puVar10;
  if (lVar23 != 0) {
    FUN_02bcbe58(local_88,0);
    plVar20 = (long *)param_1[0x2e];
    uVar3 = param_1[0x2f];
    uVar24 = param_1[0x30];
    uVar9 = (**(code **)(*plVar20 + 0xc0))(plVar20);
    if ((uVar9 & 1) == 0) {
LAB_0295c03c:
      (**(code **)(*plVar20 + 0x18))(plVar20,lVar23,uVar3,uVar24);
    }
    else {
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_0295c03c;
      FUN_02bcc824(plVar20,lVar23,uVar3,uVar24);
    }
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar7 = *(int *)(lVar8 + 0x38d480) + -1;
    *(int *)(lVar8 + 0x38d480) = iVar7;
    if (iVar7 == 0) {
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
  param_1[0x2e] = plVar19;
  param_1[0x2f] = uVar21;
  param_1[0x30] = uVar17;
  plVar19 = (long *)*param_2;
  puVar10 = (undefined8 *)(**(code **)(*plVar19 + 0x10))(plVar19,0x28,8);
  if (puVar10 == (undefined8 *)0x0) {
    plVar19 = (long *)0x0;
    uVar21 = 0;
    uVar17 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar23 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar23 + 0x80)) goto LAB_0295e18c;
    *(long **)(lVar23 + *(ulong *)(lVar23 + 0x80) * 8) = plVar19;
    *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + 1;
    puVar10[4] = param_1;
    *puVar10 = &PTR_LAB_04276b80;
    puVar10[1] = 0;
    puVar10[2] = 0;
    *(undefined2 *)(puVar10 + 3) = 0;
    uVar17 = 8;
    uVar21 = 0x28;
    *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + -1;
  }
  puVar22 = (undefined8 *)param_1[0x31];
  param_1[0x31] = puVar10;
  if (puVar22 != (undefined8 *)0x0) {
    FUN_02bcbe58(local_88,0);
    *puVar22 = &PTR_LAB_04276b80;
    puVar22[1] = 0;
    puVar22[4] = 0;
    plVar20 = (long *)param_1[0x32];
    uVar3 = param_1[0x33];
    uVar24 = param_1[0x34];
    uVar9 = (**(code **)(*plVar20 + 0xc0))(plVar20);
    if ((uVar9 & 1) == 0) {
LAB_0295c1fc:
      (**(code **)(*plVar20 + 0x18))(plVar20,puVar22,uVar3,uVar24);
    }
    else {
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_0295c1fc;
      FUN_02bcc824(plVar20,puVar22,uVar3,uVar24);
    }
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar7 = *(int *)(lVar8 + 0x38d480) + -1;
    *(int *)(lVar8 + 0x38d480) = iVar7;
    if (iVar7 == 0) {
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
  param_1[0x32] = plVar19;
  param_1[0x33] = uVar21;
  param_1[0x34] = uVar17;
  plVar19 = (long *)*param_2;
  puVar10 = (undefined8 *)(**(code **)(*plVar19 + 0x10))(plVar19,0x10,8);
  if (puVar10 == (undefined8 *)0x0) {
    plVar19 = (long *)0x0;
    uVar21 = 0;
    uVar17 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar23 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar23 + 0x80)) goto LAB_0295e18c;
    *(long **)(lVar23 + *(ulong *)(lVar23 + 0x80) * 8) = plVar19;
    *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + 1;
    *puVar10 = &PTR_LAB_04276c78;
    *(undefined2 *)(puVar10 + 1) = 0;
    uVar17 = 8;
    uVar21 = 0x10;
    *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + -1;
  }
  puVar22 = (undefined8 *)param_1[0x35];
  param_1[0x35] = puVar10;
  if (puVar22 != (undefined8 *)0x0) {
    FUN_02bcbe58(local_88,0);
    (**(code **)*puVar22)(puVar22);
    plVar20 = (long *)param_1[0x36];
    uVar3 = param_1[0x37];
    uVar24 = param_1[0x38];
    uVar9 = (**(code **)(*plVar20 + 0xc0))(plVar20);
    if ((uVar9 & 1) == 0) {
LAB_0295c3bc:
      (**(code **)(*plVar20 + 0x18))(plVar20,puVar22,uVar3,uVar24);
    }
    else {
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_0295c3bc;
      FUN_02bcc824(plVar20,puVar22,uVar3,uVar24);
    }
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar7 = *(int *)(lVar8 + 0x38d480) + -1;
    *(int *)(lVar8 + 0x38d480) = iVar7;
    if (iVar7 == 0) {
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
  param_1[0x36] = plVar19;
  param_1[0x37] = uVar21;
  param_1[0x38] = uVar17;
  plVar19 = (long *)*param_2;
  puVar10 = (undefined8 *)(**(code **)(*plVar19 + 0x10))(plVar19,200,8);
  if (puVar10 == (undefined8 *)0x0) {
    plVar19 = (long *)0x0;
    uVar21 = 0;
    uVar17 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar23 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar23 + 0x80)) goto LAB_0295e18c;
    *(long **)(lVar23 + *(ulong *)(lVar23 + 0x80) * 8) = plVar19;
    *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + 1;
    *puVar10 = &PTR_LAB_04276ba0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[0x18] = 0;
    puVar10[4] = 0;
    puVar10[5] = 0;
    uVar17 = 8;
    uVar21 = 200;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[8] = 0;
    puVar10[9] = 0;
    puVar10[10] = 0;
    puVar10[0xb] = 0;
    puVar10[0xc] = 0;
    puVar10[0xd] = 0;
    puVar10[0xe] = 0;
    puVar10[0xf] = 0;
    puVar10[0x10] = 0;
    puVar10[0x11] = 0;
    puVar10[0x12] = 0;
    puVar10[0x13] = 0;
    puVar10[0x14] = 0;
    puVar10[0x15] = 0;
    puVar10[0x16] = 0;
    puVar10[0x17] = 0;
    *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + -1;
  }
  puVar22 = (undefined8 *)param_1[0x39];
  param_1[0x39] = puVar10;
  if (puVar22 != (undefined8 *)0x0) {
    FUN_02bcbe58(local_88,0);
    (**(code **)*puVar22)(puVar22);
    plVar20 = (long *)param_1[0x3a];
    uVar3 = param_1[0x3b];
    uVar24 = param_1[0x3c];
    uVar9 = (**(code **)(*plVar20 + 0xc0))(plVar20);
    if ((uVar9 & 1) == 0) {
LAB_0295c5a8:
      (**(code **)(*plVar20 + 0x18))(plVar20,puVar22,uVar3,uVar24);
    }
    else {
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_0295c5a8;
      FUN_02bcc824(plVar20,puVar22,uVar3,uVar24);
    }
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar7 = *(int *)(lVar8 + 0x38d480) + -1;
    *(int *)(lVar8 + 0x38d480) = iVar7;
    if (iVar7 == 0) {
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
  param_1[0x3a] = plVar19;
  param_1[0x3b] = uVar21;
  param_1[0x3c] = uVar17;
  plVar19 = (long *)*param_2;
  puVar10 = (undefined8 *)(**(code **)(*plVar19 + 0x10))(plVar19,0x20,4);
  if (puVar10 == (undefined8 *)0x0) {
    plVar19 = (long *)0x0;
    uVar21 = 0;
    uVar17 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar23 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar23 + 0x80)) {
LAB_0295e18c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar23 + *(ulong *)(lVar23 + 0x80) * 8) = plVar19;
    *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + 1;
    *puVar10 = 0x505050500000000;
    *(undefined1 *)(puVar10 + 1) = 5;
    *(undefined8 *)((long)puVar10 + 0xc) = 0;
    *(undefined8 *)((long)puVar10 + 0x14) = 0;
    *(undefined4 *)((long)puVar10 + 0x1c) = 0;
    uVar17 = 4;
    uVar21 = 0x20;
    *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + -1;
  }
  lVar23 = param_1[0x3d];
  param_1[0x3d] = puVar10;
  if (lVar23 == 0) goto LAB_0295c808;
  FUN_02bcbe58(local_88,0);
  plVar20 = (long *)param_1[0x3e];
  uVar3 = param_1[0x3f];
  uVar24 = param_1[0x40];
  uVar9 = (**(code **)(*plVar20 + 0xc0))(plVar20);
  if ((uVar9 & 1) == 0) {
LAB_0295c76c:
    (**(code **)(*plVar20 + 0x18))(plVar20,lVar23,uVar3,uVar24);
  }
  else {
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_0295c76c;
    FUN_02bcc824(plVar20,lVar23,uVar3,uVar24);
  }
  if (*(char *)(lVar8 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar8 + 0x38d488) = 1;
    *(undefined8 *)(lVar8 + 0x38d478) = 0;
    *(undefined8 *)(lVar8 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar7 = *(int *)(lVar8 + 0x38d480) + -1;
  *(int *)(lVar8 + 0x38d480) = iVar7;
  if (iVar7 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar8 + 0x38d484) = 0;
  }
LAB_0295c808:
  param_1[0x3e] = plVar19;
  param_1[0x3f] = uVar21;
  param_1[0x40] = uVar17;
  uVar17 = param_2[1];
  lVar23 = param_1[0x11];
  lVar8 = *(long *)(lVar23 + 0x14c8);
  while (lVar8 != 0) {
    lVar12 = *(long *)(lVar8 + 0x10);
    lVar18 = *(long *)(lVar8 + 0x18);
    if (lVar12 != 0) {
      *(long *)(lVar12 + 0x18) = lVar18;
    }
    if (lVar18 != 0) {
      *(long *)(lVar18 + 0x10) = lVar12;
    }
    *(undefined8 *)(lVar8 + 0x50) = 0;
    *(undefined8 *)(lVar8 + 0x58) = 0;
    *(undefined8 *)(lVar8 + 0x40) = 0;
    *(undefined8 *)(lVar8 + 0x48) = 0;
    *(undefined8 *)(lVar8 + 0x30) = 0;
    *(undefined8 *)(lVar8 + 0x38) = 0;
    *(undefined8 *)(lVar8 + 0x20) = 0;
    *(undefined8 *)(lVar8 + 0x28) = 0;
    *(long *)(lVar8 + 0x10) = 0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    lVar12 = *(long *)(lVar23 + 0x14d0);
    *(long *)(lVar8 + 0x18) = lVar12;
    if (lVar12 != 0) {
      *(long *)(lVar12 + 0x10) = lVar8;
    }
    *(long *)(lVar23 + 0x14d0) = lVar8;
    lVar8 = lVar18;
  }
  *(undefined8 *)(lVar23 + 0x14c8) = 0;
  lVar23 = param_1[1];
  lVar8 = 0;
  do {
    lVar18 = lVar23 + lVar8 * 8;
    if (*(long *)(lVar18 + 0x210) == 0) {
      plVar19 = (long *)(lVar18 + 0x210);
      lVar12 = *(long *)(lVar18 + 0x120);
      if (lVar12 == 0) {
        *plVar19 = 0;
      }
      else {
        piVar2 = (int *)(lVar12 + 0x50);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = *piVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar20 = (long *)*plVar19;
        *plVar19 = lVar12;
        if (plVar20 != (long *)0x0) {
          plVar19 = plVar20 + 10;
          do {
            iVar7 = (int)*plVar19 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar5) {
              *(int *)plVar19 = iVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 == 0) {
            (**(code **)(*plVar20 + 0x10))();
          }
        }
      }
      plVar19 = *(long **)(lVar18 + 0x120);
      *(long *)(lVar18 + 0x120) = 0;
      if (plVar19 != (long *)0x0) {
        plVar20 = plVar19 + 10;
        do {
          iVar7 = (int)*plVar20 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar5) {
            *(int *)plVar20 = iVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar19 + 0x10))();
        }
      }
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x1e);
  *(undefined1 *)(lVar23 + 0x38) = 0;
  *(undefined1 *)(lVar23 + 0x70) = 0;
  *(undefined1 *)(lVar23 + 0xa8) = 0;
  *(undefined1 *)(lVar23 + 0xe0) = 0;
  *(undefined1 *)(lVar23 + 0x118) = 0;
  *(undefined8 *)(lVar23 + 0x28) = 0;
  *(undefined8 *)(lVar23 + 0x30) = 0;
  *(undefined8 *)(lVar23 + 0x18) = 0;
  *(undefined8 *)(lVar23 + 0x20) = 0;
  *(undefined8 *)(lVar23 + 8) = 0;
  *(undefined8 *)(lVar23 + 0x10) = 0;
  *(undefined8 *)(lVar23 + 0x40) = 0;
  *(undefined8 *)(lVar23 + 0x48) = 0;
  *(undefined8 *)(lVar23 + 0x50) = 0;
  *(undefined8 *)(lVar23 + 0x58) = 0;
  *(undefined8 *)(lVar23 + 0x60) = 0;
  *(undefined8 *)(lVar23 + 0x68) = 0;
  *(undefined8 *)(lVar23 + 0x78) = 0;
  *(undefined8 *)(lVar23 + 0x80) = 0;
  *(undefined8 *)(lVar23 + 0x88) = 0;
  *(undefined8 *)(lVar23 + 0x90) = 0;
  *(undefined8 *)(lVar23 + 0x98) = 0;
  *(undefined8 *)(lVar23 + 0xa0) = 0;
  *(undefined8 *)(lVar23 + 0xd0) = 0;
  *(undefined8 *)(lVar23 + 0xd8) = 0;
  *(undefined8 *)(lVar23 + 0xc0) = 0;
  *(undefined8 *)(lVar23 + 200) = 0;
  *(undefined8 *)(lVar23 + 0xb0) = 0;
  *(undefined8 *)(lVar23 + 0xb8) = 0;
  *(undefined8 *)(lVar23 + 0xe8) = 0;
  *(undefined8 *)(lVar23 + 0xf0) = 0;
  *(undefined8 *)(lVar23 + 0xf8) = 0;
  *(undefined8 *)(lVar23 + 0x100) = 0;
  *(undefined8 *)(lVar23 + 0x108) = 0;
  *(undefined8 *)(lVar23 + 0x110) = 0;
  FUN_02941260(param_1[5]);
  FUN_02961bdc(param_1[9]);
  FUN_0296326c(param_1[0xd]);
  FUN_02953584(param_1[0x15],uVar17,param_1[1]);
  puVar10 = (undefined8 *)param_1[0x19];
  lVar8 = 0;
  lVar18 = param_1[1];
  *(undefined8 *)((long)puVar10 + 0x17) = 0;
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10[2] = 0;
  *(undefined8 *)((long)puVar10 + 0x1f) = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)puVar10 + 0x27) = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)puVar10 + 0x2f) = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)puVar10 + 0x35) = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)puVar10 + 0x3d) = 0;
  *(undefined8 *)((long)puVar10 + 0x45) = 0;
  *(undefined8 *)((long)puVar10 + 0x4d) = 0;
  *(undefined8 *)((long)puVar10 + 0x54) = 0;
  *(undefined8 *)((long)puVar10 + 0x5c) = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)puVar10 + 100) = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)puVar10 + 0x6c) = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)puVar10 + 0x72) = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)puVar10 + 0x91) = 0;
  *(undefined8 *)((long)puVar10 + 0x8a) = 0;
  *(undefined8 *)((long)puVar10 + 0x82) = 0;
  *(undefined8 *)((long)puVar10 + 0x7a) = 0;
  *(undefined8 *)((long)puVar10 + 0xf4) = 0;
  *(undefined8 *)((long)puVar10 + 0xaf) = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)puVar10 + 0xa9) = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)puVar10 + 0xa1) = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)puVar10 + 0x99) = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)puVar10 + 0xd6) = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)puVar10 + 0xde) = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)puVar10 + 0xe6) = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)puVar10 + 0xec) = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)puVar10 + 0x146) = 0x1f1f1f1f1f1f1f1f;
  puVar10[0x28] = 0x1f1f1f1f1f1f1f1f;
  puVar10[0x27] = 0x1f1f1f1f1f1f1f1f;
  puVar10[0x26] = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)puVar10 + 0xb7) = 0;
  *(undefined8 *)((long)puVar10 + 0xbf) = 0;
  *(undefined8 *)((long)puVar10 + 199) = 0;
  *(undefined8 *)((long)puVar10 + 0xce) = 0;
  *(undefined4 *)((long)puVar10 + 300) = 0;
  *(undefined1 *)((long)puVar10 + 0x14e) = 0;
  *(undefined8 *)((long)puVar10 + 0xfc) = 0;
  *(undefined8 *)((long)puVar10 + 0x104) = 0;
  *(undefined8 *)((long)puVar10 + 0x10c) = 0;
  *(undefined8 *)((long)puVar10 + 0x114) = 0;
  *(undefined8 *)((long)puVar10 + 0x11c) = 0;
  *(undefined8 *)((long)puVar10 + 0x124) = 0;
  lVar23 = *(long *)(lVar18 + 0x120);
  while( true ) {
    if (lVar23 != 0) {
      *(bool *)((long)puVar10 + 0xf4 + lVar8) = *(short *)(lVar23 + 0x74) == 0;
    }
    lVar8 = lVar8 + 1;
    if (lVar8 == 0x1e) break;
    lVar23 = ((long *)(lVar18 + 0x120))[lVar8];
  }
  puVar14 = (undefined4 *)param_1[0x1d];
  *puVar14 = 0;
  lVar8 = -0x12c0;
  do {
    lVar23 = lVar8 + 0x30;
    *(undefined4 *)((long)puVar14 + lVar8 + 0x12c8) = 0;
    *(undefined4 *)((long)puVar14 + lVar8 + 0x12d4) = 0;
    *(undefined4 *)((long)puVar14 + lVar8 + 0x12e0) = 0;
    *(undefined4 *)((long)puVar14 + lVar8 + 0x12ec) = 0;
    lVar8 = lVar23;
  } while (lVar23 != 0);
  puVar10 = (undefined8 *)param_1[0x21];
  *(undefined4 *)(puVar10 + 1) = 0;
  *puVar10 = 0;
  lVar8 = param_1[0x25];
  *(undefined8 *)(lVar8 + 0xe8) = 0;
  *(undefined8 *)(lVar8 + 0xf0) = 0;
  *(undefined8 *)(lVar8 + 0xd8) = 0;
  *(undefined8 *)(lVar8 + 0xe0) = 0;
  *(undefined8 *)(lVar8 + 200) = 0;
  *(undefined8 *)(lVar8 + 0xd0) = 0;
  *(undefined8 *)(lVar8 + 0xb8) = 0;
  *(undefined8 *)(lVar8 + 0xc0) = 0;
  *(undefined8 *)(lVar8 + 0xa8) = 0;
  *(undefined8 *)(lVar8 + 0xb0) = 0;
  *(undefined8 *)(lVar8 + 0x98) = 0;
  *(undefined8 *)(lVar8 + 0xa0) = 0;
  *(undefined8 *)(lVar8 + 0x88) = 0;
  *(undefined8 *)(lVar8 + 0x90) = 0;
  *(undefined8 *)(lVar8 + 0x78) = 0;
  *(undefined8 *)(lVar8 + 0x80) = 0;
  *(undefined8 *)(lVar8 + 0x68) = 0;
  *(undefined8 *)(lVar8 + 0x70) = 0;
  *(undefined8 *)(lVar8 + 0x58) = 0;
  *(undefined8 *)(lVar8 + 0x60) = 0;
  *(undefined8 *)(lVar8 + 0x48) = 0;
  *(undefined8 *)(lVar8 + 0x50) = 0;
  *(undefined8 *)(lVar8 + 0x38) = 0;
  *(undefined8 *)(lVar8 + 0x40) = 0;
  *(undefined8 *)(lVar8 + 0x28) = 0;
  *(undefined8 *)(lVar8 + 0x30) = 0;
  *(undefined8 *)(lVar8 + 0x18) = 0;
  *(undefined8 *)(lVar8 + 0x20) = 0;
  *(undefined8 *)(lVar8 + 8) = 0;
  *(undefined8 *)(lVar8 + 0x10) = 0;
  *(undefined4 *)(param_1[0x29] + 8) = 0;
  puVar10 = (undefined8 *)param_1[0x2d];
  *(undefined2 *)(puVar10 + 1) = 0;
  *puVar10 = 0;
  lVar8 = param_1[0x31];
  *(undefined2 *)(lVar8 + 0x18) = 0;
  *(undefined8 *)(lVar8 + 0x10) = 0;
  *(undefined2 *)(param_1[0x35] + 8) = 0;
  lVar8 = param_1[0x39];
  *(undefined8 *)(lVar8 + 0xb8) = 0;
  *(undefined8 *)(lVar8 + 0xc0) = 0;
  *(undefined8 *)(lVar8 + 0xa8) = 0;
  *(undefined8 *)(lVar8 + 0xb0) = 0;
  *(undefined8 *)(lVar8 + 0x98) = 0;
  *(undefined8 *)(lVar8 + 0xa0) = 0;
  *(undefined8 *)(lVar8 + 0x88) = 0;
  *(undefined8 *)(lVar8 + 0x90) = 0;
  *(undefined8 *)(lVar8 + 0x78) = 0;
  *(undefined8 *)(lVar8 + 0x80) = 0;
  *(undefined8 *)(lVar8 + 0x68) = 0;
  *(undefined8 *)(lVar8 + 0x70) = 0;
  *(undefined8 *)(lVar8 + 0x58) = 0;
  *(undefined8 *)(lVar8 + 0x60) = 0;
  *(undefined8 *)(lVar8 + 0x48) = 0;
  *(undefined8 *)(lVar8 + 0x50) = 0;
  *(undefined8 *)(lVar8 + 0x38) = 0;
  *(undefined8 *)(lVar8 + 0x40) = 0;
  *(undefined8 *)(lVar8 + 0x28) = 0;
  *(undefined8 *)(lVar8 + 0x30) = 0;
  *(undefined8 *)(lVar8 + 0x18) = 0;
  *(undefined8 *)(lVar8 + 0x20) = 0;
  *(undefined8 *)(lVar8 + 8) = 0;
  *(undefined8 *)(lVar8 + 0x10) = 0;
  puVar10 = (undefined8 *)param_1[0x3d];
  *puVar10 = 0x505050500000000;
  *(undefined1 *)(puVar10 + 1) = 5;
  *(undefined8 *)((long)puVar10 + 0xc) = 0;
  *(undefined8 *)((long)puVar10 + 0x14) = 0;
  *(undefined4 *)((long)puVar10 + 0x1c) = 0;
  *(undefined4 *)((long)param_1 + 0x214) = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)((long)param_1 + 0x20f) = 0;
  *(undefined8 *)((long)param_1 + 0x21c) = 0;
  *(undefined4 *)((long)param_1 + 0x223) = 0;
  param_1[0x45] = 0;
  *(undefined4 *)((long)param_1 + 0x22f) = 0;
  return;
}


