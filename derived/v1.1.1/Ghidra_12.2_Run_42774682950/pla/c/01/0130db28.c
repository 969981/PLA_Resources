/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0130db28; name: FUN_0130db28
 */


void FUN_0130db28(undefined8 *param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_04204678;
  param_1[9] = &PTR_LAB_04204708;
  param_1[10] = &PTR_LAB_04204750;
  plVar6 = (long *)param_1[0x1d];
  if (plVar6 == (long *)0x0) {
LAB_0130db70:
    plVar6 = (long *)param_1[0x1c];
    if (plVar6 == (long *)0x0) goto LAB_0130db90;
LAB_0130db78:
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
    if (iVar5 != 0) goto LAB_0130db90;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x1b];
    if (plVar6 != (long *)0x0) goto LAB_0130db98;
LAB_0130dbb0:
    plVar6 = (long *)param_1[0x1a];
    if (plVar6 == (long *)0x0) goto LAB_0130dbd0;
LAB_0130dbb8:
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
    if (iVar5 != 0) goto LAB_0130dbd0;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x19];
    if (plVar6 != (long *)0x0) goto LAB_0130dbd8;
LAB_0130dbf0:
    plVar6 = (long *)param_1[0x18];
    if (plVar6 == (long *)0x0) goto LAB_0130dc10;
LAB_0130dbf8:
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
    if (iVar5 != 0) goto LAB_0130dc10;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x17];
    if (plVar6 != (long *)0x0) goto LAB_0130dc18;
LAB_0130dc30:
    plVar6 = (long *)param_1[0x16];
    if (plVar6 == (long *)0x0) goto LAB_0130dc50;
LAB_0130dc38:
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
    if (iVar5 != 0) goto LAB_0130dc50;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x15];
    if (plVar6 != (long *)0x0) goto LAB_0130dc58;
LAB_0130dc70:
    plVar6 = (long *)param_1[0x14];
    if (plVar6 == (long *)0x0) goto LAB_0130dc90;
LAB_0130dc78:
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
    if (iVar5 != 0) goto LAB_0130dc90;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x13];
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
    if (iVar5 != 0) goto LAB_0130db70;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x1c];
    if (plVar6 != (long *)0x0) goto LAB_0130db78;
LAB_0130db90:
    plVar6 = (long *)param_1[0x1b];
    if (plVar6 == (long *)0x0) goto LAB_0130dbb0;
LAB_0130db98:
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
    if (iVar5 != 0) goto LAB_0130dbb0;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x1a];
    if (plVar6 != (long *)0x0) goto LAB_0130dbb8;
LAB_0130dbd0:
    plVar6 = (long *)param_1[0x19];
    if (plVar6 == (long *)0x0) goto LAB_0130dbf0;
LAB_0130dbd8:
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
    if (iVar5 != 0) goto LAB_0130dbf0;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x18];
    if (plVar6 != (long *)0x0) goto LAB_0130dbf8;
LAB_0130dc10:
    plVar6 = (long *)param_1[0x17];
    if (plVar6 == (long *)0x0) goto LAB_0130dc30;
LAB_0130dc18:
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
    if (iVar5 != 0) goto LAB_0130dc30;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x16];
    if (plVar6 != (long *)0x0) goto LAB_0130dc38;
LAB_0130dc50:
    plVar6 = (long *)param_1[0x15];
    if (plVar6 == (long *)0x0) goto LAB_0130dc70;
LAB_0130dc58:
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
    if (iVar5 != 0) goto LAB_0130dc70;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x14];
    if (plVar6 != (long *)0x0) goto LAB_0130dc78;
LAB_0130dc90:
    plVar6 = (long *)param_1[0x13];
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
      plVar6 = (long *)param_1[0x12];
      goto joined_r0x0130dcb4;
    }
  }
  plVar6 = (long *)param_1[0x12];
joined_r0x0130dcb4:
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
  FUN_00d3a42c(param_1);
  return;
}


