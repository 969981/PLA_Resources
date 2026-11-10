/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01340df4; name: FUN_01340df4
 */


void FUN_01340df4(long param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  long *plVar8;
  long lVar9;
  undefined8 local_e0;
  char *pcStack_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined1 *local_c0;
  code *local_b8;
  code *local_b0;
  long *local_a8;
  long alStack_a0 [12];
  
  FUN_013134b8(param_1,1);
  FUN_013134c8(param_1,"pane_P_mask_l_");
  FUN_013134d0(param_1,"pane_P_mask_a_00_");
  FUN_013134d8(param_1,"pane_P_mask_");
  FUN_013107b8(param_1,param_2);
  plVar8 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar8 != (long *)0x0) {
    lVar9 = plVar8[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_01341164;
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
  local_c0 = (undefined1 *)0x72b4cda3d5eadb99;
  local_b8 = (code *)0x3961cd5;
  local_b0 = (code *)0xd;
  local_a8 = (long *)0x0;
  lVar9 = FUN_00d4d2c4(plVar8,*(undefined8 *)(param_1 + 8),&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (plVar8 != (long *)0x0) {
    lVar6 = plVar8[0xb];
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
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
  }
  plVar8 = *(long **)(lVar9 + 0x318);
  *(undefined8 *)(lVar9 + 0xf8) = 0x800;
  *(undefined8 *)(lVar9 + 0x300) = 0xa228de422764d838;
  *(char **)(lVar9 + 0x308) = "PLAY_UI_COMMON_MAP_ZOOM_OUT";
  *(undefined8 *)(lVar9 + 0x310) = 0x1b;
  *(undefined8 *)(lVar9 + 0x318) = 0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  pcVar7 = *(code **)(lVar9 + 0x288);
  local_c0 = &LAB_013412c0;
  local_b8 = FUN_013412d0;
  local_b0 = FUN_013412d4;
  local_a8 = (long *)&LAB_013412e0;
  alStack_a0[0] = param_1;
  if (pcVar7 == (code *)0x0) {
LAB_01340fa8:
    (*local_b0)(alStack_a0,lVar9 + 0x2a0);
    *(code **)(lVar9 + 0x288) = local_b8;
    *(long **)(lVar9 + 0x298) = local_a8;
    *(code **)(lVar9 + 0x290) = local_b0;
    *(undefined8 *)(lVar9 + 0x280) = local_c0;
  }
  else {
    *(undefined8 *)(lVar9 + 0x290) = 0;
    *(undefined8 *)(lVar9 + 0x298) = 0;
    *(undefined8 *)(lVar9 + 0x280) = 0;
    *(undefined8 *)(lVar9 + 0x288) = 0;
    (*pcVar7)(lVar9 + 0x2a0);
    if (local_b0 != (code *)0x0) goto LAB_01340fa8;
  }
  plVar8 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar8 != (long *)0x0) {
    lVar9 = plVar8[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
LAB_01341164:
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
  local_e0 = 0x8c37fcc594e76247;
  pcStack_d8 = "ShortcutInputZL";
  local_d0 = 0xf;
  local_c8 = (long *)0x0;
  lVar9 = FUN_00d4d2c4(plVar8,*(undefined8 *)(param_1 + 8),&local_e0);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (plVar8 != (long *)0x0) {
    lVar6 = plVar8[0xb];
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
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
  }
  plVar8 = *(long **)(lVar9 + 0x318);
  *(undefined8 *)(lVar9 + 0xf8) = 0x100;
  *(undefined8 *)(lVar9 + 0x300) = 0xa228de422764d838;
  *(char **)(lVar9 + 0x308) = "PLAY_UI_COMMON_MAP_ZOOM_OUT";
  *(undefined8 *)(lVar9 + 0x310) = 0x1b;
  *(undefined8 *)(lVar9 + 0x318) = 0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  pcVar7 = *(code **)(lVar9 + 0x288);
  if (pcVar7 != (code *)0x0) {
    *(undefined8 *)(lVar9 + 0x290) = 0;
    *(undefined8 *)(lVar9 + 0x298) = 0;
    *(undefined8 *)(lVar9 + 0x280) = 0;
    *(undefined8 *)(lVar9 + 0x288) = 0;
    (*pcVar7)(lVar9 + 0x2a0);
  }
  if (local_b0 != (code *)0x0) {
    (*local_b0)(alStack_a0,lVar9 + 0x2a0);
    *(code **)(lVar9 + 0x288) = local_b8;
    *(long **)(lVar9 + 0x298) = local_a8;
    *(code **)(lVar9 + 0x290) = local_b0;
    *(undefined8 *)(lVar9 + 0x280) = local_c0;
  }
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


