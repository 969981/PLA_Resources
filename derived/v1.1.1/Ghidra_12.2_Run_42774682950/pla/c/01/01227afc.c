/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01227afc; name: FUN_01227afc
 */


void FUN_01227afc(long param_1,long param_2,int param_3)

{
  int *piVar1;
  long *plVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  long *local_68;
  
  if (param_2 == 0) {
    return;
  }
  if (param_3 == 2) {
    return;
  }
  plVar10 = *(long **)(param_1 + 0x2c8);
  if (plVar10 != (long *)0x0) {
    plVar11 = plVar10 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_00d37c90(&local_80,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb0),0);
  plVar11 = (long *)local_80[0xd];
  if (plVar11 != (long *)0x0) {
    plVar12 = plVar11 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (local_80 != (long *)0x0) {
    lVar9 = local_80[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_80 + 0x20))();
      plVar12 = (long *)plVar10[0x37];
      goto joined_r0x01227bac;
    }
  }
  plVar12 = (long *)plVar10[0x37];
joined_r0x01227bac:
  if (plVar12 != (long *)0x0) {
    lVar9 = plVar12[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar9 = (long)param_3;
  FUN_0284eef8(*(long *)(param_1 + 0x448) + (long)param_3 * 0xd0,param_2,0);
  uVar6 = FUN_02c5fb2c(param_2);
  FUN_02c395d0(plVar12,0,uVar6,3,0,1);
  local_80 = *(long **)(&DAT_041fc5e8 + (long)param_3 * 0x78);
  plVar13 = (long *)plVar10[0x38];
  if (plVar13 == (long *)0x0) {
    FUN_02c2e7d0(plVar11,&local_80,0);
  }
  else {
    plVar2 = plVar13 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    FUN_02c2e7d0(plVar11,&local_80,plVar13);
    do {
      iVar7 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  local_80 = *(long **)(&DAT_041fc600 + lVar9 * 0x78);
  puStack_78 = (&PTR_s_pane_T_lv_l_00_041fc608)[lVar9 * 0xf];
  local_70 = *(undefined8 *)(&DAT_041fc610 + lVar9 * 0x78);
  local_68 = (long *)0x0;
  FUN_0283d080(plVar10,&local_80,10);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  uVar8 = *(undefined8 *)(&DAT_041fc628 + lVar9 * 0x78);
  plVar13 = *(long **)(&DAT_041fc618 + lVar9 * 0x78);
  puVar3 = (&PTR_s_anime_L_icon_seibetsu_l_00_switc_041fc620)[lVar9 * 0xf];
  local_68 = (long *)0x0;
  local_80 = plVar13;
  puStack_78 = puVar3;
  local_70 = uVar8;
  FUN_00d2df7c(param_1 + 0x180,&local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  local_68 = (long *)0x0;
  local_80 = plVar13;
  puStack_78 = puVar3;
  local_70 = uVar8;
  iVar7 = FUN_02c624c8(param_2);
  FUN_00d2e4b8((float)iVar7,param_1 + 0x180,&local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  FUN_010c6004(plVar12,0,param_2);
  local_80 = *(long **)(&DAT_041fc630 + lVar9 * 0x78);
  plVar13 = (long *)plVar10[0x38];
  if (plVar13 == (long *)0x0) {
    FUN_02c2e7d0(plVar11,&local_80,0);
  }
  else {
    plVar2 = plVar13 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    FUN_02c2e7d0(plVar11,&local_80,plVar13);
    do {
      iVar7 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  local_80 = *(long **)(&DAT_041fc648 + lVar9 * 0x78);
  puStack_78 = (&PTR_s_pane_T_poke_race_l_00_041fc650)[lVar9 * 0xf];
  local_70 = *(undefined8 *)(&DAT_041fc658 + lVar9 * 0x78);
  local_68 = (long *)0x0;
  FUN_0283d080(plVar10,&local_80,10);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (plVar12 != (long *)0x0) {
    lVar9 = plVar12[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  if (plVar11 != (long *)0x0) {
    plVar12 = plVar11 + 10;
    do {
      iVar7 = (int)*plVar12 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  plVar11 = plVar10 + 10;
  do {
    iVar7 = (int)*plVar11 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar5) {
      *(int *)plVar11 = iVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  return;
}


