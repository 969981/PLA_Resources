/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02aa50dc; name: FUN_02aa50dc
 */


void FUN_02aa50dc(long param_1,long *param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  uint extraout_w1;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  ulong *puVar22;
  ulong *puVar23;
  long *local_68;
  
  uVar6 = FUN_02aa5bb0();
  if (((uVar6 | extraout_w1) & 0xff) != 0) {
    return;
  }
  plVar17 = (long *)(*(long *)(param_1 + 0x58) + (long)param_3 * 0x38);
  uVar15 = (ulong)param_3;
  plVar18 = plVar17 + 1;
  lVar10 = *plVar18;
  plVar19 = plVar17 + 3;
  plVar21 = plVar17 + 2;
  if (lVar10 == *plVar21) {
    lVar10 = lVar10 - *plVar17 >> 3;
    uVar11 = lVar10 + 1;
    uVar14 = *(ulong *)(*(long *)(param_1 + 0x58) + uVar15 * 0x38 + 0x20);
    if (0x7ffffffffffffffe < uVar14) {
      uVar14 = 0x7fffffffffffffff;
    }
    if (uVar14 < uVar11) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar8 = *plVar21 - *plVar17;
    uVar12 = lVar8 >> 2;
    if (uVar11 <= uVar12) {
      uVar11 = uVar12;
    }
    if ((ulong)(lVar8 >> 3) < uVar14 >> 1) {
      uVar14 = uVar11;
    }
    if (uVar14 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = (**(code **)(*(long *)*plVar19 + 0x10))((long *)*plVar19,uVar14 << 3,8);
      if (lVar8 == 0) {
        (**(code **)(*(long *)*plVar19 + 0xb8))();
      }
    }
    lVar13 = lVar8 + lVar10 * 8;
    FUN_02aa6e84(plVar19,lVar13,param_2);
    plVar20 = (long *)*plVar17;
    lVar10 = lVar13 + 8;
    plVar16 = (long *)*plVar18;
    if (plVar16 == plVar20) {
      plVar16 = plVar20;
    }
    else {
      do {
        lVar13 = lVar13 + -8;
        plVar16 = plVar16 + -1;
        FUN_02aa6e84(plVar19,lVar13,plVar16);
      } while (plVar20 != plVar16);
      plVar20 = (long *)*plVar17;
      plVar16 = (long *)*plVar18;
    }
    *plVar17 = lVar13;
    *plVar18 = lVar10;
    lVar10 = *plVar21;
    *plVar21 = lVar8 + uVar14 * 8;
    while (plVar16 != plVar20) {
      plVar16 = plVar16 + -1;
      plVar17 = (long *)*plVar16;
      if (plVar17 != (long *)0x0) {
        plVar18 = plVar17 + 10;
        do {
          iVar7 = (int)*plVar18 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar3) {
            *(int *)plVar18 = iVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar17 + 0x10))();
        }
      }
    }
    if (plVar20 != (long *)0x0) {
      plVar19 = (long *)*plVar19;
      uVar11 = (**(code **)(*plVar19 + 0xc0))(plVar19);
      if ((uVar11 & 1) != 0) {
        lVar8 = tpidr_el0;
        if (*(char *)(lVar8 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar8 + 0x38d488) = 1;
          *(undefined8 *)(lVar8 + 0x38d478) = 0;
          *(undefined8 *)(lVar8 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar8 + 0x38d480)) {
          FUN_02bcc824(plVar19,plVar20,lVar10 - (long)plVar20,8);
          goto LAB_02aa5328;
        }
      }
      (**(code **)(*plVar19 + 0x18))(plVar19,plVar20,lVar10 - (long)plVar20,8);
    }
  }
  else {
    FUN_02aa6e84(plVar19,lVar10,param_2);
    *plVar18 = *plVar18 + 8;
  }
LAB_02aa5328:
  if ((ulong)((*(long *)(param_1 + 0xe0) - *(long *)(param_1 + 0xd8) >> 3) * 0x6db6db6db6db6db7) <=
      uVar15) {
    return;
  }
  plVar19 = *(long **)(param_1 + 8);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar4 = PTR_DAT_04379528;
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_02aa5b40:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar19;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
  plVar17 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x130,0x10);
  if (plVar17 == (long *)0x0) {
    (**(code **)(*plVar19 + 0xb8))(plVar19);
  }
  puVar5 = PTR_DAT_043796d0;
  plVar17[7] = 0;
  *(undefined4 *)(plVar17 + 8) = 0;
  *(undefined4 *)(plVar17 + 6) = 0;
  plVar17[2] = 0;
  plVar17[3] = 0;
  *plVar17 = (long)(puVar5 + 0x10);
  plVar17[4] = 0;
  plVar17[5] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
  if (lVar8 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = 0;
    if (*(long *)(lVar8 + 0x80) != 0) {
      lVar13 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
    }
  }
  plVar17[1] = lVar13;
  plVar18 = plVar17 + 10;
  *(int *)plVar18 = 0;
  *plVar17 = (long)&PTR_LAB_04280a98;
  plVar17[9] = (long)&PTR_LAB_04280ad0;
  lVar8 = *param_2;
  plVar17[0xb] = lVar8;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar17[0xd] = 0;
  plVar17[0xe] = 0;
  plVar17[0xc] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
  lVar13 = DAT_043f1798;
  lVar8 = tpidr_el0;
  if ((((lVar9 == 0) || (*(long *)(lVar9 + 0x80) == 0)) ||
      (lVar9 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8), lVar9 == 0)) &&
     (lVar9 = *(long *)(lVar8 + 0x20), *(long *)(lVar8 + 0x20) == 0)) {
    *(long *)(lVar8 + 0x20) = DAT_043f1798;
    lVar9 = lVar13;
  }
  *(undefined4 *)(plVar17 + 0x12) = 0;
  plVar17[0x11] = 0;
  plVar17[0xf] = lVar9;
  plVar17[0x10] = 0x222222222222222;
  nn::os::InitializeLightEvent((long)plVar17 + 0xa4,0,1);
  plVar17[0x18] = 0;
  plVar17[0x19] = 0;
  plVar17[0x16] = 0;
  plVar17[0x17] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
  lVar13 = DAT_043f1798;
  if ((((lVar9 == 0) || (*(long *)(lVar9 + 0x80) == 0)) ||
      (lVar9 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8), lVar9 == 0)) &&
     (lVar9 = *(long *)(lVar8 + 0x20), *(long *)(lVar8 + 0x20) == 0)) {
    *(long *)(lVar8 + 0x20) = DAT_043f1798;
    lVar9 = lVar13;
  }
  plVar17[0x1c] = 0;
  plVar17[0x1a] = lVar9;
  plVar17[0x1b] = 0x666666666666666;
  *(undefined4 *)(plVar17 + 0x1d) = 0;
  plVar17[0x1e] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
  lVar13 = DAT_043f1798;
  if ((((lVar9 == 0) || (*(long *)(lVar9 + 0x80) == 0)) ||
      (lVar9 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8), lVar9 == 0)) &&
     (lVar9 = *(long *)(lVar8 + 0x20), *(long *)(lVar8 + 0x20) == 0)) {
    *(long *)(lVar8 + 0x20) = DAT_043f1798;
    lVar9 = lVar13;
  }
  plVar17[0x1f] = lVar9;
  plVar17[0x20] = 0x666666666666666;
  plVar17[0x21] = 0;
  *(undefined4 *)(plVar17 + 0x22) = 0;
  plVar17[0x23] = 0;
  *(undefined4 *)(plVar17 + 0x24) = 0x3f800000;
  do {
    iVar7 = DAT_043ef6b0;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x43ef6b0,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      DAT_043ef6b0 = DAT_043ef6b0 + 1;
    }
  } while (cVar2 != '\0');
  *(int *)(plVar17 + 0x25) = iVar7;
  plVar17[1] = (long)plVar19;
  plVar17[2] = (long)plVar17;
  plVar17[3] = 0x130;
  plVar17[4] = 0x10;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar3) {
      *(int *)plVar18 = (int)*plVar18 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar18 = (long *)(*(long *)(param_1 + 0xd8) + uVar15 * 0x38);
  puVar23 = (ulong *)(plVar18 + 1);
  uVar11 = *puVar23;
  plVar19 = plVar18 + 3;
  puVar22 = (ulong *)(plVar18 + 2);
  local_68 = plVar17;
  if (uVar11 < *puVar22) {
    FUN_02aa7690(plVar19,uVar11,&local_68);
    *puVar23 = *puVar23 + 8;
  }
  else {
    lVar10 = (long)(uVar11 - *plVar18) >> 3;
    uVar11 = lVar10 + 1;
    uVar15 = *(ulong *)(*(long *)(param_1 + 0xd8) + uVar15 * 0x38 + 0x20);
    if (0x7ffffffffffffffe < uVar15) {
      uVar15 = 0x7fffffffffffffff;
    }
    if (uVar15 < uVar11) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar13 = *puVar22 - *plVar18;
    uVar14 = lVar13 >> 2;
    if (uVar11 <= uVar14) {
      uVar11 = uVar14;
    }
    if ((ulong)(lVar13 >> 3) < uVar15 >> 1) {
      uVar15 = uVar11;
    }
    if (uVar15 == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = (**(code **)(*(long *)*plVar19 + 0x10))((long *)*plVar19,uVar15 << 3,8);
      if (lVar13 == 0) {
        (**(code **)(*(long *)*plVar19 + 0xb8))();
      }
    }
    plVar17 = (long *)(lVar13 + lVar10 * 8);
    FUN_02aa7690(plVar19,plVar17,&local_68);
    plVar16 = (long *)*plVar18;
    plVar20 = (long *)*puVar23;
    plVar21 = plVar17;
    if (plVar20 == plVar16) {
      plVar20 = plVar16;
    }
    else {
      do {
        lVar10 = *plVar19;
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), iVar7 != 0)) {
          FUN_008a62a4(puVar4);
          FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
        if (lVar9 != 0) {
          if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_02aa5b40;
          *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar10;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
        }
        plVar20 = plVar20 + -1;
        lVar10 = *plVar20;
        plVar21 = plVar21 + -1;
        *plVar21 = lVar10;
        if (lVar10 != 0) {
          piVar1 = (int *)(lVar10 + 0x50);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (lVar9 != 0) {
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
        }
      } while (plVar20 != plVar16);
      plVar16 = (long *)*puVar23;
      plVar20 = (long *)*plVar18;
    }
    *plVar18 = (long)plVar21;
    *puVar23 = (ulong)(plVar17 + 1);
    uVar11 = *puVar22;
    *puVar22 = lVar13 + uVar15 * 8;
LAB_02aa57ec:
    if (plVar16 != plVar20) {
      while( true ) {
        plVar16 = plVar16 + -1;
        plVar17 = (long *)*plVar16;
        if (plVar17 == (long *)0x0) break;
        plVar18 = plVar17 + 10;
        do {
          iVar7 = (int)*plVar18 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar3) {
            *(int *)plVar18 = iVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 != 0) break;
        (**(code **)(*plVar17 + 0x10))();
        if (plVar16 == plVar20) goto LAB_02aa5828;
      }
      goto LAB_02aa57ec;
    }
LAB_02aa5828:
    if (plVar20 != (long *)0x0) {
      plVar19 = (long *)*plVar19;
      uVar15 = (**(code **)(*plVar19 + 0xc0))(plVar19);
      if ((uVar15 & 1) != 0) {
        if (*(char *)(lVar8 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar8 + 0x38d488) = 1;
          *(undefined8 *)(lVar8 + 0x38d478) = 0;
          *(undefined8 *)(lVar8 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar8 + 0x38d480)) {
          FUN_02bcc824(plVar19,plVar20,uVar11 - (long)plVar20,8);
          goto joined_r0x02aa58ac;
        }
      }
      (**(code **)(*plVar19 + 0x18))(plVar19,plVar20,uVar11 - (long)plVar20,8);
    }
  }
joined_r0x02aa58ac:
  if (local_68 != (long *)0x0) {
    plVar19 = local_68 + 10;
    do {
      iVar7 = (int)*plVar19 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar3) {
        *(int *)plVar19 = iVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  return;
}


