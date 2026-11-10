/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b9c10c; name: FUN_02b9c10c
 */


undefined1  [16] FUN_02b9c10c(long *param_1,undefined8 *param_2,int *param_3)

{
  long lVar1;
  bool bVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined4 uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  undefined8 uVar20;
  long *plVar21;
  undefined1 auVar22 [16];
  long local_c0;
  long *plStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [64];
  
  (*DAT_043f0150)(auStack_a0);
  (*DAT_043f0148)(auStack_a0,param_2[2]);
  (*DAT_043f0158)(auStack_a0,(ulong)((char)param_3[6] == '\0') << 1);
  (*DAT_043f0160)(auStack_a0,(long)*param_3);
  (*DAT_043f0168)(auStack_a0,(long)param_3[1]);
  (*DAT_043f0170)(auStack_a0,(long)param_3[2]);
  uVar11 = 1000;
  if (param_3[3] != 0) {
    uVar11 = 10;
  }
  (*DAT_043f0190)(auStack_a0,uVar11);
  if (0xfff < *(ulong *)(param_3 + 4)) {
    (*DAT_043f0188)(auStack_a0);
  }
  uVar6 = (*DAT_043f0178)(auStack_a0);
  plVar15 = (long *)*param_2;
  uVar7 = (**(code **)(*plVar15 + 0x10))(plVar15,uVar6,0x1000);
  (*DAT_043f0180)(auStack_a0,uVar7,uVar6);
  plVar19 = (long *)*param_2;
  lVar8 = (**(code **)(*plVar19 + 0x10))(plVar19,0x2028,8);
  if (lVar8 == 0) {
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    plStack_b8 = (long *)0x0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar5 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar19;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    *(undefined8 *)(lVar8 + 0x2018) = 0;
    *(undefined8 *)(lVar8 + 0x2010) = 0;
    *(undefined8 *)(lVar8 + 0x2008) = 0;
    *(undefined8 *)(lVar8 + 0x2000) = 0;
    cVar4 = (*DAT_043f01e0)(lVar8,auStack_a0);
    *(bool *)(lVar8 + 0x2020) = cVar4 != '\0';
    local_b0 = 0x2028;
    uStack_a8 = 8;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    local_c0 = lVar8;
    plStack_b8 = plVar19;
  }
  lVar9 = *(long *)(lVar8 + 0x2000);
  *(undefined8 *)(lVar8 + 0x2000) = uVar7;
  if (lVar9 != 0) {
    plVar19 = *(long **)(lVar8 + 0x2008);
    uVar7 = *(undefined8 *)(lVar8 + 0x2010);
    uVar20 = *(undefined8 *)(lVar8 + 0x2018);
    uVar10 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar10 & 1) != 0) {
      lVar18 = tpidr_el0;
      if (*(char *)(lVar18 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar18 + 0x38d488) = 1;
        *(undefined8 *)(lVar18 + 0x38d478) = 0;
        *(undefined8 *)(lVar18 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar18 + 0x38d480)) {
        FUN_02bcc824(plVar19,lVar9,uVar7,uVar20);
        goto LAB_02b9c390;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,lVar9,uVar7,uVar20);
  }
LAB_02b9c390:
  *(long **)(lVar8 + 0x2008) = plVar15;
  *(undefined8 *)(lVar8 + 0x2010) = uVar6;
  *(undefined8 *)(lVar8 + 0x2018) = 0x1000;
  lVar8 = nn::os::GetCurrentThread();
  plVar15 = param_1 + 10;
  do {
    if (*plVar15 != 0 || param_1[0xb] != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)param_1 + 0x44));
        while (*plVar15 == 0 && param_1[0xb] == 0) {
          cVar4 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar2) {
            *plVar15 = lVar8;
            param_1[0xb] = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_02b9c3f0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar2) {
      *plVar15 = lVar8;
      param_1[0xb] = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02b9c3f0:
  uVar10 = param_1[1];
  plVar19 = param_1 + 3;
  if (uVar10 < (ulong)param_1[2]) {
    FUN_02b9cb20(plVar19,uVar10,&local_c0);
    param_1[1] = param_1[1] + 0x20;
  }
  else {
    uVar14 = param_1[4];
    lVar8 = (long)(uVar10 - *param_1) >> 5;
    uVar10 = lVar8 + 1;
    if (0x7ffffffffffffffe < uVar14) {
      uVar14 = 0x7fffffffffffffff;
    }
    if (uVar14 < uVar10) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar9 = param_1[2] - *param_1;
    uVar12 = lVar9 >> 4;
    if (uVar10 <= uVar12) {
      uVar10 = uVar12;
    }
    if ((ulong)(lVar9 >> 5) < uVar14 >> 1) {
      uVar14 = uVar10;
    }
    if (uVar14 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = (**(code **)(*(long *)*plVar19 + 0x10))((long *)*plVar19,uVar14 << 5,8);
      if (lVar9 == 0) {
        (**(code **)(*(long *)*plVar19 + 0xb8))();
      }
    }
    lVar18 = lVar9 + lVar8 * 0x20;
    FUN_02b9cb20(plVar19,lVar18,&local_c0);
    plVar17 = (long *)*param_1;
    plVar16 = (long *)param_1[1];
    lVar8 = lVar18 + 0x20;
    if (plVar16 == plVar17) {
      plVar16 = plVar17;
    }
    else {
      do {
        lVar18 = lVar18 + -0x20;
        plVar16 = plVar16 + -4;
        FUN_02b9cb20(plVar19,lVar18,plVar16);
      } while (plVar17 != plVar16);
      plVar17 = (long *)*param_1;
      plVar16 = (long *)param_1[1];
    }
    *param_1 = lVar18;
    param_1[1] = lVar8;
    lVar8 = param_1[2];
    param_1[2] = lVar9 + uVar14 * 0x20;
    if (plVar16 != plVar17) {
      do {
        plVar21 = plVar16 + -4;
        lVar9 = *plVar21;
        *plVar21 = 0;
        if (lVar9 != 0) {
          FUN_02b9c7b4(plVar16 + -3);
        }
        plVar16 = plVar21;
      } while (plVar17 != plVar21);
    }
    if (plVar17 != (long *)0x0) {
      plVar19 = (long *)*plVar19;
      uVar10 = (**(code **)(*plVar19 + 0xc0))(plVar19);
      if ((uVar10 & 1) != 0) {
        lVar9 = tpidr_el0;
        if (*(char *)(lVar9 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar9 + 0x38d488) = 1;
          *(undefined8 *)(lVar9 + 0x38d478) = 0;
          *(undefined8 *)(lVar9 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar9 + 0x38d480)) {
          FUN_02bcc824(plVar19,plVar17,lVar8 - (long)plVar17,8);
          goto LAB_02b9c5b0;
        }
      }
      (**(code **)(*plVar19 + 0x18))(plVar19,plVar17,lVar8 - (long)plVar17,8);
    }
  }
LAB_02b9c5b0:
  lVar8 = *param_1;
  lVar9 = param_1[1];
  do {
    lVar18 = *plVar15;
    lVar13 = param_1[0xb];
    cVar4 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar2) {
      *plVar15 = lVar18;
      param_1[0xb] = lVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    if (*plVar15 != lVar18 || param_1[0xb] != lVar13) {
      ClearExclusiveLocal();
      lVar18 = *plVar15;
      lVar13 = param_1[0xb];
      goto LAB_02b9c724;
    }
    cVar4 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar2) {
      *plVar15 = 0;
      *(long *)((long)param_1 + 0x54) = lVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02b9c604:
  nn::os::SignalLightEvent((LightEventType *)((long)param_1 + 0x44));
  lVar18 = local_c0;
  local_c0 = 0;
  if (lVar18 != 0) {
    FUN_02b9c7b4(&plStack_b8);
  }
  auVar22._8_8_ = (lVar9 - lVar8 >> 5) + -1;
  auVar22._0_8_ = 1;
  return auVar22;
LAB_02b9c724:
  do {
    lVar1 = *plVar15;
    if (lVar1 == lVar18 && param_1[0xb] == lVar13) {
      cVar4 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar2) {
        *plVar15 = 0;
        *(long *)((long)param_1 + 0x54) = lVar13;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_02b9c724;
      bVar2 = true;
    }
    else {
      bVar2 = false;
      ClearExclusiveLocal();
    }
    lVar18 = lVar1;
    lVar13 = param_1[0xb];
  } while (!bVar2);
  goto LAB_02b9c604;
}


