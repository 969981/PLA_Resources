/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c1f8f0; name: FUN_02c1f8f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c1f8f0(long param_1)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  
  FUN_02c1b188(*(undefined8 *)(param_1 + 0x58));
  iVar2 = *(int *)(*(long *)(param_1 + 0x58) + 0x90);
  lVar8 = **(long **)(**(long **)(param_1 + 0x60) + 0x58);
  plVar6 = (long *)**(long **)(lVar8 + 0x78);
  if (plVar6 == (long *)0x0) {
    _DAT_00000124 = iVar2;
  }
  else {
    plVar1 = plVar6 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(int *)((long)plVar6 + 0x124) = iVar2;
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
  *(uint *)(lVar8 + 0x178) = *(uint *)(lVar8 + 0x178) | 0x40;
  if (iVar2 == 0) {
    lVar8 = **(long **)(*(long *)(param_1 + 0x58) + 0x58);
    FUN_02bc0574(lVar8);
    puVar7 = *(undefined8 **)(lVar8 + 0xa8);
    *puVar7 = 0;
    puVar7[1] = 0;
  }
  iVar2 = *(int *)(*(long *)(param_1 + 0x58) + 0x94);
  lVar8 = **(long **)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x58);
  plVar6 = *(long **)(*(long *)(lVar8 + 0x78) + 8);
  if (plVar6 == (long *)0x0) {
    _DAT_00000124 = iVar2;
  }
  else {
    plVar1 = plVar6 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(int *)((long)plVar6 + 0x124) = iVar2;
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
  *(uint *)(lVar8 + 0x178) = *(uint *)(lVar8 + 0x178) | 0x40;
  if (iVar2 == 0) {
    lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x58) + 8);
    FUN_02bc0574(lVar8);
    puVar7 = *(undefined8 **)(lVar8 + 0xa8);
    *puVar7 = 0;
    puVar7[1] = 0;
  }
  iVar2 = *(int *)(*(long *)(param_1 + 0x58) + 0x98);
  lVar8 = **(long **)(*(long *)(*(long *)(param_1 + 0x60) + 0x10) + 0x58);
  plVar6 = *(long **)(*(long *)(lVar8 + 0x78) + 0x10);
  if (plVar6 == (long *)0x0) {
    _DAT_00000124 = iVar2;
  }
  else {
    plVar1 = plVar6 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(int *)((long)plVar6 + 0x124) = iVar2;
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
  *(uint *)(lVar8 + 0x178) = *(uint *)(lVar8 + 0x178) | 0x40;
  if (iVar2 == 0) {
    lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x58) + 0x10);
    FUN_02bc0574(lVar8);
    puVar7 = *(undefined8 **)(lVar8 + 0xa8);
    *puVar7 = 0;
    puVar7[1] = 0;
  }
  iVar2 = *(int *)(*(long *)(param_1 + 0x58) + 0x9c);
  lVar8 = **(long **)(*(long *)(*(long *)(param_1 + 0x60) + 0x18) + 0x58);
  plVar6 = *(long **)(*(long *)(lVar8 + 0x78) + 0x18);
  if (plVar6 == (long *)0x0) {
    _DAT_00000124 = iVar2;
  }
  else {
    plVar1 = plVar6 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(int *)((long)plVar6 + 0x124) = iVar2;
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
  *(uint *)(lVar8 + 0x178) = *(uint *)(lVar8 + 0x178) | 0x40;
  if (iVar2 == 0) {
    lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x58) + 0x18);
    FUN_02bc0574(lVar8);
    puVar7 = *(undefined8 **)(lVar8 + 0xa8);
    *puVar7 = 0;
    puVar7[1] = 0;
  }
  iVar2 = *(int *)(*(long *)(param_1 + 0x58) + 0xa0);
  lVar8 = **(long **)(*(long *)(*(long *)(param_1 + 0x60) + 0x20) + 0x58);
  plVar6 = *(long **)(*(long *)(lVar8 + 0x78) + 0x20);
  if (plVar6 == (long *)0x0) {
    _DAT_00000124 = iVar2;
  }
  else {
    plVar1 = plVar6 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(int *)((long)plVar6 + 0x124) = iVar2;
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
  *(uint *)(lVar8 + 0x178) = *(uint *)(lVar8 + 0x178) | 0x40;
  if (iVar2 == 0) {
    lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x58) + 0x20);
    FUN_02bc0574(lVar8);
    puVar7 = *(undefined8 **)(lVar8 + 0xa8);
    *puVar7 = 0;
    puVar7[1] = 0;
  }
  iVar2 = *(int *)(*(long *)(param_1 + 0x58) + 0xa4);
  lVar8 = **(long **)(*(long *)(*(long *)(param_1 + 0x60) + 0x28) + 0x58);
  plVar6 = *(long **)(*(long *)(lVar8 + 0x78) + 0x28);
  if (plVar6 == (long *)0x0) {
    _DAT_00000124 = iVar2;
  }
  else {
    plVar1 = plVar6 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(int *)((long)plVar6 + 0x124) = iVar2;
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
  *(uint *)(lVar8 + 0x178) = *(uint *)(lVar8 + 0x178) | 0x40;
  if (iVar2 == 0) {
    lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x58) + 0x28);
    FUN_02bc0574(lVar8);
    puVar7 = *(undefined8 **)(lVar8 + 0xa8);
    *puVar7 = 0;
    puVar7[1] = 0;
  }
  iVar2 = *(int *)(*(long *)(param_1 + 0x58) + 0xa8);
  lVar8 = **(long **)(*(long *)(*(long *)(param_1 + 0x60) + 0x30) + 0x58);
  plVar6 = *(long **)(*(long *)(lVar8 + 0x78) + 0x30);
  if (plVar6 == (long *)0x0) {
    _DAT_00000124 = iVar2;
  }
  else {
    plVar1 = plVar6 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(int *)((long)plVar6 + 0x124) = iVar2;
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
  *(uint *)(lVar8 + 0x178) = *(uint *)(lVar8 + 0x178) | 0x40;
  if (iVar2 == 0) {
    lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x58) + 0x30);
    FUN_02bc0574(lVar8);
    puVar7 = *(undefined8 **)(lVar8 + 0xa8);
    *puVar7 = 0;
    puVar7[1] = 0;
  }
  iVar2 = *(int *)(*(long *)(param_1 + 0x58) + 0xac);
  lVar8 = **(long **)(*(long *)(*(long *)(param_1 + 0x60) + 0x38) + 0x58);
  plVar6 = *(long **)(*(long *)(lVar8 + 0x78) + 0x38);
  if (plVar6 == (long *)0x0) {
    _DAT_00000124 = iVar2;
  }
  else {
    plVar1 = plVar6 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(int *)((long)plVar6 + 0x124) = iVar2;
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
  *(uint *)(lVar8 + 0x178) = *(uint *)(lVar8 + 0x178) | 0x40;
  if (iVar2 == 0) {
    lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x58) + 0x38);
    FUN_02bc0574(lVar8);
    puVar7 = *(undefined8 **)(lVar8 + 0xa8);
    *puVar7 = 0;
    puVar7[1] = 0;
  }
  iVar2 = *(int *)(*(long *)(param_1 + 0x58) + 0xb0);
  lVar8 = **(long **)(*(long *)(*(long *)(param_1 + 0x60) + 0x40) + 0x58);
  plVar6 = *(long **)(*(long *)(lVar8 + 0x78) + 0x40);
  if (plVar6 == (long *)0x0) {
    _DAT_00000124 = iVar2;
  }
  else {
    plVar1 = plVar6 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(int *)((long)plVar6 + 0x124) = iVar2;
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
  *(uint *)(lVar8 + 0x178) = *(uint *)(lVar8 + 0x178) | 0x40;
  if (iVar2 == 0) {
    lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x58) + 0x40);
    FUN_02bc0574(lVar8);
    puVar7 = *(undefined8 **)(lVar8 + 0xa8);
    *puVar7 = 0;
    puVar7[1] = 0;
  }
  return;
}


