/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b85b90; name: FUN_02b85b90
 */


int FUN_02b85b90(long *param_1,undefined8 *param_2,char *param_3)

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
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  long *plVar19;
  long lVar20;
  undefined8 *puVar21;
  long *plVar22;
  long lVar23;
  long local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 local_88;
  char local_80 [4];
  char local_7c [4];
  char local_78 [24];
  
  lVar10 = nn::os::GetCurrentThread();
  plVar1 = param_1 + 10;
  do {
    lVar11 = *plVar1;
    lVar20 = param_1[0xb];
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar11;
      param_1[0xb] = lVar20;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  pLVar2 = (LightEventType *)((long)param_1 + 0x44);
  do {
    while ((lVar11 != 0 && (lVar10 != lVar11))) {
      nn::os::WaitLightEvent(pLVar2);
      do {
        lVar11 = *plVar1;
        lVar20 = param_1[0xb];
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar11;
          param_1[0xb] = lVar20;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    while( true ) {
      if (*plVar1 != lVar11 || param_1[0xb] != lVar20) break;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar11;
        *(long *)((long)param_1 + 0x54) = lVar20 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        puVar21 = (undefined8 *)*param_1;
        puVar4 = (undefined8 *)param_1[1];
        if (puVar21 != puVar4) goto LAB_02b85c70;
        iVar9 = 0;
        goto LAB_02b86138;
      }
    }
    ClearExclusiveLocal();
    lVar11 = *plVar1;
    lVar20 = param_1[0xb];
  } while( true );
LAB_02b85c70:
  do {
    uVar18 = *puVar21;
    (*DAT_043f0970)(uVar18,0,&local_a0,local_78,local_7c,local_80);
    if (((((bool)*param_3 == ((char)local_a0 != '\0')) &&
         ((bool)param_3[1] == (local_78[0] != '\0'))) && ((bool)param_3[2] == (local_7c[0] != '\0'))
        ) && ((local_80[0] != '\0') == (bool)param_3[3])) {
      (*DAT_043f0970)(uVar18,1,&local_a0,local_78,local_7c,local_80);
      if ((((bool)param_3[4] == ((char)local_a0 != '\0')) &&
          ((bool)param_3[5] == (local_78[0] != '\0'))) &&
         (((bool)param_3[6] == (local_7c[0] != '\0') && ((local_80[0] != '\0') == (bool)param_3[7]))
         )) {
        (*DAT_043f0970)(uVar18,2,&local_a0,local_78,local_7c,local_80);
        if ((((bool)param_3[8] == ((char)local_a0 != '\0')) &&
            ((bool)param_3[9] == (local_78[0] != '\0'))) &&
           (((bool)param_3[10] == (local_7c[0] != '\0') &&
            ((local_80[0] != '\0') == (bool)param_3[0xb])))) {
          (*DAT_043f0970)(uVar18,3,&local_a0,local_78,local_7c,local_80);
          if (((((bool)param_3[0xc] == ((char)local_a0 != '\0')) &&
               ((bool)param_3[0xd] == (local_78[0] != '\0'))) &&
              ((bool)param_3[0xe] == (local_7c[0] != '\0'))) &&
             ((local_80[0] != '\0') == (bool)param_3[0xf])) {
            (*DAT_043f0970)(uVar18,4,&local_a0,local_78,local_7c,local_80);
            if ((((bool)param_3[0x10] == ((char)local_a0 != '\0')) &&
                ((bool)param_3[0x11] == (local_78[0] != '\0'))) &&
               (((bool)param_3[0x12] == (local_7c[0] != '\0') &&
                ((local_80[0] != '\0') == (bool)param_3[0x13])))) {
              (*DAT_043f0970)(uVar18,5,&local_a0,local_78,local_7c,local_80);
              if ((((bool)param_3[0x14] == ((char)local_a0 != '\0')) &&
                  ((bool)param_3[0x15] == (local_78[0] != '\0'))) &&
                 (((bool)param_3[0x16] == (local_7c[0] != '\0') &&
                  ((local_80[0] != '\0') == (bool)param_3[0x17])))) {
                (*DAT_043f0970)(uVar18,6,&local_a0,local_78,local_7c,local_80);
                if (((((bool)param_3[0x18] == ((char)local_a0 != '\0')) &&
                     ((bool)param_3[0x19] == (local_78[0] != '\0'))) &&
                    ((bool)param_3[0x1a] == (local_7c[0] != '\0'))) &&
                   ((local_80[0] != '\0') == (bool)param_3[0x1b])) {
                  (*DAT_043f0970)(uVar18,7,&local_a0,local_78,local_7c,local_80);
                  if ((((bool)param_3[0x1c] == ((char)local_a0 != '\0')) &&
                      ((bool)param_3[0x1d] == (local_78[0] != '\0'))) &&
                     (((bool)param_3[0x1e] == (local_7c[0] != '\0') &&
                      ((local_80[0] != '\0') == (bool)param_3[0x1f])))) {
                    iVar9 = 1;
                    goto LAB_02b86138;
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar21 = puVar21 + 4;
  } while (puVar4 != puVar21);
  iVar9 = 0;
LAB_02b86138:
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
    if (cVar5 == '\0') goto LAB_02b861b8;
  }
  ClearExclusiveLocal();
  lVar10 = *plVar1;
  lVar11 = param_1[0xb];
  do {
    do {
      lVar20 = *plVar1;
      if (lVar20 != lVar10 || param_1[0xb] != lVar11) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto LAB_02b8619c;
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
LAB_02b8619c:
    lVar10 = lVar20;
    lVar11 = param_1[0xb];
  } while (!bVar6);
LAB_02b861b8:
  nn::os::SignalLightEvent(pLVar2);
  if (iVar9 != 0) {
    return iVar9;
  }
  plVar19 = (long *)*param_2;
  lVar10 = (**(code **)(*plVar19 + 0x10))(plVar19,8,4);
  if (lVar10 == 0) {
    local_90 = 0;
    local_88 = 0;
    local_a0 = 0;
    local_98 = (long *)0x0;
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
    *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar19;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    (*DAT_043f0960)(lVar10);
    *(undefined1 *)(lVar10 + 5) = 1;
    local_90 = 8;
    local_88 = 4;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    local_a0 = lVar10;
    local_98 = plVar19;
  }
  (*DAT_043f0968)(lVar10,0,*param_3,param_3[1],param_3[2],param_3[3]);
  (*DAT_043f0968)(lVar10,1,param_3[4],param_3[5],param_3[6],param_3[7]);
  (*DAT_043f0968)(lVar10,2,param_3[8],param_3[9],param_3[10],param_3[0xb]);
  (*DAT_043f0968)(lVar10,3,param_3[0xc],param_3[0xd],param_3[0xe],param_3[0xf]);
  (*DAT_043f0968)(lVar10,4,param_3[0x10],param_3[0x11],param_3[0x12],param_3[0x13]);
  (*DAT_043f0968)(lVar10,5,param_3[0x14],param_3[0x15],param_3[0x16],param_3[0x17]);
  (*DAT_043f0968)(lVar10,6,param_3[0x18],param_3[0x19],param_3[0x1a],param_3[0x1b]);
  (*DAT_043f0968)(lVar10,7,param_3[0x1c],param_3[0x1d],param_3[0x1e],param_3[0x1f]);
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
          if (cVar5 == '\0') goto LAB_02b863b8;
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
LAB_02b863b8:
  uVar12 = param_1[1];
  plVar19 = param_1 + 3;
  if (uVar12 < (ulong)param_1[2]) {
    FUN_02b86b58(plVar19,uVar12,&local_a0);
    param_1[1] = param_1[1] + 0x20;
  }
  else {
    uVar15 = param_1[4];
    lVar10 = (long)(uVar12 - *param_1) >> 5;
    if (0x7ffffffffffffffe < uVar15) {
      uVar15 = 0x7fffffffffffffff;
    }
    uVar12 = lVar10 + 1;
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
      lVar11 = (**(code **)(*(long *)*plVar19 + 0x10))((long *)*plVar19,uVar15 << 5,8);
      if (lVar11 == 0) {
        (**(code **)(*(long *)*plVar19 + 0xb8))();
      }
    }
    lVar20 = lVar11 + lVar10 * 0x20;
    FUN_02b86b58(plVar19,lVar20,&local_a0);
    plVar22 = (long *)*param_1;
    lVar10 = lVar20 + 0x20;
    plVar17 = (long *)param_1[1];
    if (plVar17 == plVar22) {
      plVar17 = plVar22;
    }
    else {
      do {
        lVar20 = lVar20 + -0x20;
        plVar17 = plVar17 + -4;
        FUN_02b86b58(plVar19,lVar20,plVar17);
      } while (plVar22 != plVar17);
      plVar22 = (long *)*param_1;
      plVar17 = (long *)param_1[1];
    }
    lVar14 = param_1[2];
    param_1[2] = lVar11 + uVar15 * 0x20;
    *param_1 = lVar20;
    param_1[1] = lVar10;
    if (plVar17 != plVar22) {
      lVar10 = tpidr_el0;
      do {
        plVar16 = plVar17 + -4;
        lVar11 = *plVar16;
        *plVar16 = 0;
        if (lVar11 != 0) {
          FUN_02bcbe58(local_78,0);
          plVar3 = (long *)plVar17[-3];
          lVar20 = plVar17[-2];
          lVar23 = plVar17[-1];
          uVar12 = (**(code **)(*plVar3 + 0xc0))(plVar3);
          if ((uVar12 & 1) == 0) {
LAB_02b86594:
            (**(code **)(*plVar3 + 0x18))(plVar3,lVar11,lVar20,lVar23);
          }
          else {
            if (*(char *)(lVar10 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar10 + 0x38d488) = 1;
              *(undefined8 *)(lVar10 + 0x38d478) = 0;
              *(undefined8 *)(lVar10 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_02b86594;
            FUN_02bcc824(plVar3,lVar11,lVar20,lVar23);
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
        plVar17 = plVar16;
      } while (plVar22 != plVar16);
    }
    if (plVar22 != (long *)0x0) {
      plVar19 = (long *)*plVar19;
      uVar12 = (**(code **)(*plVar19 + 0xc0))(plVar19);
      if ((uVar12 & 1) != 0) {
        lVar10 = tpidr_el0;
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar10 + 0x38d480)) {
          FUN_02bcc824(plVar19,plVar22,lVar14 - (long)plVar22,8);
          goto LAB_02b867bc;
        }
      }
      (**(code **)(*plVar19 + 0x18))(plVar19,plVar22,lVar14 - (long)plVar22,8);
    }
  }
LAB_02b867bc:
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
      goto LAB_02b86948;
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = 0;
      *(long *)((long)param_1 + 0x54) = lVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  goto LAB_02b867f4;
LAB_02b86948:
  do {
    lVar20 = *plVar1;
    if (lVar20 == lVar10 && param_1[0xb] == lVar11) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = 0;
        *(long *)((long)param_1 + 0x54) = lVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_02b86948;
      bVar6 = true;
    }
    else {
      bVar6 = false;
      ClearExclusiveLocal();
    }
    lVar10 = lVar20;
    lVar11 = param_1[0xb];
  } while (!bVar6);
LAB_02b867f4:
  nn::os::SignalLightEvent(pLVar2);
  lVar10 = local_a0;
  local_a0 = 0;
  if (lVar10 == 0) {
    return 1;
  }
  FUN_02bcbe58(local_78,0);
  uVar8 = local_88;
  uVar18 = local_90;
  plVar1 = local_98;
  uVar12 = (**(code **)(*local_98 + 0xc0))(local_98);
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
      goto LAB_02b86890;
    }
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar10,uVar18,uVar8);
LAB_02b86890:
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


