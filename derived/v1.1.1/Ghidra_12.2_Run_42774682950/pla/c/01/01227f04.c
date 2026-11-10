/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01227f04; name: FUN_01227f04
 */


void FUN_01227f04(long param_1,int param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_60;
  undefined *puStack_58;
  undefined8 local_50;
  long *local_48;
  
  if (param_2 == 2) {
    return;
  }
  plVar5 = *(long **)(param_1 + 0x2c8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar6 = (long)param_2 * 0x60;
  local_60 = *(undefined8 *)(&DAT_041fc6d8 + lVar6);
  puStack_58 = (&PTR_s_pane_P_poke_00_041fc6e0)[(long)param_2 * 0xc];
  local_50 = *(undefined8 *)(&DAT_041fc6e8 + lVar6);
  local_48 = (long *)0x0;
  FUN_0283b11c(plVar5,&local_60,param_3 & 1);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  lVar6 = (long)param_2;
  plVar5 = *(long **)(param_1 + 0x2c8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_60 = *(undefined8 *)(&DAT_041fc6f0 + lVar6 * 0x60);
  puStack_58 = (&PTR_s_pane_T_poke_race_l_00_041fc6f8)[lVar6 * 0xc];
  local_50 = *(undefined8 *)(&DAT_041fc700 + lVar6 * 0x60);
  local_48 = (long *)0x0;
  FUN_0283b11c(plVar5,&local_60,param_3 & 1);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (plVar5 == (long *)0x0) {
LAB_0122803c:
    plVar5 = *(long **)(param_1 + 0x2c8);
  }
  else {
    plVar1 = plVar5 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 != 0) goto LAB_0122803c;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    plVar5 = *(long **)(param_1 + 0x2c8);
  }
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_60 = *(undefined8 *)(&DAT_041fc708 + lVar6 * 0x60);
  puStack_58 = (&PTR_s_pane_T_lv_l_00_041fc710)[lVar6 * 0xc];
  local_50 = *(undefined8 *)(&DAT_041fc718 + lVar6 * 0x60);
  local_48 = (long *)0x0;
  FUN_0283b11c(plVar5,&local_60,param_3 & 1);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      plVar5 = *(long **)(param_1 + 0x2c8);
      goto joined_r0x012280b4;
    }
  }
  plVar5 = *(long **)(param_1 + 0x2c8);
joined_r0x012280b4:
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_60 = *(undefined8 *)(&DAT_041fc720 + lVar6 * 0x60);
  puStack_58 = (&PTR_s_pane_L_icon_seibetsu_l_00_041fc728)[lVar6 * 0xc];
  local_50 = *(undefined8 *)(&DAT_041fc730 + lVar6 * 0x60);
  local_48 = (long *)0x0;
  FUN_0283b11c(plVar5,&local_60,param_3 & 1);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  return;
}


