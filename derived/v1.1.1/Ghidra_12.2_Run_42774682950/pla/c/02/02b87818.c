/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b87818; name: FUN_02b87818
 */


/* WARNING: Removing unreachable block (ram,0x02b87af4) */

int FUN_02b87818(long *param_1,undefined8 *param_2,int *param_3)

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
  uint uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  undefined8 uVar20;
  long *plVar21;
  long lVar22;
  undefined8 *puVar23;
  long lVar24;
  long local_d0;
  long *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  int local_b0 [2];
  int local_a8 [2];
  int local_a0 [2];
  int local_98 [2];
  uint local_90 [2];
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
        puVar23 = (undefined8 *)*param_1;
        puVar4 = (undefined8 *)param_1[1];
        if (puVar23 != puVar4) goto LAB_02b878f0;
        iVar9 = 0;
        goto LAB_02b87ac0;
      }
    }
    ClearExclusiveLocal();
    lVar11 = *plVar1;
    lVar22 = param_1[0xb];
  } while( true );
LAB_02b878f0:
  do {
    uVar20 = *puVar23;
    (*DAT_043f0640)(uVar20,&local_d0,local_78);
    if ((*param_3 == (int)local_d0) && (param_3[1] == local_78[0])) {
      (*DAT_043f0648)(uVar20,&local_d0,local_78);
      if ((param_3[2] == (int)local_d0) &&
         (((param_3[3] == local_78[0] &&
           ((*DAT_043f0650)(uVar20,local_80), param_3[4] == local_80[0])) &&
          ((*DAT_043f0660)(uVar20,local_88), param_3[9] == local_88[0])))) {
        (*DAT_043f0668)(uVar20,local_90);
        uVar13 = param_3[10];
        if (uVar13 < 9) {
          switch(uVar13) {
          case 1:
            uVar13 = 3;
            break;
          case 2:
            uVar13 = 5;
            if (param_3[0xb] == 0) {
              uVar13 = 1;
            }
            break;
          case 3:
            uVar13 = 4;
            if (param_3[0xb] != 0) {
              uVar13 = 6;
            }
            break;
          case 4:
            uVar13 = 2;
            break;
          case 5:
            uVar13 = 8;
            break;
          case 6:
            uVar13 = 9;
            break;
          case 7:
            uVar13 = 7;
            break;
          case 8:
            uVar13 = 10;
          }
        }
        else {
          uVar13 = 1;
        }
        if (((uVar13 == local_90[0]) &&
            ((*DAT_043f0658)(uVar20,local_98,local_a0,local_a8,local_b0), param_3[5] == local_98[0])
            ) && ((param_3[6] == local_a0[0] &&
                  ((param_3[7] == local_a8[0] && (param_3[7] == local_b0[0])))))) {
          iVar9 = 1;
          goto LAB_02b87ac0;
        }
      }
    }
    puVar23 = puVar23 + 4;
  } while (puVar4 != puVar23);
  iVar9 = 0;
LAB_02b87ac0:
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
    if (cVar5 == '\0') goto LAB_02b87b04;
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
        goto LAB_02b88420;
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
LAB_02b88420:
    lVar10 = lVar22;
    lVar11 = param_1[0xb];
  } while (!bVar6);
LAB_02b87b04:
  nn::os::SignalLightEvent(pLVar2);
  if (iVar9 != 0) {
    return iVar9;
  }
  plVar21 = (long *)*param_2;
  lVar10 = (**(code **)(*plVar21 + 0x10))(plVar21,0x30,8);
  if (lVar10 == 0) {
    local_c0 = 0;
    local_b8 = 0;
    local_d0 = 0;
    local_c8 = (long *)0x0;
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
    (*DAT_043f0608)(lVar10);
    *(undefined1 *)(lVar10 + 0x29) = 1;
    local_c0 = 0x30;
    local_b8 = 8;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    local_d0 = lVar10;
    local_c8 = plVar21;
  }
  (*DAT_043f0610)(lVar10,*param_3,param_3[1]);
  (*DAT_043f0618)(lVar10,param_3[2],param_3[3]);
  (*DAT_043f0620)(lVar10,param_3[4]);
  (*DAT_043f0630)(lVar10,param_3[9]);
  uVar13 = param_3[10];
  if (uVar13 < 9) {
    switch(uVar13) {
    case 1:
      uVar13 = 3;
      break;
    case 2:
      uVar13 = 5;
      if (param_3[0xb] == 0) {
        uVar13 = 1;
      }
      break;
    case 3:
      uVar13 = 4;
      if (param_3[0xb] != 0) {
        uVar13 = 6;
      }
      break;
    case 4:
      uVar13 = 2;
      break;
    case 5:
      uVar13 = 8;
      break;
    case 6:
      uVar13 = 9;
      break;
    case 7:
      uVar13 = 7;
      break;
    case 8:
      uVar13 = 10;
    }
  }
  else {
    uVar13 = 1;
  }
  (*DAT_043f0638)(lVar10,uVar13);
  (*DAT_043f0628)(lVar10,param_3[5],param_3[6],param_3[7],param_3[8]);
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
          if (cVar5 == '\0') goto LAB_02b87cec;
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
LAB_02b87cec:
  uVar12 = param_1[1];
  plVar21 = param_1 + 3;
  if (uVar12 < (ulong)param_1[2]) {
    FUN_02b884c0(plVar21,uVar12,&local_d0);
    param_1[1] = param_1[1] + 0x20;
  }
  else {
    uVar16 = param_1[4];
    lVar10 = (long)(uVar12 - *param_1) >> 5;
    if (0x7ffffffffffffffe < uVar16) {
      uVar16 = 0x7fffffffffffffff;
    }
    uVar12 = lVar10 + 1;
    if (uVar16 < uVar12) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar11 = param_1[2] - *param_1;
    uVar14 = lVar11 >> 4;
    if (uVar12 <= uVar14) {
      uVar12 = uVar14;
    }
    if ((ulong)(lVar11 >> 5) < uVar16 >> 1) {
      uVar16 = uVar12;
    }
    if (uVar16 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = (**(code **)(*(long *)*plVar21 + 0x10))((long *)*plVar21,uVar16 << 5,8);
      if (lVar11 == 0) {
        (**(code **)(*(long *)*plVar21 + 0xb8))();
      }
    }
    lVar22 = lVar11 + lVar10 * 0x20;
    FUN_02b884c0(plVar21,lVar22,&local_d0);
    plVar19 = (long *)*param_1;
    plVar18 = (long *)param_1[1];
    lVar10 = lVar22 + 0x20;
    if (plVar18 == plVar19) {
      plVar18 = plVar19;
    }
    else {
      do {
        lVar22 = lVar22 + -0x20;
        plVar18 = plVar18 + -4;
        FUN_02b884c0(plVar21,lVar22,plVar18);
      } while (plVar19 != plVar18);
      plVar19 = (long *)*param_1;
      plVar18 = (long *)param_1[1];
    }
    lVar15 = param_1[2];
    param_1[2] = lVar11 + uVar16 * 0x20;
    *param_1 = lVar22;
    param_1[1] = lVar10;
    if (plVar18 != plVar19) {
      lVar10 = tpidr_el0;
      do {
        plVar17 = plVar18 + -4;
        lVar11 = *plVar17;
        *plVar17 = 0;
        if (lVar11 != 0) {
          FUN_02bcbe58(local_78,0);
          plVar3 = (long *)plVar18[-3];
          lVar22 = plVar18[-2];
          lVar24 = plVar18[-1];
          uVar12 = (**(code **)(*plVar3 + 0xc0))(plVar3);
          if ((uVar12 & 1) == 0) {
LAB_02b87eb4:
            (**(code **)(*plVar3 + 0x18))(plVar3,lVar11,lVar22,lVar24);
          }
          else {
            if (*(char *)(lVar10 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar10 + 0x38d488) = 1;
              *(undefined8 *)(lVar10 + 0x38d478) = 0;
              *(undefined8 *)(lVar10 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_02b87eb4;
            FUN_02bcc824(plVar3,lVar11,lVar22,lVar24);
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
        plVar18 = plVar17;
      } while (plVar19 != plVar17);
    }
    if (plVar19 != (long *)0x0) {
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
          FUN_02bcc824(plVar21,plVar19,lVar15 - (long)plVar19,8);
          goto LAB_02b880dc;
        }
      }
      (**(code **)(*plVar21 + 0x18))(plVar21,plVar19,lVar15 - (long)plVar19,8);
    }
  }
LAB_02b880dc:
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
      goto LAB_02b88430;
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = 0;
      *(long *)((long)param_1 + 0x54) = lVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  goto LAB_02b88120;
LAB_02b88430:
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
      if (cVar5 != '\0') goto LAB_02b88430;
      bVar6 = true;
    }
    else {
      bVar6 = false;
      ClearExclusiveLocal();
    }
    lVar10 = lVar22;
    lVar11 = param_1[0xb];
  } while (!bVar6);
LAB_02b88120:
  nn::os::SignalLightEvent(pLVar2);
  lVar10 = local_d0;
  local_d0 = 0;
  if (lVar10 == 0) {
    return 1;
  }
  FUN_02bcbe58(local_78,0);
  uVar8 = local_b8;
  uVar20 = local_c0;
  plVar1 = local_c8;
  uVar12 = (**(code **)(*local_c8 + 0xc0))(local_c8);
  if ((uVar12 & 1) != 0) {
    lVar11 = tpidr_el0;
    if (*(char *)(lVar11 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar11 + 0x38d488) = 1;
      *(undefined8 *)(lVar11 + 0x38d478) = 0;
      *(undefined8 *)(lVar11 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar11 + 0x38d480)) {
      FUN_02bcc824(plVar1,lVar10,uVar20,uVar8);
      goto LAB_02b881bc;
    }
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar10,uVar20,uVar8);
LAB_02b881bc:
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


