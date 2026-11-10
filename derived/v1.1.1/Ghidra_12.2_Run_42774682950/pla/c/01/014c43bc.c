/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014c43bc; name: FUN_014c43bc
 */


void FUN_014c43bc(long param_1,long param_2,uint param_3,int param_4,uint param_5)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  int iVar15;
  char *local_d0;
  long *local_c8;
  long local_c0;
  char *local_b8;
  long local_b0;
  long *local_a8;
  char acStack_a0 [64];
  
  plVar12 = *(long **)(param_1 + 0x2c8);
  if (plVar12 != (long *)0x0) {
    plVar14 = plVar12 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar6 = FUN_02c5be58(param_2);
  if ((uVar6 & 0xff) <= param_3) {
    snprintf(acStack_a0,0x40,"pane_L_scr_01_waza_L_pt_waza_info_%02d_T_waza_name_%02d",param_4,0);
    local_d0 = acStack_a0;
    FUN_009313e8(&local_c8,&local_d0);
    plVar14 = local_c8;
    if (local_c8 == (long *)0x0) {
      plVar11 = (long *)PTR_DAT_04379c88;
    }
    else {
      plVar11 = local_c8 + 0xb;
    }
    local_c0 = *plVar11;
    if (local_c8 == (long *)0x0) {
      plVar11 = (long *)PTR_PTR_04379d00;
    }
    else {
      plVar11 = local_c8 + 0xc;
    }
    local_b8 = (char *)*plVar11;
    if (local_c8 == (long *)0x0) {
      local_b0 = 0;
      local_a8 = (long *)0x0;
    }
    else {
      local_b0 = local_c8[0xd];
      local_a8 = (long *)0x0;
      (**(code **)(*local_c8 + 0x18))(local_c8);
      plVar11 = local_a8;
      local_a8 = plVar14;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x20))();
      }
    }
    FUN_0283b11c(plVar12,&local_c0,0);
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    snprintf(acStack_a0,0x40,"pane_L_scr_01_waza_L_pt_waza_info_%02d_T_waza_name_%02d",param_4,1);
    local_d0 = acStack_a0;
    FUN_009313e8(&local_c8,&local_d0);
    plVar14 = local_c8;
    if (local_c8 == (long *)0x0) {
      local_c0 = *(long *)PTR_DAT_04379c88;
LAB_014c5114:
      local_b8 = *(char **)PTR_PTR_04379d00;
      if (local_c8 != (long *)0x0) goto LAB_014c4ba4;
LAB_014c5124:
      local_b0 = 0;
      local_a8 = (long *)0x0;
    }
    else {
      local_c0 = local_c8[0xb];
      if (local_c8 == (long *)0x0) goto LAB_014c5114;
      local_b8 = (char *)local_c8[0xc];
      if (local_c8 == (long *)0x0) goto LAB_014c5124;
LAB_014c4ba4:
      local_b0 = local_c8[0xd];
      local_a8 = (long *)0x0;
      (**(code **)(*local_c8 + 0x18))(local_c8);
      plVar11 = local_a8;
      local_a8 = plVar14;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x20))();
      }
    }
    FUN_0283b11c(plVar12,&local_c0,0);
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    snprintf(acStack_a0,0x40,"pane_L_scr_01_waza_L_pt_waza_info_%02d_P_icon_poke_type_00",param_4);
    local_d0 = acStack_a0;
    FUN_009313e8(&local_c8,&local_d0);
    plVar14 = local_c8;
    if (local_c8 == (long *)0x0) {
      local_c0 = *(long *)PTR_DAT_04379c88;
LAB_014c5140:
      local_b8 = *(char **)PTR_PTR_04379d00;
      if (local_c8 != (long *)0x0) goto LAB_014c4c5c;
LAB_014c5150:
      local_b0 = 0;
    }
    else {
      local_c0 = local_c8[0xb];
      if (local_c8 == (long *)0x0) goto LAB_014c5140;
      local_b8 = (char *)local_c8[0xc];
      if (local_c8 == (long *)0x0) goto LAB_014c5150;
LAB_014c4c5c:
      local_b0 = local_c8[0xd];
    }
    local_a8 = (long *)0x0;
    if (local_c8 == (long *)0x0) {
      local_a8 = local_c8;
    }
    else {
      (**(code **)(*local_c8 + 0x18))(local_c8);
      plVar11 = local_a8;
      local_a8 = plVar14;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x20))();
      }
    }
    FUN_0283b11c(plVar12,&local_c0,0);
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    snprintf(acStack_a0,0x40,"pane_L_scr_01_waza_L_pt_waza_info_%02d_T_ui_pokelist_pp",param_4);
    local_d0 = acStack_a0;
    FUN_009313e8(&local_c8,&local_d0);
    plVar14 = local_c8;
    if (local_c8 == (long *)0x0) {
      local_c0 = *(long *)PTR_DAT_04379c88;
LAB_014c5168:
      local_b8 = *(char **)PTR_PTR_04379d00;
      if (local_c8 != (long *)0x0) goto LAB_014c4cf4;
LAB_014c5178:
      local_b0 = 0;
    }
    else {
      local_c0 = local_c8[0xb];
      if (local_c8 == (long *)0x0) goto LAB_014c5168;
      local_b8 = (char *)local_c8[0xc];
      if (local_c8 == (long *)0x0) goto LAB_014c5178;
LAB_014c4cf4:
      local_b0 = local_c8[0xd];
    }
    local_a8 = (long *)0x0;
    if (local_c8 == (long *)0x0) {
      local_a8 = local_c8;
    }
    else {
      (**(code **)(*local_c8 + 0x18))(local_c8);
      plVar11 = local_a8;
      local_a8 = plVar14;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x20))();
      }
    }
    FUN_0283b11c(plVar12,&local_c0,0);
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    snprintf(acStack_a0,0x40,"pane_L_scr_01_waza_L_pt_waza_info_%02d_N_kdw_00",param_4);
    local_d0 = acStack_a0;
    FUN_009313e8(&local_c8,&local_d0);
    plVar14 = local_c8;
    if (local_c8 == (long *)0x0) {
      local_c0 = *(long *)PTR_DAT_04379c88;
LAB_014c5190:
      local_b8 = *(char **)PTR_PTR_04379d00;
      if (local_c8 != (long *)0x0) goto LAB_014c4d8c;
LAB_014c51a0:
      local_b0 = 0;
    }
    else {
      local_c0 = local_c8[0xb];
      if (local_c8 == (long *)0x0) goto LAB_014c5190;
      local_b8 = (char *)local_c8[0xc];
      if (local_c8 == (long *)0x0) goto LAB_014c51a0;
LAB_014c4d8c:
      local_b0 = local_c8[0xd];
    }
    local_a8 = (long *)0x0;
    if (local_c8 == (long *)0x0) {
      local_a8 = local_c8;
    }
    else {
      (**(code **)(*local_c8 + 0x18))(local_c8);
      plVar11 = local_a8;
      local_a8 = plVar14;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x20))();
      }
    }
    FUN_0283b11c(plVar12,&local_c0,0);
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    goto joined_r0x014c4dd8;
  }
  plVar14 = (long *)plVar12[0x37];
  if (plVar14 != (long *)0x0) {
    lVar13 = plVar14[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar11 = *(long **)(param_1 + 0x510);
  if (plVar11 != (long *)0x0) {
    plVar2 = plVar11 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar7 = FUN_02c6b1c0(*(undefined8 *)(param_2 + 0x98),param_3);
  FUN_010c5d94(plVar14,0);
  uVar6 = param_5 ^ 1;
  iVar15 = 0;
  do {
    snprintf(acStack_a0,0x40,"pane_L_scr_01_waza_L_pt_waza_info_%02d_T_waza_name_%02d",param_4,
             iVar15);
    local_d0 = acStack_a0;
    FUN_009313e8(&local_c8,&local_d0);
    plVar2 = local_c8;
    if (local_c8 == (long *)0x0) {
      local_c0 = *(long *)PTR_DAT_04379c88;
LAB_014c4fb4:
      local_b8 = *(char **)PTR_PTR_04379d00;
      if (local_c8 != (long *)0x0) goto LAB_014c4508;
LAB_014c4fc4:
      local_b0 = 0;
      local_a8 = (long *)0x0;
    }
    else {
      local_c0 = local_c8[0xb];
      if (local_c8 == (long *)0x0) goto LAB_014c4fb4;
      local_b8 = (char *)local_c8[0xc];
      if (local_c8 == (long *)0x0) goto LAB_014c4fc4;
LAB_014c4508:
      local_b0 = local_c8[0xd];
      local_a8 = (long *)0x0;
      (**(code **)(*local_c8 + 0x18))(local_c8);
      plVar10 = local_a8;
      local_a8 = plVar2;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))();
      }
    }
    FUN_014c1468(param_1,0,0x36ee1f2d08e1fce3,&local_c0);
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    if (iVar15 == 0) {
      local_d0 = acStack_a0;
      FUN_009313e8(&local_c8,&local_d0);
      plVar2 = local_c8;
      if (local_c8 == (long *)0x0) {
        local_c0 = *(long *)PTR_DAT_04379c88;
LAB_014c4fe4:
        local_b8 = *(char **)PTR_PTR_04379d00;
      }
      else {
        local_c0 = local_c8[0xb];
        if (local_c8 == (long *)0x0) goto LAB_014c4fe4;
        local_b8 = (char *)local_c8[0xc];
      }
      uVar5 = param_5;
      if (local_c8 == (long *)0x0) {
        local_b0 = 0;
        local_a8 = (long *)0x0;
      }
      else {
        local_b0 = local_c8[0xd];
        local_a8 = (long *)0x0;
        (**(code **)(*local_c8 + 0x18))(local_c8);
        plVar10 = local_a8;
        local_a8 = plVar2;
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x20))();
        }
      }
    }
    else {
      local_d0 = acStack_a0;
      FUN_009313e8(&local_c8,&local_d0);
      plVar2 = local_c8;
      uVar5 = uVar6;
      if (local_c8 == (long *)0x0) {
        local_c0 = *(long *)PTR_DAT_04379c88;
LAB_014c5014:
        local_b8 = *(char **)PTR_PTR_04379d00;
        if (local_c8 != (long *)0x0) goto LAB_014c462c;
LAB_014c5024:
        local_b0 = 0;
        local_a8 = (long *)0x0;
      }
      else {
        local_c0 = local_c8[0xb];
        if (local_c8 == (long *)0x0) goto LAB_014c5014;
        local_b8 = (char *)local_c8[0xc];
        if (local_c8 == (long *)0x0) goto LAB_014c5024;
LAB_014c462c:
        local_b0 = local_c8[0xd];
        local_a8 = (long *)0x0;
        (**(code **)(*local_c8 + 0x18))(local_c8);
        plVar10 = local_a8;
        local_a8 = plVar2;
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x20))();
        }
      }
    }
    FUN_0283b11c(plVar12,&local_c0,uVar5 & 1);
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    iVar15 = iVar15 + 1;
  } while (iVar15 != 2);
  snprintf(acStack_a0,0x40,"pane_L_scr_01_waza_L_pt_waza_info_%02d_P_icon_poke_type_00",param_4);
  local_d0 = acStack_a0;
  FUN_009313e8(&local_c8,&local_d0);
  plVar2 = local_c8;
  if (local_c8 == (long *)0x0) {
    plVar10 = (long *)PTR_DAT_04379c88;
  }
  else {
    plVar10 = local_c8 + 0xb;
  }
  local_c0 = *plVar10;
  if (local_c8 == (long *)0x0) {
    local_b8 = *(char **)PTR_PTR_04379d00;
LAB_014c50f0:
    local_b0 = 0;
  }
  else {
    local_b8 = (char *)local_c8[0xc];
    if (local_c8 == (long *)0x0) goto LAB_014c50f0;
    local_b0 = local_c8[0xd];
  }
  local_a8 = (long *)0x0;
  if (local_c8 == (long *)0x0) {
    local_a8 = local_c8;
  }
  else {
    (**(code **)(*local_c8 + 0x18))(local_c8);
    plVar10 = local_a8;
    local_a8 = plVar2;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))();
    }
  }
  if (*local_b8 == '\0') {
    lVar13 = 0;
  }
  else {
    lVar13 = FUN_00d63240(*(undefined8 *)(param_1 + 0x2c8),&local_c0);
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (lVar13 != 0) {
    uVar8 = FUN_02c8dc80(uVar7);
    FUN_0284fbb0(plVar11,uVar8,1,lVar13,0,0);
    local_d0 = acStack_a0;
    FUN_009313e8(&local_c8,&local_d0);
    plVar2 = local_c8;
    if (local_c8 == (long *)0x0) {
      local_c0 = *(long *)PTR_DAT_04379c88;
LAB_014c50c8:
      local_b8 = *(char **)PTR_PTR_04379d00;
      if (local_c8 != (long *)0x0) goto LAB_014c47b0;
LAB_014c50d8:
      local_b0 = 0;
    }
    else {
      local_c0 = local_c8[0xb];
      if (local_c8 == (long *)0x0) goto LAB_014c50c8;
      local_b8 = (char *)local_c8[0xc];
      if (local_c8 == (long *)0x0) goto LAB_014c50d8;
LAB_014c47b0:
      local_b0 = local_c8[0xd];
    }
    local_a8 = (long *)0x0;
    if (local_c8 == (long *)0x0) {
      local_a8 = local_c8;
    }
    else {
      (**(code **)(*local_c8 + 0x18))(local_c8);
      plVar10 = local_a8;
      local_a8 = plVar2;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))();
      }
    }
    FUN_0283b11c(plVar12,&local_c0,1);
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
  }
  snprintf(acStack_a0,0x40,"pane_L_scr_01_waza_L_pt_waza_info_%02d_T_ui_pokelist_pp",param_4);
  uVar8 = FUN_02c601d4(param_2,param_3);
  FUN_02c395d0(plVar14,0,uVar8,2,0,1);
  uVar8 = FUN_02c602a0(param_2,param_3);
  FUN_02c395d0(plVar14,1,uVar8,2,0,1);
  local_d0 = acStack_a0;
  FUN_009313e8(&local_c8,&local_d0);
  plVar2 = local_c8;
  if (local_c8 == (long *)0x0) {
    local_c0 = *(long *)PTR_DAT_04379c88;
LAB_014c5050:
    local_b8 = *(char **)PTR_PTR_04379d00;
    if (local_c8 != (long *)0x0) goto LAB_014c4898;
LAB_014c5060:
    local_b0 = 0;
  }
  else {
    local_c0 = local_c8[0xb];
    if (local_c8 == (long *)0x0) goto LAB_014c5050;
    local_b8 = (char *)local_c8[0xc];
    if (local_c8 == (long *)0x0) goto LAB_014c5060;
LAB_014c4898:
    local_b0 = local_c8[0xd];
  }
  local_a8 = (long *)0x0;
  if (local_c8 == (long *)0x0) {
    local_a8 = local_c8;
  }
  else {
    (**(code **)(*local_c8 + 0x18))(local_c8);
    plVar10 = local_a8;
    local_a8 = plVar2;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))();
    }
  }
  FUN_014c1468(param_1,0,0x36ee232d08e203af,&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  local_d0 = acStack_a0;
  FUN_009313e8(&local_c8,&local_d0);
  plVar2 = local_c8;
  if (local_c8 == (long *)0x0) {
    local_c0 = *(long *)PTR_DAT_04379c88;
LAB_014c5078:
    local_b8 = *(char **)PTR_PTR_04379d00;
    if (local_c8 != (long *)0x0) goto LAB_014c4928;
LAB_014c5088:
    local_b0 = 0;
  }
  else {
    local_c0 = local_c8[0xb];
    if (local_c8 == (long *)0x0) goto LAB_014c5078;
    local_b8 = (char *)local_c8[0xc];
    if (local_c8 == (long *)0x0) goto LAB_014c5088;
LAB_014c4928:
    local_b0 = local_c8[0xd];
  }
  local_a8 = (long *)0x0;
  if (local_c8 == (long *)0x0) {
    local_a8 = local_c8;
  }
  else {
    (**(code **)(*local_c8 + 0x18))(local_c8);
    plVar10 = local_a8;
    local_a8 = plVar2;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))();
    }
  }
  FUN_0283b11c(plVar12,&local_c0,1);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  snprintf(acStack_a0,0x40,"pane_L_scr_01_waza_L_pt_waza_info_%02d_N_kdw_00",param_4);
  local_d0 = acStack_a0;
  FUN_009313e8(&local_c8,&local_d0);
  plVar2 = local_c8;
  if (local_c8 == (long *)0x0) {
    local_c0 = *(long *)PTR_DAT_04379c88;
LAB_014c50a0:
    local_b8 = *(char **)PTR_PTR_04379d00;
    if (local_c8 != (long *)0x0) goto LAB_014c49c0;
LAB_014c50b0:
    local_b0 = 0;
  }
  else {
    local_c0 = local_c8[0xb];
    if (local_c8 == (long *)0x0) goto LAB_014c50a0;
    local_b8 = (char *)local_c8[0xc];
    if (local_c8 == (long *)0x0) goto LAB_014c50b0;
LAB_014c49c0:
    local_b0 = local_c8[0xd];
  }
  local_a8 = (long *)0x0;
  if (local_c8 == (long *)0x0) {
    local_a8 = local_c8;
  }
  else {
    (**(code **)(*local_c8 + 0x18))(local_c8);
    plVar10 = local_a8;
    local_a8 = plVar2;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))();
    }
  }
  uVar6 = FUN_02c618d4(param_2,uVar7);
  FUN_0283b11c(plVar12,&local_c0,uVar6 & 1);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (plVar11 != (long *)0x0) {
    plVar2 = plVar11 + 10;
    do {
      iVar15 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar15;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar15 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  if (plVar14 != (long *)0x0) {
    lVar13 = plVar14[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar15 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
joined_r0x014c4dd8:
  if (plVar12 != (long *)0x0) {
    plVar14 = plVar12 + 10;
    do {
      iVar15 = (int)*plVar14 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = iVar15;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar15 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
  return;
}


