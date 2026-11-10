/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b8416c; name: FUN_02b8416c
 */


/* WARNING: Removing unreachable block (ram,0x02b843fc) */

int FUN_02b8416c(long *param_1,undefined8 *param_2,char *param_3)

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
  long *plVar18;
  undefined8 uVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  undefined8 *puVar24;
  long lVar25;
  long local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 local_88;
  int local_80 [2];
  int local_78 [6];
  
  lVar12 = nn::os::GetCurrentThread();
  plVar1 = param_1 + 10;
  do {
    lVar13 = *plVar1;
    lVar23 = param_1[0xb];
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar13;
      param_1[0xb] = lVar23;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  pLVar2 = (LightEventType *)((long)param_1 + 0x44);
  do {
    while ((lVar13 != 0 && (lVar12 != lVar13))) {
      nn::os::WaitLightEvent(pLVar2);
      do {
        lVar13 = *plVar1;
        lVar23 = param_1[0xb];
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar13;
          param_1[0xb] = lVar23;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    while( true ) {
      if (*plVar1 != lVar13 || param_1[0xb] != lVar23) break;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar13;
        *(long *)((long)param_1 + 0x54) = lVar23 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        puVar24 = (undefined8 *)*param_1;
        puVar4 = (undefined8 *)param_1[1];
        if (puVar24 != puVar4) goto LAB_02b84248;
        iVar11 = 0;
        goto LAB_02b843c8;
      }
    }
    ClearExclusiveLocal();
    lVar13 = *plVar1;
    lVar23 = param_1[0xb];
  } while( true );
LAB_02b84248:
  do {
    uVar19 = *puVar24;
    cVar5 = *param_3;
    cVar9 = (*DAT_043f0ab0)(uVar19);
    if (((((bool)cVar5 == (cVar9 != '\0')) &&
         (cVar5 = param_3[1], cVar9 = (*DAT_043f0ab8)(uVar19), (bool)cVar5 == (cVar9 != '\0'))) &&
        (iVar11 = *(int *)(param_3 + 4), iVar10 = (*DAT_043f0ac0)(uVar19), iVar11 == iVar10)) &&
       (((cVar5 = param_3[8], cVar9 = (*DAT_043f0ac8)(uVar19), (bool)cVar5 == (cVar9 != '\0') &&
         (iVar11 = *(int *)(param_3 + 0xc), iVar10 = (*DAT_043f0ad0)(uVar19,1), iVar11 == iVar10))
        && (iVar11 = *(int *)(param_3 + 0x1c), iVar10 = (*DAT_043f0ad0)(uVar19,2), iVar11 == iVar10)
        ))) {
      (*DAT_043f0ad8)(uVar19,1,&local_a0,local_78,local_80);
      if (((*(int *)(param_3 + 0x10) == (int)local_a0) && (*(int *)(param_3 + 0x14) == local_78[0]))
         && (*(int *)(param_3 + 0x18) == local_80[0])) {
        (*DAT_043f0ad8)(uVar19,2,&local_a0,local_78,local_80);
        if (((*(int *)(param_3 + 0x20) == (int)local_a0) &&
            (*(int *)(param_3 + 0x24) == local_78[0])) && (*(int *)(param_3 + 0x28) == local_80[0]))
        {
          iVar11 = 1;
          goto LAB_02b843c8;
        }
      }
    }
    puVar24 = puVar24 + 4;
  } while (puVar4 != puVar24);
  iVar11 = 0;
LAB_02b843c8:
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
    if (cVar5 == '\0') goto LAB_02b8440c;
  }
  ClearExclusiveLocal();
  lVar12 = *plVar1;
  lVar13 = param_1[0xb];
  do {
    do {
      lVar23 = *plVar1;
      if (lVar23 != lVar12 || param_1[0xb] != lVar13) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto LAB_02b84cdc;
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
LAB_02b84cdc:
    lVar12 = lVar23;
    lVar13 = param_1[0xb];
  } while (!bVar6);
LAB_02b8440c:
  nn::os::SignalLightEvent(pLVar2);
  if (iVar11 != 0) {
    return iVar11;
  }
  plVar22 = (long *)*param_2;
  lVar12 = (**(code **)(*plVar22 + 0x10))(plVar22,0x10,8);
  if (lVar12 == 0) {
    local_90 = 0;
    local_88 = 0;
    local_a0 = 0;
    local_98 = (long *)0x0;
  }
  else {
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar11 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar7 = PTR_DAT_04379528;
      if (iVar11 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar13 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar22;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
    (*DAT_043f0a78)(lVar12);
    *(undefined1 *)(lVar12 + 9) = 1;
    local_90 = 0x10;
    local_88 = 8;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
    local_a0 = lVar12;
    local_98 = plVar22;
  }
  (*DAT_043f0a80)(lVar12,*param_3);
  (*DAT_043f0a88)(lVar12,param_3[1]);
  (*DAT_043f0a90)(lVar12,*(undefined4 *)(param_3 + 4));
  (*DAT_043f0a98)(lVar12,param_3[8]);
  (*DAT_043f0aa0)(lVar12,1,*(undefined4 *)(param_3 + 0xc));
  (*DAT_043f0aa8)(lVar12,1,*(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 0x14),
                  *(undefined4 *)(param_3 + 0x18));
  (*DAT_043f0aa0)(lVar12,2,*(undefined4 *)(param_3 + 0x1c));
  (*DAT_043f0aa8)(lVar12,2,*(undefined4 *)(param_3 + 0x20),*(undefined4 *)(param_3 + 0x24),
                  *(undefined4 *)(param_3 + 0x28));
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
          if (cVar5 == '\0') goto LAB_02b845ac;
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
LAB_02b845ac:
  uVar14 = param_1[1];
  plVar22 = param_1 + 3;
  if (uVar14 < (ulong)param_1[2]) {
    FUN_02b84d7c(plVar22,uVar14,&local_a0);
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
      lVar13 = (**(code **)(*(long *)*plVar22 + 0x10))((long *)*plVar22,uVar17 << 5,8);
      if (lVar13 == 0) {
        (**(code **)(*(long *)*plVar22 + 0xb8))();
      }
    }
    lVar23 = lVar13 + lVar12 * 0x20;
    FUN_02b84d7c(plVar22,lVar23,&local_a0);
    plVar21 = (long *)*param_1;
    plVar20 = (long *)param_1[1];
    lVar12 = lVar23 + 0x20;
    if (plVar20 == plVar21) {
      plVar20 = plVar21;
    }
    else {
      do {
        lVar23 = lVar23 + -0x20;
        plVar20 = plVar20 + -4;
        FUN_02b84d7c(plVar22,lVar23,plVar20);
      } while (plVar21 != plVar20);
      plVar21 = (long *)*param_1;
      plVar20 = (long *)param_1[1];
    }
    lVar16 = param_1[2];
    param_1[2] = lVar13 + uVar17 * 0x20;
    *param_1 = lVar23;
    param_1[1] = lVar12;
    if (plVar20 != plVar21) {
      lVar12 = tpidr_el0;
      do {
        plVar18 = plVar20 + -4;
        lVar13 = *plVar18;
        *plVar18 = 0;
        if (lVar13 != 0) {
          FUN_02bcbe58(local_78,0);
          plVar3 = (long *)plVar20[-3];
          lVar23 = plVar20[-2];
          lVar25 = plVar20[-1];
          uVar14 = (**(code **)(*plVar3 + 0xc0))(plVar3);
          if ((uVar14 & 1) == 0) {
LAB_02b84774:
            (**(code **)(*plVar3 + 0x18))(plVar3,lVar13,lVar23,lVar25);
          }
          else {
            if (*(char *)(lVar12 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar12 + 0x38d488) = 1;
              *(undefined8 *)(lVar12 + 0x38d478) = 0;
              *(undefined8 *)(lVar12 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar12 + 0x38d480) < 1) goto LAB_02b84774;
            FUN_02bcc824(plVar3,lVar13,lVar23,lVar25);
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
        plVar20 = plVar18;
      } while (plVar21 != plVar18);
    }
    if (plVar21 != (long *)0x0) {
      plVar22 = (long *)*plVar22;
      uVar14 = (**(code **)(*plVar22 + 0xc0))(plVar22);
      if ((uVar14 & 1) != 0) {
        lVar12 = tpidr_el0;
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar12 + 0x38d480)) {
          FUN_02bcc824(plVar22,plVar21,lVar16 - (long)plVar21,8);
          goto LAB_02b84998;
        }
      }
      (**(code **)(*plVar22 + 0x18))(plVar22,plVar21,lVar16 - (long)plVar21,8);
    }
  }
LAB_02b84998:
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
      goto LAB_02b84cec;
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = 0;
      *(long *)((long)param_1 + 0x54) = lVar13;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  goto LAB_02b849dc;
LAB_02b84cec:
  do {
    lVar23 = *plVar1;
    if (lVar23 == lVar12 && param_1[0xb] == lVar13) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = 0;
        *(long *)((long)param_1 + 0x54) = lVar13;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_02b84cec;
      bVar6 = true;
    }
    else {
      bVar6 = false;
      ClearExclusiveLocal();
    }
    lVar12 = lVar23;
    lVar13 = param_1[0xb];
  } while (!bVar6);
LAB_02b849dc:
  nn::os::SignalLightEvent(pLVar2);
  lVar12 = local_a0;
  local_a0 = 0;
  if (lVar12 == 0) {
    return 1;
  }
  FUN_02bcbe58(local_78,0);
  uVar8 = local_88;
  uVar19 = local_90;
  plVar1 = local_98;
  uVar14 = (**(code **)(*local_98 + 0xc0))(local_98);
  if ((uVar14 & 1) != 0) {
    lVar13 = tpidr_el0;
    if (*(char *)(lVar13 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar13 + 0x38d488) = 1;
      *(undefined8 *)(lVar13 + 0x38d478) = 0;
      *(undefined8 *)(lVar13 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar13 + 0x38d480)) {
      FUN_02bcc824(plVar1,lVar12,uVar19,uVar8);
      goto LAB_02b84a78;
    }
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar12,uVar19,uVar8);
LAB_02b84a78:
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


