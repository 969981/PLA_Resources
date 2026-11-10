/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0142c3d0; name: FUN_0142c3d0
 */


void FUN_0142c3d0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  long *plVar9;
  long lVar10;
  undefined1 *local_c0;
  code *local_b8;
  code *local_b0;
  long *local_a8;
  long local_a0 [12];
  
  plVar9 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_0142c9cc;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_c0 = (undefined1 *)0x6bb64670ff82ebad;
  local_b8 = (code *)0x3957050;
  local_b0 = (code *)0xb;
  local_a8 = (long *)0x0;
  lVar10 = FUN_00d4d2c4(plVar9,*(undefined8 *)(param_1 + 8),&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (plVar9 != (long *)0x0) {
    lVar7 = plVar9[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  pcVar8 = *(code **)(lVar10 + 0x188);
  *(undefined8 *)(lVar10 + 0xf8) = 0x400;
  local_c0 = &LAB_0142ec48;
  local_b8 = FUN_0142ec58;
  local_b0 = FUN_0142ec5c;
  local_a8 = (long *)&LAB_0142ec68;
  local_a0[0] = param_1;
  if (pcVar8 == (code *)0x0) {
LAB_0142c4fc:
    (*local_b0)(local_a0,lVar10 + 0x1a0);
    *(code **)(lVar10 + 0x188) = local_b8;
    *(long **)(lVar10 + 0x198) = local_a8;
    *(code **)(lVar10 + 400) = local_b0;
    *(undefined8 *)(lVar10 + 0x180) = local_c0;
  }
  else {
    *(undefined8 *)(lVar10 + 400) = 0;
    *(undefined8 *)(lVar10 + 0x198) = 0;
    *(undefined8 *)(lVar10 + 0x180) = 0;
    *(undefined8 *)(lVar10 + 0x188) = 0;
    (*pcVar8)(lVar10 + 0x1a0);
    if (local_b0 != (code *)0x0) goto LAB_0142c4fc;
  }
  pcVar8 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (long *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar8)(local_a0);
  }
  plVar9 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_0142c9cc;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_c0 = (undefined1 *)0xa65069d2f1d91382;
  local_b8 = (code *)0x3912eff;
  local_b0 = (code *)0x9;
  local_a8 = (long *)0x0;
  plVar6 = (long *)FUN_00d4d2c4(plVar9,*(undefined8 *)(param_1 + 8),&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  plVar9 = (long *)plVar6[99];
  plVar6[0x1f] = 0x8000000;
  plVar6[0x60] = -0x54b66c967d0cc7d9;
  plVar6[0x61] = (long)"PLAY_UI_COMMON_SELECT";
  plVar6[0x62] = 0x15;
  plVar6[99] = 0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  local_c0 = &LAB_0142ec74;
  local_b8 = FUN_0142ec80;
  local_b0 = FUN_0142ec84;
  local_a8 = (long *)&LAB_0142ec90;
  local_a0[0] = param_1;
  if (*(char *)((long)plVar6 + 0xa2) != '\0') {
    *(undefined1 *)((long)plVar6 + 0xa2) = 0;
    (**(code **)(*plVar6 + 0x98))(plVar6,0);
  }
  pcVar8 = (code *)plVar6[0x31];
  if (pcVar8 != (code *)0x0) {
    plVar6[0x32] = 0;
    plVar6[0x33] = 0;
    plVar6[0x30] = 0;
    plVar6[0x31] = 0;
    (*pcVar8)(plVar6 + 0x34);
  }
  if (local_b0 != (code *)0x0) {
    (*local_b0)(local_a0,plVar6 + 0x34);
    plVar6[0x31] = (long)local_b8;
    plVar6[0x33] = (long)local_a8;
    plVar6[0x32] = (long)local_b0;
    plVar6[0x30] = (long)local_c0;
  }
  lVar10 = plVar6[0xb];
  if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_0142c9cc;
  if (*(long *)(lVar10 + 0x10) == 0) {
    uVar5 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
    *(undefined8 *)(lVar10 + 0x10) = uVar5;
  }
  piVar1 = (int *)(lVar10 + 0xc);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plVar9 = *(long **)(param_1 + 0x818);
  *(long **)(param_1 + 0x818) = plVar6;
  pcVar8 = local_b8;
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
      pcVar8 = local_b8;
    }
  }
  local_b8 = pcVar8;
  if (pcVar8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (long *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar8)(local_a0);
  }
  plVar9 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_0142c9cc;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_c0 = (undefined1 *)0xde6e1e27a3ff6a8f;
  local_b8 = (code *)0x39908bf;
  local_b0 = (code *)0xa;
  local_a8 = (long *)0x0;
  lVar10 = FUN_00d4d2c4(plVar9,*(undefined8 *)(param_1 + 8),&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (plVar9 != (long *)0x0) {
    lVar7 = plVar9[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  plVar9 = *(long **)(lVar10 + 0x318);
  *(undefined8 *)(lVar10 + 0xf8) = 0x2000000;
  *(undefined8 *)(lVar10 + 0x300) = 0xab49936982f33827;
  *(char **)(lVar10 + 0x308) = "PLAY_UI_COMMON_SELECT";
  *(undefined8 *)(lVar10 + 0x310) = 0x15;
  *(undefined8 *)(lVar10 + 0x318) = 0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  pcVar8 = *(code **)(lVar10 + 0x188);
  local_c0 = &LAB_0142ec9c;
  local_b8 = FUN_0142eca8;
  local_b0 = FUN_0142ecac;
  local_a8 = (long *)&LAB_0142ecb8;
  local_a0[0] = param_1;
  if (pcVar8 == (code *)0x0) {
LAB_0142c874:
    (*local_b0)(local_a0,lVar10 + 0x1a0);
    *(code **)(lVar10 + 0x188) = local_b8;
    *(long **)(lVar10 + 0x198) = local_a8;
    *(code **)(lVar10 + 400) = local_b0;
    *(undefined8 *)(lVar10 + 0x180) = local_c0;
  }
  else {
    *(undefined8 *)(lVar10 + 400) = 0;
    *(undefined8 *)(lVar10 + 0x198) = 0;
    *(undefined8 *)(lVar10 + 0x180) = 0;
    *(undefined8 *)(lVar10 + 0x188) = 0;
    (*pcVar8)(lVar10 + 0x1a0);
    if (local_b0 != (code *)0x0) goto LAB_0142c874;
  }
  lVar7 = *(long *)(lVar10 + 0x58);
  if (*(undefined8 **)(lVar7 + 0x18) != (undefined8 *)0x0) {
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar9 = *(long **)(param_1 + 0x820);
    *(long *)(param_1 + 0x820) = lVar10;
    pcVar8 = local_b8;
    if (plVar9 != (long *)0x0) {
      lVar10 = plVar9[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar9 + 0x20))();
        pcVar8 = local_b8;
      }
    }
    if (pcVar8 != (code *)0x0) {
      local_b0 = (code *)0x0;
      local_a8 = (long *)0x0;
      local_c0 = (undefined1 *)0x0;
      local_b8 = (code *)0x0;
      (*pcVar8)(local_a0);
    }
    return;
  }
LAB_0142c9cc:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


