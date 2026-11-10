/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ae33ac; name: FUN_02ae33ac
 */


void FUN_02ae33ac(undefined8 *param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_04282ff0;
  if (*(char *)(param_1 + 0x155) != '\0') {
    if ((long *)param_1[0x159] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x159] + 0x20))();
    }
    *(undefined1 *)(param_1 + 0x155) = 0;
  }
  if (*(char *)(param_1 + 0x150) != '\0') {
    if ((long *)param_1[0x154] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x154] + 0x20))();
    }
    *(undefined1 *)(param_1 + 0x150) = 0;
  }
  if (*(char *)(param_1 + 0x14b) != '\0') {
    if ((long *)param_1[0x14f] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x14f] + 0x20))();
    }
    *(undefined1 *)(param_1 + 0x14b) = 0;
  }
  if (*(char *)(param_1 + 0x146) != '\0') {
    if ((long *)param_1[0x14a] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x14a] + 0x20))();
    }
    *(undefined1 *)(param_1 + 0x146) = 0;
  }
  if (*(char *)(param_1 + 0x141) != '\0') {
    if ((long *)param_1[0x145] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x145] + 0x20))();
    }
    *(undefined1 *)(param_1 + 0x141) = 0;
  }
  plVar6 = (long *)param_1[0x140];
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
  FUN_02ae4028(param_1 + 0x13a);
  plVar6 = (long *)param_1[0x139];
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
  FUN_02ae4028(param_1 + 0x133);
  plVar6 = (long *)param_1[0x132];
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
  FUN_02ae4028(param_1 + 300);
  plVar6 = (long *)param_1[299];
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
  FUN_02ae4028(param_1 + 0x125);
  plVar6 = (long *)param_1[0x124];
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
  FUN_02ae4028(param_1 + 0x11e);
  plVar6 = (long *)param_1[0x11d];
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
  param_1[0x117] = &PTR_LAB_042830c0;
  FUN_02ae328c(param_1 + 0x117);
  plVar6 = (long *)param_1[0x11c];
  if (plVar6 == (long *)0x0) {
LAB_02ae3588:
    plVar6 = (long *)param_1[0x11b];
    if (plVar6 == (long *)0x0) goto LAB_02ae35a8;
LAB_02ae3590:
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
    if (iVar5 != 0) goto LAB_02ae35a8;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x11a];
    if (plVar6 != (long *)0x0) goto LAB_02ae35b0;
LAB_02ae35c8:
    plVar6 = (long *)param_1[0x118];
    if (plVar6 == (long *)0x0) goto LAB_02ae35ec;
LAB_02ae35d0:
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
    if (iVar5 + -1 != 0) goto LAB_02ae35ec;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x116];
    if (plVar6 != (long *)0x0) goto LAB_02ae35f4;
LAB_02ae360c:
    plVar6 = (long *)param_1[0x115];
  }
  else {
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
    if (iVar5 + -1 != 0) goto LAB_02ae3588;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x11b];
    if (plVar6 != (long *)0x0) goto LAB_02ae3590;
LAB_02ae35a8:
    plVar6 = (long *)param_1[0x11a];
    if (plVar6 == (long *)0x0) goto LAB_02ae35c8;
LAB_02ae35b0:
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
    if (iVar5 != 0) goto LAB_02ae35c8;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x118];
    if (plVar6 != (long *)0x0) goto LAB_02ae35d0;
LAB_02ae35ec:
    plVar6 = (long *)param_1[0x116];
    if (plVar6 == (long *)0x0) goto LAB_02ae360c;
LAB_02ae35f4:
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
    if (iVar5 != 0) goto LAB_02ae360c;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x115];
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
  FUN_009849e8(param_1 + 0x10f);
  plVar6 = (long *)param_1[0x10e];
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
  FUN_009849e8(param_1 + 0x108);
  plVar6 = (long *)param_1[0x107];
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
  FUN_02ae4028(param_1 + 0x101);
  plVar6 = (long *)param_1[0x100];
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
  FUN_02ae4028(param_1 + 0xfa);
  plVar6 = (long *)param_1[0xf9];
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
  FUN_02ae4028(param_1 + 0xf3);
  plVar6 = (long *)param_1[0xf2];
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
  FUN_02ae4028(param_1 + 0xec);
  plVar6 = (long *)param_1[0xeb];
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
  FUN_02ae4028(param_1 + 0xe5);
  plVar6 = (long *)param_1[0xe4];
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
  FUN_02ae4028(param_1 + 0xde);
  plVar6 = (long *)param_1[0xdd];
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
  FUN_02ae4028(param_1 + 0xd7);
  plVar6 = (long *)param_1[0xd6];
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
  FUN_009849e8(param_1 + 0xd0);
  if (*(char *)(param_1 + 0xcb) != '\0') {
    if ((long *)param_1[0xcf] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0xcf] + 0x20))();
    }
    *(undefined1 *)(param_1 + 0xcb) = 0;
  }
  FUN_02ae4140(param_1 + 0xc5);
  if (*(char *)(param_1 + 0xc0) != '\0') {
    if ((long *)param_1[0xc4] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0xc4] + 0x20))();
    }
    *(undefined1 *)(param_1 + 0xc0) = 0;
  }
  FUN_02ae4140(param_1 + 0xba);
  if (*(char *)(param_1 + 0xb5) != '\0') {
    if ((long *)param_1[0xb9] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0xb9] + 0x20))();
    }
    *(undefined1 *)(param_1 + 0xb5) = 0;
  }
  FUN_02ae4140(param_1 + 0xaf);
  if (*(char *)(param_1 + 0xaa) != '\0') {
    if ((long *)param_1[0xae] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0xae] + 0x20))();
    }
    *(undefined1 *)(param_1 + 0xaa) = 0;
  }
  FUN_02ae4140(param_1 + 0xa4);
  if (*(char *)(param_1 + 0x9f) != '\0') {
    if ((long *)param_1[0xa3] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0xa3] + 0x20))();
    }
    *(undefined1 *)(param_1 + 0x9f) = 0;
  }
  FUN_02ae4140(param_1 + 0x99);
  if (*(char *)(param_1 + 0x94) != '\0') {
    if ((long *)param_1[0x98] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x98] + 0x20))();
    }
    *(undefined1 *)(param_1 + 0x94) = 0;
  }
  FUN_02ae4140(param_1 + 0x8e);
  if (*(char *)(param_1 + 0x89) != '\0') {
    if ((long *)param_1[0x8d] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x8d] + 0x20))();
    }
    *(undefined1 *)(param_1 + 0x89) = 0;
  }
  FUN_02ae4140(param_1 + 0x83);
  if (*(char *)(param_1 + 0x7e) != '\0') {
    if ((long *)param_1[0x82] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x82] + 0x20))();
    }
    *(undefined1 *)(param_1 + 0x7e) = 0;
  }
  FUN_02ae4140(param_1 + 0x78);
  if (*(char *)(param_1 + 0x73) != '\0') {
    if ((long *)param_1[0x77] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x77] + 0x20))();
    }
    *(undefined1 *)(param_1 + 0x73) = 0;
  }
  FUN_02ae4140(param_1 + 0x6d);
  plVar6 = (long *)param_1[0x6c];
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
  FUN_02ae4028(param_1 + 0x66);
  plVar6 = (long *)param_1[0x65];
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
  FUN_02ae4028(param_1 + 0x5f);
  plVar6 = (long *)param_1[0x5e];
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
  FUN_02ae4028(param_1 + 0x58);
  plVar6 = (long *)param_1[0x57];
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
  FUN_02ae4028(param_1 + 0x51);
  plVar6 = (long *)param_1[0x50];
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
  FUN_02ae4028(param_1 + 0x4a);
  plVar6 = (long *)param_1[0x49];
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
  FUN_02ae4028(param_1 + 0x43);
  plVar6 = (long *)param_1[0x42];
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
  FUN_02ae4028(param_1 + 0x3c);
  plVar6 = (long *)param_1[0x3b];
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
  FUN_02ae4028(param_1 + 0x35);
  plVar6 = (long *)param_1[0x34];
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
  FUN_02ae4028(param_1 + 0x2e);
  plVar6 = (long *)param_1[0x2d];
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
  FUN_02ae4028(param_1 + 0x27);
  plVar6 = (long *)param_1[0x26];
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
  FUN_02ae4028(param_1 + 0x20);
  plVar6 = (long *)param_1[0x1f];
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
  FUN_02ae4028(param_1 + 0x19);
  plVar6 = (long *)param_1[0x18];
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
  FUN_02ae4028(param_1 + 0x12);
  plVar6 = (long *)param_1[0x11];
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
  FUN_02ae4028(param_1 + 0xb);
  plVar6 = (long *)param_1[10];
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
  FUN_02ae4028(param_1 + 4);
  plVar6 = (long *)param_1[3];
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
      plVar6 = (long *)param_1[2];
      goto joined_r0x02ae3b80;
    }
  }
  plVar6 = (long *)param_1[2];
joined_r0x02ae3b80:
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
                    /* WARNING: Could not recover jumptable at 0x02ae3e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x10))();
      return;
    }
  }
  return;
}


