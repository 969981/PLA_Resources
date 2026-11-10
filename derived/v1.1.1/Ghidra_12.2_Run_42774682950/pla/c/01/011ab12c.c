/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011ab12c; name: FUN_011ab12c
 */


void FUN_011ab12c(long param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *local_48;
  
  plVar10 = *(long **)(param_1 + 0x2c8);
  if (plVar10 != (long *)0x0) {
    plVar11 = plVar10 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_00d37c90(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb0),0);
  plVar11 = (long *)local_48[0xd];
  if (plVar11 != (long *)0x0) {
    plVar12 = plVar11 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (local_48 != (long *)0x0) {
    lVar8 = local_48[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
      plVar12 = (long *)plVar10[0x38];
      goto joined_r0x011ab350;
    }
  }
  plVar12 = (long *)plVar10[0x38];
joined_r0x011ab350:
  if (plVar12 == (long *)0x0) {
    lVar8 = plVar11[0x16];
    if (lVar8 != 0) {
      plVar12 = *(long **)(lVar8 + 0x270);
      if (plVar12 != *(long **)(lVar8 + 0x278)) {
        iVar7 = 0;
        do {
          plVar3 = (long *)PTR_DAT_04379c88;
          if (*plVar12 != 0) {
            plVar3 = (long *)(*plVar12 + 0x58);
          }
          if (*plVar3 == param_2) goto LAB_011ab3a8;
          plVar12 = plVar12 + 1;
          iVar7 = iVar7 + 1;
        } while (*(long **)(lVar8 + 0x278) != plVar12);
      }
    }
    iVar7 = 0;
LAB_011ab3a8:
    FUN_02c2e33c(plVar11,iVar7,0);
  }
  else {
    plVar3 = plVar12 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar8 = plVar11[0x16];
    if (lVar8 != 0) {
      plVar9 = *(long **)(lVar8 + 0x270);
      if (plVar9 != *(long **)(lVar8 + 0x278)) {
        iVar7 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar9 != 0) {
            plVar2 = (long *)(*plVar9 + 0x58);
          }
          if (*plVar2 == param_2) goto LAB_011ab230;
          plVar9 = plVar9 + 1;
          iVar7 = iVar7 + 1;
        } while (*(long **)(lVar8 + 0x278) != plVar9);
      }
    }
    iVar7 = 0;
LAB_011ab230:
    FUN_02c2e33c(plVar11,iVar7,plVar12);
    do {
      iVar7 = (int)*plVar3 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(int *)plVar3 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
  lVar8 = plVar10[0x38];
  lVar4 = plVar10[0x39];
  lVar13 = plVar10[0x37];
  *(undefined4 *)(lVar13 + 0x124) = 0;
  *(undefined2 *)(lVar13 + 0x128) = 0;
  *(undefined4 *)(lVar13 + 300) = 0;
  *(undefined4 *)(lVar13 + 0x134) = 0;
  FUN_02c33414(lVar13,lVar8);
  if (*(char *)(lVar4 + 0x7c) != '\0') {
    **(undefined2 **)(lVar4 + 0x58) = 0;
    *(undefined2 *)(lVar4 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar13,lVar4,lVar8,0,0);
  FUN_0283ce7c(plVar10,param_3,plVar10[0x39],10);
  if (plVar11 != (long *)0x0) {
    plVar12 = plVar11 + 10;
    do {
      iVar7 = (int)*plVar12 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *(int *)plVar12 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  plVar11 = plVar10 + 10;
  do {
    iVar7 = (int)*plVar11 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar6) {
      *(int *)plVar11 = iVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  return;
}


