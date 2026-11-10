/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02acf2b0; name: FUN_02acf2b0
 */


void FUN_02acf2b0(long *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  ulong local_90;
  ulong local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  lVar19 = *param_1;
  plVar18 = *(long **)(lVar19 + 8);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_02acfd18;
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar18;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  plVar8 = (long *)(**(code **)(*plVar18 + 0x10))(plVar18,0xe0,8);
  if (plVar8 == (long *)0x0) {
    (**(code **)(*plVar18 + 0xb8))(plVar18);
  }
  FUN_02bbfbb4(plVar8,lVar19);
  *plVar8 = (long)&PTR_LAB_042829f8;
  plVar8[9] = (long)&PTR_LAB_04282a38;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  plVar20 = DAT_043f1798;
  lVar19 = tpidr_el0;
  if ((((lVar9 == 0) || (*(long *)(lVar9 + 0x80) == 0)) ||
      (plVar12 = *(long **)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8), plVar12 == (long *)0x0)) &&
     (plVar12 = *(long **)(lVar19 + 0x20), *(long **)(lVar19 + 0x20) == (long *)0x0)) {
    *(long **)(lVar19 + 0x20) = DAT_043f1798;
    plVar12 = plVar20;
  }
  plVar20 = plVar8 + 0x18;
  *plVar20 = (long)plVar12;
  plVar8[0x19] = 0xfffffffffffffff;
  plVar8[0x1a] = 0;
  *(undefined4 *)(plVar8 + 0x1b) = 0;
  lVar9 = plVar8[0x15];
  lVar13 = plVar8[0x16] - lVar9;
  uVar14 = lVar13 >> 4;
  if (uVar14 < 0x1000) {
    if ((ulong)(plVar8[0x17] - plVar8[0x16] >> 4) < 0x1000 - uVar14) {
      lVar9 = plVar8[0x17] - lVar9;
      if ((ulong)(lVar9 >> 4) < 0x7ffffffffffffff) {
        local_90 = lVar9 >> 3;
        if (local_90 < 0x1000) {
          local_90 = 0x1000;
          goto LAB_02acf480;
        }
        if (lVar9 != 0) goto LAB_02acf480;
        lVar9 = 0;
        local_90 = 0;
      }
      else {
        local_90 = 0xfffffffffffffff;
LAB_02acf480:
        lVar9 = (**(code **)(*plVar12 + 0x10))(plVar12,local_90 << 4,4);
        if (lVar9 == 0) {
          (**(code **)(*(long *)*plVar20 + 0xb8))();
        }
      }
      lVar21 = lVar9 + uVar14 * 0x10;
      lVar15 = uVar14 - 0x1000;
      lVar13 = lVar21;
      do {
        FUN_02ad5064(plVar20,lVar13);
        lVar13 = lVar13 + 0x10;
        bVar5 = lVar15 != -1;
        lVar15 = lVar15 + 1;
      } while (bVar5);
      lVar15 = plVar8[0x15];
      lVar16 = plVar8[0x16];
      if (lVar16 != lVar15) {
        do {
          lVar17 = *plVar20;
          if (((*PTR_DAT_04379520 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), iVar6 != 0)) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
          if (lVar10 == 0) {
            uVar2 = *(undefined8 *)(lVar16 + -8);
            *(undefined8 *)(lVar21 + -0x10) = *(undefined8 *)(lVar16 + -0x10);
            *(undefined8 *)(lVar21 + -8) = uVar2;
          }
          else {
            if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_02acfd18;
            *(long *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = lVar17;
            *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
            uVar2 = *(undefined8 *)(lVar16 + -8);
            *(undefined8 *)(lVar21 + -0x10) = *(undefined8 *)(lVar16 + -0x10);
            *(undefined8 *)(lVar21 + -8) = uVar2;
            *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
          }
          lVar16 = lVar16 + -0x10;
          lVar21 = lVar21 + -0x10;
        } while (lVar15 != lVar16);
        lVar15 = plVar8[0x15];
      }
      plVar8[0x15] = lVar21;
      plVar8[0x16] = lVar13;
      lVar13 = plVar8[0x17];
      plVar8[0x17] = lVar9 + local_90 * 0x10;
      if (lVar15 != 0) {
        plVar20 = (long *)*plVar20;
        uVar14 = (**(code **)(*plVar20 + 0xc0))(plVar20);
        if ((uVar14 & 1) != 0) {
          if (*(char *)(lVar19 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar19 + 0x38d488) = 1;
            *(undefined8 *)(lVar19 + 0x38d478) = 0;
            *(undefined8 *)(lVar19 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar19 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar19 + 0x38d480)) {
            FUN_02bcc824(plVar20,lVar15,lVar13 - lVar15,4);
            goto LAB_02acf658;
          }
        }
        (**(code **)(*plVar20 + 0x18))(plVar20,lVar15,lVar13 - lVar15,4);
      }
    }
    else {
      lVar9 = uVar14 - 0x1000;
      do {
        FUN_02ad5064(plVar20);
        bVar5 = lVar9 != -1;
        lVar9 = lVar9 + 1;
        plVar8[0x16] = plVar8[0x16] + 0x10;
      } while (bVar5);
    }
  }
  else if (lVar13 != 0x10000) {
    plVar8[0x16] = lVar9 + 0x10000;
  }
LAB_02acf658:
  local_68 = 0;
  local_78 = 0x10000;
  uStack_70 = 0x100;
  FUN_02bbfe84(plVar8,&local_78,2,0,0);
  plVar8[1] = (long)plVar18;
  plVar8[2] = (long)plVar8;
  plVar8[3] = 0xe0;
  plVar8[4] = 8;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  plVar18 = plVar8 + 10;
  do {
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar5) {
      *(int *)plVar18 = (int)*plVar18 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    plVar20 = DAT_043ef548;
  } while (cVar3 != '\0');
  DAT_043ef548 = (long *)0x0;
  if (plVar20 != (long *)0x0) {
    plVar18 = plVar20 + 10;
    do {
      iVar6 = (int)*plVar18 + -1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *(int *)plVar18 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar20 + 0x10))();
    }
  }
  lVar7 = *param_1;
  plVar18 = *(long **)(lVar7 + 8);
  DAT_043ef548 = plVar8;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_02acfd18:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar18;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  puVar11 = (undefined8 *)(**(code **)(*plVar18 + 0x10))(plVar18,0xe0,8);
  if (puVar11 == (undefined8 *)0x0) {
    (**(code **)(*plVar18 + 0xb8))(plVar18);
  }
  FUN_02bbfbb4(puVar11,lVar7);
  *puVar11 = &PTR_LAB_04282a68;
  puVar11[9] = &PTR_LAB_04282aa8;
  puVar11[0x15] = 0;
  puVar11[0x16] = 0;
  puVar11[0x17] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  plVar8 = DAT_043f1798;
  if ((((lVar7 == 0) || (*(long *)(lVar7 + 0x80) == 0)) ||
      (plVar20 = *(long **)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8), plVar20 == (long *)0x0)) &&
     (plVar20 = *(long **)(lVar19 + 0x20), *(long **)(lVar19 + 0x20) == (long *)0x0)) {
    *(long **)(lVar19 + 0x20) = DAT_043f1798;
    plVar20 = plVar8;
  }
  plVar8 = puVar11 + 0x18;
  *plVar8 = (long)plVar20;
  puVar11[0x19] = 0xfffffffffffffff;
  puVar11[0x1a] = 0;
  *(undefined4 *)(puVar11 + 0x1b) = 0;
  lVar7 = puVar11[0x15];
  lVar13 = puVar11[0x16] - lVar7;
  uVar14 = lVar13 >> 4;
  if (0xfff < uVar14) {
    if (lVar13 != 0x10000) {
      puVar11[0x16] = lVar7 + 0x10000;
    }
    goto LAB_02acfa5c;
  }
  if (0x1000 - uVar14 <= (ulong)((long)(puVar11[0x17] - puVar11[0x16]) >> 4)) {
    lVar19 = uVar14 - 0x1000;
    do {
      FUN_02ad5784(plVar8);
      bVar5 = lVar19 != -1;
      lVar19 = lVar19 + 1;
      puVar11[0x16] = puVar11[0x16] + 0x10;
    } while (bVar5);
    goto LAB_02acfa5c;
  }
  lVar7 = puVar11[0x17] - lVar7;
  if ((ulong)(lVar7 >> 4) < 0x7ffffffffffffff) {
    local_88 = lVar7 >> 3;
    if (local_88 < 0x1000) {
      local_88 = 0x1000;
      goto LAB_02acf880;
    }
    if (lVar7 != 0) goto LAB_02acf880;
    lVar7 = 0;
    local_88 = 0;
  }
  else {
    local_88 = 0xfffffffffffffff;
LAB_02acf880:
    lVar7 = (**(code **)(*plVar20 + 0x10))(plVar20,local_88 << 4,4);
    if (lVar7 == 0) {
      (**(code **)(*(long *)*plVar8 + 0xb8))();
    }
  }
  lVar21 = lVar7 + uVar14 * 0x10;
  lVar15 = uVar14 - 0x1000;
  lVar13 = lVar21;
  do {
    FUN_02ad5784(plVar8,lVar13);
    lVar13 = lVar13 + 0x10;
    bVar5 = lVar15 != -1;
    lVar15 = lVar15 + 1;
  } while (bVar5);
  lVar15 = puVar11[0x15];
  lVar16 = puVar11[0x16];
  if (lVar16 != lVar15) {
    do {
      lVar17 = *plVar8;
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), iVar6 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (lVar10 == 0) {
        uVar2 = *(undefined8 *)(lVar16 + -8);
        *(undefined8 *)(lVar21 + -0x10) = *(undefined8 *)(lVar16 + -0x10);
        *(undefined8 *)(lVar21 + -8) = uVar2;
      }
      else {
        if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_02acfd18;
        *(long *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = lVar17;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
        uVar2 = *(undefined8 *)(lVar16 + -8);
        *(undefined8 *)(lVar21 + -0x10) = *(undefined8 *)(lVar16 + -0x10);
        *(undefined8 *)(lVar21 + -8) = uVar2;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      }
      lVar16 = lVar16 + -0x10;
      lVar21 = lVar21 + -0x10;
    } while (lVar15 != lVar16);
    lVar15 = puVar11[0x15];
  }
  lVar16 = puVar11[0x17];
  puVar11[0x15] = lVar21;
  puVar11[0x16] = lVar13;
  puVar11[0x17] = lVar7 + local_88 * 0x10;
  if (lVar15 != 0) {
    plVar8 = (long *)*plVar8;
    uVar14 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar14 & 1) != 0) {
      if (*(char *)(lVar19 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar19 + 0x38d488) = 1;
        *(undefined8 *)(lVar19 + 0x38d478) = 0;
        *(undefined8 *)(lVar19 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar19 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar19 + 0x38d480)) {
        FUN_02bcc824(plVar8,lVar15,lVar16 - lVar15,4);
        goto LAB_02acfa5c;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar15,lVar16 - lVar15,4);
  }
LAB_02acfa5c:
  local_68 = 0;
  local_78 = 0x10000;
  uStack_70 = 0x100;
  FUN_02bbfe84(puVar11,&local_78,2,0,0);
  puVar11[1] = plVar18;
  puVar11[2] = puVar11;
  puVar11[3] = 0xe0;
  puVar11[4] = 8;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  piVar1 = (int *)(puVar11 + 10);
  do {
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    plVar18 = DAT_043ef550;
  } while (cVar3 != '\0');
  DAT_043ef550 = (long *)0x0;
  if (plVar18 != (long *)0x0) {
    plVar8 = plVar18 + 10;
    do {
      iVar6 = (int)*plVar8 + -1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar18 + 0x10))();
    }
  }
  DAT_043ef550 = puVar11;
  return;
}


