/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d353a4; name: FUN_00d353a4
 */


void FUN_00d353a4(long param_1,undefined8 *param_2,ulong param_3)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *local_50;
  undefined1 auStack_48 [8];
  long local_38;
  
  plVar6 = (long *)FUN_00d35700(param_1 + 0x50);
  if (plVar6 == (long *)0x0) goto LAB_00d35468;
  lVar8 = *(long *)*param_2;
  lVar9 = plVar6[0xb];
  local_50 = plVar6;
  if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_00d356e8;
  if (*(long *)(lVar9 + 0x10) == 0) {
    uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
    *(undefined8 *)(lVar9 + 0x10) = uVar7;
  }
  piVar1 = (int *)(lVar9 + 0xc);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = *piVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar3 = *(ulong *)(lVar8 + 0x28);
  if (uVar3 < *(ulong *)(lVar8 + 0x30)) {
    FUN_00d352c4(lVar8,*(long *)(lVar8 + 0x20) + uVar3 * 8,&local_50);
    *(long *)(lVar8 + 0x28) = *(long *)(lVar8 + 0x28) + 1;
    if (local_50 == (long *)0x0) goto LAB_00d35468;
LAB_00d3544c:
    lVar8 = local_50[0xb];
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
    if (iVar2 + -1 != 0) goto LAB_00d35468;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (**(code **)(*local_50 + 0x20))();
    plVar6 = *(long **)(param_1 + 0x98);
  }
  else {
    local_38 = *(long *)(lVar8 + 0x20) + uVar3 * 8;
    FUN_00d3589c(auStack_48,lVar8,&local_38,&local_50);
    if (local_50 != (long *)0x0) goto LAB_00d3544c;
LAB_00d35468:
    plVar6 = *(long **)(param_1 + 0x98);
  }
  if (plVar6 != (long *)0x0) {
    lVar8 = plVar6[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_00d356e8;
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar8 = plVar6[0xb];
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
      (**(code **)(*plVar6 + 0x20))(plVar6);
      plVar6 = *(long **)(param_1 + 0x98);
    }
    else {
      plVar6 = *(long **)(param_1 + 0x98);
    }
    if (plVar6 == (long *)0x0) {
      FUN_00d353a4(0,param_2,1);
    }
    else {
      lVar8 = plVar6[0xb];
      if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_00d356e8;
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      FUN_00d353a4(plVar6,param_2,1);
      lVar8 = plVar6[0xb];
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
        (**(code **)(*plVar6 + 0x20))(plVar6);
      }
    }
  }
  if (((param_3 & 1) != 0) && (plVar6 = *(long **)(param_1 + 0x90), plVar6 != (long *)0x0)) {
    lVar8 = plVar6[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
LAB_00d356e8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar8 = plVar6[0xb];
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
      (**(code **)(*plVar6 + 0x20))(plVar6);
      plVar6 = *(long **)(param_1 + 0x90);
    }
    else {
      plVar6 = *(long **)(param_1 + 0x90);
    }
    if (plVar6 == (long *)0x0) {
      FUN_00d353a4(0,param_2,1);
    }
    else {
      lVar8 = plVar6[0xb];
      if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_00d356e8;
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      FUN_00d353a4(plVar6,param_2,1);
      lVar8 = plVar6[0xb];
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
        (**(code **)(*plVar6 + 0x20))(plVar6);
      }
    }
  }
  return;
}


