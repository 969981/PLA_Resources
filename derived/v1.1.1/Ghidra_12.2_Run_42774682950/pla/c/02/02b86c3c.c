/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b86c3c; name: FUN_02b86c3c
 */


/* WARNING: Removing unreachable block (ram,0x02b86e18) */

int FUN_02b86c3c(long *param_1,undefined8 *param_2,int *param_3)

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
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined8 uVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  long local_b8;
  long *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  int local_98 [2];
  int local_90 [2];
  int local_88 [2];
  int local_80 [2];
  int local_78 [6];
  
  lVar10 = nn::os::GetCurrentThread();
  plVar1 = param_1 + 10;
  do {
    lVar11 = *plVar1;
    lVar22 = param_1[0xb];
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar11;
      param_1[0xb] = lVar22;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  pLVar2 = (LightEventType *)((long)param_1 + 0x44);
  do {
    while ((lVar11 != 0 && (lVar10 != lVar11))) {
      nn::os::WaitLightEvent(pLVar2);
      do {
        lVar11 = *plVar1;
        lVar22 = param_1[0xb];
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar11;
          param_1[0xb] = lVar22;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    while( true ) {
      if (*plVar1 != lVar11 || param_1[0xb] != lVar22) break;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar11;
        *(long *)((long)param_1 + 0x54) = lVar22 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        puVar16 = (undefined8 *)*param_1;
        puVar4 = (undefined8 *)param_1[1];
        if (puVar16 != puVar4) goto LAB_02b86d14;
        iVar9 = 0;
        goto LAB_02b86de4;
      }
    }
    ClearExclusiveLocal();
    lVar11 = *plVar1;
    lVar22 = param_1[0xb];
  } while( true );
LAB_02b86d14:
  do {
    uVar18 = *puVar16;
    iVar9 = (*DAT_043f08f0)(uVar18);
    if (iVar9 == *param_3) {
      (*DAT_043f08f8)(uVar18,&local_b8,local_78,local_80,local_88);
      if ((((param_3[1] == (int)local_b8) && (param_3[3] == local_78[0])) &&
          (param_3[4] == local_80[0])) &&
         (((param_3[6] == local_88[0] &&
           ((*DAT_043f0900)(uVar18,local_90,local_98), param_3[2] == local_90[0])) &&
          (param_3[5] == local_98[0])))) {
        iVar9 = 1;
        goto LAB_02b86de4;
      }
    }
    puVar16 = puVar16 + 4;
  } while (puVar4 != puVar16);
  iVar9 = 0;
LAB_02b86de4:
  do {
    lVar10 = *plVar1;
    lVar11 = param_1[0xb];
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar10;
      param_1[0xb] = lVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  while( true ) {
    if (*plVar1 != lVar10 || param_1[0xb] != lVar11) break;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar10;
      *(long *)((long)param_1 + 0x54) = lVar11 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_02b86e28;
  }
  ClearExclusiveLocal();
  lVar10 = *plVar1;
  lVar11 = param_1[0xb];
  do {
    do {
      lVar22 = *plVar1;
      if (lVar22 != lVar10 || param_1[0xb] != lVar11) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto LAB_02b87694;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar10;
        *(long *)((long)param_1 + 0x54) = lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar6 = true;
LAB_02b87694:
    lVar10 = lVar22;
    lVar11 = param_1[0xb];
  } while (!bVar6);
LAB_02b86e28:
  nn::os::SignalLightEvent(pLVar2);
  if (iVar9 != 0) {
    return iVar9;
  }
  plVar21 = (long *)*param_2;
  lVar10 = (**(code **)(*plVar21 + 0x10))(plVar21,0x10,8);
  if (lVar10 == 0) {
    local_a8 = 0;
    local_a0 = 0;
    local_b8 = 0;
    local_b0 = (long *)0x0;
  }
  else {
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar7 = PTR_DAT_04379528;
      if (iVar9 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar21;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    (*DAT_043f08b0)(lVar10);
    *(undefined1 *)(lVar10 + 9) = 1;
    local_a8 = 0x10;
    local_a0 = 8;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    local_b8 = lVar10;
    local_b0 = plVar21;
  }
  (*DAT_043f08b8)(lVar10,*param_3);
  (*DAT_043f08c0)(lVar10,param_3[1],param_3[3],param_3[4],param_3[6]);
  (*DAT_043f08c8)(lVar10,param_3[2],param_3[5]);
  lVar10 = nn::os::GetCurrentThread();
  do {
    if (*plVar1 != 0 || param_1[0xb] != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*plVar1 == 0 && param_1[0xb] == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar10;
            param_1[0xb] = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_02b86f60;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar10;
      param_1[0xb] = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_02b86f60:
  uVar12 = param_1[1];
  plVar21 = param_1 + 3;
  if (uVar12 < (ulong)param_1[2]) {
    FUN_02b87734(plVar21,uVar12,&local_b8);
    param_1[1] = param_1[1] + 0x20;
  }
  else {
    uVar15 = param_1[4];
    lVar10 = (long)(uVar12 - *param_1) >> 5;
    uVar12 = lVar10 + 1;
    if (0x7ffffffffffffffe < uVar15) {
      uVar15 = 0x7fffffffffffffff;
    }
    if (uVar15 < uVar12) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar11 = param_1[2] - *param_1;
    uVar13 = lVar11 >> 4;
    if (uVar12 <= uVar13) {
      uVar12 = uVar13;
    }
    if ((ulong)(lVar11 >> 5) < uVar15 >> 1) {
      uVar15 = uVar12;
    }
    if (uVar15 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = (**(code **)(*(long *)*plVar21 + 0x10))((long *)*plVar21,uVar15 << 5,8);
      if (lVar11 == 0) {
        (**(code **)(*(long *)*plVar21 + 0xb8))();
      }
    }
    lVar22 = lVar11 + lVar10 * 0x20;
    FUN_02b87734(plVar21,lVar22,&local_b8);
    plVar20 = (long *)*param_1;
    plVar19 = (long *)param_1[1];
    lVar10 = lVar22 + 0x20;
    if (plVar19 == plVar20) {
      plVar19 = plVar20;
    }
    else {
      do {
        lVar22 = lVar22 + -0x20;
        plVar19 = plVar19 + -4;
        FUN_02b87734(plVar21,lVar22,plVar19);
      } while (plVar20 != plVar19);
      plVar20 = (long *)*param_1;
      plVar19 = (long *)param_1[1];
    }
    lVar14 = param_1[2];
    param_1[2] = lVar11 + uVar15 * 0x20;
    *param_1 = lVar22;
    param_1[1] = lVar10;
    if (plVar19 != plVar20) {
      lVar10 = tpidr_el0;
      do {
        plVar17 = plVar19 + -4;
        lVar11 = *plVar17;
        *plVar17 = 0;
        if (lVar11 != 0) {
          FUN_02bcbe58(local_78,0);
          plVar3 = (long *)plVar19[-3];
          lVar22 = plVar19[-2];
          lVar23 = plVar19[-1];
          uVar12 = (**(code **)(*plVar3 + 0xc0))(plVar3);
          if ((uVar12 & 1) == 0) {
LAB_02b87130:
            (**(code **)(*plVar3 + 0x18))(plVar3,lVar11,lVar22,lVar23);
          }
          else {
            if (*(char *)(lVar10 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar10 + 0x38d488) = 1;
              *(undefined8 *)(lVar10 + 0x38d478) = 0;
              *(undefined8 *)(lVar10 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_02b87130;
            FUN_02bcc824(plVar3,lVar11,lVar22,lVar23);
          }
          if (*(char *)(lVar10 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar10 + 0x38d488) = 1;
            *(undefined8 *)(lVar10 + 0x38d478) = 0;
            *(undefined8 *)(lVar10 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
          }
          iVar9 = *(int *)(lVar10 + 0x38d480) + -1;
          *(int *)(lVar10 + 0x38d480) = iVar9;
          if (iVar9 == 0) {
            FUN_02bcc320();
            if (*(char *)(lVar10 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar10 + 0x38d488) = 1;
              *(undefined8 *)(lVar10 + 0x38d478) = 0;
              *(undefined8 *)(lVar10 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
            }
            *(undefined4 *)(lVar10 + 0x38d484) = 0;
          }
        }
        plVar19 = plVar17;
      } while (plVar20 != plVar17);
    }
    if (plVar20 != (long *)0x0) {
      plVar21 = (long *)*plVar21;
      uVar12 = (**(code **)(*plVar21 + 0xc0))(plVar21);
      if ((uVar12 & 1) != 0) {
        lVar10 = tpidr_el0;
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar10 + 0x38d480)) {
          FUN_02bcc824(plVar21,plVar20,lVar14 - (long)plVar20,8);
          goto LAB_02b87354;
        }
      }
      (**(code **)(*plVar21 + 0x18))(plVar21,plVar20,lVar14 - (long)plVar20,8);
    }
  }
LAB_02b87354:
  do {
    lVar10 = *plVar1;
    lVar11 = param_1[0xb];
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar10;
      param_1[0xb] = lVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    if (*plVar1 != lVar10 || param_1[0xb] != lVar11) {
      ClearExclusiveLocal();
      lVar10 = *plVar1;
      lVar11 = param_1[0xb];
      goto LAB_02b876a4;
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = 0;
      *(long *)((long)param_1 + 0x54) = lVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  goto LAB_02b87398;
LAB_02b876a4:
  do {
    lVar22 = *plVar1;
    if (lVar22 == lVar10 && param_1[0xb] == lVar11) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = 0;
        *(long *)((long)param_1 + 0x54) = lVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_02b876a4;
      bVar6 = true;
    }
    else {
      bVar6 = false;
      ClearExclusiveLocal();
    }
    lVar10 = lVar22;
    lVar11 = param_1[0xb];
  } while (!bVar6);
LAB_02b87398:
  nn::os::SignalLightEvent(pLVar2);
  lVar10 = local_b8;
  local_b8 = 0;
  if (lVar10 == 0) {
    return 1;
  }
  FUN_02bcbe58(local_78,0);
  uVar8 = local_a0;
  uVar18 = local_a8;
  plVar1 = local_b0;
  uVar12 = (**(code **)(*local_b0 + 0xc0))(local_b0);
  if ((uVar12 & 1) != 0) {
    lVar11 = tpidr_el0;
    if (*(char *)(lVar11 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar11 + 0x38d488) = 1;
      *(undefined8 *)(lVar11 + 0x38d478) = 0;
      *(undefined8 *)(lVar11 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar11 + 0x38d480)) {
      FUN_02bcc824(plVar1,lVar10,uVar18,uVar8);
      goto LAB_02b87434;
    }
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar10,uVar18,uVar8);
LAB_02b87434:
  lVar10 = tpidr_el0;
  if (*(char *)(lVar10 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar10 + 0x38d488) = 1;
    *(undefined8 *)(lVar10 + 0x38d478) = 0;
    *(undefined8 *)(lVar10 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar9 = *(int *)(lVar10 + 0x38d480) + -1;
  *(int *)(lVar10 + 0x38d480) = iVar9;
  if (iVar9 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar10 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar10 + 0x38d488) = 1;
      *(undefined8 *)(lVar10 + 0x38d478) = 0;
      *(undefined8 *)(lVar10 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar10 + 0x38d484) = 0;
  }
  return 1;
}


