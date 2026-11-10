/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b2aa30; name: FUN_01b2aa30
 */


void FUN_01b2aa30(undefined1 *param_1,undefined1 *param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  
  *param_1 = *param_2;
  FUN_01b34664(param_1 + 0x10,param_2 + 0x10);
  plVar6 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
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
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = 0;
  plVar6 = *(long **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar7;
  *(undefined8 *)(param_1 + 0x28) = 0;
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
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  plVar6 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar7;
  *(undefined8 *)(param_1 + 0x30) = 0;
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
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  plVar6 = *(long **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar7;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  plVar6 = *(long **)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  uVar7 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x58) = uVar7;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  FUN_01b34664(param_1 + 0x70,param_2 + 0x70);
  plVar6 = *(long **)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
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
  uVar7 = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_2 + 0x80) = 0;
  plVar6 = *(long **)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = uVar7;
  *(undefined8 *)(param_1 + 0x88) = 0;
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
  uVar7 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_2 + 0x88) = 0;
  plVar6 = *(long **)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = uVar7;
  *(undefined8 *)(param_1 + 0x90) = 0;
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
  uVar7 = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_2 + 0x90) = 0;
  plVar6 = *(long **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = uVar7;
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  uVar7 = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x98) = uVar7;
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  plVar6 = *(long **)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  uVar7 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_2 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb8) = uVar7;
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  FUN_01b34664(param_1 + 0xd0,param_2 + 0xd0);
  plVar6 = *(long **)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
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
  uVar7 = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_2 + 0xe0) = 0;
  plVar6 = *(long **)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe0) = uVar7;
  *(undefined8 *)(param_1 + 0xe8) = 0;
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
  uVar7 = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_2 + 0xe8) = 0;
  plVar6 = *(long **)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xe8) = uVar7;
  *(undefined8 *)(param_1 + 0xf0) = 0;
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
  uVar7 = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_2 + 0xf0) = 0;
  plVar6 = *(long **)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf0) = uVar7;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  uVar7 = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_2 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf8) = uVar7;
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x108);
  plVar6 = *(long **)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x118) = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  uVar7 = *(undefined8 *)(param_2 + 0x118);
  *(undefined8 *)(param_2 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x118) = uVar7;
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
  FUN_01b34664(param_1 + 0x130,param_2 + 0x130);
  plVar6 = *(long **)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x140) = 0;
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
  uVar7 = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(param_2 + 0x140) = 0;
  plVar6 = *(long **)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 0x140) = uVar7;
  *(undefined8 *)(param_1 + 0x148) = 0;
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
  uVar7 = *(undefined8 *)(param_2 + 0x148);
  *(undefined8 *)(param_2 + 0x148) = 0;
  plVar6 = *(long **)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x148) = uVar7;
  *(undefined8 *)(param_1 + 0x150) = 0;
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
  uVar7 = *(undefined8 *)(param_2 + 0x150);
  *(undefined8 *)(param_2 + 0x150) = 0;
  plVar6 = *(long **)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x150) = uVar7;
  *(undefined8 *)(param_1 + 0x158) = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  uVar7 = *(undefined8 *)(param_2 + 0x158);
  *(undefined8 *)(param_2 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x158) = uVar7;
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x160);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  plVar6 = *(long **)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_2 + 0x170);
  *(undefined8 *)(param_1 + 0x178) = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  uVar7 = *(undefined8 *)(param_2 + 0x178);
  *(undefined8 *)(param_2 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x178) = uVar7;
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x180);
  FUN_01b34664(param_1 + 400,param_2 + 400);
  plVar6 = *(long **)(param_1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x1a0) = 0;
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
  uVar7 = *(undefined8 *)(param_2 + 0x1a0);
  *(undefined8 *)(param_2 + 0x1a0) = 0;
  plVar6 = *(long **)(param_1 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1a0) = uVar7;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
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
  uVar7 = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined8 *)(param_2 + 0x1a8) = 0;
  plVar6 = *(long **)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar7;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
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
  uVar7 = *(undefined8 *)(param_2 + 0x1b0);
  *(undefined8 *)(param_2 + 0x1b0) = 0;
  plVar6 = *(long **)(param_1 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1b0) = uVar7;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  uVar7 = *(undefined8 *)(param_2 + 0x1b8);
  *(undefined8 *)(param_2 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = uVar7;
  *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_2 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_2 + 0x1c8);
  plVar6 = *(long **)(param_1 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_2 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  uVar7 = *(undefined8 *)(param_2 + 0x1d8);
  *(undefined8 *)(param_2 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = uVar7;
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 0x1e0);
  FUN_01b34664(param_1 + 0x1f0,param_2 + 0x1f0);
  plVar6 = *(long **)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x200) = 0;
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
  uVar7 = *(undefined8 *)(param_2 + 0x200);
  *(undefined8 *)(param_2 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x200) = uVar7;
  plVar6 = *(long **)(param_1 + 0x208);
  *(undefined8 *)(param_1 + 0x208) = 0;
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
  uVar7 = *(undefined8 *)(param_2 + 0x208);
  *(undefined8 *)(param_2 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x208) = uVar7;
  plVar6 = *(long **)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0x210) = 0;
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
  uVar7 = *(undefined8 *)(param_2 + 0x210);
  *(undefined8 *)(param_2 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x210) = uVar7;
  plVar6 = *(long **)(param_1 + 0x218);
  *(undefined8 *)(param_1 + 0x218) = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  uVar7 = *(undefined8 *)(param_2 + 0x218);
  *(undefined8 *)(param_2 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x218) = uVar7;
  *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(param_2 + 0x220);
  *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)(param_2 + 0x228);
  uVar7 = *(undefined8 *)(param_2 + 0x230);
  plVar6 = *(long **)(param_1 + 0x238);
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x230) = uVar7;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  uVar7 = *(undefined8 *)(param_2 + 0x238);
  *(undefined8 *)(param_2 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x238) = uVar7;
  *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_2 + 0x240);
  return;
}


