/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014f29e0; name: FUN_014f29e0
 */


void FUN_014f29e0(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  
  plVar9 = *(long **)(param_1 + 0x10);
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar10 = *(long **)(*(long *)(param_1 + 8) + 0x1c0);
  if (plVar10 == (long *)0x0) {
    lVar8 = plVar9[0x16];
    if (lVar8 != 0) {
      plVar10 = *(long **)(lVar8 + 0x270);
      if (plVar10 != *(long **)(lVar8 + 0x278)) {
        iVar6 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar10 != 0) {
            plVar2 = (long *)(*plVar10 + 0x58);
          }
          if (*plVar2 == 0x76a2394c3eb77584) goto LAB_014f3060;
          plVar10 = plVar10 + 1;
          iVar6 = iVar6 + 1;
        } while (*(long **)(lVar8 + 0x278) != plVar10);
      }
    }
    iVar6 = 0;
LAB_014f3060:
    FUN_02c2e33c(plVar9,iVar6,0);
  }
  else {
    plVar2 = plVar10 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar8 = plVar9[0x16];
    if (lVar8 != 0) {
      plVar7 = *(long **)(lVar8 + 0x270);
      if (plVar7 != *(long **)(lVar8 + 0x278)) {
        iVar6 = 0;
        do {
          plVar1 = (long *)PTR_DAT_04379c88;
          if (*plVar7 != 0) {
            plVar1 = (long *)(*plVar7 + 0x58);
          }
          if (*plVar1 == 0x76a2394c3eb77584) goto LAB_014f2aa0;
          plVar7 = plVar7 + 1;
          iVar6 = iVar6 + 1;
        } while (*(long **)(lVar8 + 0x278) != plVar7);
      }
    }
    iVar6 = 0;
LAB_014f2aa0:
    FUN_02c2e33c(plVar9,iVar6,plVar10);
    do {
      iVar6 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  lVar11 = *(long *)(param_1 + 8);
  uVar3 = *(undefined8 *)(lVar11 + 0x1c0);
  lVar8 = *(long *)(lVar11 + 0x1c8);
  lVar12 = *(long *)(lVar11 + 0x1b8);
  *(undefined4 *)(lVar12 + 0x124) = 0;
  *(undefined2 *)(lVar12 + 0x128) = 0;
  *(undefined4 *)(lVar12 + 300) = 0;
  *(undefined4 *)(lVar12 + 0x134) = 0;
  FUN_02c33414(lVar12,uVar3);
  if (*(char *)(lVar8 + 0x7c) != '\0') {
    **(undefined2 **)(lVar8 + 0x58) = 0;
    *(undefined2 *)(lVar8 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar12,lVar8,uVar3,0,0);
  FUN_0283ce7c(lVar11,param_1 + 0x88,*(undefined8 *)(lVar11 + 0x1c8),10);
  if (plVar9 == (long *)0x0) {
LAB_014f2b44:
    plVar9 = *(long **)(param_1 + 0x10);
  }
  else {
    plVar10 = plVar9 + 10;
    do {
      iVar6 = (int)*plVar10 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *(int *)plVar10 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 != 0) goto LAB_014f2b44;
    (**(code **)(*plVar9 + 0x10))(plVar9);
    plVar9 = *(long **)(param_1 + 0x10);
  }
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar10 = *(long **)(*(long *)(param_1 + 8) + 0x1c0);
  if (plVar10 == (long *)0x0) {
    lVar8 = plVar9[0x16];
    if (lVar8 != 0) {
      plVar10 = *(long **)(lVar8 + 0x270);
      if (plVar10 != *(long **)(lVar8 + 0x278)) {
        iVar6 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar10 != 0) {
            plVar2 = (long *)(*plVar10 + 0x58);
          }
          if (*plVar2 == 0x4bbaddd75fbdd5c4) goto LAB_014f30d4;
          plVar10 = plVar10 + 1;
          iVar6 = iVar6 + 1;
        } while (*(long **)(lVar8 + 0x278) != plVar10);
      }
    }
    iVar6 = 0;
LAB_014f30d4:
    FUN_02c2e33c(plVar9,iVar6,0);
  }
  else {
    plVar2 = plVar10 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar8 = plVar9[0x16];
    if (lVar8 != 0) {
      plVar7 = *(long **)(lVar8 + 0x270);
      if (plVar7 != *(long **)(lVar8 + 0x278)) {
        iVar6 = 0;
        do {
          plVar1 = (long *)PTR_DAT_04379c88;
          if (*plVar7 != 0) {
            plVar1 = (long *)(*plVar7 + 0x58);
          }
          if (*plVar1 == 0x4bbaddd75fbdd5c4) goto LAB_014f2be8;
          plVar7 = plVar7 + 1;
          iVar6 = iVar6 + 1;
        } while (*(long **)(lVar8 + 0x278) != plVar7);
      }
    }
    iVar6 = 0;
LAB_014f2be8:
    FUN_02c2e33c(plVar9,iVar6,plVar10);
    do {
      iVar6 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  lVar11 = *(long *)(param_1 + 8);
  uVar3 = *(undefined8 *)(lVar11 + 0x1c0);
  lVar8 = *(long *)(lVar11 + 0x1c8);
  lVar12 = *(long *)(lVar11 + 0x1b8);
  *(undefined4 *)(lVar12 + 0x124) = 0;
  *(undefined2 *)(lVar12 + 0x128) = 0;
  *(undefined4 *)(lVar12 + 300) = 0;
  *(undefined4 *)(lVar12 + 0x134) = 0;
  FUN_02c33414(lVar12,uVar3);
  if (*(char *)(lVar8 + 0x7c) != '\0') {
    **(undefined2 **)(lVar8 + 0x58) = 0;
    *(undefined2 *)(lVar8 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar12,lVar8,uVar3,0,0);
  FUN_0283ce7c(lVar11,param_1 + 0xa8,*(undefined8 *)(lVar11 + 0x1c8),10);
  if (plVar9 == (long *)0x0) {
LAB_014f2c8c:
    plVar9 = *(long **)(param_1 + 0x10);
  }
  else {
    plVar10 = plVar9 + 10;
    do {
      iVar6 = (int)*plVar10 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *(int *)plVar10 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 != 0) goto LAB_014f2c8c;
    (**(code **)(*plVar9 + 0x10))(plVar9);
    plVar9 = *(long **)(param_1 + 0x10);
  }
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar10 = *(long **)(*(long *)(param_1 + 8) + 0x1c0);
  if (plVar10 == (long *)0x0) {
    lVar8 = plVar9[0x16];
    if (lVar8 != 0) {
      plVar10 = *(long **)(lVar8 + 0x270);
      if (plVar10 != *(long **)(lVar8 + 0x278)) {
        iVar6 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar10 != 0) {
            plVar2 = (long *)(*plVar10 + 0x58);
          }
          if (*plVar2 == 0xf0eb1825c883540) goto LAB_014f3148;
          plVar10 = plVar10 + 1;
          iVar6 = iVar6 + 1;
        } while (*(long **)(lVar8 + 0x278) != plVar10);
      }
    }
    iVar6 = 0;
LAB_014f3148:
    FUN_02c2e33c(plVar9,iVar6,0);
  }
  else {
    plVar2 = plVar10 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar8 = plVar9[0x16];
    if (lVar8 != 0) {
      plVar7 = *(long **)(lVar8 + 0x270);
      if (plVar7 != *(long **)(lVar8 + 0x278)) {
        iVar6 = 0;
        do {
          plVar1 = (long *)PTR_DAT_04379c88;
          if (*plVar7 != 0) {
            plVar1 = (long *)(*plVar7 + 0x58);
          }
          if (*plVar1 == 0xf0eb1825c883540) goto LAB_014f2d30;
          plVar7 = plVar7 + 1;
          iVar6 = iVar6 + 1;
        } while (*(long **)(lVar8 + 0x278) != plVar7);
      }
    }
    iVar6 = 0;
LAB_014f2d30:
    FUN_02c2e33c(plVar9,iVar6,plVar10);
    do {
      iVar6 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  lVar11 = *(long *)(param_1 + 8);
  uVar3 = *(undefined8 *)(lVar11 + 0x1c0);
  lVar8 = *(long *)(lVar11 + 0x1c8);
  lVar12 = *(long *)(lVar11 + 0x1b8);
  *(undefined4 *)(lVar12 + 0x124) = 0;
  *(undefined2 *)(lVar12 + 0x128) = 0;
  *(undefined4 *)(lVar12 + 300) = 0;
  *(undefined4 *)(lVar12 + 0x134) = 0;
  FUN_02c33414(lVar12,uVar3);
  if (*(char *)(lVar8 + 0x7c) != '\0') {
    **(undefined2 **)(lVar8 + 0x58) = 0;
    *(undefined2 *)(lVar8 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar12,lVar8,uVar3,0,0);
  FUN_0283ce7c(lVar11,param_1 + 200,*(undefined8 *)(lVar11 + 0x1c8),10);
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 10;
    do {
      iVar6 = (int)*plVar10 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *(int *)plVar10 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      plVar9 = *(long **)(param_1 + 0x10);
      goto joined_r0x014f2dd8;
    }
  }
  plVar9 = *(long **)(param_1 + 0x10);
joined_r0x014f2dd8:
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar10 = *(long **)(*(long *)(param_1 + 8) + 0x1c0);
  if (plVar10 == (long *)0x0) {
    lVar8 = plVar9[0x16];
    if (lVar8 != 0) {
      plVar10 = *(long **)(lVar8 + 0x270);
      if (plVar10 != *(long **)(lVar8 + 0x278)) {
        iVar6 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar10 != 0) {
            plVar2 = (long *)(*plVar10 + 0x58);
          }
          if (*plVar2 == -0x23b85b727e5d4c77) goto LAB_014f31bc;
          plVar10 = plVar10 + 1;
          iVar6 = iVar6 + 1;
        } while (*(long **)(lVar8 + 0x278) != plVar10);
      }
    }
    iVar6 = 0;
LAB_014f31bc:
    FUN_02c2e33c(plVar9,iVar6,0);
  }
  else {
    plVar2 = plVar10 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar8 = plVar9[0x16];
    if (lVar8 != 0) {
      plVar7 = *(long **)(lVar8 + 0x270);
      if (plVar7 != *(long **)(lVar8 + 0x278)) {
        iVar6 = 0;
        do {
          plVar1 = (long *)PTR_DAT_04379c88;
          if (*plVar7 != 0) {
            plVar1 = (long *)(*plVar7 + 0x58);
          }
          if (*plVar1 == -0x23b85b727e5d4c77) goto LAB_014f2e78;
          plVar7 = plVar7 + 1;
          iVar6 = iVar6 + 1;
        } while (*(long **)(lVar8 + 0x278) != plVar7);
      }
    }
    iVar6 = 0;
LAB_014f2e78:
    FUN_02c2e33c(plVar9,iVar6,plVar10);
    do {
      iVar6 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  lVar11 = *(long *)(param_1 + 8);
  uVar3 = *(undefined8 *)(lVar11 + 0x1c0);
  lVar8 = *(long *)(lVar11 + 0x1c8);
  lVar12 = *(long *)(lVar11 + 0x1b8);
  *(undefined4 *)(lVar12 + 0x124) = 0;
  *(undefined2 *)(lVar12 + 0x128) = 0;
  *(undefined4 *)(lVar12 + 300) = 0;
  *(undefined4 *)(lVar12 + 0x134) = 0;
  FUN_02c33414(lVar12,uVar3);
  if (*(char *)(lVar8 + 0x7c) != '\0') {
    **(undefined2 **)(lVar8 + 0x58) = 0;
    *(undefined2 *)(lVar8 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar12,lVar8,uVar3,0,0);
  FUN_0283ce7c(lVar11,param_1 + 0xe8,*(undefined8 *)(lVar11 + 0x1c8),10);
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 10;
    do {
      iVar6 = (int)*plVar10 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *(int *)plVar10 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x014f2ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x10))(plVar9);
      return;
    }
  }
  return;
}


