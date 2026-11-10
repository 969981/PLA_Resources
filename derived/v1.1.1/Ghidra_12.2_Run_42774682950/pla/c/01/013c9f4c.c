/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013c9f4c; name: FUN_013c9f4c
 */


void FUN_013c9f4c(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  long *local_38;
  
  plVar9 = *(long **)(param_1 + 0x2c8);
  if (plVar9 != (long *)0x0) {
    plVar7 = plVar9 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = (int)*plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      iVar5 = (int)*plVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      plVar7 = (long *)plVar9[0x38];
      goto joined_r0x013c9f9c;
    }
  }
  plVar7 = (long *)plVar9[0x38];
joined_r0x013c9f9c:
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar8 = (long *)plVar9[0x37];
  if (plVar8 != (long *)0x0) {
    lVar11 = plVar8[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar6 = FUN_00d40878(param_1);
  FUN_00d37c90(&local_60,uVar6,1);
  plVar10 = (long *)local_60[0xd];
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (local_60 != (long *)0x0) {
    lVar11 = local_60[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_60 + 0x20))();
    }
  }
  local_60 = (long *)0x6d7928ef0d6b0a5b;
  FUN_02c2e7d0(plVar10,&local_60,plVar7);
  local_60 = (long *)0x7082226fd55312ac;
  pcStack_58 = "pane_L_point_00_T_heading_money_00";
  local_50 = 0x22;
  local_48 = (long *)0x0;
  FUN_0283d080(plVar9,&local_60,10);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  local_60 = (long *)0x6d6e9aef0d61c48c;
  FUN_02c2e7d0(plVar10,&local_60,plVar7);
  local_60 = (long *)0x15eea85c16ffec54;
  pcStack_58 = "pane_L_tab_00_L_tab_disp_00_T_text_00";
  local_50 = 0x25;
  local_48 = (long *)0x0;
  FUN_0283d080(plVar9,&local_60,10);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  local_60 = (long *)0x6d6e9bef0d61c63f;
  FUN_02c2e7d0(plVar10,&local_60,plVar7);
  local_60 = (long *)0x9a8597a6328078cb;
  pcStack_58 = "pane_L_tab_00_L_tab_disp_01_T_text_00";
  local_50 = 0x25;
  local_48 = (long *)0x0;
  FUN_0283d080(plVar9,&local_60,10);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  local_60 = (long *)0x6d6b95ef0d5f8636;
  FUN_02c2e7d0(plVar10,&local_60,plVar7);
  local_60 = (long *)0x51f030805ca53b3a;
  pcStack_58 = "pane_T_noitem_00";
  local_50 = 0x10;
  local_48 = (long *)0x0;
  FUN_0283d080(plVar9,&local_60,10);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  local_60 = (long *)0x6d75a8ef0d67fb04;
  FUN_02c2e7d0(plVar10,&local_60,plVar7);
  local_60 = (long *)0x7d43fdc201a14c56;
  pcStack_58 = "pane_L_info_item_00_T_text_00";
  local_50 = 0x1d;
  local_48 = (long *)0x0;
  FUN_0283d080(plVar9,&local_60,10);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  local_60 = (long *)0x6d75a4ef0d67f438;
  FUN_02c2e7d0(plVar10,&local_60,plVar7);
  local_60 = (long *)0x265d4914567d62ae;
  pcStack_58 = "pane_L_info_00_T_text_00";
  local_50 = 0x18;
  local_48 = (long *)0x0;
  FUN_0283d080(plVar9,&local_60,10);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  local_60 = (long *)0x6d75aaef0d67fe6a;
  FUN_02c2e7d0(plVar10,&local_60,plVar7);
  local_60 = (long *)0x3f9e029a0aec5bc5;
  pcStack_58 = "pane_L_info_01_T_text_00";
  local_50 = 0x18;
  local_48 = (long *)0x0;
  FUN_0283d080(plVar9,&local_60,10);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  local_60 = (long *)0x6d75a5ef0d67f5eb;
  FUN_02c2e7d0(plVar10,&local_60,plVar7);
  local_60 = (long *)0xfe2fc9fc58d84dc;
  pcStack_58 = "pane_L_info_02_T_text_00";
  local_50 = 0x18;
  local_48 = (long *)0x0;
  FUN_0283d080(plVar9,&local_60,10);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148cdc(&local_38);
  FUN_010c6160(plVar8,0,local_38);
  local_60 = (long *)0x6d6e9cef0d61c7f2;
  FUN_02c2e7d0(plVar10,&local_60,plVar7);
  local_60 = (long *)0xfc1c0a04be6d0a1e;
  pcStack_58 = "pane_T_record_title_00";
  local_50 = 0x16;
  local_48 = (long *)0x0;
  FUN_0283d080(plVar9,&local_60,10);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  local_60 = (long *)0x6d7220ef0d64de15;
  FUN_02c2e7d0(plVar10,&local_60,plVar7);
  local_60 = (long *)0xfe2235cef24fffa5;
  pcStack_58 = "pane_L_record_00_T_text_00";
  local_50 = 0x1a;
  local_48 = (long *)0x0;
  FUN_0283d080(plVar9,&local_60,10);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  FUN_010c6160(plVar8,0,local_38);
  local_60 = (long *)0x6d721cef0d64d749;
  FUN_02c2e7d0(plVar10,&local_60,plVar7);
  local_60 = (long *)0x73a824c9f635ca8e;
  pcStack_58 = "pane_L_record_01_T_text_00";
  local_50 = 0x1a;
  local_48 = (long *)0x0;
  FUN_0283d080(plVar9,&local_60,10);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  local_60 = (long *)0x6d721eef0d64daaf;
  FUN_02c2e7d0(plVar10,&local_60,plVar7);
  local_60 = (long *)0x7eef86865ac6e533;
  pcStack_58 = "pane_L_record_02_T_text_00";
  local_50 = 0x1a;
  local_48 = (long *)0x0;
  FUN_0283d080(plVar9,&local_60,10);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_38 != (long *)0x0) {
    lVar11 = local_38[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  if (plVar10 != (long *)0x0) {
    plVar9 = plVar10 + 10;
    do {
      iVar5 = (int)*plVar9 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  if (plVar8 != (long *)0x0) {
    lVar11 = plVar8[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
  }
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar5 = (int)*plVar9 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  return;
}


