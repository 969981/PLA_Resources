/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01457d8c; name: FUN_01457d8c
 */


void FUN_01457d8c(long param_1)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  ushort uVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  time_t local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined1 local_98 [16];
  undefined8 local_88;
  long *local_80;
  
  plVar19 = *(long **)(param_1 + 0x2c8);
  if (plVar19 != (long *)0x0) {
    plVar20 = plVar19 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar6) {
        *(int *)plVar20 = (int)*plVar20 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar20 = (long *)plVar19[0x37];
  if (plVar20 != (long *)0x0) {
    lVar21 = plVar20[0xb];
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_014587e0;
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar13;
    }
    piVar2 = (int *)(lVar21 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  puVar9 = PTR_DAT_04379558;
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379558), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar11 = PTR_DAT_04379568;
  puVar10 = PTR_DAT_04379560;
  lVar21 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar21;
  plVar22 = *(long **)(lVar21 + 0x228);
  if (plVar22 != (long *)0x0) {
    lVar21 = plVar22[0xb];
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_014587e0;
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar13;
    }
    piVar2 = (int *)(lVar21 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379558), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar21 = *(long *)puVar10;
  *(long *)puVar11 = lVar21;
  plVar23 = *(long **)(lVar21 + 0x260);
  if (plVar23 != (long *)0x0) {
    lVar21 = plVar23[0xb];
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_014587e0;
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar13;
    }
    piVar2 = (int *)(lVar21 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379558), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar21 = *(long *)puVar10;
  *(long *)puVar11 = lVar21;
  plVar24 = *(long **)(lVar21 + 0x220);
  if (plVar24 != (long *)0x0) {
    lVar21 = plVar24[0xb];
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_014587e0;
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar13;
    }
    piVar2 = (int *)(lVar21 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar14 = *(long *)(param_1 + 0x2c8);
  plVar15 = *(long **)(lVar14 + 0x148);
  lVar21 = *(long *)(lVar14 + 0x150);
  plVar25 = plVar15;
  if ((lVar21 != 0) && (*plVar15 != -0x3fc4d3df594a3136)) {
    lVar18 = 0;
    do {
      if (lVar21 * 0x30 + -0x30 == lVar18) goto LAB_01457fa0;
      lVar3 = lVar18 + 0x30;
      lVar7 = lVar18 + 0x30;
      lVar18 = lVar3;
    } while (*(long *)((long)plVar15 + lVar7) != -0x3fc4d3df594a3136);
    plVar25 = (long *)((long)plVar15 + lVar3);
  }
  if ((plVar25 != plVar15 + lVar21 * 6) && (lVar18 = plVar25[4], lVar18 != 0)) {
    *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) & 0xfe;
    lVar14 = *(long *)(param_1 + 0x2c8);
    plVar15 = *(long **)(lVar14 + 0x148);
    lVar21 = *(long *)(lVar14 + 0x150);
  }
LAB_01457fa0:
  plVar25 = plVar15;
  if ((lVar21 != 0) && (*plVar15 != -0x3fc4d4df594a32e9)) {
    lVar18 = 0;
    do {
      if (lVar21 * 0x30 + -0x30 == lVar18) goto LAB_01458024;
      lVar3 = lVar18 + 0x30;
      lVar7 = lVar18 + 0x30;
      lVar18 = lVar3;
    } while (*(long *)((long)plVar15 + lVar7) != -0x3fc4d4df594a32e9);
    plVar25 = (long *)((long)plVar15 + lVar3);
  }
  if ((plVar25 != plVar15 + lVar21 * 6) && (lVar18 = plVar25[4], lVar18 != 0)) {
    *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) & 0xfe;
    lVar14 = *(long *)(param_1 + 0x2c8);
    plVar15 = *(long **)(lVar14 + 0x148);
    lVar21 = *(long *)(lVar14 + 0x150);
  }
LAB_01458024:
  plVar25 = plVar15;
  if ((lVar21 != 0) && (*plVar15 != -0x3fc4d5df594a349c)) {
    lVar18 = lVar21 * 0x30;
    plVar8 = plVar15;
    do {
      lVar18 = lVar18 + -0x30;
      if (lVar18 == 0) goto LAB_014580a8;
      plVar25 = plVar8 + 6;
      plVar1 = plVar8 + 6;
      plVar8 = plVar25;
    } while (*plVar1 != -0x3fc4d5df594a349c);
  }
  if ((plVar25 != plVar15 + lVar21 * 6) && (lVar21 = plVar25[4], lVar21 != 0)) {
    *(byte *)(lVar21 + 0x58) = *(byte *)(lVar21 + 0x58) & 0xfe;
    lVar14 = *(long *)(param_1 + 0x2c8);
  }
LAB_014580a8:
  local_98._0_8_ = &DAT_aa9747b0d2909569;
  local_98._8_8_ = "pane_A_alignment_01";
  local_88._0_4_ = 0x13;
  local_88._4_4_ = 0;
  local_80 = (long *)0x0;
  lVar21 = FUN_00d648b4(lVar14,local_98);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (lVar21 != 0) {
    *(byte *)(lVar21 + 0x58) = *(byte *)(lVar21 + 0x58) & 0xfe;
  }
  if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379558), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar21 = *(long *)puVar10;
  *(long *)puVar11 = lVar21;
  plVar25 = *(long **)(lVar21 + 0x220);
  if (plVar25 != (long *)0x0) {
    lVar21 = plVar25[0xb];
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) {
LAB_014587e0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar13;
    }
    piVar2 = (int *)(lVar21 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if ((int)plVar20[0x12] != 0) {
    lVar21 = 0;
    uVar17 = 0;
    do {
      *(undefined8 *)(plVar20[0x13] + lVar21 + 8) = 0;
      lVar14 = plVar20[0x13];
      lVar18 = *(long *)(lVar14 + lVar21);
      if (*(char *)(lVar18 + 0x7c) != '\0') {
        **(undefined2 **)(lVar18 + 0x58) = 0;
        *(undefined2 *)(lVar18 + 0x7a) = 0;
        lVar14 = plVar20[0x13];
      }
      lVar14 = lVar14 + lVar21;
      lVar21 = lVar21 + 0x18;
      *(ushort *)(lVar14 + 0x12) = *(ushort *)(lVar14 + 0x12) & 0xfffe;
      uVar17 = uVar17 + 1;
    } while (uVar17 < *(uint *)(plVar20 + 0x12));
  }
  FUN_02c395d0(plVar20,0,(*(uint *)((long)plVar25 + 0x11c) & 0xfff) + 0x76c,4,2,1);
  FUN_02c395d0(plVar20,1,(*(uint *)((long)plVar25 + 0x11c) >> 0xc & 0xf) + 1,2,2,1);
  FUN_02c395d0(plVar20,2,*(ushort *)((long)plVar25 + 0x11e) & 0x1f,2,2,1);
  FUN_02c395d0(plVar20,3,*(uint *)((long)plVar25 + 0x11c) >> 0x15 & 0x1f,2,2,1);
  FUN_02c395d0(plVar20,4,*(uint *)((long)plVar25 + 0x11c) >> 0x1a,2,2,1);
  uVar17 = FUN_01459510();
  if ((uVar17 & 1) == 0) {
    local_98._8_8_ = "pane_T_p_current_date_00";
    local_98._0_4_ = -0x33dbb8d9;
    local_98._4_4_ = 0x19e6e42;
  }
  else {
    local_98._8_8_ = "pane_T_h_current_date_00";
    local_98._0_4_ = -0x121841b1;
    local_98._4_4_ = -0x36b04b1a;
  }
  local_88._0_4_ = 0x18;
  local_88._4_4_ = 0;
  local_80 = (long *)0x0;
  FUN_0145923c(param_1,0xd9a9ef243ab803e6,local_98);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  lVar21 = plVar25[0xb];
  piVar2 = (int *)(lVar21 + 0xc);
  do {
    iVar12 = *piVar2;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar6) {
      *piVar2 = iVar12 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar12 + -1 == 0) {
    *(undefined8 *)(lVar21 + 0x18) = 0;
    (**(code **)(*plVar25 + 0x20))(plVar25);
  }
  local_b8 = FUN_0112bcb4(plVar24);
  localtime_r(&local_b8,(tm *)local_98);
  if ((int)plVar20[0x12] != 0) {
    lVar21 = 0;
    uVar17 = 0;
    do {
      *(undefined8 *)(plVar20[0x13] + lVar21 + 8) = 0;
      lVar14 = plVar20[0x13];
      lVar18 = *(long *)(lVar14 + lVar21);
      if (*(char *)(lVar18 + 0x7c) != '\0') {
        **(undefined2 **)(lVar18 + 0x58) = 0;
        *(undefined2 *)(lVar18 + 0x7a) = 0;
        lVar14 = plVar20[0x13];
      }
      lVar14 = lVar14 + lVar21;
      lVar21 = lVar21 + 0x18;
      *(ushort *)(lVar14 + 0x12) = *(ushort *)(lVar14 + 0x12) & 0xfffe;
      uVar17 = uVar17 + 1;
    } while (uVar17 < *(uint *)(plVar20 + 0x12));
  }
  uVar16 = *(ushort *)(plVar24 + 0x23);
  uVar4 = *(undefined1 *)((long)plVar24 + 0x11a);
  if (0x3e6 < uVar16) {
    uVar16 = 999;
  }
  FUN_02c395d0(plVar20,0,uVar16,3,0,1);
  FUN_02c395d0(plVar20,1,uVar4,2,2,1);
  local_b8 = 0xf4540a5ae526704;
  pcStack_b0 = "pane_T_p_playtime_00";
  local_a8 = 0x14;
  local_a0 = (long *)0x0;
  FUN_0145923c(param_1,0x3d0ca6a8fc1def8a,&local_b8);
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  local_b8 = 0xf4541a5ae5268b7;
  pcStack_b0 = "pane_T_p_playtime_01";
  local_a8 = 0x14;
  local_a0 = (long *)0x0;
  FUN_0145923c(param_1,0x3d0ca6a8fc1def8a,&local_b8);
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  local_b8 = -0x5568ba4f2d6f6dfd;
  pcStack_b0 = "pane_A_alignment_03";
  local_a8 = 0x13;
  local_a0 = (long *)0x0;
  lVar21 = FUN_00d648b4(*(undefined8 *)(param_1 + 0x2c8),&local_b8);
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (lVar21 != 0) {
    FUN_00256608(lVar21);
  }
  local_b8 = -0x5568b04f2d6f5cff;
  pcStack_b0 = "pane_A_alignment_09";
  local_a8 = 0x13;
  local_a0 = (long *)0x0;
  lVar21 = FUN_00d648b4(*(undefined8 *)(param_1 + 0x2c8),&local_b8);
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (lVar21 != 0) {
    FUN_00256608(lVar21);
  }
  if ((undefined1 *)plVar23[0x5d] == &DAT_cbf29ce484222645) {
    FUN_02c393b4(plVar20,0,0);
  }
  else {
    FUN_010c7198(plVar20,0);
  }
  uVar17 = FUN_01459510();
  if ((uVar17 & 1) == 0) {
    local_98._8_8_ = "pane_T_p_current_zone_01";
    local_98._0_8_ = 0xb8223649e952;
  }
  else {
    local_98._8_8_ = "pane_T_p_current_zone_00";
    local_98._0_8_ = 0xb9223649eb05;
  }
  local_98._0_8_ = local_98._0_8_ | 0x6cdb000000000000;
  local_88._0_4_ = 0x18;
  local_88._4_4_ = 0;
  local_80 = (long *)0x0;
  FUN_0145923c(param_1,0xb51603e29e8da41b,local_98);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  lVar21 = plVar24[0xb];
  piVar2 = (int *)(lVar21 + 0xc);
  do {
    iVar12 = *piVar2;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar6) {
      *piVar2 = iVar12 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar12 + -1 == 0) {
    *(undefined8 *)(lVar21 + 0x18) = 0;
    (**(code **)(*plVar24 + 0x20))(plVar24);
  }
  lVar21 = plVar23[0xb];
  piVar2 = (int *)(lVar21 + 0xc);
  do {
    iVar12 = *piVar2;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar6) {
      *piVar2 = iVar12 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar12 + -1 == 0) {
    *(undefined8 *)(lVar21 + 0x18) = 0;
    (**(code **)(*plVar23 + 0x20))(plVar23);
  }
  if (plVar22 != (long *)0x0) {
    lVar21 = plVar22[0xb];
    piVar2 = (int *)(lVar21 + 0xc);
    do {
      iVar12 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*plVar22 + 0x20))(plVar22);
    }
  }
  lVar21 = plVar20[0xb];
  piVar2 = (int *)(lVar21 + 0xc);
  do {
    iVar12 = *piVar2;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar6) {
      *piVar2 = iVar12 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar12 + -1 == 0) {
    *(undefined8 *)(lVar21 + 0x18) = 0;
    (**(code **)(*plVar20 + 0x20))(plVar20);
  }
  plVar20 = plVar19 + 10;
  do {
    iVar12 = (int)*plVar20 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar6) {
      *(int *)plVar20 = iVar12;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar12 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
  }
  return;
}


