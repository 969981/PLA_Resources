/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01250078; name: FUN_01250078
 */


void FUN_01250078(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long *plVar10;
  undefined1 *local_c0;
  code *local_b8;
  code *local_b0;
  long *local_a8;
  long alStack_a0 [12];
  
  plVar10 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_01250c20;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_c0 = (undefined1 *)0x726be48b5d921255;
  local_b8 = (code *)0x396b6fb;
  local_b0 = (code *)0x10;
  local_a8 = (long *)0x0;
  lVar9 = FUN_00d4d2c4(plVar10,*(undefined8 *)(param_1 + 8),&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (plVar10 != (long *)0x0) {
    lVar7 = plVar10[0xb];
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
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
  }
  plVar10 = *(long **)(lVar9 + 0x318);
  *(undefined1 **)(lVar9 + 0x300) = &DAT_cbf29ce484222645;
  *(undefined8 *)(lVar9 + 0xf8) = 0x20;
  *(undefined1 **)(lVar9 + 0x308) = &DAT_03996322;
  *(undefined8 *)(lVar9 + 0x310) = 0;
  *(undefined8 *)(lVar9 + 0x318) = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  pcVar8 = *(code **)(lVar9 + 0x188);
  local_c0 = &LAB_01253b90;
  local_b8 = FUN_01253bd0;
  local_b0 = FUN_01253bd4;
  local_a8 = (long *)&LAB_01253be0;
  alStack_a0[0] = param_1;
  if (pcVar8 == (code *)0x0) {
LAB_012501e0:
    (*local_b0)(alStack_a0,lVar9 + 0x1a0);
    *(code **)(lVar9 + 0x188) = local_b8;
    *(long **)(lVar9 + 0x198) = local_a8;
    *(code **)(lVar9 + 400) = local_b0;
    *(undefined8 *)(lVar9 + 0x180) = local_c0;
  }
  else {
    *(undefined8 *)(lVar9 + 400) = 0;
    *(undefined8 *)(lVar9 + 0x198) = 0;
    *(undefined8 *)(lVar9 + 0x180) = 0;
    *(undefined8 *)(lVar9 + 0x188) = 0;
    (*pcVar8)(lVar9 + 0x1a0);
    if (local_b0 != (code *)0x0) goto LAB_012501e0;
  }
  pcVar8 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (long *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar8)(alStack_a0);
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_01250c20;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_c0 = (undefined1 *)0x141b876ef5fc3a71;
  local_b8 = (code *)0x398816a;
  local_b0 = (code *)0x11;
  local_a8 = (long *)0x0;
  lVar9 = FUN_00d4d2c4(plVar10,*(undefined8 *)(param_1 + 8),&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (plVar10 != (long *)0x0) {
    lVar7 = plVar10[0xb];
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
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
  }
  plVar10 = *(long **)(lVar9 + 0x318);
  *(undefined8 *)(lVar9 + 0xf8) = 0x100000;
  *(undefined1 **)(lVar9 + 0x300) = &DAT_cbf29ce484222645;
  *(undefined1 **)(lVar9 + 0x308) = &DAT_03996322;
  *(undefined8 *)(lVar9 + 0x310) = 0;
  *(undefined8 *)(lVar9 + 0x318) = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  pcVar8 = *(code **)(lVar9 + 0x108);
  local_c0 = &LAB_01253bec;
  local_b8 = FUN_01253c34;
  local_b0 = FUN_01253c38;
  local_a8 = (long *)&LAB_01253c44;
  alStack_a0[0] = param_1;
  if (pcVar8 == (code *)0x0) {
LAB_01250358:
    (*local_b0)(alStack_a0,lVar9 + 0x120);
    *(code **)(lVar9 + 0x108) = local_b8;
    *(long **)(lVar9 + 0x118) = local_a8;
    *(code **)(lVar9 + 0x110) = local_b0;
    *(undefined8 *)(lVar9 + 0x100) = local_c0;
  }
  else {
    *(undefined8 *)(lVar9 + 0x110) = 0;
    *(undefined8 *)(lVar9 + 0x118) = 0;
    *(undefined8 *)(lVar9 + 0x100) = 0;
    *(undefined8 *)(lVar9 + 0x108) = 0;
    (*pcVar8)(lVar9 + 0x120);
    if (local_b0 != (code *)0x0) goto LAB_01250358;
  }
  pcVar8 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (long *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar8)(alStack_a0);
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_01250c20;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_c0 = (undefined1 *)0x141b916ef5fc4b6f;
  local_b8 = (code *)0x38d497d;
  local_b0 = (code *)0x11;
  local_a8 = (long *)0x0;
  lVar9 = FUN_00d4d2c4(plVar10,*(undefined8 *)(param_1 + 8),&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (plVar10 != (long *)0x0) {
    lVar7 = plVar10[0xb];
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
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
  }
  plVar10 = *(long **)(lVar9 + 0x318);
  *(undefined8 *)(lVar9 + 0xf8) = 0x400000;
  *(undefined1 **)(lVar9 + 0x300) = &DAT_cbf29ce484222645;
  *(undefined1 **)(lVar9 + 0x308) = &DAT_03996322;
  *(undefined8 *)(lVar9 + 0x310) = 0;
  *(undefined8 *)(lVar9 + 0x318) = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  pcVar8 = *(code **)(lVar9 + 0x108);
  local_c0 = &LAB_01253c50;
  local_b8 = FUN_01253c9c;
  local_b0 = FUN_01253ca0;
  local_a8 = (long *)&LAB_01253cac;
  alStack_a0[0] = param_1;
  if (pcVar8 == (code *)0x0) {
LAB_012504d0:
    (*local_b0)(alStack_a0,lVar9 + 0x120);
    *(code **)(lVar9 + 0x108) = local_b8;
    *(long **)(lVar9 + 0x118) = local_a8;
    *(code **)(lVar9 + 0x110) = local_b0;
    *(undefined8 *)(lVar9 + 0x100) = local_c0;
  }
  else {
    *(undefined8 *)(lVar9 + 0x110) = 0;
    *(undefined8 *)(lVar9 + 0x118) = 0;
    *(undefined8 *)(lVar9 + 0x100) = 0;
    *(undefined8 *)(lVar9 + 0x108) = 0;
    (*pcVar8)(lVar9 + 0x120);
    if (local_b0 != (code *)0x0) goto LAB_012504d0;
  }
  pcVar8 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (long *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar8)(alStack_a0);
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_01250c20;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_c0 = (undefined1 *)0x1f43b9a28f898d94;
  local_b8 = (code *)0x3944e7c;
  local_b0 = (code *)0x10;
  local_a8 = (long *)0x0;
  lVar9 = FUN_00d4d2c4(plVar10,*(undefined8 *)(param_1 + 8),&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (plVar10 != (long *)0x0) {
    lVar7 = plVar10[0xb];
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
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
  }
  pcVar8 = *(code **)(lVar9 + 0x188);
  *(undefined8 *)(lVar9 + 0xf8) = 0x400000000;
  local_c0 = &LAB_01253cb8;
  local_b8 = FUN_01253cc0;
  local_b0 = FUN_01253cc4;
  local_a8 = (long *)&LAB_01253cd0;
  alStack_a0[0] = param_1;
  if (pcVar8 == (code *)0x0) {
LAB_01250624:
    (*local_b0)(alStack_a0,lVar9 + 0x1a0);
    *(code **)(lVar9 + 0x188) = local_b8;
    *(long **)(lVar9 + 0x198) = local_a8;
    *(code **)(lVar9 + 400) = local_b0;
    *(undefined8 *)(lVar9 + 0x180) = local_c0;
  }
  else {
    *(undefined8 *)(lVar9 + 400) = 0;
    *(undefined8 *)(lVar9 + 0x198) = 0;
    *(undefined8 *)(lVar9 + 0x180) = 0;
    *(undefined8 *)(lVar9 + 0x188) = 0;
    (*pcVar8)(lVar9 + 0x1a0);
    if (local_b0 != (code *)0x0) goto LAB_01250624;
  }
  pcVar8 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (long *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar8)(alStack_a0);
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_01250c20;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_c0 = (undefined1 *)0x9c081b2e7f4879df;
  local_b8 = (code *)0x3961381;
  local_b0 = (code *)0x12;
  local_a8 = (long *)0x0;
  lVar9 = FUN_00d4d2c4(plVar10,*(undefined8 *)(param_1 + 8),&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (plVar10 != (long *)0x0) {
    lVar7 = plVar10[0xb];
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
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
  }
  plVar10 = *(long **)(lVar9 + 0x318);
  *(undefined8 *)(lVar9 + 0xf8) = 0x40;
  *(undefined8 *)(lVar9 + 0x300) = 0x99ec3ab313e9662e;
  *(char **)(lVar9 + 0x308) = "PLAY_UI_COMMON_TAB";
  *(undefined8 *)(lVar9 + 0x310) = 0x12;
  *(undefined8 *)(lVar9 + 0x318) = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  pcVar8 = *(code **)(lVar9 + 0x188);
  local_c0 = &LAB_01253cdc;
  local_b8 = FUN_01253ce8;
  local_b0 = FUN_01253cec;
  local_a8 = (long *)&LAB_01253cf8;
  alStack_a0[0] = param_1;
  if (pcVar8 == (code *)0x0) {
LAB_012507b8:
    (*local_b0)(alStack_a0,lVar9 + 0x1a0);
    *(code **)(lVar9 + 0x188) = local_b8;
    *(long **)(lVar9 + 0x198) = local_a8;
    *(code **)(lVar9 + 400) = local_b0;
    *(undefined8 *)(lVar9 + 0x180) = local_c0;
  }
  else {
    *(undefined8 *)(lVar9 + 400) = 0;
    *(undefined8 *)(lVar9 + 0x198) = 0;
    *(undefined8 *)(lVar9 + 0x180) = 0;
    *(undefined8 *)(lVar9 + 0x188) = 0;
    (*pcVar8)(lVar9 + 0x1a0);
    if (local_b0 != (code *)0x0) goto LAB_012507b8;
  }
  pcVar8 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (long *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar8)(alStack_a0);
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_01250c20;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_c0 = (undefined1 *)0x9c08312e7f489f41;
  local_b8 = (code *)0x397e625;
  local_b0 = (code *)0x12;
  local_a8 = (long *)0x0;
  lVar9 = FUN_00d4d2c4(plVar10,*(undefined8 *)(param_1 + 8),&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (plVar10 != (long *)0x0) {
    lVar7 = plVar10[0xb];
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
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
  }
  plVar10 = *(long **)(lVar9 + 0x318);
  *(undefined8 *)(lVar9 + 0xf8) = 0x80;
  *(undefined8 *)(lVar9 + 0x300) = 0x99ec3ab313e9662e;
  *(char **)(lVar9 + 0x308) = "PLAY_UI_COMMON_TAB";
  *(undefined8 *)(lVar9 + 0x310) = 0x12;
  *(undefined8 *)(lVar9 + 0x318) = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  pcVar8 = *(code **)(lVar9 + 0x188);
  local_c0 = &LAB_01253d04;
  local_b8 = FUN_01253d10;
  local_b0 = FUN_01253d14;
  local_a8 = (long *)&LAB_01253d20;
  alStack_a0[0] = param_1;
  if (pcVar8 == (code *)0x0) {
LAB_01250934:
    (*local_b0)(alStack_a0,lVar9 + 0x1a0);
    *(code **)(lVar9 + 0x188) = local_b8;
    *(long **)(lVar9 + 0x198) = local_a8;
    *(code **)(lVar9 + 400) = local_b0;
    *(undefined8 *)(lVar9 + 0x180) = local_c0;
  }
  else {
    *(undefined8 *)(lVar9 + 400) = 0;
    *(undefined8 *)(lVar9 + 0x198) = 0;
    *(undefined8 *)(lVar9 + 0x180) = 0;
    *(undefined8 *)(lVar9 + 0x188) = 0;
    (*pcVar8)(lVar9 + 0x1a0);
    if (local_b0 != (code *)0x0) goto LAB_01250934;
  }
  pcVar8 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (long *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar8)(alStack_a0);
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_01250c20;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_c0 = (undefined1 *)0x70515291a97b14e7;
  local_b8 = (code *)0x398817c;
  local_b0 = (code *)0x13;
  local_a8 = (long *)0x0;
  lVar9 = FUN_00d4d2c4(plVar10,*(undefined8 *)(param_1 + 8),&local_c0);
  if (lVar9 != 0) {
    lVar7 = *(long *)(lVar9 + 0x58);
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
LAB_01250c20:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
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
  }
  plVar6 = *(long **)(param_1 + 0x14c8);
  *(long *)(param_1 + 0x14c8) = lVar9;
  if (plVar6 != (long *)0x0) {
    lVar9 = plVar6[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))();
    }
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
  }
  *(undefined8 *)(*(long *)(param_1 + 0x14c8) + 0xf8) = 0x100000000;
  lVar9 = *(long *)(param_1 + 0x14c8);
  pcVar8 = *(code **)(lVar9 + 0x188);
  local_c0 = &LAB_01253d2c;
  local_b8 = FUN_01253d34;
  local_b0 = FUN_01253d38;
  local_a8 = (long *)&LAB_01253d44;
  alStack_a0[0] = param_1;
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(lVar9 + 400) = 0;
    *(undefined8 *)(lVar9 + 0x198) = 0;
    *(undefined8 *)(lVar9 + 0x180) = 0;
    *(undefined8 *)(lVar9 + 0x188) = 0;
    (*pcVar8)(lVar9 + 0x1a0);
    if (local_b0 == (code *)0x0) goto LAB_01250b20;
  }
  (*local_b0)(alStack_a0,lVar9 + 0x1a0);
  *(code **)(lVar9 + 0x188) = local_b8;
  *(long **)(lVar9 + 0x198) = local_a8;
  *(code **)(lVar9 + 400) = local_b0;
  *(undefined8 *)(lVar9 + 0x180) = local_c0;
LAB_01250b20:
  FUN_0280779c(*(undefined8 *)(param_1 + 0x14c8),0);
  pcVar8 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (long *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar8)(alStack_a0);
  }
  return;
}


