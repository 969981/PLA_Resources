/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c42a50; name: FUN_01c42a50
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01c42a50(undefined1 *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined1 uVar8;
  long *plVar9;
  long *plVar10;
  undefined4 uVar11;
  long *local_38;
  
  if (*(long *)(param_2 + 0x270) == 0) {
    plVar9 = (long *)0x0;
    lVar7 = *(long *)(param_2 + 0x280);
  }
  else {
    FUN_00c518d0(&local_38);
    lVar7 = *(long *)(param_2 + 0x280);
    plVar9 = local_38;
  }
  if (lVar7 == 0) {
    plVar10 = (long *)0x0;
    lVar7 = *(long *)(param_2 + 0x290);
  }
  else {
    local_38 = plVar9;
    FUN_00c8882c(&local_38);
    lVar7 = *(long *)(param_2 + 0x290);
    plVar10 = local_38;
  }
  if (lVar7 == 0) {
    plVar5 = (long *)0x0;
  }
  else {
    local_38 = plVar10;
    FUN_00cc4514(&local_38);
    plVar5 = local_38;
  }
  uVar8 = 0;
  local_38 = plVar5;
  if (((plVar9 != (long *)0x0) && (uVar8 = 0, plVar10 != (long *)0x0)) && (plVar5 != (long *)0x0)) {
    lVar7 = plVar9[0x65];
    uVar11 = FUN_00cf12d8(plVar10);
    lVar6 = plVar5[0x5c];
    *(int *)(param_1 + 4) = (int)lVar7;
    *(undefined4 *)(param_1 + 8) = uVar11;
    param_1[0xc] = (char)lVar6;
    uVar8 = 1;
  }
  *param_1 = uVar8;
  if (plVar5 != (long *)0x0) {
    lVar7 = plVar5[0xb];
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
      (**(code **)(*plVar5 + 0x20))(plVar5);
    }
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
  return;
}


