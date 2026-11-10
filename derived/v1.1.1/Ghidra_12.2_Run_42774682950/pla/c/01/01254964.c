/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01254964; name: FUN_01254964
 */


void FUN_01254964(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  undefined1 *local_c0;
  code *local_b8;
  code *local_b0;
  long *local_a8;
  long alStack_a0 [12];
  
  plVar9 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_0125530c;
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar8 + 0xc);
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
  lVar8 = FUN_00d4d2c4(plVar9,*(undefined8 *)(param_1 + 8),&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (plVar9 != (long *)0x0) {
    lVar6 = plVar9[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
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
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  plVar9 = *(long **)(lVar8 + 0x318);
  *(undefined1 **)(lVar8 + 0x300) = &DAT_cbf29ce484222645;
  *(undefined8 *)(lVar8 + 0xf8) = 0x20;
  *(undefined1 **)(lVar8 + 0x308) = &DAT_03996322;
  *(undefined8 *)(lVar8 + 0x310) = 0;
  *(undefined8 *)(lVar8 + 0x318) = 0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  pcVar7 = *(code **)(lVar8 + 0x188);
  local_c0 = &LAB_012580ac;
  local_b8 = FUN_012580dc;
  local_b0 = FUN_012580e0;
  local_a8 = (long *)&LAB_012580ec;
  alStack_a0[0] = param_1;
  if (pcVar7 == (code *)0x0) {
LAB_01254acc:
    (*local_b0)(alStack_a0,lVar8 + 0x1a0);
    *(code **)(lVar8 + 0x188) = local_b8;
    *(long **)(lVar8 + 0x198) = local_a8;
    *(code **)(lVar8 + 400) = local_b0;
    *(undefined8 *)(lVar8 + 0x180) = local_c0;
  }
  else {
    *(undefined8 *)(lVar8 + 400) = 0;
    *(undefined8 *)(lVar8 + 0x198) = 0;
    *(undefined8 *)(lVar8 + 0x180) = 0;
    *(undefined8 *)(lVar8 + 0x188) = 0;
    (*pcVar7)(lVar8 + 0x1a0);
    if (local_b0 != (code *)0x0) goto LAB_01254acc;
  }
  pcVar7 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (long *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar7)(alStack_a0);
  }
  plVar9 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_0125530c;
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar8 + 0xc);
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
  lVar8 = FUN_00d4d2c4(plVar9,*(undefined8 *)(param_1 + 8),&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (plVar9 != (long *)0x0) {
    lVar6 = plVar9[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
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
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  plVar9 = *(long **)(lVar8 + 0x318);
  *(undefined8 *)(lVar8 + 0xf8) = 0x100000;
  *(undefined1 **)(lVar8 + 0x300) = &DAT_cbf29ce484222645;
  *(undefined1 **)(lVar8 + 0x308) = &DAT_03996322;
  *(undefined8 *)(lVar8 + 0x310) = 0;
  *(undefined8 *)(lVar8 + 0x318) = 0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  pcVar7 = *(code **)(lVar8 + 0x108);
  local_c0 = &LAB_012580f8;
  local_b8 = FUN_01258140;
  local_b0 = FUN_01258144;
  local_a8 = (long *)&LAB_01258150;
  alStack_a0[0] = param_1;
  if (pcVar7 == (code *)0x0) {
LAB_01254c44:
    (*local_b0)(alStack_a0,lVar8 + 0x120);
    *(code **)(lVar8 + 0x108) = local_b8;
    *(long **)(lVar8 + 0x118) = local_a8;
    *(code **)(lVar8 + 0x110) = local_b0;
    *(undefined8 *)(lVar8 + 0x100) = local_c0;
  }
  else {
    *(undefined8 *)(lVar8 + 0x110) = 0;
    *(undefined8 *)(lVar8 + 0x118) = 0;
    *(undefined8 *)(lVar8 + 0x100) = 0;
    *(undefined8 *)(lVar8 + 0x108) = 0;
    (*pcVar7)(lVar8 + 0x120);
    if (local_b0 != (code *)0x0) goto LAB_01254c44;
  }
  pcVar7 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (long *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar7)(alStack_a0);
  }
  plVar9 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_0125530c;
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar8 + 0xc);
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
  lVar8 = FUN_00d4d2c4(plVar9,*(undefined8 *)(param_1 + 8),&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (plVar9 != (long *)0x0) {
    lVar6 = plVar9[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
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
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  plVar9 = *(long **)(lVar8 + 0x318);
  *(undefined8 *)(lVar8 + 0xf8) = 0x400000;
  *(undefined1 **)(lVar8 + 0x300) = &DAT_cbf29ce484222645;
  *(undefined1 **)(lVar8 + 0x308) = &DAT_03996322;
  *(undefined8 *)(lVar8 + 0x310) = 0;
  *(undefined8 *)(lVar8 + 0x318) = 0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  pcVar7 = *(code **)(lVar8 + 0x108);
  local_c0 = &LAB_0125815c;
  local_b8 = FUN_012581a4;
  local_b0 = FUN_012581a8;
  local_a8 = (long *)&LAB_012581b4;
  alStack_a0[0] = param_1;
  if (pcVar7 == (code *)0x0) {
LAB_01254dbc:
    (*local_b0)(alStack_a0,lVar8 + 0x120);
    *(code **)(lVar8 + 0x108) = local_b8;
    *(long **)(lVar8 + 0x118) = local_a8;
    *(code **)(lVar8 + 0x110) = local_b0;
    *(undefined8 *)(lVar8 + 0x100) = local_c0;
  }
  else {
    *(undefined8 *)(lVar8 + 0x110) = 0;
    *(undefined8 *)(lVar8 + 0x118) = 0;
    *(undefined8 *)(lVar8 + 0x100) = 0;
    *(undefined8 *)(lVar8 + 0x108) = 0;
    (*pcVar7)(lVar8 + 0x120);
    if (local_b0 != (code *)0x0) goto LAB_01254dbc;
  }
  pcVar7 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (long *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar7)(alStack_a0);
  }
  plVar9 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_0125530c;
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_c0 = (undefined1 *)0x352619678445e874;
  local_b8 = (code *)0x38f497a;
  local_b0 = (code *)0x9;
  local_a8 = (long *)0x0;
  lVar8 = FUN_00d4d2c4(plVar9,*(undefined8 *)(param_1 + 8),&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (plVar9 != (long *)0x0) {
    lVar6 = plVar9[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
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
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  pcVar7 = *(code **)(lVar8 + 0x188);
  *(undefined8 *)(lVar8 + 0xf8) = 0x400000000;
  local_c0 = &LAB_012581c0;
  local_b8 = FUN_012581d0;
  local_b0 = FUN_012581d4;
  local_a8 = (long *)&LAB_012581e0;
  alStack_a0[0] = param_1;
  if (pcVar7 == (code *)0x0) {
LAB_01254f10:
    (*local_b0)(alStack_a0,lVar8 + 0x1a0);
    *(code **)(lVar8 + 0x188) = local_b8;
    *(long **)(lVar8 + 0x198) = local_a8;
    *(code **)(lVar8 + 400) = local_b0;
    *(undefined8 *)(lVar8 + 0x180) = local_c0;
  }
  else {
    *(undefined8 *)(lVar8 + 400) = 0;
    *(undefined8 *)(lVar8 + 0x198) = 0;
    *(undefined8 *)(lVar8 + 0x180) = 0;
    *(undefined8 *)(lVar8 + 0x188) = 0;
    (*pcVar7)(lVar8 + 0x1a0);
    if (local_b0 != (code *)0x0) goto LAB_01254f10;
  }
  pcVar7 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (long *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar7)(alStack_a0);
  }
  plVar9 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_0125530c;
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_c0 = (undefined1 *)0xc8f160a9a029ffdb;
  local_b8 = (code *)0x3961394;
  local_b0 = (code *)0x13;
  local_a8 = (long *)0x0;
  lVar8 = FUN_00d4d2c4(plVar9,*(undefined8 *)(param_1 + 8),&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (plVar9 != (long *)0x0) {
    lVar6 = plVar9[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
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
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  plVar9 = *(long **)(lVar8 + 0x318);
  *(undefined8 *)(lVar8 + 0xf8) = 0x40;
  *(undefined8 *)(lVar8 + 0x300) = 0x99ec3ab313e9662e;
  *(char **)(lVar8 + 0x308) = "PLAY_UI_COMMON_TAB";
  *(undefined8 *)(lVar8 + 0x310) = 0x12;
  *(undefined8 *)(lVar8 + 0x318) = 0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  pcVar7 = *(code **)(lVar8 + 0x188);
  local_c0 = &LAB_012581ec;
  local_b8 = FUN_012581f8;
  local_b0 = FUN_012581fc;
  local_a8 = (long *)&LAB_01258208;
  alStack_a0[0] = param_1;
  if (pcVar7 == (code *)0x0) {
LAB_012550a4:
    (*local_b0)(alStack_a0,lVar8 + 0x1a0);
    *(code **)(lVar8 + 0x188) = local_b8;
    *(long **)(lVar8 + 0x198) = local_a8;
    *(code **)(lVar8 + 400) = local_b0;
    *(undefined8 *)(lVar8 + 0x180) = local_c0;
  }
  else {
    *(undefined8 *)(lVar8 + 400) = 0;
    *(undefined8 *)(lVar8 + 0x198) = 0;
    *(undefined8 *)(lVar8 + 0x180) = 0;
    *(undefined8 *)(lVar8 + 0x188) = 0;
    (*pcVar7)(lVar8 + 0x1a0);
    if (local_b0 != (code *)0x0) goto LAB_012550a4;
  }
  pcVar7 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (long *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar7)(alStack_a0);
  }
  plVar9 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
LAB_0125530c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_c0 = (undefined1 *)0xc8f14ea9a029e145;
  local_b8 = (code *)0x396b755;
  local_b0 = (code *)0x13;
  local_a8 = (long *)0x0;
  lVar8 = FUN_00d4d2c4(plVar9,*(undefined8 *)(param_1 + 8),&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (plVar9 != (long *)0x0) {
    lVar6 = plVar9[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
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
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  plVar9 = *(long **)(lVar8 + 0x318);
  *(undefined8 *)(lVar8 + 0xf8) = 0x80;
  *(undefined8 *)(lVar8 + 0x300) = 0x99ec3ab313e9662e;
  *(char **)(lVar8 + 0x308) = "PLAY_UI_COMMON_TAB";
  *(undefined8 *)(lVar8 + 0x310) = 0x12;
  *(undefined8 *)(lVar8 + 0x318) = 0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  pcVar7 = *(code **)(lVar8 + 0x188);
  local_c0 = &LAB_01258214;
  local_b8 = FUN_01258220;
  local_b0 = FUN_01258224;
  local_a8 = (long *)&LAB_01258230;
  alStack_a0[0] = param_1;
  if (pcVar7 != (code *)0x0) {
    *(undefined8 *)(lVar8 + 400) = 0;
    *(undefined8 *)(lVar8 + 0x198) = 0;
    *(undefined8 *)(lVar8 + 0x180) = 0;
    *(undefined8 *)(lVar8 + 0x188) = 0;
    (*pcVar7)(lVar8 + 0x1a0);
    if (local_b0 == (code *)0x0) goto LAB_0125524c;
  }
  (*local_b0)(alStack_a0,lVar8 + 0x1a0);
  *(code **)(lVar8 + 0x188) = local_b8;
  *(long **)(lVar8 + 0x198) = local_a8;
  *(code **)(lVar8 + 400) = local_b0;
  *(undefined8 *)(lVar8 + 0x180) = local_c0;
LAB_0125524c:
  pcVar7 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (long *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar7)(alStack_a0);
  }
  return;
}


