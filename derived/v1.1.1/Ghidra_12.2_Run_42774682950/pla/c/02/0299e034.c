/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0299e034; name: FUN_0299e034
 */


void FUN_0299e034(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  byte *pbVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_78 [24];
  
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  pbVar10 = PTR_DAT_04379520;
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042771c0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)*param_1;
  *param_1 = puVar3;
  lVar4 = tpidr_el0;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[1];
    uVar7 = param_1[2];
    uVar9 = param_1[3];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_0299e18c:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_0299e18c;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[1] = plVar11;
  param_1[2] = uVar14;
  param_1[3] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042771a0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[4];
  param_1[4] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[5];
    uVar7 = param_1[6];
    uVar9 = param_1[7];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_0299e358:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_0299e358;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[5] = plVar11;
  param_1[6] = uVar14;
  param_1[7] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042771e0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[8];
  param_1[8] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[9];
    uVar7 = param_1[10];
    uVar9 = param_1[0xb];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_0299e524:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_0299e524;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[9] = plVar11;
  param_1[10] = uVar14;
  param_1[0xb] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277200;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0xc];
  param_1[0xc] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0xd];
    uVar7 = param_1[0xe];
    uVar9 = param_1[0xf];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_0299e6f0:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_0299e6f0;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0xd] = plVar11;
  param_1[0xe] = uVar14;
  param_1[0xf] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277220;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x10];
  param_1[0x10] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x11];
    uVar7 = param_1[0x12];
    uVar9 = param_1[0x13];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_0299e8bc:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_0299e8bc;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x11] = plVar11;
  param_1[0x12] = uVar14;
  param_1[0x13] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277260;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x14];
  param_1[0x14] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x15];
    uVar7 = param_1[0x16];
    uVar9 = param_1[0x17];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_0299ea88:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_0299ea88;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x15] = plVar11;
  param_1[0x16] = uVar14;
  param_1[0x17] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277280;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x18];
  param_1[0x18] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x19];
    uVar7 = param_1[0x1a];
    uVar9 = param_1[0x1b];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_0299ec54:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_0299ec54;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x19] = plVar11;
  param_1[0x1a] = uVar14;
  param_1[0x1b] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042772a0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x1c];
  param_1[0x1c] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x1d];
    uVar7 = param_1[0x1e];
    uVar9 = param_1[0x1f];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_0299ee20:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_0299ee20;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x1d] = plVar11;
  param_1[0x1e] = uVar14;
  param_1[0x1f] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278930;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x20];
  param_1[0x20] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x21];
    uVar7 = param_1[0x22];
    uVar9 = param_1[0x23];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_0299efec:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_0299efec;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x21] = plVar11;
  param_1[0x22] = uVar14;
  param_1[0x23] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042772c0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x24];
  param_1[0x24] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x25];
    uVar7 = param_1[0x26];
    uVar9 = param_1[0x27];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_0299f1b8:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_0299f1b8;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x25] = plVar11;
  param_1[0x26] = uVar14;
  param_1[0x27] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042772e0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x28];
  param_1[0x28] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x29];
    uVar7 = param_1[0x2a];
    uVar9 = param_1[0x2b];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_0299f384:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_0299f384;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x29] = plVar11;
  param_1[0x2a] = uVar14;
  param_1[0x2b] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277300;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x2c];
  param_1[0x2c] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x2d];
    uVar7 = param_1[0x2e];
    uVar9 = param_1[0x2f];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_0299f550:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_0299f550;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x2d] = plVar11;
  param_1[0x2e] = uVar14;
  param_1[0x2f] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277320;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x30];
  param_1[0x30] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x31];
    uVar7 = param_1[0x32];
    uVar9 = param_1[0x33];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_0299f71c:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_0299f71c;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x31] = plVar11;
  param_1[0x32] = uVar14;
  param_1[0x33] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277340;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x34];
  param_1[0x34] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x35];
    uVar7 = param_1[0x36];
    uVar9 = param_1[0x37];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_0299f8e8:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_0299f8e8;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x35] = plVar11;
  param_1[0x36] = uVar14;
  param_1[0x37] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277360;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x38];
  param_1[0x38] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x39];
    uVar7 = param_1[0x3a];
    uVar9 = param_1[0x3b];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_0299fab4:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_0299fab4;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x39] = plVar11;
  param_1[0x3a] = uVar14;
  param_1[0x3b] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277380;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x3c];
  param_1[0x3c] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x3d];
    uVar7 = param_1[0x3e];
    uVar9 = param_1[0x3f];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_0299fc80:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_0299fc80;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x3d] = plVar11;
  param_1[0x3e] = uVar14;
  param_1[0x3f] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042773a0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x40];
  param_1[0x40] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x41];
    uVar7 = param_1[0x42];
    uVar9 = param_1[0x43];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_0299fe50:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_0299fe50;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x41] = plVar11;
  param_1[0x42] = uVar14;
  param_1[0x43] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042773c0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x44];
  param_1[0x44] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x45];
    uVar7 = param_1[0x46];
    uVar9 = param_1[0x47];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a0024:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a0024;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x45] = plVar11;
  param_1[0x46] = uVar14;
  param_1[0x47] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042773e0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x48];
  param_1[0x48] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x49];
    uVar7 = param_1[0x4a];
    uVar9 = param_1[0x4b];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a01f8:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a01f8;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x49] = plVar11;
  param_1[0x4a] = uVar14;
  param_1[0x4b] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277400;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x4c];
  param_1[0x4c] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x4d];
    uVar7 = param_1[0x4e];
    uVar9 = param_1[0x4f];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a03cc:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a03cc;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x4d] = plVar11;
  param_1[0x4e] = uVar14;
  param_1[0x4f] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277420;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x50];
  param_1[0x50] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x51];
    uVar7 = param_1[0x52];
    uVar9 = param_1[0x53];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a05a0:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a05a0;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x51] = plVar11;
  param_1[0x52] = uVar14;
  param_1[0x53] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277440;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x54];
  param_1[0x54] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x55];
    uVar7 = param_1[0x56];
    uVar9 = param_1[0x57];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a0774:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a0774;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x55] = plVar11;
  param_1[0x56] = uVar14;
  param_1[0x57] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277460;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x58];
  param_1[0x58] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x59];
    uVar7 = param_1[0x5a];
    uVar9 = param_1[0x5b];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a0948:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a0948;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x59] = plVar11;
  param_1[0x5a] = uVar14;
  param_1[0x5b] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277480;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x5c];
  param_1[0x5c] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x5d];
    uVar7 = param_1[0x5e];
    uVar9 = param_1[0x5f];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a0b1c:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a0b1c;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x5d] = plVar11;
  param_1[0x5e] = uVar14;
  param_1[0x5f] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042774b8;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x60];
  param_1[0x60] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x61];
    uVar7 = param_1[0x62];
    uVar9 = param_1[99];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a0cf0:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a0cf0;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x61] = plVar11;
  param_1[0x62] = uVar14;
  param_1[99] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042774d8;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[100];
  param_1[100] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x65];
    uVar7 = param_1[0x66];
    uVar9 = param_1[0x67];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a0ec4:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a0ec4;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x65] = plVar11;
  param_1[0x66] = uVar14;
  param_1[0x67] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042774f8;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x68];
  param_1[0x68] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x69];
    uVar7 = param_1[0x6a];
    uVar9 = param_1[0x6b];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a1098:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a1098;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x69] = plVar11;
  param_1[0x6a] = uVar14;
  param_1[0x6b] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277518;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x6c];
  param_1[0x6c] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x6d];
    uVar7 = param_1[0x6e];
    uVar9 = param_1[0x6f];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a126c:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a126c;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x6d] = plVar11;
  param_1[0x6e] = uVar14;
  param_1[0x6f] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277538;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x70];
  param_1[0x70] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x71];
    uVar7 = param_1[0x72];
    uVar9 = param_1[0x73];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a1440:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a1440;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x71] = plVar11;
  param_1[0x72] = uVar14;
  param_1[0x73] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277558;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x74];
  param_1[0x74] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x75];
    uVar7 = param_1[0x76];
    uVar9 = param_1[0x77];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a1614:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a1614;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x75] = plVar11;
  param_1[0x76] = uVar14;
  param_1[0x77] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277578;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x78];
  param_1[0x78] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x79];
    uVar7 = param_1[0x7a];
    uVar9 = param_1[0x7b];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a17e8:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a17e8;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x79] = plVar11;
  param_1[0x7a] = uVar14;
  param_1[0x7b] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277598;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x7c];
  param_1[0x7c] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x7d];
    uVar7 = param_1[0x7e];
    uVar9 = param_1[0x7f];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a19bc:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a19bc;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x7d] = plVar11;
  param_1[0x7e] = uVar14;
  param_1[0x7f] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042775d0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x80];
  param_1[0x80] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x81];
    uVar7 = param_1[0x82];
    uVar9 = param_1[0x83];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a1b90:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a1b90;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x81] = plVar11;
  param_1[0x82] = uVar14;
  param_1[0x83] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042775f0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x84];
  param_1[0x84] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x85];
    uVar7 = param_1[0x86];
    uVar9 = param_1[0x87];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a1d64:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a1d64;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x85] = plVar11;
  param_1[0x86] = uVar14;
  param_1[0x87] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277610;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x88];
  param_1[0x88] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x89];
    uVar7 = param_1[0x8a];
    uVar9 = param_1[0x8b];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a1f38:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a1f38;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x89] = plVar11;
  param_1[0x8a] = uVar14;
  param_1[0x8b] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277648;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x8c];
  param_1[0x8c] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x8d];
    uVar7 = param_1[0x8e];
    uVar9 = param_1[0x8f];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a210c:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a210c;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x8d] = plVar11;
  param_1[0x8e] = uVar14;
  param_1[0x8f] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277688;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x90];
  param_1[0x90] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x91];
    uVar7 = param_1[0x92];
    uVar9 = param_1[0x93];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a22e0:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a22e0;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x91] = plVar11;
  param_1[0x92] = uVar14;
  param_1[0x93] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042776a8;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x94];
  param_1[0x94] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x95];
    uVar7 = param_1[0x96];
    uVar9 = param_1[0x97];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a24b4:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a24b4;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x95] = plVar11;
  param_1[0x96] = uVar14;
  param_1[0x97] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042776c8;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x98];
  param_1[0x98] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x99];
    uVar7 = param_1[0x9a];
    uVar9 = param_1[0x9b];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a2688:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a2688;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x99] = plVar11;
  param_1[0x9a] = uVar14;
  param_1[0x9b] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042776e8;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x9c];
  param_1[0x9c] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x9d];
    uVar7 = param_1[0x9e];
    uVar9 = param_1[0x9f];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a285c:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a285c;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x9d] = plVar11;
  param_1[0x9e] = uVar14;
  param_1[0x9f] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277708;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0xa0];
  param_1[0xa0] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0xa1];
    uVar7 = param_1[0xa2];
    uVar9 = param_1[0xa3];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a2a30:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a2a30;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0xa1] = plVar11;
  param_1[0xa2] = uVar14;
  param_1[0xa3] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277728;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0xa4];
  param_1[0xa4] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0xa5];
    uVar7 = param_1[0xa6];
    uVar9 = param_1[0xa7];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a2c04:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a2c04;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0xa5] = plVar11;
  param_1[0xa6] = uVar14;
  param_1[0xa7] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277748;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0xa8];
  param_1[0xa8] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0xa9];
    uVar7 = param_1[0xaa];
    uVar9 = param_1[0xab];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a2dd8:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a2dd8;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0xa9] = plVar11;
  param_1[0xaa] = uVar14;
  param_1[0xab] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277768;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0xac];
  param_1[0xac] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0xad];
    uVar7 = param_1[0xae];
    uVar9 = param_1[0xaf];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a2fac:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a2fac;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0xad] = plVar11;
  param_1[0xae] = uVar14;
  param_1[0xaf] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042777a8;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0xb0];
  param_1[0xb0] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0xb1];
    uVar7 = param_1[0xb2];
    uVar9 = param_1[0xb3];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a3180:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a3180;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0xb1] = plVar11;
  param_1[0xb2] = uVar14;
  param_1[0xb3] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042777c8;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0xb4];
  param_1[0xb4] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0xb5];
    uVar7 = param_1[0xb6];
    uVar9 = param_1[0xb7];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a3354:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a3354;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0xb5] = plVar11;
  param_1[0xb6] = uVar14;
  param_1[0xb7] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042777e8;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0xb8];
  param_1[0xb8] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0xb9];
    uVar7 = param_1[0xba];
    uVar9 = param_1[0xbb];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a3528:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a3528;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0xb9] = plVar11;
  param_1[0xba] = uVar14;
  param_1[0xbb] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277808;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0xbc];
  param_1[0xbc] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0xbd];
    uVar7 = param_1[0xbe];
    uVar9 = param_1[0xbf];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a36fc:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a36fc;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0xbd] = plVar11;
  param_1[0xbe] = uVar14;
  param_1[0xbf] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277848;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0xc0];
  param_1[0xc0] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0xc1];
    uVar7 = param_1[0xc2];
    uVar9 = param_1[0xc3];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a38d0:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a38d0;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0xc1] = plVar11;
  param_1[0xc2] = uVar14;
  param_1[0xc3] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277868;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0xc4];
  param_1[0xc4] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0xc5];
    uVar7 = param_1[0xc6];
    uVar9 = param_1[199];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a3aa4:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a3aa4;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0xc5] = plVar11;
  param_1[0xc6] = uVar14;
  param_1[199] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277828;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[200];
  param_1[200] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0xc9];
    uVar7 = param_1[0xca];
    uVar9 = param_1[0xcb];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a3c78:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a3c78;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0xc9] = plVar11;
  param_1[0xca] = uVar14;
  param_1[0xcb] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277888;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0xcc];
  param_1[0xcc] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0xcd];
    uVar7 = param_1[0xce];
    uVar9 = param_1[0xcf];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a3e4c:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a3e4c;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0xcd] = plVar11;
  param_1[0xce] = uVar14;
  param_1[0xcf] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278260;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0xd0];
  param_1[0xd0] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0xd1];
    uVar7 = param_1[0xd2];
    uVar9 = param_1[0xd3];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a4020:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a4020;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0xd1] = plVar11;
  param_1[0xd2] = uVar14;
  param_1[0xd3] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042778c8;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0xd4];
  param_1[0xd4] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0xd5];
    uVar7 = param_1[0xd6];
    uVar9 = param_1[0xd7];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a41f4:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a41f4;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0xd5] = plVar11;
  param_1[0xd6] = uVar14;
  param_1[0xd7] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042778e8;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0xd8];
  param_1[0xd8] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0xd9];
    uVar7 = param_1[0xda];
    uVar9 = param_1[0xdb];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a43c8:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a43c8;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0xd9] = plVar11;
  param_1[0xda] = uVar14;
  param_1[0xdb] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278de0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0xdc];
  param_1[0xdc] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0xdd];
    uVar7 = param_1[0xde];
    uVar9 = param_1[0xdf];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a459c:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a459c;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0xdd] = plVar11;
  param_1[0xde] = uVar14;
  param_1[0xdf] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278ee0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0xe0];
  param_1[0xe0] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0xe1];
    uVar7 = param_1[0xe2];
    uVar9 = param_1[0xe3];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a4770:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a4770;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0xe1] = plVar11;
  param_1[0xe2] = uVar14;
  param_1[0xe3] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278f00;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0xe4];
  param_1[0xe4] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0xe5];
    uVar7 = param_1[0xe6];
    uVar9 = param_1[0xe7];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a4944:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a4944;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0xe5] = plVar11;
  param_1[0xe6] = uVar14;
  param_1[0xe7] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278f20;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0xe8];
  param_1[0xe8] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0xe9];
    uVar7 = param_1[0xea];
    uVar9 = param_1[0xeb];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a4b18:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a4b18;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0xe9] = plVar11;
  param_1[0xea] = uVar14;
  param_1[0xeb] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278550;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0xec];
  param_1[0xec] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0xed];
    uVar7 = param_1[0xee];
    uVar9 = param_1[0xef];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a4cec:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a4cec;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0xed] = plVar11;
  param_1[0xee] = uVar14;
  param_1[0xef] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278f40;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0xf0];
  param_1[0xf0] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0xf1];
    uVar7 = param_1[0xf2];
    uVar9 = param_1[0xf3];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a4ec0:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a4ec0;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0xf1] = plVar11;
  param_1[0xf2] = uVar14;
  param_1[0xf3] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278f60;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0xf4];
  param_1[0xf4] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0xf5];
    uVar7 = param_1[0xf6];
    uVar9 = param_1[0xf7];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a5094:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a5094;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0xf5] = plVar11;
  param_1[0xf6] = uVar14;
  param_1[0xf7] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278f80;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0xf8];
  param_1[0xf8] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0xf9];
    uVar7 = param_1[0xfa];
    uVar9 = param_1[0xfb];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a5268:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a5268;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0xf9] = plVar11;
  param_1[0xfa] = uVar14;
  param_1[0xfb] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278fa0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0xfc];
  param_1[0xfc] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0xfd];
    uVar7 = param_1[0xfe];
    uVar9 = param_1[0xff];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a543c:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a543c;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0xfd] = plVar11;
  param_1[0xfe] = uVar14;
  param_1[0xff] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278770;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x100];
  param_1[0x100] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x101];
    uVar7 = param_1[0x102];
    uVar9 = param_1[0x103];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a5610:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a5610;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x101] = plVar11;
  param_1[0x102] = uVar14;
  param_1[0x103] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042788b0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x104];
  param_1[0x104] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x105];
    uVar7 = param_1[0x106];
    uVar9 = param_1[0x107];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a57e4:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a57e4;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x105] = plVar11;
  param_1[0x106] = uVar14;
  param_1[0x107] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04279180;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x108];
  param_1[0x108] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x109];
    uVar7 = param_1[0x10a];
    uVar9 = param_1[0x10b];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a59b8:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a59b8;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x109] = plVar11;
  param_1[0x10a] = uVar14;
  param_1[0x10b] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277a20;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x10c];
  param_1[0x10c] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x10d];
    uVar7 = param_1[0x10e];
    uVar9 = param_1[0x10f];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a5b8c:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a5b8c;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x10d] = plVar11;
  param_1[0x10e] = uVar14;
  param_1[0x10f] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277948;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x110];
  param_1[0x110] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x111];
    uVar7 = param_1[0x112];
    uVar9 = param_1[0x113];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a5d60:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a5d60;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x111] = plVar11;
  param_1[0x112] = uVar14;
  param_1[0x113] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277988;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x114];
  param_1[0x114] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x115];
    uVar7 = param_1[0x116];
    uVar9 = param_1[0x117];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a5f34:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a5f34;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x115] = plVar11;
  param_1[0x116] = uVar14;
  param_1[0x117] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042779c0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x118];
  param_1[0x118] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x119];
    uVar7 = param_1[0x11a];
    uVar9 = param_1[0x11b];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a6108:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a6108;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x119] = plVar11;
  param_1[0x11a] = uVar14;
  param_1[0x11b] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042779e0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x11c];
  param_1[0x11c] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x11d];
    uVar7 = param_1[0x11e];
    uVar9 = param_1[0x11f];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a62dc:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a62dc;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x11d] = plVar11;
  param_1[0x11e] = uVar14;
  param_1[0x11f] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277908;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x120];
  param_1[0x120] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x121];
    uVar7 = param_1[0x122];
    uVar9 = param_1[0x123];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a64b0:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a64b0;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x121] = plVar11;
  param_1[0x122] = uVar14;
  param_1[0x123] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277928;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x124];
  param_1[0x124] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x125];
    uVar7 = param_1[0x126];
    uVar9 = param_1[0x127];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a6684:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a6684;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x125] = plVar11;
  param_1[0x126] = uVar14;
  param_1[0x127] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277a00;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x128];
  param_1[0x128] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x129];
    uVar7 = param_1[0x12a];
    uVar9 = param_1[299];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a6858:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a6858;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x129] = plVar11;
  param_1[0x12a] = uVar14;
  param_1[299] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277968;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[300];
  param_1[300] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x12d];
    uVar7 = param_1[0x12e];
    uVar9 = param_1[0x12f];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a6a2c:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a6a2c;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x12d] = plVar11;
  param_1[0x12e] = uVar14;
  param_1[0x12f] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277a40;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x130];
  param_1[0x130] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x131];
    uVar7 = param_1[0x132];
    uVar9 = param_1[0x133];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a6c00:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a6c00;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x131] = plVar11;
  param_1[0x132] = uVar14;
  param_1[0x133] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277a60;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x134];
  param_1[0x134] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x135];
    uVar7 = param_1[0x136];
    uVar9 = param_1[0x137];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a6dd4:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a6dd4;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x135] = plVar11;
  param_1[0x136] = uVar14;
  param_1[0x137] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277148;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x138];
  param_1[0x138] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x139];
    uVar7 = param_1[0x13a];
    uVar9 = param_1[0x13b];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a6fa8:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a6fa8;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x139] = plVar11;
  param_1[0x13a] = uVar14;
  param_1[0x13b] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277a80;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x13c];
  param_1[0x13c] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x13d];
    uVar7 = param_1[0x13e];
    uVar9 = param_1[0x13f];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a717c:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a717c;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x13d] = plVar11;
  param_1[0x13e] = uVar14;
  param_1[0x13f] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277aa0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x140];
  param_1[0x140] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x141];
    uVar7 = param_1[0x142];
    uVar9 = param_1[0x143];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a7350:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a7350;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x141] = plVar11;
  param_1[0x142] = uVar14;
  param_1[0x143] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277ac0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x144];
  param_1[0x144] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x145];
    uVar7 = param_1[0x146];
    uVar9 = param_1[0x147];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a7524:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a7524;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x145] = plVar11;
  param_1[0x146] = uVar14;
  param_1[0x147] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277ae0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x148];
  param_1[0x148] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x149];
    uVar7 = param_1[0x14a];
    uVar9 = param_1[0x14b];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a76f8:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a76f8;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x149] = plVar11;
  param_1[0x14a] = uVar14;
  param_1[0x14b] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277b00;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x14c];
  param_1[0x14c] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x14d];
    uVar7 = param_1[0x14e];
    uVar9 = param_1[0x14f];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a78cc:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a78cc;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x14d] = plVar11;
  param_1[0x14e] = uVar14;
  param_1[0x14f] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277b20;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x150];
  param_1[0x150] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x151];
    uVar7 = param_1[0x152];
    uVar9 = param_1[0x153];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a7aa0:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a7aa0;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x151] = plVar11;
  param_1[0x152] = uVar14;
  param_1[0x153] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277b40;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x154];
  param_1[0x154] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x155];
    uVar7 = param_1[0x156];
    uVar9 = param_1[0x157];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a7c74:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a7c74;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x155] = plVar11;
  param_1[0x156] = uVar14;
  param_1[0x157] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277b60;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x158];
  param_1[0x158] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x159];
    uVar7 = param_1[0x15a];
    uVar9 = param_1[0x15b];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a7e48:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a7e48;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x159] = plVar11;
  param_1[0x15a] = uVar14;
  param_1[0x15b] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277b80;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x15c];
  param_1[0x15c] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x15d];
    uVar7 = param_1[0x15e];
    uVar9 = param_1[0x15f];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a801c:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a801c;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x15d] = plVar11;
  param_1[0x15e] = uVar14;
  param_1[0x15f] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277ba0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x160];
  param_1[0x160] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x161];
    uVar7 = param_1[0x162];
    uVar9 = param_1[0x163];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a81f0:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a81f0;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x161] = plVar11;
  param_1[0x162] = uVar14;
  param_1[0x163] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277bc0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x164];
  param_1[0x164] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x165];
    uVar7 = param_1[0x166];
    uVar9 = param_1[0x167];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a83c4:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a83c4;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x165] = plVar11;
  param_1[0x166] = uVar14;
  param_1[0x167] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277788;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x168];
  param_1[0x168] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x169];
    uVar7 = param_1[0x16a];
    uVar9 = param_1[0x16b];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a8598:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a8598;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x169] = plVar11;
  param_1[0x16a] = uVar14;
  param_1[0x16b] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277be0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x16c];
  param_1[0x16c] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x16d];
    uVar7 = param_1[0x16e];
    uVar9 = param_1[0x16f];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a876c:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a876c;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x16d] = plVar11;
  param_1[0x16e] = uVar14;
  param_1[0x16f] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277c00;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x170];
  param_1[0x170] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x171];
    uVar7 = param_1[0x172];
    uVar9 = param_1[0x173];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a8940:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a8940;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x171] = plVar11;
  param_1[0x172] = uVar14;
  param_1[0x173] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277c20;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x174];
  param_1[0x174] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x175];
    uVar7 = param_1[0x176];
    uVar9 = param_1[0x177];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a8b14:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a8b14;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x175] = plVar11;
  param_1[0x176] = uVar14;
  param_1[0x177] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277c40;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x178];
  param_1[0x178] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x179];
    uVar7 = param_1[0x17a];
    uVar9 = param_1[0x17b];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a8ce8:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a8ce8;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x179] = plVar11;
  param_1[0x17a] = uVar14;
  param_1[0x17b] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277c60;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x17c];
  param_1[0x17c] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x17d];
    uVar7 = param_1[0x17e];
    uVar9 = param_1[0x17f];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a8ebc:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a8ebc;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x17d] = plVar11;
  param_1[0x17e] = uVar14;
  param_1[0x17f] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277c80;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x180];
  param_1[0x180] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x181];
    uVar7 = param_1[0x182];
    uVar9 = param_1[0x183];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a9090:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a9090;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x181] = plVar11;
  param_1[0x182] = uVar14;
  param_1[0x183] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277ca0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x184];
  param_1[0x184] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x185];
    uVar7 = param_1[0x186];
    uVar9 = param_1[0x187];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a9264:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a9264;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x185] = plVar11;
  param_1[0x186] = uVar14;
  param_1[0x187] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042778a8;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x188];
  param_1[0x188] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x189];
    uVar7 = param_1[0x18a];
    uVar9 = param_1[0x18b];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a9438:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a9438;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x189] = plVar11;
  param_1[0x18a] = uVar14;
  param_1[0x18b] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277cc0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x18c];
  param_1[0x18c] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x18d];
    uVar7 = param_1[0x18e];
    uVar9 = param_1[399];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a960c:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a960c;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x18d] = plVar11;
  param_1[0x18e] = uVar14;
  param_1[399] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277ce0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[400];
  param_1[400] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x191];
    uVar7 = param_1[0x192];
    uVar9 = param_1[0x193];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a97e0:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a97e0;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x191] = plVar11;
  param_1[0x192] = uVar14;
  param_1[0x193] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277d00;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x194];
  param_1[0x194] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x195];
    uVar7 = param_1[0x196];
    uVar9 = param_1[0x197];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a99b4:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a99b4;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x195] = plVar11;
  param_1[0x196] = uVar14;
  param_1[0x197] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277d20;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x198];
  param_1[0x198] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x199];
    uVar7 = param_1[0x19a];
    uVar9 = param_1[0x19b];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a9b88:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a9b88;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x199] = plVar11;
  param_1[0x19a] = uVar14;
  param_1[0x19b] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277d40;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x19c];
  param_1[0x19c] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x19d];
    uVar7 = param_1[0x19e];
    uVar9 = param_1[0x19f];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a9d5c:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a9d5c;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x19d] = plVar11;
  param_1[0x19e] = uVar14;
  param_1[0x19f] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277d60;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x1a0];
  param_1[0x1a0] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x1a1];
    uVar7 = param_1[0x1a2];
    uVar9 = param_1[0x1a3];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029a9f30:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029a9f30;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x1a1] = plVar11;
  param_1[0x1a2] = uVar14;
  param_1[0x1a3] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277d80;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x1a4];
  param_1[0x1a4] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x1a5];
    uVar7 = param_1[0x1a6];
    uVar9 = param_1[0x1a7];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029aa104:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029aa104;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x1a5] = plVar11;
  param_1[0x1a6] = uVar14;
  param_1[0x1a7] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277da0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x1a8];
  param_1[0x1a8] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x1a9];
    uVar7 = param_1[0x1aa];
    uVar9 = param_1[0x1ab];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029aa2d8:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029aa2d8;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x1a9] = plVar11;
  param_1[0x1aa] = uVar14;
  param_1[0x1ab] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277dc0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x1ac];
  param_1[0x1ac] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x1ad];
    uVar7 = param_1[0x1ae];
    uVar9 = param_1[0x1af];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029aa4ac:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029aa4ac;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x1ad] = plVar11;
  param_1[0x1ae] = uVar14;
  param_1[0x1af] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277de0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x1b0];
  param_1[0x1b0] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x1b1];
    uVar7 = param_1[0x1b2];
    uVar9 = param_1[0x1b3];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029aa680:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029aa680;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x1b1] = plVar11;
  param_1[0x1b2] = uVar14;
  param_1[0x1b3] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277e00;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x1b4];
  param_1[0x1b4] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x1b5];
    uVar7 = param_1[0x1b6];
    uVar9 = param_1[0x1b7];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029aa854:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029aa854;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x1b5] = plVar11;
  param_1[0x1b6] = uVar14;
  param_1[0x1b7] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277e20;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x1b8];
  param_1[0x1b8] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x1b9];
    uVar7 = param_1[0x1ba];
    uVar9 = param_1[0x1bb];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029aaa28:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029aaa28;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x1b9] = plVar11;
  param_1[0x1ba] = uVar14;
  param_1[0x1bb] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277e40;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x1bc];
  param_1[0x1bc] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x1bd];
    uVar7 = param_1[0x1be];
    uVar9 = param_1[0x1bf];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029aabfc:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029aabfc;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x1bd] = plVar11;
  param_1[0x1be] = uVar14;
  param_1[0x1bf] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277e60;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x1c0];
  param_1[0x1c0] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x1c1];
    uVar7 = param_1[0x1c2];
    uVar9 = param_1[0x1c3];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029aadd0:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029aadd0;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x1c1] = plVar11;
  param_1[0x1c2] = uVar14;
  param_1[0x1c3] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277e80;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x1c4];
  param_1[0x1c4] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x1c5];
    uVar7 = param_1[0x1c6];
    uVar9 = param_1[0x1c7];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029aafa4:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029aafa4;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x1c5] = plVar11;
  param_1[0x1c6] = uVar14;
  param_1[0x1c7] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277ea0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x1c8];
  param_1[0x1c8] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x1c9];
    uVar7 = param_1[0x1ca];
    uVar9 = param_1[0x1cb];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029ab178:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029ab178;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x1c9] = plVar11;
  param_1[0x1ca] = uVar14;
  param_1[0x1cb] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277ec0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x1cc];
  param_1[0x1cc] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x1cd];
    uVar7 = param_1[0x1ce];
    uVar9 = param_1[0x1cf];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029ab34c:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029ab34c;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x1cd] = plVar11;
  param_1[0x1ce] = uVar14;
  param_1[0x1cf] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277ee0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x1d0];
  param_1[0x1d0] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x1d1];
    uVar7 = param_1[0x1d2];
    uVar9 = param_1[0x1d3];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029ab520:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029ab520;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x1d1] = plVar11;
  param_1[0x1d2] = uVar14;
  param_1[0x1d3] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042785b0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x1d4];
  param_1[0x1d4] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x1d5];
    uVar7 = param_1[0x1d6];
    uVar9 = param_1[0x1d7];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029ab6f4:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029ab6f4;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x1d5] = plVar11;
  param_1[0x1d6] = uVar14;
  param_1[0x1d7] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277f00;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x1d8];
  param_1[0x1d8] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x1d9];
    uVar7 = param_1[0x1da];
    uVar9 = param_1[0x1db];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029ab8c8:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029ab8c8;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x1d9] = plVar11;
  param_1[0x1da] = uVar14;
  param_1[0x1db] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277f20;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x1dc];
  param_1[0x1dc] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x1dd];
    uVar7 = param_1[0x1de];
    uVar9 = param_1[0x1df];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029aba9c:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029aba9c;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x1dd] = plVar11;
  param_1[0x1de] = uVar14;
  param_1[0x1df] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277f40;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x1e0];
  param_1[0x1e0] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x1e1];
    uVar7 = param_1[0x1e2];
    uVar9 = param_1[0x1e3];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029abc70:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029abc70;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x1e1] = plVar11;
  param_1[0x1e2] = uVar14;
  param_1[0x1e3] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277f60;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x1e4];
  param_1[0x1e4] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x1e5];
    uVar7 = param_1[0x1e6];
    uVar9 = param_1[0x1e7];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029abe44:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029abe44;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x1e5] = plVar11;
  param_1[0x1e6] = uVar14;
  param_1[0x1e7] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278690;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x1e8];
  param_1[0x1e8] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x1e9];
    uVar7 = param_1[0x1ea];
    uVar9 = param_1[0x1eb];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029ac018:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029ac018;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x1e9] = plVar11;
  param_1[0x1ea] = uVar14;
  param_1[0x1eb] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277f80;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x1ec];
  param_1[0x1ec] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x1ed];
    uVar7 = param_1[0x1ee];
    uVar9 = param_1[0x1ef];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029ac1ec:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029ac1ec;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x1ed] = plVar11;
  param_1[0x1ee] = uVar14;
  param_1[0x1ef] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277fa0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x1f0];
  param_1[0x1f0] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x1f1];
    uVar7 = param_1[0x1f2];
    uVar9 = param_1[499];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029ac3c0:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029ac3c0;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x1f1] = plVar11;
  param_1[0x1f2] = uVar14;
  param_1[499] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277fc0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[500];
  param_1[500] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x1f5];
    uVar7 = param_1[0x1f6];
    uVar9 = param_1[0x1f7];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029ac594:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029ac594;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x1f5] = plVar11;
  param_1[0x1f6] = uVar14;
  param_1[0x1f7] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277fe0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x1f8];
  param_1[0x1f8] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x1f9];
    uVar7 = param_1[0x1fa];
    uVar9 = param_1[0x1fb];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029ac768:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029ac768;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x1f9] = plVar11;
  param_1[0x1fa] = uVar14;
  param_1[0x1fb] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278000;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x1fc];
  param_1[0x1fc] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x1fd];
    uVar7 = param_1[0x1fe];
    uVar9 = param_1[0x1ff];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029ac93c:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029ac93c;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x1fd] = plVar11;
  param_1[0x1fe] = uVar14;
  param_1[0x1ff] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278020;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x200];
  param_1[0x200] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x201];
    uVar7 = param_1[0x202];
    uVar9 = param_1[0x203];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029acb10:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029acb10;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x201] = plVar11;
  param_1[0x202] = uVar14;
  param_1[0x203] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278040;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x204];
  param_1[0x204] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x205];
    uVar7 = param_1[0x206];
    uVar9 = param_1[0x207];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029acce4:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029acce4;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x205] = plVar11;
  param_1[0x206] = uVar14;
  param_1[0x207] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278060;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x208];
  param_1[0x208] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x209];
    uVar7 = param_1[0x20a];
    uVar9 = param_1[0x20b];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029aceb8:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029aceb8;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x209] = plVar11;
  param_1[0x20a] = uVar14;
  param_1[0x20b] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278080;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x20c];
  param_1[0x20c] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x20d];
    uVar7 = param_1[0x20e];
    uVar9 = param_1[0x20f];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029ad08c:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029ad08c;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x20d] = plVar11;
  param_1[0x20e] = uVar14;
  param_1[0x20f] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042780a0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x210];
  param_1[0x210] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x211];
    uVar7 = param_1[0x212];
    uVar9 = param_1[0x213];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029ad260:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029ad260;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x211] = plVar11;
  param_1[0x212] = uVar14;
  param_1[0x213] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042780c0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x214];
  param_1[0x214] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x215];
    uVar7 = param_1[0x216];
    uVar9 = param_1[0x217];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029ad434:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029ad434;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x215] = plVar11;
  param_1[0x216] = uVar14;
  param_1[0x217] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042780e0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x218];
  param_1[0x218] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x219];
    uVar7 = param_1[0x21a];
    uVar9 = param_1[0x21b];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029ad608:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029ad608;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x219] = plVar11;
  param_1[0x21a] = uVar14;
  param_1[0x21b] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278100;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x21c];
  param_1[0x21c] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x21d];
    uVar7 = param_1[0x21e];
    uVar9 = param_1[0x21f];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029ad7dc:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029ad7dc;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x21d] = plVar11;
  param_1[0x21e] = uVar14;
  param_1[0x21f] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278120;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x220];
  param_1[0x220] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x221];
    uVar7 = param_1[0x222];
    uVar9 = param_1[0x223];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029ad9b0:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029ad9b0;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x221] = plVar11;
  param_1[0x222] = uVar14;
  param_1[0x223] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042787b0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x224];
  param_1[0x224] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x225];
    uVar7 = param_1[0x226];
    uVar9 = param_1[0x227];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029adb84:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029adb84;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x225] = plVar11;
  param_1[0x226] = uVar14;
  param_1[0x227] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042787d0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x228];
  param_1[0x228] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x229];
    uVar7 = param_1[0x22a];
    uVar9 = param_1[0x22b];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029add58:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029add58;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x229] = plVar11;
  param_1[0x22a] = uVar14;
  param_1[0x22b] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042787f0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x22c];
  param_1[0x22c] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x22d];
    uVar7 = param_1[0x22e];
    uVar9 = param_1[0x22f];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029adf2c:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029adf2c;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x22d] = plVar11;
  param_1[0x22e] = uVar14;
  param_1[0x22f] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278810;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x230];
  param_1[0x230] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x231];
    uVar7 = param_1[0x232];
    uVar9 = param_1[0x233];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029ae100:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029ae100;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x231] = plVar11;
  param_1[0x232] = uVar14;
  param_1[0x233] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278140;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x234];
  param_1[0x234] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x235];
    uVar7 = param_1[0x236];
    uVar9 = param_1[0x237];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029ae2d4:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029ae2d4;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x235] = plVar11;
  param_1[0x236] = uVar14;
  param_1[0x237] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278160;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x238];
  param_1[0x238] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x239];
    uVar7 = param_1[0x23a];
    uVar9 = param_1[0x23b];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029ae4a8:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029ae4a8;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x239] = plVar11;
  param_1[0x23a] = uVar14;
  param_1[0x23b] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278180;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x23c];
  param_1[0x23c] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x23d];
    uVar7 = param_1[0x23e];
    uVar9 = param_1[0x23f];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029ae67c:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029ae67c;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x23d] = plVar11;
  param_1[0x23e] = uVar14;
  param_1[0x23f] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042781a0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x240];
  param_1[0x240] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x241];
    uVar7 = param_1[0x242];
    uVar9 = param_1[0x243];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029ae850:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029ae850;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x241] = plVar11;
  param_1[0x242] = uVar14;
  param_1[0x243] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042781c0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x244];
  param_1[0x244] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x245];
    uVar7 = param_1[0x246];
    uVar9 = param_1[0x247];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029aea24:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029aea24;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x245] = plVar11;
  param_1[0x246] = uVar14;
  param_1[0x247] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042781e0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x248];
  param_1[0x248] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x249];
    uVar7 = param_1[0x24a];
    uVar9 = param_1[0x24b];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029aebf8:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029aebf8;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x249] = plVar11;
  param_1[0x24a] = uVar14;
  param_1[0x24b] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278200;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x24c];
  param_1[0x24c] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x24d];
    uVar7 = param_1[0x24e];
    uVar9 = param_1[0x24f];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029aedcc:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029aedcc;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x24d] = plVar11;
  param_1[0x24e] = uVar14;
  param_1[0x24f] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278220;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x250];
  param_1[0x250] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x251];
    uVar7 = param_1[0x252];
    uVar9 = param_1[0x253];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029aefa0:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029aefa0;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x251] = plVar11;
  param_1[0x252] = uVar14;
  param_1[0x253] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278240;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x254];
  param_1[0x254] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x255];
    uVar7 = param_1[0x256];
    uVar9 = param_1[599];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029af174:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029af174;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x255] = plVar11;
  param_1[0x256] = uVar14;
  param_1[599] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278280;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[600];
  param_1[600] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x259];
    uVar7 = param_1[0x25a];
    uVar9 = param_1[0x25b];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029af348:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029af348;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x259] = plVar11;
  param_1[0x25a] = uVar14;
  param_1[0x25b] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042782a0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x25c];
  param_1[0x25c] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x25d];
    uVar7 = param_1[0x25e];
    uVar9 = param_1[0x25f];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029af51c:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029af51c;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x25d] = plVar11;
  param_1[0x25e] = uVar14;
  param_1[0x25f] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278ad0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x260];
  param_1[0x260] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x261];
    uVar7 = param_1[0x262];
    uVar9 = param_1[0x263];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029af6f0:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029af6f0;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x261] = plVar11;
  param_1[0x262] = uVar14;
  param_1[0x263] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278d68;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x264];
  param_1[0x264] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x265];
    uVar7 = param_1[0x266];
    uVar9 = param_1[0x267];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029af8c4:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029af8c4;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x265] = plVar11;
  param_1[0x266] = uVar14;
  param_1[0x267] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042782c0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x268];
  param_1[0x268] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x269];
    uVar7 = param_1[0x26a];
    uVar9 = param_1[0x26b];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029afa98:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029afa98;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x269] = plVar11;
  param_1[0x26a] = uVar14;
  param_1[0x26b] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042782e0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x26c];
  param_1[0x26c] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x26d];
    uVar7 = param_1[0x26e];
    uVar9 = param_1[0x26f];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029afc6c:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029afc6c;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x26d] = plVar11;
  param_1[0x26e] = uVar14;
  param_1[0x26f] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278330;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x270];
  param_1[0x270] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x271];
    uVar7 = param_1[0x272];
    uVar9 = param_1[0x273];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029afe40:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029afe40;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x271] = plVar11;
  param_1[0x272] = uVar14;
  param_1[0x273] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278350;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x274];
  param_1[0x274] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x275];
    uVar7 = param_1[0x276];
    uVar9 = param_1[0x277];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b0014:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b0014;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x275] = plVar11;
  param_1[0x276] = uVar14;
  param_1[0x277] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278370;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x278];
  param_1[0x278] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x279];
    uVar7 = param_1[0x27a];
    uVar9 = param_1[0x27b];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b01e8:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b01e8;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x279] = plVar11;
  param_1[0x27a] = uVar14;
  param_1[0x27b] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278390;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x27c];
  param_1[0x27c] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x27d];
    uVar7 = param_1[0x27e];
    uVar9 = param_1[0x27f];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b03bc:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b03bc;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x27d] = plVar11;
  param_1[0x27e] = uVar14;
  param_1[0x27f] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042783b0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x280];
  param_1[0x280] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x281];
    uVar7 = param_1[0x282];
    uVar9 = param_1[0x283];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b0590:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b0590;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x281] = plVar11;
  param_1[0x282] = uVar14;
  param_1[0x283] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042783d0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x284];
  param_1[0x284] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x285];
    uVar7 = param_1[0x286];
    uVar9 = param_1[0x287];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b0764:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b0764;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x285] = plVar11;
  param_1[0x286] = uVar14;
  param_1[0x287] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042783f0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x288];
  param_1[0x288] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x289];
    uVar7 = param_1[0x28a];
    uVar9 = param_1[0x28b];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b0938:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b0938;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x289] = plVar11;
  param_1[0x28a] = uVar14;
  param_1[0x28b] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278410;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x28c];
  param_1[0x28c] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x28d];
    uVar7 = param_1[0x28e];
    uVar9 = param_1[0x28f];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b0b0c:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b0b0c;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x28d] = plVar11;
  param_1[0x28e] = uVar14;
  param_1[0x28f] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278430;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x290];
  param_1[0x290] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x291];
    uVar7 = param_1[0x292];
    uVar9 = param_1[0x293];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b0ce0:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b0ce0;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x291] = plVar11;
  param_1[0x292] = uVar14;
  param_1[0x293] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278450;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x294];
  param_1[0x294] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x295];
    uVar7 = param_1[0x296];
    uVar9 = param_1[0x297];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b0eb4:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b0eb4;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x295] = plVar11;
  param_1[0x296] = uVar14;
  param_1[0x297] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278470;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x298];
  param_1[0x298] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x299];
    uVar7 = param_1[0x29a];
    uVar9 = param_1[0x29b];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b1088:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b1088;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x299] = plVar11;
  param_1[0x29a] = uVar14;
  param_1[0x29b] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278490;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x29c];
  param_1[0x29c] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x29d];
    uVar7 = param_1[0x29e];
    uVar9 = param_1[0x29f];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b125c:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b125c;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x29d] = plVar11;
  param_1[0x29e] = uVar14;
  param_1[0x29f] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042784b0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x2a0];
  param_1[0x2a0] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x2a1];
    uVar7 = param_1[0x2a2];
    uVar9 = param_1[0x2a3];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b1430:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b1430;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x2a1] = plVar11;
  param_1[0x2a2] = uVar14;
  param_1[0x2a3] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042784d0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x2a4];
  param_1[0x2a4] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x2a5];
    uVar7 = param_1[0x2a6];
    uVar9 = param_1[0x2a7];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b1604:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b1604;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x2a5] = plVar11;
  param_1[0x2a6] = uVar14;
  param_1[0x2a7] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042784f0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x2a8];
  param_1[0x2a8] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x2a9];
    uVar7 = param_1[0x2aa];
    uVar9 = param_1[0x2ab];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b17d8:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b17d8;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x2a9] = plVar11;
  param_1[0x2aa] = uVar14;
  param_1[0x2ab] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278510;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x2ac];
  param_1[0x2ac] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x2ad];
    uVar7 = param_1[0x2ae];
    uVar9 = param_1[0x2af];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b19ac:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b19ac;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x2ad] = plVar11;
  param_1[0x2ae] = uVar14;
  param_1[0x2af] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278530;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x2b0];
  param_1[0x2b0] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x2b1];
    uVar7 = param_1[0x2b2];
    uVar9 = param_1[0x2b3];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b1b80:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b1b80;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x2b1] = plVar11;
  param_1[0x2b2] = uVar14;
  param_1[0x2b3] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278570;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x2b4];
  param_1[0x2b4] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x2b5];
    uVar7 = param_1[0x2b6];
    uVar9 = param_1[0x2b7];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b1d54:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b1d54;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x2b5] = plVar11;
  param_1[0x2b6] = uVar14;
  param_1[0x2b7] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278590;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x2b8];
  param_1[0x2b8] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x2b9];
    uVar7 = param_1[0x2ba];
    uVar9 = param_1[699];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b1f28:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b1f28;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x2b9] = plVar11;
  param_1[0x2ba] = uVar14;
  param_1[699] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042785d0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[700];
  param_1[700] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x2bd];
    uVar7 = param_1[0x2be];
    uVar9 = param_1[0x2bf];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b20fc:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b20fc;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x2bd] = plVar11;
  param_1[0x2be] = uVar14;
  param_1[0x2bf] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04277668;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x2c0];
  param_1[0x2c0] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x2c1];
    uVar7 = param_1[0x2c2];
    uVar9 = param_1[0x2c3];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b22d0:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b22d0;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x2c1] = plVar11;
  param_1[0x2c2] = uVar14;
  param_1[0x2c3] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042785f0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x2c4];
  param_1[0x2c4] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x2c5];
    uVar7 = param_1[0x2c6];
    uVar9 = param_1[0x2c7];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b24a4:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b24a4;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x2c5] = plVar11;
  param_1[0x2c6] = uVar14;
  param_1[0x2c7] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278610;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x2c8];
  param_1[0x2c8] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x2c9];
    uVar7 = param_1[0x2ca];
    uVar9 = param_1[0x2cb];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b2678:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b2678;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x2c9] = plVar11;
  param_1[0x2ca] = uVar14;
  param_1[0x2cb] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278630;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x2cc];
  param_1[0x2cc] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x2cd];
    uVar7 = param_1[0x2ce];
    uVar9 = param_1[0x2cf];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b284c:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b284c;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x2cd] = plVar11;
  param_1[0x2ce] = uVar14;
  param_1[0x2cf] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278650;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x2d0];
  param_1[0x2d0] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x2d1];
    uVar7 = param_1[0x2d2];
    uVar9 = param_1[0x2d3];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b2a20:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b2a20;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x2d1] = plVar11;
  param_1[0x2d2] = uVar14;
  param_1[0x2d3] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278670;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x2d4];
  param_1[0x2d4] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x2d5];
    uVar7 = param_1[0x2d6];
    uVar9 = param_1[0x2d7];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b2bf4:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b2bf4;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x2d5] = plVar11;
  param_1[0x2d6] = uVar14;
  param_1[0x2d7] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042786b0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x2d8];
  param_1[0x2d8] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x2d9];
    uVar7 = param_1[0x2da];
    uVar9 = param_1[0x2db];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b2dc8:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b2dc8;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x2d9] = plVar11;
  param_1[0x2da] = uVar14;
  param_1[0x2db] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042786d0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x2dc];
  param_1[0x2dc] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x2dd];
    uVar7 = param_1[0x2de];
    uVar9 = param_1[0x2df];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b2f9c:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b2f9c;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x2dd] = plVar11;
  param_1[0x2de] = uVar14;
  param_1[0x2df] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042786f0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x2e0];
  param_1[0x2e0] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x2e1];
    uVar7 = param_1[0x2e2];
    uVar9 = param_1[0x2e3];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b3170:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b3170;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x2e1] = plVar11;
  param_1[0x2e2] = uVar14;
  param_1[0x2e3] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278710;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x2e4];
  param_1[0x2e4] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x2e5];
    uVar7 = param_1[0x2e6];
    uVar9 = param_1[0x2e7];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b3344:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b3344;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x2e5] = plVar11;
  param_1[0x2e6] = uVar14;
  param_1[0x2e7] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278730;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x2e8];
  param_1[0x2e8] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x2e9];
    uVar7 = param_1[0x2ea];
    uVar9 = param_1[0x2eb];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b3518:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b3518;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x2e9] = plVar11;
  param_1[0x2ea] = uVar14;
  param_1[0x2eb] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278750;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x2ec];
  param_1[0x2ec] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x2ed];
    uVar7 = param_1[0x2ee];
    uVar9 = param_1[0x2ef];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b36ec:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b36ec;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x2ed] = plVar11;
  param_1[0x2ee] = uVar14;
  param_1[0x2ef] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278790;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x2f0];
  param_1[0x2f0] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x2f1];
    uVar7 = param_1[0x2f2];
    uVar9 = param_1[0x2f3];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b38c0:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b38c0;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x2f1] = plVar11;
  param_1[0x2f2] = uVar14;
  param_1[0x2f3] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278850;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x2f4];
  param_1[0x2f4] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x2f5];
    uVar7 = param_1[0x2f6];
    uVar9 = param_1[0x2f7];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b3a94:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b3a94;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x2f5] = plVar11;
  param_1[0x2f6] = uVar14;
  param_1[0x2f7] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278830;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x2f8];
  param_1[0x2f8] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x2f9];
    uVar7 = param_1[0x2fa];
    uVar9 = param_1[0x2fb];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b3c68:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b3c68;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x2f9] = plVar11;
  param_1[0x2fa] = uVar14;
  param_1[0x2fb] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042788f0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x2fc];
  param_1[0x2fc] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x2fd];
    uVar7 = param_1[0x2fe];
    uVar9 = param_1[0x2ff];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b3e3c:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b3e3c;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x2fd] = plVar11;
  param_1[0x2fe] = uVar14;
  param_1[0x2ff] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042788d0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x300];
  param_1[0x300] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x301];
    uVar7 = param_1[0x302];
    uVar9 = param_1[0x303];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b4010:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b4010;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x301] = plVar11;
  param_1[0x302] = uVar14;
  param_1[0x303] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278910;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x304];
  param_1[0x304] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x305];
    uVar7 = param_1[0x306];
    uVar9 = param_1[0x307];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b41e4:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b41e4;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x305] = plVar11;
  param_1[0x306] = uVar14;
  param_1[0x307] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278950;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x308];
  param_1[0x308] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x309];
    uVar7 = param_1[0x30a];
    uVar9 = param_1[0x30b];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b43b8:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b43b8;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x309] = plVar11;
  param_1[0x30a] = uVar14;
  param_1[0x30b] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278970;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x30c];
  param_1[0x30c] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x30d];
    uVar7 = param_1[0x30e];
    uVar9 = param_1[0x30f];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b458c:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b458c;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x30d] = plVar11;
  param_1[0x30e] = uVar14;
  param_1[0x30f] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278990;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x310];
  param_1[0x310] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x311];
    uVar7 = param_1[0x312];
    uVar9 = param_1[0x313];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b4760:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b4760;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x311] = plVar11;
  param_1[0x312] = uVar14;
  param_1[0x313] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042789b0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x314];
  param_1[0x314] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x315];
    uVar7 = param_1[0x316];
    uVar9 = param_1[0x317];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b4934:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b4934;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x315] = plVar11;
  param_1[0x316] = uVar14;
  param_1[0x317] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042789d0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x318];
  param_1[0x318] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x319];
    uVar7 = param_1[0x31a];
    uVar9 = param_1[0x31b];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b4b08:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b4b08;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x319] = plVar11;
  param_1[0x31a] = uVar14;
  param_1[0x31b] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042789f0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x31c];
  param_1[0x31c] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x31d];
    uVar7 = param_1[0x31e];
    uVar9 = param_1[799];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b4cdc:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b4cdc;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x31d] = plVar11;
  param_1[0x31e] = uVar14;
  param_1[799] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278a10;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[800];
  param_1[800] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x321];
    uVar7 = param_1[0x322];
    uVar9 = param_1[0x323];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b4eb0:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b4eb0;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x321] = plVar11;
  param_1[0x322] = uVar14;
  param_1[0x323] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278a30;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x324];
  param_1[0x324] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x325];
    uVar7 = param_1[0x326];
    uVar9 = param_1[0x327];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b5084:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b5084;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x325] = plVar11;
  param_1[0x326] = uVar14;
  param_1[0x327] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278a50;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x328];
  param_1[0x328] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x329];
    uVar7 = param_1[0x32a];
    uVar9 = param_1[0x32b];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b5258:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b5258;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x329] = plVar11;
  param_1[0x32a] = uVar14;
  param_1[0x32b] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278a70;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x32c];
  param_1[0x32c] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x32d];
    uVar7 = param_1[0x32e];
    uVar9 = param_1[0x32f];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b542c:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b542c;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x32d] = plVar11;
  param_1[0x32e] = uVar14;
  param_1[0x32f] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278a90;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x330];
  param_1[0x330] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x331];
    uVar7 = param_1[0x332];
    uVar9 = param_1[0x333];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b5600:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b5600;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x331] = plVar11;
  param_1[0x332] = uVar14;
  param_1[0x333] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278ab0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x334];
  param_1[0x334] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x335];
    uVar7 = param_1[0x336];
    uVar9 = param_1[0x337];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b57d4:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b57d4;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x335] = plVar11;
  param_1[0x336] = uVar14;
  param_1[0x337] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278af0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x338];
  param_1[0x338] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x339];
    uVar7 = param_1[0x33a];
    uVar9 = param_1[0x33b];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b59a8:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b59a8;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x339] = plVar11;
  param_1[0x33a] = uVar14;
  param_1[0x33b] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278da0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x33c];
  param_1[0x33c] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x33d];
    uVar7 = param_1[0x33e];
    uVar9 = param_1[0x33f];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b5b7c:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b5b7c;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x33d] = plVar11;
  param_1[0x33e] = uVar14;
  param_1[0x33f] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278e00;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x340];
  param_1[0x340] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x341];
    uVar7 = param_1[0x342];
    uVar9 = param_1[0x343];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b5d50:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b5d50;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x341] = plVar11;
  param_1[0x342] = uVar14;
  param_1[0x343] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278e20;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x344];
  param_1[0x344] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x345];
    uVar7 = param_1[0x346];
    uVar9 = param_1[0x347];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b5f24:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b5f24;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x345] = plVar11;
  param_1[0x346] = uVar14;
  param_1[0x347] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278dc0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x348];
  param_1[0x348] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x349];
    uVar7 = param_1[0x34a];
    uVar9 = param_1[0x34b];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b60f8:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b60f8;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x349] = plVar11;
  param_1[0x34a] = uVar14;
  param_1[0x34b] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278e40;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x34c];
  param_1[0x34c] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x34d];
    uVar7 = param_1[0x34e];
    uVar9 = param_1[0x34f];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b62cc:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b62cc;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x34d] = plVar11;
  param_1[0x34e] = uVar14;
  param_1[0x34f] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278e60;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x350];
  param_1[0x350] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x351];
    uVar7 = param_1[0x352];
    uVar9 = param_1[0x353];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b64a0:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b64a0;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x351] = plVar11;
  param_1[0x352] = uVar14;
  param_1[0x353] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278fc0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x354];
  param_1[0x354] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x355];
    uVar7 = param_1[0x356];
    uVar9 = param_1[0x357];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b6674:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b6674;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x355] = plVar11;
  param_1[0x356] = uVar14;
  param_1[0x357] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278fe0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x358];
  param_1[0x358] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x359];
    uVar7 = param_1[0x35a];
    uVar9 = param_1[0x35b];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b6848:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b6848;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x359] = plVar11;
  param_1[0x35a] = uVar14;
  param_1[0x35b] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04279000;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x35c];
  param_1[0x35c] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x35d];
    uVar7 = param_1[0x35e];
    uVar9 = param_1[0x35f];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b6a1c:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b6a1c;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x35d] = plVar11;
  param_1[0x35e] = uVar14;
  param_1[0x35f] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04279020;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x360];
  param_1[0x360] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x361];
    uVar7 = param_1[0x362];
    uVar9 = param_1[0x363];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b6bf0:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b6bf0;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x361] = plVar11;
  param_1[0x362] = uVar14;
  param_1[0x363] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04279040;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x364];
  param_1[0x364] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x365];
    uVar7 = param_1[0x366];
    uVar9 = param_1[0x367];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b6dc4:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b6dc4;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x365] = plVar11;
  param_1[0x366] = uVar14;
  param_1[0x367] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04279060;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x368];
  param_1[0x368] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x369];
    uVar7 = param_1[0x36a];
    uVar9 = param_1[0x36b];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b6f98:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b6f98;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x369] = plVar11;
  param_1[0x36a] = uVar14;
  param_1[0x36b] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04279080;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x36c];
  param_1[0x36c] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x36d];
    uVar7 = param_1[0x36e];
    uVar9 = param_1[0x36f];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b716c:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b716c;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x36d] = plVar11;
  param_1[0x36e] = uVar14;
  param_1[0x36f] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042790c0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x370];
  param_1[0x370] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x371];
    uVar7 = param_1[0x372];
    uVar9 = param_1[0x373];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b7340:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b7340;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x371] = plVar11;
  param_1[0x372] = uVar14;
  param_1[0x373] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042790e0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x374];
  param_1[0x374] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x375];
    uVar7 = param_1[0x376];
    uVar9 = param_1[0x377];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b7514:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b7514;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x375] = plVar11;
  param_1[0x376] = uVar14;
  param_1[0x377] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04279100;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x378];
  param_1[0x378] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x379];
    uVar7 = param_1[0x37a];
    uVar9 = param_1[0x37b];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b76e8:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b76e8;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x379] = plVar11;
  param_1[0x37a] = uVar14;
  param_1[0x37b] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278ec0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x37c];
  param_1[0x37c] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x37d];
    uVar7 = param_1[0x37e];
    uVar9 = param_1[0x37f];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b78bc:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b78bc;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x37d] = plVar11;
  param_1[0x37e] = uVar14;
  param_1[0x37f] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_042790a0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x380];
  param_1[0x380] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x381];
    uVar7 = param_1[0x382];
    uVar9 = param_1[899];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b7a90:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b7a90;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x381] = plVar11;
  param_1[0x382] = uVar14;
  param_1[899] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278e80;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[900];
  param_1[900] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x385];
    uVar7 = param_1[0x386];
    uVar9 = param_1[0x387];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b7c64:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b7c64;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x385] = plVar11;
  param_1[0x386] = uVar14;
  param_1[0x387] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278ea0;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x388];
  param_1[0x388] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x389];
    uVar7 = param_1[0x38a];
    uVar9 = param_1[0x38b];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b7e38:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b7e38;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x389] = plVar11;
  param_1[0x38a] = uVar14;
  param_1[0x38b] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04279120;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x38c];
  param_1[0x38c] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x38d];
    uVar7 = param_1[0x38e];
    uVar9 = param_1[0x38f];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b800c:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b800c;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x38d] = plVar11;
  param_1[0x38e] = uVar14;
  param_1[0x38f] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04279140;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x390];
  param_1[0x390] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x391];
    uVar7 = param_1[0x392];
    uVar9 = param_1[0x393];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b81e0:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b81e0;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x391] = plVar11;
  param_1[0x392] = uVar14;
  param_1[0x393] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04279160;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x394];
  param_1[0x394] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x395];
    uVar7 = param_1[0x396];
    uVar9 = param_1[0x397];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b83b4:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b83b4;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x395] = plVar11;
  param_1[0x396] = uVar14;
  param_1[0x397] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029cc380;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278890;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = param_2;
  }
  puVar8 = (undefined8 *)param_1[0x398];
  param_1[0x398] = puVar3;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x399];
    uVar7 = param_1[0x39a];
    uVar9 = param_1[0x39b];
    uVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar5 & 1) == 0) {
LAB_029b8588:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar7,uVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b8588;
      FUN_02bcc824(plVar12,puVar8,uVar7,uVar9);
    }
    pbVar10 = PTR_DAT_04379520;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0x399] = plVar11;
  param_1[0x39a] = uVar14;
  param_1[0x39b] = uVar13;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (puVar3 == (undefined8 *)0x0) {
    param_2 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*pbVar10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_029cc380:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_029ce9d4(puVar3,param_3);
    *puVar3 = &PTR_LAB_04278870;
    uVar13 = 8;
    uVar14 = 0x68;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  puVar8 = (undefined8 *)param_1[0x39c];
  param_1[0x39c] = puVar3;
  if (puVar8 == (undefined8 *)0x0) goto LAB_029b87f4;
  FUN_02bcbe58(auStack_78,0);
  (**(code **)*puVar8)(puVar8);
  plVar11 = (long *)param_1[0x39d];
  uVar7 = param_1[0x39e];
  uVar9 = param_1[0x39f];
  uVar5 = (**(code **)(*plVar11 + 0xc0))(plVar11);
  if ((uVar5 & 1) == 0) {
LAB_029b8758:
    (**(code **)(*plVar11 + 0x18))(plVar11,puVar8,uVar7,uVar9);
  }
  else {
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029b8758;
    FUN_02bcc824(plVar11,puVar8,uVar7,uVar9);
  }
  if (*(char *)(lVar4 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar4 + 0x38d488) = 1;
    *(undefined8 *)(lVar4 + 0x38d478) = 0;
    *(undefined8 *)(lVar4 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
  *(int *)(lVar4 + 0x38d480) = iVar2;
  if (iVar2 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar4 + 0x38d484) = 0;
  }
LAB_029b87f4:
  param_1[0x39d] = param_2;
  param_1[0x39e] = uVar14;
  param_1[0x39f] = uVar13;
  return;
}


