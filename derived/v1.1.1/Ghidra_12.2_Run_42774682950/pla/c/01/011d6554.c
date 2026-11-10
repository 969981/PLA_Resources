/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011d6554; name: FUN_011d6554
 */


void FUN_011d6554(long *param_1,undefined8 param_2,long param_3,long *param_4,long *param_5,
                 uint param_6)

{
  int *piVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *local_38;
  
  *param_1 = param_3;
  if (param_3 == 0) goto switchD_011d6774_caseD_1;
  lVar9 = *param_4;
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar8 = (long *)param_1[1];
  param_1[1] = lVar9;
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 10;
    do {
      iVar7 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    lVar9 = param_1[1];
  }
  if (lVar9 == 0) goto switchD_011d6774_caseD_1;
  lVar9 = *param_5;
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar8 = (long *)param_1[2];
  param_1[2] = lVar9;
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 10;
    do {
      iVar7 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    lVar9 = param_1[2];
  }
  if (lVar9 == 0) goto switchD_011d6774_caseD_1;
  lVar9 = FUN_011ccc18(&local_50,param_2);
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar8 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar8 == (long *)0x0) {
LAB_011d665c:
    param_1[3] = lVar9;
  }
  else {
    plVar2 = plVar8 + 10;
    do {
      iVar7 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 != 0) goto LAB_011d665c;
    (**(code **)(*plVar8 + 0x10))();
    param_1[3] = lVar9;
  }
  if (lVar9 == 0) goto switchD_011d6774_caseD_1;
  lVar9 = FUN_011ccc18(&local_50,param_2);
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar8 = (long *)param_1[4];
  param_1[4] = 0;
  if (plVar8 == (long *)0x0) {
LAB_011d66b0:
    param_1[4] = lVar9;
  }
  else {
    plVar2 = plVar8 + 10;
    do {
      iVar7 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 != 0) goto LAB_011d66b0;
    (**(code **)(*plVar8 + 0x10))();
    param_1[4] = lVar9;
  }
  if (lVar9 == 0) {
switchD_011d6774_caseD_1:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  param_6 = param_6 & 0xff;
  *(uint *)((long)param_1 + 0x3c) = param_6;
  if (*param_1 != 0) {
    if (param_6 == 1) {
      puVar10 = &DAT_041f87a8;
    }
    else {
      puVar10 = &DAT_041f8460;
      switch(param_6) {
      case 0:
        break;
      default:
        goto switchD_011d6774_caseD_1;
      case 2:
        puVar10 = &DAT_041f8af0;
        break;
      case 3:
        puVar10 = &DAT_041f8e38;
        break;
      case 4:
        puVar10 = &DAT_041f9180;
        break;
      case 5:
        puVar10 = &DAT_041f94c8;
      }
    }
    local_50 = puVar10[6];
    uStack_48 = puVar10[7];
    local_40 = puVar10[8];
    uVar3 = puVar10[0x1b];
    uVar4 = puVar10[0x1c];
    uVar11 = puVar10[0x1d];
    local_38 = (long *)0x0;
    lVar9 = FUN_00d648b4(*param_1,&local_50);
    param_1[5] = lVar9;
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_38 = (long *)0x0;
    local_50 = uVar3;
    uStack_48 = uVar4;
    local_40 = uVar11;
    lVar9 = FUN_00d648b4(*param_1,&local_50);
    param_1[6] = lVar9;
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


