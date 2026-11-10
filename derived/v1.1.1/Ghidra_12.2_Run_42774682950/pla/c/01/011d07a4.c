/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011d07a4; name: FUN_011d07a4
 */


void FUN_011d07a4(long param_1,int param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  plVar9 = *(long **)(param_1 + 0x2c8);
  if (plVar9 != (long *)0x0) {
    plVar11 = plVar9 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (param_2 != 0) {
    plVar11 = (long *)plVar9[0x38];
    if (plVar11 != (long *)0x0) {
      plVar10 = plVar11 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *(int *)plVar10 = (int)*plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        iVar6 = (int)*plVar10 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *(int *)plVar10 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    uVar5 = FUN_00d40878(param_1);
    FUN_00d37c90(&local_60,uVar5,0);
    plVar10 = (long *)local_60[0xd];
    if (plVar10 != (long *)0x0) {
      plVar8 = plVar10 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (local_60 != (long *)0x0) {
      lVar7 = local_60[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_60 + 0x20))();
      }
    }
    lVar7 = plVar10[0x16];
    if (lVar7 != 0) {
      plVar8 = *(long **)(lVar7 + 0x270);
      if (plVar8 != *(long **)(lVar7 + 0x278)) {
        iVar6 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar8 != 0) {
            plVar2 = (long *)(*plVar8 + 0x58);
          }
          if (*plVar2 == *(long *)(&DAT_03a79ab8 + ((long)param_2 + -1) * 0x10)) goto LAB_011d08d8;
          plVar8 = plVar8 + 1;
          iVar6 = iVar6 + 1;
        } while (*(long **)(lVar7 + 0x278) != plVar8);
      }
    }
    iVar6 = 0;
LAB_011d08d8:
    FUN_02c2e33c(plVar10,iVar6,plVar11);
    local_60 = (long *)0x87bce088778a1e60;
    pcStack_58 = "pane_L_weather_01_T_weather_00";
    local_50 = 0x1e;
    local_48 = (long *)0x0;
    FUN_0283d080(plVar9,&local_60,10);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    lVar7 = plVar10[0x16];
    if (lVar7 != 0) {
      plVar8 = *(long **)(lVar7 + 0x270);
      if (plVar8 != *(long **)(lVar7 + 0x278)) {
        iVar6 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar8 != 0) {
            plVar2 = (long *)(*plVar8 + 0x58);
          }
          if (*plVar2 == *(long *)(&DAT_03a79ac0 + ((long)param_2 + -1) * 0x10)) goto LAB_011d0988;
          plVar8 = plVar8 + 1;
          iVar6 = iVar6 + 1;
        } while (*(long **)(lVar7 + 0x278) != plVar8);
      }
    }
    iVar6 = 0;
LAB_011d0988:
    FUN_02c2e33c(plVar10,iVar6,plVar11);
    local_60 = (long *)0xad49ab81e2e10241;
    pcStack_58 = "pane_L_weather_01_T_weather_info_00";
    local_50 = 0x23;
    local_48 = (long *)0x0;
    FUN_0283d080(plVar9,&local_60,10);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    if (plVar10 != (long *)0x0) {
      plVar11 = plVar10 + 10;
      do {
        iVar6 = (int)*plVar11 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *(int *)plVar11 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  local_60 = (long *)0x997b0f82aacc15af;
  pcStack_58 = "pane_L_weather_01";
  local_50 = 0x11;
  local_48 = (long *)0x0;
  FUN_0283b11c(plVar9,&local_60,param_2 - 3U < 6);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (plVar9 != (long *)0x0) {
    plVar11 = plVar9 + 10;
    do {
      iVar6 = (int)*plVar11 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  return;
}


