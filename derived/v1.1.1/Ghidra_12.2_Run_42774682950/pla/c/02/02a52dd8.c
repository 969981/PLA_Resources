/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a52dd8; name: FUN_02a52dd8
 */


void FUN_02a52dd8(undefined8 *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  long *local_50;
  long *local_48;
  
  if (*(long *)(param_2 + 0x278) == 0) {
    local_48 = (long *)0x0;
  }
  else {
    FUN_02622460(&local_48);
    if (local_48 != (long *)0x0) {
      *param_1 = local_48;
      return;
    }
  }
  lVar7 = *(long *)(param_2 + 0x298);
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0xc) != 0)) {
    piVar1 = (int *)(lVar7 + 0xc);
    iVar8 = *(int *)(lVar7 + 0xc);
    do {
      plVar9 = *(long **)(lVar7 + 0x10);
      lVar6 = FUN_00ad3750();
      while( true ) {
        if (plVar9 == (long *)0x0) goto LAB_02a52e60;
        if (plVar9 == (long *)lVar6) break;
        plVar9 = (long *)*plVar9;
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar7 = *(long *)(lVar7 + 0x18);
          if (lVar7 != 0) {
            plVar9 = (long *)(lVar7 + -0x50);
            if (*(long *)(lVar7 + 0x158) == 0) goto LAB_02a52e64;
            FUN_02622460(&local_50);
            goto LAB_02a52e68;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar8 = iVar2;
    } while (iVar2 != 0);
  }
LAB_02a52e60:
  plVar9 = (long *)0x0;
LAB_02a52e64:
  local_50 = (long *)0x0;
LAB_02a52e68:
  plVar5 = local_48;
  local_48 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    lVar7 = plVar5[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  local_48 = local_50;
  if (local_50 == (long *)0x0) {
    if (*(long *)(param_2 + 0x1a8) == 0) {
      *param_1 = 0;
    }
    else {
      FUN_02622460(param_1);
    }
  }
  else {
    local_48 = (long *)0x0;
    *param_1 = local_50;
  }
  if (plVar9 != (long *)0x0) {
    lVar7 = plVar9[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  if (local_48 != (long *)0x0) {
    lVar7 = local_48[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  return;
}


