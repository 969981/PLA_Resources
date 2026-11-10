/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b818f4; name: FUN_02b818f4
 */


/* WARNING: Removing unreachable block (ram,0x02b81b10) */

int FUN_02b818f4(long *param_1,undefined8 *param_2,long *param_3,uint param_4)

{
  long *plVar1;
  LightEventType *pLVar2;
  char cVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long extraout_x9;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  ulong local_90;
  long *local_88;
  long *local_80;
  long *plStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = param_1 + 10;
  do {
    lVar8 = *plVar1;
    lVar14 = param_1[0xb];
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar8;
      param_1[0xb] = lVar14;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  pLVar2 = (LightEventType *)((long)param_1 + 0x44);
  do {
    while ((lVar8 != 0 && (lVar7 != lVar8))) {
      nn::os::WaitLightEvent(pLVar2);
      do {
        lVar8 = *plVar1;
        lVar14 = param_1[0xb];
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar8;
          param_1[0xb] = lVar14;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    while( true ) {
      if (*plVar1 != lVar8 || param_1[0xb] != lVar14) break;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8;
        *(long *)((long)param_1 + 0x54) = lVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        plVar18 = (long *)*param_1;
        plVar10 = (long *)param_1[1];
        if (plVar18 == plVar10) goto LAB_02b81acc;
        uVar13 = (ulong)param_4;
        if (param_4 == 0) {
          uVar22 = 0;
          goto LAB_02b81aa8;
        }
        uVar22 = 0;
        goto LAB_02b819e8;
      }
    }
    ClearExclusiveLocal();
    lVar8 = *plVar1;
    lVar14 = param_1[0xb];
  } while( true );
LAB_02b819e8:
  do {
    local_88 = (long *)*plVar18;
    lVar7 = *local_88;
    local_90 = uVar13;
    if ((uVar13 == local_88[1] - lVar7 >> 3) &&
       (lVar14 = *param_3, lVar8 = (*DAT_043f0b20)(lVar7), lVar14 == lVar8)) {
      lVar8 = 0;
      lVar14 = 8;
      uVar15 = uVar13;
      plVar17 = param_3;
      do {
        lVar9 = plVar17[1];
        iVar6 = (*DAT_043f0b28)(lVar7);
        if ((int)lVar9 != iVar6) break;
        uVar15 = uVar15 - 1;
        if (uVar15 == 0) goto LAB_02b81ad4;
        lVar8 = lVar8 + 1;
        lVar7 = *local_88 + lVar8 * 8;
        lVar20 = plVar17[2];
        lVar9 = (*DAT_043f0b20)(*local_88 + lVar14);
        lVar14 = lVar14 + 8;
        plVar17 = plVar17 + 2;
      } while (lVar20 == lVar9);
    }
    plVar18 = plVar18 + 4;
    uVar22 = uVar22 + 1;
  } while (plVar18 != plVar10);
  iVar6 = 0;
  goto LAB_02b81adc;
LAB_02b81ad4:
  plVar18 = (long *)(ulong)uVar22;
  iVar6 = 1;
  goto LAB_02b81adc;
LAB_02b822e8:
  do {
    lVar14 = *plVar1;
    if (lVar14 == lVar7 && param_1[0xb] == lVar8) {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = 0;
        *(long *)((long)param_1 + 0x54) = lVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_02b822e8;
      bVar5 = true;
    }
    else {
      bVar5 = false;
      ClearExclusiveLocal();
    }
    lVar7 = lVar14;
    lVar8 = param_1[0xb];
  } while (!bVar5);
  goto LAB_02b82184;
  while( true ) {
    plVar18 = plVar18 + 4;
    uVar22 = uVar22 + 1;
    if (plVar10 == plVar18) break;
LAB_02b81aa8:
    if (((long *)*plVar18)[1] - *(long *)*plVar18 >> 3 == 0) goto LAB_02b81ad4;
  }
LAB_02b81acc:
  iVar6 = 0;
LAB_02b81adc:
  do {
    lVar7 = *plVar1;
    lVar8 = param_1[0xb];
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      param_1[0xb] = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while( true ) {
    if (*plVar1 != lVar7 || param_1[0xb] != lVar8) break;
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      *(long *)((long)param_1 + 0x54) = lVar8 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_02b81b20;
  }
  ClearExclusiveLocal();
  lVar7 = *plVar1;
  lVar8 = param_1[0xb];
  do {
    do {
      lVar14 = *plVar1;
      if (lVar14 != lVar7 || param_1[0xb] != lVar8) {
        bVar5 = false;
        ClearExclusiveLocal();
        goto LAB_02b822d8;
      }
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7;
        *(long *)((long)param_1 + 0x54) = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar5 = true;
LAB_02b822d8:
    lVar7 = lVar14;
    lVar8 = param_1[0xb];
  } while (!bVar5);
LAB_02b81b20:
  nn::os::SignalLightEvent(pLVar2);
  if (iVar6 != 0) {
    return iVar6;
  }
  plVar17 = (long *)*param_2;
  plVar10 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x40,8);
  if (plVar10 == (long *)0x0) {
    local_70 = 0;
    uStack_68 = 0;
    local_80 = (long *)0x0;
    plStack_78 = (long *)0x0;
    lVar8 = 0;
    lVar7 = extraout_x9;
    plVar19 = plVar17;
LAB_02b823c0:
    if ((*(long *)(lVar8 + 0x80) == 0) ||
       (plVar10 = *(long **)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8), plVar10 == (long *)0x0))
    goto LAB_02b81bc8;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar6 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    local_90 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(local_90 + 0x80)) goto LAB_02b823b4;
    *(long **)(local_90 + *(ulong *)(local_90 + 0x80) * 8) = plVar17;
    *(long *)(local_90 + 0x80) = *(long *)(local_90 + 0x80) + 1;
    *plVar10 = 0;
    plVar10[1] = 0;
    plVar10[2] = 0;
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar6 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    lVar7 = tpidr_el0;
    plVar19 = param_1;
    plVar18 = plVar10;
    local_88 = plVar17;
    if (lVar8 != 0) goto LAB_02b823c0;
LAB_02b81bc8:
    plVar17 = DAT_043f1798;
    plVar10 = *(long **)(lVar7 + 0x20);
    if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
      *(long **)(lVar7 + 0x20) = DAT_043f1798;
      plVar10 = plVar17;
    }
  }
  plVar17 = plVar18 + 3;
  *plVar17 = (long)plVar10;
  lVar9 = *plVar18;
  lVar8 = plVar18[1];
  uVar13 = (ulong)param_4;
  plVar18[4] = 0x1fffffffffffffff;
  plVar18[5] = 0;
  uVar15 = lVar8 - lVar9 >> 3;
  lVar14 = uVar15 - uVar13;
  *(undefined4 *)(plVar18 + 6) = 0;
  if (uVar15 < uVar13) {
    if ((ulong)(plVar18[2] - lVar8 >> 3) < uVar13 - uVar15) {
      lVar9 = plVar18[2] - lVar9;
      if ((ulong)(lVar9 >> 3) < 0xfffffffffffffff) {
        if (((ulong)(lVar9 >> 2) < uVar13) || (uVar13 = lVar9 >> 2, lVar9 != 0)) goto LAB_02b81cd0;
        uVar13 = 0;
        lVar8 = 0;
      }
      else {
        uVar13 = 0x1fffffffffffffff;
LAB_02b81cd0:
        lVar8 = (**(code **)(*plVar10 + 0x10))(plVar10,uVar13 << 3,8);
        if (lVar8 == 0) {
          (**(code **)(*(long *)*plVar17 + 0xb8))();
        }
      }
      lVar20 = lVar8 + uVar15 * 8;
      lVar9 = lVar20;
      do {
        FUN_02b823e0(plVar17,lVar9);
        lVar9 = lVar9 + 8;
        bVar5 = lVar14 != -1;
        lVar14 = lVar14 + 1;
      } while (bVar5);
      lVar14 = *plVar18;
      lVar16 = plVar18[1];
      if (lVar16 != lVar14) {
        do {
          lVar21 = *plVar17;
          if (((*PTR_DAT_04379520 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), iVar6 != 0)) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
          if (lVar11 == 0) {
            *(undefined8 *)(lVar20 + -8) = *(undefined8 *)(lVar16 + -8);
          }
          else {
            if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_02b823b4:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar21;
            *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
            *(undefined8 *)(lVar20 + -8) = *(undefined8 *)(lVar16 + -8);
            *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
          }
          lVar16 = lVar16 + -8;
          lVar20 = lVar20 + -8;
        } while (lVar14 != lVar16);
        lVar14 = *plVar18;
      }
      *plVar18 = lVar20;
      plVar18[1] = lVar9;
      lVar9 = plVar18[2];
      plVar18[2] = lVar8 + uVar13 * 8;
      if (lVar14 != 0) {
        plVar17 = (long *)*plVar17;
        uVar13 = (**(code **)(*plVar17 + 0xc0))(plVar17);
        if ((uVar13 & 1) != 0) {
          if (*(char *)(lVar7 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar7 + 0x38d488) = 1;
            *(undefined8 *)(lVar7 + 0x38d478) = 0;
            *(undefined8 *)(lVar7 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar7 + 0x38d480)) {
            FUN_02bcc824(plVar17,lVar14,lVar9 - lVar14,8);
            goto LAB_02b81e98;
          }
        }
        (**(code **)(*plVar17 + 0x18))(plVar17,lVar14,lVar9 - lVar14,8);
      }
    }
    else {
      do {
        FUN_02b823e0(plVar17,lVar8);
        lVar8 = plVar18[1] + 8;
        bVar5 = lVar14 != -1;
        lVar14 = lVar14 + 1;
        plVar18[1] = lVar8;
      } while (bVar5);
    }
LAB_02b81e98:
    lVar9 = *plVar18;
    lVar8 = plVar18[1];
  }
  else if (lVar14 != 0) {
    lVar8 = lVar9 + uVar13 * 8;
    plVar18[1] = lVar8;
  }
  for (; lVar9 != lVar8; lVar9 = lVar9 + 8) {
    (*DAT_043f0b08)(lVar9);
  }
  *(undefined1 *)((long)plVar18 + 0x39) = 1;
  plStack_78 = local_88;
  local_70 = 0x40;
  uStack_68 = 8;
  *(long *)(local_90 + 0x80) = *(long *)(local_90 + 0x80) + -1;
  lVar8 = *plVar18;
  local_80 = plVar18;
  if (plVar18[1] - lVar8 != 0) {
    lVar14 = plVar18[1] - lVar8 >> 3;
    do {
      (*DAT_043f0b10)(lVar8,*param_3);
      (*DAT_043f0b18)(lVar8,(int)param_3[1]);
      lVar14 = lVar14 + -1;
      lVar8 = lVar8 + 8;
      param_3 = param_3 + 2;
    } while (lVar14 != 0);
  }
  lVar8 = nn::os::GetCurrentThread();
  do {
    if (*plVar1 != 0 || param_1[0xb] != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*plVar1 == 0 && param_1[0xb] == 0) {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar8;
            param_1[0xb] = 0;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_02b81f70;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar8;
      param_1[0xb] = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02b81f70:
  uVar13 = plVar19[1];
  plVar18 = plVar19 + 3;
  if (uVar13 < (ulong)plVar19[2]) {
    FUN_02b824ac(plVar18,uVar13,&local_80);
    plVar19[1] = plVar19[1] + 0x20;
  }
  else {
    uVar15 = plVar19[4];
    lVar8 = (long)(uVar13 - *plVar19) >> 5;
    uVar13 = lVar8 + 1;
    if (0x7ffffffffffffffe < uVar15) {
      uVar15 = 0x7fffffffffffffff;
    }
    if (uVar15 < uVar13) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar14 = plVar19[2] - *plVar19;
    uVar12 = lVar14 >> 4;
    if (uVar13 <= uVar12) {
      uVar13 = uVar12;
    }
    if ((ulong)(lVar14 >> 5) < uVar15 >> 1) {
      uVar15 = uVar13;
    }
    if (uVar15 == 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = (**(code **)(*(long *)*plVar18 + 0x10))((long *)*plVar18,uVar15 << 5,8);
      if (lVar14 == 0) {
        (**(code **)(*(long *)*plVar18 + 0xb8))();
      }
    }
    lVar9 = lVar14 + lVar8 * 0x20;
    FUN_02b824ac(plVar18,lVar9,&local_80);
    plVar10 = (long *)*plVar19;
    plVar17 = (long *)plVar19[1];
    lVar8 = lVar9 + 0x20;
    if (plVar17 == plVar10) {
      plVar17 = plVar10;
    }
    else {
      do {
        lVar9 = lVar9 + -0x20;
        plVar17 = plVar17 + -4;
        FUN_02b824ac(plVar18,lVar9,plVar17);
      } while (plVar10 != plVar17);
      plVar10 = (long *)*plVar19;
      plVar17 = (long *)plVar19[1];
    }
    *plVar19 = lVar9;
    plVar19[1] = lVar8;
    lVar8 = plVar19[2];
    plVar19[2] = lVar14 + uVar15 * 0x20;
    if (plVar17 != plVar10) {
      do {
        plVar19 = plVar17 + -4;
        lVar14 = *plVar19;
        *plVar19 = 0;
        if (lVar14 != 0) {
          FUN_02b82590(plVar17 + -3);
        }
        plVar17 = plVar19;
      } while (plVar10 != plVar19);
    }
    if (plVar10 != (long *)0x0) {
      plVar18 = (long *)*plVar18;
      uVar13 = (**(code **)(*plVar18 + 0xc0))(plVar18);
      if ((uVar13 & 1) != 0) {
        if (*(char *)(lVar7 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar7 + 0x38d488) = 1;
          *(undefined8 *)(lVar7 + 0x38d478) = 0;
          *(undefined8 *)(lVar7 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar7 + 0x38d480)) {
          FUN_02bcc824(plVar18,plVar10,lVar8 - (long)plVar10,8);
          goto LAB_02b82140;
        }
      }
      (**(code **)(*plVar18 + 0x18))(plVar18,plVar10,lVar8 - (long)plVar10,8);
    }
  }
LAB_02b82140:
  do {
    lVar7 = *plVar1;
    lVar8 = param_1[0xb];
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      param_1[0xb] = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    if (*plVar1 != lVar7 || param_1[0xb] != lVar8) {
      ClearExclusiveLocal();
      lVar7 = *plVar1;
      lVar8 = param_1[0xb];
      goto LAB_02b822e8;
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = 0;
      *(long *)((long)param_1 + 0x54) = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02b82184:
  nn::os::SignalLightEvent(pLVar2);
  plVar1 = local_80;
  local_80 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    FUN_02b82590(&plStack_78);
  }
  return 1;
}


