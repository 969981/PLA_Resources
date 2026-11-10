/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0137a4a0; name: FUN_0137a4a0
 */


void FUN_0137a4a0(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined1 *local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  long *local_28;
  
  local_38 = (long *)0x0;
  local_50 = &DAT_61030071dde8d2bb;
  pcStack_48 = "common/mssn.dat";
  local_40 = 0xf;
  FUN_00d37bb4(&local_28,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb0),&local_50,10);
  plVar8 = (long *)local_28[0xd];
  if (plVar8 != (long *)0x0) {
    plVar5 = plVar8 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *(int *)plVar5 = (int)*plVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (local_28 != (long *)0x0) {
    lVar7 = local_28[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
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
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  lVar7 = FUN_00d48784(&local_50,*(undefined8 *)(param_1 + 8),&DAT_03a7b37c);
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar5 = *(long **)(param_1 + 0x21a0);
  *(undefined8 *)(param_1 + 0x21a0) = 0;
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 10;
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
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *(long *)(param_1 + 0x21a0) = lVar7;
  lVar7 = FUN_00d48784(&local_50,*(undefined8 *)(param_1 + 8),&DAT_03a7b37c);
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar5 = *(long **)(param_1 + 0x21a8);
  *(undefined8 *)(param_1 + 0x21a8) = 0;
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 10;
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
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *(long *)(param_1 + 0x21a8) = lVar7;
  lVar7 = FUN_00d48784(&local_50,*(undefined8 *)(param_1 + 8),&DAT_03a7b37c);
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar5 = *(long **)(param_1 + 0x21b0);
  *(undefined8 *)(param_1 + 0x21b0) = 0;
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 10;
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
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *(long *)(param_1 + 0x21b0) = lVar7;
  lVar7 = FUN_00d48784(&local_50,*(undefined8 *)(param_1 + 8),&DAT_03a7b37c);
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar5 = *(long **)(param_1 + 0x21b8);
  *(undefined8 *)(param_1 + 0x21b8) = 0;
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 10;
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
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *(long *)(param_1 + 0x21b8) = lVar7;
  lVar7 = plVar8[0x16];
  if (lVar7 != 0) {
    plVar5 = *(long **)(lVar7 + 0x270);
    if (plVar5 != *(long **)(lVar7 + 0x278)) {
      iVar6 = 0;
      do {
        plVar2 = (long *)PTR_DAT_04379c88;
        if (*plVar5 != 0) {
          plVar2 = (long *)(*plVar5 + 0x58);
        }
        if (*plVar2 == -0x67b8744aaa0d4ff6) goto LAB_0137a714;
        plVar5 = plVar5 + 1;
        iVar6 = iVar6 + 1;
      } while (*(long **)(lVar7 + 0x278) != plVar5);
    }
  }
  iVar6 = 0;
LAB_0137a714:
  FUN_02c2e33c(plVar8,iVar6,*(undefined8 *)(param_1 + 0x21a0));
  lVar7 = plVar8[0x16];
  if (lVar7 != 0) {
    plVar5 = *(long **)(lVar7 + 0x270);
    if (plVar5 != *(long **)(lVar7 + 0x278)) {
      iVar6 = 0;
      do {
        plVar2 = (long *)PTR_DAT_04379c88;
        if (*plVar5 != 0) {
          plVar2 = (long *)(*plVar5 + 0x58);
        }
        if (*plVar2 == -0x67b8734aaa0d4e43) goto LAB_0137a784;
        plVar5 = plVar5 + 1;
        iVar6 = iVar6 + 1;
      } while (*(long **)(lVar7 + 0x278) != plVar5);
    }
  }
  iVar6 = 0;
LAB_0137a784:
  FUN_02c2e33c(plVar8,iVar6,*(undefined8 *)(param_1 + 0x21a8));
  lVar7 = plVar8[0x16];
  if (lVar7 != 0) {
    plVar5 = *(long **)(lVar7 + 0x270);
    if (plVar5 != *(long **)(lVar7 + 0x278)) {
      iVar6 = 0;
      do {
        plVar2 = (long *)PTR_DAT_04379c88;
        if (*plVar5 != 0) {
          plVar2 = (long *)(*plVar5 + 0x58);
        }
        if (*plVar2 == -0x67b8764aaa0d535c) goto LAB_0137a7f4;
        plVar5 = plVar5 + 1;
        iVar6 = iVar6 + 1;
      } while (*(long **)(lVar7 + 0x278) != plVar5);
    }
  }
  iVar6 = 0;
LAB_0137a7f4:
  FUN_02c2e33c(plVar8,iVar6,*(undefined8 *)(param_1 + 0x21b0));
  lVar7 = plVar8[0x16];
  if (lVar7 != 0) {
    plVar5 = *(long **)(lVar7 + 0x270);
    if (plVar5 != *(long **)(lVar7 + 0x278)) {
      iVar6 = 0;
      do {
        plVar2 = (long *)PTR_DAT_04379c88;
        if (*plVar5 != 0) {
          plVar2 = (long *)(*plVar5 + 0x58);
        }
        if (*plVar2 == -0x67b8794aaa0d5875) goto LAB_0137a864;
        plVar5 = plVar5 + 1;
        iVar6 = iVar6 + 1;
      } while (*(long **)(lVar7 + 0x278) != plVar5);
    }
  }
  iVar6 = 0;
LAB_0137a864:
  FUN_02c2e33c(plVar8,iVar6,*(undefined8 *)(param_1 + 0x21b8));
  FUN_0137a998(param_1,0,0,0,0,0);
  local_50 = &DAT_e2c06acab97c29c2;
  pcStack_48 = "CommonOptionBar";
  local_40 = 0xf;
  local_38 = (long *)0x0;
  plVar5 = (long *)FUN_00d6adf4(param_1 + 0x180,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (*(char *)((long)plVar5 + 0xa2) != '\0') {
    *(undefined1 *)((long)plVar5 + 0xa2) = 0;
    (**(code **)(*plVar5 + 0x98))(plVar5,0);
  }
  if (plVar8 != (long *)0x0) {
    plVar5 = plVar8 + 10;
    do {
      iVar6 = (int)*plVar5 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *(int *)plVar5 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  return;
}


