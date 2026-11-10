/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b834b8; name: FUN_02b834b8
 */


/* WARNING: Removing unreachable block (ram,0x02b836ec) */

int FUN_02b834b8(long *param_1,undefined8 *param_2,char *param_3)

{
  long *plVar1;
  LightEventType *pLVar2;
  long *plVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined8 uVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  long local_98;
  long *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  lVar12 = nn::os::GetCurrentThread();
  plVar1 = param_1 + 10;
  do {
    lVar13 = *plVar1;
    lVar24 = param_1[0xb];
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar13;
      param_1[0xb] = lVar24;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  pLVar2 = (LightEventType *)((long)param_1 + 0x44);
  do {
    while ((lVar13 != 0 && (lVar12 != lVar13))) {
      nn::os::WaitLightEvent(pLVar2);
      do {
        lVar13 = *plVar1;
        lVar24 = param_1[0xb];
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar13;
          param_1[0xb] = lVar24;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    while( true ) {
      if (*plVar1 != lVar13 || param_1[0xb] != lVar24) break;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar13;
        *(long *)((long)param_1 + 0x54) = lVar24 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        puVar18 = (undefined8 *)*param_1;
        puVar4 = (undefined8 *)param_1[1];
        if (puVar18 != puVar4) {
          if (param_3[0x18] == '\0') goto LAB_02b835a0;
          goto LAB_02b83588;
        }
        iVar11 = 0;
        goto LAB_02b836b8;
      }
    }
    ClearExclusiveLocal();
    lVar13 = *plVar1;
    lVar24 = param_1[0xb];
  } while( true );
LAB_02b835a0:
  while( true ) {
    uVar20 = *puVar18;
    cVar5 = *param_3;
    cVar9 = (*DAT_043f09a0)(uVar20);
    if ((((((bool)cVar5 == (cVar9 != '\0')) &&
          (cVar5 = param_3[1], cVar9 = (*DAT_043f09b0)(uVar20), (bool)cVar5 == (cVar9 != '\0'))) &&
         (cVar5 = param_3[2], cVar9 = (*DAT_043f09b8)(uVar20), (bool)cVar5 == (cVar9 != '\0'))) &&
        ((iVar11 = *(int *)(param_3 + 4), iVar10 = (*DAT_043f09a8)(uVar20), iVar11 == iVar10 &&
         (iVar11 = *(int *)(param_3 + 8), iVar10 = (*DAT_043f09c8)(uVar20), iVar11 == iVar10)))) &&
       ((iVar11 = *(int *)(param_3 + 0xc), iVar10 = (*DAT_043f09d8)(uVar20), iVar11 == iVar10 &&
        ((cVar5 = param_3[0x10], cVar9 = (*DAT_043f09e8)(uVar20), (bool)cVar5 == (cVar9 != '\0') &&
         (iVar11 = *(int *)(param_3 + 0x14), iVar10 = (*DAT_043f09f8)(uVar20), iVar11 == iVar10)))))
       ) break;
LAB_02b83588:
    do {
      puVar18 = puVar18 + 4;
      if (puVar4 == puVar18) {
        iVar11 = 0;
        goto LAB_02b836b8;
      }
    } while (param_3[0x18] != '\0');
  }
  iVar11 = 1;
LAB_02b836b8:
  do {
    lVar12 = *plVar1;
    lVar13 = param_1[0xb];
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar12;
      param_1[0xb] = lVar13;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  while( true ) {
    if (*plVar1 != lVar12 || param_1[0xb] != lVar13) break;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar12;
      *(long *)((long)param_1 + 0x54) = lVar13 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_02b836fc;
  }
  ClearExclusiveLocal();
  lVar12 = *plVar1;
  lVar13 = param_1[0xb];
  do {
    do {
      lVar24 = *plVar1;
      if (lVar24 != lVar12 || param_1[0xb] != lVar13) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto LAB_02b83fe8;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar12;
        *(long *)((long)param_1 + 0x54) = lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar6 = true;
LAB_02b83fe8:
    lVar12 = lVar24;
    lVar13 = param_1[0xb];
  } while (!bVar6);
LAB_02b836fc:
  nn::os::SignalLightEvent(pLVar2);
  if (iVar11 != 0) {
    return iVar11;
  }
  plVar23 = (long *)*param_2;
  lVar12 = (**(code **)(*plVar23 + 0x10))(plVar23,0x20,8);
  if (lVar12 == 0) {
    local_88 = 0;
    local_80 = 0;
    local_98 = 0;
    local_90 = (long *)0x0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar11 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar13 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar23;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
    (*DAT_043f0978)(lVar12);
    *(undefined1 *)(lVar12 + 0x19) = 1;
    local_88 = 0x20;
    local_80 = 8;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
    local_98 = lVar12;
    local_90 = plVar23;
  }
  (*DAT_043f0980)(lVar12,*param_3);
  (*DAT_043f0990)(lVar12,param_3[1]);
  (*DAT_043f0998)(lVar12,param_3[2]);
  (*DAT_043f0988)(lVar12,*(undefined4 *)(param_3 + 4));
  (*DAT_043f09c0)(lVar12,*(undefined4 *)(param_3 + 8));
  (*DAT_043f09d0)(lVar12,*(undefined4 *)(param_3 + 0xc));
  (*DAT_043f09e0)(lVar12,param_3[0x10]);
  (*DAT_043f09f0)(lVar12,*(undefined4 *)(param_3 + 0x14));
  (*DAT_043f0a00)(lVar12,param_3[0x18]);
  (*DAT_043f0a18)(lVar12,param_3[0x19]);
  lVar12 = nn::os::GetCurrentThread();
  do {
    if (*plVar1 != 0 || param_1[0xb] != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*plVar1 == 0 && param_1[0xb] == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar12;
            param_1[0xb] = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_02b838b4;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar12;
      param_1[0xb] = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_02b838b4:
  uVar14 = param_1[1];
  plVar23 = param_1 + 3;
  if (uVar14 < (ulong)param_1[2]) {
    FUN_02b84088(plVar23,uVar14,&local_98);
    param_1[1] = param_1[1] + 0x20;
  }
  else {
    uVar17 = param_1[4];
    lVar12 = (long)(uVar14 - *param_1) >> 5;
    uVar14 = lVar12 + 1;
    if (0x7ffffffffffffffe < uVar17) {
      uVar17 = 0x7fffffffffffffff;
    }
    if (uVar17 < uVar14) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar13 = param_1[2] - *param_1;
    uVar15 = lVar13 >> 4;
    if (uVar14 <= uVar15) {
      uVar14 = uVar15;
    }
    if ((ulong)(lVar13 >> 5) < uVar17 >> 1) {
      uVar17 = uVar14;
    }
    if (uVar17 == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = (**(code **)(*(long *)*plVar23 + 0x10))((long *)*plVar23,uVar17 << 5,8);
      if (lVar13 == 0) {
        (**(code **)(*(long *)*plVar23 + 0xb8))();
      }
    }
    lVar24 = lVar13 + lVar12 * 0x20;
    FUN_02b84088(plVar23,lVar24,&local_98);
    plVar22 = (long *)*param_1;
    plVar21 = (long *)param_1[1];
    lVar12 = lVar24 + 0x20;
    if (plVar21 == plVar22) {
      plVar21 = plVar22;
    }
    else {
      do {
        lVar24 = lVar24 + -0x20;
        plVar21 = plVar21 + -4;
        FUN_02b84088(plVar23,lVar24,plVar21);
      } while (plVar22 != plVar21);
      plVar22 = (long *)*param_1;
      plVar21 = (long *)param_1[1];
    }
    lVar16 = param_1[2];
    param_1[2] = lVar13 + uVar17 * 0x20;
    *param_1 = lVar24;
    param_1[1] = lVar12;
    if (plVar21 != plVar22) {
      lVar12 = tpidr_el0;
      do {
        plVar19 = plVar21 + -4;
        lVar13 = *plVar19;
        *plVar19 = 0;
        if (lVar13 != 0) {
          FUN_02bcbe58(auStack_78,0);
          plVar3 = (long *)plVar21[-3];
          lVar24 = plVar21[-2];
          lVar25 = plVar21[-1];
          uVar14 = (**(code **)(*plVar3 + 0xc0))(plVar3);
          if ((uVar14 & 1) == 0) {
LAB_02b83a84:
            (**(code **)(*plVar3 + 0x18))(plVar3,lVar13,lVar24,lVar25);
          }
          else {
            if (*(char *)(lVar12 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar12 + 0x38d488) = 1;
              *(undefined8 *)(lVar12 + 0x38d478) = 0;
              *(undefined8 *)(lVar12 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar12 + 0x38d480) < 1) goto LAB_02b83a84;
            FUN_02bcc824(plVar3,lVar13,lVar24,lVar25);
          }
          if (*(char *)(lVar12 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar12 + 0x38d488) = 1;
            *(undefined8 *)(lVar12 + 0x38d478) = 0;
            *(undefined8 *)(lVar12 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
          }
          iVar11 = *(int *)(lVar12 + 0x38d480) + -1;
          *(int *)(lVar12 + 0x38d480) = iVar11;
          if (iVar11 == 0) {
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
        plVar21 = plVar19;
      } while (plVar22 != plVar19);
    }
    if (plVar22 != (long *)0x0) {
      plVar23 = (long *)*plVar23;
      uVar14 = (**(code **)(*plVar23 + 0xc0))(plVar23);
      if ((uVar14 & 1) != 0) {
        lVar12 = tpidr_el0;
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar12 + 0x38d480)) {
          FUN_02bcc824(plVar23,plVar22,lVar16 - (long)plVar22,8);
          goto LAB_02b83ca8;
        }
      }
      (**(code **)(*plVar23 + 0x18))(plVar23,plVar22,lVar16 - (long)plVar22,8);
    }
  }
LAB_02b83ca8:
  do {
    lVar12 = *plVar1;
    lVar13 = param_1[0xb];
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar12;
      param_1[0xb] = lVar13;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    if (*plVar1 != lVar12 || param_1[0xb] != lVar13) {
      ClearExclusiveLocal();
      lVar12 = *plVar1;
      lVar13 = param_1[0xb];
      goto LAB_02b83ff8;
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = 0;
      *(long *)((long)param_1 + 0x54) = lVar13;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  goto LAB_02b83cec;
LAB_02b83ff8:
  do {
    lVar24 = *plVar1;
    if (lVar24 == lVar12 && param_1[0xb] == lVar13) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = 0;
        *(long *)((long)param_1 + 0x54) = lVar13;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_02b83ff8;
      bVar6 = true;
    }
    else {
      bVar6 = false;
      ClearExclusiveLocal();
    }
    lVar12 = lVar24;
    lVar13 = param_1[0xb];
  } while (!bVar6);
LAB_02b83cec:
  nn::os::SignalLightEvent(pLVar2);
  lVar12 = local_98;
  local_98 = 0;
  if (lVar12 == 0) {
    return 1;
  }
  FUN_02bcbe58(auStack_78,0);
  uVar8 = local_80;
  uVar20 = local_88;
  plVar1 = local_90;
  uVar14 = (**(code **)(*local_90 + 0xc0))(local_90);
  if ((uVar14 & 1) != 0) {
    lVar13 = tpidr_el0;
    if (*(char *)(lVar13 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar13 + 0x38d488) = 1;
      *(undefined8 *)(lVar13 + 0x38d478) = 0;
      *(undefined8 *)(lVar13 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar13 + 0x38d480)) {
      FUN_02bcc824(plVar1,lVar12,uVar20,uVar8);
      goto LAB_02b83d88;
    }
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar12,uVar20,uVar8);
LAB_02b83d88:
  lVar12 = tpidr_el0;
  if (*(char *)(lVar12 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar12 + 0x38d488) = 1;
    *(undefined8 *)(lVar12 + 0x38d478) = 0;
    *(undefined8 *)(lVar12 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar11 = *(int *)(lVar12 + 0x38d480) + -1;
  *(int *)(lVar12 + 0x38d480) = iVar11;
  if (iVar11 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar12 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar12 + 0x38d488) = 1;
      *(undefined8 *)(lVar12 + 0x38d478) = 0;
      *(undefined8 *)(lVar12 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar12 + 0x38d484) = 0;
  }
  return 1;
}


