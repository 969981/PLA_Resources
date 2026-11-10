/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0119f200; name: FUN_0119f200
 */


void FUN_0119f200(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *local_38;
  
  plVar9 = *(long **)(param_1 + 0x2c8);
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
  FUN_00d58a08(&local_38);
  plVar10 = (long *)plVar9[0x38];
  if (plVar10 == (long *)0x0) {
    lVar8 = local_38[0x16];
    if (lVar8 != 0) {
      plVar10 = *(long **)(lVar8 + 0x270);
      if (plVar10 != *(long **)(lVar8 + 0x278)) {
        iVar6 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar10 != 0) {
            plVar2 = (long *)(*plVar10 + 0x58);
          }
          if (*plVar2 == param_3) goto LAB_0119f40c;
          plVar10 = plVar10 + 1;
          iVar6 = iVar6 + 1;
        } while (*(long **)(lVar8 + 0x278) != plVar10);
      }
    }
    iVar6 = 0;
LAB_0119f40c:
    FUN_02c2e33c(local_38,iVar6,0);
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
    lVar8 = local_38[0x16];
    if (lVar8 != 0) {
      plVar7 = *(long **)(lVar8 + 0x270);
      if (plVar7 != *(long **)(lVar8 + 0x278)) {
        iVar6 = 0;
        do {
          plVar1 = (long *)PTR_DAT_04379c88;
          if (*plVar7 != 0) {
            plVar1 = (long *)(*plVar7 + 0x58);
          }
          if (*plVar1 == param_3) goto LAB_0119f2b4;
          plVar7 = plVar7 + 1;
          iVar6 = iVar6 + 1;
        } while (*(long **)(lVar8 + 0x278) != plVar7);
      }
    }
    iVar6 = 0;
LAB_0119f2b4:
    FUN_02c2e33c(local_38,iVar6,plVar10);
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
  lVar8 = plVar9[0x38];
  lVar3 = plVar9[0x39];
  lVar11 = plVar9[0x37];
  *(undefined4 *)(lVar11 + 0x124) = 0;
  *(undefined2 *)(lVar11 + 0x128) = 0;
  *(undefined4 *)(lVar11 + 300) = 0;
  *(undefined4 *)(lVar11 + 0x134) = 0;
  FUN_02c33414(lVar11,lVar8);
  if (*(char *)(lVar3 + 0x7c) != '\0') {
    **(undefined2 **)(lVar3 + 0x58) = 0;
    *(undefined2 *)(lVar3 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar11,lVar3,lVar8,0,0);
  FUN_0283ce7c(plVar9,param_4,plVar9[0x39],10);
  if (local_38 != (long *)0x0) {
    plVar10 = local_38 + 10;
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
      (**(code **)(*local_38 + 0x10))();
    }
  }
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
  }
  return;
}


