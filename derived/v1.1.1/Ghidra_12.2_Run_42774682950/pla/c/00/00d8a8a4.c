/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d8a8a4; name: FUN_00d8a8a4
 */


void FUN_00d8a8a4(undefined8 *param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_041eca90;
  param_1[9] = &PTR_LAB_041ecac0;
  plVar6 = (long *)param_1[0x36];
  if (plVar6 == (long *)0x0) {
LAB_00d8a8e8:
    plVar6 = (long *)param_1[0x35];
  }
  else {
    plVar1 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_00d8a8e8;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x35];
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  FUN_00d8ad18(param_1 + 0x27);
  plVar6 = (long *)param_1[0x26];
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[0xb];
    piVar2 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))();
    }
  }
  lVar7 = param_1[0x22];
  param_1[0x22] = 0;
  if (lVar7 == 0) {
    plVar6 = (long *)param_1[0x20];
    if (plVar6 == (long *)0x0) goto LAB_00d8a960;
LAB_00d8a948:
    plVar1 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_00d8a960;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x1f];
  }
  else {
    FUN_00d8e7f0(param_1 + 0x23);
    plVar6 = (long *)param_1[0x20];
    if (plVar6 != (long *)0x0) goto LAB_00d8a948;
LAB_00d8a960:
    plVar6 = (long *)param_1[0x1f];
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  lVar7 = param_1[0x1b];
  param_1[0x1b] = 0;
  if (lVar7 == 0) {
    plVar6 = (long *)param_1[0x1a];
    if (plVar6 == (long *)0x0) goto LAB_00d8a9ac;
LAB_00d8a994:
    plVar1 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_00d8a9ac;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x19];
    if (plVar6 != (long *)0x0) goto LAB_00d8a9b4;
LAB_00d8a9d0:
    plVar6 = (long *)param_1[0x18];
    if (plVar6 == (long *)0x0) goto LAB_00d8a9f4;
LAB_00d8a9d8:
    lVar7 = plVar6[0xb];
    piVar2 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 != 0) goto LAB_00d8a9f4;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x12];
    if (plVar6 != (long *)0x0) goto LAB_00d8a9fc;
LAB_00d8aa18:
    plVar6 = (long *)param_1[0x11];
    if (plVar6 == (long *)0x0) goto LAB_00d8aa3c;
LAB_00d8aa20:
    lVar7 = plVar6[0xb];
    piVar2 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 != 0) goto LAB_00d8aa3c;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x10];
    if (plVar6 != (long *)0x0) goto LAB_00d8aa44;
LAB_00d8aa60:
    plVar6 = (long *)param_1[0xf];
    if (plVar6 == (long *)0x0) goto LAB_00d8aa84;
LAB_00d8aa68:
    lVar7 = plVar6[0xb];
    piVar2 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 != 0) goto LAB_00d8aa84;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0xe];
    if (plVar6 != (long *)0x0) goto LAB_00d8aa8c;
LAB_00d8aaa8:
    plVar6 = (long *)param_1[0xd];
    if (plVar6 == (long *)0x0) goto LAB_00d8aacc;
LAB_00d8aab0:
    lVar7 = plVar6[0xb];
    piVar2 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 != 0) goto LAB_00d8aacc;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0xc];
    if (plVar6 != (long *)0x0) goto LAB_00d8aad4;
LAB_00d8aaf0:
    plVar6 = (long *)param_1[0xb];
  }
  else {
    FUN_00d8d890(param_1 + 0x1c);
    plVar6 = (long *)param_1[0x1a];
    if (plVar6 != (long *)0x0) goto LAB_00d8a994;
LAB_00d8a9ac:
    plVar6 = (long *)param_1[0x19];
    if (plVar6 == (long *)0x0) goto LAB_00d8a9d0;
LAB_00d8a9b4:
    lVar7 = plVar6[0xb];
    piVar2 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 != 0) goto LAB_00d8a9d0;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x18];
    if (plVar6 != (long *)0x0) goto LAB_00d8a9d8;
LAB_00d8a9f4:
    plVar6 = (long *)param_1[0x12];
    if (plVar6 == (long *)0x0) goto LAB_00d8aa18;
LAB_00d8a9fc:
    lVar7 = plVar6[0xb];
    piVar2 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 != 0) goto LAB_00d8aa18;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x11];
    if (plVar6 != (long *)0x0) goto LAB_00d8aa20;
LAB_00d8aa3c:
    plVar6 = (long *)param_1[0x10];
    if (plVar6 == (long *)0x0) goto LAB_00d8aa60;
LAB_00d8aa44:
    lVar7 = plVar6[0xb];
    piVar2 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 != 0) goto LAB_00d8aa60;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0xf];
    if (plVar6 != (long *)0x0) goto LAB_00d8aa68;
LAB_00d8aa84:
    plVar6 = (long *)param_1[0xe];
    if (plVar6 == (long *)0x0) goto LAB_00d8aaa8;
LAB_00d8aa8c:
    lVar7 = plVar6[0xb];
    piVar2 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 != 0) goto LAB_00d8aaa8;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0xd];
    if (plVar6 != (long *)0x0) goto LAB_00d8aab0;
LAB_00d8aacc:
    plVar6 = (long *)param_1[0xc];
    if (plVar6 == (long *)0x0) goto LAB_00d8aaf0;
LAB_00d8aad4:
    lVar7 = plVar6[0xb];
    piVar2 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 != 0) goto LAB_00d8aaf0;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0xb];
  }
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[0xb];
    piVar2 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))();
      plVar6 = (long *)param_1[10];
      goto joined_r0x00d8ab18;
    }
  }
  plVar6 = (long *)param_1[10];
joined_r0x00d8ab18:
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[0xb];
    piVar2 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00d8ad14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x20))();
      return;
    }
  }
  return;
}


