/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02931354; name: FUN_02931354
 */


void FUN_02931354(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  byte *pbVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined1 auStack_78 [24];
  
  *(undefined4 *)((long)param_1 + 0xdf) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  DAT_043ecd98 = param_2;
  puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  puVar2 = PTR_DAT_04379528;
  pbVar13 = PTR_DAT_04379520;
  if (puVar5 == (undefined8 *)0x0) {
    plVar15 = (long *)0x0;
    uVar14 = 0;
    uVar16 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar4 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_02932974;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[8] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    *(undefined4 *)(puVar5 + 4) = 0xffffffff;
    puVar5[9] = 0;
    puVar5[10] = 0;
    *(undefined1 *)((long)puVar5 + 0x24) = 0;
    puVar5[2] = &PTR_LAB_04275e40;
    puVar5[3] = 0;
    *puVar5 = &PTR_LAB_04275ca8;
    puVar5[1] = &PTR_LAB_04275dc0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    nn::os::InitializeMutex((MutexType *)(puVar5 + 8),true,0);
    *(undefined1 *)(puVar5 + 0xc) = 0;
    puVar5[1] = &PTR_LAB_04275cf0;
    puVar5[2] = &PTR_LAB_04275d70;
    uVar16 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar15 = param_2;
  }
  puVar10 = (undefined8 *)*param_1;
  *param_1 = puVar5;
  lVar6 = tpidr_el0;
  if (puVar10 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar10)(puVar10);
    plVar9 = (long *)param_1[1];
    uVar12 = param_1[2];
    uVar11 = param_1[3];
    uVar7 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    if ((uVar7 & 1) == 0) {
LAB_02931530:
      (**(code **)(*plVar9 + 0x18))(plVar9,puVar10,uVar12,uVar11);
    }
    else {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_02931530;
      FUN_02bcc824(plVar9,puVar10,uVar12,uVar11);
    }
    pbVar13 = PTR_DAT_04379520;
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar4 = *(int *)(lVar6 + 0x38d480) + -1;
    *(int *)(lVar6 + 0x38d480) = iVar4;
    if (iVar4 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar6 + 0x38d484) = 0;
    }
  }
  param_1[1] = plVar15;
  param_1[2] = uVar14;
  param_1[3] = uVar16;
  puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,8,8);
  puVar2 = PTR_DAT_04379528;
  if (puVar5 == (undefined8 *)0x0) {
    plVar15 = (long *)0x0;
    uVar14 = 0;
  }
  else {
    if (((*pbVar13 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar4 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_02932974;
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = param_2;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    *puVar5 = &PTR_LAB_04275eb8;
    uVar14 = 8;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    plVar15 = param_2;
  }
  puVar10 = (undefined8 *)param_1[4];
  param_1[4] = puVar5;
  if (puVar10 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar10)(puVar10);
    plVar9 = (long *)param_1[5];
    uVar16 = param_1[6];
    uVar12 = param_1[7];
    uVar7 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    if ((uVar7 & 1) == 0) {
LAB_029316e8:
      (**(code **)(*plVar9 + 0x18))(plVar9,puVar10,uVar16,uVar12);
    }
    else {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_029316e8;
      FUN_02bcc824(plVar9,puVar10,uVar16,uVar12);
    }
    pbVar13 = PTR_DAT_04379520;
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar4 = *(int *)(lVar6 + 0x38d480) + -1;
    *(int *)(lVar6 + 0x38d480) = iVar4;
    if (iVar4 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar6 + 0x38d484) = 0;
    }
  }
  param_1[5] = plVar15;
  param_1[6] = uVar14;
  param_1[7] = uVar14;
  puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,8,8);
  if (puVar5 == (undefined8 *)0x0) {
    plVar15 = (long *)0x0;
    uVar14 = 0;
  }
  else {
    if (((*pbVar13 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar4 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_02932974;
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = param_2;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    *puVar5 = &PTR_LAB_04275ef0;
    uVar14 = 8;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    plVar15 = param_2;
  }
  puVar10 = (undefined8 *)param_1[8];
  param_1[8] = puVar5;
  if (puVar10 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar10)(puVar10);
    plVar9 = (long *)param_1[9];
    uVar16 = param_1[10];
    uVar12 = param_1[0xb];
    uVar7 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    if ((uVar7 & 1) == 0) {
LAB_02931890:
      (**(code **)(*plVar9 + 0x18))(plVar9,puVar10,uVar16,uVar12);
    }
    else {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_02931890;
      FUN_02bcc824(plVar9,puVar10,uVar16,uVar12);
    }
    pbVar13 = PTR_DAT_04379520;
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar4 = *(int *)(lVar6 + 0x38d480) + -1;
    *(int *)(lVar6 + 0x38d480) = iVar4;
    if (iVar4 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar6 + 0x38d484) = 0;
    }
  }
  param_1[9] = plVar15;
  param_1[10] = uVar14;
  param_1[0xb] = uVar14;
  puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,8,8);
  if (puVar5 == (undefined8 *)0x0) {
    plVar15 = (long *)0x0;
    uVar14 = 0;
  }
  else {
    if (((*pbVar13 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar4 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_02932974;
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = param_2;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    *puVar5 = &PTR_LAB_04275f30;
    uVar14 = 8;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    plVar15 = param_2;
  }
  puVar10 = (undefined8 *)param_1[0xc];
  param_1[0xc] = puVar5;
  if (puVar10 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar10)(puVar10);
    plVar9 = (long *)param_1[0xd];
    uVar16 = param_1[0xe];
    uVar12 = param_1[0xf];
    uVar7 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    if ((uVar7 & 1) == 0) {
LAB_02931a38:
      (**(code **)(*plVar9 + 0x18))(plVar9,puVar10,uVar16,uVar12);
    }
    else {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_02931a38;
      FUN_02bcc824(plVar9,puVar10,uVar16,uVar12);
    }
    pbVar13 = PTR_DAT_04379520;
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar4 = *(int *)(lVar6 + 0x38d480) + -1;
    *(int *)(lVar6 + 0x38d480) = iVar4;
    if (iVar4 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar6 + 0x38d484) = 0;
    }
  }
  param_1[0xd] = plVar15;
  param_1[0xe] = uVar14;
  param_1[0xf] = uVar14;
  puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,8,8);
  if (puVar5 == (undefined8 *)0x0) {
    plVar15 = (long *)0x0;
    uVar14 = 0;
  }
  else {
    if (((*pbVar13 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar4 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_02932974;
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = param_2;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    *puVar5 = &PTR_LAB_04276068;
    uVar14 = 8;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    plVar15 = param_2;
  }
  puVar10 = (undefined8 *)param_1[0x10];
  param_1[0x10] = puVar5;
  if (puVar10 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar10)(puVar10);
    plVar9 = (long *)param_1[0x11];
    uVar16 = param_1[0x12];
    uVar12 = param_1[0x13];
    uVar7 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    if ((uVar7 & 1) == 0) {
LAB_02931be0:
      (**(code **)(*plVar9 + 0x18))(plVar9,puVar10,uVar16,uVar12);
    }
    else {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_02931be0;
      FUN_02bcc824(plVar9,puVar10,uVar16,uVar12);
    }
    pbVar13 = PTR_DAT_04379520;
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar4 = *(int *)(lVar6 + 0x38d480) + -1;
    *(int *)(lVar6 + 0x38d480) = iVar4;
    if (iVar4 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar6 + 0x38d484) = 0;
    }
  }
  param_1[0x11] = plVar15;
  param_1[0x12] = uVar14;
  param_1[0x13] = uVar14;
  puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,8,8);
  if (puVar5 == (undefined8 *)0x0) {
    plVar15 = (long *)0x0;
    uVar14 = 0;
  }
  else {
    if (((*pbVar13 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar4 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_02932974;
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = param_2;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    *puVar5 = &PTR_LAB_042760a0;
    uVar14 = 8;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    plVar15 = param_2;
  }
  plVar9 = (long *)param_1[0x14];
  param_1[0x14] = puVar5;
  if (plVar9 != (long *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)(*plVar9 + 8))(plVar9);
    plVar1 = (long *)param_1[0x15];
    uVar16 = param_1[0x16];
    uVar12 = param_1[0x17];
    uVar7 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar7 & 1) == 0) {
LAB_02931d88:
      (**(code **)(*plVar1 + 0x18))(plVar1,plVar9,uVar16,uVar12);
    }
    else {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_02931d88;
      FUN_02bcc824(plVar1,plVar9,uVar16,uVar12);
    }
    pbVar13 = PTR_DAT_04379520;
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar4 = *(int *)(lVar6 + 0x38d480) + -1;
    *(int *)(lVar6 + 0x38d480) = iVar4;
    if (iVar4 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar6 + 0x38d484) = 0;
    }
  }
  param_1[0x15] = plVar15;
  param_1[0x16] = uVar14;
  param_1[0x17] = uVar14;
  puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,8,8);
  if (puVar5 == (undefined8 *)0x0) {
    param_2 = (long *)0x0;
    uVar14 = 0;
  }
  else {
    if (((*pbVar13 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar4 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_02932974:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = param_2;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    *puVar5 = &PTR_LAB_042760e8;
    uVar14 = 8;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  puVar10 = (undefined8 *)param_1[0x18];
  param_1[0x18] = puVar5;
  if (puVar10 == (undefined8 *)0x0) goto LAB_02931fc8;
  FUN_02bcbe58(auStack_78,0);
  (**(code **)*puVar10)(puVar10);
  plVar15 = (long *)param_1[0x19];
  uVar16 = param_1[0x1a];
  uVar12 = param_1[0x1b];
  uVar7 = (**(code **)(*plVar15 + 0xc0))(plVar15);
  if ((uVar7 & 1) == 0) {
LAB_02931f2c:
    (**(code **)(*plVar15 + 0x18))(plVar15,puVar10,uVar16,uVar12);
  }
  else {
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_02931f2c;
    FUN_02bcc824(plVar15,puVar10,uVar16,uVar12);
  }
  if (*(char *)(lVar6 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar6 + 0x38d488) = 1;
    *(undefined8 *)(lVar6 + 0x38d478) = 0;
    *(undefined8 *)(lVar6 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar4 = *(int *)(lVar6 + 0x38d480) + -1;
  *(int *)(lVar6 + 0x38d480) = iVar4;
  if (iVar4 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar6 + 0x38d484) = 0;
  }
LAB_02931fc8:
  param_1[0x19] = param_2;
  param_1[0x1a] = uVar14;
  param_1[0x1b] = uVar14;
  return;
}


