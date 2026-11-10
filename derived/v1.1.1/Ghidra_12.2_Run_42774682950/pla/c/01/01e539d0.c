/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e539d0; name: FUN_01e539d0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01e539d0(long param_1)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  long *local_150;
  long *local_148;
  long *local_140;
  long *local_138;
  long *local_130;
  long *local_128;
  long *local_120;
  long *local_118;
  long *local_110;
  long *local_108;
  long *local_100;
  long *local_f8;
  long *local_f0;
  long *local_e8;
  long local_e0 [14];
  undefined1 auStack_70 [16];
  
  local_e0[0] = 0;
  lVar9 = FUN_00957dc4(auStack_70,*(undefined8 *)(param_1 + 8),local_e0);
  *(ulong *)(lVar9 + 0x1e0) = *(ulong *)(lVar9 + 0x1e0) | 8;
  if (lVar9 != 0) {
    lVar14 = *(long *)(lVar9 + 0x58);
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_01e553a8;
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar17 = (long *)(param_1 + 0xd0);
  lVar14 = *plVar17;
  plVar11 = *(long **)(lVar14 + 0x68);
  *(undefined8 *)(lVar14 + 0x68) = 0;
  if (plVar11 != (long *)0x0) {
    lVar12 = plVar11[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))();
    }
  }
  *(long *)(lVar14 + 0x68) = lVar9;
  local_e0[0] = 0;
  lVar9 = FUN_00957dc4(auStack_70,*(undefined8 *)(param_1 + 8),local_e0);
  *(ulong *)(lVar9 + 0x1e0) = *(ulong *)(lVar9 + 0x1e0) | 8;
  if (lVar9 != 0) {
    lVar14 = *(long *)(lVar9 + 0x58);
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_01e553a8;
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar14 = *plVar17;
  plVar11 = *(long **)(lVar14 + 0x70);
  *(undefined8 *)(lVar14 + 0x70) = 0;
  if (plVar11 != (long *)0x0) {
    lVar12 = plVar11[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))();
    }
  }
  *(long *)(lVar14 + 0x70) = lVar9;
  lVar9 = FUN_009584a0(local_e0,*(undefined8 *)(param_1 + 8));
  *(ulong *)(lVar9 + 0x1e0) = *(ulong *)(lVar9 + 0x1e0) | 8;
  if (lVar9 != 0) {
    lVar14 = *(long *)(lVar9 + 0x58);
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_01e553a8;
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar14 = *plVar17;
  plVar11 = *(long **)(lVar14 + 0x78);
  *(undefined8 *)(lVar14 + 0x78) = 0;
  if (plVar11 != (long *)0x0) {
    lVar12 = plVar11[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))();
    }
  }
  *(long *)(lVar14 + 0x78) = lVar9;
  lVar9 = FUN_009584a0(local_e0,*(undefined8 *)(param_1 + 8));
  *(ulong *)(lVar9 + 0x1e0) = *(ulong *)(lVar9 + 0x1e0) | 8;
  if (lVar9 != 0) {
    lVar14 = *(long *)(lVar9 + 0x58);
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_01e553a8;
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar14 = *plVar17;
  plVar11 = *(long **)(lVar14 + 0x80);
  *(undefined8 *)(lVar14 + 0x80) = 0;
  if (plVar11 != (long *)0x0) {
    lVar12 = plVar11[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))();
    }
  }
  *(long *)(lVar14 + 0x80) = lVar9;
  lVar9 = FUN_009584a0(local_e0,*(undefined8 *)(param_1 + 8));
  *(ulong *)(lVar9 + 0x1e0) = *(ulong *)(lVar9 + 0x1e0) | 8;
  if (lVar9 != 0) {
    lVar14 = *(long *)(lVar9 + 0x58);
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_01e553a8;
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar14 = *plVar17;
  plVar11 = *(long **)(lVar14 + 0x88);
  *(undefined8 *)(lVar14 + 0x88) = 0;
  if (plVar11 != (long *)0x0) {
    lVar12 = plVar11[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))();
    }
  }
  *(long *)(lVar14 + 0x88) = lVar9;
  lVar9 = FUN_00958ac0(local_e0,*(undefined8 *)(param_1 + 8));
  *(ulong *)(lVar9 + 0x1e0) = *(ulong *)(lVar9 + 0x1e0) | 8;
  if (lVar9 != 0) {
    lVar14 = *(long *)(lVar9 + 0x58);
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_01e553a8;
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar14 = *plVar17;
  plVar11 = *(long **)(lVar14 + 0x90);
  *(undefined8 *)(lVar14 + 0x90) = 0;
  if (plVar11 != (long *)0x0) {
    lVar12 = plVar11[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))();
    }
  }
  *(long *)(lVar14 + 0x90) = lVar9;
  lVar9 = FUN_00958ac0(local_e0,*(undefined8 *)(param_1 + 8));
  *(ulong *)(lVar9 + 0x1e0) = *(ulong *)(lVar9 + 0x1e0) | 8;
  if (lVar9 != 0) {
    lVar14 = *(long *)(lVar9 + 0x58);
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_01e553a8;
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar14 = *plVar17;
  plVar11 = *(long **)(lVar14 + 0x98);
  *(undefined8 *)(lVar14 + 0x98) = 0;
  if (plVar11 != (long *)0x0) {
    lVar12 = plVar11[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))();
    }
  }
  *(long *)(lVar14 + 0x98) = lVar9;
  local_e0[0] = 0;
  lVar9 = FUN_00957dc4(auStack_70,*(undefined8 *)(param_1 + 8),local_e0);
  *(ulong *)(lVar9 + 0x1e0) = *(ulong *)(lVar9 + 0x1e0) | 8;
  if (lVar9 != 0) {
    lVar14 = *(long *)(lVar9 + 0x58);
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_01e553a8;
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar14 = *plVar17;
  plVar11 = *(long **)(lVar14 + 0xa0);
  *(undefined8 *)(lVar14 + 0xa0) = 0;
  if (plVar11 != (long *)0x0) {
    lVar12 = plVar11[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))();
    }
  }
  *(long *)(lVar14 + 0xa0) = lVar9;
  lVar9 = FUN_009584a0(local_e0,*(undefined8 *)(param_1 + 8));
  *(ulong *)(lVar9 + 0x1e0) = *(ulong *)(lVar9 + 0x1e0) | 8;
  if (lVar9 != 0) {
    lVar14 = *(long *)(lVar9 + 0x58);
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_01e553a8;
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar14 = *plVar17;
  plVar11 = *(long **)(lVar14 + 0xa8);
  *(undefined8 *)(lVar14 + 0xa8) = 0;
  if (plVar11 != (long *)0x0) {
    lVar12 = plVar11[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))();
    }
  }
  *(long *)(lVar14 + 0xa8) = lVar9;
  lVar9 = FUN_00958ac0(local_e0,*(undefined8 *)(param_1 + 8));
  *(ulong *)(lVar9 + 0x1e0) = *(ulong *)(lVar9 + 0x1e0) | 8;
  if (lVar9 != 0) {
    lVar14 = *(long *)(lVar9 + 0x58);
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_01e553a8;
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar14 = *plVar17;
  plVar11 = *(long **)(lVar14 + 0xb0);
  *(undefined8 *)(lVar14 + 0xb0) = 0;
  if (plVar11 != (long *)0x0) {
    lVar12 = plVar11[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))();
    }
  }
  *(long *)(lVar14 + 0xb0) = lVar9;
  lVar9 = FUN_00958ac0(local_e0,*(undefined8 *)(param_1 + 8));
  *(ulong *)(lVar9 + 0x1e0) = *(ulong *)(lVar9 + 0x1e0) | 8;
  if (lVar9 != 0) {
    lVar14 = *(long *)(lVar9 + 0x58);
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_01e553a8;
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar14 = *plVar17;
  plVar11 = *(long **)(lVar14 + 0xb8);
  *(undefined8 *)(lVar14 + 0xb8) = 0;
  if (plVar11 != (long *)0x0) {
    lVar12 = plVar11[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))();
    }
  }
  *(long *)(lVar14 + 0xb8) = lVar9;
  lVar9 = FUN_009584a0(local_e0,*(undefined8 *)(param_1 + 8));
  *(ulong *)(lVar9 + 0x1e0) = *(ulong *)(lVar9 + 0x1e0) | 8;
  if (lVar9 != 0) {
    lVar14 = *(long *)(lVar9 + 0x58);
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_01e553a8;
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar14 = *plVar17;
  plVar11 = *(long **)(lVar14 + 0xc0);
  *(undefined8 *)(lVar14 + 0xc0) = 0;
  if (plVar11 != (long *)0x0) {
    lVar12 = plVar11[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))();
    }
  }
  *(long *)(lVar14 + 0xc0) = lVar9;
  lVar9 = FUN_009584a0(local_e0,*(undefined8 *)(param_1 + 8));
  *(ulong *)(lVar9 + 0x1e0) = *(ulong *)(lVar9 + 0x1e0) | 8;
  if (lVar9 != 0) {
    lVar14 = *(long *)(lVar9 + 0x58);
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_01e553a8;
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar14 = *plVar17;
  plVar11 = *(long **)(lVar14 + 200);
  *(undefined8 *)(lVar14 + 200) = 0;
  if (plVar11 != (long *)0x0) {
    lVar12 = plVar11[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))();
    }
  }
  *(long *)(lVar14 + 200) = lVar9;
  lVar9 = FUN_00958ac0(local_e0,*(undefined8 *)(param_1 + 8));
  *(ulong *)(lVar9 + 0x1e0) = *(ulong *)(lVar9 + 0x1e0) | 8;
  if (lVar9 != 0) {
    lVar14 = *(long *)(lVar9 + 0x58);
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_01e553a8;
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar14 = *plVar17;
  plVar11 = *(long **)(lVar14 + 0xd0);
  *(undefined8 *)(lVar14 + 0xd0) = 0;
  if (plVar11 != (long *)0x0) {
    lVar12 = plVar11[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))();
    }
  }
  *(long *)(lVar14 + 0xd0) = lVar9;
  lVar9 = *plVar17;
  local_e8 = *(long **)(lVar9 + 0x68);
  if (local_e8 != (long *)0x0) {
    lVar9 = local_e8[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_01e553a8;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar9 = *plVar17;
  }
  local_f0 = *(long **)(lVar9 + 0x70);
  if (local_f0 != (long *)0x0) {
    lVar9 = local_f0[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_01e553a8;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar9 = *plVar17;
  }
  local_f8 = *(long **)(lVar9 + 0x78);
  if (local_f8 != (long *)0x0) {
    lVar9 = local_f8[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_01e553a8;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar9 = *plVar17;
  }
  local_100 = *(long **)(lVar9 + 0x80);
  if (local_100 != (long *)0x0) {
    lVar9 = local_100[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_01e553a8;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar9 = *plVar17;
  }
  local_108 = *(long **)(lVar9 + 0x88);
  if (local_108 != (long *)0x0) {
    lVar9 = local_108[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_01e553a8;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar9 = *plVar17;
  }
  local_110 = *(long **)(lVar9 + 0x90);
  if (local_110 != (long *)0x0) {
    lVar9 = local_110[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_01e553a8;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar9 = *plVar17;
  }
  local_118 = *(long **)(lVar9 + 0x98);
  if (local_118 != (long *)0x0) {
    lVar9 = local_118[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_01e553a8;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar9 = *plVar17;
  }
  local_120 = *(long **)(lVar9 + 0xa0);
  if (local_120 != (long *)0x0) {
    lVar9 = local_120[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_01e553a8;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar9 = *plVar17;
  }
  local_128 = *(long **)(lVar9 + 0xa8);
  if (local_128 != (long *)0x0) {
    lVar9 = local_128[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_01e553a8;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar9 = *plVar17;
  }
  local_130 = *(long **)(lVar9 + 0xb0);
  if (local_130 != (long *)0x0) {
    lVar9 = local_130[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_01e553a8;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar9 = *plVar17;
  }
  local_138 = *(long **)(lVar9 + 0xb8);
  if (local_138 != (long *)0x0) {
    lVar9 = local_138[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_01e553a8;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar9 = *plVar17;
  }
  local_140 = *(long **)(lVar9 + 0xc0);
  if (local_140 != (long *)0x0) {
    lVar9 = local_140[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_01e553a8;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar9 = *plVar17;
  }
  local_148 = *(long **)(lVar9 + 200);
  if (local_148 != (long *)0x0) {
    lVar9 = local_148[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_01e553a8;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar9 = *plVar17;
  }
  local_150 = *(long **)(lVar9 + 0xd0);
  if (local_150 == (long *)0x0) {
    plVar11 = (long *)0x0;
  }
  else {
    lVar9 = local_150[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_01e553a8;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar11 = local_150;
  }
  FUN_01e56518(local_e0,&local_e8,&local_f0,&local_f8,&local_100,&local_108,&local_110,&local_118,
               &local_120,&local_128,&local_130,&local_138,&local_140,&local_148,&local_150);
  FUN_0198abc4(*plVar17 + 0xd8,local_e0);
  FUN_0198afa4(local_e0);
  if (plVar11 != (long *)0x0) {
    lVar9 = plVar11[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
  }
  if (local_148 != (long *)0x0) {
    lVar9 = *(long *)((long)local_148 + 0x58);
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_148 + 0x20))();
    }
  }
  if (local_140 != (long *)0x0) {
    lVar9 = *(long *)((long)local_140 + 0x58);
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_140 + 0x20))();
    }
  }
  if (local_138 != (long *)0x0) {
    lVar9 = *(long *)((long)local_138 + 0x58);
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_138 + 0x20))();
    }
  }
  if (local_130 != (long *)0x0) {
    lVar9 = *(long *)((long)local_130 + 0x58);
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_130 + 0x20))();
    }
  }
  if (local_128 != (long *)0x0) {
    lVar9 = *(long *)((long)local_128 + 0x58);
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_128 + 0x20))();
    }
  }
  if (local_120 != (long *)0x0) {
    lVar9 = *(long *)((long)local_120 + 0x58);
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_120 + 0x20))();
    }
  }
  if (local_118 != (long *)0x0) {
    lVar9 = *(long *)((long)local_118 + 0x58);
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_118 + 0x20))();
    }
  }
  if (local_110 != (long *)0x0) {
    lVar9 = *(long *)((long)local_110 + 0x58);
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_110 + 0x20))();
    }
  }
  if (local_108 != (long *)0x0) {
    lVar9 = *(long *)((long)local_108 + 0x58);
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_108 + 0x20))();
    }
  }
  if (local_100 != (long *)0x0) {
    lVar9 = *(long *)((long)local_100 + 0x58);
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_100 + 0x20))();
    }
  }
  if (local_f8 != (long *)0x0) {
    lVar9 = local_f8[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_f8 + 0x20))();
    }
  }
  if (local_f0 != (long *)0x0) {
    lVar9 = local_f0[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_f0 + 0x20))();
    }
  }
  if (local_e8 != (long *)0x0) {
    lVar9 = local_e8[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_e8 + 0x20))();
    }
  }
  uVar10 = *(undefined8 *)(param_1 + 0xb8);
  lVar9 = *(long *)(param_1 + 0xd0);
  *(undefined8 *)(lVar9 + 0x148) = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(lVar9 + 0x150) = uVar10;
  lVar9 = *(long *)(*(long *)(param_1 + 0xd0) + 0x68);
  plVar11 = (long *)(*(code *)**(undefined8 **)(lVar9 + 0x50))((undefined8 *)(lVar9 + 0x50));
  puVar6 = PTR_DAT_0437b518;
  puVar5 = PTR_DAT_0437b510;
  if (((*PTR_DAT_0437b510 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b510), iVar8 != 0))
  {
    uVar10 = FUN_00d8faf4();
    *(undefined8 *)puVar6 = uVar10;
    __cxa_guard_release(PTR_DAT_0437b510);
  }
  for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
    if (plVar11 == (long *)puVar6) {
      pcVar13 = *(code **)(lVar9 + 0x3a8);
      if (pcVar13 != (code *)0x0) {
        *(undefined8 *)(lVar9 + 0x3b0) = 0;
        *(undefined8 *)(lVar9 + 0x3b8) = 0;
        *(undefined8 *)(lVar9 + 0x3a0) = 0;
        *(undefined8 *)(lVar9 + 0x3a8) = 0;
        (*pcVar13)(lVar9 + 0x3c0);
      }
      *(undefined1 **)(lVar9 + 0x3a0) = &LAB_01e5d59c;
      *(long *)(lVar9 + 0x3c0) = param_1;
      *(undefined1 **)(lVar9 + 0x3a8) = &LAB_01e5dac4;
      *(undefined1 **)(lVar9 + 0x3b0) = &LAB_01e5dac8;
      *(undefined1 **)(lVar9 + 0x3b8) = &LAB_01e5dad4;
      break;
    }
  }
  lVar9 = *(long *)(*plVar17 + 0x70);
  plVar11 = (long *)(*(code *)**(undefined8 **)(lVar9 + 0x50))((undefined8 *)(lVar9 + 0x50));
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b510), iVar8 != 0)) {
    uVar10 = FUN_00d8faf4();
    *(undefined8 *)puVar6 = uVar10;
    __cxa_guard_release(PTR_DAT_0437b510);
  }
  for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
    if (plVar11 == (long *)puVar6) {
      pcVar13 = *(code **)(lVar9 + 0x3a8);
      if (pcVar13 != (code *)0x0) {
        *(undefined8 *)(lVar9 + 0x3b0) = 0;
        *(undefined8 *)(lVar9 + 0x3b8) = 0;
        *(undefined8 *)(lVar9 + 0x3a0) = 0;
        *(undefined8 *)(lVar9 + 0x3a8) = 0;
        (*pcVar13)(lVar9 + 0x3c0);
      }
      *(undefined1 **)(lVar9 + 0x3a0) = &LAB_01e5dae0;
      *(long *)(lVar9 + 0x3c0) = param_1;
      *(undefined1 **)(lVar9 + 0x3a8) = &LAB_01e5dd00;
      *(undefined1 **)(lVar9 + 0x3b0) = &LAB_01e5dd04;
      *(undefined1 **)(lVar9 + 0x3b8) = &LAB_01e5dd10;
      break;
    }
  }
  lVar9 = *(long *)(*plVar17 + 0xa0);
  plVar11 = (long *)(*(code *)**(undefined8 **)(lVar9 + 0x50))((undefined8 *)(lVar9 + 0x50));
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b510), iVar8 != 0)) {
    uVar10 = FUN_00d8faf4();
    *(undefined8 *)puVar6 = uVar10;
    __cxa_guard_release(PTR_DAT_0437b510);
  }
  for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
    if (plVar11 == (long *)puVar6) {
      pcVar13 = *(code **)(lVar9 + 0x3a8);
      if (pcVar13 != (code *)0x0) {
        *(undefined8 *)(lVar9 + 0x3b0) = 0;
        *(undefined8 *)(lVar9 + 0x3b8) = 0;
        *(undefined8 *)(lVar9 + 0x3a0) = 0;
        *(undefined8 *)(lVar9 + 0x3a8) = 0;
        (*pcVar13)(lVar9 + 0x3c0);
      }
      *(undefined1 **)(lVar9 + 0x3a0) = &LAB_01e5dd1c;
      *(long *)(lVar9 + 0x3c0) = param_1;
      *(undefined1 **)(lVar9 + 0x3a8) = &LAB_01e5e6fc;
      *(undefined1 **)(lVar9 + 0x3b0) = &LAB_01e5e700;
      *(undefined1 **)(lVar9 + 0x3b8) = &LAB_01e5e70c;
      break;
    }
  }
  local_e0[0] = param_1;
  FUN_01e56950(*(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x78),local_e0);
  lVar9 = *(long *)(param_1 + 0x90);
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  uVar15 = *(undefined8 *)(param_1 + 0xa0);
  uVar10 = *(undefined8 *)(param_1 + 0x78);
  lVar14 = *(long *)(param_1 + 0x80);
  lVar16 = *(long *)(*(long *)(param_1 + 0xd0) + 0x68);
  lVar12 = nn::os::GetCurrentThread();
  plVar11 = (long *)(lVar16 + 0x208);
  do {
    if (*plVar11 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar16 + 0x1fc));
        while (*plVar11 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar12;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01e549a4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = lVar12;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01e549a4:
  FUN_02a70468(lVar16,uVar10,0);
  FUN_02a70468(lVar16,0,*(undefined8 *)(*plVar17 + 0x78));
  *(undefined8 *)(lVar16 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar16 + 0x1fc));
  *(undefined4 *)(*(long *)(*plVar17 + 0x78) + 0x380) = 1;
  lVar16 = *(long *)(*plVar17 + 0x80);
  lVar12 = nn::os::GetCurrentThread();
  plVar11 = (long *)(lVar16 + 0x208);
  do {
    if (*plVar11 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar16 + 0x1fc));
        while (*plVar11 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar12;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01e54a38;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = lVar12;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01e54a38:
  FUN_02a70468(lVar16,*(undefined8 *)(*plVar17 + 0x78),0);
  FUN_02a70468(lVar16,0,*(undefined8 *)(*plVar17 + 0x88));
  *(undefined8 *)(lVar16 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar16 + 0x1fc));
  lVar16 = *(long *)(*plVar17 + 0x90);
  lVar12 = nn::os::GetCurrentThread();
  plVar11 = (long *)(lVar16 + 0x208);
  do {
    if (*plVar11 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar16 + 0x1fc));
        while (*plVar11 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar12;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01e54ac0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = lVar12;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01e54ac0:
  FUN_02a70468(lVar16,*(undefined8 *)(*plVar17 + 0x88),0);
  FUN_02a70468(lVar16,0,*(undefined8 *)(*plVar17 + 0x98));
  lVar12 = nn::os::GetCurrentThread();
  plVar11 = (long *)(lVar14 + 0x208);
  do {
    if (*plVar11 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x1fc));
        while (*plVar11 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar12;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01e54b30;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = lVar12;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01e54b30:
  FUN_02a70468(lVar14,*(undefined8 *)(*plVar17 + 0x90),0);
  FUN_02a70468(lVar14,0,*(undefined8 *)(*plVar17 + 0x98));
  *(undefined8 *)(lVar14 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0x1fc));
  *(undefined8 *)(lVar16 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar16 + 0x1fc));
  lVar12 = *(long *)(*plVar17 + 0xa0);
  lVar14 = nn::os::GetCurrentThread();
  plVar11 = (long *)(lVar12 + 0x208);
  do {
    if (*plVar11 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x1fc));
        while (*plVar11 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar14;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01e54bc8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = lVar14;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01e54bc8:
  FUN_02a70468(lVar12,*(undefined8 *)(*plVar17 + 0x98),0);
  FUN_02a70468(lVar12,0,*(undefined8 *)(*plVar17 + 0xa8));
  FUN_02a70468(lVar12,uVar15,0);
  *(undefined8 *)(lVar12 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x1fc));
  lVar12 = *(long *)(*plVar17 + 0xb0);
  lVar14 = nn::os::GetCurrentThread();
  plVar11 = (long *)(lVar12 + 0x208);
  do {
    if (*plVar11 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x1fc));
        while (*plVar11 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar14;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01e54c60;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = lVar14;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01e54c60:
  FUN_02a70468(lVar12,*(undefined8 *)(*plVar17 + 0xa8),0);
  FUN_02a70468(lVar12,0,*(undefined8 *)(*plVar17 + 0xb8));
  lVar14 = nn::os::GetCurrentThread();
  plVar11 = (long *)(lVar9 + 0x208);
  do {
    if (*plVar11 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x1fc));
        while (*plVar11 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar14;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01e54cd0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = lVar14;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01e54cd0:
  FUN_02a70468(lVar9,*(undefined8 *)(*plVar17 + 0xb0),0);
  FUN_02a70468(lVar9,0,*(undefined8 *)(*plVar17 + 0xb8));
  *(undefined8 *)(lVar9 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x1fc));
  *(undefined8 *)(lVar12 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x1fc));
  lVar14 = *(long *)(*plVar17 + 0xc0);
  lVar9 = nn::os::GetCurrentThread();
  plVar11 = (long *)(lVar14 + 0x208);
  do {
    if (*plVar11 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x1fc));
        while (*plVar11 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01e54d68;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01e54d68:
  FUN_02a70468(lVar14,*(undefined8 *)(*plVar17 + 0xb8),0);
  FUN_02a70468(lVar14,0,*(undefined8 *)(*plVar17 + 200));
  *(undefined8 *)(lVar14 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0x1fc));
  lVar14 = *(long *)(*plVar17 + 0xd0);
  lVar9 = nn::os::GetCurrentThread();
  plVar11 = (long *)(lVar14 + 0x208);
  do {
    if (*plVar11 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x1fc));
        while (*plVar11 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01e54df0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01e54df0:
  FUN_02a70468(lVar14,*(undefined8 *)(*plVar17 + 200),0);
  FUN_02a70468(lVar14,0,uVar2);
  *(undefined8 *)(lVar14 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0x1fc));
  puVar5 = PTR_DAT_04379578;
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379578), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  puVar7 = PTR_DAT_04379588;
  puVar6 = PTR_DAT_04379580;
  lVar9 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar9;
  lVar14 = *(long *)(lVar9 + 0x68);
  lVar9 = nn::os::GetCurrentThread();
  plVar11 = (long *)(lVar14 + 0x208);
  do {
    if (*plVar11 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x1fc));
        while (*plVar11 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01e54e98;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01e54e98:
  lVar12 = *(long *)(*plVar17 + 0x88);
  lVar9 = lVar12;
  if (*(long *)(lVar12 + 0x1d0) != 0) {
    lVar9 = *(long *)(lVar12 + 0x1d0);
  }
  if (*(long *)(lVar12 + 0x1d8) != 0) {
    lVar12 = *(long *)(lVar12 + 0x1d8);
  }
  if (lVar9 != lVar12) {
    FUN_02a70230(lVar14);
    *(undefined8 *)(lVar14 + 0x208) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0x1fc));
    if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379578), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379578);
    }
    lVar9 = *(long *)puVar6;
    *(long *)puVar7 = lVar9;
    lVar14 = *(long *)(lVar9 + 0x70);
    lVar9 = nn::os::GetCurrentThread();
    plVar11 = (long *)(lVar14 + 0x208);
    do {
      if (*plVar11 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x1fc));
          while (*plVar11 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = lVar9;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_01e54f30;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = lVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_01e54f30:
    lVar12 = *(long *)(*plVar17 + 200);
    lVar9 = lVar12;
    if (*(long *)(lVar12 + 0x1d0) != 0) {
      lVar9 = *(long *)(lVar12 + 0x1d0);
    }
    if (*(long *)(lVar12 + 0x1d8) != 0) {
      lVar12 = *(long *)(lVar12 + 0x1d8);
    }
    if (lVar9 != lVar12) {
      FUN_02a70230(lVar14);
      *(undefined8 *)(lVar14 + 0x208) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0x1fc));
      FUN_01e5697c(param_1);
      return;
    }
  }
LAB_01e553a8:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


