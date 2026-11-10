/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0134db00; name: FUN_0134db00
 */


void FUN_0134db00(long param_1,undefined8 *param_2)

{
  int *piVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  code *pcVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 local_a0;
  long *local_98;
  long *local_90;
  undefined4 local_84;
  long **local_80;
  char *local_78;
  char *local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  
  pcVar11 = *(code **)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (pcVar11 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    (*pcVar11)(param_1 + 0x50);
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,param_1 + 0x50);
    uVar8 = *param_2;
    uVar15 = param_2[1];
    uVar3 = param_2[3];
    *(undefined8 *)(param_1 + 0x40) = param_2[2];
    *(undefined8 *)(param_1 + 0x48) = uVar3;
    *(undefined8 *)(param_1 + 0x30) = uVar8;
    *(undefined8 *)(param_1 + 0x38) = uVar15;
  }
  uVar8 = FUN_00d40868(param_1);
  local_80 = (long **)&DAT_72837ff1f1cec6a2;
  local_78 = "common/map.dat";
  local_70 = (char *)0xe;
  local_68 = (long *)0x0;
  FUN_00d37bb4(&local_58,uVar8,&local_80,10);
  plVar13 = (long *)local_58[0xd];
  if (plVar13 != (long *)0x0) {
    plVar14 = plVar13 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (local_58 != (long *)0x0) {
    lVar12 = local_58[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  lVar12 = *(long *)(param_1 + 0x10);
  plVar14 = *(long **)(lVar12 + 0x148);
  if (plVar14 != (long *)0x0) {
    plVar9 = plVar14 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar12 = *(long *)(param_1 + 0x10);
  }
  plVar9 = (long *)FUN_00d2eb20(lVar12,"stamp_panel");
  if (plVar9 != (long *)0x0) {
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x78);
    uVar4 = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x84);
    local_58 = (long *)0x0;
    FUN_0280e870(&local_80,plVar9,&local_58);
    lVar12 = thunk_FUN_00d2e944(uVar8,&local_80);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    if (lVar12 != 0) {
      plVar10 = *(long **)(lVar12 + 0x280);
      *(undefined8 *)(lVar12 + 0x268) = 0x3fa39a765f61bae7;
      *(char **)(lVar12 + 0x270) = "PLAY_UI_COMMON_MAP_PIN";
      *(undefined8 *)(lVar12 + 0x278) = 0x16;
      *(undefined8 *)(lVar12 + 0x280) = 0;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))();
      }
    }
    local_84 = 0;
    iVar7 = FUN_0131b0f4(uVar15,uVar4,&local_84);
    local_58 = (long *)0x100000000;
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    FUN_0280e870(&local_80,plVar9,&local_58);
    lVar12 = thunk_FUN_00d2e944(uVar8,&local_80);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    if (lVar12 != 0) {
      FUN_0280779c(lVar12,iVar7 != 0);
      plVar10 = *(long **)(lVar12 + 0x280);
      *(undefined8 *)(lVar12 + 0x268) = 0xc58725ac798e1825;
      *(char **)(lVar12 + 0x270) = "PLAY_UI_COMMON_MAP_STOMP";
      *(undefined8 *)(lVar12 + 0x278) = 0x18;
      *(undefined8 *)(lVar12 + 0x280) = 0;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))();
      }
    }
    local_58 = (long *)0x100000001;
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    FUN_0280e870(&local_80,plVar9,&local_58);
    lVar12 = thunk_FUN_00d2e944(uVar8,&local_80);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    if (lVar12 != 0) {
      FUN_0280779c(lVar12,iVar7 != 0);
      plVar10 = *(long **)(lVar12 + 0x280);
      *(undefined8 *)(lVar12 + 0x268) = 0xc58725ac798e1825;
      *(char **)(lVar12 + 0x270) = "PLAY_UI_COMMON_MAP_STOMP";
      *(undefined8 *)(lVar12 + 0x278) = 0x18;
      *(undefined8 *)(lVar12 + 0x280) = 0;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))();
      }
    }
    local_58 = (long *)0x100000002;
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    FUN_0280e870(&local_80,plVar9,&local_58);
    lVar12 = thunk_FUN_00d2e944(uVar8,&local_80);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    if (lVar12 != 0) {
      FUN_0280779c(lVar12,iVar7 != 0);
      plVar10 = *(long **)(lVar12 + 0x280);
      *(undefined8 *)(lVar12 + 0x268) = 0xc58725ac798e1825;
      *(char **)(lVar12 + 0x270) = "PLAY_UI_COMMON_MAP_STOMP";
      *(undefined8 *)(lVar12 + 0x278) = 0x18;
      *(undefined8 *)(lVar12 + 0x280) = 0;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))();
      }
    }
    local_58 = (long *)0x200000000;
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    FUN_0280e870(&local_80,plVar9,&local_58);
    lVar12 = thunk_FUN_00d2e944(uVar8,&local_80);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    if (lVar12 != 0) {
      FUN_0280779c(lVar12,iVar7 != 0);
      plVar10 = *(long **)(lVar12 + 0x280);
      *(undefined8 *)(lVar12 + 0x268) = 0xc58725ac798e1825;
      *(char **)(lVar12 + 0x270) = "PLAY_UI_COMMON_MAP_STOMP";
      *(undefined8 *)(lVar12 + 0x278) = 0x18;
      *(undefined8 *)(lVar12 + 0x280) = 0;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))();
      }
    }
    local_58 = (long *)0x200000001;
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    FUN_0280e870(&local_80,plVar9,&local_58);
    lVar12 = thunk_FUN_00d2e944(uVar8,&local_80);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    if (lVar12 != 0) {
      FUN_0280779c(lVar12,iVar7 != 0);
      plVar10 = *(long **)(lVar12 + 0x280);
      *(undefined8 *)(lVar12 + 0x268) = 0xc58725ac798e1825;
      *(char **)(lVar12 + 0x270) = "PLAY_UI_COMMON_MAP_STOMP";
      *(undefined8 *)(lVar12 + 0x278) = 0x18;
      *(undefined8 *)(lVar12 + 0x280) = 0;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))();
      }
    }
    local_58 = (long *)0x200000002;
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    FUN_0280e870(&local_80,plVar9,&local_58);
    lVar12 = thunk_FUN_00d2e944(uVar8,&local_80);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    if (lVar12 != 0) {
      FUN_0280779c(lVar12,iVar7 != 0);
      plVar10 = *(long **)(lVar12 + 0x280);
      *(undefined8 *)(lVar12 + 0x268) = 0xc58725ac798e1825;
      *(char **)(lVar12 + 0x270) = "PLAY_UI_COMMON_MAP_STOMP";
      *(undefined8 *)(lVar12 + 0x278) = 0x18;
      *(undefined8 *)(lVar12 + 0x280) = 0;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))();
      }
    }
    if (plVar14 != (long *)0x0) {
      plVar10 = plVar14 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *(int *)plVar10 = (int)*plVar10 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    local_80 = (long **)0x55821f82c373e954;
    local_78 = "pane_L_stamp_set_00_T_count_00";
    local_70 = (char *)0x1e;
    local_68 = (long *)0x0;
    if (plVar13 == (long *)0x0) {
      plVar10 = (long *)0x0;
    }
    else {
      plVar10 = plVar13 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *(int *)plVar10 = (int)*plVar10 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar10 = plVar13;
    }
    local_a0 = 0x39b0c595fda4c7e3;
    local_98 = plVar13;
    local_90 = plVar14;
    FUN_0134d650(&local_90,&local_80,&local_98,&local_a0,iVar7);
    if (plVar10 != (long *)0x0) {
      plVar2 = plVar10 + 10;
      do {
        iVar7 = (int)*plVar2 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *(int *)plVar2 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    if (local_90 != (long *)0x0) {
      plVar10 = local_90 + 10;
      do {
        iVar7 = (int)*plVar10 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *(int *)plVar10 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_90 + 0x10))();
      }
    }
    local_a0 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xfc);
    FUN_0134e234(param_1,&local_a0);
    FUN_028077c0(plVar9,1);
    local_80 = &local_58;
    local_78 = (char *)0x4a4d4336cb7efd78;
    local_70 = "stamp_panel_cursor";
    local_60 = (long *)0x0;
    local_58 = (long *)0x0;
    local_68 = (long *)0x12;
    FUN_00d36f04(plVar9,&local_80,0);
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x20))();
    }
    if (local_58 != (long *)0x0) {
      FUN_028077c0(local_58,1);
    }
    FUN_0280779c(plVar9,1);
    (**(code **)(*plVar9 + 0x58))(plVar9);
    FUN_0280779c(*(undefined8 *)(param_1 + 0x20),1);
  }
  if (plVar14 != (long *)0x0) {
    plVar9 = plVar14 + 10;
    do {
      iVar7 = (int)*plVar9 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *(int *)plVar9 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  if (plVar13 != (long *)0x0) {
    plVar14 = plVar13 + 10;
    do {
      iVar7 = (int)*plVar14 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  return;
}


