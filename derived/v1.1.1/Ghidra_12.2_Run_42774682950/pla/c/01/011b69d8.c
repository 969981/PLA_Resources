/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011b69d8; name: FUN_011b69d8
 */


void FUN_011b69d8(long param_1)

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
  undefined1 *local_b0;
  code *local_a8;
  code *local_a0;
  long *local_98;
  long alStack_90 [12];
  
  plVar8 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar8 != (long *)0x0) {
    lVar9 = plVar8[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_011b6cf4;
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
  local_b0 = (undefined1 *)0x6bb64670ff82ebad;
  local_a8 = (code *)0x3957050;
  local_a0 = (code *)0xb;
  local_98 = (long *)0x0;
  lVar9 = FUN_00d4d2c4(plVar8,*(undefined8 *)(param_1 + 8),&local_b0);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
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
  pcVar7 = *(code **)(lVar9 + 0x188);
  *(undefined8 *)(lVar9 + 0xf8) = 0x400;
  local_b0 = &LAB_011b70e0;
  local_a8 = FUN_011b70f0;
  local_a0 = FUN_011b70f4;
  local_98 = (long *)&LAB_011b7100;
  alStack_90[0] = param_1;
  if (pcVar7 == (code *)0x0) {
LAB_011b6b00:
    (*local_a0)(alStack_90,lVar9 + 0x1a0);
    *(code **)(lVar9 + 0x188) = local_a8;
    *(long **)(lVar9 + 0x198) = local_98;
    *(code **)(lVar9 + 400) = local_a0;
    *(undefined8 *)(lVar9 + 0x180) = local_b0;
  }
  else {
    *(undefined8 *)(lVar9 + 400) = 0;
    *(undefined8 *)(lVar9 + 0x198) = 0;
    *(undefined8 *)(lVar9 + 0x180) = 0;
    *(undefined8 *)(lVar9 + 0x188) = 0;
    (*pcVar7)(lVar9 + 0x1a0);
    if (local_a0 != (code *)0x0) goto LAB_011b6b00;
  }
  pcVar7 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (code *)0x0;
    local_98 = (long *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar7)(alStack_90);
  }
  plVar8 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar8 != (long *)0x0) {
    lVar9 = plVar8[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_011b6cf4;
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
  local_b0 = (undefined1 *)0xb7b4537abf607ce0;
  local_a8 = (code *)0x39b4e95;
  local_a0 = (code *)&DAT_0000000d;
  local_98 = (long *)0x0;
  lVar9 = FUN_00d4d2c4(plVar8,*(undefined8 *)(param_1 + 8),&local_b0);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
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
  if (lVar9 == 0) {
LAB_011b6cf4:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  pcVar7 = *(code **)(lVar9 + 0x188);
  *(undefined8 *)(lVar9 + 0xf8) = 0x100000000;
  local_b0 = &LAB_011b710c;
  local_a8 = FUN_011b7144;
  local_a0 = FUN_011b7148;
  local_98 = (long *)&LAB_011b7154;
  alStack_90[0] = param_1;
  if (pcVar7 != (code *)0x0) {
    *(undefined8 *)(lVar9 + 400) = 0;
    *(undefined8 *)(lVar9 + 0x198) = 0;
    *(undefined8 *)(lVar9 + 0x180) = 0;
    *(undefined8 *)(lVar9 + 0x188) = 0;
    (*pcVar7)(lVar9 + 0x1a0);
    if (local_a0 == (code *)0x0) goto LAB_011b6c84;
  }
  (*local_a0)(alStack_90,lVar9 + 0x1a0);
  *(code **)(lVar9 + 0x188) = local_a8;
  *(long **)(lVar9 + 0x198) = local_98;
  *(code **)(lVar9 + 400) = local_a0;
  *(undefined8 *)(lVar9 + 0x180) = local_b0;
LAB_011b6c84:
  pcVar7 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (code *)0x0;
    local_98 = (long *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar7)(alStack_90);
  }
  return;
}


