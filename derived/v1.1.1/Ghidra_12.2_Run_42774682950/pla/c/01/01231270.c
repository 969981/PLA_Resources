/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01231270; name: FUN_01231270
 */


void FUN_01231270(long param_1,int param_2,int param_3,int param_4,uint param_5,ulong param_6)

{
  int *piVar1;
  long *plVar2;
  long **pplVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long **pplVar7;
  undefined8 uVar8;
  char *__format;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *local_118;
  long *local_110;
  long lStack_108;
  long local_100;
  long *local_f8;
  long *local_f0;
  long *local_e8;
  long lStack_e0;
  long local_d8;
  long *local_d0;
  long local_c8 [13];
  
  plVar12 = *(long **)(param_1 + 0x2c8);
  if (plVar12 != (long *)0x0) {
    plVar11 = plVar12 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar11 = (long *)plVar12[0x37];
  if (plVar11 != (long *)0x0) {
    lVar10 = plVar11[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar10 = param_1 + 0x180;
  plVar2 = plVar12 + 10;
  do {
    iVar6 = (int)*plVar2 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(int *)plVar2 = iVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  FUN_02c395d0(plVar11,0,param_3 + param_2,2,0,1);
  if (plVar11 != (long *)0x0) {
    lVar9 = plVar11[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
  }
  snprintf((char *)local_c8,0x60,"pane_L_settings_list_%02d_T_slider_current_param",param_5);
  local_f0 = local_c8;
  FUN_009313e8(&local_110,&local_f0);
  plVar12 = local_110;
  if (local_110 == (long *)0x0) {
    local_e8 = *(long **)PTR_DAT_04379c88;
LAB_012317c8:
    lStack_e0 = *(long *)PTR_PTR_04379d00;
    if (local_110 != (long *)0x0) goto LAB_012313a8;
LAB_012317d8:
    local_d8 = 0;
  }
  else {
    local_e8 = (long *)local_110[0xb];
    if (local_110 == (long *)0x0) goto LAB_012317c8;
    lStack_e0 = local_110[0xc];
    if (local_110 == (long *)0x0) goto LAB_012317d8;
LAB_012313a8:
    local_d8 = local_110[0xd];
  }
  local_d0 = (long *)0x0;
  if (local_110 == (long *)0x0) {
    local_d0 = local_110;
  }
  else {
    (**(code **)(*local_110 + 0x18))(local_110);
    plVar11 = local_d0;
    local_d0 = plVar12;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x20))();
    }
  }
  FUN_01230458(param_1,0x20c13d1754d1aa0e,&local_e8);
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (local_110 != (long *)0x0) {
    (**(code **)(*local_110 + 0x20))();
  }
  if (param_4 == 10) {
    __format = "anime_L_settings_list_%02d_L_option_slider_00_control_slider";
LAB_01231424:
    snprintf((char *)local_c8,0x60,__format,(ulong)param_5);
  }
  else {
    if (param_4 == 4) {
      __format = "anime_L_settings_list_%02d_L_option_slider_00_control_slider_step5";
      goto LAB_01231424;
    }
    if (param_4 == 3) {
      __format = "anime_L_settings_list_%02d_L_option_slider_00_control_slider_step4";
      goto LAB_01231424;
    }
  }
  local_f0 = local_c8;
  FUN_009313e8(&local_110,&local_f0);
  plVar12 = local_110;
  if (local_110 == (long *)0x0) {
    local_e8 = *(long **)PTR_DAT_04379c88;
LAB_012317f0:
    lStack_e0 = *(long *)PTR_PTR_04379d00;
    if (local_110 != (long *)0x0) goto LAB_01231468;
LAB_01231800:
    local_d8 = 0;
  }
  else {
    local_e8 = (long *)local_110[0xb];
    if (local_110 == (long *)0x0) goto LAB_012317f0;
    lStack_e0 = local_110[0xc];
    if (local_110 == (long *)0x0) goto LAB_01231800;
LAB_01231468:
    local_d8 = local_110[0xd];
  }
  local_d0 = (long *)0x0;
  if (local_110 == (long *)0x0) {
    local_d0 = local_110;
  }
  else {
    (**(code **)(*local_110 + 0x18))(local_110);
    plVar11 = local_d0;
    local_d0 = plVar12;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x20))();
    }
  }
  FUN_00d2df7c(lVar10,&local_e8);
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (local_110 != (long *)0x0) {
    (**(code **)(*local_110 + 0x20))();
  }
  local_f0 = local_c8;
  FUN_009313e8(&local_110,&local_f0);
  plVar12 = local_110;
  if (local_110 == (long *)0x0) {
    local_e8 = *(long **)PTR_DAT_04379c88;
LAB_01231818:
    lStack_e0 = *(long *)PTR_PTR_04379d00;
    if (local_110 != (long *)0x0) goto LAB_012314e4;
LAB_01231828:
    local_d8 = 0;
  }
  else {
    local_e8 = (long *)local_110[0xb];
    if (local_110 == (long *)0x0) goto LAB_01231818;
    lStack_e0 = local_110[0xc];
    if (local_110 == (long *)0x0) goto LAB_01231828;
LAB_012314e4:
    local_d8 = local_110[0xd];
  }
  local_d0 = (long *)0x0;
  if (local_110 == (long *)0x0) {
    local_d0 = local_110;
  }
  else {
    (**(code **)(*local_110 + 0x18))(local_110);
    plVar11 = local_d0;
    local_d0 = plVar12;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x20))();
    }
  }
  FUN_00d2e4b8((float)(uint)(param_4 - param_2),lVar10,&local_e8);
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (local_110 != (long *)0x0) {
    (**(code **)(*local_110 + 0x20))();
  }
  snprintf((char *)local_c8,0x60,"anime_L_settings_list_%02d_L_option_slider_00_setting_on_to_off",
           param_5);
  local_f0 = local_c8;
  FUN_009313e8(&local_110,&local_f0);
  plVar12 = local_110;
  if (local_110 == (long *)0x0) {
    local_e8 = *(long **)PTR_DAT_04379c88;
LAB_01231840:
    lStack_e0 = *(long *)PTR_PTR_04379d00;
    if (local_110 != (long *)0x0) goto LAB_01231580;
LAB_01231850:
    local_d8 = 0;
  }
  else {
    local_e8 = (long *)local_110[0xb];
    if (local_110 == (long *)0x0) goto LAB_01231840;
    lStack_e0 = local_110[0xc];
    if (local_110 == (long *)0x0) goto LAB_01231850;
LAB_01231580:
    local_d8 = local_110[0xd];
  }
  local_d0 = (long *)0x0;
  if (local_110 == (long *)0x0) {
LAB_01231594:
    local_d0 = plVar12;
  }
  else {
    (**(code **)(*local_110 + 0x18))(local_110);
    plVar11 = local_d0;
    local_d0 = plVar12;
    if (plVar11 == (long *)0x0) goto LAB_01231594;
    (**(code **)(*plVar11 + 0x20))();
  }
  if (local_110 != (long *)0x0) {
    (**(code **)(*local_110 + 0x20))();
  }
  snprintf((char *)local_c8,0x60,"anime_L_settings_list_%02d_L_option_slider_00_setting_off_to_on",
           param_5);
  local_118 = local_c8;
  FUN_009313e8(&local_f0,&local_118);
  plVar12 = local_f0;
  if (local_f0 == (long *)0x0) {
    local_110 = *(long **)PTR_DAT_04379c88;
LAB_01231868:
    lStack_108 = *(long *)PTR_PTR_04379d00;
    if (local_f0 != (long *)0x0) goto LAB_012315f4;
LAB_01231878:
    local_100 = 0;
  }
  else {
    local_110 = (long *)local_f0[0xb];
    if (local_f0 == (long *)0x0) goto LAB_01231868;
    lStack_108 = local_f0[0xc];
    if (local_f0 == (long *)0x0) goto LAB_01231878;
LAB_012315f4:
    local_100 = local_f0[0xd];
  }
  local_f8 = (long *)0x0;
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x18))(local_f0);
    plVar11 = local_f8;
    local_f8 = plVar12;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x20))();
      goto joined_r0x01231798;
    }
  }
  local_f8 = plVar12;
joined_r0x01231798:
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  pplVar3 = &local_110;
  pplVar7 = &local_e8;
  if ((param_6 & 1) == 0) {
    pplVar3 = &local_e8;
    pplVar7 = &local_110;
  }
  FUN_00d2e2d0(lVar10,pplVar7);
  FUN_00d2df7c(lVar10,pplVar3);
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
  }
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  return;
}


