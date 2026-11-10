/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ba193c; name: FUN_02ba193c
 */


void FUN_02ba193c(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined4 *puVar15;
  long *plVar16;
  undefined1 auStack_78 [24];
  
  puVar3 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  puVar3 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar15 = (undefined4 *)PTR_DAT_04379528;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar6 == 0) {
    plVar12 = (long *)0x0;
  }
  else {
    if (*(long *)(lVar6 + 0x80) == 0) {
      plVar12 = (long *)0x0;
    }
    else {
      plVar12 = *(long **)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
    }
    puVar15 = (undefined4 *)PTR_DAT_04379528;
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_FUN_04286028;
  param_1[1] = (long)plVar12;
  param_1[9] = (long)&PTR_LAB_04286080;
  plVar9 = param_1 + 0xb;
  *plVar9 = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x1f;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x27] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((long)param_1 + 0x154) = 0;
  *(undefined4 *)((long)param_1 + 0x15c) = 0;
  *(undefined8 *)((long)param_1 + 0x144) = 0;
  *(undefined8 *)((long)param_1 + 0x14c) = 0;
  lVar6 = (**(code **)(*plVar12 + 0x10))(plVar12,0x6378,8);
  if (lVar6 == 0) {
    lVar7 = 0;
    lVar11 = 0;
    plVar16 = (long *)0x0;
  }
  else {
    if (((*puVar3 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar7 = nn::os::GetTlsValue(*puVar15);
    if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_02ba248c;
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar12;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    FUN_02b789ac(lVar6,plVar12);
    lVar11 = 8;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    lVar7 = 0x6378;
    plVar16 = plVar12;
  }
  lVar13 = *plVar9;
  *plVar9 = lVar6;
  lVar2 = tpidr_el0;
  if (lVar13 != 0) {
    FUN_02bcbe58(auStack_78,0);
    FUN_02b78ea8(lVar13);
    plVar1 = (long *)param_1[0xc];
    lVar6 = param_1[0xd];
    lVar14 = param_1[0xe];
    uVar8 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar8 & 1) == 0) {
LAB_02ba1b30:
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar13,lVar6,lVar14);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_02ba1b30;
      FUN_02bcc824(plVar1,lVar13,lVar6,lVar14);
    }
    puVar15 = (undefined4 *)PTR_DAT_04379528;
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar5 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar5;
    if (iVar5 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
    lVar6 = *plVar9;
  }
  param_1[0xc] = (long)plVar16;
  param_1[0xd] = lVar7;
  param_1[0xe] = lVar11;
  plVar9 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0xb0,8);
  if (plVar9 == (long *)0x0) {
    plVar16 = (long *)0x0;
    lVar7 = 0;
    lVar6 = 0;
  }
  else {
    if (((*puVar3 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      puVar15 = (undefined4 *)PTR_DAT_04379528;
      FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar11 = nn::os::GetTlsValue(*puVar15);
    if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_02ba248c;
    *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar12;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    *plVar9 = lVar6;
    plVar9[1] = 0;
    plVar9[2] = 0;
    plVar9[3] = (long)plVar12;
    *(undefined4 *)(plVar9 + 6) = 0;
    plVar9[7] = 0;
    plVar9[8] = (long)plVar12;
    lVar6 = 8;
    lVar7 = 0xb0;
    *(undefined4 *)(plVar9 + 0xb) = 0;
    plVar9[0xc] = 0;
    *(undefined4 *)(plVar9 + 0x14) = 0;
    plVar9[0xe] = 0;
    plVar9[0xf] = 0;
    plVar9[4] = 0x666666666666666;
    plVar9[5] = 0;
    plVar9[9] = 0x666666666666666;
    plVar9[10] = 0;
    *(undefined4 *)(plVar9 + 0xd) = 0x3f800000;
    plVar9[0x12] = 0x1fffffffffffffff;
    plVar9[0x13] = 0;
    *(undefined1 *)(plVar9 + 0x15) = 1;
    plVar9[0x10] = 0;
    plVar9[0x11] = (long)plVar12;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    plVar16 = plVar12;
  }
  lVar11 = param_1[0xf];
  param_1[0xf] = (long)plVar9;
  if (lVar11 != 0) {
    FUN_02bcbe58(auStack_78,0);
    FUN_02bb9bbc(lVar11);
    plVar9 = (long *)param_1[0x10];
    lVar13 = param_1[0x11];
    lVar14 = param_1[0x12];
    uVar8 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    if ((uVar8 & 1) == 0) {
LAB_02ba1d2c:
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar11,lVar13,lVar14);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_02ba1d2c;
      FUN_02bcc824(plVar9,lVar11,lVar13,lVar14);
    }
    puVar15 = (undefined4 *)PTR_DAT_04379528;
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar5 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar5;
    if (iVar5 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  param_1[0x10] = (long)plVar16;
  param_1[0x11] = lVar7;
  param_1[0x12] = lVar6;
  puVar10 = (undefined8 *)(**(code **)(*plVar12 + 0x10))(plVar12,0x158,8);
  if (puVar10 == (undefined8 *)0x0) {
    plVar12 = (long *)0x0;
    lVar7 = 0;
    lVar6 = 0;
  }
  else {
    if (((*puVar3 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar5 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar11 = nn::os::GetTlsValue(*puVar15);
    if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_02ba248c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar12;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    *puVar10 = param_1;
    *(undefined1 *)(puVar10 + 2) = 0;
    lVar6 = param_1[1];
    puVar10[6] = 0;
    puVar10[7] = lVar6;
    puVar10[4] = 0;
    puVar10[5] = 0;
    *(undefined4 *)(puVar10 + 10) = 0;
    puVar10[8] = 0xfffffffffffffff;
    puVar10[9] = 0;
    nn::os::InitializeLightEvent((long)puVar10 + 0x5c,0,1);
    puVar10[0xd] = 0;
    FUN_02bc0e6c(puVar10 + 0xe);
    puVar10[0x1f] = 0;
    puVar10[0x20] = 0;
    puVar10[0x1e] = 0;
    *(undefined4 *)(puVar10 + 0x1d) = 0;
    puVar10[0x15] = 0;
    puVar10[0x16] = 0;
    puVar10[0x17] = 0;
    puVar10[0x18] = 0;
    puVar10[0x19] = 0;
    puVar10[0x1a] = 0;
    puVar10[0x1b] = 0;
    puVar10[0x1c] = 0;
    nn::os::InitializeConditionVariable((ConditionVariableType *)(puVar10 + 0x21));
    nn::os::InitializeConditionVariable((ConditionVariableType *)(puVar10 + 0x22));
    nn::os::InitializeMutex((MutexType *)(puVar10 + 0x23),false,0);
    *(undefined4 *)(puVar10 + 0x27) = 0;
    lVar6 = 8;
    lVar7 = 0x158;
    *(undefined1 *)((long)puVar10 + 0x13c) = 0;
    puVar10[0x29] = 0;
    puVar10[0x2a] = 0;
    puVar10[1] = param_1[0xb];
    *(undefined4 *)(puVar10 + 0x28) = 0;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
  }
  lVar11 = param_1[0x13];
  param_1[0x13] = (long)puVar10;
  if (lVar11 == 0) goto LAB_02ba2000;
  FUN_02bcbe58(auStack_78,0);
  FUN_02bc0f5c(lVar11);
  plVar9 = (long *)param_1[0x14];
  lVar13 = param_1[0x15];
  lVar14 = param_1[0x16];
  uVar8 = (**(code **)(*plVar9 + 0xc0))(plVar9);
  if ((uVar8 & 1) == 0) {
LAB_02ba1f64:
    (**(code **)(*plVar9 + 0x18))(plVar9,lVar11,lVar13,lVar14);
  }
  else {
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_02ba1f64;
    FUN_02bcc824(plVar9,lVar11,lVar13,lVar14);
  }
  if (*(char *)(lVar2 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar2 + 0x38d488) = 1;
    *(undefined8 *)(lVar2 + 0x38d478) = 0;
    *(undefined8 *)(lVar2 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar5 = *(int *)(lVar2 + 0x38d480) + -1;
  *(int *)(lVar2 + 0x38d480) = iVar5;
  if (iVar5 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar2 + 0x38d484) = 0;
  }
LAB_02ba2000:
  param_1[0x14] = (long)plVar12;
  param_1[0x15] = lVar7;
  param_1[0x16] = lVar6;
  return;
}


