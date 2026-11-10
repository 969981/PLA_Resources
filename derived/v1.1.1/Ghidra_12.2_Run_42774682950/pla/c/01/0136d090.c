/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0136d090; name: FUN_0136d090
 */


void FUN_0136d090(long param_1,uint param_2,uint param_3)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  bool bVar7;
  long lVar8;
  char *__format;
  long lVar9;
  undefined4 uVar10;
  uint param3;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  uint **local_d0;
  long *local_c8;
  long *local_c0;
  long lStack_b8;
  long local_b0;
  long *local_a8;
  uint *local_a0 [8];
  uint local_54;
  
  lVar9 = *(long *)(param_1 + 0x5c0);
  lVar8 = param_1 + 0x5b8;
  local_54 = param_2;
  if (lVar9 == 0) {
LAB_0136d0c8:
    uVar12 = *(undefined8 *)(param_1 + 0x5e8);
    local_a0[0] = &local_54;
    lVar8 = FUN_0136f9bc(lVar8,&local_54,local_a0);
    uVar10 = 1;
    *(undefined4 *)(lVar8 + 0x20) = 1;
    *(uint *)(lVar8 + 0x24) = param_3;
    *(int *)(lVar8 + 0x28) = (int)uVar12;
    param3 = *(int *)(param_1 + 0x5e8) - 1;
    bVar7 = true;
  }
  else {
    bVar7 = *(uint *)(lVar9 + 0x1c) < param_2;
    lVar3 = param_1 + 0x5c0;
    if (!bVar7) {
      lVar3 = lVar9;
    }
    for (lVar9 = *(long *)(lVar9 + (ulong)bVar7 * 8); lVar9 != 0;
        lVar9 = *(long *)(lVar9 + (ulong)bVar7 * 8)) {
      bVar7 = *(uint *)(lVar9 + 0x1c) < param_2;
      if (!bVar7) {
        lVar3 = lVar9;
      }
    }
    if ((lVar3 == param_1 + 0x5c0) || (param_2 < *(uint *)(lVar3 + 0x1c))) goto LAB_0136d0c8;
    local_a0[0] = &local_54;
    lVar9 = FUN_0136f9bc(lVar8,&local_54,local_a0);
    *(uint *)(lVar9 + 0x24) = *(int *)(lVar9 + 0x24) + param_3;
    local_a0[0] = &local_54;
    lVar9 = FUN_0136f9bc(lVar8,&local_54,local_a0);
    *(int *)(lVar9 + 0x20) = *(int *)(lVar9 + 0x20) + 1;
    local_a0[0] = &local_54;
    lVar9 = FUN_0136f9bc(lVar8,&local_54,local_a0);
    uVar10 = *(undefined4 *)(lVar9 + 0x20);
    param_3 = *(uint *)(lVar9 + 0x24);
    local_a0[0] = &local_54;
    lVar8 = FUN_0136f9bc(lVar8,&local_54,local_a0);
    param3 = *(uint *)(lVar8 + 0x28);
    bVar7 = false;
  }
  snprintf((char *)local_a0,0x40,"pane_N_mngm_info_%02d",param3);
  local_d0 = local_a0;
  FUN_009313e8(&local_c8,&local_d0);
  plVar13 = local_c8;
  if (local_c8 == (long *)0x0) {
    local_c0 = *(long **)PTR_DAT_04379c88;
LAB_0136dc70:
    lStack_b8 = *(long *)PTR_PTR_04379d00;
    if (local_c8 != (long *)0x0) goto LAB_0136d148;
LAB_0136dc80:
    local_b0 = 0;
  }
  else {
    local_c0 = (long *)local_c8[0xb];
    if (local_c8 == (long *)0x0) goto LAB_0136dc70;
    lStack_b8 = local_c8[0xc];
    if (local_c8 == (long *)0x0) goto LAB_0136dc80;
LAB_0136d148:
    local_b0 = local_c8[0xd];
  }
  local_a8 = (long *)0x0;
  if (local_c8 == (long *)0x0) {
    local_a8 = local_c8;
  }
  else {
    (**(code **)(*local_c8 + 0x18))(local_c8);
    plVar11 = local_a8;
    local_a8 = plVar13;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x20))();
    }
  }
  lVar8 = FUN_0283ac34(*(undefined8 *)(param_1 + 0x2c8),&local_c0);
  *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 1;
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  lVar8 = param_1 + 0x180;
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  FUN_0136dde0(param_1,param3,0,param_3 % 10);
  FUN_0136dde0(param_1,param3,1,param_3 / 10 + (param_3 / 100) * -10);
  FUN_0136dde0(param_1,param3,2,param_3 / 100 + (param_3 / 1000) * -10);
  FUN_0136dde0(param_1,param3,3,param_3 / 1000 + (param_3 / 10000) * -10);
  FUN_0136dde0(param_1,param3,4,param_3 / 10000 + (param_3 / 100000) * -10);
  FUN_0136dde0(param_1,param3,5,(param_3 >> 5) / 0xc35 + ((param_3 >> 5) / 0x7a12) * -10);
  if (bVar7) {
    snprintf((char *)local_a0,0x40,"pane_N_mngm_info_%02d",param3);
    local_d0 = local_a0;
    FUN_009313e8(&local_c8,&local_d0);
    plVar13 = local_c8;
    if (local_c8 == (long *)0x0) {
      local_c0 = *(long **)PTR_DAT_04379c88;
LAB_0136dd10:
      lStack_b8 = *(long *)PTR_PTR_04379d00;
      if (local_c8 != (long *)0x0) goto LAB_0136d2e8;
LAB_0136dd20:
      local_b0 = 0;
    }
    else {
      local_c0 = (long *)local_c8[0xb];
      if (local_c8 == (long *)0x0) goto LAB_0136dd10;
      lStack_b8 = local_c8[0xc];
      if (local_c8 == (long *)0x0) goto LAB_0136dd20;
LAB_0136d2e8:
      local_b0 = local_c8[0xd];
    }
    local_a8 = (long *)0x0;
    if (local_c8 == (long *)0x0) {
      local_a8 = local_c8;
    }
    else {
      (**(code **)(*local_c8 + 0x18))(local_c8);
      plVar11 = local_a8;
      local_a8 = plVar13;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x20))();
      }
    }
    lVar9 = FUN_0283ac34(*(undefined8 *)(param_1 + 0x2c8),&local_c0);
    *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 1;
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    snprintf((char *)local_a0,0x40,"anime_L_mngm_score_info_00_%02d_wake",param3);
    local_d0 = local_a0;
    FUN_009313e8(&local_c8,&local_d0);
    plVar13 = local_c8;
    if (local_c8 == (long *)0x0) {
      local_c0 = *(long **)PTR_DAT_04379c88;
LAB_0136dd38:
      lStack_b8 = *(long *)PTR_PTR_04379d00;
      if (local_c8 != (long *)0x0) goto LAB_0136d388;
LAB_0136dd48:
      local_b0 = 0;
    }
    else {
      local_c0 = (long *)local_c8[0xb];
      if (local_c8 == (long *)0x0) goto LAB_0136dd38;
      lStack_b8 = local_c8[0xc];
      if (local_c8 == (long *)0x0) goto LAB_0136dd48;
LAB_0136d388:
      local_b0 = local_c8[0xd];
    }
    local_a8 = (long *)0x0;
    if (local_c8 == (long *)0x0) {
      local_a8 = local_c8;
    }
    else {
      (**(code **)(*local_c8 + 0x18))(local_c8);
      plVar11 = local_a8;
      local_a8 = plVar13;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x20))();
      }
    }
    FUN_00d2df7c(lVar8,&local_c0);
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    snprintf((char *)local_a0,0x40,"anime_L_mngm_score_info_00_%02d_keep",param3);
    local_d0 = local_a0;
    FUN_009313e8(&local_c8,&local_d0);
    plVar13 = local_c8;
    if (local_c8 == (long *)0x0) {
      local_c0 = *(long **)PTR_DAT_04379c88;
LAB_0136dd60:
      lStack_b8 = *(long *)PTR_PTR_04379d00;
      if (local_c8 != (long *)0x0) goto LAB_0136d41c;
LAB_0136dd70:
      local_b0 = 0;
    }
    else {
      local_c0 = (long *)local_c8[0xb];
      if (local_c8 == (long *)0x0) goto LAB_0136dd60;
      lStack_b8 = local_c8[0xc];
      if (local_c8 == (long *)0x0) goto LAB_0136dd70;
LAB_0136d41c:
      local_b0 = local_c8[0xd];
    }
    local_a8 = (long *)0x0;
    if (local_c8 == (long *)0x0) {
      local_a8 = local_c8;
    }
    else {
      (**(code **)(*local_c8 + 0x18))(local_c8);
      plVar11 = local_a8;
      local_a8 = plVar13;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x20))();
      }
    }
    FUN_00d2df7c(lVar8,&local_c0);
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    snprintf((char *)local_a0,0x40,"anime_L_mngm_score_info_01_%02d_open",param3);
    local_d0 = local_a0;
    FUN_009313e8(&local_c8,&local_d0);
    plVar13 = local_c8;
    if (local_c8 == (long *)0x0) {
      local_c0 = *(long **)PTR_DAT_04379c88;
LAB_0136dd88:
      lStack_b8 = *(long *)PTR_PTR_04379d00;
      if (local_c8 != (long *)0x0) goto LAB_0136d4b0;
LAB_0136dd98:
      local_b0 = 0;
    }
    else {
      local_c0 = (long *)local_c8[0xb];
      if (local_c8 == (long *)0x0) goto LAB_0136dd88;
      lStack_b8 = local_c8[0xc];
      if (local_c8 == (long *)0x0) goto LAB_0136dd98;
LAB_0136d4b0:
      local_b0 = local_c8[0xd];
    }
    local_a8 = (long *)0x0;
    if (local_c8 == (long *)0x0) {
      local_a8 = local_c8;
    }
    else {
      (**(code **)(*local_c8 + 0x18))(local_c8);
      plVar11 = local_a8;
      local_a8 = plVar13;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x20))();
      }
    }
    FUN_00d2df7c(lVar8,&local_c0);
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    __format = "anime_L_mngm_score_info_01_%02d_keep";
  }
  else {
    snprintf((char *)local_a0,0x40,"anime_L_mngm_score_info_00_%02d_count",param3);
    local_d0 = local_a0;
    FUN_009313e8(&local_c8,&local_d0);
    plVar13 = local_c8;
    if (local_c8 == (long *)0x0) {
      local_c0 = *(long **)PTR_DAT_04379c88;
LAB_0136ddb0:
      lStack_b8 = *(long *)PTR_PTR_04379d00;
      if (local_c8 != (long *)0x0) goto LAB_0136d9e0;
LAB_0136ddc0:
      local_b0 = 0;
    }
    else {
      local_c0 = (long *)local_c8[0xb];
      if (local_c8 == (long *)0x0) goto LAB_0136ddb0;
      lStack_b8 = local_c8[0xc];
      if (local_c8 == (long *)0x0) goto LAB_0136ddc0;
LAB_0136d9e0:
      local_b0 = local_c8[0xd];
    }
    local_a8 = (long *)0x0;
    if (local_c8 == (long *)0x0) {
      local_a8 = local_c8;
    }
    else {
      (**(code **)(*local_c8 + 0x18))(local_c8);
      plVar11 = local_a8;
      local_a8 = plVar13;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x20))();
      }
    }
    FUN_00d2df7c(lVar8,&local_c0);
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    __format = "anime_L_mngm_score_info_01_%02d_count";
  }
  snprintf((char *)local_a0,0x40,__format,(ulong)param3);
  local_d0 = local_a0;
  FUN_009313e8(&local_c8,&local_d0);
  plVar13 = local_c8;
  if (local_c8 == (long *)0x0) {
    local_c0 = *(long **)PTR_DAT_04379c88;
LAB_0136dce8:
    lStack_b8 = *(long *)PTR_PTR_04379d00;
    if (local_c8 != (long *)0x0) goto LAB_0136d544;
LAB_0136dcf8:
    local_b0 = 0;
  }
  else {
    local_c0 = (long *)local_c8[0xb];
    if (local_c8 == (long *)0x0) goto LAB_0136dce8;
    lStack_b8 = local_c8[0xc];
    if (local_c8 == (long *)0x0) goto LAB_0136dcf8;
LAB_0136d544:
    local_b0 = local_c8[0xd];
  }
  local_a8 = (long *)0x0;
  if (local_c8 == (long *)0x0) {
    local_a8 = local_c8;
  }
  else {
    (**(code **)(*local_c8 + 0x18))(local_c8);
    plVar11 = local_a8;
    local_a8 = plVar13;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x20))();
    }
  }
  FUN_00d2df7c(lVar8,&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  snprintf((char *)local_a0,0x40,"pane_L_mngm_score_info_01_%02d",param3);
  local_d0 = local_a0;
  FUN_009313e8(&local_c8,&local_d0);
  plVar13 = local_c8;
  if (local_c8 == (long *)0x0) {
    local_c0 = *(long **)PTR_DAT_04379c88;
LAB_0136dc98:
    lStack_b8 = *(long *)PTR_PTR_04379d00;
    if (local_c8 != (long *)0x0) goto LAB_0136d5d8;
LAB_0136dca8:
    local_b0 = 0;
  }
  else {
    local_c0 = (long *)local_c8[0xb];
    if (local_c8 == (long *)0x0) goto LAB_0136dc98;
    lStack_b8 = local_c8[0xc];
    if (local_c8 == (long *)0x0) goto LAB_0136dca8;
LAB_0136d5d8:
    local_b0 = local_c8[0xd];
  }
  local_a8 = (long *)0x0;
  if (local_c8 == (long *)0x0) {
    local_a8 = local_c8;
  }
  else {
    (**(code **)(*local_c8 + 0x18))(local_c8);
    plVar11 = local_a8;
    local_a8 = plVar13;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x20))();
    }
  }
  lVar8 = FUN_0283ac34(*(undefined8 *)(param_1 + 0x2c8),&local_c0);
  *(byte *)(lVar8 + 0x58) = bVar7 ^ 1;
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  snprintf((char *)local_a0,0x40,"pane_L_mngm_score_info_01_%02d_T_mngm_score_info_00",param3);
  plVar13 = *(long **)(param_1 + 0x2c8);
  if (plVar13 != (long *)0x0) {
    plVar11 = plVar13 + 10;
    do {
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar11 = (long *)plVar13[0x37];
  if (plVar11 != (long *)0x0) {
    lVar8 = plVar11[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar14 = plVar13 + 10;
  do {
    iVar5 = (int)*plVar14 + -1;
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar7) {
      *(int *)plVar14 = iVar5;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    plVar13 = *(long **)(param_1 + 0x2c8);
  }
  else {
    plVar13 = *(long **)(param_1 + 0x2c8);
  }
  if (plVar13 != (long *)0x0) {
    plVar14 = plVar13 + 10;
    do {
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar7) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar14 = (long *)plVar13[0x38];
  if (plVar14 != (long *)0x0) {
    plVar2 = plVar14 + 10;
    do {
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = iVar5;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  plVar2 = plVar13 + 10;
  do {
    iVar5 = (int)*plVar2 + -1;
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *(int *)plVar2 = iVar5;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  FUN_02c395d0(plVar11,0,uVar10,2,0,1);
  FUN_00d37c90(&local_c0,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb0),0);
  plVar13 = (long *)local_c0[0xd];
  if (plVar13 != (long *)0x0) {
    plVar2 = plVar13 + 10;
    do {
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (local_c0 != (long *)0x0) {
    lVar8 = local_c0[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar5 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_c0 + 0x20))();
    }
  }
  local_c0 = (long *)0x248aa7c8cbcbbafd;
  FUN_02c2e7d0(plVar13,&local_c0,plVar14);
  plVar14 = *(long **)(param_1 + 0x2c8);
  if (plVar14 != (long *)0x0) {
    plVar2 = plVar14 + 10;
    do {
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_d0 = local_a0;
  FUN_009313e8(&local_c8,&local_d0);
  plVar2 = local_c8;
  if (local_c8 == (long *)0x0) {
    local_c0 = *(long **)PTR_DAT_04379c88;
  }
  else {
    local_c0 = (long *)local_c8[0xb];
    if (local_c8 != (long *)0x0) {
      lStack_b8 = local_c8[0xc];
      goto joined_r0x0136dccc;
    }
  }
  lStack_b8 = *(long *)PTR_PTR_04379d00;
joined_r0x0136dccc:
  if (local_c8 == (long *)0x0) {
    local_b0 = 0;
  }
  else {
    local_b0 = local_c8[0xd];
  }
  local_a8 = (long *)0x0;
  if (local_c8 == (long *)0x0) {
    local_a8 = local_c8;
  }
  else {
    (**(code **)(*local_c8 + 0x18))(local_c8);
    plVar6 = local_a8;
    local_a8 = plVar2;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))();
    }
  }
  FUN_0283d080(plVar14,&local_c0,10);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (plVar14 != (long *)0x0) {
    plVar2 = plVar14 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = iVar5;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  if (plVar13 != (long *)0x0) {
    plVar14 = plVar13 + 10;
    do {
      iVar5 = (int)*plVar14 + -1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar7) {
        *(int *)plVar14 = iVar5;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  if (plVar11 != (long *)0x0) {
    lVar8 = plVar11[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar5 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
  }
  return;
}


