/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0096161c; name: FUN_0096161c
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0096161c(long param_1)

{
  int *piVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined4 uVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  byte *pbVar19;
  long *local_170;
  long local_168 [30];
  uint local_78;
  undefined8 local_70 [2];
  
  pbVar19 = PTR_DAT_04379578;
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379578), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  puVar8 = PTR_DAT_04379588;
  puVar7 = PTR_DAT_04379580;
  lVar13 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar13;
  plVar11 = *(long **)(lVar13 + 0xb0);
  if (plVar11 == (long *)0x0) {
    lVar13 = _DAT_000000e0;
  }
  else {
    plVar18 = plVar11 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *(int *)plVar18 = (int)*plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar13 = plVar11[0x1c];
    do {
      iVar9 = (int)*plVar18 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *(int *)plVar18 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  FUN_00923c00(lVar13);
  iVar9 = FUN_009350ec();
  FUN_00931034(&local_170,*(undefined8 *)(param_1 + 0x58));
  FUN_011dcc00(local_170[0xd1],iVar9 != 1);
  if (local_170 != (long *)0x0) {
    lVar13 = local_170[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_170 + 0x20))();
      plVar11 = *(long **)(param_1 + 0x120);
      goto joined_r0x009616f4;
    }
  }
  plVar11 = *(long **)(param_1 + 0x120);
joined_r0x009616f4:
  if (plVar11 == (long *)0x0) {
    FUN_0097612c(0,0,0);
    plVar11 = *(long **)(param_1 + 0x120);
  }
  else {
    plVar18 = (long *)((long)plVar11 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *(int *)plVar18 = *(int *)plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    FUN_0097612c(plVar11,0,0);
    do {
      iVar9 = *(int *)plVar18;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *(int *)plVar18 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      plVar11 = *(long **)(param_1 + 0x120);
    }
    else {
      plVar11 = *(long **)(param_1 + 0x120);
    }
  }
  if (plVar11 == (long *)0x0) {
    _DAT_00000078 = _DAT_00000078 & 0xfffffffe;
    FUN_00931034(&local_170,_DAT_00000058);
    FUN_011d691c(local_170[0xd1] + 0x5b0,0);
    if (local_170 != (long *)0x0) {
      lVar13 = local_170[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_170 + 0x20))();
      }
    }
    plVar11 = *(long **)(param_1 + 0x120);
    pbVar19 = PTR_DAT_04379578;
  }
  else {
    plVar18 = (long *)((long)plVar11 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *(int *)plVar18 = *(int *)plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *(uint *)((long)plVar11 + 0x78) = *(uint *)((long)plVar11 + 0x78) & 0xfffffffe;
    FUN_00931034(&local_170,*(long *)((long)plVar11 + 0x58));
    FUN_011d691c(local_170[0xd1] + 0x5b0,0);
    if (local_170 != (long *)0x0) {
      lVar13 = local_170[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_170 + 0x20))();
      }
    }
    do {
      iVar9 = *(int *)plVar18;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *(int *)plVar18 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      plVar11 = *(long **)(param_1 + 0x120);
    }
    else {
      plVar11 = *(long **)(param_1 + 0x120);
    }
  }
  if (plVar11 == (long *)0x0) {
    FUN_0097612c(0,0,1);
    plVar11 = *(long **)(param_1 + 0x120);
  }
  else {
    plVar18 = (long *)((long)plVar11 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *(int *)plVar18 = *(int *)plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    FUN_0097612c(plVar11,0,1);
    do {
      iVar9 = *(int *)plVar18;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *(int *)plVar18 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      plVar11 = *(long **)(param_1 + 0x120);
    }
    else {
      plVar11 = *(long **)(param_1 + 0x120);
    }
  }
  if (plVar11 == (long *)0x0) {
    _DAT_0000007c = _DAT_0000007c & 0xfffffffe;
    FUN_00931034(&local_170,_DAT_00000058);
    FUN_011d691c(local_170[0xd2] + 0x5b0,0);
    if (local_170 != (long *)0x0) {
      lVar13 = local_170[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_170 + 0x20))();
      }
    }
    plVar11 = *(long **)(param_1 + 0x120);
    pbVar19 = PTR_DAT_04379578;
  }
  else {
    plVar18 = (long *)((long)plVar11 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *(int *)plVar18 = *(int *)plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *(uint *)((long)plVar11 + 0x7c) = *(uint *)((long)plVar11 + 0x7c) & 0xfffffffe;
    FUN_00931034(&local_170,*(long *)((long)plVar11 + 0x58));
    FUN_011d691c(local_170[0xd2] + 0x5b0,0);
    if (local_170 != (long *)0x0) {
      lVar13 = local_170[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_170 + 0x20))();
      }
    }
    do {
      iVar9 = *(int *)plVar18;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *(int *)plVar18 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      plVar11 = *(long **)(param_1 + 0x120);
    }
    else {
      plVar11 = *(long **)(param_1 + 0x120);
    }
  }
  if (plVar11 == (long *)0x0) {
    FUN_0097612c(0,0,2);
    plVar11 = *(long **)(param_1 + 0x120);
  }
  else {
    plVar18 = (long *)((long)plVar11 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *(int *)plVar18 = *(int *)plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    FUN_0097612c(plVar11,0,2);
    do {
      iVar9 = *(int *)plVar18;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *(int *)plVar18 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      plVar11 = *(long **)(param_1 + 0x120);
    }
    else {
      plVar11 = *(long **)(param_1 + 0x120);
    }
  }
  if (plVar11 == (long *)0x0) {
    _DAT_00000080 = _DAT_00000080 & 0xfffffffe;
    FUN_00931034(&local_170,_DAT_00000058);
    FUN_011d691c(local_170[0xd2] + 0x5f8,0);
    if (local_170 != (long *)0x0) {
      lVar13 = local_170[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_170 + 0x20))();
      }
    }
    plVar11 = *(long **)(param_1 + 0x120);
    pbVar19 = PTR_DAT_04379578;
  }
  else {
    plVar18 = (long *)((long)plVar11 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *(int *)plVar18 = *(int *)plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *(uint *)((long)plVar11 + 0x80) = *(uint *)((long)plVar11 + 0x80) & 0xfffffffe;
    FUN_00931034(&local_170,*(long *)((long)plVar11 + 0x58));
    FUN_011d691c(local_170[0xd2] + 0x5f8,0);
    if (local_170 != (long *)0x0) {
      lVar13 = local_170[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_170 + 0x20))();
      }
    }
    do {
      iVar9 = *(int *)plVar18;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *(int *)plVar18 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      plVar11 = *(long **)(param_1 + 0x120);
    }
    else {
      plVar11 = *(long **)(param_1 + 0x120);
    }
  }
  if (plVar11 == (long *)0x0) {
    FUN_0097612c(0,0,3);
    plVar11 = *(long **)(param_1 + 0x120);
  }
  else {
    plVar18 = (long *)((long)plVar11 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *(int *)plVar18 = *(int *)plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    FUN_0097612c(plVar11,0,3);
    do {
      iVar9 = *(int *)plVar18;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *(int *)plVar18 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      plVar11 = *(long **)(param_1 + 0x120);
    }
    else {
      plVar11 = *(long **)(param_1 + 0x120);
    }
  }
  if (plVar11 == (long *)0x0) {
    _DAT_00000084 = _DAT_00000084 & 0xfffffffe;
    FUN_00931034(&local_170,_DAT_00000058);
    FUN_011d691c(local_170[0xd2] + 0x640,0);
    if (local_170 != (long *)0x0) {
      lVar13 = local_170[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_170 + 0x20))();
      }
    }
    plVar11 = *(long **)(param_1 + 0x120);
    pbVar19 = PTR_DAT_04379578;
  }
  else {
    plVar18 = (long *)((long)plVar11 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *(int *)plVar18 = *(int *)plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *(uint *)((long)plVar11 + 0x84) = *(uint *)((long)plVar11 + 0x84) & 0xfffffffe;
    FUN_00931034(&local_170,*(long *)((long)plVar11 + 0x58));
    FUN_011d691c(local_170[0xd2] + 0x640,0);
    if (local_170 != (long *)0x0) {
      lVar13 = local_170[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_170 + 0x20))();
      }
    }
    do {
      iVar9 = *(int *)plVar18;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *(int *)plVar18 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      plVar11 = *(long **)(param_1 + 0x120);
    }
    else {
      plVar11 = *(long **)(param_1 + 0x120);
    }
  }
  if (plVar11 == (long *)0x0) {
    FUN_0097612c(0,0,4);
    plVar11 = *(long **)(param_1 + 0x120);
  }
  else {
    plVar18 = (long *)((long)plVar11 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *(int *)plVar18 = *(int *)plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    FUN_0097612c(plVar11,0,4);
    do {
      iVar9 = *(int *)plVar18;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *(int *)plVar18 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      plVar11 = *(long **)(param_1 + 0x120);
    }
    else {
      plVar11 = *(long **)(param_1 + 0x120);
    }
  }
  if (plVar11 == (long *)0x0) {
    _DAT_00000088 = _DAT_00000088 & 0xfffffffe;
    FUN_00931034(&local_170,_DAT_00000058);
    FUN_011d691c(local_170[0xd2] + 0x688,0);
    if (local_170 != (long *)0x0) {
      lVar13 = local_170[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_170 + 0x20))();
      }
    }
    plVar11 = *(long **)(param_1 + 0x120);
    pbVar19 = PTR_DAT_04379578;
  }
  else {
    plVar18 = (long *)((long)plVar11 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *(int *)plVar18 = *(int *)plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *(uint *)((long)plVar11 + 0x88) = *(uint *)((long)plVar11 + 0x88) & 0xfffffffe;
    FUN_00931034(&local_170,*(long *)((long)plVar11 + 0x58));
    FUN_011d691c(local_170[0xd2] + 0x688,0);
    if (local_170 != (long *)0x0) {
      lVar13 = local_170[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_170 + 0x20))();
      }
    }
    do {
      iVar9 = *(int *)plVar18;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *(int *)plVar18 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      plVar11 = *(long **)(param_1 + 0x120);
    }
    else {
      plVar11 = *(long **)(param_1 + 0x120);
    }
  }
  if (plVar11 == (long *)0x0) {
    FUN_0097612c(0,0,5);
    plVar11 = *(long **)(param_1 + 0x120);
  }
  else {
    plVar18 = (long *)((long)plVar11 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *(int *)plVar18 = *(int *)plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    FUN_0097612c(plVar11,0,5);
    do {
      iVar9 = *(int *)plVar18;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *(int *)plVar18 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      plVar11 = *(long **)(param_1 + 0x120);
    }
    else {
      plVar11 = *(long **)(param_1 + 0x120);
    }
  }
  if (plVar11 == (long *)0x0) {
    _DAT_0000008c = _DAT_0000008c & 0xfffffffe;
    FUN_00931034(&local_170,_DAT_00000058);
    FUN_011d691c(local_170[0xd2] + 0x6d0,0);
    if (local_170 != (long *)0x0) {
      lVar13 = local_170[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_170 + 0x20))();
      }
    }
    pbVar19 = PTR_DAT_04379578;
  }
  else {
    plVar18 = plVar11 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *(int *)plVar18 = (int)*plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *(uint *)((long)plVar11 + 0x8c) = *(uint *)((long)plVar11 + 0x8c) & 0xfffffffe;
    FUN_00931034(&local_170,plVar11[0xb]);
    FUN_011d691c(local_170[0xd2] + 0x6d0,0);
    if (local_170 != (long *)0x0) {
      lVar13 = local_170[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_170 + 0x20))();
      }
    }
    do {
      iVar9 = (int)*plVar18 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *(int *)plVar18 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  local_70[0] = 0x502000100;
  if (((*pbVar19 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379578), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar13 = *(long *)puVar7;
  *(long *)puVar8 = lVar13;
  plVar11 = *(long **)(lVar13 + 0xb0);
  if (plVar11 == (long *)0x0) {
    lVar13 = _DAT_000000e0;
  }
  else {
    plVar18 = plVar11 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *(int *)plVar18 = (int)*plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar13 = plVar11[0x1c];
    do {
      iVar9 = (int)*plVar18 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *(int *)plVar18 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  uVar12 = FUN_00923c00(lVar13);
  FUN_009346d8(&local_170,uVar12,local_70);
  if (local_78 == 0) {
LAB_00961d9c:
    if (((*PTR_DAT_04379578 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379578), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379578);
    }
    lVar13 = *(long *)puVar7;
    *(long *)puVar8 = lVar13;
    plVar11 = *(long **)(lVar13 + 0xb0);
    if (plVar11 == (long *)0x0) {
      lVar13 = _DAT_000000e0;
    }
    else {
      plVar18 = plVar11 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *(int *)plVar18 = (int)*plVar18 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      lVar13 = plVar11[0x1c];
      do {
        iVar9 = (int)*plVar18 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *(int *)plVar18 = iVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar11 + 0x10))();
      }
    }
    FUN_00923c30(lVar13);
    uVar10 = FUN_0092877c();
    plVar11 = *(long **)(param_1 + 0x120);
    if (plVar11 == (long *)0x0) {
      FUN_00976eb8(0,uVar10);
    }
    else {
      plVar18 = plVar11 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *(int *)plVar18 = (int)*plVar18 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      FUN_00976eb8(plVar11,uVar10);
      do {
        iVar9 = (int)*plVar18 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *(int *)plVar18 = iVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    FUN_0093245c(&local_170);
    plVar11 = *(long **)(param_1 + 0x158);
    if (plVar11 == (long *)0x0) {
      FUN_0096b564(0);
      plVar11 = *(long **)(param_1 + 0x158);
    }
    else {
      plVar18 = plVar11 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *(int *)plVar18 = (int)*plVar18 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      FUN_0096b564(plVar11);
      do {
        iVar9 = (int)*plVar18 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *(int *)plVar18 = iVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        plVar11 = *(long **)(param_1 + 0x158);
      }
      else {
        plVar11 = *(long **)(param_1 + 0x158);
      }
    }
    if (plVar11 == (long *)0x0) {
      FUN_0096bc84(0,1);
      plVar11 = *(long **)(param_1 + 0x158);
    }
    else {
      plVar18 = plVar11 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *(int *)plVar18 = (int)*plVar18 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      FUN_0096bc84(plVar11,1);
      do {
        iVar9 = (int)*plVar18 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *(int *)plVar18 = iVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        plVar11 = *(long **)(param_1 + 0x158);
      }
      else {
        plVar11 = *(long **)(param_1 + 0x158);
      }
    }
    if (plVar11 == (long *)0x0) {
      FUN_0096bcf4(0,1);
    }
    else {
      plVar18 = plVar11 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *(int *)plVar18 = (int)*plVar18 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      FUN_0096bcf4(plVar11,1);
      do {
        iVar9 = (int)*plVar18 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *(int *)plVar18 = iVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    return;
  }
  plVar11 = local_168;
LAB_00961bf8:
  lVar13 = *plVar11;
  uVar15 = *(ulong *)(*(long *)(param_1 + 0x160) + 0x70);
  if (uVar15 == 0) {
LAB_00961f4c:
    uVar10 = 0x15;
    plVar18 = *(long **)(param_1 + 0x120);
    goto joined_r0x00961f54;
  }
  uVar16 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
  uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
  bVar3 = *(byte *)(*(long *)(lVar13 + 0x70) + 0x7d);
  uVar14 = (ulong)bVar3;
  uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar16 < 2) {
    uVar17 = (int)uVar15 - 1 & uVar14;
  }
  else {
    uVar17 = uVar14;
    if (uVar15 <= uVar14) {
      uVar17 = 0;
      if (uVar15 != 0) {
        uVar17 = uVar14 / uVar15;
      }
      uVar17 = uVar14 - uVar17 * uVar15;
    }
  }
  plVar18 = *(long **)(*(long *)(*(long *)(param_1 + 0x160) + 0x68) + uVar17 * 8);
  if ((plVar18 == (long *)0x0) || (plVar18 = (long *)*plVar18, plVar18 == (long *)0x0))
  goto LAB_00961f4c;
  if (uVar16 < 2) {
    do {
      if (plVar18[1] == uVar14) {
        if (*(byte *)(plVar18 + 2) == bVar3) goto LAB_00961cf0;
      }
      else if ((plVar18[1] & uVar15 - 1) != uVar17) goto LAB_00961f4c;
      plVar18 = (long *)*plVar18;
    } while (plVar18 != (long *)0x0);
  }
  else {
    do {
      uVar16 = plVar18[1];
      if (uVar16 == uVar14) {
        if (*(byte *)(plVar18 + 2) == bVar3) goto LAB_00961cf0;
      }
      else {
        if (uVar15 <= uVar16) {
          uVar6 = 0;
          if (uVar15 != 0) {
            uVar6 = uVar16 / uVar15;
          }
          uVar16 = uVar16 - uVar6 * uVar15;
        }
        if (uVar16 != uVar17) goto LAB_00961f4c;
      }
      plVar18 = (long *)*plVar18;
    } while (plVar18 != (long *)0x0);
  }
  uVar10 = 0x15;
  plVar18 = *(long **)(param_1 + 0x120);
  if (plVar18 != (long *)0x0) goto LAB_00961cfc;
  goto LAB_00961f58;
LAB_00961cf0:
  uVar10 = (undefined4)plVar18[4];
  plVar18 = *(long **)(param_1 + 0x120);
joined_r0x00961f54:
  if (plVar18 == (long *)0x0) {
LAB_00961f58:
    FUN_0097612c(0,lVar13,uVar10);
    plVar18 = *(long **)(param_1 + 0x120);
  }
  else {
LAB_00961cfc:
    plVar2 = plVar18 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    FUN_0097612c(plVar18,lVar13,uVar10);
    do {
      iVar9 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      plVar18 = *(long **)(param_1 + 0x120);
    }
    else {
      plVar18 = *(long **)(param_1 + 0x120);
    }
  }
  if (plVar18 == (long *)0x0) {
    FUN_009770bc(0,0,uVar10,1);
  }
  else {
    plVar2 = plVar18 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    FUN_009770bc(plVar18,0,uVar10,1);
    do {
      iVar9 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
  }
  plVar11 = plVar11 + 1;
  if (plVar11 == local_168 + local_78) goto LAB_00961d9c;
  goto LAB_00961bf8;
}


