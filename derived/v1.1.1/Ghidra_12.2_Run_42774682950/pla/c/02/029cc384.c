/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029cc384; name: FUN_029cc384
 */


void FUN_029cc384(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_78 [24];
  
  *param_1 = &PTR_FUN_042770e8;
  param_1[0x10] = 0;
  plVar11 = param_1 + 1;
  *plVar11 = 0;
  *(undefined1 *)((long)param_1 + 0xc4) = 0;
  param_1[0x19] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  plVar8 = (long *)*param_2;
  lVar4 = (**(code **)(*plVar8 + 0x10))(plVar8,0x1d0,8);
  if (lVar4 == 0) {
    plVar8 = (long *)0x0;
    uVar15 = 0;
    uVar14 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar3 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_029cd0e8;
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    FUN_02967528(lVar4);
    uVar14 = 8;
    uVar15 = 0x1d0;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  puVar9 = (undefined8 *)*plVar11;
  *plVar11 = lVar4;
  lVar4 = tpidr_el0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar9)(puVar9);
    plVar11 = (long *)param_1[2];
    uVar13 = param_1[3];
    uVar12 = param_1[4];
    uVar6 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar6 & 1) == 0) {
LAB_029cc500:
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar9,uVar13,uVar12);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029cc500;
      FUN_02bcc824(plVar11,puVar9,uVar13,uVar12);
    }
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar3 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar3;
    if (iVar3 == 0) {
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
  param_1[2] = plVar8;
  param_1[3] = uVar15;
  param_1[4] = uVar14;
  plVar8 = (long *)*param_2;
  puVar7 = (undefined1 *)(**(code **)(*plVar8 + 0x10))(plVar8,1,1);
  puVar1 = PTR_DAT_04379520;
  if (puVar7 == (undefined1 *)0x0) {
    plVar8 = (long *)0x0;
    uVar14 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar3 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_029cd0e8;
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    *puVar7 = 0;
    uVar14 = 1;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  lVar5 = param_1[5];
  param_1[5] = puVar7;
  if (lVar5 != 0) {
    FUN_02bcbe58(auStack_78,0);
    plVar11 = (long *)param_1[6];
    uVar15 = param_1[7];
    uVar13 = param_1[8];
    uVar6 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar6 & 1) == 0) {
LAB_029cc6a0:
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar5,uVar15,uVar13);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029cc6a0;
      FUN_02bcc824(plVar11,lVar5,uVar15,uVar13);
    }
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar3 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar3;
    if (iVar3 == 0) {
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
  param_1[6] = plVar8;
  param_1[7] = uVar14;
  param_1[8] = uVar14;
  plVar8 = (long *)*param_2;
  puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x10,8);
  if (puVar9 == (undefined8 *)0x0) {
    plVar8 = (long *)0x0;
    uVar15 = 0;
    uVar14 = 0;
  }
  else {
    if (((*puVar1 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar3 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_029cd0e8;
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    *puVar9 = &PTR_LAB_04277108;
    *(undefined4 *)(puVar9 + 1) = 0x5050505;
    *(undefined1 *)((long)puVar9 + 0xc) = 5;
    uVar14 = 8;
    uVar15 = 0x10;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  puVar10 = (undefined8 *)param_1[9];
  param_1[9] = puVar9;
  if (puVar10 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar10)(puVar10);
    plVar11 = (long *)param_1[10];
    uVar13 = param_1[0xb];
    uVar12 = param_1[0xc];
    uVar6 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar6 & 1) == 0) {
LAB_029cc860:
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar10,uVar13,uVar12);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029cc860;
      FUN_02bcc824(plVar11,puVar10,uVar13,uVar12);
    }
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar3 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar3;
    if (iVar3 == 0) {
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
  param_1[10] = plVar8;
  param_1[0xb] = uVar15;
  param_1[0xc] = uVar14;
  plVar8 = (long *)*param_2;
  puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x28,8);
  if (puVar9 == (undefined8 *)0x0) {
    plVar8 = (long *)0x0;
    uVar15 = 0;
    uVar14 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar3 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_029cd0e8:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    *puVar9 = &PTR_LAB_04277128;
    puVar9[1] = 0;
    puVar9[2] = 0;
    puVar9[3] = 0;
    *(undefined8 *)((long)puVar9 + 0x1e) = 0;
    uVar14 = 8;
    uVar15 = 0x28;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  puVar10 = (undefined8 *)param_1[0xd];
  param_1[0xd] = puVar9;
  if (puVar10 == (undefined8 *)0x0) goto LAB_029ccabc;
  FUN_02bcbe58(auStack_78,0);
  (**(code **)*puVar10)(puVar10);
  plVar11 = (long *)param_1[0xe];
  uVar13 = param_1[0xf];
  uVar12 = param_1[0x10];
  uVar6 = (**(code **)(*plVar11 + 0xc0))(plVar11);
  if ((uVar6 & 1) == 0) {
LAB_029cca20:
    (**(code **)(*plVar11 + 0x18))(plVar11,puVar10,uVar13,uVar12);
  }
  else {
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_029cca20;
    FUN_02bcc824(plVar11,puVar10,uVar13,uVar12);
  }
  if (*(char *)(lVar4 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar4 + 0x38d488) = 1;
    *(undefined8 *)(lVar4 + 0x38d478) = 0;
    *(undefined8 *)(lVar4 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar3 = *(int *)(lVar4 + 0x38d480) + -1;
  *(int *)(lVar4 + 0x38d480) = iVar3;
  if (iVar3 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar4 + 0x38d484) = 0;
  }
LAB_029ccabc:
  lVar4 = param_1[1];
  param_1[0xe] = plVar8;
  param_1[0xf] = uVar15;
  param_1[0x10] = uVar14;
  *(undefined4 *)(lVar4 + 10) = 0xffffffff;
  *(undefined2 *)(lVar4 + 0x14) = 0x61f;
  *(undefined1 *)(lVar4 + 0x1c8) = 0;
  *(undefined1 *)(lVar4 + 8) = 0;
  *(undefined4 *)(lVar4 + 0x10) = 0;
  *(undefined1 *)(lVar4 + 0x16) = 0;
  *(undefined4 *)(lVar4 + 0x18) = 0;
  *(undefined2 *)(lVar4 + 0x1c) = 0x606;
  *(undefined4 *)(lVar4 + 0x1e) = 0;
  *(undefined1 *)(lVar4 + 0x22) = 0;
  *(undefined2 *)(lVar4 + 0x24) = 0xffff;
  *(undefined8 *)(lVar4 + 0x26) = 0;
  *(undefined8 *)(lVar4 + 0x2e) = 0;
  *(undefined8 *)(lVar4 + 0x36) = 0;
  *(undefined8 *)(lVar4 + 0x3e) = 0;
  *(undefined1 *)param_1[5] = 0;
  lVar4 = param_1[9];
  *(undefined1 *)(lVar4 + 0xc) = 5;
  *(undefined4 *)(lVar4 + 8) = 0x5050505;
  lVar4 = param_1[0xd];
  *(undefined8 *)(lVar4 + 0x1e) = 0;
  *(undefined8 *)(lVar4 + 8) = 0;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  *(undefined8 *)(lVar4 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((long)param_1 + 0xbd) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  return;
}


