/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293f82c; name: FUN_0293f82c
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0293f82c(long *param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                 long *param_7,undefined8 param_8,undefined1 param_9,undefined1 param_10,
                 undefined1 param_11,long param_12)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined4 *puVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  undefined1 auStack_78 [24];
  
  puVar6 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar6 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if ((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) {
    plVar15 = (long *)0x0;
  }
  else {
    plVar15 = *(long **)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_LAB_04276520;
  param_1[1] = (long)plVar15;
  param_1[9] = (long)&PTR_LAB_04276558;
  param_1[0xf] = param_6;
  param_1[0xb] = param_2;
  param_1[0xc] = param_3;
  param_1[0xd] = param_4;
  param_1[0xe] = param_5;
  lVar8 = *param_7;
  param_1[0x10] = lVar8;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar15 = (long *)param_1[1];
  }
  plVar14 = param_1 + 0x11;
  *plVar14 = 0;
  param_1[0x15] = 0;
  plVar18 = param_1 + 0x14;
  *plVar18 = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  puVar5 = PTR_DAT_04379c50;
  *(undefined1 *)((long)param_1 + 0xf3) = param_11;
  param_1[0x18] = (long)(puVar5 + 0x10);
  param_1[0x19] = (long)&DAT_f4b17a579f18960;
  param_1[0x1a] = -0x7d5d4e8add6295a5;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)((long)param_1 + 0xf1) = param_9;
  *(undefined1 *)((long)param_1 + 0xf2) = param_10;
  *(undefined4 *)((long)param_1 + 0xf4) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0x2e;
  *(undefined4 *)((long)param_1 + 0x4fc) = 0;
  param_1[0xa0] = 0;
  *(undefined1 *)(param_1 + 0xa1) = 0;
  *(undefined4 *)((long)param_1 + 0x50c) = 0;
  param_1[0x1c] = (long)&LAB_029402d8;
  param_1[0x1d] = 0;
  memset((void *)((long)param_1 + 0xf9),0,0x401);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_029401dc:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar15;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  plVar9 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0xd0,8);
  if (plVar9 == (long *)0x0) {
    (**(code **)(*plVar15 + 0xb8))(plVar15);
    _DAT_000000c8 = 0;
    _DAT_000000c0 = 0;
    _DAT_000000b8 = 0;
    _DAT_000000b0 = 0;
    _DAT_000000a8 = 0;
    _DAT_000000a0 = 0;
    _DAT_00000098 = 0;
    _DAT_00000090 = 0;
    _DAT_00000088 = 0;
    _DAT_00000080 = 0;
    _DAT_00000078 = 0;
    _DAT_00000070 = 0;
    _DAT_00000068 = 0;
    _DAT_00000060 = 0;
    _DAT_00000058 = 0;
    _DAT_00000050 = 0;
    _DAT_00000048 = 0;
    _DAT_00000040 = 0;
    _DAT_00000038 = 0;
    _DAT_00000030 = 0;
    _DAT_00000028 = 0;
    _DAT_00000020 = 0;
    _DAT_00000018 = 0;
    uRam0000000000000000 = 0;
    _DAT_00000010 = 0;
    _DAT_00000008 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  plVar9[0x18] = 0;
  plVar9[0x19] = 0;
  plVar9[0x16] = 0;
  plVar9[0x17] = 0;
  plVar9[0x14] = 0;
  plVar9[0x15] = 0;
  plVar9[0x12] = 0;
  plVar9[0x13] = 0;
  plVar9[0x10] = 0;
  plVar9[0x11] = 0;
  plVar9[0xe] = 0;
  plVar9[0xf] = 0;
  plVar9[0xc] = 0;
  plVar9[0xd] = 0;
  plVar9[10] = 0;
  plVar9[0xb] = 0;
  plVar9[8] = 0;
  plVar9[9] = 0;
  *(undefined4 *)(plVar9 + 8) = 0;
  plVar9[6] = 0;
  plVar9[7] = 0;
  plVar9[7] = 0;
  *(undefined4 *)(plVar9 + 6) = 0;
  plVar9[4] = 0;
  plVar9[5] = 0;
  plVar9[2] = 0;
  plVar9[3] = 0;
  *plVar9 = (long)(puVar6 + 0x10);
  plVar9[1] = 0;
  plVar9[2] = 0;
  plVar9[3] = 0;
  plVar9[4] = 0;
  plVar9[5] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  plVar13 = plVar9 + 10;
  *(int *)plVar13 = 0;
  *plVar9 = (long)&DAT_04276588;
  plVar9[9] = (long)&PTR_LAB_042765c0;
  plVar9[0xb] = 0;
  plVar9[0xf] = 0;
  plVar9[0xc] = 0;
  plVar9[0xd] = 0;
  *(undefined4 *)((long)plVar9 + 0x6f) = 0;
  plVar9[0x14] = 0;
  plVar9[0x19] = 0;
  plVar9[0x12] = 0;
  *(undefined4 *)((long)plVar9 + 0x97) = 0;
  plVar9[0x17] = 0;
  *(undefined4 *)((long)plVar9 + 0xbf) = 0;
  plVar9[0x10] = 0;
  plVar9[0x11] = 0;
  plVar9[0x15] = 0;
  plVar9[0x16] = 0;
  plVar9[1] = (long)plVar15;
  plVar9[2] = (long)plVar9;
  plVar9[3] = 0xd0;
  plVar9[4] = 8;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar3) {
      *(int *)plVar13 = (int)*plVar13 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar15 = (long *)*plVar14;
  *plVar14 = 0;
  if (plVar15 != (long *)0x0) {
    plVar14 = plVar15 + 10;
    do {
      iVar7 = (int)*plVar14 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *(int *)plVar14 = iVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar15 + 0x10))();
    }
  }
  param_1[0x11] = (long)plVar9;
  *(undefined4 *)((long)plVar9 + 0x6f) = 0;
  plVar9[0xb] = 0;
  plVar9[0xc] = 0;
  plVar9[0xd] = 0;
  plVar9[0x19] = 0;
  *(undefined4 *)((long)plVar9 + 0x97) = 0;
  plVar9[0x11] = 0;
  plVar9[0x12] = 0;
  plVar9[0xf] = 0;
  plVar9[0x10] = 0;
  *(undefined4 *)((long)plVar9 + 0xbf) = 0;
  plVar9[0x16] = 0;
  plVar9[0x17] = 0;
  plVar9[0x14] = 0;
  plVar9[0x15] = 0;
  if ((*(char *)((long)param_1 + 0xf2) == '\0') &&
     (*(long *)(*(long *)(param_1[0xb] + 0x58) + 0x10e8) != 0)) {
    plVar15 = (long *)param_1[1];
    puVar11 = (undefined4 *)(**(code **)(*plVar15 + 0x10))(plVar15,0xc04,2);
    if (puVar11 == (undefined4 *)0x0) {
      plVar15 = (long *)0x0;
      lVar19 = 0;
      lVar8 = 0;
    }
    else {
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_029401dc;
      *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar15;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      *puVar11 = 0;
      lVar8 = 2;
      lVar19 = 0xc04;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    }
    lVar12 = *plVar18;
    *plVar18 = (long)puVar11;
    if (lVar12 != 0) {
      FUN_02bcbe58(auStack_78,0);
      plVar14 = (long *)param_1[0x15];
      lVar16 = param_1[0x16];
      lVar17 = param_1[0x17];
      uVar10 = (**(code **)(*plVar14 + 0xc0))(plVar14);
      if ((uVar10 & 1) == 0) {
LAB_0293fd78:
        (**(code **)(*plVar14 + 0x18))(plVar14,lVar12,lVar16,lVar17);
      }
      else {
        lVar4 = tpidr_el0;
        if (*(char *)(lVar4 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar4 + 0x38d488) = 1;
          *(undefined8 *)(lVar4 + 0x38d478) = 0;
          *(undefined8 *)(lVar4 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_0293fd78;
        FUN_02bcc824(plVar14,lVar12,lVar16,lVar17);
      }
      lVar12 = tpidr_el0;
      if (*(char *)(lVar12 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar12 + 0x38d488) = 1;
        *(undefined8 *)(lVar12 + 0x38d478) = 0;
        *(undefined8 *)(lVar12 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar7 = *(int *)(lVar12 + 0x38d480) + -1;
      *(int *)(lVar12 + 0x38d480) = iVar7;
      if (iVar7 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar12 + 0x38d484) = 0;
      }
    }
    param_1[0x15] = (long)plVar15;
    param_1[0x16] = lVar19;
    param_1[0x17] = lVar8;
    goto LAB_0293fe20;
  }
  lVar8 = param_1[0x14];
  param_1[0x14] = 0;
  if (lVar8 == 0) goto LAB_0293fe20;
  FUN_02bcbe58(auStack_78,0);
  plVar15 = (long *)param_1[0x15];
  lVar19 = param_1[0x16];
  lVar16 = param_1[0x17];
  uVar10 = (**(code **)(*plVar15 + 0xc0))(plVar15);
  lVar12 = tpidr_el0;
  if ((uVar10 & 1) == 0) {
LAB_0293fbc8:
    (**(code **)(*plVar15 + 0x18))(plVar15,lVar8,lVar19,lVar16);
  }
  else {
    if (*(char *)(lVar12 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar12 + 0x38d488) = 1;
      *(undefined8 *)(lVar12 + 0x38d478) = 0;
      *(undefined8 *)(lVar12 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar12 + 0x38d480) < 1) goto LAB_0293fbc8;
    FUN_02bcc824(plVar15,lVar8,lVar19,lVar16);
  }
  if (*(char *)(lVar12 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar12 + 0x38d488) = 1;
    *(undefined8 *)(lVar12 + 0x38d478) = 0;
    *(undefined8 *)(lVar12 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar7 = *(int *)(lVar12 + 0x38d480) + -1;
  *(int *)(lVar12 + 0x38d480) = iVar7;
  if (iVar7 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar12 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar12 + 0x38d488) = 1;
      *(undefined8 *)(lVar12 + 0x38d478) = 0;
      *(undefined8 *)(lVar12 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar12 + 0x38d484) = 0;
  }
LAB_0293fe20:
  lVar8 = param_1[0xb];
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(lVar8 + 0x124);
  *(undefined2 *)((long)param_1 + 0x92) = *(undefined2 *)(lVar8 + 0x124);
  *(undefined2 *)((long)param_1 + 0x94) = *(undefined2 *)(lVar8 + 0x124);
  *(undefined2 *)((long)param_1 + 0x96) = *(undefined2 *)(lVar8 + 0x124);
  *(undefined2 *)(param_1 + 0x13) = *(undefined2 *)(lVar8 + 0x124);
  param_1[0x19] = param_12;
  param_1[0x1a] = -0x7d5d4e8add6295a5;
  param_1[0x1b] = param_12;
  return;
}


