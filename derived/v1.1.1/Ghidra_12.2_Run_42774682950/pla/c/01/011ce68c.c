/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011ce68c; name: FUN_011ce68c
 */


void FUN_011ce68c(long param_1)

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
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_011cebac;
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
  local_c0 = (undefined1 *)0x20b801c09d841dc;
  local_b8 = (code *)0x3987fa8;
  local_b0 = (code *)0xc;
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
  *(undefined8 *)(lVar8 + 0x300) = 0xab49936982f33827;
  *(char **)(lVar8 + 0x308) = "PLAY_UI_COMMON_SELECT";
  *(undefined8 *)(lVar8 + 0x310) = 0x15;
  *(undefined8 *)(lVar8 + 0x318) = 0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  pcVar7 = *(code **)(lVar8 + 0x188);
  local_c0 = &LAB_011d11d0;
  local_b8 = FUN_011d11e0;
  local_b0 = FUN_011d11e4;
  local_a8 = (long *)&LAB_011d11f0;
  alStack_a0[0] = param_1;
  if (pcVar7 == (code *)0x0) {
LAB_011ce7f8:
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
    if (local_b0 != (code *)0x0) goto LAB_011ce7f8;
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
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_011cebac;
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
  local_c0 = (undefined1 *)0xc49e31de2878c727;
  local_b8 = (code *)0x39611ce;
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
  *(undefined8 *)(lVar8 + 0xf8) = 0x40;
  *(undefined8 *)(lVar8 + 0x300) = 0x99ec3ab313e9662e;
  *(char **)(lVar8 + 0x308) = "PLAY_UI_COMMON_TAB";
  *(undefined8 *)(lVar8 + 0x310) = 0x12;
  *(undefined8 *)(lVar8 + 0x318) = 0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  pcVar7 = *(code **)(lVar8 + 0x188);
  local_c0 = &LAB_011d11fc;
  local_b8 = FUN_011d1208;
  local_b0 = FUN_011d120c;
  local_a8 = (long *)&LAB_011d1218;
  alStack_a0[0] = param_1;
  if (pcVar7 == (code *)0x0) {
LAB_011ce98c:
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
    if (local_b0 != (code *)0x0) goto LAB_011ce98c;
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
LAB_011cebac:
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
  local_c0 = (undefined1 *)0xc49e17de28789af9;
  local_b8 = (code *)0x38ae95d;
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
  *(undefined8 *)(lVar8 + 0xf8) = 0x80;
  *(undefined8 *)(lVar8 + 0x300) = 0x99ec3ab313e9662e;
  *(char **)(lVar8 + 0x308) = "PLAY_UI_COMMON_TAB";
  *(undefined8 *)(lVar8 + 0x310) = 0x12;
  *(undefined8 *)(lVar8 + 0x318) = 0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  pcVar7 = *(code **)(lVar8 + 0x188);
  local_c0 = &LAB_011d1224;
  local_b8 = FUN_011d1230;
  local_b0 = FUN_011d1234;
  local_a8 = (long *)&LAB_011d1240;
  alStack_a0[0] = param_1;
  if (pcVar7 != (code *)0x0) {
    *(undefined8 *)(lVar8 + 400) = 0;
    *(undefined8 *)(lVar8 + 0x198) = 0;
    *(undefined8 *)(lVar8 + 0x180) = 0;
    *(undefined8 *)(lVar8 + 0x188) = 0;
    (*pcVar7)(lVar8 + 0x1a0);
    if (local_b0 == (code *)0x0) goto LAB_011ceb34;
  }
  (*local_b0)(alStack_a0,lVar8 + 0x1a0);
  *(code **)(lVar8 + 0x188) = local_b8;
  *(long **)(lVar8 + 0x198) = local_a8;
  *(code **)(lVar8 + 400) = local_b0;
  *(undefined8 *)(lVar8 + 0x180) = local_c0;
LAB_011ceb34:
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


