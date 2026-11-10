/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d6f670; name: FUN_00d6f670
 */


void FUN_00d6f670(long param_1)

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
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_00d6fd24;
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
  local_c0 = (undefined1 *)0x8f31cd06928d1181;
  local_b8 = (code *)0x3999f6e;
  local_b0 = (code *)0x14;
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
  *(undefined8 *)(lVar8 + 0xf8) = 0x8000040;
  *(undefined8 *)(lVar8 + 0x300) = 0x3a0af5851249f2ac;
  *(char **)(lVar8 + 0x308) = "Play_UI_common_page";
  *(undefined8 *)(lVar8 + 0x310) = 0x13;
  *(undefined8 *)(lVar8 + 0x318) = 0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  pcVar7 = *(code **)(lVar8 + 0x288);
  local_c0 = &LAB_00d71d44;
  local_b8 = FUN_00d71d74;
  local_b0 = FUN_00d71d78;
  local_a8 = (long *)&LAB_00d71d84;
  alStack_a0[0] = param_1;
  if (pcVar7 == (code *)0x0) {
LAB_00d6f7e0:
    (*local_b0)(alStack_a0,lVar8 + 0x2a0);
    *(code **)(lVar8 + 0x288) = local_b8;
    *(long **)(lVar8 + 0x298) = local_a8;
    *(code **)(lVar8 + 0x290) = local_b0;
    *(undefined8 *)(lVar8 + 0x280) = local_c0;
  }
  else {
    *(undefined8 *)(lVar8 + 0x290) = 0;
    *(undefined8 *)(lVar8 + 0x298) = 0;
    *(undefined8 *)(lVar8 + 0x280) = 0;
    *(undefined8 *)(lVar8 + 0x288) = 0;
    (*pcVar7)(lVar8 + 0x2a0);
    if (local_b0 != (code *)0x0) goto LAB_00d6f7e0;
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
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_00d6fd24;
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
  local_c0 = &DAT_8f31b706928cec1f;
  local_b8 = (code *)0x388e1fd;
  local_b0 = (code *)0x14;
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
  *(undefined8 *)(lVar8 + 0xf8) = 0x2000080;
  *(undefined8 *)(lVar8 + 0x300) = 0x3a0af5851249f2ac;
  *(char **)(lVar8 + 0x308) = "Play_UI_common_page";
  *(undefined8 *)(lVar8 + 0x310) = 0x13;
  *(undefined8 *)(lVar8 + 0x318) = 0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  pcVar7 = *(code **)(lVar8 + 0x288);
  local_c0 = &LAB_00d71d90;
  local_b8 = FUN_00d71dc0;
  local_b0 = FUN_00d71dc4;
  local_a8 = (long *)&LAB_00d71dd0;
  alStack_a0[0] = param_1;
  if (pcVar7 == (code *)0x0) {
LAB_00d6f960:
    (*local_b0)(alStack_a0,lVar8 + 0x2a0);
    *(code **)(lVar8 + 0x288) = local_b8;
    *(long **)(lVar8 + 0x298) = local_a8;
    *(code **)(lVar8 + 0x290) = local_b0;
    *(undefined8 *)(lVar8 + 0x280) = local_c0;
  }
  else {
    *(undefined8 *)(lVar8 + 0x290) = 0;
    *(undefined8 *)(lVar8 + 0x298) = 0;
    *(undefined8 *)(lVar8 + 0x280) = 0;
    *(undefined8 *)(lVar8 + 0x288) = 0;
    (*pcVar7)(lVar8 + 0x2a0);
    if (local_b0 != (code *)0x0) goto LAB_00d6f960;
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
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_00d6fd24;
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
  local_c0 = (undefined1 *)0x306ff043b504400c;
  local_b8 = (code *)0x3907b2d;
  local_b0 = (code *)0xf;
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
  *(undefined8 *)(lVar8 + 0xf8) = 0x200000000;
  *(undefined1 **)(lVar8 + 0x308) = &DAT_03996322;
  *(undefined8 *)(lVar8 + 0x310) = 0;
  *(undefined8 *)(lVar8 + 0x318) = 0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  pcVar7 = *(code **)(lVar8 + 0x288);
  local_c0 = &LAB_00d71ddc;
  local_b8 = FUN_00d71ed0;
  local_b0 = FUN_00d71ed4;
  local_a8 = (long *)&LAB_00d71ee0;
  alStack_a0[0] = param_1;
  if (pcVar7 == (code *)0x0) {
LAB_00d6faf0:
    (*local_b0)(alStack_a0,lVar8 + 0x2a0);
    *(code **)(lVar8 + 0x288) = local_b8;
    *(long **)(lVar8 + 0x298) = local_a8;
    *(code **)(lVar8 + 0x290) = local_b0;
    *(undefined8 *)(lVar8 + 0x280) = local_c0;
  }
  else {
    *(undefined8 *)(lVar8 + 0x290) = 0;
    *(undefined8 *)(lVar8 + 0x298) = 0;
    *(undefined8 *)(lVar8 + 0x280) = 0;
    *(undefined8 *)(lVar8 + 0x288) = 0;
    (*pcVar7)(lVar8 + 0x2a0);
    if (local_b0 != (code *)0x0) goto LAB_00d6faf0;
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
LAB_00d6fd24:
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
  local_c0 = (undefined1 *)0xec6cac7e31c6b5ae;
  local_b8 = (code *)0x39bda25;
  local_b0 = (code *)0xf;
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
  *(undefined8 *)(lVar8 + 0xf8) = 0x400000000;
  *(undefined1 **)(lVar8 + 0x300) = &DAT_cbf29ce484222645;
  *(undefined1 **)(lVar8 + 0x308) = &DAT_03996322;
  *(undefined8 *)(lVar8 + 0x310) = 0;
  *(undefined8 *)(lVar8 + 0x318) = 0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  pcVar7 = *(code **)(lVar8 + 0x288);
  local_c0 = &LAB_00d71eec;
  local_b8 = FUN_00d71f78;
  local_b0 = FUN_00d71f7c;
  local_a8 = (long *)&LAB_00d71f88;
  alStack_a0[0] = param_1;
  if (pcVar7 != (code *)0x0) {
    *(undefined8 *)(lVar8 + 0x290) = 0;
    *(undefined8 *)(lVar8 + 0x298) = 0;
    *(undefined8 *)(lVar8 + 0x280) = 0;
    *(undefined8 *)(lVar8 + 0x288) = 0;
    (*pcVar7)(lVar8 + 0x2a0);
    if (local_b0 == (code *)0x0) goto LAB_00d6fc94;
  }
  (*local_b0)(alStack_a0,lVar8 + 0x2a0);
  *(code **)(lVar8 + 0x288) = local_b8;
  *(long **)(lVar8 + 0x298) = local_a8;
  *(code **)(lVar8 + 0x290) = local_b0;
  *(undefined8 *)(lVar8 + 0x280) = local_c0;
LAB_00d6fc94:
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


