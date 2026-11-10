/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0137cec0; name: FUN_0137cec0
 */


void FUN_0137cec0(undefined8 *param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  
  *param_1 = &PTR_FUN_04207d08;
  param_1[9] = &PTR_LAB_04207da8;
  param_1[10] = &PTR_LAB_04207df0;
  plVar6 = (long *)param_1[0x437];
  if (plVar6 == (long *)0x0) {
LAB_0137cf08:
    plVar6 = (long *)param_1[0x436];
    if (plVar6 == (long *)0x0) goto LAB_0137cf28;
LAB_0137cf10:
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
    if (iVar5 != 0) goto LAB_0137cf28;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x435];
    if (plVar6 != (long *)0x0) goto LAB_0137cf30;
LAB_0137cf48:
    plVar6 = (long *)param_1[0x434];
    if (plVar6 == (long *)0x0) goto LAB_0137cf68;
LAB_0137cf50:
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
    if (iVar5 != 0) goto LAB_0137cf68;
    (**(code **)(*plVar6 + 0x10))();
    pcVar7 = (code *)param_1[0x11f];
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
    if (iVar5 != 0) goto LAB_0137cf08;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x436];
    if (plVar6 != (long *)0x0) goto LAB_0137cf10;
LAB_0137cf28:
    plVar6 = (long *)param_1[0x435];
    if (plVar6 == (long *)0x0) goto LAB_0137cf48;
LAB_0137cf30:
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
    if (iVar5 != 0) goto LAB_0137cf48;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x434];
    if (plVar6 != (long *)0x0) goto LAB_0137cf50;
LAB_0137cf68:
    pcVar7 = (code *)param_1[0x11f];
  }
  if (pcVar7 != (code *)0x0) {
    param_1[0x121] = 0;
    param_1[0x120] = 0;
    param_1[0x11f] = 0;
    param_1[0x11e] = 0;
    (*pcVar7)(param_1 + 0x122);
  }
  pcVar7 = (code *)param_1[0x10f];
  if (pcVar7 == (code *)0x0) {
    pcVar7 = (code *)param_1[0xff];
    if (pcVar7 == (code *)0x0) goto LAB_0137cf98;
LAB_0137d17c:
    param_1[0x101] = 0;
    param_1[0x100] = 0;
    param_1[0xff] = 0;
    param_1[0xfe] = 0;
    (*pcVar7)(param_1 + 0x102);
    plVar6 = (long *)param_1[0xfd];
  }
  else {
    param_1[0x111] = 0;
    param_1[0x110] = 0;
    param_1[0x10f] = 0;
    param_1[0x10e] = 0;
    (*pcVar7)(param_1 + 0x112);
    pcVar7 = (code *)param_1[0xff];
    if (pcVar7 != (code *)0x0) goto LAB_0137d17c;
LAB_0137cf98:
    plVar6 = (long *)param_1[0xfd];
  }
  if (plVar6 != (long *)0x0) {
    lVar8 = plVar6[0xb];
    piVar2 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))();
    }
  }
  plVar6 = (long *)param_1[0xfa];
  param_1[0xf6] = &PTR_LAB_04207cc8;
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
  plVar6 = (long *)param_1[0xf3];
  param_1[0xef] = &PTR_LAB_04207cc8;
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
  plVar6 = (long *)param_1[0xec];
  param_1[0xe8] = &PTR_LAB_04207cc8;
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
  plVar6 = (long *)param_1[0xe5];
  param_1[0xe1] = &PTR_LAB_04207cc8;
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
  plVar6 = (long *)param_1[0xde];
  param_1[0xda] = &PTR_LAB_04207cc8;
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
  plVar6 = (long *)param_1[0xd7];
  param_1[0xd3] = &PTR_LAB_04207cc8;
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
  plVar6 = (long *)param_1[0xd0];
  param_1[0xcc] = &PTR_LAB_04207cc8;
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
  plVar6 = (long *)param_1[0xc9];
  param_1[0xc5] = &PTR_LAB_04207cc8;
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
  plVar6 = (long *)param_1[0xc2];
  param_1[0xbe] = &PTR_LAB_04207cc8;
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
  plVar6 = (long *)param_1[0xbb];
  param_1[0xb7] = &PTR_LAB_04207cc8;
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
      plVar6 = (long *)param_1[0xb6];
      goto joined_r0x0137d130;
    }
  }
  plVar6 = (long *)param_1[0xb6];
joined_r0x0137d130:
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
  FUN_00d415d4(param_1);
  return;
}


