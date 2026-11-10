/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ad6a64; name: FUN_02ad6a64
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ad6a64(undefined8 *param_1)

{
  int *piVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  code *pcVar11;
  code *pcVar12;
  undefined1 *puVar13;
  int iVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  long *plVar20;
  long *plVar21;
  undefined8 uVar22;
  long lVar23;
  long *plVar24;
  undefined8 *puVar25;
  long *local_100;
  code *local_f8;
  code *local_f0;
  long *local_e8;
  undefined1 auStack_e0 [104];
  undefined1 auStack_78 [24];
  
  local_100 = (long *)param_1[1];
  local_f8 = (code *)param_1[2];
  local_f0 = (code *)param_1[3];
  local_e8 = (long *)CONCAT71(local_e8._1_7_,*(undefined1 *)(param_1 + 4));
  FUN_02b77168(*param_1,&local_100);
  puVar7 = PTR_DAT_04379520;
  plVar24 = (long *)*param_1;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379520), puVar8 = PTR_DAT_04379528, iVar14 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar8 = PTR_DAT_04379528;
  lVar15 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_02ad7fe0;
  *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar24;
  *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
  plVar16 = (long *)(**(code **)(*plVar24 + 0x10))(plVar24,0x160,8);
  if (plVar16 == (long *)0x0) {
    (**(code **)(*plVar24 + 0xb8))(plVar24);
    memset((void *)0x0,0,0x160);
    FUN_02ba193c(0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  memset(plVar16,0,0x160);
  FUN_02ba193c(plVar16);
  *plVar16 = (long)&PTR_FUN_042860b0;
  plVar16[1] = (long)plVar24;
  plVar16[9] = (long)&PTR_LAB_04286108;
  plVar16[4] = 8;
  plVar16[2] = (long)plVar16;
  plVar16[3] = 0x160;
  *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
  plVar20 = plVar16 + 10;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar6) {
      *(int *)plVar20 = (int)*plVar20 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    plVar21 = DAT_043ef568;
  } while (cVar5 != '\0');
  DAT_043ef568 = (long *)0x0;
  if (plVar21 != (long *)0x0) {
    plVar20 = plVar21 + 10;
    do {
      iVar14 = (int)*plVar20 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar6) {
        *(int *)plVar20 = iVar14;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar21 + 0x10))();
    }
  }
  DAT_043ef568 = plVar16;
  FUN_02ba24c4(plVar16,param_1 + 5);
  FUN_02b4436c(plVar24);
  FUN_02accdf0(&local_100,plVar24,&DAT_043ef568);
  plVar20 = local_100;
  plVar16 = DAT_043ef570;
  local_100 = (long *)0x0;
  DAT_043ef570 = plVar20;
  lVar15 = tpidr_el0;
  if (plVar16 == (long *)0x0) {
    DAT_043ef588 = (undefined1 *)local_e8;
    DAT_043ef578 = local_f8;
    DAT_043ef580 = local_f0;
  }
  else {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*plVar16)(plVar16);
    puVar13 = DAT_043ef588;
    pcVar12 = DAT_043ef580;
    pcVar11 = DAT_043ef578;
    uVar17 = (**(code **)(*(long *)DAT_043ef578 + 0xc0))(DAT_043ef578);
    if ((uVar17 & 1) == 0) {
LAB_02ad6c64:
      (**(code **)(*(long *)pcVar11 + 0x18))(pcVar11,plVar16,pcVar12,puVar13);
    }
    else {
      if (*(char *)(lVar15 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar15 + 0x38d488) = 1;
        *(undefined8 *)(lVar15 + 0x38d478) = 0;
        *(undefined8 *)(lVar15 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar15 + 0x38d480) < 1) goto LAB_02ad6c64;
      FUN_02bcc824(pcVar11,plVar16,pcVar12,puVar13);
    }
    if (*(char *)(lVar15 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar15 + 0x38d488) = 1;
      *(undefined8 *)(lVar15 + 0x38d478) = 0;
      *(undefined8 *)(lVar15 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar14 = *(int *)(lVar15 + 0x38d480) + -1;
    *(int *)(lVar15 + 0x38d480) = iVar14;
    if (iVar14 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar15 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar15 + 0x38d488) = 1;
        *(undefined8 *)(lVar15 + 0x38d478) = 0;
        *(undefined8 *)(lVar15 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar15 + 0x38d484) = 0;
    }
    DAT_043ef588 = (undefined1 *)local_e8;
    DAT_043ef578 = local_f8;
    DAT_043ef580 = local_f0;
  }
  pcVar11 = DAT_043ef6c8;
  local_100 = (long *)&LAB_02ad8114;
  local_f8 = FUN_02ad813c;
  local_f0 = FUN_02ad8140;
  local_e8 = (long *)&LAB_02ad8144;
  DAT_043ef740 = DAT_043ef570;
  if (DAT_043ef6c8 == (code *)0x0) {
LAB_02ad6d94:
    (*local_f0)(auStack_e0,&DAT_043ef6e0);
    DAT_043ef6c0 = local_100;
    DAT_043ef6c8 = local_f8;
    DAT_043ef6d0 = local_f0;
    DAT_043ef6d8 = (undefined1 *)local_e8;
  }
  else {
    DAT_043ef6d0 = (code *)0x0;
    DAT_043ef6d8 = (undefined1 *)0x0;
    DAT_043ef6c0 = (long *)0x0;
    DAT_043ef6c8 = (code *)0x0;
    (*pcVar11)(&DAT_043ef6e0);
    if (local_f0 != (code *)0x0) goto LAB_02ad6d94;
  }
  pcVar11 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (code *)0x0;
    local_e8 = (long *)0x0;
    local_100 = (long *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar11)(auStack_e0);
  }
  plVar16 = (long *)FUN_02ada244(&local_100,plVar24);
  if (plVar16 != (long *)0x0) {
    plVar20 = plVar16 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar6) {
        *(int *)plVar20 = (int)*plVar20 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar20 = DAT_043ef590;
  DAT_043ef590 = (long *)0x0;
  if (plVar20 != (long *)0x0) {
    plVar21 = plVar20 + 10;
    do {
      iVar14 = (int)*plVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = iVar14;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar20 + 0x10))();
    }
  }
  DAT_043ef590 = plVar16;
  if (((*puVar7 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379520), puVar9 = PTR_DAT_04379528, iVar14 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar18 = nn::os::GetTlsValue(*(undefined4 *)puVar8);
  if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_02ad7fe0;
  *(long **)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = plVar24;
  *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
  plVar16 = (long *)(**(code **)(*plVar24 + 0x10))(plVar24,0xa8,8);
  if (plVar16 == (long *)0x0) {
    (**(code **)(*plVar24 + 0xb8))(plVar24);
  }
  FUN_02b59918(plVar16,&DAT_043ef568);
  plVar16[1] = (long)plVar24;
  plVar16[2] = (long)plVar16;
  plVar16[3] = 0xa8;
  plVar16[4] = 8;
  *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
  if (plVar16 != (long *)0x0) {
    plVar20 = plVar16 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar6) {
        *(int *)plVar20 = (int)*plVar20 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar20 = DAT_043ef598;
  DAT_043ef598 = (long *)0x0;
  if (plVar20 != (long *)0x0) {
    plVar21 = plVar20 + 10;
    do {
      iVar14 = (int)*plVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = iVar14;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar20 + 0x10))();
    }
  }
  DAT_043ef598 = plVar16;
  if (((*puVar7 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379520), puVar9 = PTR_DAT_04379528, iVar14 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar18 = nn::os::GetTlsValue(*(undefined4 *)puVar8);
  if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_02ad7fe0;
  *(long **)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = plVar24;
  *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
  plVar16 = (long *)(**(code **)(*plVar24 + 0x10))(plVar24,0x70,8);
  if (plVar16 == (long *)0x0) {
    (**(code **)(*plVar24 + 0xb8))(plVar24);
  }
  FUN_02b3c1c0(plVar16,&DAT_043ef590,&DAT_043ef598);
  plVar16[1] = (long)plVar24;
  plVar16[2] = (long)plVar16;
  plVar16[3] = 0x70;
  plVar16[4] = 8;
  *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
  if (plVar16 != (long *)0x0) {
    plVar20 = plVar16 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar6) {
        *(int *)plVar20 = (int)*plVar20 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar20 = DAT_043ef5a0;
  DAT_043ef5a0 = (long *)0x0;
  if (plVar20 != (long *)0x0) {
    plVar21 = plVar20 + 10;
    do {
      iVar14 = (int)*plVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = iVar14;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar20 + 0x10))();
    }
  }
  DAT_043ef5a0 = plVar16;
  FUN_02adc4f0(&local_100,plVar24,plVar16 + 0xc);
  plVar20 = local_100;
  plVar16 = DAT_043ef5c0;
  local_100 = (long *)0x0;
  DAT_043ef5c0 = plVar20;
  if (plVar16 != (long *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*plVar16)(plVar16);
    puVar13 = (undefined1 *)DAT_043ef5d8;
    pcVar12 = DAT_043ef5d0;
    pcVar11 = DAT_043ef5c8;
    uVar17 = (**(code **)(*(long *)DAT_043ef5c8 + 0xc0))(DAT_043ef5c8);
    if ((uVar17 & 1) == 0) {
LAB_02ad7074:
      (**(code **)(*(long *)pcVar11 + 0x18))(pcVar11,plVar16,pcVar12,puVar13);
    }
    else {
      if (*(char *)(lVar15 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar15 + 0x38d488) = 1;
        *(undefined8 *)(lVar15 + 0x38d478) = 0;
        *(undefined8 *)(lVar15 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar15 + 0x38d480) < 1) goto LAB_02ad7074;
      FUN_02bcc824(pcVar11,plVar16,pcVar12,puVar13);
    }
    if (*(char *)(lVar15 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar15 + 0x38d488) = 1;
      *(undefined8 *)(lVar15 + 0x38d478) = 0;
      *(undefined8 *)(lVar15 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar14 = *(int *)(lVar15 + 0x38d480) + -1;
    *(int *)(lVar15 + 0x38d480) = iVar14;
    if (iVar14 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar15 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar15 + 0x38d488) = 1;
        *(undefined8 *)(lVar15 + 0x38d478) = 0;
        *(undefined8 *)(lVar15 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar15 + 0x38d484) = 0;
    }
  }
  DAT_043ef5c8 = local_f8;
  DAT_043ef5d0 = local_f0;
  DAT_043ef5d8 = local_e8;
  (**(code **)(*DAT_043ef5c0 + 0x10))();
  if (((*puVar7 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379520), puVar9 = PTR_DAT_04379528, iVar14 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar18 = nn::os::GetTlsValue(*(undefined4 *)puVar8);
  if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_02ad7fe0;
  *(long **)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = plVar24;
  *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
  plVar16 = (long *)(**(code **)(*plVar24 + 0x10))(plVar24,0x1c0,8);
  if (plVar16 == (long *)0x0) {
    (**(code **)(*plVar24 + 0xb8))(plVar24);
  }
  FUN_02b1057c(plVar16,&DAT_043ef568);
  plVar16[1] = (long)plVar24;
  plVar16[2] = (long)plVar16;
  plVar16[3] = 0x1c0;
  plVar16[4] = 8;
  *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
  if (plVar16 != (long *)0x0) {
    plVar20 = plVar16 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar6) {
        *(int *)plVar20 = (int)*plVar20 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar20 = DAT_043ef5a8;
  DAT_043ef5a8 = (long *)0x0;
  if (plVar20 != (long *)0x0) {
    plVar21 = plVar20 + 10;
    do {
      iVar14 = (int)*plVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = iVar14;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar20 + 0x10))();
    }
  }
  DAT_043ef5a8 = plVar16;
  if (plVar16 != (long *)0x0) {
    plVar20 = plVar16 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar6) {
        *(int *)plVar20 = (int)*plVar20 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar20 = DAT_043ef6b8;
  if (DAT_043ef6b8 != (long *)0x0) {
    plVar21 = DAT_043ef6b8 + 10;
    DAT_043ef6b8 = plVar16;
    do {
      iVar14 = (int)*plVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = iVar14;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar16 = DAT_043ef6b8;
    if (iVar14 == 0) {
      (**(code **)(*plVar20 + 0x10))();
      plVar16 = DAT_043ef6b8;
    }
  }
  DAT_043ef6b8 = plVar16;
  plVar16 = (long *)FUN_02ad8148(plVar24);
  if (plVar16 != (long *)0x0) {
    plVar20 = plVar16 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar6) {
        *(int *)plVar20 = (int)*plVar20 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar20 = DAT_043ef5b0;
  DAT_043ef5b0 = (long *)0x0;
  if (plVar20 != (long *)0x0) {
    plVar21 = plVar20 + 10;
    do {
      iVar14 = (int)*plVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = iVar14;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar20 + 0x10))();
    }
  }
  DAT_043ef5b0 = plVar16;
  plVar16 = (long *)FUN_02ad8148(plVar24);
  if (plVar16 != (long *)0x0) {
    plVar20 = plVar16 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar6) {
        *(int *)plVar20 = (int)*plVar20 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar20 = DAT_043ef5b8;
  DAT_043ef5b8 = (long *)0x0;
  if (plVar20 != (long *)0x0) {
    plVar21 = plVar20 + 10;
    do {
      iVar14 = (int)*plVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = iVar14;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar20 + 0x10))();
    }
  }
  puVar9 = PTR_DAT_0437b4f8;
  DAT_043ef5b8 = plVar16;
  if (((*PTR_DAT_0437b4f8 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_0437b4f8), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_0437b590,PTR_DAT_0437b500,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b4f8);
    bVar2 = *puVar7;
  }
  else {
    bVar2 = *puVar7;
  }
  if (((bVar2 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar14 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar18 = nn::os::GetTlsValue(*(undefined4 *)puVar8);
  if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_02ad7fe0;
  *(long **)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = plVar24;
  *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
  puVar19 = (undefined8 *)(**(code **)(*plVar24 + 0x10))(plVar24,0x60,8);
  if (puVar19 == (undefined8 *)0x0) {
    (**(code **)(*plVar24 + 0xb8))(plVar24);
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
    _DAT_00000008 = (long *)0x0;
    FUN_02ad8258();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar19[10] = 0;
  puVar19[0xb] = 0;
  puVar19[8] = 0;
  puVar19[9] = 0;
  puVar19[6] = 0;
  puVar19[7] = 0;
  puVar19[4] = 0;
  puVar19[5] = 0;
  puVar19[2] = 0;
  puVar19[3] = 0;
  *puVar19 = 0;
  puVar19[1] = 0;
  FUN_02ad8258();
  puVar19[0xb] = 0;
  *puVar19 = &PTR_LAB_04282b40;
  puVar19[1] = plVar24;
  puVar19[2] = puVar19;
  puVar19[3] = 0x60;
  puVar19[4] = 8;
  puVar19[9] = &PTR_LAB_04282b70;
  puVar19[10] = 0;
  puVar7 = PTR_DAT_0437b500;
  *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
  puVar25 = *(undefined8 **)puVar7;
  *(undefined8 **)puVar7 = puVar19;
  if (puVar25 != (undefined8 *)0x0) {
    plVar16 = (long *)puVar25[1];
    uVar3 = puVar25[2];
    uVar22 = puVar25[3];
    uVar4 = puVar25[4];
    FUN_02bcbe58(&local_100,0);
    (**(code **)*puVar25)(puVar25);
    uVar17 = (**(code **)(*plVar16 + 0xc0))(plVar16);
    if ((uVar17 & 1) == 0) {
LAB_02ad7440:
      (**(code **)(*plVar16 + 0x18))(plVar16,uVar3,uVar22,uVar4);
    }
    else {
      if (*(char *)(lVar15 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar15 + 0x38d488) = 1;
        *(undefined8 *)(lVar15 + 0x38d478) = 0;
        *(undefined8 *)(lVar15 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar15 + 0x38d480) < 1) goto LAB_02ad7440;
      FUN_02bcc824(plVar16,uVar3,uVar22,uVar4);
    }
    if (*(char *)(lVar15 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar15 + 0x38d488) = 1;
      *(undefined8 *)(lVar15 + 0x38d478) = 0;
      *(undefined8 *)(lVar15 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar14 = *(int *)(lVar15 + 0x38d480) + -1;
    *(int *)(lVar15 + 0x38d480) = iVar14;
    if (iVar14 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar15 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar15 + 0x38d488) = 1;
        *(undefined8 *)(lVar15 + 0x38d478) = 0;
        *(undefined8 *)(lVar15 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar15 + 0x38d484) = 0;
    }
    puVar19 = *(undefined8 **)puVar7;
  }
  if (0x3ff < DAT_043eeed0) {
                    /* WARNING: Subroutine does not return */
    FUN_02a47540();
  }
  puVar25 = (undefined8 *)0x0;
  if (puVar19 != (undefined8 *)0x0) {
    puVar25 = puVar19 + 9;
  }
  *(undefined8 **)(&DAT_043eced0 + (long)(int)DAT_043eeed0 * 8) = puVar25;
  DAT_043eeed0 = DAT_043eeed0 + 1;
  if (((*puVar9 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_0437b4f8), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_0437b590,PTR_DAT_0437b500,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b4f8);
  }
  puVar8 = PTR_DAT_0437b508;
  lVar15 = *(long *)puVar7;
  *(long *)PTR_DAT_0437b508 = lVar15;
  plVar16 = *(long **)(lVar15 + 8);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379520), puVar10 = PTR_DAT_04379528, iVar14 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar10,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar18 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (*(ulong *)(lVar18 + 0x80) < 0x10) {
    *(long **)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = plVar16;
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
    plVar20 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x3a0,8);
    if (plVar20 == (long *)0x0) {
      (**(code **)(*plVar16 + 0xb8))(plVar16);
      FUN_02a68488(0,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    FUN_02a6f65c(plVar20,DAT_043eef30);
    plVar21 = (long *)plVar20[0x3b];
    *plVar20 = (long)&DAT_04282be0;
    plVar20[0x72] = 0;
    plVar20[0x71] = 0;
    *(undefined1 *)((long)plVar20 + 0x39c) = 0;
    *(undefined4 *)(plVar20 + 0x73) = 0;
    plVar20[9] = (long)&PTR_LAB_04282c68;
    plVar20[10] = (long)&PTR_LAB_04282cb0;
    if ((plVar21 == (long *)0x0) || (plVar21 == plVar20)) {
      plVar21 = (long *)plVar20[0x3a];
    }
    else {
      (**(code **)(*plVar21 + 0x60))(plVar21,0);
      plVar21 = (long *)plVar20[0x3a];
    }
    if ((plVar21 != (long *)0x0) && (plVar21 != plVar20)) {
      (**(code **)(*plVar21 + 0x60))(plVar21,0);
    }
    plVar20[1] = (long)plVar16;
    plVar20[2] = (long)plVar20;
    plVar20[3] = 0x3a0;
    plVar20[4] = 8;
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
    lVar18 = plVar20[0xb];
    plVar20[0x3c] = plVar20[0x3c] | 8;
    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) {
LAB_02ad7fe4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar22 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      *(undefined8 *)(lVar18 + 0x10) = uVar22;
    }
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar16 = *(long **)(lVar15 + 0x50);
    *(undefined8 *)(lVar15 + 0x50) = 0;
    if (plVar16 != (long *)0x0) {
      lVar18 = plVar16[0xb];
      piVar1 = (int *)(lVar18 + 0xc);
      do {
        iVar14 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar14 + -1 == 0) {
        *(undefined8 *)(lVar18 + 0x18) = 0;
        (**(code **)(*plVar16 + 0x20))();
      }
    }
    *(long **)(lVar15 + 0x50) = plVar20;
    if (((*puVar9 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_0437b4f8), iVar14 != 0)) {
      FUN_00100250(PTR_LAB_0437b590,PTR_DAT_0437b500,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b4f8);
    }
    lVar15 = *(long *)puVar7;
    *(long *)puVar8 = lVar15;
    plVar16 = *(long **)(lVar15 + 8);
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar14 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar18 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (*(ulong *)(lVar18 + 0x80) < 0x10) {
      *(long **)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = plVar16;
      *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
      lVar23 = (**(code **)(*plVar16 + 0x10))(plVar16,0x3a0,8);
      if (lVar23 == 0) {
        (**(code **)(*plVar16 + 0xb8))(plVar16);
        FUN_02ad8e6c(0);
        _DAT_00000010 = 0;
        _DAT_00000018 = 0x3a0;
        _DAT_00000020 = 8;
        _DAT_00000008 = plVar16;
      }
      else {
        FUN_02ad8e6c(lVar23);
        *(long **)(lVar23 + 8) = plVar16;
        *(long *)(lVar23 + 0x10) = lVar23;
        *(undefined8 *)(lVar23 + 0x18) = 0x3a0;
        *(undefined8 *)(lVar23 + 0x20) = 8;
      }
      *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
      *(ulong *)(lVar23 + 0x1e0) = *(ulong *)(lVar23 + 0x1e0) | 8;
      if (lVar23 != 0) {
        lVar18 = *(long *)(lVar23 + 0x58);
        if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_02ad7fe4;
        if (*(long *)(lVar18 + 0x10) == 0) {
          uVar22 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
          *(undefined8 *)(lVar18 + 0x10) = uVar22;
        }
        piVar1 = (int *)(lVar18 + 0xc);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar16 = *(long **)(lVar15 + 0x58);
      *(undefined8 *)(lVar15 + 0x58) = 0;
      if (plVar16 != (long *)0x0) {
        lVar18 = plVar16[0xb];
        piVar1 = (int *)(lVar18 + 0xc);
        do {
          iVar14 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar14 + -1 == 0) {
          *(undefined8 *)(lVar18 + 0x18) = 0;
          (**(code **)(*plVar16 + 0x20))();
        }
      }
      *(long *)(lVar15 + 0x58) = lVar23;
      local_100 = plVar24;
      lVar15 = FUN_02aec7ec(auStack_78,plVar24,&local_100);
      if (lVar15 != 0) {
        piVar1 = (int *)(lVar15 + 0x50);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar24 = DAT_043ef560;
      DAT_043ef560 = (long *)0x0;
      if (plVar24 != (long *)0x0) {
        plVar16 = plVar24 + 10;
        do {
          iVar14 = (int)*plVar16 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar6) {
            *(int *)plVar16 = iVar14;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar14 == 0) {
          (**(code **)(*plVar24 + 0x10))();
        }
      }
      DAT_043ef560 = (long *)lVar15;
      plVar24 = (long *)(**(code **)(*(long *)(lVar15 + 0x58) + 0x28))((long *)(lVar15 + 0x58));
      local_100 = (long *)0xb7f64d13d0327f0f;
      local_f8 = (code *)0x3a82748;
      local_f0 = (code *)0x1f;
      local_e8 = (long *)0x0;
      (**(code **)(*plVar24 + 0x30))(plVar24,&local_100,param_1 + 0x12);
      if (local_e8 != (long *)0x0) {
        (**(code **)(*local_e8 + 0x20))();
      }
      plVar24 = (long *)(**(code **)(*(long *)((long)DAT_043ef560 + 0x58) + 0x28))();
      local_100 = (long *)0xd11dc1e0c2a5f6a3;
      local_f8 = (code *)0x3a82768;
      local_f0 = (code *)0x1f;
      local_e8 = (long *)0x0;
      (**(code **)(*plVar24 + 0x30))(plVar24,&local_100,(long)param_1 + 0x8c);
      if (local_e8 != (long *)0x0) {
        (**(code **)(*local_e8 + 0x20))();
      }
      (**(code **)(*(long *)((long)DAT_043ef560 + 0x58) + 0x10))
                ((long *)((long)DAT_043ef560 + 0x58),&DAT_043ef568);
      return;
    }
  }
LAB_02ad7fe0:
                    /* WARNING: Subroutine does not return */
  abort();
}


