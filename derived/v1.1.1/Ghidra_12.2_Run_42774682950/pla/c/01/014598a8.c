/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014598a8; name: FUN_014598a8
 */


void FUN_014598a8(long param_1)

{
  int *piVar1;
  long *plVar2;
  byte bVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  long *plVar16;
  ushort uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  time_t local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined1 local_98 [12];
  int local_8c;
  undefined8 local_88;
  long *local_80;
  
  plVar25 = *(long **)(param_1 + 0x2c8);
  if (plVar25 != (long *)0x0) {
    plVar22 = plVar25 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar6) {
        *(int *)plVar22 = (int)*plVar22 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar22 = (long *)plVar25[0x37];
  if (plVar22 != (long *)0x0) {
    lVar21 = plVar22[0xb];
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_0145a628;
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar15;
    }
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  puVar7 = PTR_DAT_04379558;
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379558), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar9 = PTR_DAT_04379568;
  puVar8 = PTR_DAT_04379560;
  lVar21 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar21;
  plVar27 = *(long **)(lVar21 + 0x228);
  if (plVar27 != (long *)0x0) {
    lVar21 = plVar27[0xb];
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_0145a628;
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar15;
    }
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379558), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar21 = *(long *)puVar8;
  *(long *)puVar9 = lVar21;
  plVar23 = *(long **)(lVar21 + 0x260);
  if (plVar23 != (long *)0x0) {
    lVar21 = plVar23[0xb];
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_0145a628;
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar15;
    }
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379558), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar21 = *(long *)puVar8;
  *(long *)puVar9 = lVar21;
  plVar24 = *(long **)(lVar21 + 0x220);
  if (plVar24 != (long *)0x0) {
    lVar21 = plVar24[0xb];
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_0145a628;
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar15;
    }
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  puVar10 = PTR_DAT_0437b6a8;
  if (((*PTR_DAT_0437b6a8 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_0437b6a8), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_0437e4b8,PTR_DAT_0437b6b0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b6a8);
  }
  puVar12 = PTR_DAT_0437e4b0;
  puVar11 = PTR_DAT_0437b6b0;
  uVar15 = *(undefined8 *)PTR_DAT_0437b6b0;
  *(undefined8 *)PTR_DAT_0437e4b0 = uVar15;
  FUN_00db87d8(uVar15,1);
  if (((*puVar10 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_0437b6a8), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_0437e4b8,PTR_DAT_0437b6b0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b6a8);
  }
  lVar21 = *(long *)puVar11;
  *(long *)puVar12 = lVar21;
  local_b8 = *(time_t *)(lVar21 + 0x50);
  localtime_r(&local_b8,(tm *)local_98);
  if ((int)plVar22[0x12] != 0) {
    lVar21 = 0;
    uVar18 = 0;
    do {
      *(undefined8 *)(plVar22[0x13] + lVar21 + 8) = 0;
      lVar19 = plVar22[0x13];
      lVar20 = *(long *)(lVar19 + lVar21);
      if (*(char *)(lVar20 + 0x7c) != '\0') {
        **(undefined2 **)(lVar20 + 0x58) = 0;
        *(undefined2 *)(lVar20 + 0x7a) = 0;
        lVar19 = plVar22[0x13];
      }
      lVar19 = lVar19 + lVar21;
      lVar21 = lVar21 + 0x18;
      *(ushort *)(lVar19 + 0x12) = *(ushort *)(lVar19 + 0x12) & 0xfffe;
      uVar18 = uVar18 + 1;
    } while (uVar18 < *(uint *)(plVar22 + 0x12));
  }
  FUN_02c395d0(plVar22,0,local_88._4_4_ + 0x76c,4,2,1);
  FUN_02c395d0(plVar22,1,(int)local_88 + 1,2,2,1);
  FUN_02c395d0(plVar22,2,local_8c,2,2,1);
  FUN_02c395d0(plVar22,3,(ulong)stack0xffffffffffffff70 & 0xffffffff,2,2,1);
  FUN_02c395d0(plVar22,4,local_98._4_4_,2,2,1);
  uVar18 = FUN_01459510();
  if ((uVar18 & 1) == 0) {
    pcStack_b0 = "pane_T_p_current_date_00";
    local_b8 = 0x19e6e42cc244727;
  }
  else {
    pcStack_b0 = "pane_T_h_current_date_00";
    local_b8 = -0x36b04b19121841b1;
  }
  local_a8 = 0x18;
  local_a0 = (long *)0x0;
  FUN_0145923c(param_1,0xd9a9ef243ab803e6,&local_b8);
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if ((int)plVar22[0x12] != 0) {
    lVar21 = 0;
    uVar18 = 0;
    do {
      *(undefined8 *)(plVar22[0x13] + lVar21 + 8) = 0;
      lVar19 = plVar22[0x13];
      lVar20 = *(long *)(lVar19 + lVar21);
      if (*(char *)(lVar20 + 0x7c) != '\0') {
        **(undefined2 **)(lVar20 + 0x58) = 0;
        *(undefined2 *)(lVar20 + 0x7a) = 0;
        lVar19 = plVar22[0x13];
      }
      lVar19 = lVar19 + lVar21;
      lVar21 = lVar21 + 0x18;
      *(ushort *)(lVar19 + 0x12) = *(ushort *)(lVar19 + 0x12) & 0xfffe;
      uVar18 = uVar18 + 1;
    } while (uVar18 < *(uint *)(plVar22 + 0x12));
  }
  uVar17 = *(ushort *)(plVar24 + 0x23);
  if (0x3e6 < uVar17) {
    uVar17 = 999;
  }
  uVar4 = *(undefined1 *)((long)plVar24 + 0x11a);
  FUN_02c395d0(plVar22,0,uVar17,3,0,1);
  FUN_02c395d0(plVar22,1,uVar4,2,2,1);
  local_98._0_4_ = -0x51ad98fc;
  local_98._4_4_ = 0xf4540a5;
  stack0xffffffffffffff70 = "pane_T_p_playtime_00";
  local_88._0_4_ = 0x14;
  local_88._4_4_ = 0;
  local_80 = (long *)0x0;
  FUN_0145923c(param_1,0x3d0ca6a8fc1def8a,local_98);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98._0_4_ = -0x51ad9749;
  local_98._4_4_ = 0xf4541a5;
  stack0xffffffffffffff70 = "pane_T_p_playtime_01";
  local_88._0_4_ = 0x14;
  local_88._4_4_ = 0;
  local_80 = (long *)0x0;
  FUN_0145923c(param_1,0x3d0ca6a8fc1def8a,local_98);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98._0_4_ = -0x2d6f6dfd;
  local_98._4_4_ = -0x5568ba50;
  stack0xffffffffffffff70 = "pane_A_alignment_03";
  local_88._0_4_ = 0x13;
  local_88._4_4_ = 0;
  local_80 = (long *)0x0;
  lVar21 = FUN_00d648b4(*(undefined8 *)(param_1 + 0x2c8),local_98);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (lVar21 != 0) {
    FUN_00256608(lVar21);
  }
  local_98._0_4_ = -0x2d6f5cff;
  local_98._4_4_ = -0x5568b050;
  stack0xffffffffffffff70 = "pane_A_alignment_09";
  local_88._0_4_ = 0x13;
  local_88._4_4_ = 0;
  local_80 = (long *)0x0;
  lVar21 = FUN_00d648b4(*(undefined8 *)(param_1 + 0x2c8),local_98);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (lVar21 != 0) {
    FUN_00256608(lVar21);
  }
  if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379558), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar21 = *(long *)puVar8;
  *(long *)puVar9 = lVar21;
  plVar26 = *(long **)(lVar21 + 0x220);
  if (plVar26 != (long *)0x0) {
    lVar21 = plVar26[0xb];
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_0145a628;
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar15;
    }
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar21 = plVar26[0xb];
  piVar1 = (int *)(lVar21 + 0xc);
  iVar14 = *(int *)((long)plVar26 + 0x11c);
  do {
    iVar13 = *piVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar13 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar13 + -1 == 0) {
    *(undefined8 *)(lVar21 + 0x18) = 0;
    (**(code **)(*plVar26 + 0x20))(plVar26);
    bVar3 = *puVar7;
  }
  else {
    bVar3 = *puVar7;
  }
  if (((bVar3 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379558), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar21 = *(long *)puVar8;
  *(long *)puVar9 = lVar21;
  plVar26 = *(long **)(lVar21 + 0x220);
  if (plVar26 != (long *)0x0) {
    lVar21 = plVar26[0xb];
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) {
LAB_0145a628:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar15;
    }
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_98._0_4_ = 0x50;
  plVar16 = (long *)FUN_00a246f0(&local_b8,*(undefined8 *)(param_1 + 8),local_98);
  if (plVar16 != (long *)0x0) {
    plVar2 = plVar16 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if ((int)plVar22[0x12] != 0) {
    lVar21 = 0;
    uVar18 = 0;
    do {
      *(undefined8 *)(plVar22[0x13] + lVar21 + 8) = 0;
      lVar19 = plVar22[0x13];
      lVar20 = *(long *)(lVar19 + lVar21);
      if (*(char *)(lVar20 + 0x7c) != '\0') {
        **(undefined2 **)(lVar20 + 0x58) = 0;
        *(undefined2 *)(lVar20 + 0x7a) = 0;
        lVar19 = plVar22[0x13];
      }
      lVar19 = lVar19 + lVar21;
      lVar21 = lVar21 + 0x18;
      *(ushort *)(lVar19 + 0x12) = *(ushort *)(lVar19 + 0x12) & 0xfffe;
      uVar18 = uVar18 + 1;
    } while (uVar18 < *(uint *)(plVar22 + 0x12));
  }
  if (iVar14 == 0) {
    uVar15 = 0xd9a9f0243ab80599;
  }
  else {
    FUN_02c395d0(plVar22,0,(*(uint *)((long)plVar26 + 0x11c) & 0xfff) + 0x76c,4,2,1);
    FUN_02c395d0(plVar22,1,(*(uint *)((long)plVar26 + 0x11c) >> 0xc & 0xf) + 1,2,2,1);
    FUN_02c395d0(plVar22,2,*(ushort *)((long)plVar26 + 0x11e) & 0x1f,2,2,1);
    uVar15 = 0x775b53d9c879470d;
  }
  stack0xffffffffffffff70 = "pane_T_last_report_01";
  local_98._0_4_ = -0x594a3136;
  local_98._4_4_ = -0x3fc4d3e0;
  local_88._0_4_ = 0x15;
  local_88._4_4_ = 0;
  local_80 = (long *)0x0;
  FUN_0145923c(param_1,uVar15,local_98);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (plVar16 != (long *)0x0) {
    plVar2 = plVar16 + 10;
    do {
      iVar13 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar13;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar13 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
  }
  local_98._0_4_ = 0x28;
  plVar16 = (long *)FUN_00a246f0(&local_b8,*(undefined8 *)(param_1 + 8),local_98);
  if (plVar16 != (long *)0x0) {
    plVar2 = plVar16 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if ((int)plVar22[0x12] != 0) {
    lVar21 = 0;
    uVar18 = 0;
    do {
      *(undefined8 *)(plVar22[0x13] + lVar21 + 8) = 0;
      lVar19 = plVar22[0x13];
      lVar20 = *(long *)(lVar19 + lVar21);
      if (*(char *)(lVar20 + 0x7c) != '\0') {
        **(undefined2 **)(lVar20 + 0x58) = 0;
        *(undefined2 *)(lVar20 + 0x7a) = 0;
        lVar19 = plVar22[0x13];
      }
      lVar19 = lVar19 + lVar21;
      lVar21 = lVar21 + 0x18;
      *(ushort *)(lVar19 + 0x12) = *(ushort *)(lVar19 + 0x12) & 0xfffe;
      uVar18 = uVar18 + 1;
    } while (uVar18 < *(uint *)(plVar22 + 0x12));
  }
  if (iVar14 == 0) {
    uVar15 = 0x3d0ca5a8fc1dedd7;
  }
  else {
    FUN_02c395d0(plVar22,0,*(uint *)((long)plVar26 + 0x11c) >> 0x15 & 0x1f,2,2,1);
    FUN_02c395d0(plVar22,1,*(uint *)((long)plVar26 + 0x11c) >> 0x1a,2,2,1);
    uVar15 = 0x775eb7d9c87c26d0;
  }
  stack0xffffffffffffff70 = "pane_T_last_report_02";
  local_98._0_4_ = -0x594a32e9;
  local_98._4_4_ = -0x3fc4d4e0;
  local_88._0_4_ = 0x15;
  local_88._4_4_ = 0;
  local_80 = (long *)0x0;
  FUN_0145923c(param_1,uVar15,local_98);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (plVar16 != (long *)0x0) {
    plVar2 = plVar16 + 10;
    do {
      iVar14 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar14;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
  }
  local_b8 = plVar23[0x5d];
  uVar18 = FUN_010c76fc(plVar22,&local_b8);
  if ((uVar18 & 1) == 0) {
    FUN_02c393b4(plVar22,0,0);
  }
  else {
    FUN_010c7198(plVar22,0,local_b8);
  }
  local_98._0_4_ = -0x594a349c;
  local_98._4_4_ = -0x3fc4d5e0;
  stack0xffffffffffffff70 = "pane_T_last_report_03";
  local_88._0_4_ = 0x15;
  local_88._4_4_ = 0;
  local_80 = (long *)0x0;
  FUN_0145923c(param_1,0x775b4bd9c8793975,local_98);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98._0_8_ = &DAT_aa9747b0d2909569;
  stack0xffffffffffffff70 = "pane_A_alignment_01";
  local_88._0_4_ = 0x13;
  local_88._4_4_ = 0;
  local_80 = (long *)0x0;
  lVar21 = FUN_00d648b4(*(undefined8 *)(param_1 + 0x2c8),local_98);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (lVar21 != 0) {
    *(byte *)(lVar21 + 0x58) = *(byte *)(lVar21 + 0x58) | 1;
    FUN_00256608(lVar21);
  }
  if (plVar26 != (long *)0x0) {
    lVar21 = plVar26[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*plVar26 + 0x20))(plVar26);
    }
  }
  if (plVar24 != (long *)0x0) {
    lVar21 = plVar24[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*plVar24 + 0x20))(plVar24);
    }
  }
  lVar21 = plVar23[0xb];
  piVar1 = (int *)(lVar21 + 0xc);
  do {
    iVar14 = *piVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar14 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar14 + -1 == 0) {
    *(undefined8 *)(lVar21 + 0x18) = 0;
    (**(code **)(*plVar23 + 0x20))(plVar23);
  }
  if (plVar27 != (long *)0x0) {
    lVar21 = plVar27[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*plVar27 + 0x20))(plVar27);
    }
  }
  lVar21 = plVar22[0xb];
  piVar1 = (int *)(lVar21 + 0xc);
  do {
    iVar14 = *piVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar14 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar14 + -1 == 0) {
    *(undefined8 *)(lVar21 + 0x18) = 0;
    (**(code **)(*plVar22 + 0x20))(plVar22);
  }
  plVar22 = plVar25 + 10;
  do {
    iVar14 = (int)*plVar22 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar6) {
      *(int *)plVar22 = iVar14;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar14 == 0) {
    (**(code **)(*plVar25 + 0x10))(plVar25);
  }
  return;
}


