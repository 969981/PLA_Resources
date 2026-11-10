/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0134d01c; name: FUN_0134d01c
 */


void FUN_0134d01c(long param_1,undefined8 param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *local_f8;
  long *local_f0;
  long *local_e8;
  undefined1 *local_e0;
  code *local_d8;
  code *local_d0;
  long *local_c8;
  long lStack_c0;
  undefined1 *local_b8;
  undefined8 uStack_b0;
  long *local_60;
  undefined8 local_58;
  char *pcStack_50;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
  *(undefined8 *)(param_1 + 0x18) = param_2;
  plVar10 = *(long **)(*(long *)(*(long *)(param_1 + 0x10) + 0x2c0) + 0x58);
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar6;
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
  uVar6 = FUN_00d40884(param_1);
  local_e0 = (undefined1 *)0x8c9f5341309998e9;
  local_d8 = (code *)0x3988495;
  local_d0 = (code *)0xe;
  local_c8 = (long *)0x0;
  lVar9 = FUN_00d4d2c4(plVar10,uVar6,&local_e0);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (plVar10 != (long *)0x0) {
    lVar7 = plVar10[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
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
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
  }
  pcVar8 = *(code **)(lVar9 + 0x188);
  *(undefined8 *)(lVar9 + 0xf8) = 2;
  local_e0 = &LAB_0134e738;
  local_d8 = FUN_0134e744;
  local_d0 = FUN_0134e748;
  local_c8 = (long *)&LAB_0134e754;
  lStack_c0 = param_1;
  if (pcVar8 == (code *)0x0) {
LAB_0134d154:
    (*local_d0)(&lStack_c0,lVar9 + 0x1a0);
    *(code **)(lVar9 + 0x188) = local_d8;
    *(long **)(lVar9 + 0x198) = local_c8;
    *(code **)(lVar9 + 400) = local_d0;
    *(undefined8 *)(lVar9 + 0x180) = local_e0;
  }
  else {
    *(undefined8 *)(lVar9 + 400) = 0;
    *(undefined8 *)(lVar9 + 0x198) = 0;
    *(undefined8 *)(lVar9 + 0x180) = 0;
    *(undefined8 *)(lVar9 + 0x188) = 0;
    (*pcVar8)(lVar9 + 0x1a0);
    if (local_d0 != (code *)0x0) goto LAB_0134d154;
  }
  plVar10 = *(long **)(lVar9 + 0x318);
  *(undefined8 *)(lVar9 + 0x300) = 0xe88312eb8d4f2301;
  *(char **)(lVar9 + 0x308) = "PLAY_UI_COMMON_CANCEL";
  *(undefined8 *)(lVar9 + 0x310) = 0x15;
  *(undefined8 *)(lVar9 + 0x318) = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  pcVar8 = local_d8;
  *(long *)(param_1 + 0x20) = lVar9;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (long *)0x0;
    local_e0 = (undefined1 *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar8)(&lStack_c0);
  }
  uVar6 = FUN_00d40868(param_1);
  local_e0 = &DAT_72837ff1f1cec6a2;
  local_d8 = (code *)0x38c2372;
  local_d0 = (code *)0xe;
  local_c8 = (long *)0x0;
  FUN_00d37bb4(&local_60,uVar6,&local_e0,10);
  plVar10 = (long *)local_60[0xd];
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
  if (local_60 != (long *)0x0) {
    lVar9 = local_60[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_60 + 0x20))();
    }
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  lVar9 = *(long *)(param_1 + 0x10);
  plVar11 = *(long **)(lVar9 + 0x148);
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
    lVar9 = *(long *)(param_1 + 0x10);
  }
  local_e0 = (undefined1 *)0x55822082c373eb07;
  local_d8 = (code *)0x38e9f0a;
  local_d0 = (code *)0x1e;
  local_c8 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    plVar12 = plVar10 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_60 = (long *)0x39b0c495fda4c630;
  local_e8 = plVar10;
  FUN_011845f4(lVar9,&local_e0,&local_e8,&local_60,10);
  if (local_e8 != (long *)0x0) {
    plVar12 = local_e8 + 10;
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
      (**(code **)(*local_e8 + 0x10))();
    }
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
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
  local_e0 = (undefined1 *)0x55822182c373ecba;
  local_d8 = (code *)0x39be7e1;
  local_d0 = (code *)0x1e;
  local_c8 = (long *)0x0;
  if (plVar10 == (long *)0x0) {
    plVar12 = (long *)0x0;
  }
  else {
    plVar12 = plVar10 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar12 = plVar10;
  }
  local_60 = (long *)0x39b0cb95fda4d215;
  local_f8 = plVar10;
  local_f0 = plVar11;
  FUN_0134d650(&local_f0,&local_e0,&local_f8,&local_60,0x14);
  if (plVar12 != (long *)0x0) {
    plVar2 = plVar12 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (local_f0 != (long *)0x0) {
    plVar12 = local_f0 + 10;
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
      (**(code **)(*local_f0 + 0x10))();
    }
  }
  if (plVar11 != (long *)0x0) {
    plVar12 = plVar11 + 10;
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
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  if (plVar10 != (long *)0x0) {
    plVar11 = plVar10 + 10;
    do {
      iVar3 = (int)*plVar11 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  FUN_0280779c(*(undefined8 *)(param_1 + 0x20),0);
  lVar9 = FUN_00d2eb20(*(undefined8 *)(param_1 + 0x10),"stamp_panel");
  if (lVar9 == 0) {
    return;
  }
  pcVar8 = *(code **)(lVar9 + 0x108);
  local_b8 = &LAB_0134d86c;
  uStack_b0 = 0;
  local_e0 = &LAB_0134e760;
  local_d8 = FUN_0134e788;
  local_d0 = FUN_0134e78c;
  local_c8 = (long *)&LAB_0134e7a0;
  lStack_c0 = param_1;
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(lVar9 + 0x110) = 0;
    *(undefined8 *)(lVar9 + 0x118) = 0;
    *(undefined8 *)(lVar9 + 0x100) = 0;
    *(undefined8 *)(lVar9 + 0x108) = 0;
    (*pcVar8)(lVar9 + 0x120);
    if (local_d0 == (code *)0x0) goto LAB_0134d4f4;
  }
  (*local_d0)(&lStack_c0,lVar9 + 0x120);
  *(code **)(lVar9 + 0x108) = local_d8;
  *(long **)(lVar9 + 0x118) = local_c8;
  *(code **)(lVar9 + 0x110) = local_d0;
  *(undefined8 *)(lVar9 + 0x100) = local_e0;
LAB_0134d4f4:
  local_60 = &local_38;
  local_58 = 0x4a4d4336cb7efd78;
  pcStack_50 = "stamp_panel_cursor";
  local_40 = (long *)0x0;
  local_38 = 0;
  local_48 = 0x12;
  FUN_00d36f04(lVar9,&local_60,0);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_38 != 0) {
    FUN_028077c0(local_38,0);
  }
  pcVar8 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (long *)0x0;
    local_e0 = (undefined1 *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar8)(&lStack_c0);
  }
  return;
}


