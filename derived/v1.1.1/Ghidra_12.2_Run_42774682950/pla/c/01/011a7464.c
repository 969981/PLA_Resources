/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011a7464; name: FUN_011a7464
 */


void FUN_011a7464(long param_1,undefined8 param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  byte bVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  uint param3;
  char *local_d0;
  long *local_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long *local_a8;
  char local_a0 [8];
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  
  bVar8 = FUN_02c5be58(param_2);
  plVar13 = *(long **)(param_1 + 0x2c8);
  bVar2 = 4;
  if ((byte)(bVar8 - 1) < 4) {
    bVar2 = bVar8;
  }
  if (plVar13 != (long *)0x0) {
    plVar12 = plVar13 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_a0[0] = '\t';
  local_a0[1] = '-';
  local_a0[2] = -0x3e;
  local_a0[3] = -0x7c;
  local_a0[4] = 'S';
  local_a0[5] = -0x28;
  local_a0[6] = -0x6d;
  local_a0[7] = -0x74;
  pcStack_98 = "anime_switch_ppr";
  local_90 = 0x10;
  local_88 = (long *)0x0;
  FUN_0283b1e8(plVar13,local_a0);
  FUN_0283b748((float)(int)(bVar2 - 1),plVar13,local_a0);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  local_a0[0] = -0x6d;
  local_a0[1] = -0xf;
  local_a0[2] = 'w';
  local_a0[3] = 'W';
  local_a0[4] = -0x28;
  local_a0[5] = 'X';
  local_a0[6] = -0x3c;
  local_a0[7] = -0x31;
  pcStack_98 = "anime_L_btn_waza_leave_00_switch";
  local_90 = 0x20;
  local_88 = (long *)0x0;
  FUN_0283b1e8(plVar13,local_a0);
  FUN_0283b748(0x3f800000,plVar13,local_a0);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  plVar12 = (long *)plVar13[0x37];
  if (plVar12 != (long *)0x0) {
    lVar11 = plVar12[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (bVar2 != 0) {
    param3 = 0;
    do {
      snprintf(local_a0,0x40,"pane_L_btn_waza_%02d_T_h_waza_00",param3);
      uVar9 = FUN_02c5bed0(param_2,param3);
      FUN_010c5d94(plVar12,0,uVar9);
      local_d0 = local_a0;
      FUN_009313e8(&local_c8,&local_d0);
      plVar6 = local_c8;
      if (local_c8 == (long *)0x0) {
        local_c0 = *(long *)PTR_DAT_04379c88;
LAB_011a7a00:
        lStack_b8 = *(long *)PTR_PTR_04379d00;
        if (local_c8 != (long *)0x0) goto LAB_011a7694;
LAB_011a7a10:
        local_b0 = 0;
        local_a8 = (long *)0x0;
      }
      else {
        local_c0 = local_c8[0xb];
        if (local_c8 == (long *)0x0) goto LAB_011a7a00;
        lStack_b8 = local_c8[0xc];
        if (local_c8 == (long *)0x0) goto LAB_011a7a10;
LAB_011a7694:
        local_b0 = local_c8[0xd];
        local_a8 = (long *)0x0;
        (**(code **)(*local_c8 + 0x18))(local_c8);
        plVar7 = local_a8;
        local_a8 = plVar6;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x20))();
        }
      }
      FUN_011a6f68(param_1,0xf86b70deb1ed6cd1,&local_c0);
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 0x20))();
      }
      snprintf(local_a0,0x40,"pane_L_btn_waza_%02d_T_p_waza_00",param3);
      uVar9 = FUN_02c601d4(param_2,param3);
      FUN_02c395d0(plVar12,0,uVar9,2,0,1);
      local_d0 = local_a0;
      FUN_009313e8(&local_c8,&local_d0);
      plVar6 = local_c8;
      if (local_c8 == (long *)0x0) {
        local_c0 = *(long *)PTR_DAT_04379c88;
LAB_011a7a30:
        lStack_b8 = *(long *)PTR_PTR_04379d00;
        if (local_c8 != (long *)0x0) goto LAB_011a777c;
LAB_011a7a40:
        local_b0 = 0;
        local_a8 = (long *)0x0;
      }
      else {
        local_c0 = local_c8[0xb];
        if (local_c8 == (long *)0x0) goto LAB_011a7a30;
        lStack_b8 = local_c8[0xc];
        if (local_c8 == (long *)0x0) goto LAB_011a7a40;
LAB_011a777c:
        local_b0 = local_c8[0xd];
        local_a8 = (long *)0x0;
        (**(code **)(*local_c8 + 0x18))(local_c8);
        plVar7 = local_a8;
        local_a8 = plVar6;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x20))();
        }
      }
      FUN_011a6f68(param_1,0xf86b6fdeb1ed6b1e,&local_c0);
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 0x20))();
      }
      snprintf(local_a0,0x40,"pane_L_btn_waza_%02d_T_p_waza_02",param3);
      uVar9 = FUN_02c602a0(param_2,param3);
      FUN_02c395d0(plVar12,0,uVar9,2,0,1);
      local_d0 = local_a0;
      FUN_009313e8(&local_c8,&local_d0);
      plVar6 = local_c8;
      if (local_c8 == (long *)0x0) {
        local_c0 = *(long *)PTR_DAT_04379c88;
LAB_011a7a60:
        lStack_b8 = *(long *)PTR_PTR_04379d00;
        if (local_c8 != (long *)0x0) goto LAB_011a7854;
LAB_011a7a70:
        local_b0 = 0;
        local_a8 = (long *)0x0;
      }
      else {
        local_c0 = local_c8[0xb];
        if (local_c8 == (long *)0x0) goto LAB_011a7a60;
        lStack_b8 = local_c8[0xc];
        if (local_c8 == (long *)0x0) goto LAB_011a7a70;
LAB_011a7854:
        local_b0 = local_c8[0xd];
        local_a8 = (long *)0x0;
        (**(code **)(*local_c8 + 0x18))(local_c8);
        plVar7 = local_a8;
        local_a8 = plVar6;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x20))();
        }
      }
      FUN_011a6f68(param_1,0xf86b6ddeb1ed67b8,&local_c0);
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 0x20))();
      }
      param3 = param3 + 1;
    } while (param3 < bVar2);
  }
  if (plVar12 != (long *)0x0) {
    lVar11 = plVar12[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  lVar11 = thunk_FUN_00d2ec48(param_1 + 0x180,&DAT_043bdb00);
  if (lVar11 != 0) {
    local_a0[0] = '\0';
    local_a0[1] = '\0';
    local_a0[2] = '\0';
    local_a0[3] = '\0';
    local_a0[4] = '\0';
    local_a0[5] = '\0';
    local_a0[6] = '\0';
    local_a0[7] = '\0';
    FUN_0280f4d4(lVar11,local_a0,bVar2 != 0);
    local_a0[0] = '\0';
    local_a0[1] = '\0';
    local_a0[2] = '\0';
    local_a0[3] = '\0';
    local_a0[4] = '\x01';
    local_a0[5] = '\0';
    local_a0[6] = '\0';
    local_a0[7] = '\0';
    FUN_0280f4d4(lVar11,local_a0,1 < bVar2);
    local_a0[0] = '\0';
    local_a0[1] = '\0';
    local_a0[2] = '\0';
    local_a0[3] = '\0';
    local_a0[4] = '\x02';
    local_a0[5] = '\0';
    local_a0[6] = '\0';
    local_a0[7] = '\0';
    FUN_0280f4d4(lVar11,local_a0,2 < bVar2);
    local_a0[0] = '\0';
    local_a0[1] = '\0';
    local_a0[2] = '\0';
    local_a0[3] = '\0';
    local_a0[4] = '\x03';
    local_a0[5] = '\0';
    local_a0[6] = '\0';
    local_a0[7] = '\0';
    FUN_0280f4d4(lVar11,local_a0,3 < bVar2);
    local_a0[0] = '\0';
    local_a0[1] = '\0';
    local_a0[2] = '\0';
    local_a0[3] = '\0';
    local_a0[4] = '\0';
    local_a0[5] = '\0';
    local_a0[6] = '\0';
    local_a0[7] = '\0';
    FUN_0280e8d8(lVar11,local_a0,1,0);
  }
  if (plVar13 != (long *)0x0) {
    plVar12 = plVar13 + 10;
    do {
      iVar3 = (int)*plVar12 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  return;
}


