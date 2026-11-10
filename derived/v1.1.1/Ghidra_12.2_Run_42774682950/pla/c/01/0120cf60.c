/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0120cf60; name: FUN_0120cf60
 */


void FUN_0120cf60(long param_1)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30 [2];
  long local_28;
  
  local_40 = *(undefined8 *)(param_1 + 8);
  local_30[0] = 8;
  FUN_0120f6b4(&local_28,local_40,local_30,&local_40);
  plVar7 = *(long **)(param_1 + 0x5c8);
  *(undefined8 *)(param_1 + 0x5c8) = 0;
  if (plVar7 != (long *)0x0) {
    lVar8 = plVar7[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))();
    }
  }
  lVar6 = local_28;
  *(long *)(param_1 + 0x5c8) = local_28;
  local_38 = 0;
  local_34 = 0;
  uVar3 = *(ulong *)(local_28 + 0xb0);
  lVar8 = local_28 + 0x88;
  if (uVar3 < *(ulong *)(local_28 + 0xb8)) {
    FUN_011d216c(lVar8,*(long *)(local_28 + 0xa8) + uVar3 * 8,&local_38);
    *(long *)(lVar6 + 0xb0) = *(long *)(lVar6 + 0xb0) + 1;
  }
  else {
    local_28 = *(long *)(local_28 + 0xa8) + uVar3 * 8;
    FUN_011d20a4(local_30,lVar8,&local_28,1,&local_38);
  }
  lVar8 = *(long *)(param_1 + 0x5c8);
  local_38 = 1;
  local_34 = 0;
  uVar3 = *(ulong *)(lVar8 + 0xb0);
  if (uVar3 < *(ulong *)(lVar8 + 0xb8)) {
    FUN_011d216c(lVar8 + 0x88,*(long *)(lVar8 + 0xa8) + uVar3 * 8,&local_38);
    *(long *)(lVar8 + 0xb0) = *(long *)(lVar8 + 0xb0) + 1;
  }
  else {
    local_28 = *(long *)(lVar8 + 0xa8) + uVar3 * 8;
    FUN_011d20a4(local_30,lVar8 + 0x88,&local_28,1,&local_38);
  }
  lVar8 = *(long *)(param_1 + 0x5c8);
  local_38 = 2;
  local_34 = 0;
  uVar3 = *(ulong *)(lVar8 + 0xb0);
  if (uVar3 < *(ulong *)(lVar8 + 0xb8)) {
    FUN_011d216c(lVar8 + 0x88,*(long *)(lVar8 + 0xa8) + uVar3 * 8,&local_38);
    *(long *)(lVar8 + 0xb0) = *(long *)(lVar8 + 0xb0) + 1;
  }
  else {
    local_28 = *(long *)(lVar8 + 0xa8) + uVar3 * 8;
    FUN_011d20a4(local_30,lVar8 + 0x88,&local_28,1,&local_38);
  }
  lVar8 = *(long *)(param_1 + 0x5c8);
  local_38 = 3;
  local_34 = 0;
  uVar3 = *(ulong *)(lVar8 + 0xb0);
  if (uVar3 < *(ulong *)(lVar8 + 0xb8)) {
    FUN_011d216c(lVar8 + 0x88,*(long *)(lVar8 + 0xa8) + uVar3 * 8,&local_38);
    *(long *)(lVar8 + 0xb0) = *(long *)(lVar8 + 0xb0) + 1;
  }
  else {
    local_28 = *(long *)(lVar8 + 0xa8) + uVar3 * 8;
    FUN_011d20a4(local_30,lVar8 + 0x88,&local_28,1,&local_38);
  }
  lVar8 = *(long *)(param_1 + 0x5c8);
  local_38 = 4;
  local_34 = 0;
  uVar3 = *(ulong *)(lVar8 + 0xb0);
  if (uVar3 < *(ulong *)(lVar8 + 0xb8)) {
    FUN_011d216c(lVar8 + 0x88,*(long *)(lVar8 + 0xa8) + uVar3 * 8,&local_38);
    *(long *)(lVar8 + 0xb0) = *(long *)(lVar8 + 0xb0) + 1;
  }
  else {
    local_28 = *(long *)(lVar8 + 0xa8) + uVar3 * 8;
    FUN_011d20a4(local_30,lVar8 + 0x88,&local_28,1,&local_38);
  }
  lVar8 = *(long *)(param_1 + 0x5c8);
  local_38 = 5;
  local_34 = 0;
  uVar3 = *(ulong *)(lVar8 + 0xb0);
  if (uVar3 < *(ulong *)(lVar8 + 0xb8)) {
    FUN_011d216c(lVar8 + 0x88,*(long *)(lVar8 + 0xa8) + uVar3 * 8,&local_38);
    *(long *)(lVar8 + 0xb0) = *(long *)(lVar8 + 0xb0) + 1;
  }
  else {
    local_28 = *(long *)(lVar8 + 0xa8) + uVar3 * 8;
    FUN_011d20a4(local_30,lVar8 + 0x88,&local_28,1,&local_38);
  }
  lVar8 = *(long *)(param_1 + 0x5c8);
  local_38 = 6;
  local_34 = 0;
  uVar3 = *(ulong *)(lVar8 + 0xb0);
  if (uVar3 < *(ulong *)(lVar8 + 0xb8)) {
    FUN_011d216c(lVar8 + 0x88,*(long *)(lVar8 + 0xa8) + uVar3 * 8,&local_38);
    *(long *)(lVar8 + 0xb0) = *(long *)(lVar8 + 0xb0) + 1;
  }
  else {
    local_28 = *(long *)(lVar8 + 0xa8) + uVar3 * 8;
    FUN_011d20a4(local_30,lVar8 + 0x88,&local_28,1,&local_38);
  }
  lVar8 = *(long *)(param_1 + 0x5c8);
  local_38 = 7;
  local_34 = 0;
  uVar3 = *(ulong *)(lVar8 + 0xb0);
  if (uVar3 < *(ulong *)(lVar8 + 0xb8)) {
    FUN_011d216c(lVar8 + 0x88,*(long *)(lVar8 + 0xa8) + uVar3 * 8,&local_38);
    *(long *)(lVar8 + 0xb0) = *(long *)(lVar8 + 0xb0) + 1;
  }
  else {
    local_28 = *(long *)(lVar8 + 0xa8) + uVar3 * 8;
    FUN_011d20a4(local_30,lVar8 + 0x88,&local_28,1,&local_38);
  }
  local_30[0] = 0x100;
  FUN_0120f72c(&local_28,local_40,local_30,&local_40);
  plVar7 = *(long **)(param_1 + 0x5d0);
  *(undefined8 *)(param_1 + 0x5d0) = 0;
  if (plVar7 != (long *)0x0) {
    lVar8 = plVar7[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))();
    }
  }
  *(long *)(param_1 + 0x5d0) = local_28;
  return;
}


