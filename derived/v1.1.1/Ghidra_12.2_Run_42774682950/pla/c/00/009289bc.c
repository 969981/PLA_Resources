/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009289bc; name: FUN_009289bc
 */


void FUN_009289bc(long param_1,undefined4 param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined1 uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *local_48;
  long *local_38;
  
  uVar8 = (undefined1)param_2;
  *(undefined1 *)(param_1 + 0x71) = uVar8;
  FUN_009a4e68(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x28));
  if (local_38 != (long *)0x0) {
    lVar9 = local_38[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  plVar11 = *(long **)(*(long *)(param_1 + 0x68) + 0x30);
  if (plVar11 != (long *)0x0) {
    plVar7 = plVar11 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = (int)*plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = (long *)plVar11[0x1e];
  if (plVar7 == (long *)0x0) {
    DAT_00000078 = uVar8;
  }
  else {
    plVar10 = plVar7 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined1 *)(plVar7 + 0xf) = uVar8;
    do {
      iVar6 = (int)*plVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = plVar11 + 10;
  do {
    iVar6 = (int)*plVar7 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *(int *)plVar7 = iVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  plVar11 = *(long **)(*(long *)(param_1 + 0x68) + 0x30);
  if (plVar11 != (long *)0x0) {
    plVar7 = plVar11 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = (int)*plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = (long *)plVar11[0x24];
  if (plVar7 == (long *)0x0) {
    FUN_00976eb8(0,param_2);
  }
  else {
    plVar10 = plVar7 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_00976eb8(plVar7,param_2);
    do {
      iVar6 = (int)*plVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  plVar7 = plVar11 + 10;
  do {
    iVar6 = (int)*plVar7 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *(int *)plVar7 = iVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  plVar11 = *(long **)(*(long *)(param_1 + 0x68) + 0x30);
  if (plVar11 != (long *)0x0) {
    plVar7 = plVar11 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = (int)*plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar10 = (long *)PTR_DAT_043796a0;
  plVar7 = (long *)PTR_DAT_04379698;
  puVar5 = PTR_DAT_04379690;
  plVar12 = (long *)plVar11[0x22];
  if (plVar12 == (long *)0x0) {
    if (((*PTR_DAT_04379690 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379690), iVar6 != 0)) {
      FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379690);
    }
    lVar9 = *plVar7;
    *plVar10 = lVar9;
    if (*(int *)(*(long *)(lVar9 + 0x50) + 0x2aa0) != 3) {
      FUN_0096d008(0,param_2);
    }
  }
  else {
    plVar2 = plVar12 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((*puVar5 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379690), plVar7 = (long *)PTR_DAT_04379698,
       plVar10 = (long *)PTR_DAT_043796a0, iVar6 != 0)) {
      FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379690);
      plVar7 = (long *)PTR_DAT_04379698;
      plVar10 = (long *)PTR_DAT_043796a0;
    }
    lVar9 = *plVar7;
    *plVar10 = lVar9;
    if (*(int *)(*(long *)(lVar9 + 0x50) + 0x2aa0) != 3) {
      FUN_0096d008(plVar12,param_2);
    }
    do {
      iVar6 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
  plVar7 = plVar11 + 10;
  do {
    iVar6 = (int)*plVar7 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *(int *)plVar7 = iVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  plVar11 = *(long **)(*(long *)(param_1 + 0x68) + 0x30);
  if (plVar11 != (long *)0x0) {
    plVar7 = plVar11 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = (int)*plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = (long *)plVar11[0x23];
  if (plVar7 == (long *)0x0) {
    FUN_009803f8(0,param_2);
  }
  else {
    plVar10 = plVar7 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_009803f8(plVar7,param_2);
    do {
      iVar6 = (int)*plVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  plVar7 = plVar11 + 10;
  do {
    iVar6 = (int)*plVar7 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *(int *)plVar7 = iVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  lVar9 = *(long *)(*(long *)(param_1 + 0x68) + 0x28);
  plVar11 = *(long **)(lVar9 + 0x98);
  if (plVar11 == (long *)0x0) {
    return;
  }
  plVar7 = plVar11;
  while ((int)plVar7[4] != 0) {
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      return;
    }
  }
  do {
    if ((int)plVar11[4] == 0) {
      uVar8 = (undefined1)plVar11[2];
      goto LAB_00928c4c;
    }
    plVar11 = (long *)*plVar11;
  } while (plVar11 != (long *)0x0);
  uVar8 = 0x1f;
LAB_00928c4c:
  FUN_009a1308(&local_48,lVar9,uVar8,param_2);
  if (local_48 != (long *)0x0) {
    lVar9 = local_48[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  return;
}


