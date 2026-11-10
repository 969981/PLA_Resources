/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b828f0; name: FUN_02b828f0
 */


/* WARNING: Removing unreachable block (ram,0x02b82a9c) */

int FUN_02b828f0(long *param_1,undefined8 *param_2,int *param_3)

{
  long *plVar1;
  LightEventType *pLVar2;
  long *plVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 uVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  long local_98;
  long *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  lVar11 = nn::os::GetCurrentThread();
  plVar1 = param_1 + 10;
  do {
    lVar12 = *plVar1;
    lVar23 = param_1[0xb];
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar12;
      param_1[0xb] = lVar23;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  pLVar2 = (LightEventType *)((long)param_1 + 0x44);
  do {
    while ((lVar12 != 0 && (lVar11 != lVar12))) {
      nn::os::WaitLightEvent(pLVar2);
      do {
        lVar12 = *plVar1;
        lVar23 = param_1[0xb];
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar12;
          param_1[0xb] = lVar23;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    while( true ) {
      if (*plVar1 != lVar12 || param_1[0xb] != lVar23) break;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar12;
        *(long *)((long)param_1 + 0x54) = lVar23 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        puVar17 = (undefined8 *)*param_1;
        puVar4 = (undefined8 *)param_1[1];
        if (puVar17 != puVar4) goto LAB_02b829cc;
        iVar10 = 0;
        goto LAB_02b82a68;
      }
    }
    ClearExclusiveLocal();
    lVar12 = *plVar1;
    lVar23 = param_1[0xb];
  } while( true );
LAB_02b829cc:
  do {
    uVar19 = *puVar17;
    iVar10 = param_3[1];
    iVar9 = (*DAT_043f0a58)(uVar19);
    if ((iVar10 == iVar9) && (iVar10 = *param_3, iVar9 = (*DAT_043f0a60)(uVar19), iVar10 == iVar9))
    {
      iVar10 = (uint)(param_3[2] != 1) << 1;
      if (param_3[2] == 2) {
        iVar10 = 1;
      }
      iVar9 = (*DAT_043f0a68)(uVar19);
      if ((iVar10 == iVar9) &&
         (iVar10 = param_3[3], iVar9 = (*DAT_043f0a70)(uVar19), iVar10 == iVar9)) {
        iVar10 = 1;
        goto LAB_02b82a68;
      }
    }
    puVar17 = puVar17 + 4;
  } while (puVar4 != puVar17);
  iVar10 = 0;
LAB_02b82a68:
  do {
    lVar11 = *plVar1;
    lVar12 = param_1[0xb];
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar11;
      param_1[0xb] = lVar12;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  while( true ) {
    if (*plVar1 != lVar11 || param_1[0xb] != lVar12) break;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar11;
      *(long *)((long)param_1 + 0x54) = lVar12 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_02b82aac;
  }
  ClearExclusiveLocal();
  lVar11 = *plVar1;
  lVar12 = param_1[0xb];
  do {
    do {
      lVar23 = *plVar1;
      if (lVar23 != lVar11 || param_1[0xb] != lVar12) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto LAB_02b83334;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar11;
        *(long *)((long)param_1 + 0x54) = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar6 = true;
LAB_02b83334:
    lVar11 = lVar23;
    lVar12 = param_1[0xb];
  } while (!bVar6);
LAB_02b82aac:
  nn::os::SignalLightEvent(pLVar2);
  if (iVar10 != 0) {
    return iVar10;
  }
  plVar22 = (long *)*param_2;
  lVar11 = (**(code **)(*plVar22 + 0x10))(plVar22,8,4);
  if (lVar11 == 0) {
    local_88 = 0;
    local_80 = 0;
    local_98 = 0;
    local_90 = (long *)0x0;
  }
  else {
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar7 = PTR_DAT_04379528;
      if (iVar10 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar22;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    (*DAT_043f0a30)(lVar11);
    *(undefined1 *)(lVar11 + 5) = 1;
    local_88 = 8;
    local_80 = 4;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    local_98 = lVar11;
    local_90 = plVar22;
  }
  (*DAT_043f0a38)(lVar11,param_3[1]);
  (*DAT_043f0a40)(lVar11,*param_3);
  iVar10 = (uint)(param_3[2] != 1) << 1;
  if (param_3[2] == 2) {
    iVar10 = 1;
  }
  (*DAT_043f0a48)(lVar11,iVar10);
  (*DAT_043f0a50)(lVar11,param_3[3]);
  lVar11 = nn::os::GetCurrentThread();
  do {
    if (*plVar1 != 0 || param_1[0xb] != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*plVar1 == 0 && param_1[0xb] == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar11;
            param_1[0xb] = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_02b82c00;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar11;
      param_1[0xb] = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_02b82c00:
  uVar13 = param_1[1];
  plVar22 = param_1 + 3;
  if (uVar13 < (ulong)param_1[2]) {
    FUN_02b833d4(plVar22,uVar13,&local_98);
    param_1[1] = param_1[1] + 0x20;
  }
  else {
    uVar16 = param_1[4];
    lVar11 = (long)(uVar13 - *param_1) >> 5;
    uVar13 = lVar11 + 1;
    if (0x7ffffffffffffffe < uVar16) {
      uVar16 = 0x7fffffffffffffff;
    }
    if (uVar16 < uVar13) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar12 = param_1[2] - *param_1;
    uVar14 = lVar12 >> 4;
    if (uVar13 <= uVar14) {
      uVar13 = uVar14;
    }
    if ((ulong)(lVar12 >> 5) < uVar16 >> 1) {
      uVar16 = uVar13;
    }
    if (uVar16 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = (**(code **)(*(long *)*plVar22 + 0x10))((long *)*plVar22,uVar16 << 5,8);
      if (lVar12 == 0) {
        (**(code **)(*(long *)*plVar22 + 0xb8))();
      }
    }
    lVar23 = lVar12 + lVar11 * 0x20;
    FUN_02b833d4(plVar22,lVar23,&local_98);
    plVar21 = (long *)*param_1;
    plVar20 = (long *)param_1[1];
    lVar11 = lVar23 + 0x20;
    if (plVar20 == plVar21) {
      plVar20 = plVar21;
    }
    else {
      do {
        lVar23 = lVar23 + -0x20;
        plVar20 = plVar20 + -4;
        FUN_02b833d4(plVar22,lVar23,plVar20);
      } while (plVar21 != plVar20);
      plVar21 = (long *)*param_1;
      plVar20 = (long *)param_1[1];
    }
    lVar15 = param_1[2];
    param_1[2] = lVar12 + uVar16 * 0x20;
    *param_1 = lVar23;
    param_1[1] = lVar11;
    if (plVar20 != plVar21) {
      lVar11 = tpidr_el0;
      do {
        plVar18 = plVar20 + -4;
        lVar12 = *plVar18;
        *plVar18 = 0;
        if (lVar12 != 0) {
          FUN_02bcbe58(auStack_78,0);
          plVar3 = (long *)plVar20[-3];
          lVar23 = plVar20[-2];
          lVar24 = plVar20[-1];
          uVar13 = (**(code **)(*plVar3 + 0xc0))(plVar3);
          if ((uVar13 & 1) == 0) {
LAB_02b82dd0:
            (**(code **)(*plVar3 + 0x18))(plVar3,lVar12,lVar23,lVar24);
          }
          else {
            if (*(char *)(lVar11 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar11 + 0x38d488) = 1;
              *(undefined8 *)(lVar11 + 0x38d478) = 0;
              *(undefined8 *)(lVar11 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_02b82dd0;
            FUN_02bcc824(plVar3,lVar12,lVar23,lVar24);
          }
          if (*(char *)(lVar11 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar11 + 0x38d488) = 1;
            *(undefined8 *)(lVar11 + 0x38d478) = 0;
            *(undefined8 *)(lVar11 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
          }
          iVar10 = *(int *)(lVar11 + 0x38d480) + -1;
          *(int *)(lVar11 + 0x38d480) = iVar10;
          if (iVar10 == 0) {
            FUN_02bcc320();
            if (*(char *)(lVar11 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar11 + 0x38d488) = 1;
              *(undefined8 *)(lVar11 + 0x38d478) = 0;
              *(undefined8 *)(lVar11 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
            }
            *(undefined4 *)(lVar11 + 0x38d484) = 0;
          }
        }
        plVar20 = plVar18;
      } while (plVar21 != plVar18);
    }
    if (plVar21 != (long *)0x0) {
      plVar22 = (long *)*plVar22;
      uVar13 = (**(code **)(*plVar22 + 0xc0))(plVar22);
      if ((uVar13 & 1) != 0) {
        lVar11 = tpidr_el0;
        if (*(char *)(lVar11 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar11 + 0x38d488) = 1;
          *(undefined8 *)(lVar11 + 0x38d478) = 0;
          *(undefined8 *)(lVar11 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar11 + 0x38d480)) {
          FUN_02bcc824(plVar22,plVar21,lVar15 - (long)plVar21,8);
          goto LAB_02b82ff4;
        }
      }
      (**(code **)(*plVar22 + 0x18))(plVar22,plVar21,lVar15 - (long)plVar21,8);
    }
  }
LAB_02b82ff4:
  do {
    lVar11 = *plVar1;
    lVar12 = param_1[0xb];
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar11;
      param_1[0xb] = lVar12;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    if (*plVar1 != lVar11 || param_1[0xb] != lVar12) {
      ClearExclusiveLocal();
      lVar11 = *plVar1;
      lVar12 = param_1[0xb];
      goto LAB_02b83344;
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = 0;
      *(long *)((long)param_1 + 0x54) = lVar12;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  goto LAB_02b83038;
LAB_02b83344:
  do {
    lVar23 = *plVar1;
    if (lVar23 == lVar11 && param_1[0xb] == lVar12) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = 0;
        *(long *)((long)param_1 + 0x54) = lVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_02b83344;
      bVar6 = true;
    }
    else {
      bVar6 = false;
      ClearExclusiveLocal();
    }
    lVar11 = lVar23;
    lVar12 = param_1[0xb];
  } while (!bVar6);
LAB_02b83038:
  nn::os::SignalLightEvent(pLVar2);
  lVar11 = local_98;
  local_98 = 0;
  if (lVar11 == 0) {
    return 1;
  }
  FUN_02bcbe58(auStack_78,0);
  uVar8 = local_80;
  uVar19 = local_88;
  plVar1 = local_90;
  uVar13 = (**(code **)(*local_90 + 0xc0))(local_90);
  if ((uVar13 & 1) != 0) {
    lVar12 = tpidr_el0;
    if (*(char *)(lVar12 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar12 + 0x38d488) = 1;
      *(undefined8 *)(lVar12 + 0x38d478) = 0;
      *(undefined8 *)(lVar12 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar12 + 0x38d480)) {
      FUN_02bcc824(plVar1,lVar11,uVar19,uVar8);
      goto LAB_02b830d4;
    }
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar11,uVar19,uVar8);
LAB_02b830d4:
  lVar11 = tpidr_el0;
  if (*(char *)(lVar11 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar11 + 0x38d488) = 1;
    *(undefined8 *)(lVar11 + 0x38d478) = 0;
    *(undefined8 *)(lVar11 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar10 = *(int *)(lVar11 + 0x38d480) + -1;
  *(int *)(lVar11 + 0x38d480) = iVar10;
  if (iVar10 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar11 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar11 + 0x38d488) = 1;
      *(undefined8 *)(lVar11 + 0x38d478) = 0;
      *(undefined8 *)(lVar11 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar11 + 0x38d484) = 0;
  }
  return 1;
}


