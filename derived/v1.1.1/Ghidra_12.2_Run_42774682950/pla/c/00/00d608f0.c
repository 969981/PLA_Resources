/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d608f0; name: FUN_00d608f0
 */


void FUN_00d608f0(undefined8 *param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_041eb370;
  param_1[9] = &PTR_LAB_041eb598;
  param_1[10] = &PTR_LAB_041eb5e0;
  plVar6 = (long *)param_1[0xd3];
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))();
    }
  }
  lVar7 = param_1[0xcf];
  param_1[0xcf] = 0;
  if (lVar7 == 0) {
    plVar6 = (long *)param_1[199];
  }
  else {
    FUN_00d60d20(param_1 + 0xd0);
    plVar6 = (long *)param_1[199];
  }
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))();
    }
  }
  lVar7 = param_1[0xc3];
  param_1[0xc3] = 0;
  if (lVar7 == 0) {
    plVar6 = (long *)param_1[0xc2];
  }
  else {
    FUN_00d60d20(param_1 + 0xc4);
    plVar6 = (long *)param_1[0xc2];
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  plVar6 = (long *)param_1[0xbd];
  if (plVar6 == (long *)0x0) {
LAB_00d609ac:
    plVar6 = (long *)param_1[0xbc];
    if (plVar6 == (long *)0x0) goto LAB_00d609cc;
LAB_00d609b4:
    plVar2 = plVar6 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 != 0) goto LAB_00d609cc;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0xbb];
    if (plVar6 != (long *)0x0) goto LAB_00d609d4;
LAB_00d609ec:
    plVar6 = (long *)param_1[0xba];
    if (plVar6 == (long *)0x0) goto LAB_00d60a0c;
LAB_00d609f4:
    plVar2 = plVar6 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 != 0) goto LAB_00d60a0c;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0xb9];
    if (plVar6 != (long *)0x0) goto LAB_00d60a14;
LAB_00d60a2c:
    plVar6 = (long *)param_1[0xb8];
  }
  else {
    plVar2 = plVar6 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 != 0) goto LAB_00d609ac;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0xbc];
    if (plVar6 != (long *)0x0) goto LAB_00d609b4;
LAB_00d609cc:
    plVar6 = (long *)param_1[0xbb];
    if (plVar6 == (long *)0x0) goto LAB_00d609ec;
LAB_00d609d4:
    plVar2 = plVar6 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 != 0) goto LAB_00d609ec;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0xba];
    if (plVar6 != (long *)0x0) goto LAB_00d609f4;
LAB_00d60a0c:
    plVar6 = (long *)param_1[0xb9];
    if (plVar6 == (long *)0x0) goto LAB_00d60a2c;
LAB_00d60a14:
    plVar2 = plVar6 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 != 0) goto LAB_00d60a2c;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0xb8];
  }
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar6 + 0x10))();
      plVar6 = (long *)param_1[0xb7];
      goto joined_r0x00d60b04;
    }
  }
  plVar6 = (long *)param_1[0xb7];
joined_r0x00d60b04:
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  FUN_00d415d4(param_1);
  return;
}


