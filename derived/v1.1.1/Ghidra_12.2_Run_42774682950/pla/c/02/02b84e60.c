/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b84e60; name: FUN_02b84e60
 */


/* WARNING: Removing unreachable block (ram,0x02b850f0) */

int FUN_02b84e60(long *param_1,undefined8 *param_2,char *param_3)

{
  long *plVar1;
  LightEventType *pLVar2;
  long *plVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined *puVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  long *plVar23;
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
    lVar20 = param_1[0xb];
    cVar8 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar12;
      param_1[0xb] = lVar20;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  pLVar2 = (LightEventType *)((long)param_1 + 0x44);
  do {
    while ((lVar12 != 0 && (lVar11 != lVar12))) {
      nn::os::WaitLightEvent(pLVar2);
      do {
        lVar12 = *plVar1;
        lVar20 = param_1[0xb];
        cVar8 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar12;
          param_1[0xb] = lVar20;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    while( true ) {
      if (*plVar1 != lVar12 || param_1[0xb] != lVar20) break;
      cVar8 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar12;
        *(long *)((long)param_1 + 0x54) = lVar20 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
      if (cVar8 == '\0') {
        puVar22 = (undefined8 *)*param_1;
        puVar4 = (undefined8 *)param_1[1];
        if (puVar22 != puVar4) goto LAB_02b84f34;
        iVar10 = 0;
        goto LAB_02b850bc;
      }
    }
    ClearExclusiveLocal();
    lVar12 = *plVar1;
    lVar20 = param_1[0xb];
  } while( true );
  while (puVar22 = puVar22 + 4, puVar4 != puVar22) {
LAB_02b84f34:
    uVar21 = *puVar22;
    cVar8 = (*DAT_043f0948)(uVar21,0);
    if (((((((cVar8 != '\0') == (bool)*param_3) &&
           (cVar8 = (*DAT_043f0948)(uVar21,1), (cVar8 != '\0') == (bool)param_3[1])) &&
          (cVar8 = (*DAT_043f0948)(uVar21,2), (cVar8 != '\0') == (bool)param_3[2])) &&
         ((cVar8 = (*DAT_043f0948)(uVar21,3), (cVar8 != '\0') == (bool)param_3[3] &&
          (cVar8 = (*DAT_043f0948)(uVar21,4), (cVar8 != '\0') == (bool)param_3[4])))) &&
        ((cVar8 = (*DAT_043f0948)(uVar21,5), (cVar8 != '\0') == (bool)param_3[5] &&
         ((cVar8 = (*DAT_043f0948)(uVar21,6), (cVar8 != '\0') == (bool)param_3[6] &&
          (cVar8 = (*DAT_043f0948)(uVar21,7), (cVar8 != '\0') == (bool)param_3[7])))))) &&
       ((iVar10 = *(int *)(param_3 + 8), iVar9 = (*DAT_043f0958)(uVar21), iVar10 == iVar9 &&
        (iVar10 = *(int *)(param_3 + 0xc), iVar9 = (*DAT_043f0950)(uVar21), iVar10 == iVar9)))) {
      iVar10 = 1;
      goto LAB_02b850bc;
    }
  }
  iVar10 = 0;
LAB_02b850bc:
  do {
    lVar11 = *plVar1;
    lVar12 = param_1[0xb];
    cVar8 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar11;
      param_1[0xb] = lVar12;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  while( true ) {
    if (*plVar1 != lVar11 || param_1[0xb] != lVar12) break;
    cVar8 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar11;
      *(long *)((long)param_1 + 0x54) = lVar12 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_02b85100;
  }
  ClearExclusiveLocal();
  lVar11 = *plVar1;
  lVar12 = param_1[0xb];
  do {
    do {
      lVar20 = *plVar1;
      if (lVar20 != lVar11 || param_1[0xb] != lVar12) {
        bVar5 = false;
        ClearExclusiveLocal();
        goto LAB_02b85a0c;
      }
      cVar8 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar11;
        *(long *)((long)param_1 + 0x54) = lVar12 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    bVar5 = true;
LAB_02b85a0c:
    lVar11 = lVar20;
    lVar12 = param_1[0xb];
  } while (!bVar5);
LAB_02b85100:
  nn::os::SignalLightEvent(pLVar2);
  if (iVar10 != 0) {
    return iVar10;
  }
  plVar19 = (long *)*param_2;
  lVar11 = (**(code **)(*plVar19 + 0x10))(plVar19,8,4);
  if (lVar11 == 0) {
    local_88 = 0;
    local_80 = 0;
    local_98 = 0;
    local_90 = (long *)0x0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar10 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar19;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    (*DAT_043f0928)(lVar11);
    *(undefined1 *)(lVar11 + 5) = 1;
    local_88 = 8;
    local_80 = 4;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    local_98 = lVar11;
    local_90 = plVar19;
  }
  (*DAT_043f0930)(lVar11,0,*param_3);
  (*DAT_043f0930)(lVar11,1,param_3[1]);
  (*DAT_043f0930)(lVar11,2,param_3[2]);
  (*DAT_043f0930)(lVar11,3,param_3[3]);
  (*DAT_043f0930)(lVar11,4,param_3[4]);
  (*DAT_043f0930)(lVar11,5,param_3[5]);
  (*DAT_043f0930)(lVar11,6,param_3[6]);
  (*DAT_043f0930)(lVar11,7,param_3[7]);
  (*DAT_043f0938)(lVar11,*(undefined4 *)(param_3 + 0xc));
  (*DAT_043f0940)(lVar11,*(undefined4 *)(param_3 + 8));
  lVar11 = nn::os::GetCurrentThread();
  do {
    if (*plVar1 != 0 || param_1[0xb] != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*plVar1 == 0 && param_1[0xb] == 0) {
          cVar8 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar11;
            param_1[0xb] = 0;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_02b852c8;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar11;
      param_1[0xb] = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_02b852c8:
  uVar13 = param_1[1];
  plVar19 = param_1 + 3;
  if (uVar13 < (ulong)param_1[2]) {
    FUN_02b85aac(plVar19,uVar13,&local_98);
    param_1[1] = param_1[1] + 0x20;
  }
  else {
    uVar16 = param_1[4];
    lVar11 = (long)(uVar13 - *param_1) >> 5;
    if (0x7ffffffffffffffe < uVar16) {
      uVar16 = 0x7fffffffffffffff;
    }
    uVar13 = lVar11 + 1;
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
      lVar12 = (**(code **)(*(long *)*plVar19 + 0x10))((long *)*plVar19,uVar16 << 5,8);
      if (lVar12 == 0) {
        (**(code **)(*(long *)*plVar19 + 0xb8))();
      }
    }
    lVar20 = lVar12 + lVar11 * 0x20;
    FUN_02b85aac(plVar19,lVar20,&local_98);
    plVar23 = (long *)*param_1;
    lVar11 = lVar20 + 0x20;
    plVar18 = (long *)param_1[1];
    if (plVar18 == plVar23) {
      plVar18 = plVar23;
    }
    else {
      do {
        lVar20 = lVar20 + -0x20;
        plVar18 = plVar18 + -4;
        FUN_02b85aac(plVar19,lVar20,plVar18);
      } while (plVar23 != plVar18);
      plVar23 = (long *)*param_1;
      plVar18 = (long *)param_1[1];
    }
    lVar15 = param_1[2];
    param_1[2] = lVar12 + uVar16 * 0x20;
    *param_1 = lVar20;
    param_1[1] = lVar11;
    if (plVar18 != plVar23) {
      lVar11 = tpidr_el0;
      do {
        plVar17 = plVar18 + -4;
        lVar12 = *plVar17;
        *plVar17 = 0;
        if (lVar12 != 0) {
          FUN_02bcbe58(auStack_78,0);
          plVar3 = (long *)plVar18[-3];
          lVar20 = plVar18[-2];
          lVar24 = plVar18[-1];
          uVar13 = (**(code **)(*plVar3 + 0xc0))(plVar3);
          if ((uVar13 & 1) == 0) {
LAB_02b854a4:
            (**(code **)(*plVar3 + 0x18))(plVar3,lVar12,lVar20,lVar24);
          }
          else {
            if (*(char *)(lVar11 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar11 + 0x38d488) = 1;
              *(undefined8 *)(lVar11 + 0x38d478) = 0;
              *(undefined8 *)(lVar11 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_02b854a4;
            FUN_02bcc824(plVar3,lVar12,lVar20,lVar24);
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
        plVar18 = plVar17;
      } while (plVar23 != plVar17);
    }
    if (plVar23 != (long *)0x0) {
      plVar19 = (long *)*plVar19;
      uVar13 = (**(code **)(*plVar19 + 0xc0))(plVar19);
      if ((uVar13 & 1) != 0) {
        lVar11 = tpidr_el0;
        if (*(char *)(lVar11 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar11 + 0x38d488) = 1;
          *(undefined8 *)(lVar11 + 0x38d478) = 0;
          *(undefined8 *)(lVar11 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar11 + 0x38d480)) {
          FUN_02bcc824(plVar19,plVar23,lVar15 - (long)plVar23,8);
          goto LAB_02b856cc;
        }
      }
      (**(code **)(*plVar19 + 0x18))(plVar19,plVar23,lVar15 - (long)plVar23,8);
    }
  }
LAB_02b856cc:
  do {
    lVar11 = *plVar1;
    lVar12 = param_1[0xb];
    cVar8 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar11;
      param_1[0xb] = lVar12;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  do {
    if (*plVar1 != lVar11 || param_1[0xb] != lVar12) {
      ClearExclusiveLocal();
      lVar11 = *plVar1;
      lVar12 = param_1[0xb];
      goto LAB_02b85a1c;
    }
    cVar8 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = 0;
      *(long *)((long)param_1 + 0x54) = lVar12;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  goto LAB_02b85710;
LAB_02b85a1c:
  do {
    lVar20 = *plVar1;
    if (lVar20 == lVar11 && param_1[0xb] == lVar12) {
      cVar8 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = 0;
        *(long *)((long)param_1 + 0x54) = lVar12;
        cVar8 = ExclusiveMonitorsStatus();
      }
      if (cVar8 != '\0') goto LAB_02b85a1c;
      bVar5 = true;
    }
    else {
      bVar5 = false;
      ClearExclusiveLocal();
    }
    lVar11 = lVar20;
    lVar12 = param_1[0xb];
  } while (!bVar5);
LAB_02b85710:
  nn::os::SignalLightEvent(pLVar2);
  lVar11 = local_98;
  local_98 = 0;
  if (lVar11 == 0) {
    return 1;
  }
  FUN_02bcbe58(auStack_78,0);
  uVar7 = local_80;
  uVar21 = local_88;
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
      FUN_02bcc824(plVar1,lVar11,uVar21,uVar7);
      goto LAB_02b857ac;
    }
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar11,uVar21,uVar7);
LAB_02b857ac:
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


