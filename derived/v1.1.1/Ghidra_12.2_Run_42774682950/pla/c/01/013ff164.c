/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013ff164; name: FUN_013ff164
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013ff164(long param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 local_118;
  char *pcStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  char *pcStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  char *local_70;
  char *local_68;
  long *local_60;
  long *local_58;
  
  lVar9 = *(long *)(*(long *)(param_1 + 0x68) + 0xb0);
  uVar1 = *(uint *)(lVar9 + 400);
  if (uVar1 != 0) {
    uVar11 = 0;
    piVar10 = (int *)(lVar9 + 0x20);
LAB_013ff1b4:
    puVar14 = (undefined8 *)PTR_DAT_04379c88;
    if (*(long *)(piVar10 + -4) != 0) {
      puVar14 = (undefined8 *)(*(long *)(piVar10 + -4) + 0x58);
    }
    if (((undefined1 *)*puVar14 != &DAT_304928236d5bcabe) || (*piVar10 != 10)) goto LAB_013ff714;
    if (0xf < (uint)uVar11) {
      plVar12 = (long *)0x0;
      goto LAB_013ff1e8;
    }
    plVar12 = *(long **)(piVar10 + -2);
    if (plVar12 == (long *)0x0) goto LAB_013ff1e8;
    lVar9 = plVar12[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar8;
      }
      piVar10 = (int *)(lVar9 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar3) {
          *piVar10 = *piVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_013ff1e8:
      plVar4 = (long *)plVar12[0xd];
      goto joined_r0x013ff1ec;
    }
    goto LAB_013ff800;
  }
LAB_013ff724:
  plVar12 = (long *)0x0;
  plVar4 = _DAT_00000068;
joined_r0x013ff1ec:
  if (plVar4 != (long *)0x0) {
    plVar13 = plVar4 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (plVar12 != (long *)0x0) {
    lVar9 = plVar12[0xb];
    piVar10 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar3) {
        *piVar10 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
      plVar12 = *(long **)(param_1 + 0x2c8);
      goto joined_r0x013ff228;
    }
  }
  plVar12 = *(long **)(param_1 + 0x2c8);
joined_r0x013ff228:
  if (plVar12 != (long *)0x0) {
    plVar13 = plVar12 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar9 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar9;
  plVar13 = *(long **)(lVar9 + 0x298);
  if (plVar13 != (long *)0x0) {
    lVar9 = plVar13[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
LAB_013ff800:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar8;
    }
    piVar10 = (int *)(lVar9 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar3) {
        *piVar10 = *piVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar11 = FUN_013e1d14(*(undefined4 *)(*(long *)(param_1 + 0x730) + 0x70));
  if ((uVar11 & 1) != 0) {
    FUN_013d9430(*(undefined8 *)(*(long *)(param_1 + 0x730) + 0xef0),1);
    uVar5 = *(undefined4 *)(*(long *)(param_1 + 0x730) + 0x74);
    *(undefined4 *)(param_1 + 0xcc8) = 0;
    *(undefined2 *)(param_1 + 0xccc) = 0;
    *(undefined4 *)(param_1 + 0xcd0) = 0;
    *(undefined1 *)(param_1 + 0xcd4) = 0;
    *(undefined4 *)(param_1 + 0xcd8) = uVar5;
    FUN_014009c8(param_1);
  }
  uVar5 = FUN_013e1c28(*(undefined4 *)(*(long *)(param_1 + 0x730) + 0x70));
  local_78 = (undefined8 *)((ulong)local_78._4_4_ << 0x20);
  local_98 = (long *)((ulong)local_98._4_4_ << 0x20);
  local_b8 = (ulong)local_b8._4_4_ << 0x20;
  local_d8 = (ulong)local_d8._4_4_ << 0x20;
  local_f8 = (ulong)local_f8._4_4_ << 0x20;
  FUN_013dae20(*(undefined8 *)(*(long *)(param_1 + 0x730) + 0xa0),
               *(undefined4 *)(*(long *)(param_1 + 0x730) + 0x70),&local_78,&local_98,&local_b8,
               &local_d8,&local_f8);
  *(undefined4 *)(param_1 + 0x794) = (undefined4)local_78;
  local_78 = (undefined8 *)0x632461fdfaac9ae;
  local_70 = "pane_L_p_ur_00_L_num_b_35pt_100";
  local_68 = (char *)0x1f;
  local_60 = (long *)0x0;
  local_98 = (long *)0xed85b1fe48fe530;
  pcStack_90 = "pane_L_p_ur_00_L_num_b_35pt_010";
  local_b8 = 0xedbe11fe492feb9;
  pcStack_b0 = "pane_L_p_ur_00_L_num_b_35pt_000";
  local_d8 = 0x3801ea27b03bbec7;
  pcStack_d0 = "anime_L_p_ur_00_L_num_b_35pt_100_switch";
  local_88 = 0x1f;
  uStack_80 = 0;
  local_f8 = 0x407efafd03169dad;
  pcStack_f0 = "anime_L_p_ur_00_L_num_b_35pt_010_switch";
  local_a8 = 0x1f;
  uStack_a0 = 0;
  local_c8 = 0x27;
  uStack_c0 = 0;
  local_e8 = 0x27;
  uStack_e0 = 0;
  local_118 = 0x38d3507bd914d8de;
  pcStack_110 = "anime_L_p_ur_00_L_num_b_35pt_000_switch";
  local_108 = 0x27;
  uStack_100 = 0;
  uVar6 = FUN_0112e868(plVar13,uVar5);
  FUN_013ff92c(param_1,&local_78,&local_98,&local_b8,&local_d8,&local_f8,&local_118,uVar6);
  local_78 = (undefined8 *)0xb08cc8cc4338605b;
  local_70 = "pane_L_p_ur_01_L_num_b_35pt_100";
  local_68 = (char *)0x1f;
  local_60 = (long *)0x0;
  local_98 = (long *)0xa77993cc3df63c99;
  pcStack_90 = "pane_L_p_ur_01_L_num_b_35pt_010";
  local_88 = 0x1f;
  uStack_80 = 0;
  local_b8 = 0xa7768dcc3df3fc90;
  pcStack_b0 = "pane_L_p_ur_01_L_num_b_35pt_000";
  local_a8 = 0x1f;
  uStack_a0 = 0;
  local_d8 = 0x2623679378a3ea0c;
  pcStack_d0 = "anime_L_p_ur_01_L_num_b_35pt_100_switch";
  local_f8 = 0xf222089ec89680ce;
  pcStack_f0 = "anime_L_p_ur_01_L_num_b_35pt_010_switch";
  local_c8 = 0x27;
  uStack_c0 = 0;
  local_e8 = 0x27;
  uStack_e0 = 0;
  local_118 = 0x910ba60de517b59d;
  pcStack_110 = "anime_L_p_ur_01_L_num_b_35pt_000_switch";
  local_108 = 0x27;
  uStack_100 = 0;
  uVar6 = FUN_0112eb80(plVar13,uVar5,0);
  FUN_013ff92c(param_1,&local_78,&local_98,&local_b8,&local_d8,&local_f8,&local_118,uVar6);
  local_78 = (undefined8 *)0xaf957c6b7db34d5d;
  local_70 = "pane_L_p_cmp_00_L_num_b_35pt_100";
  local_98 = (long *)0xa682c76b7872031b;
  pcStack_90 = "pane_L_p_cmp_00_L_num_b_35pt_010";
  local_68 = (char *)0x20;
  local_60 = (long *)0x0;
  local_88 = 0x20;
  uStack_80 = 0;
  local_a8 = 0x20;
  uStack_a0 = 0;
  local_b8 = 0xa67f416b786ee992;
  pcStack_b0 = "pane_L_p_cmp_00_L_num_b_35pt_000";
  local_d8 = 0xed2198a1292c990a;
  pcStack_d0 = "anime_L_p_cmp_00_L_num_b_35pt_100_switch";
  local_f8 = 0xcd349290b4cf9754;
  pcStack_f0 = "anime_L_p_cmp_00_L_num_b_35pt_010_switch";
  local_c8 = 0x28;
  uStack_c0 = 0;
  local_e8 = 0x28;
  uStack_e0 = 0;
  local_118 = 0xa45f29f58d7afe3;
  pcStack_110 = "anime_L_p_cmp_00_L_num_b_35pt_000_switch";
  local_108 = 0x28;
  uStack_100 = 0;
  uVar5 = FUN_0112ed20(plVar13,uVar5);
  FUN_013ff92c(param_1,&local_78,&local_98,&local_b8,&local_d8,&local_f8,&local_118,uVar5);
  lVar9 = *(long *)(param_1 + 0x730);
  uVar5 = 0;
  if (*(char *)(lVar9 + 0xf10) != '\0') {
    uVar5 = *(undefined4 *)(lVar9 + 0xf14);
    *(undefined1 *)(lVar9 + 0xf10) = 0;
    *(undefined4 *)(lVar9 + 0xf14) = 0;
    *(undefined2 *)(lVar9 + 0xf18) = 0;
    *(undefined4 *)(lVar9 + 0xf1c) = 0;
    *(undefined2 *)(lVar9 + 0xf20) = 0;
    *(undefined8 *)(lVar9 + 0xf24) = 0xffffffff00000000;
    *(undefined1 *)(lVar9 + 0xf2c) = 0;
  }
  FUN_013ffe7c(param_1,*(undefined4 *)(param_1 + 0x794),0,uVar5);
  local_78 = (undefined8 *)&DAT_ec034b23cfd86628;
  local_70 = "list_panel";
  local_68 = (char *)0xa;
  local_60 = (long *)0x0;
  uVar8 = FUN_00d2ee28(param_1 + 0x180,&local_78);
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  local_78 = &local_98;
  local_98 = (long *)0x0;
  local_70 = (char *)0x1513dced4360a77f;
  local_68 = "list_panel_cursor";
  local_60 = (long *)0x11;
  local_58 = (long *)0x0;
  FUN_00d36f04(uVar8,&local_78,0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((local_98 != (long *)0x0) && (*(char *)((long)local_98 + 0xa3) != '\0')) {
    *(undefined1 *)((long)local_98 + 0xa3) = 0;
    (**(code **)(*local_98 + 0xa0))(local_98,0);
  }
  puVar14 = &DAT_0420cde8;
  do {
    local_78 = (undefined8 *)*puVar14;
    local_70 = (char *)puVar14[1];
    local_68 = (char *)puVar14[2];
    local_60 = (long *)0x0;
    if (*local_70 == '\0') {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_00d648b4(*(undefined8 *)(param_1 + 0x2c8),&local_78);
      if (local_60 != (long *)0x0) {
        (**(code **)(*local_60 + 0x20))();
      }
    }
    FUN_00256608(uVar8);
    puVar14 = puVar14 + 3;
  } while (puVar14 != (undefined8 *)0x420cf80);
  if (plVar13 != (long *)0x0) {
    lVar9 = plVar13[0xb];
    piVar10 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar3) {
        *piVar10 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  if (plVar12 != (long *)0x0) {
    plVar13 = plVar12 + 10;
    do {
      iVar7 = (int)*plVar13 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *(int *)plVar13 = iVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
  if (plVar4 != (long *)0x0) {
    plVar12 = plVar4 + 10;
    do {
      iVar7 = (int)*plVar12 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = iVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  return;
LAB_013ff714:
  uVar11 = uVar11 + 1;
  piVar10 = piVar10 + 6;
  if (uVar1 == uVar11) goto LAB_013ff724;
  goto LAB_013ff1b4;
}


