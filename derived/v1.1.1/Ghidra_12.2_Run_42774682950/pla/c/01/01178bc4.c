/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01178bc4; name: FUN_01178bc4
 */


void FUN_01178bc4(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  code *pcVar7;
  long *plVar8;
  long lVar9;
  undefined1 *local_d0;
  code *local_c8;
  code *local_c0;
  long *local_b8;
  long alStack_b0 [12];
  
  plVar8 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar8 != (long *)0x0) {
    lVar9 = plVar8[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
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
  local_d0 = (undefined1 *)0x45935755e3ce0d10;
  local_c8 = (code *)0x38df0b6;
  local_c0 = (code *)0x9;
  local_b8 = (long *)0x0;
  plVar6 = (long *)FUN_00d4d2c4(plVar8,*(undefined8 *)(param_1 + 8),&local_d0);
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (plVar8 != (long *)0x0) {
    lVar9 = plVar8[0xb];
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
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
  }
  pcVar7 = (code *)plVar6[0x31];
  plVar6[0x1f] = 0x600000000;
  local_d0 = &LAB_0117e108;
  local_c8 = FUN_0117e118;
  local_c0 = FUN_0117e11c;
  local_b8 = (long *)&LAB_0117e128;
  alStack_b0[0] = param_1;
  if (pcVar7 == (code *)0x0) {
LAB_01178cf4:
    (*local_c0)(alStack_b0,plVar6 + 0x34);
    plVar6[0x31] = (long)local_c8;
    plVar6[0x33] = (long)local_b8;
    plVar6[0x32] = (long)local_c0;
    plVar6[0x30] = (long)local_d0;
  }
  else {
    plVar6[0x32] = 0;
    plVar6[0x33] = 0;
    plVar6[0x30] = 0;
    plVar6[0x31] = 0;
    (*pcVar7)(plVar6 + 0x34);
    if (local_c0 != (code *)0x0) goto LAB_01178cf4;
  }
  lVar9 = param_1 + 0x180;
  pcVar7 = local_c8;
  if (*(char *)((long)plVar6 + 0xa2) != '\0') {
    *(undefined1 *)((long)plVar6 + 0xa2) = 0;
    (**(code **)(*plVar6 + 0x98))(plVar6,0);
    pcVar7 = local_c8;
  }
  local_c8 = pcVar7;
  if (pcVar7 != (code *)0x0) {
    local_c0 = (code *)0x0;
    local_b8 = (long *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar7)(alStack_b0);
  }
  plVar8 = (long *)FUN_00d2e81c(lVar9,"button_next");
  if (plVar8 != (long *)0x0) {
    pcVar7 = (code *)plVar8[0x59];
    local_d0 = &LAB_0117e134;
    local_c8 = FUN_0117e144;
    local_c0 = FUN_0117e148;
    local_b8 = (long *)&LAB_0117e154;
    alStack_b0[0] = param_1;
    if (pcVar7 == (code *)0x0) {
LAB_01178db4:
      (*local_c0)(alStack_b0,plVar8 + 0x5c);
      plVar8[0x59] = (long)local_c8;
      plVar8[0x5b] = (long)local_b8;
      plVar8[0x5a] = (long)local_c0;
      plVar8[0x58] = (long)local_d0;
    }
    else {
      plVar8[0x5a] = 0;
      plVar8[0x5b] = 0;
      plVar8[0x58] = 0;
      plVar8[0x59] = 0;
      (*pcVar7)(plVar8 + 0x5c);
      if (local_c0 != (code *)0x0) goto LAB_01178db4;
    }
    plVar8[0x4c] = 0x600000000;
    pcVar7 = local_c8;
    if (*(char *)((long)plVar8 + 0xa2) != '\0') {
      *(undefined1 *)((long)plVar8 + 0xa2) = 0;
      (**(code **)(*plVar8 + 0x98))(plVar8,0);
      pcVar7 = local_c8;
    }
    local_c8 = pcVar7;
    if (pcVar7 != (code *)0x0) {
      local_c0 = (code *)0x0;
      local_b8 = (long *)0x0;
      local_d0 = (undefined1 *)0x0;
      local_c8 = (code *)0x0;
      (*pcVar7)(alStack_b0);
    }
  }
  plVar8 = (long *)FUN_00d2e81c(lVar9,"button_page_l");
  if (plVar8 != (long *)0x0) {
    pcVar7 = (code *)plVar8[0x59];
    local_d0 = &LAB_0117e160;
    local_c8 = FUN_0117e170;
    local_c0 = FUN_0117e174;
    local_b8 = (long *)&LAB_0117e180;
    alStack_b0[0] = param_1;
    if (pcVar7 == (code *)0x0) {
LAB_01178e90:
      (*local_c0)(alStack_b0,plVar8 + 0x5c);
      plVar8[0x59] = (long)local_c8;
      plVar8[0x5b] = (long)local_b8;
      plVar8[0x5a] = (long)local_c0;
      plVar8[0x58] = (long)local_d0;
    }
    else {
      plVar8[0x5a] = 0;
      plVar8[0x5b] = 0;
      plVar8[0x58] = 0;
      plVar8[0x59] = 0;
      (*pcVar7)(plVar8 + 0x5c);
      if (local_c0 != (code *)0x0) goto LAB_01178e90;
    }
    plVar6 = (long *)plVar8[0x54];
    plVar8[0x4c] = 0x40;
    plVar8[0x51] = -0x6613c54cec1699d2;
    plVar8[0x52] = (long)"PLAY_UI_COMMON_TAB";
    plVar8[0x53] = 0x12;
    plVar8[0x54] = 0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))();
    }
    pcVar7 = local_c8;
    if (*(char *)((long)plVar8 + 0xa2) != '\0') {
      *(undefined1 *)((long)plVar8 + 0xa2) = 0;
      (**(code **)(*plVar8 + 0x98))(plVar8,0);
      pcVar7 = local_c8;
    }
    local_c8 = pcVar7;
    if (pcVar7 != (code *)0x0) {
      local_c0 = (code *)0x0;
      local_b8 = (long *)0x0;
      local_d0 = (undefined1 *)0x0;
      local_c8 = (code *)0x0;
      (*pcVar7)(alStack_b0);
    }
  }
  plVar8 = (long *)FUN_00d2e81c(lVar9,"button_page_r");
  if (plVar8 == (long *)0x0) {
    return;
  }
  pcVar7 = (code *)plVar8[0x59];
  local_d0 = &LAB_0117e18c;
  local_c8 = FUN_0117e19c;
  local_c0 = FUN_0117e1a0;
  local_b8 = (long *)&LAB_0117e1ac;
  alStack_b0[0] = param_1;
  if (pcVar7 != (code *)0x0) {
    plVar8[0x5a] = 0;
    plVar8[0x5b] = 0;
    plVar8[0x58] = 0;
    plVar8[0x59] = 0;
    (*pcVar7)(plVar8 + 0x5c);
    if (local_c0 == (code *)0x0) goto LAB_01178fa8;
  }
  (*local_c0)(alStack_b0,plVar8 + 0x5c);
  plVar8[0x59] = (long)local_c8;
  plVar8[0x5b] = (long)local_b8;
  plVar8[0x5a] = (long)local_c0;
  plVar8[0x58] = (long)local_d0;
LAB_01178fa8:
  plVar6 = (long *)plVar8[0x54];
  plVar8[0x4c] = 0x80;
  plVar8[0x51] = -0x6613c54cec1699d2;
  plVar8[0x52] = (long)"PLAY_UI_COMMON_TAB";
  plVar8[0x53] = 0x12;
  plVar8[0x54] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  pcVar7 = local_c8;
  if (*(char *)((long)plVar8 + 0xa2) != '\0') {
    *(undefined1 *)((long)plVar8 + 0xa2) = 0;
    (**(code **)(*plVar8 + 0x98))(plVar8,0);
    pcVar7 = local_c8;
  }
  if (pcVar7 != (code *)0x0) {
    local_c0 = (code *)0x0;
    local_b8 = (long *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar7)(alStack_b0);
  }
  return;
}


