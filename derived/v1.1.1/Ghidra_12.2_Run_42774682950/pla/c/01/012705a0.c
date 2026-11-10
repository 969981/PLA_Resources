/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012705a0; name: FUN_012705a0
 */


void FUN_012705a0(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined1 *local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  plVar7 = *(long **)(param_1 + 0x2c8);
  if (plVar7 != (long *)0x0) {
    plVar10 = plVar7 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      iVar5 = (int)*plVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  plVar10 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xb0) + 0x18);
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_0127079c;
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar6;
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
  plVar9 = (long *)plVar10[0xd];
  if (plVar9 != (long *)0x0) {
    plVar2 = plVar9 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar8 = plVar10[0xb];
  piVar1 = (int *)(lVar8 + 0xc);
  do {
    iVar5 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar5 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 + -1 == 0) {
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 10;
    do {
      iVar5 = (int)*plVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    local_60 = &DAT_e2c06acab97c29c2;
    pcStack_58 = "CommonOptionBar";
    local_50 = 0xf;
    local_48 = (long *)0x0;
    uVar6 = FUN_00d6adf4(param_1 + 0x180,&local_60);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    FUN_0126c1f0(param_1 + 0x928,plVar7,plVar9,uVar6);
    FUN_0126c24c(param_1 + 0x928,1);
    lVar8 = param_1 + 0x948;
    FUN_0126bc6c(lVar8,plVar7,plVar9);
    FUN_0126bca4(lVar8,param_1 + 0xa38);
    FUN_0126be58(lVar8,*(undefined1 *)(param_1 + 0x904),param_1 + 0x9c8);
    FUN_012707ac(param_1);
    return;
  }
LAB_0127079c:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


