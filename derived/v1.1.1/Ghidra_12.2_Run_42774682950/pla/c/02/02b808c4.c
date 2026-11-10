/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b808c4; name: FUN_02b808c4
 */


/* WARNING: Removing unreachable block (ram,0x02b80b0c) */

int FUN_02b808c4(long *param_1,undefined8 *param_2,long *param_3,uint param_4)

{
  long *plVar1;
  LightEventType *pLVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long extraout_x10;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  long unaff_x25;
  ulong uVar22;
  long lVar23;
  uint uVar24;
  long *local_b8;
  LightEventType *local_b0;
  long *local_90;
  long *local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  int local_68 [2];
  
  lVar9 = nn::os::GetCurrentThread();
  plVar1 = param_1 + 10;
  do {
    lVar11 = *plVar1;
    lVar15 = param_1[0xb];
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar11;
      param_1[0xb] = lVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  pLVar2 = (LightEventType *)((long)param_1 + 0x44);
  do {
    while ((lVar11 != 0 && (lVar9 != lVar11))) {
      nn::os::WaitLightEvent(pLVar2);
      do {
        lVar11 = *plVar1;
        lVar15 = param_1[0xb];
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar11;
          param_1[0xb] = lVar15;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    while( true ) {
      if (*plVar1 != lVar11 || param_1[0xb] != lVar15) break;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar11;
        *(long *)((long)param_1 + 0x54) = lVar15 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        plVar18 = (long *)*param_1;
        plVar10 = (long *)param_1[1];
        if (plVar18 == plVar10) goto LAB_02b80ab4;
        if (param_4 != 0) {
          uVar24 = 0;
          lVar9 = unaff_x25;
          goto LAB_02b809b0;
        }
        uVar24 = 0;
        goto LAB_02b80a8c;
      }
    }
    ClearExclusiveLocal();
    lVar11 = *plVar1;
    lVar15 = param_1[0xb];
  } while( true );
LAB_02b809b0:
  do {
    local_90 = (long *)*plVar18;
    lVar11 = *local_90;
    if (((ulong)param_4 == local_90[1] - lVar11 >> 2) &&
       (iVar8 = *(int *)((long)param_3 + 0xc), iVar7 = (*DAT_043f0b00)(lVar11), iVar8 == iVar7)) {
      lVar15 = 0;
      plVar19 = param_3;
      unaff_x25 = 4;
      uVar20 = (ulong)param_4;
      do {
        (*DAT_043f0af8)(lVar11,local_68,&local_88);
        lVar9 = unaff_x25;
        if (((int)plVar19[1] != local_68[0]) || ((long *)*plVar19 != local_88)) break;
        uVar20 = uVar20 - 1;
        local_b8 = param_1;
        local_b0 = pLVar2;
        if (uVar20 == 0) goto LAB_02b80abc;
        lVar15 = lVar15 + 1;
        iVar8 = *(int *)((long)plVar19 + 0x1c);
        lVar9 = unaff_x25 + 4;
        lVar11 = *local_90 + lVar15 * 4;
        iVar7 = (*DAT_043f0b00)(*local_90 + unaff_x25);
        plVar19 = plVar19 + 2;
        unaff_x25 = lVar9;
      } while (iVar8 == iVar7);
    }
    plVar18 = plVar18 + 4;
    uVar24 = uVar24 + 1;
  } while (plVar18 != plVar10);
  iVar8 = 0;
  unaff_x25 = lVar9;
  local_b8 = param_1;
  local_b0 = pLVar2;
  goto LAB_02b80ad8;
LAB_02b80abc:
  plVar18 = (long *)(ulong)uVar24;
  iVar8 = 1;
  goto LAB_02b80ad8;
LAB_02b8137c:
  do {
    lVar15 = *plVar1;
    if (lVar15 == lVar9 && param_1[0xb] == lVar11) {
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = 0;
        *(long *)((long)param_1 + 0x54) = lVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_02b8137c;
      bVar6 = true;
    }
    else {
      bVar6 = false;
      ClearExclusiveLocal();
    }
    lVar9 = lVar15;
    lVar11 = param_1[0xb];
  } while (!bVar6);
  goto LAB_02b8117c;
  while( true ) {
    plVar18 = plVar18 + 4;
    uVar24 = uVar24 + 1;
    if (plVar10 == plVar18) break;
LAB_02b80a8c:
    if (((long *)*plVar18)[1] - *(long *)*plVar18 >> 2 == 0) goto LAB_02b80abc;
  }
LAB_02b80ab4:
  iVar8 = 0;
LAB_02b80ad8:
  do {
    lVar9 = *plVar1;
    lVar11 = param_1[0xb];
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar9;
      param_1[0xb] = lVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while( true ) {
    if (*plVar1 != lVar9 || param_1[0xb] != lVar11) break;
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar9;
      *(long *)((long)param_1 + 0x54) = lVar11 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_02b80b1c;
  }
  ClearExclusiveLocal();
  lVar9 = *plVar1;
  lVar11 = param_1[0xb];
  do {
    do {
      lVar15 = *plVar1;
      if (lVar15 != lVar9 || param_1[0xb] != lVar11) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto LAB_02b812d8;
      }
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9;
        *(long *)((long)param_1 + 0x54) = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar6 = true;
LAB_02b812d8:
    lVar9 = lVar15;
    lVar11 = param_1[0xb];
  } while (!bVar6);
LAB_02b80b1c:
  nn::os::SignalLightEvent(pLVar2);
  if (iVar8 != 0) {
    return iVar8;
  }
  plVar19 = (long *)*param_2;
  plVar10 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x40,8);
  if (plVar10 == (long *)0x0) {
    local_78 = 0;
    uStack_70 = 0;
    local_88 = (long *)0x0;
    plStack_80 = (long *)0x0;
    lVar11 = 0;
    lVar9 = extraout_x10;
LAB_02b813c4:
    if ((*(long *)(lVar11 + 0x80) == 0) ||
       (plVar10 = *(long **)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8), plVar10 == (long *)0x0))
    goto LAB_02b80bc8;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar8 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    unaff_x25 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(unaff_x25 + 0x80)) goto LAB_02b813b8;
    *(long **)(unaff_x25 + *(ulong *)(unaff_x25 + 0x80) * 8) = plVar19;
    *(long *)(unaff_x25 + 0x80) = *(long *)(unaff_x25 + 0x80) + 1;
    *plVar10 = 0;
    plVar10[1] = 0;
    plVar10[2] = 0;
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar8 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    lVar9 = tpidr_el0;
    plVar18 = plVar10;
    local_b8 = param_1;
    local_b0 = pLVar2;
    local_90 = plVar19;
    if (lVar11 != 0) goto LAB_02b813c4;
LAB_02b80bc8:
    plVar19 = DAT_043f1798;
    plVar10 = *(long **)(lVar9 + 0x20);
    if (*(long **)(lVar9 + 0x20) == (long *)0x0) {
      *(long **)(lVar9 + 0x20) = DAT_043f1798;
      plVar10 = plVar19;
    }
  }
  uVar20 = (ulong)param_4;
  plVar19 = plVar18 + 3;
  *plVar19 = (long)plVar10;
  lVar14 = *plVar18;
  lVar11 = plVar18[1];
  *(undefined4 *)(plVar18 + 6) = 0;
  plVar18[4] = 0x3fffffffffffffff;
  plVar18[5] = 0;
  uVar22 = lVar11 - lVar14 >> 2;
  lVar15 = uVar22 - uVar20;
  if (uVar22 < uVar20) {
    if ((ulong)(plVar18[2] - lVar11 >> 2) < uVar20 - uVar22) {
      lVar14 = plVar18[2] - lVar14;
      if ((ulong)(lVar14 >> 2) < 0x1fffffffffffffff) {
        if (((ulong)(lVar14 >> 1) < uVar20) || (uVar20 = lVar14 >> 1, lVar14 != 0))
        goto LAB_02b80cb0;
        uVar20 = 0;
        lVar11 = 0;
      }
      else {
        uVar20 = 0x3fffffffffffffff;
LAB_02b80cb0:
        lVar11 = (**(code **)(*plVar10 + 0x10))(plVar10,uVar20 << 2,4);
        if (lVar11 == 0) {
          (**(code **)(*(long *)*plVar19 + 0xb8))();
        }
      }
      lVar23 = lVar11 + uVar22 * 4;
      lVar14 = lVar23;
      do {
        FUN_02b813e4(plVar19,lVar14);
        lVar14 = lVar14 + 4;
        bVar6 = lVar15 != -1;
        lVar15 = lVar15 + 1;
      } while (bVar6);
      lVar15 = *plVar18;
      lVar17 = plVar18[1];
      if (lVar17 != lVar15) {
        do {
          lVar16 = *plVar19;
          if (((*PTR_DAT_04379520 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), iVar8 != 0)) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
          lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
          if (lVar12 == 0) {
            *(undefined4 *)(lVar23 + -4) = *(undefined4 *)(lVar17 + -4);
          }
          else {
            if (0xf < *(ulong *)(lVar12 + 0x80)) {
LAB_02b813b8:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar16;
            *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
            *(undefined4 *)(lVar23 + -4) = *(undefined4 *)(lVar17 + -4);
            *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
          }
          lVar17 = lVar17 + -4;
          lVar23 = lVar23 + -4;
        } while (lVar15 != lVar17);
        lVar15 = *plVar18;
      }
      *plVar18 = lVar23;
      plVar18[1] = lVar14;
      lVar14 = plVar18[2];
      plVar18[2] = lVar11 + uVar20 * 4;
      if (lVar15 != 0) {
        plVar19 = (long *)*plVar19;
        uVar20 = (**(code **)(*plVar19 + 0xc0))(plVar19);
        if ((uVar20 & 1) != 0) {
          if (*(char *)(lVar9 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar9 + 0x38d488) = 1;
            *(undefined8 *)(lVar9 + 0x38d478) = 0;
            *(undefined8 *)(lVar9 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar9 + 0x38d480)) {
            FUN_02bcc824(plVar19,lVar15,lVar14 - lVar15,4);
            goto LAB_02b80e70;
          }
        }
        (**(code **)(*plVar19 + 0x18))(plVar19,lVar15,lVar14 - lVar15,4);
      }
    }
    else {
      do {
        FUN_02b813e4(plVar19,lVar11);
        lVar11 = plVar18[1] + 4;
        bVar6 = lVar15 != -1;
        lVar15 = lVar15 + 1;
        plVar18[1] = lVar11;
      } while (bVar6);
    }
LAB_02b80e70:
    lVar14 = *plVar18;
    lVar11 = plVar18[1];
  }
  else if (lVar15 != 0) {
    lVar11 = lVar14 + uVar20 * 4;
    plVar18[1] = lVar11;
  }
  for (; lVar14 != lVar11; lVar14 = lVar14 + 4) {
    (*DAT_043f0ae0)(lVar14);
  }
  *(undefined1 *)((long)plVar18 + 0x39) = 1;
  plStack_80 = local_90;
  local_78 = 0x40;
  uStack_70 = 8;
  *(long *)(unaff_x25 + 0x80) = *(long *)(unaff_x25 + 0x80) + -1;
  lVar11 = *plVar18;
  local_88 = plVar18;
  if (plVar18[1] - lVar11 != 0) {
    lVar15 = plVar18[1] - lVar11 >> 2;
    iVar8 = (int)param_3[1];
    puVar4 = (undefined4 *)((long)param_3 + 0xc);
    while( true ) {
      if (iVar8 != 0) {
        (*DAT_043f0ae8)(lVar11,iVar8,*(undefined8 *)(puVar4 + -3));
        (*DAT_043f0af0)(lVar11,*puVar4);
      }
      lVar15 = lVar15 + -1;
      lVar11 = lVar11 + 4;
      if (lVar15 == 0) break;
      iVar8 = puVar4[3];
      puVar4 = puVar4 + 4;
    }
  }
  lVar11 = nn::os::GetCurrentThread();
  do {
    if (*plVar1 != 0 || param_1[0xb] != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(local_b0);
        while (*plVar1 == 0 && param_1[0xb] == 0) {
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar11;
            param_1[0xb] = 0;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_02b80f68;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar11;
      param_1[0xb] = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02b80f68:
  uVar20 = local_b8[1];
  plVar18 = local_b8 + 3;
  if (uVar20 < (ulong)local_b8[2]) {
    FUN_02b814b0(plVar18,uVar20,&local_88);
    local_b8[1] = local_b8[1] + 0x20;
  }
  else {
    uVar22 = local_b8[4];
    lVar11 = (long)(uVar20 - *local_b8) >> 5;
    uVar20 = lVar11 + 1;
    if (0x7ffffffffffffffe < uVar22) {
      uVar22 = 0x7fffffffffffffff;
    }
    if (uVar22 < uVar20) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar15 = local_b8[2] - *local_b8;
    uVar13 = lVar15 >> 4;
    if (uVar20 <= uVar13) {
      uVar20 = uVar13;
    }
    if ((ulong)(lVar15 >> 5) < uVar22 >> 1) {
      uVar22 = uVar20;
    }
    if (uVar22 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = (**(code **)(*(long *)*plVar18 + 0x10))((long *)*plVar18,uVar22 << 5,8);
      if (lVar15 == 0) {
        (**(code **)(*(long *)*plVar18 + 0xb8))();
      }
    }
    lVar14 = lVar15 + lVar11 * 0x20;
    FUN_02b814b0(plVar18,lVar14,&local_88);
    plVar10 = (long *)*local_b8;
    plVar19 = (long *)local_b8[1];
    lVar11 = lVar14 + 0x20;
    if (plVar19 == plVar10) {
      plVar19 = plVar10;
    }
    else {
      do {
        lVar14 = lVar14 + -0x20;
        plVar19 = plVar19 + -4;
        FUN_02b814b0(plVar18,lVar14,plVar19);
      } while (plVar10 != plVar19);
      plVar10 = (long *)*local_b8;
      plVar19 = (long *)local_b8[1];
    }
    *local_b8 = lVar14;
    local_b8[1] = lVar11;
    lVar11 = local_b8[2];
    local_b8[2] = lVar15 + uVar22 * 0x20;
    if (plVar19 != plVar10) {
      do {
        plVar21 = plVar19 + -4;
        lVar15 = *plVar21;
        *plVar21 = 0;
        if (lVar15 != 0) {
          FUN_02b81594(plVar19 + -3);
        }
        plVar19 = plVar21;
      } while (plVar10 != plVar21);
    }
    if (plVar10 != (long *)0x0) {
      plVar18 = (long *)*plVar18;
      uVar20 = (**(code **)(*plVar18 + 0xc0))(plVar18);
      if ((uVar20 & 1) != 0) {
        if (*(char *)(lVar9 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar9 + 0x38d488) = 1;
          *(undefined8 *)(lVar9 + 0x38d478) = 0;
          *(undefined8 *)(lVar9 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar9 + 0x38d480)) {
          FUN_02bcc824(plVar18,plVar10,lVar11 - (long)plVar10,8);
          goto LAB_02b81138;
        }
      }
      (**(code **)(*plVar18 + 0x18))(plVar18,plVar10,lVar11 - (long)plVar10,8);
    }
  }
LAB_02b81138:
  do {
    lVar9 = *plVar1;
    lVar11 = param_1[0xb];
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar9;
      param_1[0xb] = lVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    if (*plVar1 != lVar9 || param_1[0xb] != lVar11) {
      ClearExclusiveLocal();
      lVar9 = *plVar1;
      lVar11 = param_1[0xb];
      goto LAB_02b8137c;
    }
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = 0;
      *(long *)((long)param_1 + 0x54) = lVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02b8117c:
  nn::os::SignalLightEvent(local_b0);
  plVar1 = local_88;
  local_88 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    FUN_02b81594(&plStack_80);
  }
  return 1;
}


