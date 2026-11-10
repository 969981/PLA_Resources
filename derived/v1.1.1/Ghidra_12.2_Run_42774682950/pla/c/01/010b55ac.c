/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010b55ac; name: FUN_010b55ac
 */


void FUN_010b55ac(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  undefined8 local_68;
  
  puVar17 = (undefined8 *)(param_1 + 200);
  local_70 = (long *)0x80000000800;
  local_68 = 0x2080000000800;
  lVar12 = FUN_010b926c(*puVar17,puVar17,&local_70);
  if (lVar12 != 0) {
    piVar1 = (int *)(lVar12 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar13 = *(long **)(param_1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  if (plVar13 != (long *)0x0) {
    plVar15 = plVar13 + 10;
    do {
      iVar11 = (int)*plVar15 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *(int *)plVar15 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar13 + 0x10))();
    }
  }
  *(long *)(param_1 + 0x1a0) = lVar12;
  local_70 = (long *)0x40000000400;
  local_68 = 0x2080000000400;
  lVar12 = FUN_010b926c(*(undefined8 *)(param_1 + 200),puVar17,&local_70);
  if (lVar12 != 0) {
    piVar1 = (int *)(lVar12 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar13 = *(long **)(param_1 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  if (plVar13 != (long *)0x0) {
    plVar15 = plVar13 + 10;
    do {
      iVar11 = (int)*plVar15 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *(int *)plVar15 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar13 + 0x10))();
    }
  }
  *(long *)(param_1 + 0x1a8) = lVar12;
  local_70 = (long *)0x40000000400;
  local_68 = 0x2080000000400;
  lVar12 = FUN_010b926c(*(undefined8 *)(param_1 + 200),puVar17,&local_70);
  if (lVar12 != 0) {
    piVar1 = (int *)(lVar12 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar13 = *(long **)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  if (plVar13 != (long *)0x0) {
    plVar15 = plVar13 + 10;
    do {
      iVar11 = (int)*plVar15 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *(int *)plVar15 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar13 + 0x10))();
    }
  }
  *(long *)(param_1 + 0x1b0) = lVar12;
  local_70 = (long *)0xaf66c74c8606e1dd;
  FUN_010b667c(param_1,0,0,&local_70);
  local_70 = (long *)0xaf66b84c8606c860;
  FUN_010b667c(param_1,0,1,&local_70);
  local_70 = (long *)0xaf66c64c8606e02a;
  FUN_010b667c(param_1,0,2,&local_70);
  local_70 = (long *)0xaf66be4c8606d292;
  FUN_010b667c(param_1,0,3,&local_70);
  local_70 = (long *)0xaf66c94c8606e543;
  FUN_010b667c(param_1,0,4,&local_70);
  local_70 = (long *)0x125a3c07bd8c1544;
  FUN_010b667c(param_1,1,0,&local_70);
  local_70 = (long *)0x125a3307bd8c05f9;
  FUN_010b667c(param_1,1,1,&local_70);
  local_70 = (long *)0x125a3d07bd8c16f7;
  FUN_010b667c(param_1,1,2,&local_70);
  local_70 = (long *)0x125a3507bd8c095f;
  FUN_010b667c(param_1,1,3,&local_70);
  local_70 = (long *)0x125a4207bd8c1f76;
  FUN_010b667c(param_1,1,4,&local_70);
  local_70 = (long *)0x126e5407bd9ce716;
  FUN_010b667c(param_1,2,0,&local_70);
  local_70 = (long *)0x126e5f07bd9cf9c7;
  FUN_010b667c(param_1,2,1,&local_70);
  local_70 = (long *)0x126e5507bd9ce8c9;
  FUN_010b667c(param_1,2,2,&local_70);
  local_70 = (long *)0x126e5d07bd9cf661;
  FUN_010b667c(param_1,2,3,&local_70);
  local_70 = (long *)0x126e4e07bd9cdce4;
  FUN_010b667c(param_1,2,4,&local_70);
  FUN_02a755c0(*(undefined8 *)(param_1 + 0x1a0),*(undefined8 *)(param_1 + 200),0);
  FUN_02a755c0(*(undefined8 *)(param_1 + 0x1a8),*(undefined8 *)(param_1 + 200),0);
  FUN_02a755c0(*(undefined8 *)(param_1 + 0x1b0),*(undefined8 *)(param_1 + 200),0);
  uVar18 = 0;
  do {
    plVar13 = *(long **)(param_1 + 0x1a0);
    if (plVar13 == (long *)0x0) {
      uVar14 = *(undefined8 *)(param_1 + 0xd0);
    }
    else {
      plVar15 = plVar13 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *(int *)plVar15 = (int)*plVar15 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      uVar14 = *(undefined8 *)(param_1 + 0xd0);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *(int *)plVar15 = (int)*plVar15 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar12 = FUN_010b9604(uVar14);
    if (lVar12 != 0) {
      piVar1 = (int *)(lVar12 + 0x50);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar20 = (long *)(param_1 + uVar18 * 0x28 + 0xe0);
    plVar15 = (long *)*plVar20;
    *plVar20 = 0;
    if (plVar15 != (long *)0x0) {
      plVar21 = plVar15 + 10;
      do {
        iVar11 = (int)*plVar21 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar4) {
          *(int *)plVar21 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar15 + 0x10))();
      }
    }
    *plVar20 = lVar12;
    if (plVar13 != (long *)0x0) {
      plVar15 = plVar13 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *(int *)plVar15 = (int)*plVar15 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    local_70 = plVar13;
    FUN_02a74f6c(lVar12,&local_70);
    if (local_70 != (long *)0x0) {
      plVar15 = local_70 + 10;
      do {
        iVar11 = (int)*plVar15 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *(int *)plVar15 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*local_70 + 0x10))();
      }
    }
    FUN_02a74fc0(*plVar20,uVar18 & 0xffffffff,0x20,0x3f);
    if (plVar13 == (long *)0x0) {
      uVar14 = *(undefined8 *)(param_1 + 0xd0);
    }
    else {
      plVar15 = plVar13 + 10;
      do {
        iVar11 = (int)*plVar15 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *(int *)plVar15 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
      uVar14 = *(undefined8 *)(param_1 + 0xd0);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *(int *)plVar15 = (int)*plVar15 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar12 = FUN_010b9604(uVar14);
    if (lVar12 != 0) {
      piVar1 = (int *)(lVar12 + 0x50);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar20 = (long *)(param_1 + uVar18 * 0x28 + 0xe8);
    plVar15 = (long *)*plVar20;
    *plVar20 = 0;
    if (plVar15 != (long *)0x0) {
      plVar21 = plVar15 + 10;
      do {
        iVar11 = (int)*plVar21 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar4) {
          *(int *)plVar21 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar15 + 0x10))();
      }
    }
    *plVar20 = lVar12;
    if (plVar13 != (long *)0x0) {
      plVar15 = plVar13 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *(int *)plVar15 = (int)*plVar15 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    local_70 = plVar13;
    FUN_02a74f6c(lVar12,&local_70);
    if (local_70 != (long *)0x0) {
      plVar15 = local_70 + 10;
      do {
        iVar11 = (int)*plVar15 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *(int *)plVar15 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*local_70 + 0x10))();
      }
    }
    FUN_02a74fc0(*plVar20,uVar18 & 0xffffffff,0x2a,0x3f);
    if (plVar13 == (long *)0x0) {
      uVar14 = *(undefined8 *)(param_1 + 0xd0);
    }
    else {
      plVar15 = plVar13 + 10;
      do {
        iVar11 = (int)*plVar15 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *(int *)plVar15 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
      uVar14 = *(undefined8 *)(param_1 + 0xd0);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *(int *)plVar15 = (int)*plVar15 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar12 = FUN_010b9604(uVar14);
    if (lVar12 != 0) {
      piVar1 = (int *)(lVar12 + 0x50);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar20 = (long *)(param_1 + uVar18 * 0x28 + 0xf0);
    plVar15 = (long *)*plVar20;
    *plVar20 = 0;
    if (plVar15 != (long *)0x0) {
      plVar21 = plVar15 + 10;
      do {
        iVar11 = (int)*plVar21 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar4) {
          *(int *)plVar21 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar15 + 0x10))();
      }
    }
    *plVar20 = lVar12;
    if (plVar13 != (long *)0x0) {
      plVar15 = plVar13 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *(int *)plVar15 = (int)*plVar15 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    local_70 = plVar13;
    FUN_02a74f6c(lVar12,&local_70);
    if (local_70 != (long *)0x0) {
      plVar15 = local_70 + 10;
      do {
        iVar11 = (int)*plVar15 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *(int *)plVar15 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*local_70 + 0x10))();
      }
    }
    FUN_02a74fc0(*plVar20,uVar18 & 0xffffffff,0x36,0x3f);
    if (plVar13 == (long *)0x0) {
LAB_010b5c54:
      plVar15 = *(long **)(param_1 + 0x1a8);
      if (plVar15 != (long *)0x0) goto LAB_010b5c5c;
LAB_010b62b4:
      uVar14 = *(undefined8 *)(param_1 + 0xd0);
    }
    else {
      plVar15 = plVar13 + 10;
      do {
        iVar11 = (int)*plVar15 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *(int *)plVar15 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 != 0) goto LAB_010b5c54;
      (**(code **)(*plVar13 + 0x10))(plVar13);
      plVar15 = *(long **)(param_1 + 0x1a8);
      if (plVar15 == (long *)0x0) goto LAB_010b62b4;
LAB_010b5c5c:
      plVar20 = plVar15 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar4) {
          *(int *)plVar20 = (int)*plVar20 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      uVar14 = *(undefined8 *)(param_1 + 0xd0);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar4) {
          *(int *)plVar20 = (int)*plVar20 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar12 = FUN_010b9604(uVar14);
    if (lVar12 != 0) {
      piVar1 = (int *)(lVar12 + 0x50);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar21 = (long *)(param_1 + uVar18 * 0x28 + 0xf8);
    plVar20 = (long *)*plVar21;
    *plVar21 = 0;
    if (plVar20 != (long *)0x0) {
      plVar19 = plVar20 + 10;
      do {
        iVar11 = (int)*plVar19 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar4) {
          *(int *)plVar19 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar20 + 0x10))();
      }
    }
    *plVar21 = lVar12;
    if (plVar15 != (long *)0x0) {
      plVar20 = plVar15 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar4) {
          *(int *)plVar20 = (int)*plVar20 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    local_70 = plVar15;
    FUN_02a74f6c(lVar12,&local_70);
    if (local_70 != (long *)0x0) {
      plVar20 = local_70 + 10;
      do {
        iVar11 = (int)*plVar20 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar4) {
          *(int *)plVar20 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*local_70 + 0x10))();
      }
    }
    FUN_02a74fc0(*plVar21,uVar18 & 0xffffffff,100,0x3f);
    if (plVar15 == (long *)0x0) {
LAB_010b5d48:
      plVar20 = *(long **)(param_1 + 0x1b0);
      if (plVar20 != (long *)0x0) goto LAB_010b5d50;
LAB_010b62f4:
      uVar14 = *(undefined8 *)(param_1 + 0xd0);
    }
    else {
      plVar20 = plVar15 + 10;
      do {
        iVar11 = (int)*plVar20 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar4) {
          *(int *)plVar20 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 != 0) goto LAB_010b5d48;
      (**(code **)(*plVar15 + 0x10))(plVar15);
      plVar20 = *(long **)(param_1 + 0x1b0);
      if (plVar20 == (long *)0x0) goto LAB_010b62f4;
LAB_010b5d50:
      plVar21 = plVar20 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar4) {
          *(int *)plVar21 = (int)*plVar21 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      uVar14 = *(undefined8 *)(param_1 + 0xd0);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar4) {
          *(int *)plVar21 = (int)*plVar21 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar12 = FUN_010b9604(uVar14);
    if (lVar12 != 0) {
      piVar1 = (int *)(lVar12 + 0x50);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar19 = (long *)(param_1 + uVar18 * 0x28 + 0xd8);
    plVar21 = (long *)*plVar19;
    *plVar19 = 0;
    if (plVar21 != (long *)0x0) {
      plVar2 = plVar21 + 10;
      do {
        iVar11 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar21 + 0x10))();
      }
    }
    *plVar19 = lVar12;
    if (plVar20 != (long *)0x0) {
      plVar21 = plVar20 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar4) {
          *(int *)plVar21 = (int)*plVar21 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    local_70 = plVar20;
    FUN_02a74f6c(lVar12,&local_70);
    if (local_70 != (long *)0x0) {
      plVar21 = local_70 + 10;
      do {
        iVar11 = (int)*plVar21 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar4) {
          *(int *)plVar21 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*local_70 + 0x10))();
      }
    }
    FUN_02a74fc0(*plVar19,uVar18 & 0xffffffff,0x1c,0x3f);
    if (plVar20 != (long *)0x0) {
      plVar21 = plVar20 + 10;
      do {
        iVar11 = (int)*plVar21 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar4) {
          *(int *)plVar21 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
      do {
        iVar11 = (int)*plVar21 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar4) {
          *(int *)plVar21 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
    if (plVar15 != (long *)0x0) {
      plVar20 = plVar15 + 10;
      do {
        iVar11 = (int)*plVar20 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar4) {
          *(int *)plVar20 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
    if (plVar13 != (long *)0x0) {
      plVar15 = plVar13 + 10;
      do {
        iVar11 = (int)*plVar15 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *(int *)plVar15 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
    uVar18 = uVar18 + 1;
    if (uVar18 == 5) {
      uVar14 = FUN_010b6d94();
      puVar8 = PTR_DAT_0437b228;
      if (((*PTR_DAT_0437b228 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_0437b228), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_0437b240,PTR_DAT_0437b230,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437b228);
      }
      puVar10 = PTR_DAT_0437b238;
      puVar9 = PTR_DAT_0437b230;
      lVar12 = *(long *)PTR_DAT_0437b230;
      *(long *)PTR_DAT_0437b238 = lVar12;
      puVar5 = PTR_DAT_04379cd0;
      lVar12 = *(long *)(lVar12 + 0xe8);
      local_78 = (long *)0x0;
      if (((*PTR_DAT_04379cd0 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379cd0);
      }
      puVar7 = PTR_DAT_04379ce0;
      puVar6 = PTR_DAT_04379cd8;
      uVar16 = *(undefined8 *)PTR_DAT_04379cd8;
      *(undefined8 *)PTR_DAT_04379ce0 = uVar16;
      FUN_02a47cd8(&local_70,uVar16,"ScFontB");
      plVar13 = local_78;
      local_78 = (long *)0x0;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x20))();
      }
      local_78 = local_70;
      FUN_02c3de1c(uVar14,lVar12 + 0x68,&local_78);
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      uVar14 = FUN_010b6d94();
      if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_0437b228), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_0437b240,PTR_DAT_0437b230,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437b228);
      }
      lVar12 = *(long *)puVar9;
      *(long *)puVar10 = lVar12;
      lVar12 = *(long *)(lVar12 + 0xd8);
      local_80 = (long *)0x0;
      if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379cd0);
      }
      uVar16 = *(undefined8 *)puVar6;
      *(undefined8 *)puVar7 = uVar16;
      FUN_02a47cd8(&local_70,uVar16,"system28_jpn.fcpx");
      plVar13 = local_80;
      local_80 = (long *)0x0;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x20))();
      }
      local_80 = local_70;
      FUN_02c3de1c(uVar14,lVar12 + 0x68,&local_80);
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
      uVar14 = FUN_010b6d94();
      if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_0437b228), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_0437b240,PTR_DAT_0437b230,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437b228);
      }
      lVar12 = *(long *)puVar9;
      *(long *)puVar10 = lVar12;
      lVar12 = *(long *)(lVar12 + 0xe0);
      local_88 = (long *)0x0;
      if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379cd0);
      }
      uVar16 = *(undefined8 *)puVar6;
      *(undefined8 *)puVar7 = uVar16;
      FUN_02a47cd8(&local_70,uVar16,"system32_jpn.fcpx");
      plVar13 = local_88;
      local_88 = (long *)0x0;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x20))();
      }
      local_88 = local_70;
      FUN_02c3de1c(uVar14,lVar12 + 0x68,&local_88);
      if (local_88 != (long *)0x0) {
        (**(code **)(*local_88 + 0x20))();
      }
      uVar14 = FUN_010b6d94();
      if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_0437b228), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_0437b240,PTR_DAT_0437b230,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437b228);
      }
      lVar12 = *(long *)puVar9;
      *(long *)puVar10 = lVar12;
      lVar12 = *(long *)(lVar12 + 0xe8);
      local_90 = (long *)0x0;
      if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379cd0);
      }
      uVar16 = *(undefined8 *)puVar6;
      *(undefined8 *)puVar7 = uVar16;
      FUN_02a47cd8(&local_70,uVar16,"system42_jpn.fcpx");
      plVar13 = local_90;
      local_90 = (long *)0x0;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x20))();
      }
      local_90 = local_70;
      FUN_02c3de1c(uVar14,lVar12 + 0x68,&local_90);
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x20))();
      }
      uVar14 = FUN_010b6d94();
      if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_0437b228), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_0437b240,PTR_DAT_0437b230,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437b228);
      }
      lVar12 = *(long *)puVar9;
      *(long *)puVar10 = lVar12;
      lVar12 = *(long *)(lVar12 + 0xf0);
      local_98 = (long *)0x0;
      if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379cd0);
      }
      uVar16 = *(undefined8 *)puVar6;
      *(undefined8 *)puVar7 = uVar16;
      FUN_02a47cd8(&local_70,uVar16,"system54_jpn.fcpx");
      plVar13 = local_98;
      local_98 = (long *)0x0;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x20))();
      }
      local_98 = local_70;
      FUN_02c3de1c(uVar14,lVar12 + 0x68,&local_98);
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      uVar14 = FUN_010b6d94();
      if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_0437b228), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_0437b240,PTR_DAT_0437b230,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437b228);
      }
      lVar12 = *(long *)puVar9;
      *(long *)puVar10 = lVar12;
      lVar12 = *(long *)(lVar12 + 0xf8);
      local_a0 = (long *)0x0;
      if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379cd0);
      }
      uVar16 = *(undefined8 *)puVar6;
      *(undefined8 *)puVar7 = uVar16;
      FUN_02a47cd8(&local_70,uVar16,"system_huge_jpn.fcpx");
      plVar13 = local_a0;
      local_a0 = (long *)0x0;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x20))();
      }
      local_a0 = local_70;
      FUN_02c3de1c(uVar14,lVar12 + 0x68,&local_a0);
      if (local_a0 != (long *)0x0) {
        (**(code **)(*local_a0 + 0x20))();
      }
      return;
    }
  } while( true );
}


